/********************************************************************************
** Form generated from reading UI file 'qgsogrsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOGRSOURCESELECTBASE_H
#define UI_QGSOGRSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <qgscollapsiblegroupbox.h>
#include "auth/qgsauthsettingswidget.h"
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOgrSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *srcGroupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcDirectory;
    QRadioButton *radioSrcDatabase;
    QRadioButton *radioSrcProtocol;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cmbEncodings;
    QGroupBox *protocolGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *cmbProtocolTypes;
    QLabel *label_2;
    QLabel *labelProtocolURI;
    QLineEdit *protocolURI;
    QLabel *labelBucket;
    QLineEdit *mBucket;
    QLabel *labelKey;
    QLineEdit *mKey;
    QLabel *mAuthWarning;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettingsProtocol;
    QGroupBox *fileGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *labelDirectoryType;
    QComboBox *cmbDirectoryTypes;
    QLabel *labelSrcDataset;
    QgsFileWidget *mFileWidget;
    QGroupBox *dbGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QComboBox *cmbDatabaseTypes;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QComboBox *cmbConnections;
    QgsCollapsibleGroupBox *mOpenOptionsGroupBox;
    QVBoxLayout *openOptionsVBoxLayout;
    QLabel *mOpenOptionsLabel;
    QFormLayout *mOpenOptionsLayout;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOgrSourceSelectBase)
    {
        if (QgsOgrSourceSelectBase->objectName().isEmpty())
            QgsOgrSourceSelectBase->setObjectName(QStringLiteral("QgsOgrSourceSelectBase"));
        QgsOgrSourceSelectBase->setWindowModality(Qt::WindowModal);
        QgsOgrSourceSelectBase->resize(480, 735);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOgrSourceSelectBase->sizePolicy().hasHeightForWidth());
        QgsOgrSourceSelectBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsOgrSourceSelectBase->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(QgsOgrSourceSelectBase);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        srcGroupBox_2 = new QGroupBox(QgsOgrSourceSelectBase);
        srcGroupBox_2->setObjectName(QStringLiteral("srcGroupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(srcGroupBox_2->sizePolicy().hasHeightForWidth());
        srcGroupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(srcGroupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioSrcFile = new QRadioButton(srcGroupBox_2);
        radioSrcFile->setObjectName(QStringLiteral("radioSrcFile"));

        horizontalLayout->addWidget(radioSrcFile);

        radioSrcDirectory = new QRadioButton(srcGroupBox_2);
        radioSrcDirectory->setObjectName(QStringLiteral("radioSrcDirectory"));

        horizontalLayout->addWidget(radioSrcDirectory);

        radioSrcDatabase = new QRadioButton(srcGroupBox_2);
        radioSrcDatabase->setObjectName(QStringLiteral("radioSrcDatabase"));

        horizontalLayout->addWidget(radioSrcDatabase);

        radioSrcProtocol = new QRadioButton(srcGroupBox_2);
        radioSrcProtocol->setObjectName(QStringLiteral("radioSrcProtocol"));

        horizontalLayout->addWidget(radioSrcProtocol);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(srcGroupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cmbEncodings = new QComboBox(srcGroupBox_2);
        cmbEncodings->setObjectName(QStringLiteral("cmbEncodings"));
        cmbEncodings->setMinimumSize(QSize(341, 0));

        horizontalLayout_2->addWidget(cmbEncodings);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(srcGroupBox_2);

        protocolGroupBox = new QGroupBox(QgsOgrSourceSelectBase);
        protocolGroupBox->setObjectName(QStringLiteral("protocolGroupBox"));
        sizePolicy1.setHeightForWidth(protocolGroupBox->sizePolicy().hasHeightForWidth());
        protocolGroupBox->setSizePolicy(sizePolicy1);
        protocolGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(protocolGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cmbProtocolTypes = new QComboBox(protocolGroupBox);
        cmbProtocolTypes->setObjectName(QStringLiteral("cmbProtocolTypes"));

        gridLayout_2->addWidget(cmbProtocolTypes, 0, 1, 1, 1);

        label_2 = new QLabel(protocolGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        labelProtocolURI = new QLabel(protocolGroupBox);
        labelProtocolURI->setObjectName(QStringLiteral("labelProtocolURI"));

        gridLayout_2->addWidget(labelProtocolURI, 1, 0, 1, 1);

        protocolURI = new QLineEdit(protocolGroupBox);
        protocolURI->setObjectName(QStringLiteral("protocolURI"));

        gridLayout_2->addWidget(protocolURI, 1, 1, 1, 1);

        labelBucket = new QLabel(protocolGroupBox);
        labelBucket->setObjectName(QStringLiteral("labelBucket"));

        gridLayout_2->addWidget(labelBucket, 2, 0, 1, 1);

        mBucket = new QLineEdit(protocolGroupBox);
        mBucket->setObjectName(QStringLiteral("mBucket"));

        gridLayout_2->addWidget(mBucket, 2, 1, 1, 1);

        labelKey = new QLabel(protocolGroupBox);
        labelKey->setObjectName(QStringLiteral("labelKey"));

        gridLayout_2->addWidget(labelKey, 3, 0, 1, 1);

        mKey = new QLineEdit(protocolGroupBox);
        mKey->setObjectName(QStringLiteral("mKey"));

        gridLayout_2->addWidget(mKey, 3, 1, 1, 1);

        mAuthWarning = new QLabel(protocolGroupBox);
        mAuthWarning->setObjectName(QStringLiteral("mAuthWarning"));
        mAuthWarning->setWordWrap(true);
        mAuthWarning->setOpenExternalLinks(true);

        gridLayout_2->addWidget(mAuthWarning, 4, 0, 1, 2);

        mAuthGroupBox = new QGroupBox(protocolGroupBox);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettingsProtocol = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettingsProtocol->setObjectName(QStringLiteral("mAuthSettingsProtocol"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAuthSettingsProtocol->sizePolicy().hasHeightForWidth());
        mAuthSettingsProtocol->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(mAuthSettingsProtocol);


        gridLayout_2->addWidget(mAuthGroupBox, 5, 0, 1, 2);


        verticalLayout_2->addWidget(protocolGroupBox);

        fileGroupBox = new QGroupBox(QgsOgrSourceSelectBase);
        fileGroupBox->setObjectName(QStringLiteral("fileGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy3);
        fileGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(fileGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelDirectoryType = new QLabel(fileGroupBox);
        labelDirectoryType->setObjectName(QStringLiteral("labelDirectoryType"));

        gridLayout_3->addWidget(labelDirectoryType, 0, 0, 1, 1);

        cmbDirectoryTypes = new QComboBox(fileGroupBox);
        cmbDirectoryTypes->setObjectName(QStringLiteral("cmbDirectoryTypes"));
        sizePolicy3.setHeightForWidth(cmbDirectoryTypes->sizePolicy().hasHeightForWidth());
        cmbDirectoryTypes->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(cmbDirectoryTypes, 0, 1, 1, 1);

        labelSrcDataset = new QLabel(fileGroupBox);
        labelSrcDataset->setObjectName(QStringLiteral("labelSrcDataset"));

        gridLayout_3->addWidget(labelSrcDataset, 1, 0, 1, 1);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        gridLayout_3->addWidget(mFileWidget, 1, 1, 1, 1);


        verticalLayout_2->addWidget(fileGroupBox);

        dbGroupBox = new QGroupBox(QgsOgrSourceSelectBase);
        dbGroupBox->setObjectName(QStringLiteral("dbGroupBox"));
        sizePolicy3.setHeightForWidth(dbGroupBox->sizePolicy().hasHeightForWidth());
        dbGroupBox->setSizePolicy(sizePolicy3);
        dbGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_6 = new QGridLayout(dbGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_4 = new QLabel(dbGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        cmbDatabaseTypes = new QComboBox(dbGroupBox);
        cmbDatabaseTypes->setObjectName(QStringLiteral("cmbDatabaseTypes"));
        sizePolicy3.setHeightForWidth(cmbDatabaseTypes->sizePolicy().hasHeightForWidth());
        cmbDatabaseTypes->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(cmbDatabaseTypes, 0, 1, 1, 1);

        groupBox = new QGroupBox(dbGroupBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        btnNew = new QPushButton(groupBox);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        gridLayout_4->addWidget(btnNew, 1, 0, 1, 1);

        btnEdit = new QPushButton(groupBox);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));

        gridLayout_4->addWidget(btnEdit, 1, 1, 1, 1);

        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        gridLayout_4->addWidget(btnDelete, 1, 2, 1, 1);

        cmbConnections = new QComboBox(groupBox);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout_4->addWidget(cmbConnections, 0, 0, 1, 3);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 2);


        verticalLayout_2->addWidget(dbGroupBox);

        mOpenOptionsGroupBox = new QgsCollapsibleGroupBox(QgsOgrSourceSelectBase);
        mOpenOptionsGroupBox->setObjectName(QStringLiteral("mOpenOptionsGroupBox"));
        openOptionsVBoxLayout = new QVBoxLayout(mOpenOptionsGroupBox);
        openOptionsVBoxLayout->setSpacing(6);
        openOptionsVBoxLayout->setContentsMargins(11, 11, 11, 11);
        openOptionsVBoxLayout->setObjectName(QStringLiteral("openOptionsVBoxLayout"));
        mOpenOptionsLabel = new QLabel(mOpenOptionsGroupBox);
        mOpenOptionsLabel->setObjectName(QStringLiteral("mOpenOptionsLabel"));

        openOptionsVBoxLayout->addWidget(mOpenOptionsLabel);

        mOpenOptionsLayout = new QFormLayout();
        mOpenOptionsLayout->setSpacing(6);
        mOpenOptionsLayout->setObjectName(QStringLiteral("mOpenOptionsLayout"));
        mOpenOptionsLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        openOptionsVBoxLayout->addLayout(mOpenOptionsLayout);


        verticalLayout_2->addWidget(mOpenOptionsGroupBox);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsOgrSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout_4->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelProtocolURI->setBuddy(protocolURI);
        labelBucket->setBuddy(mBucket);
        labelKey->setBuddy(mKey);
        labelSrcDataset->setBuddy(mFileWidget);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(radioSrcFile, radioSrcDirectory);
        QWidget::setTabOrder(radioSrcDirectory, radioSrcDatabase);
        QWidget::setTabOrder(radioSrcDatabase, radioSrcProtocol);
        QWidget::setTabOrder(radioSrcProtocol, cmbEncodings);
        QWidget::setTabOrder(cmbEncodings, cmbProtocolTypes);
        QWidget::setTabOrder(cmbProtocolTypes, protocolURI);
        QWidget::setTabOrder(protocolURI, cmbDirectoryTypes);
        QWidget::setTabOrder(cmbDirectoryTypes, mFileWidget);
        QWidget::setTabOrder(mFileWidget, cmbDatabaseTypes);
        QWidget::setTabOrder(cmbDatabaseTypes, cmbConnections);
        QWidget::setTabOrder(cmbConnections, mOpenOptionsGroupBox);
        QWidget::setTabOrder(mOpenOptionsGroupBox, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);

        retranslateUi(QgsOgrSourceSelectBase);
        QObject::connect(radioSrcDatabase, SIGNAL(toggled(bool)), dbGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(QgsOgrSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOgrSourceSelectBase)
    {
        QgsOgrSourceSelectBase->setWindowTitle(QApplication::translate("QgsOgrSourceSelectBase", "Add Vector Layer", Q_NULLPTR));
        srcGroupBox_2->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Source Type", Q_NULLPTR));
        radioSrcFile->setText(QApplication::translate("QgsOgrSourceSelectBase", "F&ile", Q_NULLPTR));
        radioSrcDirectory->setText(QApplication::translate("QgsOgrSourceSelectBase", "&Directory", Q_NULLPTR));
        radioSrcDatabase->setText(QApplication::translate("QgsOgrSourceSelectBase", "Da&tabase", Q_NULLPTR));
        radioSrcProtocol->setText(QApplication::translate("QgsOgrSourceSelectBase", "Protoco&l: HTTP(S), cloud, etc.", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsOgrSourceSelectBase", "Encoding", Q_NULLPTR));
        protocolGroupBox->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Protocol", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsOgrSourceSelectBase", "Type", Q_NULLPTR));
        labelProtocolURI->setText(QApplication::translate("QgsOgrSourceSelectBase", "&URI", Q_NULLPTR));
        labelBucket->setText(QApplication::translate("QgsOgrSourceSelectBase", "Bucket or container", Q_NULLPTR));
        labelKey->setText(QApplication::translate("QgsOgrSourceSelectBase", "Object key", Q_NULLPTR));
        mAuthWarning->setText(QApplication::translate("QgsOgrSourceSelectBase", "\342\200\246", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Authentication", Q_NULLPTR));
        fileGroupBox->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Source", Q_NULLPTR));
        labelDirectoryType->setText(QApplication::translate("QgsOgrSourceSelectBase", "Type", Q_NULLPTR));
        labelSrcDataset->setText(QApplication::translate("QgsOgrSourceSelectBase", "Vector Dataset(s)", Q_NULLPTR));
        dbGroupBox->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Database", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsOgrSourceSelectBase", "Type", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Connections", Q_NULLPTR));
        btnNew->setText(QApplication::translate("QgsOgrSourceSelectBase", "New", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("QgsOgrSourceSelectBase", "Edit", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("QgsOgrSourceSelectBase", "Delete", Q_NULLPTR));
        mOpenOptionsGroupBox->setTitle(QApplication::translate("QgsOgrSourceSelectBase", "Options", Q_NULLPTR));
        mOpenOptionsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsOgrSourceSelectBase: public Ui_QgsOgrSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOGRSOURCESELECTBASE_H
