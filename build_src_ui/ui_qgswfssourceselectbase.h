/********************************************************************************
** Form generated from reading UI file 'qgswfssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWFSSOURCESELECTBASE_H
#define UI_QGSWFSSOURCESELECTBASE_H

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
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_QgsWFSSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QCheckBox *cbxFeatureCurrentViewExtent;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_2;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *spacerItem;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QHBoxLayout *horizontalLayoutFilter;
    QLabel *labelFilter;
    QLineEdit *lineFilter;
    QDialogButtonBox *buttonBox;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QSpacerItem *spacerItem1;
    QPushButton *btnChangeSpatialRefSys;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbxUseTitleLayerName;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mHoldDialogOpen;

    void setupUi(QDialog *QgsWFSSourceSelectBase)
    {
        if (QgsWFSSourceSelectBase->objectName().isEmpty())
            QgsWFSSourceSelectBase->setObjectName(QStringLiteral("QgsWFSSourceSelectBase"));
        QgsWFSSourceSelectBase->resize(592, 439);
        gridLayout = new QGridLayout(QgsWFSSourceSelectBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeView = new QTreeView(QgsWFSSourceSelectBase);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setVisible(true);

        gridLayout->addWidget(treeView, 2, 0, 1, 1);

        cbxFeatureCurrentViewExtent = new QCheckBox(QgsWFSSourceSelectBase);
        cbxFeatureCurrentViewExtent->setObjectName(QStringLiteral("cbxFeatureCurrentViewExtent"));

        gridLayout->addWidget(cbxFeatureCurrentViewExtent, 5, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsWFSSourceSelectBase);
        GroupBox1->setObjectName(QStringLiteral("GroupBox1"));
        gridLayout_2 = new QGridLayout(GroupBox1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cmbConnections = new QComboBox(GroupBox1);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setEnabled(false);

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(GroupBox1);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(GroupBox1);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setEnabled(false);

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(GroupBox1);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout->addWidget(btnDelete);

        spacerItem = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        btnLoad = new QPushButton(GroupBox1);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(GroupBox1);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        horizontalLayoutFilter = new QHBoxLayout();
        horizontalLayoutFilter->setObjectName(QStringLiteral("horizontalLayoutFilter"));
        labelFilter = new QLabel(QgsWFSSourceSelectBase);
        labelFilter->setObjectName(QStringLiteral("labelFilter"));
        labelFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(labelFilter);

        lineFilter = new QLineEdit(QgsWFSSourceSelectBase);
        lineFilter->setObjectName(QStringLiteral("lineFilter"));
        lineFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(lineFilter);


        gridLayout->addLayout(horizontalLayoutFilter, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsWFSSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 1);

        gbCRS = new QGroupBox(QgsWFSSourceSelectBase);
        gbCRS->setObjectName(QStringLiteral("gbCRS"));
        hboxLayout = new QHBoxLayout(gbCRS);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QStringLiteral("labelCoordRefSys"));

        hboxLayout->addWidget(labelCoordRefSys);

        spacerItem1 = new QSpacerItem(441, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QStringLiteral("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        hboxLayout->addWidget(btnChangeSpatialRefSys);


        gridLayout->addWidget(gbCRS, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cbxUseTitleLayerName = new QCheckBox(QgsWFSSourceSelectBase);
        cbxUseTitleLayerName->setObjectName(QStringLiteral("cbxUseTitleLayerName"));

        horizontalLayout_4->addWidget(cbxUseTitleLayerName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mHoldDialogOpen = new QCheckBox(QgsWFSSourceSelectBase);
        mHoldDialogOpen->setObjectName(QStringLiteral("mHoldDialogOpen"));

        horizontalLayout_4->addWidget(mHoldDialogOpen);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelFilter->setBuddy(lineFilter);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, lineFilter);
        QWidget::setTabOrder(lineFilter, treeView);
        QWidget::setTabOrder(treeView, cbxUseTitleLayerName);
        QWidget::setTabOrder(cbxUseTitleLayerName, mHoldDialogOpen);
        QWidget::setTabOrder(mHoldDialogOpen, cbxFeatureCurrentViewExtent);
        QWidget::setTabOrder(cbxFeatureCurrentViewExtent, btnChangeSpatialRefSys);

        retranslateUi(QgsWFSSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsWFSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWFSSourceSelectBase)
    {
        QgsWFSSourceSelectBase->setWindowTitle(QApplication::translate("QgsWFSSourceSelectBase", "Add WFS Layer from a Server", Q_NULLPTR));
        cbxFeatureCurrentViewExtent->setText(QApplication::translate("QgsWFSSourceSelectBase", "Only request features overlapping the view extent", Q_NULLPTR));
        GroupBox1->setTitle(QApplication::translate("QgsWFSSourceSelectBase", "Server Connections", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConnect->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Connect to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConnect->setText(QApplication::translate("QgsWFSSourceSelectBase", "C&onnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Create a new service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsWFSSourceSelectBase", "&New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Edit selected service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsWFSSourceSelectBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Remove connection to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsWFSSourceSelectBase", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Load connections from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsWFSSourceSelectBase", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsWFSSourceSelectBase", "Save", Q_NULLPTR));
        labelFilter->setText(QApplication::translate("QgsWFSSourceSelectBase", "Filter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineFilter->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineFilter->setWhatsThis(QApplication::translate("QgsWFSSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        gbCRS->setTitle(QApplication::translate("QgsWFSSourceSelectBase", "Coordinate Reference System", Q_NULLPTR));
        labelCoordRefSys->setText(QString());
        btnChangeSpatialRefSys->setText(QApplication::translate("QgsWFSSourceSelectBase", "Change\342\200\246", Q_NULLPTR));
        cbxUseTitleLayerName->setText(QApplication::translate("QgsWFSSourceSelectBase", "Use title for layer name", Q_NULLPTR));
        mHoldDialogOpen->setText(QApplication::translate("QgsWFSSourceSelectBase", "Keep dialog open", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsWFSSourceSelectBase: public Ui_QgsWFSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWFSSOURCESELECTBASE_H
