/********************************************************************************
** Form generated from reading UI file 'qgsgeonodesourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEONODESOURCESELECTBASE_H
#define UI_QGSGEONODESOURCESELECTBASE_H

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

class Ui_QgsGeonodeSourceSelectBase
{
public:
    QGridLayout *gridLayout;
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
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbxUseTitleLayerName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayoutFilter;
    QLabel *labelFilter;
    QLineEdit *lineFilter;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGeonodeSourceSelectBase)
    {
        if (QgsGeonodeSourceSelectBase->objectName().isEmpty())
            QgsGeonodeSourceSelectBase->setObjectName(QStringLiteral("QgsGeonodeSourceSelectBase"));
        QgsGeonodeSourceSelectBase->resize(592, 439);
        gridLayout = new QGridLayout(QgsGeonodeSourceSelectBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        GroupBox1 = new QGroupBox(QgsGeonodeSourceSelectBase);
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

        treeView = new QTreeView(QgsGeonodeSourceSelectBase);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setVisible(true);

        gridLayout->addWidget(treeView, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cbxUseTitleLayerName = new QCheckBox(QgsGeonodeSourceSelectBase);
        cbxUseTitleLayerName->setObjectName(QStringLiteral("cbxUseTitleLayerName"));

        horizontalLayout_4->addWidget(cbxUseTitleLayerName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayoutFilter = new QHBoxLayout();
        horizontalLayoutFilter->setObjectName(QStringLiteral("horizontalLayoutFilter"));
        labelFilter = new QLabel(QgsGeonodeSourceSelectBase);
        labelFilter->setObjectName(QStringLiteral("labelFilter"));
        labelFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(labelFilter);

        lineFilter = new QLineEdit(QgsGeonodeSourceSelectBase);
        lineFilter->setObjectName(QStringLiteral("lineFilter"));
        lineFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(lineFilter);


        gridLayout->addLayout(horizontalLayoutFilter, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGeonodeSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

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

        retranslateUi(QgsGeonodeSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsGeonodeSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeonodeSourceSelectBase)
    {
        QgsGeonodeSourceSelectBase->setWindowTitle(QApplication::translate("QgsGeonodeSourceSelectBase", "Add GeoNode Layer", Q_NULLPTR));
        GroupBox1->setTitle(QApplication::translate("QgsGeonodeSourceSelectBase", "GeoNode Connections", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConnect->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Connect to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConnect->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "C&onnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Create a new service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "&New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Edit selected service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Remove connection to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Load connections from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "Save", Q_NULLPTR));
        cbxUseTitleLayerName->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "Use title for layer name", Q_NULLPTR));
        labelFilter->setText(QApplication::translate("QgsGeonodeSourceSelectBase", "Filter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineFilter->setToolTip(QApplication::translate("QgsGeonodeSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineFilter->setWhatsThis(QApplication::translate("QgsGeonodeSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class QgsGeonodeSourceSelectBase: public Ui_QgsGeonodeSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEONODESOURCESELECTBASE_H
