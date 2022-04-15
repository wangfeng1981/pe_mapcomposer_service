/********************************************************************************
** Form generated from reading UI file 'qgsdb2newconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDB2NEWCONNECTIONBASE_H
#define UI_QGSDB2NEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "auth/qgsauthsettingswidget.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDb2NewConnectionBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMessageBar *bar;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *txtPort;
    QLineEdit *txtHost;
    QLabel *DB2ServiceLabel;
    QLineEdit *txtService;
    QLabel *DB2ServiceLabel_2;
    QLineEdit *txtName;
    QLabel *DB2HostLabel;
    QLabel *database;
    QLineEdit *txtDatabase;
    QLabel *DB2port;
    QLabel *DB2ServiceLabel_3;
    QLineEdit *txtDriver;
    QGroupBox *mAuthGroupBox;
    QGridLayout *gridLayout;
    QgsAuthSettingsWidget *mAuthSettings;
    QPushButton *btnConnect;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDb2NewConnectionBase)
    {
        if (QgsDb2NewConnectionBase->objectName().isEmpty())
            QgsDb2NewConnectionBase->setObjectName(QStringLiteral("QgsDb2NewConnectionBase"));
        QgsDb2NewConnectionBase->resize(506, 583);
        verticalLayout = new QVBoxLayout(QgsDb2NewConnectionBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bar = new QgsMessageBar(QgsDb2NewConnectionBase);
        bar->setObjectName(QStringLiteral("bar"));

        verticalLayout->addWidget(bar);

        groupBox = new QGroupBox(QgsDb2NewConnectionBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        txtPort = new QLineEdit(groupBox);
        txtPort->setObjectName(QStringLiteral("txtPort"));

        gridLayout_2->addWidget(txtPort, 4, 1, 1, 1);

        txtHost = new QLineEdit(groupBox);
        txtHost->setObjectName(QStringLiteral("txtHost"));

        gridLayout_2->addWidget(txtHost, 3, 1, 1, 1);

        DB2ServiceLabel = new QLabel(groupBox);
        DB2ServiceLabel->setObjectName(QStringLiteral("DB2ServiceLabel"));

        gridLayout_2->addWidget(DB2ServiceLabel, 1, 0, 1, 1);

        txtService = new QLineEdit(groupBox);
        txtService->setObjectName(QStringLiteral("txtService"));

        gridLayout_2->addWidget(txtService, 1, 1, 1, 1);

        DB2ServiceLabel_2 = new QLabel(groupBox);
        DB2ServiceLabel_2->setObjectName(QStringLiteral("DB2ServiceLabel_2"));

        gridLayout_2->addWidget(DB2ServiceLabel_2, 2, 0, 1, 1);

        txtName = new QLineEdit(groupBox);
        txtName->setObjectName(QStringLiteral("txtName"));

        gridLayout_2->addWidget(txtName, 0, 1, 1, 1);

        DB2HostLabel = new QLabel(groupBox);
        DB2HostLabel->setObjectName(QStringLiteral("DB2HostLabel"));

        gridLayout_2->addWidget(DB2HostLabel, 3, 0, 1, 1);

        database = new QLabel(groupBox);
        database->setObjectName(QStringLiteral("database"));

        gridLayout_2->addWidget(database, 5, 0, 1, 1);

        txtDatabase = new QLineEdit(groupBox);
        txtDatabase->setObjectName(QStringLiteral("txtDatabase"));

        gridLayout_2->addWidget(txtDatabase, 5, 1, 1, 1);

        DB2port = new QLabel(groupBox);
        DB2port->setObjectName(QStringLiteral("DB2port"));

        gridLayout_2->addWidget(DB2port, 4, 0, 1, 1);

        DB2ServiceLabel_3 = new QLabel(groupBox);
        DB2ServiceLabel_3->setObjectName(QStringLiteral("DB2ServiceLabel_3"));

        gridLayout_2->addWidget(DB2ServiceLabel_3, 0, 0, 1, 1);

        txtDriver = new QLineEdit(groupBox);
        txtDriver->setObjectName(QStringLiteral("txtDriver"));

        gridLayout_2->addWidget(txtDriver, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        mAuthGroupBox = new QGroupBox(QgsDb2NewConnectionBase);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        gridLayout = new QGridLayout(mAuthGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QStringLiteral("mAuthSettings"));

        gridLayout->addWidget(mAuthSettings, 0, 0, 1, 1);


        verticalLayout->addWidget(mAuthGroupBox);

        btnConnect = new QPushButton(QgsDb2NewConnectionBase);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        verticalLayout->addWidget(btnConnect);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsDb2NewConnectionBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(txtName, txtService);
        QWidget::setTabOrder(txtService, txtDriver);
        QWidget::setTabOrder(txtDriver, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtDatabase);

        retranslateUi(QgsDb2NewConnectionBase);
        QObject::connect(btnConnect, SIGNAL(released()), QgsDb2NewConnectionBase, SLOT(on_btnConnect_clicked()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDb2NewConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDb2NewConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDb2NewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDb2NewConnectionBase)
    {
        QgsDb2NewConnectionBase->setWindowTitle(QApplication::translate("QgsDb2NewConnectionBase", "Create a New DB2 Connection", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsDb2NewConnectionBase", "Connection Information", Q_NULLPTR));
        DB2ServiceLabel->setText(QApplication::translate("QgsDb2NewConnectionBase", "Service/DSN", Q_NULLPTR));
        DB2ServiceLabel_2->setText(QApplication::translate("QgsDb2NewConnectionBase", "Driver", Q_NULLPTR));
        DB2HostLabel->setText(QApplication::translate("QgsDb2NewConnectionBase", "Host", Q_NULLPTR));
        database->setText(QApplication::translate("QgsDb2NewConnectionBase", "Database", Q_NULLPTR));
        DB2port->setText(QApplication::translate("QgsDb2NewConnectionBase", "Port", Q_NULLPTR));
        DB2ServiceLabel_3->setText(QApplication::translate("QgsDb2NewConnectionBase", "Name", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsDb2NewConnectionBase", "Authentication", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("QgsDb2NewConnectionBase", "&Test Connection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDb2NewConnectionBase: public Ui_QgsDb2NewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDB2NEWCONNECTIONBASE_H
