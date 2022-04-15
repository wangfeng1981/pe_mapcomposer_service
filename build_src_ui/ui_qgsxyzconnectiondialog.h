/********************************************************************************
** Form generated from reading UI file 'qgsxyzconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSXYZCONNECTIONDIALOG_H
#define UI_QGSXYZCONNECTIONDIALOG_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "auth/qgsauthsettingswidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsXyzConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *mEditReferer;
    QLabel *label_2;
    QgsSpinBox *mSpinZMax;
    QLabel *label;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLineEdit *mEditName;
    QLabel *lblReferer;
    QLineEdit *mEditUrl;
    QCheckBox *mCheckBoxZMax;
    QCheckBox *mCheckBoxZMin;
    QgsSpinBox *mSpinZMin;
    QLabel *label_3;
    QComboBox *mComboTileResolution;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsXyzConnectionDialog)
    {
        if (QgsXyzConnectionDialog->objectName().isEmpty())
            QgsXyzConnectionDialog->setObjectName(QStringLiteral("QgsXyzConnectionDialog"));
        QgsXyzConnectionDialog->resize(636, 331);
        verticalLayout = new QVBoxLayout(QgsXyzConnectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mGroupBox = new QGroupBox(QgsXyzConnectionDialog);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 2, 1, 1);

        mEditReferer = new QLineEdit(mGroupBox);
        mEditReferer->setObjectName(QStringLiteral("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 9, 2, 1, 1);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mSpinZMax = new QgsSpinBox(mGroupBox);
        mSpinZMax->setObjectName(QStringLiteral("mSpinZMax"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinZMax->sizePolicy().hasHeightForWidth());
        mSpinZMax->setSizePolicy(sizePolicy);
        mSpinZMax->setValue(18);

        gridLayout->addWidget(mSpinZMax, 8, 2, 1, 1);

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


        gridLayout->addWidget(mAuthGroupBox, 2, 0, 2, 3);

        mEditName = new QLineEdit(mGroupBox);
        mEditName->setObjectName(QStringLiteral("mEditName"));

        gridLayout->addWidget(mEditName, 0, 2, 1, 1);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QStringLiteral("lblReferer"));

        gridLayout->addWidget(lblReferer, 9, 0, 1, 2);

        mEditUrl = new QLineEdit(mGroupBox);
        mEditUrl->setObjectName(QStringLiteral("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 1, 2, 1, 1);

        mCheckBoxZMax = new QCheckBox(mGroupBox);
        mCheckBoxZMax->setObjectName(QStringLiteral("mCheckBoxZMax"));
        mCheckBoxZMax->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMax, 8, 0, 1, 2);

        mCheckBoxZMin = new QCheckBox(mGroupBox);
        mCheckBoxZMin->setObjectName(QStringLiteral("mCheckBoxZMin"));
        mCheckBoxZMin->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMin, 4, 0, 1, 2);

        mSpinZMin = new QgsSpinBox(mGroupBox);
        mSpinZMin->setObjectName(QStringLiteral("mSpinZMin"));
        sizePolicy.setHeightForWidth(mSpinZMin->sizePolicy().hasHeightForWidth());
        mSpinZMin->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSpinZMin, 4, 2, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        mComboTileResolution = new QComboBox(mGroupBox);
        mComboTileResolution->setObjectName(QStringLiteral("mComboTileResolution"));

        gridLayout->addWidget(mComboTileResolution, 11, 2, 1, 1);


        verticalLayout->addWidget(mGroupBox);

        buttonBox = new QDialogButtonBox(QgsXyzConnectionDialog);
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
        QWidget::setTabOrder(mSpinZMax, mEditReferer);

        retranslateUi(QgsXyzConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsXyzConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsXyzConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsXyzConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsXyzConnectionDialog)
    {
        QgsXyzConnectionDialog->setWindowTitle(QApplication::translate("QgsXyzConnectionDialog", "XYZ Connection", Q_NULLPTR));
        mGroupBox->setTitle(QApplication::translate("QgsXyzConnectionDialog", "Connection Details", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditReferer->setToolTip(QApplication::translate("QgsXyzConnectionDialog", "Optional custom referer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsXyzConnectionDialog", "URL", Q_NULLPTR));
        label->setText(QApplication::translate("QgsXyzConnectionDialog", "Name", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsXyzConnectionDialog", "Authentication", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditName->setToolTip(QApplication::translate("QgsXyzConnectionDialog", "Name of the new connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblReferer->setText(QApplication::translate("QgsXyzConnectionDialog", "Referer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditUrl->setToolTip(QApplication::translate("QgsXyzConnectionDialog", "URL of the connection, {x}, {y}, and {z} will be replaced with actual values. Use {-y} for inverted y axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEditUrl->setPlaceholderText(QApplication::translate("QgsXyzConnectionDialog", "http://example.com/{z}/{x}/{y}.png", Q_NULLPTR));
        mCheckBoxZMax->setText(QApplication::translate("QgsXyzConnectionDialog", "Max. Zoom Level", Q_NULLPTR));
        mCheckBoxZMin->setText(QApplication::translate("QgsXyzConnectionDialog", "Min. Zoom Level", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsXyzConnectionDialog", "Tile Resolution", Q_NULLPTR));
        mComboTileResolution->clear();
        mComboTileResolution->insertItems(0, QStringList()
         << QApplication::translate("QgsXyzConnectionDialog", "Unknown (not scaled)", Q_NULLPTR)
         << QApplication::translate("QgsXyzConnectionDialog", "Standard (256x256 / 96 DPI)", Q_NULLPTR)
         << QApplication::translate("QgsXyzConnectionDialog", "High (512x512 / 192 DPI)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class QgsXyzConnectionDialog: public Ui_QgsXyzConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSXYZCONNECTIONDIALOG_H
