/********************************************************************************
** Form generated from reading UI file 'qgswmssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMSSOURCESELECTBASE_H
#define UI_QGSWMSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsWMSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QLabel *labelStatus;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leLayerName;
    QTabWidget *tabServers;
    QWidget *tabLayers;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QComboBox *cmbConnections;
    QGroupBox *btnGrpImageEncoding;
    QGroupBox *gbCRS;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QCheckBox *mContextualLegendCheckbox;
    QLabel *label_3;
    QLineEdit *mTileWidth;
    QLineEdit *mFeatureCount;
    QPushButton *btnChangeSpatialRefSys;
    QLabel *labelCoordRefSys;
    QLineEdit *mTileHeight;
    QLabel *label_4;
    QLineEdit *mStepWidth;
    QLineEdit *mStepHeight;
    QTreeWidget *lstLayers;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QgsFilterLineEdit *mLayersFilterLineEdit;
    QWidget *tabLayerOrder;
    QGridLayout *gridLayout2;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *spacerItem;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *tabTilesets;
    QGridLayout *gridLayout_3;
    QTableWidget *lstTilesets;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QgsFilterLineEdit *mTilesetsFilterLineEdit;

    void setupUi(QDialog *QgsWMSSourceSelectBase)
    {
        if (QgsWMSSourceSelectBase->objectName().isEmpty())
            QgsWMSSourceSelectBase->setObjectName(QStringLiteral("QgsWMSSourceSelectBase"));
        QgsWMSSourceSelectBase->resize(744, 595);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsWMSSourceSelectBase->setWindowIcon(icon);
        QgsWMSSourceSelectBase->setSizeGripEnabled(true);
        QgsWMSSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsWMSSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsWMSSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        labelStatus = new QLabel(QgsWMSSourceSelectBase);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy);
        labelStatus->setWordWrap(false);

        gridLayout_2->addWidget(labelStatus, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QgsWMSSourceSelectBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leLayerName = new QLineEdit(QgsWMSSourceSelectBase);
        leLayerName->setObjectName(QStringLiteral("leLayerName"));

        horizontalLayout->addWidget(leLayerName);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabServers = new QTabWidget(QgsWMSSourceSelectBase);
        tabServers->setObjectName(QStringLiteral("tabServers"));
        tabServers->setEnabled(true);
        tabLayers = new QWidget();
        tabLayers->setObjectName(QStringLiteral("tabLayers"));
        gridLayout = new QGridLayout(tabLayers);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnConnect = new QPushButton(tabLayers);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setEnabled(false);

        horizontalLayout_2->addWidget(btnConnect);

        btnNew = new QPushButton(tabLayers);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        horizontalLayout_2->addWidget(btnNew);

        btnEdit = new QPushButton(tabLayers);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setEnabled(false);

        horizontalLayout_2->addWidget(btnEdit);

        btnDelete = new QPushButton(tabLayers);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout_2->addWidget(btnDelete);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnLoad = new QPushButton(tabLayers);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        horizontalLayout_2->addWidget(btnLoad);

        btnSave = new QPushButton(tabLayers);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout_2->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        cmbConnections = new QComboBox(tabLayers);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 1);

        btnGrpImageEncoding = new QGroupBox(tabLayers);
        btnGrpImageEncoding->setObjectName(QStringLiteral("btnGrpImageEncoding"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnGrpImageEncoding->sizePolicy().hasHeightForWidth());
        btnGrpImageEncoding->setSizePolicy(sizePolicy1);
        btnGrpImageEncoding->setMinimumSize(QSize(16, 64));

        gridLayout->addWidget(btnGrpImageEncoding, 5, 0, 1, 1);

        gbCRS = new QGroupBox(tabLayers);
        gbCRS->setObjectName(QStringLiteral("gbCRS"));
        gridLayout1 = new QGridLayout(gbCRS);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_2 = new QLabel(gbCRS);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        mContextualLegendCheckbox = new QCheckBox(gbCRS);
        mContextualLegendCheckbox->setObjectName(QStringLiteral("mContextualLegendCheckbox"));

        gridLayout1->addWidget(mContextualLegendCheckbox, 5, 0, 1, 1);

        label_3 = new QLabel(gbCRS);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 3, 0, 1, 2);

        mTileWidth = new QLineEdit(gbCRS);
        mTileWidth->setObjectName(QStringLiteral("mTileWidth"));

        gridLayout1->addWidget(mTileWidth, 1, 1, 1, 1);

        mFeatureCount = new QLineEdit(gbCRS);
        mFeatureCount->setObjectName(QStringLiteral("mFeatureCount"));

        gridLayout1->addWidget(mFeatureCount, 3, 2, 1, 1);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QStringLiteral("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        gridLayout1->addWidget(btnChangeSpatialRefSys, 4, 2, 1, 1);

        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QStringLiteral("labelCoordRefSys"));

        gridLayout1->addWidget(labelCoordRefSys, 4, 0, 1, 2);

        mTileHeight = new QLineEdit(gbCRS);
        mTileHeight->setObjectName(QStringLiteral("mTileHeight"));

        gridLayout1->addWidget(mTileHeight, 1, 2, 1, 1);

        label_4 = new QLabel(gbCRS);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        mStepWidth = new QLineEdit(gbCRS);
        mStepWidth->setObjectName(QStringLiteral("mStepWidth"));

        gridLayout1->addWidget(mStepWidth, 2, 1, 1, 1);

        mStepHeight = new QLineEdit(gbCRS);
        mStepHeight->setObjectName(QStringLiteral("mStepHeight"));

        gridLayout1->addWidget(mStepHeight, 2, 2, 1, 1);


        gridLayout->addWidget(gbCRS, 6, 0, 1, 1);

        lstLayers = new QTreeWidget(tabLayers);
        lstLayers->setObjectName(QStringLiteral("lstLayers"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lstLayers->sizePolicy().hasHeightForWidth());
        lstLayers->setSizePolicy(sizePolicy2);
        lstLayers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstLayers->setAllColumnsShowFocus(true);

        gridLayout->addWidget(lstLayers, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        mLayersFilterLineEdit = new QgsFilterLineEdit(tabLayers);
        mLayersFilterLineEdit->setObjectName(QStringLiteral("mLayersFilterLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLayersFilterLineEdit->sizePolicy().hasHeightForWidth());
        mLayersFilterLineEdit->setSizePolicy(sizePolicy3);
        mLayersFilterLineEdit->setShowSearchIcon(true);
        mLayersFilterLineEdit->setProperty("qgisRelation", QVariant(QStringLiteral("")));

        horizontalLayout_3->addWidget(mLayersFilterLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        tabServers->addTab(tabLayers, QString());
        tabLayerOrder = new QWidget();
        tabLayerOrder->setObjectName(QStringLiteral("tabLayerOrder"));
        gridLayout2 = new QGridLayout(tabLayerOrder);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        mLayerUpButton = new QPushButton(tabLayerOrder);
        mLayerUpButton->setObjectName(QStringLiteral("mLayerUpButton"));

        gridLayout2->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(tabLayerOrder);
        mLayerDownButton->setObjectName(QStringLiteral("mLayerDownButton"));

        gridLayout2->addWidget(mLayerDownButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(tabLayerOrder);
        mLayerOrderTreeWidget->setObjectName(QStringLiteral("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(3);

        gridLayout2->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        tabServers->addTab(tabLayerOrder, QString());
        tabTilesets = new QWidget();
        tabTilesets->setObjectName(QStringLiteral("tabTilesets"));
        gridLayout_3 = new QGridLayout(tabTilesets);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lstTilesets = new QTableWidget(tabTilesets);
        if (lstTilesets->columnCount() < 6)
            lstTilesets->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        lstTilesets->setObjectName(QStringLiteral("lstTilesets"));
        lstTilesets->setAlternatingRowColors(true);
        lstTilesets->setSelectionMode(QAbstractItemView::SingleSelection);
        lstTilesets->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstTilesets->setCornerButtonEnabled(false);
        lstTilesets->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(lstTilesets, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        mTilesetsFilterLineEdit = new QgsFilterLineEdit(tabTilesets);
        mTilesetsFilterLineEdit->setObjectName(QStringLiteral("mTilesetsFilterLineEdit"));
        sizePolicy3.setHeightForWidth(mTilesetsFilterLineEdit->sizePolicy().hasHeightForWidth());
        mTilesetsFilterLineEdit->setSizePolicy(sizePolicy3);
        mTilesetsFilterLineEdit->setShowSearchIcon(true);
        mTilesetsFilterLineEdit->setProperty("qgisRelation", QVariant(QStringLiteral("")));

        horizontalLayout_4->addWidget(mTilesetsFilterLineEdit);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabServers->addTab(tabTilesets, QString());

        gridLayout_2->addWidget(tabServers, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(leLayerName);
        label_2->setBuddy(mTileWidth);
        label_3->setBuddy(mFeatureCount);
        labelCoordRefSys->setBuddy(btnChangeSpatialRefSys);
        label_4->setBuddy(mTileWidth);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabServers, cmbConnections);
        QWidget::setTabOrder(cmbConnections, lstLayers);
        QWidget::setTabOrder(lstLayers, mTileWidth);
        QWidget::setTabOrder(mTileWidth, mTileHeight);
        QWidget::setTabOrder(mTileHeight, mStepWidth);
        QWidget::setTabOrder(mStepWidth, mStepHeight);
        QWidget::setTabOrder(mStepHeight, mFeatureCount);
        QWidget::setTabOrder(mFeatureCount, btnChangeSpatialRefSys);
        QWidget::setTabOrder(btnChangeSpatialRefSys, mContextualLegendCheckbox);
        QWidget::setTabOrder(mContextualLegendCheckbox, leLayerName);
        QWidget::setTabOrder(leLayerName, lstTilesets);
        QWidget::setTabOrder(lstTilesets, mLayerOrderTreeWidget);
        QWidget::setTabOrder(mLayerOrderTreeWidget, mLayerDownButton);
        QWidget::setTabOrder(mLayerDownButton, mLayerUpButton);

        retranslateUi(QgsWMSSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsWMSSourceSelectBase, SLOT(reject()));

        tabServers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsWMSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWMSSourceSelectBase)
    {
        QgsWMSSourceSelectBase->setWindowTitle(QApplication::translate("QgsWMSSourceSelectBase", "Add Layer(s) from a WM(T)S Server", Q_NULLPTR));
        labelStatus->setText(QApplication::translate("QgsWMSSourceSelectBase", "Ready", Q_NULLPTR));
        label->setText(QApplication::translate("QgsWMSSourceSelectBase", "Layer name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConnect->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Connect to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConnect->setText(QApplication::translate("QgsWMSSourceSelectBase", "C&onnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Create a new service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsWMSSourceSelectBase", "&New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Edit selected service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsWMSSourceSelectBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Remove connection to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsWMSSourceSelectBase", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Load connections from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsWMSSourceSelectBase", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsWMSSourceSelectBase", "Save", Q_NULLPTR));
        btnGrpImageEncoding->setTitle(QApplication::translate("QgsWMSSourceSelectBase", "Image Encoding", Q_NULLPTR));
        gbCRS->setTitle(QApplication::translate("QgsWMSSourceSelectBase", "Options", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsWMSSourceSelectBase", "Tile size", Q_NULLPTR));
        mContextualLegendCheckbox->setText(QApplication::translate("QgsWMSSourceSelectBase", "Use contextual WMS Legend", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsWMSSourceSelectBase", "Feature limit for GetFeatureInfo", Q_NULLPTR));
        mFeatureCount->setText(QApplication::translate("QgsWMSSourceSelectBase", "10", Q_NULLPTR));
        btnChangeSpatialRefSys->setText(QApplication::translate("QgsWMSSourceSelectBase", "Change\342\200\246", Q_NULLPTR));
        labelCoordRefSys->setText(QApplication::translate("QgsWMSSourceSelectBase", "Coordinate Reference System", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsWMSSourceSelectBase", "Request step size", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = lstLayers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsWMSSourceSelectBase", "Abstract", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsWMSSourceSelectBase", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsWMSSourceSelectBase", "ID", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabLayers), QApplication::translate("QgsWMSSourceSelectBase", "Layers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerUpButton->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Move selected layer UP", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerUpButton->setText(QApplication::translate("QgsWMSSourceSelectBase", "Up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerDownButton->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Move selected layer DOWN", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDownButton->setText(QApplication::translate("QgsWMSSourceSelectBase", "Down", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsWMSSourceSelectBase", "Style", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsWMSSourceSelectBase", "Layer", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabLayerOrder), QApplication::translate("QgsWMSSourceSelectBase", "Layer Order", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = lstTilesets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsWMSSourceSelectBase", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = lstTilesets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsWMSSourceSelectBase", "Format", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = lstTilesets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = lstTilesets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsWMSSourceSelectBase", "Style", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = lstTilesets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsWMSSourceSelectBase", "Tileset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = lstTilesets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsWMSSourceSelectBase", "CRS", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabTilesets), QApplication::translate("QgsWMSSourceSelectBase", "Tilesets", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsWMSSourceSelectBase: public Ui_QgsWMSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMSSOURCESELECTBASE_H
