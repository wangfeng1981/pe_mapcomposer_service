/***************************************************************************
  qgsogrdbsourceselect.cpp - QgsOgrDbSourceSelect

 ---------------------
 begin                : 5.9.2017
 copyright            : (C) 2017 by Alessandro Pasotti
 email                : apasotti at boundlessgeo dot com
 based on work by     : (C) 2008 by Sandro Furieri for spatialite source sel.
 email                : a.furieri@lqt.it
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgsogrdbsourceselect.h"
///@cond PRIVATE

#include "qgsogrdbconnection.h"
#include "qgsogrdataitems.h"
#include "qgsvectorlayer.h"
#include "qgsquerybuilder.h"
#include "qgssettings.h"
#include "qgsproject.h"
#include "qgsgui.h"

#include <QMessageBox>

QgsOgrDbSourceSelect::QgsOgrDbSourceSelect( const QString &theSettingsKey, const QString &theName,
    const QString &theExtensions, QWidget *parent, Qt::WindowFlags fl, QgsProviderRegistry::WidgetMode theWidgetMode )
  : QgsAbstractDataSourceWidget( parent, fl, theWidgetMode )
  , mOgrDriverName( theSettingsKey )
  , mName( theName )
  , mExtension( theExtensions )
{
  setupUi( this );
  QgsGui::instance()->enableAutoGeometryRestore( this );

  connect( btnConnect, &QPushButton::clicked, this, &QgsOgrDbSourceSelect::btnConnect_clicked );
  connect( btnNew, &QPushButton::clicked, this, &QgsOgrDbSourceSelect::btnNew_clicked );
  connect( btnDelete, &QPushButton::clicked, this, &QgsOgrDbSourceSelect::btnDelete_clicked );
  connect( mSearchGroupBox, &QGroupBox::toggled, this, &QgsOgrDbSourceSelect::mSearchGroupBox_toggled );
  connect( mSearchTableEdit, &QLineEdit::textChanged, this, &QgsOgrDbSourceSelect::mSearchTableEdit_textChanged );
  connect( mSearchColumnComboBox, &QComboBox::currentTextChanged, this, &QgsOgrDbSourceSelect::mSearchColumnComboBox_currentIndexChanged );
  connect( mSearchModeComboBox, &QComboBox::currentTextChanged, this, &QgsOgrDbSourceSelect::mSearchModeComboBox_currentIndexChanged );
  connect( cbxAllowGeometrylessTables, &QCheckBox::stateChanged, this, &QgsOgrDbSourceSelect::cbxAllowGeometrylessTables_stateChanged );
  connect( cmbConnections, static_cast<void ( QComboBox::* )( int )>( &QComboBox::activated ), this, &QgsOgrDbSourceSelect::cmbConnections_activated );
  connect( mTablesTreeView, &QTreeView::clicked, this, &QgsOgrDbSourceSelect::mTablesTreeView_clicked );
  connect( mTablesTreeView, &QTreeView::doubleClicked, this, &QgsOgrDbSourceSelect::mTablesTreeView_doubleClicked );
  setupButtons( buttonBox );
  connect( buttonBox, &QDialogButtonBox::helpRequested, this, &QgsOgrDbSourceSelect::showHelp );

  QgsSettings settings;
  mHoldDialogOpen->setChecked( settings.value( QStringLiteral( "ogr/%1SourceSelect/HoldDialogOpen" ).arg( ogrDriverName( ) ), false, QgsSettings::Section::Providers ).toBool() );

  setWindowTitle( tr( "Add %1 Layer(s)" ).arg( name( ) ) );
  btnEdit->hide();  // hide the edit button
  btnSave->hide();
  btnLoad->hide();

  mBuildQueryButton = new QPushButton( tr( "&Set Filter" ) );
  connect( mBuildQueryButton, &QAbstractButton::clicked, this, &QgsOgrDbSourceSelect::buildQuery );
  mBuildQueryButton->setEnabled( false );

  if ( widgetMode() != QgsProviderRegistry::WidgetMode::None )
  {
    mHoldDialogOpen->hide();
  }

  buttonBox->addButton( mBuildQueryButton, QDialogButtonBox::ActionRole );

  populateConnectionList();

  mSearchModeComboBox->addItem( tr( "Wildcard" ) );
  mSearchModeComboBox->addItem( tr( "RegExp" ) );

  mSearchColumnComboBox->addItem( tr( "All" ) );
  mSearchColumnComboBox->addItem( tr( "Table" ) );
  mSearchColumnComboBox->addItem( tr( "Type" ) );
  mSearchColumnComboBox->addItem( tr( "Geometry column" ) );
  mSearchColumnComboBox->addItem( tr( "Sql" ) );

  mProxyModel.setParent( this );
  mProxyModel.setFilterKeyColumn( -1 );
  mProxyModel.setFilterCaseSensitivity( Qt::CaseInsensitive );
  mProxyModel.setDynamicSortFilter( true );
  mProxyModel.setSourceModel( &mTableModel );
  mTablesTreeView->setModel( &mProxyModel );
  mTablesTreeView->setSortingEnabled( true );

  connect( mTablesTreeView->selectionModel(), &QItemSelectionModel::selectionChanged, this, &QgsOgrDbSourceSelect::treeWidgetSelectionChanged );

  //for Qt < 4.3.2, passing -1 to include all model columns
  //in search does not seem to work
  mSearchColumnComboBox->setCurrentIndex( 1 );

  //hide the search options by default
  //they will be shown when the user ticks
  //the search options group box
  mSearchLabel->setVisible( false );
  mSearchColumnComboBox->setVisible( false );
  mSearchColumnsLabel->setVisible( false );
  mSearchModeComboBox->setVisible( false );
  mSearchModeLabel->setVisible( false );
  mSearchTableEdit->setVisible( false );

  cbxAllowGeometrylessTables->setDisabled( true );
}

QgsOgrDbSourceSelect::~QgsOgrDbSourceSelect()
{
  QgsSettings settings;
  settings.setValue( QStringLiteral( "ogr/%1SourceSelect/HoldDialogOpen" ).arg( ogrDriverName( ) ), mHoldDialogOpen->isChecked(), QgsSettings::Section::Providers );
}


// Remember which database is selected
void QgsOgrDbSourceSelect::cmbConnections_activated( int )
{
  dbChanged();
}

void QgsOgrDbSourceSelect::buildQuery()
{
  setSql( mTablesTreeView->currentIndex() );
}


void QgsOgrDbSourceSelect::cbxAllowGeometrylessTables_stateChanged( int )
{
  btnConnect_clicked();
}

void QgsOgrDbSourceSelect::mTablesTreeView_clicked( const QModelIndex &index )
{
  mBuildQueryButton->setEnabled( index.parent().isValid() && mTablesTreeView->currentIndex().data( Qt::UserRole + 2 ) != QLatin1String( "Raster" ) );
}

void QgsOgrDbSourceSelect::mTablesTreeView_doubleClicked( const QModelIndex &index )
{
  setSql( index );
}

void QgsOgrDbSourceSelect::mSearchGroupBox_toggled( bool checked )
{
  if ( mSearchTableEdit->text().isEmpty() )
    return;

  mSearchTableEdit_textChanged( checked ? mSearchTableEdit->text() : QString() );
}

void QgsOgrDbSourceSelect::mSearchTableEdit_textChanged( const QString &text )
{
  if ( mSearchModeComboBox->currentText() == tr( "Wildcard" ) )
  {
    mProxyModel._setFilterWildcard( text );
  }
  else if ( mSearchModeComboBox->currentText() == tr( "RegExp" ) )
  {
    mProxyModel._setFilterRegExp( text );
  }
}

void QgsOgrDbSourceSelect::mSearchColumnComboBox_currentIndexChanged( const QString &text )
{
  if ( text == tr( "All" ) )
  {
    mProxyModel.setFilterKeyColumn( -1 );
  }
  else if ( text == tr( "Table" ) )
  {
    mProxyModel.setFilterKeyColumn( 0 );
  }
  else if ( text == tr( "Type" ) )
  {
    mProxyModel.setFilterKeyColumn( 1 );
  }
  else if ( text == tr( "Geometry column" ) )
  {
    mProxyModel.setFilterKeyColumn( 2 );
  }
  else if ( text == tr( "Sql" ) )
  {
    mProxyModel.setFilterKeyColumn( 3 );
  }
}

void QgsOgrDbSourceSelect::mSearchModeComboBox_currentIndexChanged( const QString &text )
{
  Q_UNUSED( text )
  mSearchTableEdit_textChanged( mSearchTableEdit->text() );
}

void QgsOgrDbSourceSelect::populateConnectionList()
{
  cmbConnections->clear();
  for ( const QString &name : QgsOgrDbConnection::connectionList( ogrDriverName( ) ) )
  {
    // retrieving the SQLite DB name and full path
    QString text = name + tr( "@" ) + QgsOgrDbConnection( name, ogrDriverName( ) ).path();
    cmbConnections->addItem( text );
  }

  btnConnect->setDisabled( cmbConnections->count() == 0 );
  btnEdit->setDisabled( cmbConnections->count() == 0 );
  btnDelete->setDisabled( cmbConnections->count() == 0 );
  btnSave->setDisabled( cmbConnections->count() == 0 );
  cmbConnections->setDisabled( cmbConnections->count() == 0 );

  setConnectionListPosition();
}

void QgsOgrDbSourceSelect::btnNew_clicked()
{
  if ( QgsOgrDataCollectionItem::createConnection( name(), extension(), ogrDriverName() ) )
  {
    emit connectionsChanged();
  }
}


QString QgsOgrDbSourceSelect::layerURI( const QModelIndex &index )
{
  QStandardItem *item = mTableModel.itemFromIndex( index );
  QString uri( item->data().toString() );
  QString sql = mTableModel.itemFromIndex( index.sibling( index.row(), 3 ) )->text();
  if ( ! sql.isEmpty() )
  {
    uri += QStringLiteral( "|subset=%1" ).arg( sql );
  }
  return uri;
}

// Slot for deleting an existing connection
void QgsOgrDbSourceSelect::btnDelete_clicked()
{
  QString subKey = cmbConnections->currentText();
  int idx = subKey.indexOf( '@' );
  if ( idx > 0 )
    subKey.truncate( idx );

  QString msg = tr( "Are you sure you want to remove the %1 connection and all associated settings?" ).arg( subKey );
  QMessageBox::StandardButton result =
    QMessageBox::question( this, tr( "Confirm Delete" ), msg, QMessageBox::Yes | QMessageBox::No );
  if ( result != QMessageBox::Yes )
    return;

  QgsOgrDbConnection::deleteConnection( subKey, ogrDriverName() );
  populateConnectionList();
  emit connectionsChanged();
}


void QgsOgrDbSourceSelect::addButtonClicked()
{

  typedef QPair<QString, QString> LayerInfo;
  QList<LayerInfo> selectedVectors;
  QList<LayerInfo> selectedRasters;

  typedef QMap < int, bool >schemaInfo;
  QMap < QString, schemaInfo > dbInfo;

  QItemSelection selection = mTablesTreeView->selectionModel()->selection();
  QModelIndexList selectedIndices = selection.indexes();
  QStandardItem *currentItem = nullptr;

  QModelIndexList::const_iterator selected_it = selectedIndices.constBegin();
  for ( ; selected_it != selectedIndices.constEnd(); ++selected_it )
  {
    if ( !selected_it->parent().isValid() )
    {
      //top level items only contain the schema names
      continue;
    }
    currentItem = mTableModel.itemFromIndex( mProxyModel.mapToSource( *selected_it ) );
    if ( !currentItem )
    {
      continue;
    }

    QString currentSchemaName = currentItem->parent()->text();

    int currentRow = currentItem->row();
    if ( !dbInfo[currentSchemaName].contains( currentRow ) )
    {
      dbInfo[currentSchemaName][currentRow] = true;
      if ( currentItem->data( Qt::UserRole + 2 ).toString().contains( QStringLiteral( "Raster" ), Qt::CaseInsensitive ) )
      {
        selectedRasters << LayerInfo( layerURI( mProxyModel.mapToSource( *selected_it ) ), currentItem->data( Qt::DisplayRole ).toString() );
      }
      else
      {
        selectedVectors << LayerInfo( layerURI( mProxyModel.mapToSource( *selected_it ) ), currentItem->data( Qt::DisplayRole ).toString() );
      }
    }
  }

  if ( selectedVectors.empty() && selectedRasters.empty() )
  {
    QMessageBox::information( this, tr( "Select Table" ), tr( "You must select a table in order to add a Layer." ) );
  }
  else
  {
    // Use OGR
    for ( const LayerInfo &info : qgis::as_const( selectedVectors ) )
    {
      emit addVectorLayer( info.first, info.second );
    }
    for ( const LayerInfo &info : qgis::as_const( selectedRasters ) )
    {
      emit addRasterLayer( info.first, info.second, QStringLiteral( "gdal" ) );
    }
    if ( widgetMode() == QgsProviderRegistry::WidgetMode::None && ! mHoldDialogOpen->isChecked() )
    {
      accept();
    }
  }
}

void QgsOgrDbSourceSelect::btnConnect_clicked()
{
  cbxAllowGeometrylessTables->setEnabled( false );

  QString subKey = cmbConnections->currentText();
  int idx = subKey.indexOf( '@' );
  if ( idx > 0 )
    subKey.truncate( idx );

  QgsOgrDbConnection conn( subKey, ogrDriverName() );

  mPath = conn.path();

  try
  {
    const QList<QgsOgrDbLayerInfo *> layers = QgsOgrLayerItem::subLayers( mPath, ogrDriverName() );

    QModelIndex rootItemIndex = mTableModel.indexFromItem( mTableModel.invisibleRootItem() );
    mTableModel.removeRows( 0, mTableModel.rowCount( rootItemIndex ), rootItemIndex );

    // populate the table list
    // get the list of suitable tables and columns and populate the UI

    mTableModel.setPath( mPath );


    for ( const QgsOgrDbLayerInfo *table : layers )
    {
      if ( cbxAllowGeometrylessTables->isChecked() || table->geometryType() != QLatin1String( "None" ) )
      {
        mTableModel.addTableEntry( table->layerType(), table->name(), table->uri(), table->geometryColumn(), table->geometryType(), QString() );
      }
    }

    mTablesTreeView->sortByColumn( 0, Qt::AscendingOrder );

    //expand all the toplevel items
    int numTopLevelItems = mTableModel.invisibleRootItem()->rowCount();
    for ( int i = 0; i < numTopLevelItems; ++i )
    {
      mTablesTreeView->expand( mProxyModel.mapFromSource( mTableModel.indexFromItem( mTableModel.invisibleRootItem()->child( i ) ) ) );
    }
    mTablesTreeView->resizeColumnToContents( 0 );
    mTablesTreeView->resizeColumnToContents( 1 );

    cbxAllowGeometrylessTables->setEnabled( true );

    // Store selected connection
    QgsOgrDbConnection::setSelectedConnection( subKey, ogrDriverName() );
    qDeleteAll( layers );
  }
  catch ( QgsOgrLayerNotValidException &ex )
  {
    pushMessage( tr( "Error opening layer" ), ex.what(), Qgis::MessageLevel::Critical );
  }
}


void QgsOgrDbSourceSelect::setSql( const QModelIndex &index )
{
  QModelIndex idx = mProxyModel.mapToSource( index );
  QString tableName = mTableModel.itemFromIndex( idx.sibling( idx.row(), 0 ) )->text();

  QgsVectorLayer::LayerOptions options { QgsProject::instance()->transformContext() };
  std::unique_ptr<QgsVectorLayer> vlayer = qgis::make_unique<QgsVectorLayer>( layerURI( idx ), tableName, QStringLiteral( "ogr" ), options );

  if ( !vlayer->isValid() )
  {
    return;
  }

  // create a query builder object
  std::unique_ptr<QgsQueryBuilder> gb( new QgsQueryBuilder( vlayer.get(), this ) );

  if ( gb->exec() )
  {
    mTableModel.setSql( mProxyModel.mapToSource( index ), gb->sql() );
  }
}


void QgsOgrDbSourceSelect::dbChanged()
{
  // Remember which database was selected.
  QgsSettings settings;
  settings.setValue( QStringLiteral( "GeoPackage/connections/selected" ), cmbConnections->currentText() );
}

void QgsOgrDbSourceSelect::refresh()
{
  populateConnectionList();
}

void QgsOgrDbSourceSelect::setConnectionListPosition()
{
  QString toSelect = QgsOgrDbConnection::selectedConnection( ogrDriverName() );
  toSelect += '@' + QgsOgrDbConnection( toSelect, ogrDriverName() ).path();

  cmbConnections->setCurrentIndex( cmbConnections->findText( toSelect ) );

  if ( cmbConnections->currentIndex() < 0 )
  {
    if ( toSelect.isNull() )
      cmbConnections->setCurrentIndex( 0 );
    else
      cmbConnections->setCurrentIndex( cmbConnections->count() - 1 );
  }
}

void QgsOgrDbSourceSelect::setSearchExpression( const QString &regexp )
{
  Q_UNUSED( regexp )
}

void QgsOgrDbSourceSelect::treeWidgetSelectionChanged( const QItemSelection &selected, const QItemSelection &deselected )
{
  Q_UNUSED( deselected )
  emit enableButtons( !selected.isEmpty() );
}

void QgsOgrDbSourceSelect::showHelp()
{
  QgsHelp::openHelp( QStringLiteral( "managing_data_source/opening_data.html#GeoPackage-layers" ) );
}

///@endcond
