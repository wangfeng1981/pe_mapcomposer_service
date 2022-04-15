/********************************************************************************
** Form generated from reading UI file 'qgsarcgisvectortileconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSARCGISVECTORTILECONNECTIONDIALOG_H
#define UI_QGSARCGISVECTORTILECONNECTIONDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "auth/qgsauthsettingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsArcgisVectorTileConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLabel *lblReferer;
    QCheckBox *mCheckBoxZMin;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *mEditReferer;
    QLineEdit *mEditUrl;
    QSpinBox *mSpinZMin;
    QLineEdit *mEditName;
    QSpinBox *mSpinZMax;
    QCheckBox *mCheckBoxZMax;
    QLabel *label_3;
    QLineEdit *mEditStyleUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsArcgisVectorTileConnectionDialog)
    {
        if (QgsArcgisVectorTileConnectionDialog->objectName().isEmpty())
            QgsArcgisVectorTileConnectionDialog->setObjectName(QStringLiteral("QgsArcgisVectorTileConnectionDialog"));
        QgsArcgisVectorTileConnectionDialog->resize(529, 386);
        verticalLayout = new QVBoxLayout(QgsArcgisVectorTileConnectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mGroupBox = new QGroupBox(QgsArcgisVectorTileConnectionDialog);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QStringLiteral("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 8, 0, 1, 3);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QStringLiteral("lblReferer"));

        gridLayout->addWidget(lblReferer, 9, 0, 1, 1);

        mCheckBoxZMin = new QCheckBox(mGroupBox);
        mCheckBoxZMin->setObjectName(QStringLiteral("mCheckBoxZMin"));
        mCheckBoxZMin->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMin, 3, 0, 1, 1);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(mGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        mEditReferer = new QLineEdit(mGroupBox);
        mEditReferer->setObjectName(QStringLiteral("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 9, 2, 1, 1);

        mEditUrl = new QLineEdit(mGroupBox);
        mEditUrl->setObjectName(QStringLiteral("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 1, 2, 1, 1);

        mSpinZMin = new QSpinBox(mGroupBox);
        mSpinZMin->setObjectName(QStringLiteral("mSpinZMin"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinZMin->sizePolicy().hasHeightForWidth());
        mSpinZMin->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSpinZMin, 3, 2, 1, 1);

        mEditName = new QLineEdit(mGroupBox);
        mEditName->setObjectName(QStringLiteral("mEditName"));

        gridLayout->addWidget(mEditName, 0, 2, 1, 1);

        mSpinZMax = new QSpinBox(mGroupBox);
        mSpinZMax->setObjectName(QStringLiteral("mSpinZMax"));
        sizePolicy.setHeightForWidth(mSpinZMax->sizePolicy().hasHeightForWidth());
        mSpinZMax->setSizePolicy(sizePolicy);
        mSpinZMax->setValue(14);

        gridLayout->addWidget(mSpinZMax, 4, 2, 1, 1);

        mCheckBoxZMax = new QCheckBox(mGroupBox);
        mCheckBoxZMax->setObjectName(QStringLiteral("mCheckBoxZMax"));
        mCheckBoxZMax->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMax, 4, 0, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        mEditStyleUrl = new QLineEdit(mGroupBox);
        mEditStyleUrl->setObjectName(QStringLiteral("mEditStyleUrl"));
        mEditStyleUrl->setClearButtonEnabled(true);

        gridLayout->addWidget(mEditStyleUrl, 6, 2, 1, 1);


        verticalLayout->addWidget(mGroupBox);

        buttonBox = new QDialogButtonBox(QgsArcgisVectorTileConnectionDialog);
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

        retranslateUi(QgsArcgisVectorTileConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsArcgisVectorTileConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsArcgisVectorTileConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsArcgisVectorTileConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsArcgisVectorTileConnectionDialog)
    {
        QgsArcgisVectorTileConnectionDialog->setWindowTitle(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "ArcGIS Vector Tile Service Connection", Q_NULLPTR));
        mGroupBox->setTitle(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Connection Details", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Authentication", Q_NULLPTR));
        lblReferer->setText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Referer", Q_NULLPTR));
        mCheckBoxZMin->setText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Min. Zoom Level", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Service URL", Q_NULLPTR));
        label->setText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditReferer->setToolTip(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Optional custom referer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mEditUrl->setToolTip(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "URL of the VectorTileServer API endpoint, e.g. https://domain/arcgis/rest/services/Layer_1/VectorTileServer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEditUrl->setPlaceholderText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "https://domain/arcgis/rest/services/Layer_1/VectorTileServer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditName->setToolTip(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Name of the new connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxZMax->setText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Max. Zoom Level", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Style URL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEditStyleUrl->setToolTip(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "If specified, will override the default style defined for the layer with the entered URL", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEditStyleUrl->setPlaceholderText(QApplication::translate("QgsArcgisVectorTileConnectionDialog", "Optional", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsArcgisVectorTileConnectionDialog: public Ui_QgsArcgisVectorTileConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARCGISVECTORTILECONNECTIONDIALOG_H
