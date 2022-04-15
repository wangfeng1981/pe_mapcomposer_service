/********************************************************************************
** Form generated from reading UI file 'qgsmanageconnectionsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMANAGECONNECTIONSDIALOGBASE_H
#define UI_QGSMANAGECONNECTIONSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsManageConnectionsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listConnections;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsManageConnectionsDialogBase)
    {
        if (QgsManageConnectionsDialogBase->objectName().isEmpty())
            QgsManageConnectionsDialogBase->setObjectName(QStringLiteral("QgsManageConnectionsDialogBase"));
        QgsManageConnectionsDialogBase->resize(400, 300);
        verticalLayout = new QVBoxLayout(QgsManageConnectionsDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QgsManageConnectionsDialogBase);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listConnections = new QListWidget(QgsManageConnectionsDialogBase);
        listConnections->setObjectName(QStringLiteral("listConnections"));
        listConnections->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listConnections->setAlternatingRowColors(true);
        listConnections->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(listConnections);

        buttonBox = new QDialogButtonBox(QgsManageConnectionsDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsManageConnectionsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsManageConnectionsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsManageConnectionsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsManageConnectionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsManageConnectionsDialogBase)
    {
        QgsManageConnectionsDialogBase->setWindowTitle(QApplication::translate("QgsManageConnectionsDialogBase", "Manage Connections", Q_NULLPTR));
        label->setText(QApplication::translate("QgsManageConnectionsDialogBase", "Select connections to export", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsManageConnectionsDialogBase: public Ui_QgsManageConnectionsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMANAGECONNECTIONSDIALOGBASE_H
