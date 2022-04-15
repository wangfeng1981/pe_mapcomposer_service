/********************************************************************************
** Form generated from reading UI file 'qgsvectortileconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILECONNECTIONDIALOG_H
#define UI_QGSVECTORTILECONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "auth/qgsauthsettingswidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QLineEdit *mEditName;
    QLabel *label;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLabel *label_2;
    QgsSpinBox *mSpinZMin;
    QLabel *lblReferer;
    QgsSpinBox *mSpinZMax;
    QCheckBox *mCheckBoxZMax;
    QLineEdit *mEditUrl;
    QCheckBox *mCheckBoxZMin;
    QLineEdit *mEditReferer;
    QLabel *label_3;
    QLineEdit *mEditStyleUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorTileConnectionDialog)
    {
        if (QgsVectorTileConnectionDialog->objectName().isEmpty())
            QgsVectorTileConnectionDialog->setObjectName(QStringLiteral("QgsVectorTileConnectionDialog"));
        QgsVectorTileConnectionDialog->resize(659, 442);
        verticalLayout = new QVBoxLayout(QgsVectorTileConnectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mGroupBox = new QGroupBox(QgsVectorTileConnectionDialog);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mEditName = new QLineEdit(mGroupBox);
        mEditName->setObjectName(QStringLiteral("mEditName"));

        gridLayout->addWidget(mEditName, 0, 2, 1, 1);

        label = new QLabel(mGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QStringLiteral("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 8, 0, 1, 3);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mSpinZMin = new QgsSpinBox(mGroupBox);
        mSpinZMin->setObjectName(QStringLiteral("mSpinZMin"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinZMin->sizePolicy().hasHeightForWidth());
        mSpinZMin->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSpinZMin, 2, 2, 1, 1);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QStringLiteral("lblReferer"));

        gridLayout->addWidget(lblReferer, 9, 0, 1, 1);

        mSpinZMax = new QgsSpinBox(mGroupBox);
        mSpinZMax->setObjectName(QStringLiteral("mSpinZMax"));
        sizePolicy.setHeightForWidth(mSpinZMax->sizePolicy().hasHeightForWidth());
        mSpinZMax->setSizePolicy(sizePolicy);
        mSpinZMax->setValue(14);

        gridLayout->addWidget(mSpinZMax, 6, 2, 1, 1);

        mCheckBoxZMax = new QCheckBox(mGroupBox);
        mCheckBoxZMax->setObjectName(QStringLiteral("mCheckBoxZMax"));
        mCheckBoxZMax->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMax, 6, 0, 1, 2);

        mEditUrl = new QLineEdit(mGroupBox);
        mEditUrl->setObjectName(QStringLiteral("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 1, 2, 1, 1);

        mCheckBoxZMin = new QCheckBox(mGroupBox);
        mCheckBoxZMin->setObjectName(QStringLiteral("mCheckBoxZMin"));
        mCheckBoxZMin->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMin, 2, 0, 1, 2);

        mEditReferer = new QLineEdit(mGroupBox);
        mEditReferer->setObjectName(QStringLiteral("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 9, 2, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        mEditStyleUrl = new QLineEdit(mGroupBox);
        mEditStyleUrl->setObjectName(QStringLiteral("mEditStyleUrl"));
        mEditStyleUrl->setClearButtonEnabled(true);

        gridLayout->addWidget(mEditStyleUrl, 7, 2, 1, 1);


        verticalLayout->addWidget(mGroupBox);

        buttonBox = new QDialogButtonBox(QgsVectorTileConnectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lblReferer->setBuddy(mEditReferer);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mEditName, mEditUrl);
        QWidget::setTabOrder(mEditUrl, mCheckBoxZMin);
        QWidget::setTabOrder(mCheckBoxZMin, mSpinZMin);
        QWidget::setTabOrder(mSpinZMin, mCheckBoxZMax);
        QWidget::setTabOrder(mCheckBoxZMax, mSpinZMax);
        QWidget::setTabOrder(mSpinZMax, mEditStyleUrl);
        QWidget::setTabOrder(mEditStyleUrl, mEditReferer);

        retranslateUi(QgsVectorTileConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorTileConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorTileConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorTileConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorTileConnectionDialog)
    {
        QgsVectorTileConnectionDialog->setWindowTitle(QApplication::translate("QgsVectorTileConnectionDialog", "Vector Tiles Connection", Q_NULLPTR));
        mGroupBox->setTitle(QApplication::translate("QgsVectorTileConnectionDialog", "Connection Details", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditName->setToolTip(QApplication::translate("QgsVectorTileConnectionDialog", "Name of the new connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QgsVectorTileConnectionDialog", "Name", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsVectorTileConnectionDialog", "Authentication", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsVectorTileConnectionDialog", "URL", Q_NULLPTR));
        lblReferer->setText(QApplication::translate("QgsVectorTileConnectionDialog", "Referer", Q_NULLPTR));
        mCheckBoxZMax->setText(QApplication::translate("QgsVectorTileConnectionDialog", "Max. Zoom Level", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditUrl->setToolTip(QApplication::translate("QgsVectorTileConnectionDialog", "URL of the connection, {x}, {y}, and {z} will be replaced with actual values. Use {-y} for inverted y axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEditUrl->setPlaceholderText(QApplication::translate("QgsVectorTileConnectionDialog", "http://example.com/{z}/{x}/{y}.pbf", Q_NULLPTR));
        mCheckBoxZMin->setText(QApplication::translate("QgsVectorTileConnectionDialog", "Min. Zoom Level", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditReferer->setToolTip(QApplication::translate("QgsVectorTileConnectionDialog", "Optional custom referer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsVectorTileConnectionDialog", "Style URL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditStyleUrl->setToolTip(QApplication::translate("QgsVectorTileConnectionDialog", "If specified, the layer will be automatically styled using styling JSON from the entered URL.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEditStyleUrl->setPlaceholderText(QApplication::translate("QgsVectorTileConnectionDialog", "Optional", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileConnectionDialog: public Ui_QgsVectorTileConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILECONNECTIONDIALOG_H
