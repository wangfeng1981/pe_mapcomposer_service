/********************************************************************************
** Form generated from reading UI file 'qgscredentialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCREDENTIALDIALOG_H
#define UI_QGSCREDENTIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCredentialDialog
{
public:
    QFormLayout *formLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *labelRealm;
    QLabel *label;
    QLineEdit *leUsername;
    QLabel *label_2;
    QgsPasswordLineEdit *lePassword;
    QLabel *labelMessage;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblPasswordTitle;
    QVBoxLayout *verticalLayout_2;
    QgsPasswordLineEdit *leMasterPass;
    QgsPasswordLineEdit *leMasterPassVerify;
    QCheckBox *chkbxPasswordHelperEnable;
    QLabel *lblDontForget;
    QLabel *lblSavedForSession;
    QGroupBox *grpbxPassAttempts;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *chkbxEraseAuthDb;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkButton;
    QToolButton *mIgnoreButton;
    QPushButton *mCancelButton;

    void setupUi(QDialog *QgsCredentialDialog)
    {
        if (QgsCredentialDialog->objectName().isEmpty())
            QgsCredentialDialog->setObjectName(QStringLiteral("QgsCredentialDialog"));
        QgsCredentialDialog->resize(358, 293);
        formLayout = new QFormLayout(QgsCredentialDialog);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        stackedWidget = new QStackedWidget(QgsCredentialDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout_2 = new QFormLayout(page);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        labelRealm = new QLabel(page);
        labelRealm->setObjectName(QStringLiteral("labelRealm"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelRealm);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(page);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leUsername);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        lePassword = new QgsPasswordLineEdit(page);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lePassword);

        labelMessage = new QLabel(page);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, labelMessage);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblPasswordTitle = new QLabel(page_2);
        lblPasswordTitle->setObjectName(QStringLiteral("lblPasswordTitle"));
        lblPasswordTitle->setStyleSheet(QStringLiteral("QLabel{ font-weight: bold; }s"));

        verticalLayout->addWidget(lblPasswordTitle);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        leMasterPass = new QgsPasswordLineEdit(page_2);
        leMasterPass->setObjectName(QStringLiteral("leMasterPass"));
        leMasterPass->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(leMasterPass);

        leMasterPassVerify = new QgsPasswordLineEdit(page_2);
        leMasterPassVerify->setObjectName(QStringLiteral("leMasterPassVerify"));
        leMasterPassVerify->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(leMasterPassVerify);


        verticalLayout->addLayout(verticalLayout_2);

        chkbxPasswordHelperEnable = new QCheckBox(page_2);
        chkbxPasswordHelperEnable->setObjectName(QStringLiteral("chkbxPasswordHelperEnable"));

        verticalLayout->addWidget(chkbxPasswordHelperEnable);

        lblDontForget = new QLabel(page_2);
        lblDontForget->setObjectName(QStringLiteral("lblDontForget"));
        lblDontForget->setStyleSheet(QLatin1String("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-weight: bold;\n"
"}"));
        lblDontForget->setWordWrap(true);

        verticalLayout->addWidget(lblDontForget);

        lblSavedForSession = new QLabel(page_2);
        lblSavedForSession->setObjectName(QStringLiteral("lblSavedForSession"));
        lblSavedForSession->setStyleSheet(QLatin1String("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-style: italic;\n"
"}"));
        lblSavedForSession->setWordWrap(true);

        verticalLayout->addWidget(lblSavedForSession);

        grpbxPassAttempts = new QGroupBox(page_2);
        grpbxPassAttempts->setObjectName(QStringLiteral("grpbxPassAttempts"));
        verticalLayout_21 = new QVBoxLayout(grpbxPassAttempts);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(6, 6, 6, 6);
        chkbxEraseAuthDb = new QCheckBox(grpbxPassAttempts);
        chkbxEraseAuthDb->setObjectName(QStringLiteral("chkbxEraseAuthDb"));

        verticalLayout_21->addWidget(chkbxEraseAuthDb);


        verticalLayout->addWidget(grpbxPassAttempts);

        stackedWidget->addWidget(page_2);

        formLayout->setWidget(0, QFormLayout::LabelRole, stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkButton = new QPushButton(QgsCredentialDialog);
        mOkButton->setObjectName(QStringLiteral("mOkButton"));

        horizontalLayout->addWidget(mOkButton);

        mIgnoreButton = new QToolButton(QgsCredentialDialog);
        mIgnoreButton->setObjectName(QStringLiteral("mIgnoreButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mIgnoreButton->sizePolicy().hasHeightForWidth());
        mIgnoreButton->setSizePolicy(sizePolicy);
        mIgnoreButton->setFocusPolicy(Qt::StrongFocus);
        mIgnoreButton->setPopupMode(QToolButton::MenuButtonPopup);
        mIgnoreButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(mIgnoreButton);

        mCancelButton = new QPushButton(QgsCredentialDialog);
        mCancelButton->setObjectName(QStringLiteral("mCancelButton"));

        horizontalLayout->addWidget(mCancelButton);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout);

        QWidget::setTabOrder(leUsername, lePassword);
        QWidget::setTabOrder(lePassword, leMasterPass);
        QWidget::setTabOrder(leMasterPass, leMasterPassVerify);
        QWidget::setTabOrder(leMasterPassVerify, chkbxEraseAuthDb);

        retranslateUi(QgsCredentialDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsCredentialDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsCredentialDialog)
    {
        QgsCredentialDialog->setWindowTitle(QApplication::translate("QgsCredentialDialog", "Enter Credentials", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsCredentialDialog", "Realm", Q_NULLPTR));
        labelRealm->setText(QApplication::translate("QgsCredentialDialog", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("QgsCredentialDialog", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsCredentialDialog", "Password", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("QgsCredentialDialog", "TextLabel", Q_NULLPTR));
        lblPasswordTitle->setText(QString());
        leMasterPassVerify->setPlaceholderText(QApplication::translate("QgsCredentialDialog", "Verify password", Q_NULLPTR));
        chkbxPasswordHelperEnable->setText(QApplication::translate("QgsCredentialDialog", "Store master password in your password manager", Q_NULLPTR));
        lblDontForget->setText(QApplication::translate("QgsCredentialDialog", "Do not forget it:  NOT retrievable!", Q_NULLPTR));
        lblSavedForSession->setText(QApplication::translate("QgsCredentialDialog", "Saved for session, until app is quit.", Q_NULLPTR));
        grpbxPassAttempts->setTitle(QApplication::translate("QgsCredentialDialog", "Password attempts: #", Q_NULLPTR));
        chkbxEraseAuthDb->setText(QApplication::translate("QgsCredentialDialog", "Erase authentication database?", Q_NULLPTR));
        mOkButton->setText(QApplication::translate("QgsCredentialDialog", "Ok", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mIgnoreButton->setToolTip(QApplication::translate("QgsCredentialDialog", "All requests for this connection will be automatically rejected for the next 60 seconds", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mIgnoreButton->setText(QApplication::translate("QgsCredentialDialog", "Ignore", Q_NULLPTR));
        mCancelButton->setText(QApplication::translate("QgsCredentialDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCredentialDialog: public Ui_QgsCredentialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCREDENTIALDIALOG_H
