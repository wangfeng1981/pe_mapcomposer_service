/********************************************************************************
** Form generated from reading UI file 'qgsdbsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDBSOURCESELECTBASE_H
#define UI_QGSDBSOURCESELECTBASE_H

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

class Ui_QgsDbSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *connectionsGroupBox;
    QGridLayout *gridLayout;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QTreeView *mTablesTreeView;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbxAllowGeometrylessTables;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mHoldDialogOpen;
    QGroupBox *mSearchGroupBox;
    QGridLayout *gridLayout1;
    QLabel *mSearchLabel;
    QLabel *mSearchModeLabel;
    QComboBox *mSearchModeComboBox;
    QLabel *mSearchColumnsLabel;
    QComboBox *mSearchColumnComboBox;
    QLineEdit *mSearchTableEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDbSourceSelectBase)
    {
        if (QgsDbSourceSelectBase->objectName().isEmpty())
            QgsDbSourceSelectBase->setObjectName(QStringLiteral("QgsDbSourceSelectBase"));
        QgsDbSourceSelectBase->resize(773, 476);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsDbSourceSelectBase->setWindowIcon(icon);
        QgsDbSourceSelectBase->setSizeGripEnabled(true);
        QgsDbSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsDbSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        connectionsGroupBox = new QGroupBox(QgsDbSourceSelectBase);
        connectionsGroupBox->setObjectName(QStringLiteral("connectionsGroupBox"));
        gridLayout = new QGridLayout(connectionsGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmbConnections = new QComboBox(connectionsGroupBox);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConnect = new QPushButton(connectionsGroupBox);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(connectionsGroupBox);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(connectionsGroupBox);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(connectionsGroupBox);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnLoad = new QPushButton(connectionsGroupBox);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(connectionsGroupBox);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(connectionsGroupBox, 0, 0, 1, 1);

        mTablesTreeView = new QTreeView(QgsDbSourceSelectBase);
        mTablesTreeView->setObjectName(QStringLiteral("mTablesTreeView"));
        mTablesTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTablesTreeView->setAlternatingRowColors(true);
        mTablesTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(mTablesTreeView, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cbxAllowGeometrylessTables = new QCheckBox(QgsDbSourceSelectBase);
        cbxAllowGeometrylessTables->setObjectName(QStringLiteral("cbxAllowGeometrylessTables"));

        horizontalLayout_2->addWidget(cbxAllowGeometrylessTables);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        mHoldDialogOpen = new QCheckBox(QgsDbSourceSelectBase);
        mHoldDialogOpen->setObjectName(QStringLiteral("mHoldDialogOpen"));

        horizontalLayout_2->addWidget(mHoldDialogOpen);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        mSearchGroupBox = new QGroupBox(QgsDbSourceSelectBase);
        mSearchGroupBox->setObjectName(QStringLiteral("mSearchGroupBox"));
        mSearchGroupBox->setFlat(true);
        mSearchGroupBox->setCheckable(true);
        mSearchGroupBox->setChecked(false);
        gridLayout1 = new QGridLayout(mSearchGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        mSearchLabel = new QLabel(mSearchGroupBox);
        mSearchLabel->setObjectName(QStringLiteral("mSearchLabel"));
        mSearchLabel->setEnabled(true);

        gridLayout1->addWidget(mSearchLabel, 0, 0, 1, 1);

        mSearchModeLabel = new QLabel(mSearchGroupBox);
        mSearchModeLabel->setObjectName(QStringLiteral("mSearchModeLabel"));
        mSearchModeLabel->setEnabled(true);

        gridLayout1->addWidget(mSearchModeLabel, 2, 0, 1, 2);

        mSearchModeComboBox = new QComboBox(mSearchGroupBox);
        mSearchModeComboBox->setObjectName(QStringLiteral("mSearchModeComboBox"));
        mSearchModeComboBox->setEnabled(true);

        gridLayout1->addWidget(mSearchModeComboBox, 2, 2, 1, 1);

        mSearchColumnsLabel = new QLabel(mSearchGroupBox);
        mSearchColumnsLabel->setObjectName(QStringLiteral("mSearchColumnsLabel"));
        mSearchColumnsLabel->setEnabled(true);

        gridLayout1->addWidget(mSearchColumnsLabel, 1, 0, 1, 2);

        mSearchColumnComboBox = new QComboBox(mSearchGroupBox);
        mSearchColumnComboBox->setObjectName(QStringLiteral("mSearchColumnComboBox"));
        mSearchColumnComboBox->setEnabled(true);

        gridLayout1->addWidget(mSearchColumnComboBox, 1, 2, 1, 1);

        mSearchTableEdit = new QLineEdit(mSearchGroupBox);
        mSearchTableEdit->setObjectName(QStringLiteral("mSearchTableEdit"));
        mSearchTableEdit->setEnabled(true);

        gridLayout1->addWidget(mSearchTableEdit, 0, 1, 1, 2);


        gridLayout_2->addWidget(mSearchGroupBox, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDbSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSearchLabel->setBuddy(mSearchTableEdit);
        mSearchModeLabel->setBuddy(mSearchModeComboBox);
        mSearchColumnsLabel->setBuddy(mSearchColumnComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, mTablesTreeView);
        QWidget::setTabOrder(mTablesTreeView, cbxAllowGeometrylessTables);
        QWidget::setTabOrder(cbxAllowGeometrylessTables, mHoldDialogOpen);
        QWidget::setTabOrder(mHoldDialogOpen, mSearchGroupBox);
        QWidget::setTabOrder(mSearchGroupBox, mSearchTableEdit);
        QWidget::setTabOrder(mSearchTableEdit, mSearchColumnComboBox);
        QWidget::setTabOrder(mSearchColumnComboBox, mSearchModeComboBox);
        QWidget::setTabOrder(mSearchModeComboBox, buttonBox);

        retranslateUi(QgsDbSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDbSourceSelectBase, SLOT(reject()));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchTableEdit, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchColumnComboBox, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchModeComboBox, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchLabel, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchColumnsLabel, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchModeLabel, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(QgsDbSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDbSourceSelectBase)
    {
        QgsDbSourceSelectBase->setWindowTitle(QApplication::translate("QgsDbSourceSelectBase", "Add PostGIS Layers", Q_NULLPTR));
        connectionsGroupBox->setTitle(QApplication::translate("QgsDbSourceSelectBase", "Connections", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConnect->setToolTip(QApplication::translate("QgsDbSourceSelectBase", "Connect to selected database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConnect->setText(QApplication::translate("QgsDbSourceSelectBase", "Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsDbSourceSelectBase", "Create a new database connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsDbSourceSelectBase", "New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsDbSourceSelectBase", "Edit selected database connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsDbSourceSelectBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsDbSourceSelectBase", "Remove connection to selected database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsDbSourceSelectBase", "Remove", Q_NULLPTR));
        btnLoad->setText(QApplication::translate("QgsDbSourceSelectBase", "Load", "Load connections from file"));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsDbSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsDbSourceSelectBase", "Save", Q_NULLPTR));
        cbxAllowGeometrylessTables->setText(QApplication::translate("QgsDbSourceSelectBase", "Also list tables with no geometry", Q_NULLPTR));
        mHoldDialogOpen->setText(QApplication::translate("QgsDbSourceSelectBase", "Keep dialog open", Q_NULLPTR));
        mSearchGroupBox->setTitle(QApplication::translate("QgsDbSourceSelectBase", "Search options", Q_NULLPTR));
        mSearchLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search", Q_NULLPTR));
        mSearchModeLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search mode", Q_NULLPTR));
        mSearchColumnsLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search in columns", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDbSourceSelectBase: public Ui_QgsDbSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDBSOURCESELECTBASE_H
