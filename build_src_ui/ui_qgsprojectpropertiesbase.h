/********************************************************************************
** Form generated from reading UI file 'qgsprojectpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTPROPERTIESBASE_H
#define UI_QGSPROJECTPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscolorschemelist.h>
#include <qgsvariableeditorwidget.h>
#include "qgscodeeditorpython.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdatetimeedit.h"
#include "qgsdatumtransformtablewidget.h"
#include "qgsfilterlineedit.h"
#include "qgsopacitywidget.h"
#include "qgsprojectionselectiontreewidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectPropertiesBase
{
public:
    QGridLayout *gridLayout_21;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mProjOptsGeneral;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *titleBox;
    QGridLayout *gridLayout_26;
    QLabel *label_4;
    QLabel *textLabel1;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_14;
    QgsFilterLineEdit *mProjectHomeLineEdit;
    QToolButton *mButtonSetProjectHome;
    QLineEdit *titleEdit;
    QLabel *label_2;
    QCheckBox *mMapTileRenderingCheckBox;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *mProjectFileLineEdit;
    QToolButton *mButtonOpenProjectFolder;
    QComboBox *cbxAbsolutePath;
    QLabel *label_30;
    QSpacerItem *spacerItem;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *pbnSelectionColor;
    QLabel *label;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBox *btnGrpMeasureEllipsoid;
    QGridLayout *gridLayoutMeasureTool;
    QComboBox *mDistanceUnitsCombo;
    QLabel *label_28;
    QLabel *textLabel1_8;
    QLineEdit *leSemiMajor;
    QLabel *label_41;
    QComboBox *cmbEllipsoid;
    QLineEdit *leSemiMinor;
    QLabel *label_42;
    QLabel *label_29;
    QComboBox *mAreaUnitsCombo;
    QgsCollapsibleGroupBox *mCoordinateDisplayGroup;
    QGridLayout *gridLayout_18;
    QLabel *label_26;
    QLabel *label_25;
    QComboBox *mCoordinateDisplayComboBox;
    QFrame *mFramePrecision;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radAutomatic;
    QRadioButton *radManual;
    QgsSpinBox *spinBoxDP;
    QLabel *labelDP;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *mCustomizeBearingFormatButton;
    QSpacerItem *horizontalSpacer_8;
    QgsCollapsibleGroupBox *grpProjectScales;
    QGridLayout *gridLayout_7;
    QListWidget *lstScales;
    QVBoxLayout *verticalLayout_4;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sourceLanguageLabel;
    QComboBox *cbtsLocale;
    QPushButton *generateTsFileButton;
    QSpacerItem *verticalSpacer_5;
    QWidget *mMetadataPage;
    QVBoxLayout *verticalLayout_19;
    QWidget *mProjOptsCRS;
    QVBoxLayout *verticalLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *cbxProjectionEnabled;
    QVBoxLayout *verticalLayout_21;
    QgsProjectionSelectionTreeWidget *projectionSelector;
    QWidget *mProjTransformations;
    QVBoxLayout *verticalLayout_8;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *mDatumTransformGroupBox;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *mShowDatumTransformDialogCheckBox;
    QgsDatumTransformTableWidget *mDatumTransformTableWidget;
    QWidget *mProjOptsSymbols;
    QVBoxLayout *verticalLayout_11;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_12;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QToolButton *pbtnStyleMarker;
    QLabel *lblStyleLine;
    QLabel *label_14;
    QLabel *pixStyleFill;
    QToolButton *pbtnStyleLine;
    QLabel *pixStyleLine;
    QComboBox *cboStyleFill;
    QLabel *lblStyleColorRamp;
    QComboBox *cboStyleMarker;
    QLabel *pixStyleMarker;
    QLabel *lblStyleMarker;
    QToolButton *pbtnStyleFill;
    QLabel *lblStyleFill;
    QComboBox *cboStyleLine;
    QComboBox *cboStyleColorRamp;
    QToolButton *pbtnStyleColorRamp;
    QgsCollapsibleGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_27;
    QgsOpacityWidget *mDefaultOpacityWidget;
    QCheckBox *cbxStyleRandomColors;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbtnStyleManager;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QToolButton *mButtonCopyColors;
    QSpacerItem *verticalSpacer_12;
    QToolButton *mButtonAddColor;
    QToolButton *mButtonPasteColors;
    QToolButton *mButtonRemoveColor;
    QgsColorSchemeList *mTreeProjectColors;
    QToolButton *mButtonImportColors;
    QToolButton *mButtonExportColors;
    QWidget *mTab_DataSources;
    QFormLayout *formLayout;
    QCheckBox *mAutoTransaction;
    QCheckBox *mEvaluateDefaultValues;
    QCheckBox *mTrustProjectCheckBox;
    QgsCollapsibleGroupBox *groupBox_5;
    QGridLayout *gridLayout_19;
    QSpacerItem *horizontalSpacer_5;
    QTreeView *mLayerCapabilitiesTree;
    QPushButton *mLayerCapabilitiesToggleSelectionButton;
    QCheckBox *mShowSpatialLayersCheckBox;
    QgsFilterLineEdit *mLayerCapabilitiesTreeFilterLineEdit;
    QWidget *mTabRelations;
    QGridLayout *gridLayout_16;
    QWidget *mTab_Variables;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_7;
    QgsVariableEditorWidget *mVariableEditor;
    QWidget *mProjOptsMacros;
    QVBoxLayout *verticalLayout_15;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *grpPythonMacros;
    QVBoxLayout *verticalLayout_16;
    QgsCodeEditorPython *ptePythonMacros;
    QWidget *mProjOptsOWS;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_13;
    QgsCollapsibleGroupBox *grpOWSServiceCapabilities;
    QGridLayout *gridLayout_6;
    QLineEdit *mWMSName;
    QComboBox *mWMSContactPositionCb;
    QComboBox *mWMSAccessConstraintsCb;
    QLineEdit *mWMSContactPerson;
    QGridLayout *wmsOnlineResourceGrid;
    QLineEdit *mWMSOnlineResourceLineEdit;
    QgsPropertyOverrideButton *mWMSOnlineResourceExpressionButton;
    QLabel *label_20;
    QLineEdit *mWMSTitle;
    QComboBox *mWMSFeesCb;
    QLineEdit *mWMSContactMail;
    QTextEdit *mWMSAbstract;
    QLabel *label_11;
    QLabel *mWMSAccessConstraintsLabel;
    QLabel *label_12;
    QLineEdit *mWMSContactPhone;
    QLabel *label_10;
    QFrame *wmsWarningBox;
    QGridLayout *gridLayout_23;
    QLabel *warningLabel;
    QLineEdit *mWMSKeywordList;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *mWMSKeywordListLabel;
    QLabel *label_9;
    QLineEdit *mWMSContactOrganization;
    QLabel *mWMSFeesLabel;
    QLabel *mWMSOnlineResourceLabel;
    QLabel *label_6;
    QgsCollapsibleGroupBox *grpWMSCapabilities;
    QGridLayout *gridLayout_13;
    QgsCollapsibleGroupBox *mLayerRestrictionsGroupBox;
    QGridLayout *gridLayout;
    QListWidget *mLayerRestrictionsListWidget;
    QToolButton *mAddLayerRestrictionButton;
    QToolButton *mRemoveLayerRestrictionButton;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QLabel *mMaxWidthLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *mMaxHeightLineEdit;
    QLineEdit *mMaxWidthLineEdit;
    QLabel *mMaxHeightLabel;
    QLabel *label_21;
    QgsCollapsibleGroupBox *grpWMSList;
    QGridLayout *gridLayout_5;
    QToolButton *pbnWMSRemoveSRS;
    QListWidget *mWMSList;
    QPushButton *pbnWMSSetUsedSRS;
    QToolButton *pbnWMSAddSRS;
    QHBoxLayout *horizontalLayout_17;
    QLabel *mWMSMaxAtlasFeaturesLabel;
    QgsSpinBox *mWMSMaxAtlasFeaturesSpinBox;
    QCheckBox *mWmsUseLayerIDs;
    QHBoxLayout *grpWMSPrecision;
    QLabel *label_5;
    QgsSpinBox *mWMSPrecisionSpinBox;
    QHBoxLayout *mWMSDefaultMapUnitsPerMmLayout;
    QLabel *mWMSDefaultMapUnitsPerMmLabel;
    QgsCollapsibleGroupBox *grpWMSExt;
    QGridLayout *gridLayout_4;
    QLineEdit *mWMSExtMinX;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_16;
    QLineEdit *mWMSExtMinY;
    QLabel *label_18;
    QPushButton *pbnWMSExtCanvas;
    QLabel *label_19;
    QLineEdit *mWMSExtMaxY;
    QLineEdit *mWMSExtMaxX;
    QCheckBox *mAddWktGeometryCheckBox;
    QgsCollapsibleGroupBox *mWMSInspire;
    QGridLayout *gridLayout_14;
    QComboBox *mWMSInspireLanguage;
    QLabel *label_7;
    QGroupBox *mWMSInspireScenario2;
    QGridLayout *gridLayout_17;
    QDateEdit *mWMSInspireTemporalReference;
    QLabel *label_23;
    QDateEdit *mWMSInspireMetadataDate;
    QLabel *label_22;
    QGroupBox *mWMSInspireScenario1;
    QGridLayout *gridLayout_15;
    QLineEdit *mWMSInspireMetadataUrl;
    QLabel *label_8;
    QComboBox *mWMSInspireMetadataUrlType;
    QLabel *label_24;
    QCheckBox *mSegmentizeFeatureInfoGeometryCheckBox;
    QgsCollapsibleGroupBox *mWMSPrintLayoutGroupBox;
    QGridLayout *gridLayout_10;
    QListWidget *mPrintLayoutListWidget;
    QToolButton *mAddWMSPrintLayoutButton;
    QToolButton *mRemoveWMSPrintLayoutButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mWMSUrlLabel;
    QLineEdit *mWMSUrlLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mWMSImageQualityLabel;
    QgsSpinBox *mWMSImageQualitySpinBox;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_33;
    QgsSpinBox *mWMSTileBufferSpinBox;
    QgsCollapsibleGroupBox *grpWmtsCapabilities;
    QGridLayout *gridLayout_20;
    QHBoxLayout *horizontalLayout_16;
    QLabel *mWMTSMinScaleLabel;
    QgsSpinBox *mWMTSMinScaleLineEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *mWMTSUrlLabel;
    QLineEdit *mWMTSUrlLineEdit;
    QHBoxLayout *horizontalLayout_17a;
    QVBoxLayout *vlWmtsLayers;
    QLabel *label_31;
    QTreeWidget *twWmtsLayers;
    QVBoxLayout *vlWmtsGrids;
    QLabel *label_32;
    QTreeWidget *twWmtsGrids;
    QgsCollapsibleGroupBox *grpWFSCapabilities;
    QGridLayout *gridLayout_8;
    QTableWidget *twWFSLayers;
    QPushButton *pbnWFSLayersDeselectAll;
    QPushButton *pbnWFSLayersSelectAll;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mWFSUrlLabel;
    QLineEdit *mWFSUrlLineEdit;
    QgsCollapsibleGroupBox *grpWCSCapabilities;
    QGridLayout *gridLayout_9;
    QPushButton *pbnWCSLayersDeselectAll;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mWCSUrlLabel;
    QLineEdit *mWCSUrlLineEdit;
    QPushButton *pbnWCSLayersSelectAll;
    QTableWidget *twWCSLayers;
    QgsCollapsibleGroupBox *mOWSCheckerGroupBox;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pbnLaunchOWSChecker;
    QSpacerItem *horizontalSpacer_7;
    QTextEdit *teOWSChecker;
    QSpacerItem *verticalSpacer_6;
    QWidget *mTemporalOptions;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *mTemporalOptionsGroup;
    QGridLayout *gridLayout_22;
    QgsDateTimeEdit *mStartDateTimeEdit;
    QLabel *label_35;
    QPushButton *mCalculateFromLayerButton;
    QLabel *label_36;
    QgsDateTimeEdit *mEndDateTimeEdit;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
        if (QgsProjectPropertiesBase->objectName().isEmpty())
            QgsProjectPropertiesBase->setObjectName(QStringLiteral("QgsProjectPropertiesBase"));
        QgsProjectPropertiesBase->resize(857, 730);
        QgsProjectPropertiesBase->setMinimumSize(QSize(700, 0));
        gridLayout_21 = new QGridLayout(QgsProjectPropertiesBase);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        mOptionsSplitter = new QSplitter(QgsProjectPropertiesBase);
        mOptionsSplitter->setObjectName(QStringLiteral("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QStringLiteral("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/transformation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/attributes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/relation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/propertyicons/overlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon10);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QStringLiteral("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mProjOptsGeneral = new QWidget();
        mProjOptsGeneral->setObjectName(QStringLiteral("mProjOptsGeneral"));
        verticalLayout_6 = new QVBoxLayout(mProjOptsGeneral);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mProjOptsGeneral);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 671, 865));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        titleBox->setObjectName(QStringLiteral("titleBox"));
        titleBox->setProperty("syncGroup", QVariant(QStringLiteral("projgeneral")));
        gridLayout_26 = new QGridLayout(titleBox);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        label_4 = new QLabel(titleBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_4, 0, 0, 1, 1);

        textLabel1 = new QLabel(titleBox);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(textLabel1, 3, 0, 1, 1);

        label_3 = new QLabel(titleBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_3, 4, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        mProjectHomeLineEdit = new QgsFilterLineEdit(titleBox);
        mProjectHomeLineEdit->setObjectName(QStringLiteral("mProjectHomeLineEdit"));
        mProjectHomeLineEdit->setReadOnly(false);
        mProjectHomeLineEdit->setClearButtonEnabled(false);

        horizontalLayout_14->addWidget(mProjectHomeLineEdit);

        mButtonSetProjectHome = new QToolButton(titleBox);
        mButtonSetProjectHome->setObjectName(QStringLiteral("mButtonSetProjectHome"));
        mButtonSetProjectHome->setAutoRaise(false);

        horizontalLayout_14->addWidget(mButtonSetProjectHome);


        gridLayout_26->addLayout(horizontalLayout_14, 1, 1, 1, 3);

        titleEdit = new QLineEdit(titleBox);
        titleEdit->setObjectName(QStringLiteral("titleEdit"));

        gridLayout_26->addWidget(titleEdit, 2, 1, 1, 3);

        label_2 = new QLabel(titleBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_2, 2, 0, 1, 1);

        mMapTileRenderingCheckBox = new QCheckBox(titleBox);
        mMapTileRenderingCheckBox->setObjectName(QStringLiteral("mMapTileRenderingCheckBox"));

        gridLayout_26->addWidget(mMapTileRenderingCheckBox, 5, 0, 1, 4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mProjectFileLineEdit = new QLineEdit(titleBox);
        mProjectFileLineEdit->setObjectName(QStringLiteral("mProjectFileLineEdit"));
        mProjectFileLineEdit->setReadOnly(true);

        horizontalLayout_13->addWidget(mProjectFileLineEdit);

        mButtonOpenProjectFolder = new QToolButton(titleBox);
        mButtonOpenProjectFolder->setObjectName(QStringLiteral("mButtonOpenProjectFolder"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonOpenProjectFolder->setIcon(icon11);
        mButtonOpenProjectFolder->setAutoRaise(true);

        horizontalLayout_13->addWidget(mButtonOpenProjectFolder);


        gridLayout_26->addLayout(horizontalLayout_13, 0, 1, 1, 3);

        cbxAbsolutePath = new QComboBox(titleBox);
        cbxAbsolutePath->setObjectName(QStringLiteral("cbxAbsolutePath"));

        gridLayout_26->addWidget(cbxAbsolutePath, 4, 1, 1, 1);

        label_30 = new QLabel(titleBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        sizePolicy2.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_30, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(spacerItem, 4, 2, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pbnSelectionColor = new QgsColorButton(titleBox);
        pbnSelectionColor->setObjectName(QStringLiteral("pbnSelectionColor"));
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnSelectionColor);

        label = new QLabel(titleBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label);

        pbnCanvasColor = new QgsColorButton(titleBox);
        pbnCanvasColor->setObjectName(QStringLiteral("pbnCanvasColor"));
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnCanvasColor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_26->addLayout(horizontalLayout_5, 3, 1, 1, 3);


        verticalLayout->addWidget(titleBox);

        btnGrpMeasureEllipsoid = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        btnGrpMeasureEllipsoid->setObjectName(QStringLiteral("btnGrpMeasureEllipsoid"));
        btnGrpMeasureEllipsoid->setProperty("syncGroup", QVariant(QStringLiteral("projgeneral")));
        gridLayoutMeasureTool = new QGridLayout(btnGrpMeasureEllipsoid);
        gridLayoutMeasureTool->setObjectName(QStringLiteral("gridLayoutMeasureTool"));
        mDistanceUnitsCombo = new QComboBox(btnGrpMeasureEllipsoid);
        mDistanceUnitsCombo->setObjectName(QStringLiteral("mDistanceUnitsCombo"));

        gridLayoutMeasureTool->addWidget(mDistanceUnitsCombo, 2, 1, 1, 4);

        label_28 = new QLabel(btnGrpMeasureEllipsoid);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayoutMeasureTool->addWidget(label_28, 2, 0, 1, 1);

        textLabel1_8 = new QLabel(btnGrpMeasureEllipsoid);
        textLabel1_8->setObjectName(QStringLiteral("textLabel1_8"));

        gridLayoutMeasureTool->addWidget(textLabel1_8, 0, 0, 1, 1);

        leSemiMajor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMajor->setObjectName(QStringLiteral("leSemiMajor"));

        gridLayoutMeasureTool->addWidget(leSemiMajor, 1, 2, 1, 1);

        label_41 = new QLabel(btnGrpMeasureEllipsoid);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayoutMeasureTool->addWidget(label_41, 1, 1, 1, 1);

        cmbEllipsoid = new QComboBox(btnGrpMeasureEllipsoid);
        cmbEllipsoid->setObjectName(QStringLiteral("cmbEllipsoid"));

        gridLayoutMeasureTool->addWidget(cmbEllipsoid, 0, 1, 1, 4);

        leSemiMinor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMinor->setObjectName(QStringLiteral("leSemiMinor"));

        gridLayoutMeasureTool->addWidget(leSemiMinor, 1, 4, 1, 1);

        label_42 = new QLabel(btnGrpMeasureEllipsoid);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayoutMeasureTool->addWidget(label_42, 1, 3, 1, 1);

        label_29 = new QLabel(btnGrpMeasureEllipsoid);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayoutMeasureTool->addWidget(label_29, 3, 0, 1, 1);

        mAreaUnitsCombo = new QComboBox(btnGrpMeasureEllipsoid);
        mAreaUnitsCombo->setObjectName(QStringLiteral("mAreaUnitsCombo"));

        gridLayoutMeasureTool->addWidget(mAreaUnitsCombo, 3, 1, 1, 4);


        verticalLayout->addWidget(btnGrpMeasureEllipsoid);

        mCoordinateDisplayGroup = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mCoordinateDisplayGroup->setObjectName(QStringLiteral("mCoordinateDisplayGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mCoordinateDisplayGroup->sizePolicy().hasHeightForWidth());
        mCoordinateDisplayGroup->setSizePolicy(sizePolicy3);
        mCoordinateDisplayGroup->setProperty("syncGroup", QVariant(QStringLiteral("projgeneral")));
        gridLayout_18 = new QGridLayout(mCoordinateDisplayGroup);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        label_26 = new QLabel(mCoordinateDisplayGroup);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_18->addWidget(label_26, 1, 0, 1, 1);

        label_25 = new QLabel(mCoordinateDisplayGroup);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_18->addWidget(label_25, 0, 0, 1, 1);

        mCoordinateDisplayComboBox = new QComboBox(mCoordinateDisplayGroup);
        mCoordinateDisplayComboBox->setObjectName(QStringLiteral("mCoordinateDisplayComboBox"));

        gridLayout_18->addWidget(mCoordinateDisplayComboBox, 0, 1, 1, 1);

        mFramePrecision = new QFrame(mCoordinateDisplayGroup);
        mFramePrecision->setObjectName(QStringLiteral("mFramePrecision"));
        horizontalLayout_12 = new QHBoxLayout(mFramePrecision);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        radAutomatic = new QRadioButton(mFramePrecision);
        radAutomatic->setObjectName(QStringLiteral("radAutomatic"));
        radAutomatic->setChecked(true);

        horizontalLayout_12->addWidget(radAutomatic);

        radManual = new QRadioButton(mFramePrecision);
        radManual->setObjectName(QStringLiteral("radManual"));

        horizontalLayout_12->addWidget(radManual);

        spinBoxDP = new QgsSpinBox(mFramePrecision);
        spinBoxDP->setObjectName(QStringLiteral("spinBoxDP"));

        horizontalLayout_12->addWidget(spinBoxDP);

        labelDP = new QLabel(mFramePrecision);
        labelDP->setObjectName(QStringLiteral("labelDP"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDP->sizePolicy().hasHeightForWidth());
        labelDP->setSizePolicy(sizePolicy4);

        horizontalLayout_12->addWidget(labelDP);


        gridLayout_18->addWidget(mFramePrecision, 1, 1, 1, 1);

        label_34 = new QLabel(mCoordinateDisplayGroup);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_18->addWidget(label_34, 2, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        mCustomizeBearingFormatButton = new QPushButton(mCoordinateDisplayGroup);
        mCustomizeBearingFormatButton->setObjectName(QStringLiteral("mCustomizeBearingFormatButton"));

        horizontalLayout_19->addWidget(mCustomizeBearingFormatButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_8);

        horizontalLayout_19->setStretch(0, 3);
        horizontalLayout_19->setStretch(1, 6);

        gridLayout_18->addLayout(horizontalLayout_19, 2, 1, 1, 1);


        verticalLayout->addWidget(mCoordinateDisplayGroup);

        grpProjectScales = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        grpProjectScales->setObjectName(QStringLiteral("grpProjectScales"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(3);
        sizePolicy5.setHeightForWidth(grpProjectScales->sizePolicy().hasHeightForWidth());
        grpProjectScales->setSizePolicy(sizePolicy5);
        grpProjectScales->setCheckable(true);
        grpProjectScales->setChecked(false);
        grpProjectScales->setProperty("syncGroup", QVariant(QStringLiteral("projgeneral")));
        gridLayout_7 = new QGridLayout(grpProjectScales);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        lstScales = new QListWidget(grpProjectScales);
        lstScales->setObjectName(QStringLiteral("lstScales"));

        gridLayout_7->addWidget(lstScales, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pbnAddScale = new QToolButton(grpProjectScales);
        pbnAddScale->setObjectName(QStringLiteral("pbnAddScale"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddScale->setIcon(icon12);

        verticalLayout_4->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(grpProjectScales);
        pbnRemoveScale->setObjectName(QStringLiteral("pbnRemoveScale"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveScale->setIcon(icon13);

        verticalLayout_4->addWidget(pbnRemoveScale);

        pbnImportScales = new QToolButton(grpProjectScales);
        pbnImportScales->setObjectName(QStringLiteral("pbnImportScales"));
        pbnImportScales->setIcon(icon11);

        verticalLayout_4->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(grpProjectScales);
        pbnExportScales->setObjectName(QStringLiteral("pbnExportScales"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon14);

        verticalLayout_4->addWidget(pbnExportScales);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_7->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout->addWidget(grpProjectScales);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sourceLanguageLabel = new QLabel(groupBox_6);
        sourceLanguageLabel->setObjectName(QStringLiteral("sourceLanguageLabel"));

        horizontalLayout_4->addWidget(sourceLanguageLabel);

        cbtsLocale = new QComboBox(groupBox_6);
        cbtsLocale->setObjectName(QStringLiteral("cbtsLocale"));

        horizontalLayout_4->addWidget(cbtsLocale);

        generateTsFileButton = new QPushButton(groupBox_6);
        generateTsFileButton->setObjectName(QStringLiteral("generateTsFileButton"));

        horizontalLayout_4->addWidget(generateTsFileButton);


        verticalLayout->addWidget(groupBox_6);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mProjOptsGeneral);
        mMetadataPage = new QWidget();
        mMetadataPage->setObjectName(QStringLiteral("mMetadataPage"));
        verticalLayout_19 = new QVBoxLayout(mMetadataPage);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        mOptionsStackedWidget->addWidget(mMetadataPage);
        mProjOptsCRS = new QWidget();
        mProjOptsCRS->setObjectName(QStringLiteral("mProjOptsCRS"));
        verticalLayout_5 = new QVBoxLayout(mProjOptsCRS);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mProjOptsCRS);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 337, 74));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        cbxProjectionEnabled = new QGroupBox(scrollAreaWidgetContents);
        cbxProjectionEnabled->setObjectName(QStringLiteral("cbxProjectionEnabled"));
        cbxProjectionEnabled->setCheckable(false);
        verticalLayout_21 = new QVBoxLayout(cbxProjectionEnabled);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        projectionSelector = new QgsProjectionSelectionTreeWidget(cbxProjectionEnabled);
        projectionSelector->setObjectName(QStringLiteral("projectionSelector"));

        verticalLayout_21->addWidget(projectionSelector);


        verticalLayout_7->addWidget(cbxProjectionEnabled);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mProjOptsCRS);
        mProjTransformations = new QWidget();
        mProjTransformations->setObjectName(QStringLiteral("mProjTransformations"));
        verticalLayout_8 = new QVBoxLayout(mProjTransformations);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mProjTransformations);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 604, 105));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        mDatumTransformGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        mDatumTransformGroupBox->setObjectName(QStringLiteral("mDatumTransformGroupBox"));
        verticalLayout_10 = new QVBoxLayout(mDatumTransformGroupBox);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        mShowDatumTransformDialogCheckBox = new QCheckBox(mDatumTransformGroupBox);
        mShowDatumTransformDialogCheckBox->setObjectName(QStringLiteral("mShowDatumTransformDialogCheckBox"));
        mShowDatumTransformDialogCheckBox->setEnabled(false);

        verticalLayout_10->addWidget(mShowDatumTransformDialogCheckBox);

        mDatumTransformTableWidget = new QgsDatumTransformTableWidget(mDatumTransformGroupBox);
        mDatumTransformTableWidget->setObjectName(QStringLiteral("mDatumTransformTableWidget"));

        verticalLayout_10->addWidget(mDatumTransformTableWidget);


        verticalLayout_9->addWidget(mDatumTransformGroupBox);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_8->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mProjTransformations);
        mProjOptsSymbols = new QWidget();
        mProjOptsSymbols->setObjectName(QStringLiteral("mProjOptsSymbols"));
        verticalLayout_11 = new QVBoxLayout(mProjOptsSymbols);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QgsScrollArea(mProjOptsSymbols);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 291, 563));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("projstyles")));
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(9, -1, -1, -1);
        pbtnStyleMarker = new QToolButton(groupBox);
        pbtnStyleMarker->setObjectName(QStringLiteral("pbtnStyleMarker"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnStyleMarker->setIcon(icon15);

        gridLayout_11->addWidget(pbtnStyleMarker, 0, 5, 1, 1);

        lblStyleLine = new QLabel(groupBox);
        lblStyleLine->setObjectName(QStringLiteral("lblStyleLine"));
        lblStyleLine->setMargin(5);

        gridLayout_11->addWidget(lblStyleLine, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy6);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/styleicons/color.svg")));

        gridLayout_11->addWidget(label_14, 3, 0, 1, 1);

        pixStyleFill = new QLabel(groupBox);
        pixStyleFill->setObjectName(QStringLiteral("pixStyleFill"));
        sizePolicy6.setHeightForWidth(pixStyleFill->sizePolicy().hasHeightForWidth());
        pixStyleFill->setSizePolicy(sizePolicy6);
        pixStyleFill->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mIconPolygonLayer.svg")));

        gridLayout_11->addWidget(pixStyleFill, 2, 0, 1, 1);

        pbtnStyleLine = new QToolButton(groupBox);
        pbtnStyleLine->setObjectName(QStringLiteral("pbtnStyleLine"));
        pbtnStyleLine->setIcon(icon15);

        gridLayout_11->addWidget(pbtnStyleLine, 1, 5, 1, 1);

        pixStyleLine = new QLabel(groupBox);
        pixStyleLine->setObjectName(QStringLiteral("pixStyleLine"));
        sizePolicy6.setHeightForWidth(pixStyleLine->sizePolicy().hasHeightForWidth());
        pixStyleLine->setSizePolicy(sizePolicy6);
        pixStyleLine->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mIconLineLayer.svg")));

        gridLayout_11->addWidget(pixStyleLine, 1, 0, 1, 1);

        cboStyleFill = new QComboBox(groupBox);
        cboStyleFill->setObjectName(QStringLiteral("cboStyleFill"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(cboStyleFill->sizePolicy().hasHeightForWidth());
        cboStyleFill->setSizePolicy(sizePolicy7);
        cboStyleFill->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleFill, 2, 4, 1, 1);

        lblStyleColorRamp = new QLabel(groupBox);
        lblStyleColorRamp->setObjectName(QStringLiteral("lblStyleColorRamp"));
        lblStyleColorRamp->setMargin(5);

        gridLayout_11->addWidget(lblStyleColorRamp, 3, 2, 1, 1);

        cboStyleMarker = new QComboBox(groupBox);
        cboStyleMarker->setObjectName(QStringLiteral("cboStyleMarker"));
        sizePolicy7.setHeightForWidth(cboStyleMarker->sizePolicy().hasHeightForWidth());
        cboStyleMarker->setSizePolicy(sizePolicy7);
        cboStyleMarker->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleMarker, 0, 4, 1, 1);

        pixStyleMarker = new QLabel(groupBox);
        pixStyleMarker->setObjectName(QStringLiteral("pixStyleMarker"));
        sizePolicy6.setHeightForWidth(pixStyleMarker->sizePolicy().hasHeightForWidth());
        pixStyleMarker->setSizePolicy(sizePolicy6);
        pixStyleMarker->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mIconPointLayer.svg")));

        gridLayout_11->addWidget(pixStyleMarker, 0, 0, 1, 1);

        lblStyleMarker = new QLabel(groupBox);
        lblStyleMarker->setObjectName(QStringLiteral("lblStyleMarker"));
        lblStyleMarker->setMargin(5);

        gridLayout_11->addWidget(lblStyleMarker, 0, 2, 1, 1);

        pbtnStyleFill = new QToolButton(groupBox);
        pbtnStyleFill->setObjectName(QStringLiteral("pbtnStyleFill"));
        pbtnStyleFill->setIcon(icon15);

        gridLayout_11->addWidget(pbtnStyleFill, 2, 5, 1, 1);

        lblStyleFill = new QLabel(groupBox);
        lblStyleFill->setObjectName(QStringLiteral("lblStyleFill"));
        lblStyleFill->setMargin(5);

        gridLayout_11->addWidget(lblStyleFill, 2, 2, 1, 1);

        cboStyleLine = new QComboBox(groupBox);
        cboStyleLine->setObjectName(QStringLiteral("cboStyleLine"));
        sizePolicy7.setHeightForWidth(cboStyleLine->sizePolicy().hasHeightForWidth());
        cboStyleLine->setSizePolicy(sizePolicy7);
        cboStyleLine->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleLine, 1, 4, 1, 1);

        cboStyleColorRamp = new QComboBox(groupBox);
        cboStyleColorRamp->setObjectName(QStringLiteral("cboStyleColorRamp"));
        sizePolicy7.setHeightForWidth(cboStyleColorRamp->sizePolicy().hasHeightForWidth());
        cboStyleColorRamp->setSizePolicy(sizePolicy7);
        cboStyleColorRamp->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleColorRamp, 3, 4, 1, 1);

        pbtnStyleColorRamp = new QToolButton(groupBox);
        pbtnStyleColorRamp->setObjectName(QStringLiteral("pbtnStyleColorRamp"));
        pbtnStyleColorRamp->setIcon(icon15);

        gridLayout_11->addWidget(pbtnStyleColorRamp, 3, 5, 1, 1);


        verticalLayout_12->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setProperty("syncGroup", QVariant(QStringLiteral("projstyles")));
        verticalLayout_18 = new QVBoxLayout(groupBox_2);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_6->addWidget(label_27);

        mDefaultOpacityWidget = new QgsOpacityWidget(groupBox_2);
        mDefaultOpacityWidget->setObjectName(QStringLiteral("mDefaultOpacityWidget"));
        mDefaultOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(mDefaultOpacityWidget);

        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_18->addLayout(horizontalLayout_6);

        cbxStyleRandomColors = new QCheckBox(groupBox_2);
        cbxStyleRandomColors->setObjectName(QStringLiteral("cbxStyleRandomColors"));

        verticalLayout_18->addWidget(cbxStyleRandomColors);


        verticalLayout_12->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbtnStyleManager = new QPushButton(scrollAreaWidgetContents_4);
        pbtnStyleManager->setObjectName(QStringLiteral("pbtnStyleManager"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/mActionStyleManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnStyleManager->setIcon(icon16);

        horizontalLayout_3->addWidget(pbtnStyleManager);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_12->addLayout(horizontalLayout_3);

        groupBox_7 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        mButtonCopyColors = new QToolButton(groupBox_7);
        mButtonCopyColors->setObjectName(QStringLiteral("mButtonCopyColors"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopyColors->setIcon(icon17);

        gridLayout_12->addWidget(mButtonCopyColors, 2, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_12, 6, 1, 1, 1);

        mButtonAddColor = new QToolButton(groupBox_7);
        mButtonAddColor->setObjectName(QStringLiteral("mButtonAddColor"));
        mButtonAddColor->setIcon(icon12);

        gridLayout_12->addWidget(mButtonAddColor, 0, 1, 1, 1);

        mButtonPasteColors = new QToolButton(groupBox_7);
        mButtonPasteColors->setObjectName(QStringLiteral("mButtonPasteColors"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonPasteColors->setIcon(icon18);

        gridLayout_12->addWidget(mButtonPasteColors, 3, 1, 1, 1);

        mButtonRemoveColor = new QToolButton(groupBox_7);
        mButtonRemoveColor->setObjectName(QStringLiteral("mButtonRemoveColor"));
        mButtonRemoveColor->setIcon(icon13);

        gridLayout_12->addWidget(mButtonRemoveColor, 1, 1, 1, 1);

        mTreeProjectColors = new QgsColorSchemeList(groupBox_7);
        mTreeProjectColors->setObjectName(QStringLiteral("mTreeProjectColors"));

        gridLayout_12->addWidget(mTreeProjectColors, 0, 0, 8, 1);

        mButtonImportColors = new QToolButton(groupBox_7);
        mButtonImportColors->setObjectName(QStringLiteral("mButtonImportColors"));
        mButtonImportColors->setIcon(icon11);

        gridLayout_12->addWidget(mButtonImportColors, 4, 1, 1, 1);

        mButtonExportColors = new QToolButton(groupBox_7);
        mButtonExportColors->setObjectName(QStringLiteral("mButtonExportColors"));
        mButtonExportColors->setIcon(icon14);

        gridLayout_12->addWidget(mButtonExportColors, 5, 1, 1, 1);


        verticalLayout_12->addWidget(groupBox_7);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_11->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mProjOptsSymbols);
        mTab_DataSources = new QWidget();
        mTab_DataSources->setObjectName(QStringLiteral("mTab_DataSources"));
        formLayout = new QFormLayout(mTab_DataSources);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        mAutoTransaction = new QCheckBox(mTab_DataSources);
        mAutoTransaction->setObjectName(QStringLiteral("mAutoTransaction"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, mAutoTransaction);

        mEvaluateDefaultValues = new QCheckBox(mTab_DataSources);
        mEvaluateDefaultValues->setObjectName(QStringLiteral("mEvaluateDefaultValues"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, mEvaluateDefaultValues);

        mTrustProjectCheckBox = new QCheckBox(mTab_DataSources);
        mTrustProjectCheckBox->setObjectName(QStringLiteral("mTrustProjectCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mTrustProjectCheckBox);

        groupBox_5 = new QgsCollapsibleGroupBox(mTab_DataSources);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy8);
        gridLayout_19 = new QGridLayout(groupBox_5);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setVerticalSpacing(0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_5, 3, 1, 1, 1);

        mLayerCapabilitiesTree = new QTreeView(groupBox_5);
        mLayerCapabilitiesTree->setObjectName(QStringLiteral("mLayerCapabilitiesTree"));
        sizePolicy8.setHeightForWidth(mLayerCapabilitiesTree->sizePolicy().hasHeightForWidth());
        mLayerCapabilitiesTree->setSizePolicy(sizePolicy8);

        gridLayout_19->addWidget(mLayerCapabilitiesTree, 0, 0, 1, 4);

        mLayerCapabilitiesToggleSelectionButton = new QPushButton(groupBox_5);
        mLayerCapabilitiesToggleSelectionButton->setObjectName(QStringLiteral("mLayerCapabilitiesToggleSelectionButton"));
        mLayerCapabilitiesToggleSelectionButton->setEnabled(false);

        gridLayout_19->addWidget(mLayerCapabilitiesToggleSelectionButton, 3, 0, 1, 1);

        mShowSpatialLayersCheckBox = new QCheckBox(groupBox_5);
        mShowSpatialLayersCheckBox->setObjectName(QStringLiteral("mShowSpatialLayersCheckBox"));
        mShowSpatialLayersCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_19->addWidget(mShowSpatialLayersCheckBox, 3, 2, 1, 1);

        mLayerCapabilitiesTreeFilterLineEdit = new QgsFilterLineEdit(groupBox_5);
        mLayerCapabilitiesTreeFilterLineEdit->setObjectName(QStringLiteral("mLayerCapabilitiesTreeFilterLineEdit"));

        gridLayout_19->addWidget(mLayerCapabilitiesTreeFilterLineEdit, 3, 3, 1, 1);


        formLayout->setWidget(4, QFormLayout::SpanningRole, groupBox_5);

        mOptionsStackedWidget->addWidget(mTab_DataSources);
        mTabRelations = new QWidget();
        mTabRelations->setObjectName(QStringLiteral("mTabRelations"));
        gridLayout_16 = new QGridLayout(mTabRelations);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget->addWidget(mTabRelations);
        mTab_Variables = new QWidget();
        mTab_Variables->setObjectName(QStringLiteral("mTab_Variables"));
        verticalLayout_23 = new QVBoxLayout(mTab_Variables);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        groupBox_4 = new QGroupBox(mTab_Variables);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_4);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_4);
        mVariableEditor->setObjectName(QStringLiteral("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QStringLiteral("projectProperties")));

        horizontalLayout_7->addWidget(mVariableEditor);


        verticalLayout_23->addWidget(groupBox_4);

        mOptionsStackedWidget->addWidget(mTab_Variables);
        mProjOptsMacros = new QWidget();
        mProjOptsMacros->setObjectName(QStringLiteral("mProjOptsMacros"));
        verticalLayout_15 = new QVBoxLayout(mProjOptsMacros);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mProjOptsMacros);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 179, 56));
        verticalLayout_17 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(-1, 0, -1, 0);
        grpPythonMacros = new QGroupBox(scrollAreaWidgetContents_6);
        grpPythonMacros->setObjectName(QStringLiteral("grpPythonMacros"));
        grpPythonMacros->setCheckable(true);
        grpPythonMacros->setChecked(false);
        verticalLayout_16 = new QVBoxLayout(grpPythonMacros);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        ptePythonMacros = new QgsCodeEditorPython(grpPythonMacros);
        ptePythonMacros->setObjectName(QStringLiteral("ptePythonMacros"));

        verticalLayout_16->addWidget(ptePythonMacros);


        verticalLayout_17->addWidget(grpPythonMacros);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mProjOptsMacros);
        mProjOptsOWS = new QWidget();
        mProjOptsOWS->setObjectName(QStringLiteral("mProjOptsOWS"));
        verticalLayout_14 = new QVBoxLayout(mProjOptsOWS);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QgsScrollArea(mProjOptsOWS);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 653, 3187));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(-1, 0, -1, 0);
        grpOWSServiceCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpOWSServiceCapabilities->setObjectName(QStringLiteral("grpOWSServiceCapabilities"));
        grpOWSServiceCapabilities->setCheckable(true);
        grpOWSServiceCapabilities->setChecked(false);
        grpOWSServiceCapabilities->setProperty("collapsed", QVariant(false));
        grpOWSServiceCapabilities->setProperty("syncGroup", QVariant(QStringLiteral("projowsserver")));
        grpOWSServiceCapabilities->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_6 = new QGridLayout(grpOWSServiceCapabilities);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mWMSName = new QLineEdit(grpOWSServiceCapabilities);
        mWMSName->setObjectName(QStringLiteral("mWMSName"));

        gridLayout_6->addWidget(mWMSName, 7, 1, 1, 1);

        mWMSContactPositionCb = new QComboBox(grpOWSServiceCapabilities);
        mWMSContactPositionCb->setObjectName(QStringLiteral("mWMSContactPositionCb"));
        mWMSContactPositionCb->setEditable(true);

        gridLayout_6->addWidget(mWMSContactPositionCb, 16, 1, 1, 1);

        mWMSAccessConstraintsCb = new QComboBox(grpOWSServiceCapabilities);
        mWMSAccessConstraintsCb->setObjectName(QStringLiteral("mWMSAccessConstraintsCb"));
        mWMSAccessConstraintsCb->setEditable(true);

        gridLayout_6->addWidget(mWMSAccessConstraintsCb, 21, 1, 1, 1);

        mWMSContactPerson = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactPerson->setObjectName(QStringLiteral("mWMSContactPerson"));

        gridLayout_6->addWidget(mWMSContactPerson, 15, 1, 1, 1);

        wmsOnlineResourceGrid = new QGridLayout();
        wmsOnlineResourceGrid->setObjectName(QStringLiteral("wmsOnlineResourceGrid"));
        mWMSOnlineResourceLineEdit = new QLineEdit(grpOWSServiceCapabilities);
        mWMSOnlineResourceLineEdit->setObjectName(QStringLiteral("mWMSOnlineResourceLineEdit"));

        wmsOnlineResourceGrid->addWidget(mWMSOnlineResourceLineEdit, 0, 0, 1, 1);

        mWMSOnlineResourceExpressionButton = new QgsPropertyOverrideButton(grpOWSServiceCapabilities);
        mWMSOnlineResourceExpressionButton->setObjectName(QStringLiteral("mWMSOnlineResourceExpressionButton"));

        wmsOnlineResourceGrid->addWidget(mWMSOnlineResourceExpressionButton, 0, 1, 1, 1);


        gridLayout_6->addLayout(wmsOnlineResourceGrid, 11, 1, 1, 1);

        label_20 = new QLabel(grpOWSServiceCapabilities);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_6->addWidget(label_20, 16, 0, 1, 1);

        mWMSTitle = new QLineEdit(grpOWSServiceCapabilities);
        mWMSTitle->setObjectName(QStringLiteral("mWMSTitle"));

        gridLayout_6->addWidget(mWMSTitle, 8, 1, 1, 1);

        mWMSFeesCb = new QComboBox(grpOWSServiceCapabilities);
        mWMSFeesCb->setObjectName(QStringLiteral("mWMSFeesCb"));
        mWMSFeesCb->setEditable(true);

        gridLayout_6->addWidget(mWMSFeesCb, 20, 1, 1, 1);

        mWMSContactMail = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactMail->setObjectName(QStringLiteral("mWMSContactMail"));

        gridLayout_6->addWidget(mWMSContactMail, 17, 1, 1, 1);

        mWMSAbstract = new QTextEdit(grpOWSServiceCapabilities);
        mWMSAbstract->setObjectName(QStringLiteral("mWMSAbstract"));

        gridLayout_6->addWidget(mWMSAbstract, 19, 1, 1, 1);

        label_11 = new QLabel(grpOWSServiceCapabilities);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 9, 0, 1, 1);

        mWMSAccessConstraintsLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSAccessConstraintsLabel->setObjectName(QStringLiteral("mWMSAccessConstraintsLabel"));

        gridLayout_6->addWidget(mWMSAccessConstraintsLabel, 21, 0, 1, 1);

        label_12 = new QLabel(grpOWSServiceCapabilities);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 18, 0, 1, 1);

        mWMSContactPhone = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactPhone->setObjectName(QStringLiteral("mWMSContactPhone"));

        gridLayout_6->addWidget(mWMSContactPhone, 18, 1, 1, 1);

        label_10 = new QLabel(grpOWSServiceCapabilities);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 8, 0, 1, 1);

        wmsWarningBox = new QFrame(grpOWSServiceCapabilities);
        wmsWarningBox->setObjectName(QStringLiteral("wmsWarningBox"));
        wmsWarningBox->setAutoFillBackground(false);
        wmsWarningBox->setStyleSheet(QStringLiteral(""));
        wmsWarningBox->setFrameShape(QFrame::StyledPanel);
        wmsWarningBox->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(wmsWarningBox);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        warningLabel = new QLabel(wmsWarningBox);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setStyleSheet(QStringLiteral("background-color: rgba(255,165,0,0.3);"));
        warningLabel->setFrameShape(QFrame::NoFrame);
        warningLabel->setTextFormat(Qt::AutoText);
        warningLabel->setWordWrap(true);
        warningLabel->setMargin(9);

        gridLayout_23->addWidget(warningLabel, 0, 0, 1, 1);


        gridLayout_6->addWidget(wmsWarningBox, 1, 0, 1, 2);

        mWMSKeywordList = new QLineEdit(grpOWSServiceCapabilities);
        mWMSKeywordList->setObjectName(QStringLiteral("mWMSKeywordList"));

        gridLayout_6->addWidget(mWMSKeywordList, 22, 1, 1, 1);

        label_13 = new QLabel(grpOWSServiceCapabilities);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_6->addWidget(label_13, 17, 0, 1, 1);

        label_15 = new QLabel(grpOWSServiceCapabilities);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_6->addWidget(label_15, 19, 0, 1, 1);

        mWMSKeywordListLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSKeywordListLabel->setObjectName(QStringLiteral("mWMSKeywordListLabel"));

        gridLayout_6->addWidget(mWMSKeywordListLabel, 22, 0, 1, 1);

        label_9 = new QLabel(grpOWSServiceCapabilities);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 15, 0, 1, 1);

        mWMSContactOrganization = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactOrganization->setObjectName(QStringLiteral("mWMSContactOrganization"));

        gridLayout_6->addWidget(mWMSContactOrganization, 9, 1, 1, 1);

        mWMSFeesLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSFeesLabel->setObjectName(QStringLiteral("mWMSFeesLabel"));

        gridLayout_6->addWidget(mWMSFeesLabel, 20, 0, 1, 1);

        mWMSOnlineResourceLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSOnlineResourceLabel->setObjectName(QStringLiteral("mWMSOnlineResourceLabel"));

        gridLayout_6->addWidget(mWMSOnlineResourceLabel, 11, 0, 1, 1);

        label_6 = new QLabel(grpOWSServiceCapabilities);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 7, 0, 1, 1);


        verticalLayout_13->addWidget(grpOWSServiceCapabilities);

        grpWMSCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWMSCapabilities->setObjectName(QStringLiteral("grpWMSCapabilities"));
        grpWMSCapabilities->setProperty("syncGroup", QVariant(QStringLiteral("projowsserver")));
        gridLayout_13 = new QGridLayout(grpWMSCapabilities);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        mLayerRestrictionsGroupBox = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        mLayerRestrictionsGroupBox->setObjectName(QStringLiteral("mLayerRestrictionsGroupBox"));
        mLayerRestrictionsGroupBox->setCheckable(true);
        mLayerRestrictionsGroupBox->setChecked(false);
        mLayerRestrictionsGroupBox->setProperty("collapsed", QVariant(false));
        mLayerRestrictionsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout = new QGridLayout(mLayerRestrictionsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLayerRestrictionsListWidget = new QListWidget(mLayerRestrictionsGroupBox);
        mLayerRestrictionsListWidget->setObjectName(QStringLiteral("mLayerRestrictionsListWidget"));

        gridLayout->addWidget(mLayerRestrictionsListWidget, 0, 0, 1, 3);

        mAddLayerRestrictionButton = new QToolButton(mLayerRestrictionsGroupBox);
        mAddLayerRestrictionButton->setObjectName(QStringLiteral("mAddLayerRestrictionButton"));
        mAddLayerRestrictionButton->setIcon(icon12);

        gridLayout->addWidget(mAddLayerRestrictionButton, 1, 0, 1, 1);

        mRemoveLayerRestrictionButton = new QToolButton(mLayerRestrictionsGroupBox);
        mRemoveLayerRestrictionButton->setObjectName(QStringLiteral("mRemoveLayerRestrictionButton"));
        mRemoveLayerRestrictionButton->setIcon(icon13);

        gridLayout->addWidget(mRemoveLayerRestrictionButton, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);


        gridLayout_13->addWidget(mLayerRestrictionsGroupBox, 1, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mMaxWidthLabel = new QLabel(grpWMSCapabilities);
        mMaxWidthLabel->setObjectName(QStringLiteral("mMaxWidthLabel"));

        gridLayout_3->addWidget(mMaxWidthLabel, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        mMaxHeightLineEdit = new QLineEdit(grpWMSCapabilities);
        mMaxHeightLineEdit->setObjectName(QStringLiteral("mMaxHeightLineEdit"));

        gridLayout_3->addWidget(mMaxHeightLineEdit, 1, 4, 1, 1);

        mMaxWidthLineEdit = new QLineEdit(grpWMSCapabilities);
        mMaxWidthLineEdit->setObjectName(QStringLiteral("mMaxWidthLineEdit"));

        gridLayout_3->addWidget(mMaxWidthLineEdit, 1, 2, 1, 1);

        mMaxHeightLabel = new QLabel(grpWMSCapabilities);
        mMaxHeightLabel->setObjectName(QStringLiteral("mMaxHeightLabel"));

        gridLayout_3->addWidget(mMaxHeightLabel, 1, 3, 1, 1);

        label_21 = new QLabel(grpWMSCapabilities);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 0, 0, 1, 5);


        gridLayout_13->addLayout(gridLayout_3, 8, 0, 1, 3);

        grpWMSList = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        grpWMSList->setObjectName(QStringLiteral("grpWMSList"));
        grpWMSList->setCheckable(true);
        grpWMSList->setChecked(false);
        grpWMSList->setProperty("collapsed", QVariant(false));
        grpWMSList->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_5 = new QGridLayout(grpWMSList);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pbnWMSRemoveSRS = new QToolButton(grpWMSList);
        pbnWMSRemoveSRS->setObjectName(QStringLiteral("pbnWMSRemoveSRS"));
        pbnWMSRemoveSRS->setIcon(icon13);

        gridLayout_5->addWidget(pbnWMSRemoveSRS, 1, 1, 1, 1);

        mWMSList = new QListWidget(grpWMSList);
        mWMSList->setObjectName(QStringLiteral("mWMSList"));

        gridLayout_5->addWidget(mWMSList, 0, 0, 1, 4);

        pbnWMSSetUsedSRS = new QPushButton(grpWMSList);
        pbnWMSSetUsedSRS->setObjectName(QStringLiteral("pbnWMSSetUsedSRS"));

        gridLayout_5->addWidget(pbnWMSSetUsedSRS, 1, 2, 1, 1);

        pbnWMSAddSRS = new QToolButton(grpWMSList);
        pbnWMSAddSRS->setObjectName(QStringLiteral("pbnWMSAddSRS"));
        pbnWMSAddSRS->setIcon(icon12);

        gridLayout_5->addWidget(pbnWMSAddSRS, 1, 0, 1, 1);


        gridLayout_13->addWidget(grpWMSList, 0, 2, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        mWMSMaxAtlasFeaturesLabel = new QLabel(grpWMSCapabilities);
        mWMSMaxAtlasFeaturesLabel->setObjectName(QStringLiteral("mWMSMaxAtlasFeaturesLabel"));

        horizontalLayout_17->addWidget(mWMSMaxAtlasFeaturesLabel);

        mWMSMaxAtlasFeaturesSpinBox = new QgsSpinBox(grpWMSCapabilities);
        mWMSMaxAtlasFeaturesSpinBox->setObjectName(QStringLiteral("mWMSMaxAtlasFeaturesSpinBox"));
        mWMSMaxAtlasFeaturesSpinBox->setMaximum(9999999);
        mWMSMaxAtlasFeaturesSpinBox->setValue(1);

        horizontalLayout_17->addWidget(mWMSMaxAtlasFeaturesSpinBox);


        gridLayout_13->addLayout(horizontalLayout_17, 10, 0, 1, 3);

        mWmsUseLayerIDs = new QCheckBox(grpWMSCapabilities);
        mWmsUseLayerIDs->setObjectName(QStringLiteral("mWmsUseLayerIDs"));

        gridLayout_13->addWidget(mWmsUseLayerIDs, 3, 0, 1, 1);

        grpWMSPrecision = new QHBoxLayout();
        grpWMSPrecision->setObjectName(QStringLiteral("grpWMSPrecision"));
        label_5 = new QLabel(grpWMSCapabilities);
        label_5->setObjectName(QStringLiteral("label_5"));

        grpWMSPrecision->addWidget(label_5);

        mWMSPrecisionSpinBox = new QgsSpinBox(grpWMSCapabilities);
        mWMSPrecisionSpinBox->setObjectName(QStringLiteral("mWMSPrecisionSpinBox"));
        mWMSPrecisionSpinBox->setMinimum(1);
        mWMSPrecisionSpinBox->setMaximum(17);
        mWMSPrecisionSpinBox->setValue(8);

        grpWMSPrecision->addWidget(mWMSPrecisionSpinBox);


        gridLayout_13->addLayout(grpWMSPrecision, 6, 0, 1, 3);

        mWMSDefaultMapUnitsPerMmLayout = new QHBoxLayout();
        mWMSDefaultMapUnitsPerMmLayout->setObjectName(QStringLiteral("mWMSDefaultMapUnitsPerMmLayout"));
        mWMSDefaultMapUnitsPerMmLabel = new QLabel(grpWMSCapabilities);
        mWMSDefaultMapUnitsPerMmLabel->setObjectName(QStringLiteral("mWMSDefaultMapUnitsPerMmLabel"));

        mWMSDefaultMapUnitsPerMmLayout->addWidget(mWMSDefaultMapUnitsPerMmLabel);


        gridLayout_13->addLayout(mWMSDefaultMapUnitsPerMmLayout, 12, 0, 1, 3);

        grpWMSExt = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        grpWMSExt->setObjectName(QStringLiteral("grpWMSExt"));
        grpWMSExt->setCheckable(true);
        grpWMSExt->setChecked(false);
        grpWMSExt->setProperty("collapsed", QVariant(false));
        grpWMSExt->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_4 = new QGridLayout(grpWMSExt);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mWMSExtMinX = new QLineEdit(grpWMSExt);
        mWMSExtMinX->setObjectName(QStringLiteral("mWMSExtMinX"));

        gridLayout_4->addWidget(mWMSExtMinX, 0, 1, 1, 1);

        label_17 = new QLabel(grpWMSExt);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 5, 0, 1, 2);

        label_16 = new QLabel(grpWMSExt);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 0, 0, 1, 1);

        mWMSExtMinY = new QLineEdit(grpWMSExt);
        mWMSExtMinY->setObjectName(QStringLiteral("mWMSExtMinY"));

        gridLayout_4->addWidget(mWMSExtMinY, 1, 1, 1, 1);

        label_18 = new QLabel(grpWMSExt);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        pbnWMSExtCanvas = new QPushButton(grpWMSExt);
        pbnWMSExtCanvas->setObjectName(QStringLiteral("pbnWMSExtCanvas"));

        gridLayout_4->addWidget(pbnWMSExtCanvas, 4, 0, 1, 2);

        label_19 = new QLabel(grpWMSExt);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 3, 0, 1, 1);

        mWMSExtMaxY = new QLineEdit(grpWMSExt);
        mWMSExtMaxY->setObjectName(QStringLiteral("mWMSExtMaxY"));

        gridLayout_4->addWidget(mWMSExtMaxY, 3, 1, 1, 1);

        mWMSExtMaxX = new QLineEdit(grpWMSExt);
        mWMSExtMaxX->setObjectName(QStringLiteral("mWMSExtMaxX"));

        gridLayout_4->addWidget(mWMSExtMaxX, 2, 1, 1, 1);


        gridLayout_13->addWidget(grpWMSExt, 0, 0, 1, 2);

        mAddWktGeometryCheckBox = new QCheckBox(grpWMSCapabilities);
        mAddWktGeometryCheckBox->setObjectName(QStringLiteral("mAddWktGeometryCheckBox"));

        gridLayout_13->addWidget(mAddWktGeometryCheckBox, 4, 0, 1, 2);

        mWMSInspire = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        mWMSInspire->setObjectName(QStringLiteral("mWMSInspire"));
        mWMSInspire->setCheckable(true);
        mWMSInspire->setChecked(false);
        gridLayout_14 = new QGridLayout(mWMSInspire);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        mWMSInspireLanguage = new QComboBox(mWMSInspire);
        mWMSInspireLanguage->setObjectName(QStringLiteral("mWMSInspireLanguage"));
        sizePolicy7.setHeightForWidth(mWMSInspireLanguage->sizePolicy().hasHeightForWidth());
        mWMSInspireLanguage->setSizePolicy(sizePolicy7);

        gridLayout_14->addWidget(mWMSInspireLanguage, 0, 1, 1, 1);

        label_7 = new QLabel(mWMSInspire);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_14->addWidget(label_7, 0, 0, 1, 1);

        mWMSInspireScenario2 = new QGroupBox(mWMSInspire);
        mWMSInspireScenario2->setObjectName(QStringLiteral("mWMSInspireScenario2"));
        mWMSInspireScenario2->setCheckable(true);
        mWMSInspireScenario2->setChecked(false);
        gridLayout_17 = new QGridLayout(mWMSInspireScenario2);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        mWMSInspireTemporalReference = new QDateEdit(mWMSInspireScenario2);
        mWMSInspireTemporalReference->setObjectName(QStringLiteral("mWMSInspireTemporalReference"));
        sizePolicy7.setHeightForWidth(mWMSInspireTemporalReference->sizePolicy().hasHeightForWidth());
        mWMSInspireTemporalReference->setSizePolicy(sizePolicy7);

        gridLayout_17->addWidget(mWMSInspireTemporalReference, 0, 1, 1, 1);

        label_23 = new QLabel(mWMSInspireScenario2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_17->addWidget(label_23, 1, 0, 1, 1);

        mWMSInspireMetadataDate = new QDateEdit(mWMSInspireScenario2);
        mWMSInspireMetadataDate->setObjectName(QStringLiteral("mWMSInspireMetadataDate"));
        sizePolicy7.setHeightForWidth(mWMSInspireMetadataDate->sizePolicy().hasHeightForWidth());
        mWMSInspireMetadataDate->setSizePolicy(sizePolicy7);

        gridLayout_17->addWidget(mWMSInspireMetadataDate, 1, 1, 1, 1);

        label_22 = new QLabel(mWMSInspireScenario2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_17->addWidget(label_22, 0, 0, 1, 1);


        gridLayout_14->addWidget(mWMSInspireScenario2, 4, 0, 1, 2);

        mWMSInspireScenario1 = new QGroupBox(mWMSInspire);
        mWMSInspireScenario1->setObjectName(QStringLiteral("mWMSInspireScenario1"));
        mWMSInspireScenario1->setCheckable(true);
        mWMSInspireScenario1->setChecked(false);
        gridLayout_15 = new QGridLayout(mWMSInspireScenario1);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        mWMSInspireMetadataUrl = new QLineEdit(mWMSInspireScenario1);
        mWMSInspireMetadataUrl->setObjectName(QStringLiteral("mWMSInspireMetadataUrl"));

        gridLayout_15->addWidget(mWMSInspireMetadataUrl, 0, 1, 1, 1);

        label_8 = new QLabel(mWMSInspireScenario1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_15->addWidget(label_8, 0, 0, 1, 1);

        mWMSInspireMetadataUrlType = new QComboBox(mWMSInspireScenario1);
        mWMSInspireMetadataUrlType->setObjectName(QStringLiteral("mWMSInspireMetadataUrlType"));

        gridLayout_15->addWidget(mWMSInspireMetadataUrlType, 1, 1, 1, 1);

        label_24 = new QLabel(mWMSInspireScenario1);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_15->addWidget(label_24, 1, 0, 1, 1);


        gridLayout_14->addWidget(mWMSInspireScenario1, 3, 0, 1, 2);


        gridLayout_13->addWidget(mWMSInspire, 2, 0, 1, 3);

        mSegmentizeFeatureInfoGeometryCheckBox = new QCheckBox(grpWMSCapabilities);
        mSegmentizeFeatureInfoGeometryCheckBox->setObjectName(QStringLiteral("mSegmentizeFeatureInfoGeometryCheckBox"));

        gridLayout_13->addWidget(mSegmentizeFeatureInfoGeometryCheckBox, 5, 0, 1, 2);

        mWMSPrintLayoutGroupBox = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        mWMSPrintLayoutGroupBox->setObjectName(QStringLiteral("mWMSPrintLayoutGroupBox"));
        mWMSPrintLayoutGroupBox->setCheckable(true);
        mWMSPrintLayoutGroupBox->setChecked(false);
        mWMSPrintLayoutGroupBox->setProperty("collapsed", QVariant(false));
        mWMSPrintLayoutGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_10 = new QGridLayout(mWMSPrintLayoutGroupBox);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        mPrintLayoutListWidget = new QListWidget(mWMSPrintLayoutGroupBox);
        mPrintLayoutListWidget->setObjectName(QStringLiteral("mPrintLayoutListWidget"));

        gridLayout_10->addWidget(mPrintLayoutListWidget, 0, 0, 1, 3);

        mAddWMSPrintLayoutButton = new QToolButton(mWMSPrintLayoutGroupBox);
        mAddWMSPrintLayoutButton->setObjectName(QStringLiteral("mAddWMSPrintLayoutButton"));
        mAddWMSPrintLayoutButton->setIcon(icon12);

        gridLayout_10->addWidget(mAddWMSPrintLayoutButton, 1, 0, 1, 1);

        mRemoveWMSPrintLayoutButton = new QToolButton(mWMSPrintLayoutGroupBox);
        mRemoveWMSPrintLayoutButton->setObjectName(QStringLiteral("mRemoveWMSPrintLayoutButton"));
        mRemoveWMSPrintLayoutButton->setIcon(icon13);

        gridLayout_10->addWidget(mRemoveWMSPrintLayoutButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_13->addWidget(mWMSPrintLayoutGroupBox, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mWMSUrlLabel = new QLabel(grpWMSCapabilities);
        mWMSUrlLabel->setObjectName(QStringLiteral("mWMSUrlLabel"));

        horizontalLayout_2->addWidget(mWMSUrlLabel);

        mWMSUrlLineEdit = new QLineEdit(grpWMSCapabilities);
        mWMSUrlLineEdit->setObjectName(QStringLiteral("mWMSUrlLineEdit"));

        horizontalLayout_2->addWidget(mWMSUrlLineEdit);


        gridLayout_13->addLayout(horizontalLayout_2, 7, 0, 1, 2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        mWMSImageQualityLabel = new QLabel(grpWMSCapabilities);
        mWMSImageQualityLabel->setObjectName(QStringLiteral("mWMSImageQualityLabel"));

        horizontalLayout_10->addWidget(mWMSImageQualityLabel);

        mWMSImageQualitySpinBox = new QgsSpinBox(grpWMSCapabilities);
        mWMSImageQualitySpinBox->setObjectName(QStringLiteral("mWMSImageQualitySpinBox"));
        mWMSImageQualitySpinBox->setMinimum(10);
        mWMSImageQualitySpinBox->setMaximum(100);
        mWMSImageQualitySpinBox->setSingleStep(5);
        mWMSImageQualitySpinBox->setValue(90);

        horizontalLayout_10->addWidget(mWMSImageQualitySpinBox);


        gridLayout_13->addLayout(horizontalLayout_10, 9, 0, 1, 3);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_33 = new QLabel(grpWMSCapabilities);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_18->addWidget(label_33);

        mWMSTileBufferSpinBox = new QgsSpinBox(grpWMSCapabilities);
        mWMSTileBufferSpinBox->setObjectName(QStringLiteral("mWMSTileBufferSpinBox"));

        horizontalLayout_18->addWidget(mWMSTileBufferSpinBox);


        gridLayout_13->addLayout(horizontalLayout_18, 11, 0, 1, 3);


        verticalLayout_13->addWidget(grpWMSCapabilities);

        grpWmtsCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWmtsCapabilities->setObjectName(QStringLiteral("grpWmtsCapabilities"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(3);
        sizePolicy9.setHeightForWidth(grpWmtsCapabilities->sizePolicy().hasHeightForWidth());
        grpWmtsCapabilities->setSizePolicy(sizePolicy9);
        gridLayout_20 = new QGridLayout(grpWmtsCapabilities);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        mWMTSMinScaleLabel = new QLabel(grpWmtsCapabilities);
        mWMTSMinScaleLabel->setObjectName(QStringLiteral("mWMTSMinScaleLabel"));

        horizontalLayout_16->addWidget(mWMTSMinScaleLabel);

        mWMTSMinScaleLineEdit = new QgsSpinBox(grpWmtsCapabilities);
        mWMTSMinScaleLineEdit->setObjectName(QStringLiteral("mWMTSMinScaleLineEdit"));
        mWMTSMinScaleLineEdit->setMinimum(1);
        mWMTSMinScaleLineEdit->setMaximum(1000000000);
        mWMTSMinScaleLineEdit->setValue(5000);

        horizontalLayout_16->addWidget(mWMTSMinScaleLineEdit);


        gridLayout_20->addLayout(horizontalLayout_16, 3, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        mWMTSUrlLabel = new QLabel(grpWmtsCapabilities);
        mWMTSUrlLabel->setObjectName(QStringLiteral("mWMTSUrlLabel"));

        horizontalLayout_15->addWidget(mWMTSUrlLabel);

        mWMTSUrlLineEdit = new QLineEdit(grpWmtsCapabilities);
        mWMTSUrlLineEdit->setObjectName(QStringLiteral("mWMTSUrlLineEdit"));

        horizontalLayout_15->addWidget(mWMTSUrlLineEdit);


        gridLayout_20->addLayout(horizontalLayout_15, 4, 0, 1, 1);

        horizontalLayout_17a = new QHBoxLayout();
        horizontalLayout_17a->setObjectName(QStringLiteral("horizontalLayout_17a"));
        vlWmtsLayers = new QVBoxLayout();
        vlWmtsLayers->setObjectName(QStringLiteral("vlWmtsLayers"));
        label_31 = new QLabel(grpWmtsCapabilities);
        label_31->setObjectName(QStringLiteral("label_31"));

        vlWmtsLayers->addWidget(label_31);

        twWmtsLayers = new QTreeWidget(grpWmtsCapabilities);
        twWmtsLayers->setObjectName(QStringLiteral("twWmtsLayers"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(twWmtsLayers->sizePolicy().hasHeightForWidth());
        twWmtsLayers->setSizePolicy(sizePolicy10);

        vlWmtsLayers->addWidget(twWmtsLayers);


        horizontalLayout_17a->addLayout(vlWmtsLayers);

        vlWmtsGrids = new QVBoxLayout();
        vlWmtsGrids->setObjectName(QStringLiteral("vlWmtsGrids"));
        label_32 = new QLabel(grpWmtsCapabilities);
        label_32->setObjectName(QStringLiteral("label_32"));

        vlWmtsGrids->addWidget(label_32);

        twWmtsGrids = new QTreeWidget(grpWmtsCapabilities);
        twWmtsGrids->setObjectName(QStringLiteral("twWmtsGrids"));

        vlWmtsGrids->addWidget(twWmtsGrids);


        horizontalLayout_17a->addLayout(vlWmtsGrids);


        gridLayout_20->addLayout(horizontalLayout_17a, 0, 0, 1, 1);


        verticalLayout_13->addWidget(grpWmtsCapabilities);

        grpWFSCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWFSCapabilities->setObjectName(QStringLiteral("grpWFSCapabilities"));
        sizePolicy9.setHeightForWidth(grpWFSCapabilities->sizePolicy().hasHeightForWidth());
        grpWFSCapabilities->setSizePolicy(sizePolicy9);
        grpWFSCapabilities->setProperty("syncGroup", QVariant(QStringLiteral("projowsserver")));
        gridLayout_8 = new QGridLayout(grpWFSCapabilities);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        twWFSLayers = new QTableWidget(grpWFSCapabilities);
        if (twWFSLayers->columnCount() < 6)
            twWFSLayers->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        twWFSLayers->setObjectName(QStringLiteral("twWFSLayers"));
        sizePolicy10.setHeightForWidth(twWFSLayers->sizePolicy().hasHeightForWidth());
        twWFSLayers->setSizePolicy(sizePolicy10);

        gridLayout_8->addWidget(twWFSLayers, 0, 0, 1, 2);

        pbnWFSLayersDeselectAll = new QPushButton(grpWFSCapabilities);
        pbnWFSLayersDeselectAll->setObjectName(QStringLiteral("pbnWFSLayersDeselectAll"));

        gridLayout_8->addWidget(pbnWFSLayersDeselectAll, 1, 1, 1, 1);

        pbnWFSLayersSelectAll = new QPushButton(grpWFSCapabilities);
        pbnWFSLayersSelectAll->setObjectName(QStringLiteral("pbnWFSLayersSelectAll"));

        gridLayout_8->addWidget(pbnWFSLayersSelectAll, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        mWFSUrlLabel = new QLabel(grpWFSCapabilities);
        mWFSUrlLabel->setObjectName(QStringLiteral("mWFSUrlLabel"));

        horizontalLayout_8->addWidget(mWFSUrlLabel);

        mWFSUrlLineEdit = new QLineEdit(grpWFSCapabilities);
        mWFSUrlLineEdit->setObjectName(QStringLiteral("mWFSUrlLineEdit"));

        horizontalLayout_8->addWidget(mWFSUrlLineEdit);


        gridLayout_8->addLayout(horizontalLayout_8, 3, 0, 1, 2);


        verticalLayout_13->addWidget(grpWFSCapabilities);

        grpWCSCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWCSCapabilities->setObjectName(QStringLiteral("grpWCSCapabilities"));
        sizePolicy9.setHeightForWidth(grpWCSCapabilities->sizePolicy().hasHeightForWidth());
        grpWCSCapabilities->setSizePolicy(sizePolicy9);
        grpWCSCapabilities->setProperty("syncGroup", QVariant(QStringLiteral("projowsserver")));
        gridLayout_9 = new QGridLayout(grpWCSCapabilities);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        pbnWCSLayersDeselectAll = new QPushButton(grpWCSCapabilities);
        pbnWCSLayersDeselectAll->setObjectName(QStringLiteral("pbnWCSLayersDeselectAll"));

        gridLayout_9->addWidget(pbnWCSLayersDeselectAll, 1, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mWCSUrlLabel = new QLabel(grpWCSCapabilities);
        mWCSUrlLabel->setObjectName(QStringLiteral("mWCSUrlLabel"));

        horizontalLayout_9->addWidget(mWCSUrlLabel);

        mWCSUrlLineEdit = new QLineEdit(grpWCSCapabilities);
        mWCSUrlLineEdit->setObjectName(QStringLiteral("mWCSUrlLineEdit"));

        horizontalLayout_9->addWidget(mWCSUrlLineEdit);


        gridLayout_9->addLayout(horizontalLayout_9, 3, 0, 1, 2);

        pbnWCSLayersSelectAll = new QPushButton(grpWCSCapabilities);
        pbnWCSLayersSelectAll->setObjectName(QStringLiteral("pbnWCSLayersSelectAll"));

        gridLayout_9->addWidget(pbnWCSLayersSelectAll, 1, 0, 1, 1);

        twWCSLayers = new QTableWidget(grpWCSCapabilities);
        if (twWCSLayers->columnCount() < 2)
            twWCSLayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twWCSLayers->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twWCSLayers->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        twWCSLayers->setObjectName(QStringLiteral("twWCSLayers"));
        sizePolicy10.setHeightForWidth(twWCSLayers->sizePolicy().hasHeightForWidth());
        twWCSLayers->setSizePolicy(sizePolicy10);

        gridLayout_9->addWidget(twWCSLayers, 0, 0, 1, 2);


        verticalLayout_13->addWidget(grpWCSCapabilities);

        mOWSCheckerGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mOWSCheckerGroupBox->setObjectName(QStringLiteral("mOWSCheckerGroupBox"));
        sizePolicy9.setHeightForWidth(mOWSCheckerGroupBox->sizePolicy().hasHeightForWidth());
        mOWSCheckerGroupBox->setSizePolicy(sizePolicy9);
        verticalLayout_24 = new QVBoxLayout(mOWSCheckerGroupBox);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pbnLaunchOWSChecker = new QPushButton(mOWSCheckerGroupBox);
        pbnLaunchOWSChecker->setObjectName(QStringLiteral("pbnLaunchOWSChecker"));

        horizontalLayout_11->addWidget(pbnLaunchOWSChecker);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        verticalLayout_24->addLayout(horizontalLayout_11);

        teOWSChecker = new QTextEdit(mOWSCheckerGroupBox);
        teOWSChecker->setObjectName(QStringLiteral("teOWSChecker"));
        teOWSChecker->setEnabled(true);
        teOWSChecker->setMinimumSize(QSize(0, 200));
        teOWSChecker->setAcceptDrops(true);
        teOWSChecker->setLineWidth(2);
        teOWSChecker->setReadOnly(true);
        teOWSChecker->setAcceptRichText(true);

        verticalLayout_24->addWidget(teOWSChecker);


        verticalLayout_13->addWidget(mOWSCheckerGroupBox);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_6);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_14->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mProjOptsOWS);
        mTemporalOptions = new QWidget();
        mTemporalOptions->setObjectName(QStringLiteral("mTemporalOptions"));
        verticalLayout_20 = new QVBoxLayout(mTemporalOptions);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        mTemporalOptionsGroup = new QGroupBox(mTemporalOptions);
        mTemporalOptionsGroup->setObjectName(QStringLiteral("mTemporalOptionsGroup"));
        gridLayout_22 = new QGridLayout(mTemporalOptionsGroup);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        mStartDateTimeEdit = new QgsDateTimeEdit(mTemporalOptionsGroup);
        mStartDateTimeEdit->setObjectName(QStringLiteral("mStartDateTimeEdit"));
        mStartDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_22->addWidget(mStartDateTimeEdit, 0, 1, 1, 1);

        label_35 = new QLabel(mTemporalOptionsGroup);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_22->addWidget(label_35, 0, 0, 1, 1);

        mCalculateFromLayerButton = new QPushButton(mTemporalOptionsGroup);
        mCalculateFromLayerButton->setObjectName(QStringLiteral("mCalculateFromLayerButton"));

        gridLayout_22->addWidget(mCalculateFromLayerButton, 3, 1, 1, 1);

        label_36 = new QLabel(mTemporalOptionsGroup);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_22->addWidget(label_36, 2, 0, 1, 1);

        mEndDateTimeEdit = new QgsDateTimeEdit(mTemporalOptionsGroup);
        mEndDateTimeEdit->setObjectName(QStringLiteral("mEndDateTimeEdit"));
        mEndDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_22->addWidget(mEndDateTimeEdit, 2, 1, 1, 1);

        gridLayout_22->setColumnStretch(1, 1);

        verticalLayout_20->addWidget(mTemporalOptionsGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_2);

        mOptionsStackedWidget->addWidget(mTemporalOptions);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        gridLayout_21->addWidget(mOptionsSplitter, 0, 0, 1, 1);

        mButtonBoxFrame = new QFrame(QgsProjectPropertiesBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout_21->addWidget(mButtonBoxFrame, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(titleEdit);
        textLabel1->setBuddy(pbnSelectionColor);
        label_3->setBuddy(cbxAbsolutePath);
        label_30->setBuddy(titleEdit);
        label->setBuddy(pbnCanvasColor);
        label_11->setBuddy(mWMSContactOrganization);
        label_12->setBuddy(mWMSContactPhone);
        label_10->setBuddy(mWMSTitle);
        label_15->setBuddy(mWMSAbstract);
        label_9->setBuddy(mWMSContactPerson);
        label_17->setBuddy(mWMSExtMinY);
        label_16->setBuddy(mWMSExtMinX);
        label_18->setBuddy(mWMSExtMaxX);
        label_19->setBuddy(mWMSExtMaxY);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOptionsListWidget, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mProjectFileLineEdit);
        QWidget::setTabOrder(mProjectFileLineEdit, mButtonOpenProjectFolder);
        QWidget::setTabOrder(mButtonOpenProjectFolder, mProjectHomeLineEdit);
        QWidget::setTabOrder(mProjectHomeLineEdit, mButtonSetProjectHome);
        QWidget::setTabOrder(mButtonSetProjectHome, titleEdit);
        QWidget::setTabOrder(titleEdit, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cbxAbsolutePath);
        QWidget::setTabOrder(cbxAbsolutePath, mMapTileRenderingCheckBox);
        QWidget::setTabOrder(mMapTileRenderingCheckBox, cmbEllipsoid);
        QWidget::setTabOrder(cmbEllipsoid, leSemiMajor);
        QWidget::setTabOrder(leSemiMajor, leSemiMinor);
        QWidget::setTabOrder(leSemiMinor, mDistanceUnitsCombo);
        QWidget::setTabOrder(mDistanceUnitsCombo, mAreaUnitsCombo);
        QWidget::setTabOrder(mAreaUnitsCombo, mCoordinateDisplayComboBox);
        QWidget::setTabOrder(mCoordinateDisplayComboBox, radAutomatic);
        QWidget::setTabOrder(radAutomatic, radManual);
        QWidget::setTabOrder(radManual, spinBoxDP);
        QWidget::setTabOrder(spinBoxDP, grpProjectScales);
        QWidget::setTabOrder(grpProjectScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, lstScales);
        QWidget::setTabOrder(lstScales, scrollArea);
        QWidget::setTabOrder(scrollArea, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, cboStyleMarker);
        QWidget::setTabOrder(cboStyleMarker, pbtnStyleMarker);
        QWidget::setTabOrder(pbtnStyleMarker, cboStyleLine);
        QWidget::setTabOrder(cboStyleLine, pbtnStyleLine);
        QWidget::setTabOrder(pbtnStyleLine, cboStyleFill);
        QWidget::setTabOrder(cboStyleFill, pbtnStyleFill);
        QWidget::setTabOrder(pbtnStyleFill, cboStyleColorRamp);
        QWidget::setTabOrder(cboStyleColorRamp, pbtnStyleColorRamp);
        QWidget::setTabOrder(pbtnStyleColorRamp, mDefaultOpacityWidget);
        QWidget::setTabOrder(mDefaultOpacityWidget, cbxStyleRandomColors);
        QWidget::setTabOrder(cbxStyleRandomColors, pbtnStyleManager);
        QWidget::setTabOrder(pbtnStyleManager, mButtonAddColor);
        QWidget::setTabOrder(mButtonAddColor, mButtonRemoveColor);
        QWidget::setTabOrder(mButtonRemoveColor, mButtonCopyColors);
        QWidget::setTabOrder(mButtonCopyColors, mButtonPasteColors);
        QWidget::setTabOrder(mButtonPasteColors, mButtonImportColors);
        QWidget::setTabOrder(mButtonImportColors, mButtonExportColors);
        QWidget::setTabOrder(mButtonExportColors, mAutoTransaction);
        QWidget::setTabOrder(mAutoTransaction, mEvaluateDefaultValues);
        QWidget::setTabOrder(mEvaluateDefaultValues, mTrustProjectCheckBox);
        QWidget::setTabOrder(mTrustProjectCheckBox, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, grpPythonMacros);
        QWidget::setTabOrder(grpPythonMacros, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, grpOWSServiceCapabilities);
        QWidget::setTabOrder(grpOWSServiceCapabilities, mWMSName);
        QWidget::setTabOrder(mWMSName, mWMSTitle);
        QWidget::setTabOrder(mWMSTitle, mWMSContactOrganization);
        QWidget::setTabOrder(mWMSContactOrganization, mWMSContactPerson);
        QWidget::setTabOrder(mWMSContactPerson, mWMSContactPositionCb);
        QWidget::setTabOrder(mWMSContactPositionCb, mWMSContactMail);
        QWidget::setTabOrder(mWMSContactMail, mWMSContactPhone);
        QWidget::setTabOrder(mWMSContactPhone, mWMSAbstract);
        QWidget::setTabOrder(mWMSAbstract, mWMSFeesCb);
        QWidget::setTabOrder(mWMSFeesCb, mWMSAccessConstraintsCb);
        QWidget::setTabOrder(mWMSAccessConstraintsCb, mWMSKeywordList);
        QWidget::setTabOrder(mWMSKeywordList, grpWMSExt);
        QWidget::setTabOrder(grpWMSExt, mWMSExtMinX);
        QWidget::setTabOrder(mWMSExtMinX, mWMSExtMinY);
        QWidget::setTabOrder(mWMSExtMinY, mWMSExtMaxX);
        QWidget::setTabOrder(mWMSExtMaxX, mWMSExtMaxY);
        QWidget::setTabOrder(mWMSExtMaxY, pbnWMSExtCanvas);
        QWidget::setTabOrder(pbnWMSExtCanvas, grpWMSList);
        QWidget::setTabOrder(grpWMSList, mSearchLineEdit);
        QWidget::setTabOrder(mSearchLineEdit, pbnWMSAddSRS);
        QWidget::setTabOrder(pbnWMSAddSRS, pbnWMSRemoveSRS);
        QWidget::setTabOrder(pbnWMSRemoveSRS, pbnWMSSetUsedSRS);
        QWidget::setTabOrder(pbnWMSSetUsedSRS, mWMSList);
        QWidget::setTabOrder(mWMSList, mWMSPrintLayoutGroupBox);
        QWidget::setTabOrder(mWMSPrintLayoutGroupBox, mAddWMSPrintLayoutButton);
        QWidget::setTabOrder(mAddWMSPrintLayoutButton, mRemoveWMSPrintLayoutButton);
        QWidget::setTabOrder(mRemoveWMSPrintLayoutButton, mPrintLayoutListWidget);
        QWidget::setTabOrder(mPrintLayoutListWidget, mLayerRestrictionsGroupBox);
        QWidget::setTabOrder(mLayerRestrictionsGroupBox, mAddLayerRestrictionButton);
        QWidget::setTabOrder(mAddLayerRestrictionButton, mRemoveLayerRestrictionButton);
        QWidget::setTabOrder(mRemoveLayerRestrictionButton, mLayerRestrictionsListWidget);
        QWidget::setTabOrder(mLayerRestrictionsListWidget, mWMSInspire);
        QWidget::setTabOrder(mWMSInspire, mWMSInspireLanguage);
        QWidget::setTabOrder(mWMSInspireLanguage, mWMSInspireScenario1);
        QWidget::setTabOrder(mWMSInspireScenario1, mWMSInspireMetadataUrl);
        QWidget::setTabOrder(mWMSInspireMetadataUrl, mWMSInspireMetadataUrlType);
        QWidget::setTabOrder(mWMSInspireMetadataUrlType, mWMSInspireScenario2);
        QWidget::setTabOrder(mWMSInspireScenario2, mWMSInspireTemporalReference);
        QWidget::setTabOrder(mWMSInspireTemporalReference, mWMSInspireMetadataDate);
        QWidget::setTabOrder(mWMSInspireMetadataDate, mWmsUseLayerIDs);
        QWidget::setTabOrder(mWmsUseLayerIDs, mAddWktGeometryCheckBox);
        QWidget::setTabOrder(mAddWktGeometryCheckBox, mSegmentizeFeatureInfoGeometryCheckBox);
        QWidget::setTabOrder(mSegmentizeFeatureInfoGeometryCheckBox, mWMSPrecisionSpinBox);
        QWidget::setTabOrder(mWMSPrecisionSpinBox, mWMSUrlLineEdit);
        QWidget::setTabOrder(mWMSUrlLineEdit, mMaxWidthLineEdit);
        QWidget::setTabOrder(mMaxWidthLineEdit, mMaxHeightLineEdit);
        QWidget::setTabOrder(mMaxHeightLineEdit, mWMSImageQualitySpinBox);
        QWidget::setTabOrder(mWMSImageQualitySpinBox, mWMTSMinScaleLineEdit);
        QWidget::setTabOrder(mWMTSMinScaleLineEdit, mWMTSUrlLineEdit);
        QWidget::setTabOrder(mWMTSUrlLineEdit, twWFSLayers);
        QWidget::setTabOrder(twWFSLayers, pbnWFSLayersSelectAll);
        QWidget::setTabOrder(pbnWFSLayersSelectAll, pbnWFSLayersDeselectAll);
        QWidget::setTabOrder(pbnWFSLayersDeselectAll, mWFSUrlLineEdit);
        QWidget::setTabOrder(mWFSUrlLineEdit, twWCSLayers);
        QWidget::setTabOrder(twWCSLayers, pbnWCSLayersSelectAll);
        QWidget::setTabOrder(pbnWCSLayersSelectAll, pbnWCSLayersDeselectAll);
        QWidget::setTabOrder(pbnWCSLayersDeselectAll, mWCSUrlLineEdit);
        QWidget::setTabOrder(mWCSUrlLineEdit, pbnLaunchOWSChecker);
        QWidget::setTabOrder(pbnLaunchOWSChecker, teOWSChecker);

        retranslateUi(QgsProjectPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
        QgsProjectPropertiesBase->setWindowTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Properties", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "General", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "General", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "Metadata", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "CRS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Coordinate Reference System", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsProjectPropertiesBase", "Transformations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Coordinate transformations and operations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsProjectPropertiesBase", "Default Styles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Default styles", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsProjectPropertiesBase", "Data Sources", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Data sources", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsProjectPropertiesBase", "Relations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Relations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsProjectPropertiesBase", "Variables", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Variables", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsProjectPropertiesBase", "Macros", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem8->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Macros", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QgsProjectPropertiesBase", "QGIS Server", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem9->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "WMS/WFS/WCS Server Configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QgsProjectPropertiesBase", "Temporal", Q_NULLPTR));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        titleBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "General Settings", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsProjectPropertiesBase", "Pro&ject file", Q_NULLPTR));
        textLabel1->setText(QApplication::translate("QgsProjectPropertiesBase", "Selection color", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsProjectPropertiesBase", "Sa&ve paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mProjectHomeLineEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Project home path. Leave blank to use the current project file location.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mButtonSetProjectHome->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Set the project home path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonSetProjectHome->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        titleEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        titleEdit->setText(QApplication::translate("QgsProjectPropertiesBase", "Default project title", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMapTileRenderingCheckBox->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Checking this setting avoids visible edge artifacts when rendering this project as separate map tiles. Rendering performance will be degraded.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMapTileRenderingCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Avoid artifacts when project is rendered as map tiles (degrades performance)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonOpenProjectFolder->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Open folder containing the project", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonOpenProjectFolder->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
        cbxAbsolutePath->clear();
        cbxAbsolutePath->insertItems(0, QStringList()
         << QApplication::translate("QgsProjectPropertiesBase", "absolute", Q_NULLPTR)
         << QApplication::translate("QgsProjectPropertiesBase", "relative", Q_NULLPTR)
        );
        label_30->setText(QApplication::translate("QgsProjectPropertiesBase", "&Project home", Q_NULLPTR));
        pbnSelectionColor->setText(QString());
        label->setText(QApplication::translate("QgsProjectPropertiesBase", "Back&ground color", Q_NULLPTR));
        pbnCanvasColor->setText(QString());
        btnGrpMeasureEllipsoid->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Measurements", Q_NULLPTR));
        label_28->setText(QApplication::translate("QgsProjectPropertiesBase", "Units for distance measurement", Q_NULLPTR));
        textLabel1_8->setText(QApplication::translate("QgsProjectPropertiesBase", "Ellipsoid\n"
"(for distance and area calculations)", Q_NULLPTR));
        label_41->setText(QApplication::translate("QgsProjectPropertiesBase", "Semi-major", Q_NULLPTR));
        label_42->setText(QApplication::translate("QgsProjectPropertiesBase", "Semi-minor", Q_NULLPTR));
        label_29->setText(QApplication::translate("QgsProjectPropertiesBase", "Units for area measurement", Q_NULLPTR));
        mCoordinateDisplayGroup->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Coordinate and Bearing Display", Q_NULLPTR));
        label_26->setText(QApplication::translate("QgsProjectPropertiesBase", "Coordinate precision", Q_NULLPTR));
        label_25->setText(QApplication::translate("QgsProjectPropertiesBase", "Display coordinates using", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radAutomatic->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Automatically sets the number of decimal places to use when displaying coordinates", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radAutomatic->setText(QApplication::translate("QgsProjectPropertiesBase", "A&utomatic", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radManual->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Manually set the number of decimal places to use when displaying coordinates", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radManual->setText(QApplication::translate("QgsProjectPropertiesBase", "Manual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spinBoxDP->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelDP->setText(QApplication::translate("QgsProjectPropertiesBase", "decimal places", Q_NULLPTR));
        label_34->setText(QApplication::translate("QgsProjectPropertiesBase", "Bearing format", Q_NULLPTR));
        mCustomizeBearingFormatButton->setText(QApplication::translate("QgsProjectPropertiesBase", "Customize\342\200\246", Q_NULLPTR));
        grpProjectScales->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Predefined Scales", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAddScale->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Add predefined scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAddScale->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnRemoveScale->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Remove selected scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnRemoveScale->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnImportScales->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Import from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnImportScales->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnExportScales->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Save to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnExportScales->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Generate Project Translation File", Q_NULLPTR));
        sourceLanguageLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Source language", Q_NULLPTR));
        generateTsFileButton->setText(QApplication::translate("QgsProjectPropertiesBase", "Generate TS File", Q_NULLPTR));
        cbxProjectionEnabled->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Coordinate Reference System (CRS)", Q_NULLPTR));
        mDatumTransformGroupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Datum Transformations", Q_NULLPTR));
        mShowDatumTransformDialogCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Ask for datum transformation if several are available (defined in global setting)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Default Symbols", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnStyleMarker->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Edit symbol", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbtnStyleMarker->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
        lblStyleLine->setText(QApplication::translate("QgsProjectPropertiesBase", "Line", Q_NULLPTR));
        label_14->setText(QString());
        pixStyleFill->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbtnStyleLine->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Edit symbol", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbtnStyleLine->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
        pixStyleLine->setText(QString());
        lblStyleColorRamp->setText(QApplication::translate("QgsProjectPropertiesBase", "Color Ramp", Q_NULLPTR));
        pixStyleMarker->setText(QString());
        lblStyleMarker->setText(QApplication::translate("QgsProjectPropertiesBase", "Marker", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnStyleFill->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Edit symbol", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbtnStyleFill->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
        lblStyleFill->setText(QApplication::translate("QgsProjectPropertiesBase", "Fill", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnStyleColorRamp->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Edit symbol", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbtnStyleColorRamp->setText(QApplication::translate("QgsProjectPropertiesBase", "\342\200\246", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Options", Q_NULLPTR));
        label_27->setText(QApplication::translate("QgsProjectPropertiesBase", "Opacity", Q_NULLPTR));
        cbxStyleRandomColors->setText(QApplication::translate("QgsProjectPropertiesBase", "Assign random colors to symbols", Q_NULLPTR));
        pbtnStyleManager->setText(QApplication::translate("QgsProjectPropertiesBase", "Style Manager", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonCopyColors->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Copy colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonCopyColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonAddColor->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Add color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAddColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonPasteColors->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Paste colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonPasteColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonRemoveColor->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Remove color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemoveColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonImportColors->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Import colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mButtonImportColors->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mButtonImportColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonExportColors->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Export colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonExportColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAutoTransaction->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "When enabled, layers from the same database connection will be put into a transaction group. Their edit state will be synchronized and changes to these layers will be sent to the provider immediately. Only supported for postgres, GPKG, spatialite and oracle.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAutoTransaction->setText(QApplication::translate("QgsProjectPropertiesBase", "Automatically create transaction groups where possible", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEvaluateDefaultValues->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "When enabled, default values will be evaluated as early as possible. This will fill default values in the add feature form already and not only create them on commit. Only supported for postgres, GPKG, spatialite and oracle.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEvaluateDefaultValues->setText(QApplication::translate("QgsProjectPropertiesBase", "Evaluate default values on provider side", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTrustProjectCheckBox->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Speed up project loading by skipping data checks in PostgreSQL layers. Useful in QGIS server context or project with huge database views or materialized views.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTrustProjectCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Trust project when data source has no metadata", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Layers Capabilities", Q_NULLPTR));
        mLayerCapabilitiesToggleSelectionButton->setText(QApplication::translate("QgsProjectPropertiesBase", "Toggle Selection", Q_NULLPTR));
        mShowSpatialLayersCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Show spatial layers only", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Expression Variables", Q_NULLPTR));
        grpPythonMacros->setTitle(QApplication::translate("QgsProjectPropertiesBase", "&Python Macros", Q_NULLPTR));
        grpOWSServiceCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Service Capabilities", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSName->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "A name used to identify the root layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSName->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "A name used to identify the root layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSContactPositionCb->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The contact person position for the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        mWMSContactPositionCb->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        mWMSAccessConstraintsCb->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Access constraints applied to the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mWMSContactPerson->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The contact person name for the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSContactPerson->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "The contact person name for the service.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSOnlineResourceLineEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The web site URL of the service provider.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSOnlineResourceLineEdit->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "The web site URL of the service provider.", Q_NULLPTR));
        mWMSOnlineResourceExpressionButton->setText(QApplication::translate("QgsProjectPropertiesBase", "...", Q_NULLPTR));
        label_20->setText(QApplication::translate("QgsProjectPropertiesBase", "Position", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSTitle->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The title should be brief yet descriptive enough to identify this service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSTitle->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "The title should be brief yet descriptive enough to identify this service.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSFeesCb->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Fees applied to the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mWMSContactMail->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The contact person e-mail for the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSContactMail->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "The contact person e-mail for the service.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSAbstract->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The abstract is a descriptive narrative providing more information about the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mWMSAbstract->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mWMSAbstract->setDocumentTitle(QString());
        label_11->setText(QApplication::translate("QgsProjectPropertiesBase", "Or&ganization", Q_NULLPTR));
        mWMSAccessConstraintsLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Access constraints", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsProjectPropertiesBase", "Phone", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSContactPhone->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The contact person phone for the service.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSContactPhone->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "The contact person phone for the service.", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsProjectPropertiesBase", "Title", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "These parameters are used to generate the GetCapabilities document and shall be chosen carefully to avoid interoperability and security issues.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSKeywordList->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "List of keywords separated by comma to help catalog searching.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSKeywordList->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "List of keywords separated by comma to help catalog searching.", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsProjectPropertiesBase", "E-Mail", Q_NULLPTR));
        label_15->setText(QApplication::translate("QgsProjectPropertiesBase", "Abstract", Q_NULLPTR));
        mWMSKeywordListLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Keyword list", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsProjectPropertiesBase", "&Person", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWMSContactOrganization->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The name of the service provider.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSContactOrganization->setPlaceholderText(QApplication::translate("QgsProjectPropertiesBase", "The name of the service provider.", Q_NULLPTR));
        mWMSFeesLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Fees", Q_NULLPTR));
        mWMSOnlineResourceLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Online resource", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsProjectPropertiesBase", "Short name", Q_NULLPTR));
        grpWMSCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WMS capabilities", Q_NULLPTR));
        mLayerRestrictionsGroupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Exclude layers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddLayerRestrictionButton->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Add layer to exclude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddLayerRestrictionButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveLayerRestrictionButton->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Remove selected layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveLayerRestrictionButton->setText(QString());
        mMaxWidthLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Width", Q_NULLPTR));
        mMaxHeightLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Height", Q_NULLPTR));
        label_21->setText(QApplication::translate("QgsProjectPropertiesBase", "Maximums for GetMap request", Q_NULLPTR));
        grpWMSList->setTitle(QApplication::translate("QgsProjectPropertiesBase", "CRS restrictions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnWMSRemoveSRS->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Remove selected CRS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pbnWMSSetUsedSRS->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Fetch all CRS's from layers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnWMSSetUsedSRS->setText(QApplication::translate("QgsProjectPropertiesBase", "Used", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnWMSAddSRS->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Add new CRS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWMSMaxAtlasFeaturesLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Maximum features for Atlas print requests", Q_NULLPTR));
        mWmsUseLayerIDs->setText(QApplication::translate("QgsProjectPropertiesBase", "Use layer ids as names", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsProjectPropertiesBase", "GetFeatureInfo geometry precision (decimal places)", Q_NULLPTR));
        mWMSDefaultMapUnitsPerMmLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Default map units per mm in legend", Q_NULLPTR));
        grpWMSExt->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Ad&vertised extent", Q_NULLPTR));
        mWMSExtMinX->setText(QString());
        label_17->setText(QApplication::translate("QgsProjectPropertiesBase", "Min. &Y", Q_NULLPTR));
        label_16->setText(QApplication::translate("QgsProjectPropertiesBase", "Min. &X", Q_NULLPTR));
        mWMSExtMinY->setText(QString());
        label_18->setText(QApplication::translate("QgsProjectPropertiesBase", "Max. X", Q_NULLPTR));
        pbnWMSExtCanvas->setText(QApplication::translate("QgsProjectPropertiesBase", "Use Current Canvas Extent", Q_NULLPTR));
        label_19->setText(QApplication::translate("QgsProjectPropertiesBase", "Max. Y", Q_NULLPTR));
        mWMSExtMaxY->setText(QString());
        mWMSExtMaxX->setText(QString());
        mAddWktGeometryCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Add geometry to feature response", Q_NULLPTR));
        mWMSInspire->setTitle(QApplication::translate("QgsProjectPropertiesBase", "INSPIRE (European directive)", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsProjectPropertiesBase", "Service language", Q_NULLPTR));
        mWMSInspireScenario2->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Scenario &2 - INSPIRE related fields using embedded service metadata", Q_NULLPTR));
        label_23->setText(QApplication::translate("QgsProjectPropertiesBase", "Metadata date", Q_NULLPTR));
        label_22->setText(QApplication::translate("QgsProjectPropertiesBase", "Last revision date", Q_NULLPTR));
        mWMSInspireScenario1->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Scenario &1 - INSPIRE related fields using referenced external service metadata", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsProjectPropertiesBase", "Metadata URL", Q_NULLPTR));
        mWMSInspireMetadataUrlType->clear();
        mWMSInspireMetadataUrlType->insertItems(0, QStringList()
         << QApplication::translate("QgsProjectPropertiesBase", "application/vnd.iso.19139+xml", Q_NULLPTR)
         << QApplication::translate("QgsProjectPropertiesBase", "application/vnd.ogc.csw.GetRecordByIdResponse_xml", Q_NULLPTR)
         << QApplication::translate("QgsProjectPropertiesBase", "application/vnd.ogc.csw_xml", Q_NULLPTR)
        );
        label_24->setText(QApplication::translate("QgsProjectPropertiesBase", "URL mime/type", Q_NULLPTR));
        mSegmentizeFeatureInfoGeometryCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Segmentize feature info geometry", Q_NULLPTR));
        mWMSPrintLayoutGroupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Excl&ude layouts", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddWMSPrintLayoutButton->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Add layout to exclude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddWMSPrintLayoutButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveWMSPrintLayoutButton->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Remove selected layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveWMSPrintLayoutButton->setText(QString());
        mWMSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", Q_NULLPTR));
        mWMSImageQualityLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Quality for JPEG images ( 10 : smaller image - 100 : best quality )", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_33->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "When using tiles set this to the size of the larger symbols to avoid cut symbols at tile boundaries. This works by drawing features that are outside the tile extent.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_33->setText(QApplication::translate("QgsProjectPropertiesBase", "Tile buffer in pixels", Q_NULLPTR));
        grpWmtsCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WMTS capabilities", Q_NULLPTR));
        mWMTSMinScaleLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Minimum scale", Q_NULLPTR));
        mWMTSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", Q_NULLPTR));
        label_31->setText(QApplication::translate("QgsProjectPropertiesBase", "Published layers", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = twWmtsLayers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsProjectPropertiesBase", "JPEG", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsProjectPropertiesBase", "PNG", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsProjectPropertiesBase", "Published", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsProjectPropertiesBase", "Layer", Q_NULLPTR));
        label_32->setText(QApplication::translate("QgsProjectPropertiesBase", "Grids", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = twWmtsGrids->headerItem();
        ___qtreewidgetitem1->setText(6, QApplication::translate("QgsProjectPropertiesBase", "Max. scale", Q_NULLPTR));
        ___qtreewidgetitem1->setText(5, QApplication::translate("QgsProjectPropertiesBase", "Last level", Q_NULLPTR));
        ___qtreewidgetitem1->setText(4, QApplication::translate("QgsProjectPropertiesBase", "Min. scale", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("QgsProjectPropertiesBase", "Left", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsProjectPropertiesBase", "Top", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsProjectPropertiesBase", "Published", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsProjectPropertiesBase", "CRS", Q_NULLPTR));
        grpWFSCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WFS capabilities (also influences DXF export)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = twWFSLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = twWFSLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "Published", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = twWFSLayers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "Geometry precision (decimal places)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = twWFSLayers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsProjectPropertiesBase", "Update", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = twWFSLayers->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsProjectPropertiesBase", "Insert", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = twWFSLayers->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsProjectPropertiesBase", "Delete", Q_NULLPTR));
        pbnWFSLayersDeselectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Deselect All", Q_NULLPTR));
        pbnWFSLayersSelectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Select All", Q_NULLPTR));
        mWFSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", Q_NULLPTR));
        grpWCSCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WCS capabilities", Q_NULLPTR));
        pbnWCSLayersDeselectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Deselect All", Q_NULLPTR));
        mWCSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", Q_NULLPTR));
        pbnWCSLayersSelectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Select All", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = twWCSLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = twWCSLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsProjectPropertiesBase", "Published", Q_NULLPTR));
        mOWSCheckerGroupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Test Configuration", Q_NULLPTR));
        pbnLaunchOWSChecker->setText(QApplication::translate("QgsProjectPropertiesBase", "Launch", Q_NULLPTR));
        mTemporalOptionsGroup->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Temporal Options", Q_NULLPTR));
        mStartDateTimeEdit->setDisplayFormat(QApplication::translate("QgsProjectPropertiesBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        label_35->setText(QApplication::translate("QgsProjectPropertiesBase", "Start date", Q_NULLPTR));
        mCalculateFromLayerButton->setText(QApplication::translate("QgsProjectPropertiesBase", "Calculate from Layers", Q_NULLPTR));
        label_36->setText(QApplication::translate("QgsProjectPropertiesBase", "End date", Q_NULLPTR));
        mEndDateTimeEdit->setDisplayFormat(QApplication::translate("QgsProjectPropertiesBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTPROPERTIESBASE_H
