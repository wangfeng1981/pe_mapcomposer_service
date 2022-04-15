/********************************************************************************
** Form generated from reading UI file 'qgstilesourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILESOURCESELECTBASE_H
#define UI_QGSTILESOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_QgsTileSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mConnectionsGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *spacerItem;
    QComboBox *cmbConnections;
    QToolButton *btnEdit;
    QToolButton *btnDelete;
    QToolButton *btnLoad;
    QToolButton *btnSave;
    QToolButton *btnNew;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsTileSourceSelectBase)
    {
        if (QgsTileSourceSelectBase->objectName().isEmpty())
            QgsTileSourceSelectBase->setObjectName(QStringLiteral("QgsTileSourceSelectBase"));
        QgsTileSourceSelectBase->resize(558, 166);
        gridLayout = new QGridLayout(QgsTileSourceSelectBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mConnectionsGroupBox = new QGroupBox(QgsTileSourceSelectBase);
        mConnectionsGroupBox->setObjectName(QStringLiteral("mConnectionsGroupBox"));
        gridLayout_2 = new QGridLayout(mConnectionsGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spacerItem = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 1, 4, 1, 1);

        cmbConnections = new QComboBox(mConnectionsGroupBox);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 7);

        btnEdit = new QToolButton(mConnectionsGroupBox);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout_2->addWidget(btnEdit, 1, 2, 1, 1);

        btnDelete = new QToolButton(mConnectionsGroupBox);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout_2->addWidget(btnDelete, 1, 3, 1, 1);

        btnLoad = new QToolButton(mConnectionsGroupBox);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        gridLayout_2->addWidget(btnLoad, 1, 5, 1, 1);

        btnSave = new QToolButton(mConnectionsGroupBox);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout_2->addWidget(btnSave, 1, 6, 1, 1);

        btnNew = new QToolButton(mConnectionsGroupBox);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        gridLayout_2->addWidget(btnNew, 1, 0, 1, 2);


        gridLayout->addWidget(mConnectionsGroupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsTileSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(QgsTileSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsTileSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTileSourceSelectBase)
    {
        mConnectionsGroupBox->setTitle(QApplication::translate("QgsTileSourceSelectBase", "Connections", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsTileSourceSelectBase", "Edit selected service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsTileSourceSelectBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsTileSourceSelectBase", "Remove connection to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsTileSourceSelectBase", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsTileSourceSelectBase", "Load connections from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsTileSourceSelectBase", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsTileSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsTileSourceSelectBase", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsTileSourceSelectBase", "Create a new service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsTileSourceSelectBase", "&New", Q_NULLPTR));
        Q_UNUSED(QgsTileSourceSelectBase);
    } // retranslateUi

};

namespace Ui {
    class QgsTileSourceSelectBase: public Ui_QgsTileSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILESOURCESELECTBASE_H
