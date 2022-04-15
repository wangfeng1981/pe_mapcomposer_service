/********************************************************************************
** Form generated from reading UI file 'qgsnewhttpconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWHTTPCONNECTIONBASE_H
#define UI_QGSNEWHTTPCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "auth/qgsauthsettingswidget.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewHttpConnectionBase
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QLabel *TextLabel1_2;
    QLineEdit *txtName;
    QLabel *TextLabel1;
    QLineEdit *txtUrl;
    QGroupBox *mWmsOptionsGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *cbxWmsIgnoreAxisOrientation;
    QCheckBox *cbxIgnoreGetFeatureInfoURI;
    QCheckBox *cbxIgnoreGetMapURI;
    QCheckBox *cbxSmoothPixmapTransform;
    QCheckBox *cbxWmsInvertAxisOrientation;
    QComboBox *cmbDpiMode;
    QLabel *lblDpiMode;
    QCheckBox *cbxWmsIgnoreReportedLayerExtents;
    QGroupBox *mWfsOptionsGroupBox;
    QGridLayout *gridLayout1;
    QLabel *lblVersion;
    QPushButton *mWfsVersionDetectButton;
    QCheckBox *cbxWfsIgnoreAxisOrientation;
    QLabel *lblMaxNumFeatures;
    QComboBox *cmbVersion;
    QLineEdit *txtPageSize;
    QCheckBox *cbxWfsInvertAxisOrientation;
    QLabel *lblPageSize;
    QCheckBox *cbxWfsFeaturePaging;
    QLineEdit *txtMaxNumFeatures;
    QCheckBox *cbxWfsUseGml2EncodingForTransactions;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout;
    QgsAuthSettingsWidget *mAuthSettings;
    QPushButton *mTestConnectionButton;
    QGroupBox *mHttpGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsFilterLineEdit *mRefererLineEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewHttpConnectionBase)
    {
        if (QgsNewHttpConnectionBase->objectName().isEmpty())
            QgsNewHttpConnectionBase->setObjectName(QStringLiteral("QgsNewHttpConnectionBase"));
        QgsNewHttpConnectionBase->resize(448, 815);
        QgsNewHttpConnectionBase->setSizeGripEnabled(true);
        QgsNewHttpConnectionBase->setModal(true);
        gridLayout_4 = new QGridLayout(QgsNewHttpConnectionBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mGroupBox = new QGroupBox(QgsNewHttpConnectionBase);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(mGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        TextLabel1_2 = new QLabel(frame);
        TextLabel1_2->setObjectName(QStringLiteral("TextLabel1_2"));
        TextLabel1_2->setWordWrap(true);
        TextLabel1_2->setMargin(5);

        gridLayout_5->addWidget(TextLabel1_2, 0, 0, 1, 1);

        txtName = new QLineEdit(frame);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setMinimumSize(QSize(0, 0));
        txtName->setFrame(true);

        gridLayout_5->addWidget(txtName, 0, 1, 1, 1);

        TextLabel1 = new QLabel(frame);
        TextLabel1->setObjectName(QStringLiteral("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout_5->addWidget(TextLabel1, 1, 0, 1, 1);

        txtUrl = new QLineEdit(frame);
        txtUrl->setObjectName(QStringLiteral("txtUrl"));

        gridLayout_5->addWidget(txtUrl, 1, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 2);

        mWmsOptionsGroupBox = new QGroupBox(mGroupBox);
        mWmsOptionsGroupBox->setObjectName(QStringLiteral("mWmsOptionsGroupBox"));
        gridLayout_2 = new QGridLayout(mWmsOptionsGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbxWmsIgnoreAxisOrientation = new QCheckBox(mWmsOptionsGroupBox);
        cbxWmsIgnoreAxisOrientation->setObjectName(QStringLiteral("cbxWmsIgnoreAxisOrientation"));

        gridLayout_2->addWidget(cbxWmsIgnoreAxisOrientation, 3, 0, 1, 2);

        cbxIgnoreGetFeatureInfoURI = new QCheckBox(mWmsOptionsGroupBox);
        cbxIgnoreGetFeatureInfoURI->setObjectName(QStringLiteral("cbxIgnoreGetFeatureInfoURI"));

        gridLayout_2->addWidget(cbxIgnoreGetFeatureInfoURI, 2, 0, 1, 2);

        cbxIgnoreGetMapURI = new QCheckBox(mWmsOptionsGroupBox);
        cbxIgnoreGetMapURI->setObjectName(QStringLiteral("cbxIgnoreGetMapURI"));

        gridLayout_2->addWidget(cbxIgnoreGetMapURI, 1, 0, 1, 2);

        cbxSmoothPixmapTransform = new QCheckBox(mWmsOptionsGroupBox);
        cbxSmoothPixmapTransform->setObjectName(QStringLiteral("cbxSmoothPixmapTransform"));

        gridLayout_2->addWidget(cbxSmoothPixmapTransform, 9, 0, 1, 2);

        cbxWmsInvertAxisOrientation = new QCheckBox(mWmsOptionsGroupBox);
        cbxWmsInvertAxisOrientation->setObjectName(QStringLiteral("cbxWmsInvertAxisOrientation"));

        gridLayout_2->addWidget(cbxWmsInvertAxisOrientation, 5, 0, 1, 2);

        cmbDpiMode = new QComboBox(mWmsOptionsGroupBox);
        cmbDpiMode->setObjectName(QStringLiteral("cmbDpiMode"));

        gridLayout_2->addWidget(cmbDpiMode, 0, 1, 1, 1);

        lblDpiMode = new QLabel(mWmsOptionsGroupBox);
        lblDpiMode->setObjectName(QStringLiteral("lblDpiMode"));

        gridLayout_2->addWidget(lblDpiMode, 0, 0, 1, 1);

        cbxWmsIgnoreReportedLayerExtents = new QCheckBox(mWmsOptionsGroupBox);
        cbxWmsIgnoreReportedLayerExtents->setObjectName(QStringLiteral("cbxWmsIgnoreReportedLayerExtents"));

        gridLayout_2->addWidget(cbxWmsIgnoreReportedLayerExtents, 4, 0, 1, 2);


        gridLayout->addWidget(mWmsOptionsGroupBox, 4, 0, 1, 2);

        mWfsOptionsGroupBox = new QGroupBox(mGroupBox);
        mWfsOptionsGroupBox->setObjectName(QStringLiteral("mWfsOptionsGroupBox"));
        gridLayout1 = new QGridLayout(mWfsOptionsGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        lblVersion = new QLabel(mWfsOptionsGroupBox);
        lblVersion->setObjectName(QStringLiteral("lblVersion"));

        gridLayout1->addWidget(lblVersion, 0, 0, 1, 1);

        mWfsVersionDetectButton = new QPushButton(mWfsOptionsGroupBox);
        mWfsVersionDetectButton->setObjectName(QStringLiteral("mWfsVersionDetectButton"));

        gridLayout1->addWidget(mWfsVersionDetectButton, 0, 2, 1, 1);

        cbxWfsIgnoreAxisOrientation = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsIgnoreAxisOrientation->setObjectName(QStringLiteral("cbxWfsIgnoreAxisOrientation"));

        gridLayout1->addWidget(cbxWfsIgnoreAxisOrientation, 5, 0, 1, 3);

        lblMaxNumFeatures = new QLabel(mWfsOptionsGroupBox);
        lblMaxNumFeatures->setObjectName(QStringLiteral("lblMaxNumFeatures"));

        gridLayout1->addWidget(lblMaxNumFeatures, 2, 0, 1, 1);

        cmbVersion = new QComboBox(mWfsOptionsGroupBox);
        cmbVersion->setObjectName(QStringLiteral("cmbVersion"));

        gridLayout1->addWidget(cmbVersion, 0, 1, 1, 1);

        txtPageSize = new QLineEdit(mWfsOptionsGroupBox);
        txtPageSize->setObjectName(QStringLiteral("txtPageSize"));

        gridLayout1->addWidget(txtPageSize, 4, 1, 1, 2);

        cbxWfsInvertAxisOrientation = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsInvertAxisOrientation->setObjectName(QStringLiteral("cbxWfsInvertAxisOrientation"));

        gridLayout1->addWidget(cbxWfsInvertAxisOrientation, 6, 0, 1, 3);

        lblPageSize = new QLabel(mWfsOptionsGroupBox);
        lblPageSize->setObjectName(QStringLiteral("lblPageSize"));

        gridLayout1->addWidget(lblPageSize, 4, 0, 1, 1);

        cbxWfsFeaturePaging = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsFeaturePaging->setObjectName(QStringLiteral("cbxWfsFeaturePaging"));
        cbxWfsFeaturePaging->setChecked(true);

        gridLayout1->addWidget(cbxWfsFeaturePaging, 3, 0, 1, 3);

        txtMaxNumFeatures = new QLineEdit(mWfsOptionsGroupBox);
        txtMaxNumFeatures->setObjectName(QStringLiteral("txtMaxNumFeatures"));

        gridLayout1->addWidget(txtMaxNumFeatures, 2, 1, 1, 2);

        cbxWfsUseGml2EncodingForTransactions = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsUseGml2EncodingForTransactions->setObjectName(QStringLiteral("cbxWfsUseGml2EncodingForTransactions"));

        gridLayout1->addWidget(cbxWfsUseGml2EncodingForTransactions, 7, 0, 1, 2);


        gridLayout->addWidget(mWfsOptionsGroupBox, 3, 0, 1, 2);

        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        verticalLayout = new QVBoxLayout(mAuthGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QStringLiteral("mAuthSettings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAuthSettings->sizePolicy().hasHeightForWidth());
        mAuthSettings->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 1, 0, 1, 2);

        mTestConnectionButton = new QPushButton(mGroupBox);
        mTestConnectionButton->setObjectName(QStringLiteral("mTestConnectionButton"));

        gridLayout->addWidget(mTestConnectionButton, 5, 0, 1, 2);

        mHttpGroupBox = new QGroupBox(mGroupBox);
        mHttpGroupBox->setObjectName(QStringLiteral("mHttpGroupBox"));
        horizontalLayout = new QHBoxLayout(mHttpGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(mHttpGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mRefererLineEdit = new QgsFilterLineEdit(mHttpGroupBox);
        mRefererLineEdit->setObjectName(QStringLiteral("mRefererLineEdit"));

        horizontalLayout->addWidget(mRefererLineEdit);


        gridLayout->addWidget(mHttpGroupBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 2);


        gridLayout_4->addWidget(mGroupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewHttpConnectionBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblDpiMode->setBuddy(cmbDpiMode);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtName, txtUrl);
        QWidget::setTabOrder(txtUrl, mRefererLineEdit);
        QWidget::setTabOrder(mRefererLineEdit, cmbVersion);
        QWidget::setTabOrder(cmbVersion, mWfsVersionDetectButton);
        QWidget::setTabOrder(mWfsVersionDetectButton, txtMaxNumFeatures);
        QWidget::setTabOrder(txtMaxNumFeatures, cbxWfsFeaturePaging);
        QWidget::setTabOrder(cbxWfsFeaturePaging, txtPageSize);
        QWidget::setTabOrder(txtPageSize, cbxWfsIgnoreAxisOrientation);
        QWidget::setTabOrder(cbxWfsIgnoreAxisOrientation, cbxWfsInvertAxisOrientation);
        QWidget::setTabOrder(cbxWfsInvertAxisOrientation, cmbDpiMode);
        QWidget::setTabOrder(cmbDpiMode, cbxIgnoreGetMapURI);
        QWidget::setTabOrder(cbxIgnoreGetMapURI, cbxIgnoreGetFeatureInfoURI);
        QWidget::setTabOrder(cbxIgnoreGetFeatureInfoURI, cbxWmsIgnoreAxisOrientation);
        QWidget::setTabOrder(cbxWmsIgnoreAxisOrientation, cbxWmsInvertAxisOrientation);
        QWidget::setTabOrder(cbxWmsInvertAxisOrientation, cbxSmoothPixmapTransform);
        QWidget::setTabOrder(cbxSmoothPixmapTransform, mTestConnectionButton);

        retranslateUi(QgsNewHttpConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewHttpConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewHttpConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewHttpConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewHttpConnectionBase)
    {
        QgsNewHttpConnectionBase->setWindowTitle(QApplication::translate("QgsNewHttpConnectionBase", "Create a New Connection", Q_NULLPTR));
        mGroupBox->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "Connection Details", Q_NULLPTR));
        TextLabel1_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Name of the new connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TextLabel1->setText(QApplication::translate("QgsNewHttpConnectionBase", "URL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtUrl->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "HTTP address of the Web Map Server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWmsOptionsGroupBox->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "WMS/WMTS Options", Q_NULLPTR));
        cbxWmsIgnoreAxisOrientation->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore axis orientation (WMS 1.3/WMTS)", Q_NULLPTR));
        cbxIgnoreGetFeatureInfoURI->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore GetFeatureInfo URI reported in capabilities", Q_NULLPTR));
        cbxIgnoreGetMapURI->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore GetMap/GetTile URI reported in capabilities", Q_NULLPTR));
        cbxSmoothPixmapTransform->setText(QApplication::translate("QgsNewHttpConnectionBase", "Smooth pixmap transform", Q_NULLPTR));
        cbxWmsInvertAxisOrientation->setText(QApplication::translate("QgsNewHttpConnectionBase", "Invert axis orientation", Q_NULLPTR));
        lblDpiMode->setText(QApplication::translate("QgsNewHttpConnectionBase", "DPI-&Mode", Q_NULLPTR));
        cbxWmsIgnoreReportedLayerExtents->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore reported layer extents", Q_NULLPTR));
        mWfsOptionsGroupBox->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "WFS Options", Q_NULLPTR));
        lblVersion->setText(QApplication::translate("QgsNewHttpConnectionBase", "Version", Q_NULLPTR));
        mWfsVersionDetectButton->setText(QApplication::translate("QgsNewHttpConnectionBase", "Detect", Q_NULLPTR));
        cbxWfsIgnoreAxisOrientation->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore axis orientation (WFS 1.1/WFS 2.0)", Q_NULLPTR));
        lblMaxNumFeatures->setText(QApplication::translate("QgsNewHttpConnectionBase", "Max. number of features", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtPageSize->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>Enter a number to limit the maximum number of features retrieved in a single GetFeature request when paging is enabled. If let to empty, server default will apply.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbxWfsInvertAxisOrientation->setText(QApplication::translate("QgsNewHttpConnectionBase", "Invert axis orientation", Q_NULLPTR));
        lblPageSize->setText(QApplication::translate("QgsNewHttpConnectionBase", "Page size", Q_NULLPTR));
        cbxWfsFeaturePaging->setText(QApplication::translate("QgsNewHttpConnectionBase", "Enable feature paging", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtMaxNumFeatures->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>Enter a number to limit the maximum number of features retrieved per feature request. If let to empty, no limit is set.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbxWfsUseGml2EncodingForTransactions->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>This might be necessary on some <span style=\" font-weight:600;\">broken</span> ESRI map servers when using WFS-T 1.1.0.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbxWfsUseGml2EncodingForTransactions->setText(QApplication::translate("QgsNewHttpConnectionBase", "Use GML2 encoding for transactions", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "Authentication", Q_NULLPTR));
        mTestConnectionButton->setText(QApplication::translate("QgsNewHttpConnectionBase", "&Test Connection", Q_NULLPTR));
        mHttpGroupBox->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "HTTP", Q_NULLPTR));
        label->setText(QApplication::translate("QgsNewHttpConnectionBase", "Referer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsNewHttpConnectionBase: public Ui_QgsNewHttpConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWHTTPCONNECTIONBASE_H
