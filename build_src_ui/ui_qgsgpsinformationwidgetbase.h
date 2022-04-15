/********************************************************************************
** Form generated from reading UI file 'qgsgpsinformationwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSINFORMATIONWIDGETBASE_H
#define UI_QGSGPSINFORMATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsfieldcombobox.h"
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGpsInformationWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_15;
    QLabel *mLblStatusIndicator;
    QPushButton *mBtnCloseFeature;
    QPushButton *mBtnAddVertex;
    QToolButton *mBtnResetFeature;
    QStackedWidget *mStackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_11;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_10;
    QLineEdit *mTxtLatitude;
    QSpacerItem *verticalSpacer_2;
    QLabel *mLblLongitude;
    QLineEdit *mTxtLongitude;
    QLineEdit *mTxtAltitude;
    QLabel *mLblAltitude;
    QLabel *mLblLatitude;
    QLabel *mLblUtcTime;
    QLineEdit *mTxtDateTime;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *mTxtSpeed;
    QLabel *mLblSpeed;
    QLineEdit *mTxtDirection;
    QLabel *mLblDirection;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *mTxtHdop;
    QLabel *mLblHdop;
    QLineEdit *mTxtVdop;
    QLabel *mLblVdop;
    QLineEdit *mTxtPdop;
    QLabel *mLblPdop;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *mTxtFixMode;
    QLabel *mLblFixMode;
    QLineEdit *mTxtFixType;
    QLabel *mLblFixType;
    QLineEdit *mTxtQuality;
    QLabel *mLblQuality;
    QLineEdit *mTxtStatus;
    QLabel *mLblStatus;
    QLineEdit *mTxtSatellitesUsed;
    QLabel *mLblSatellitesUsed;
    QLineEdit *mTxtHacc;
    QLineEdit *mTxtVacc;
    QLabel *mLblHacc;
    QLabel *mLblVacc;
    QWidget *stackedWidgetPage2;
    QWidget *stackedWidgetPage3;
    QWidget *stackedWidgetPage4;
    QGridLayout *gridLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QgsCollapsibleGroupBox *mLogFileGroupBox;
    QGridLayout *gridLayout_13;
    QLineEdit *mTxtLogFile;
    QPushButton *mBtnLogFile;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *gridLayout_14;
    QComboBox *mCboDistanceThreshold;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *mCboAcquisitionInterval;
    QgsCollapsibleGroupBox *mDeviceGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mRadInternal;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mCboDevices;
    QToolButton *mBtnRefreshDevices;
    QRadioButton *mRadAutodetect;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *mGpsdDevice;
    QLineEdit *mGpsdHost;
    QLineEdit *mGpsdPort;
    QRadioButton *mRadGpsd;
    QRadioButton *mRadUserPath;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_16;
    QLabel *label_6;
    QgsSpinBox *mSpinTrackWidth;
    QCheckBox *mCbxAutoAddVertices;
    QLabel *label_7;
    QgsColorButton *mBtnTrackColor;
    QCheckBox *mCbxAutoCommit;
    QGroupBox *mGboxTimestamp;
    QFormLayout *formLayout;
    QLabel *label_10;
    QgsFieldComboBox *mCboTimestampField;
    QLabel *mLblTimestampFormat;
    QComboBox *mCboTimestampFormat;
    QLabel *mLblTimeZone;
    QComboBox *mCboTimeZones;
    QgsSpinBox *mLeapSeconds;
    QCheckBox *mCbxLeapSeconds;
    QCheckBox *mTravelBearingCheckBox;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout;
    QgsSpinBox *mSpinMapExtentMultiplier;
    QRadioButton *radRecenterMap;
    QRadioButton *radRecenterWhenNeeded;
    QRadioButton *radNeverRecenter;
    QCheckBox *mRotateMapCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QgsSpinBox *mSpinMapRotateInterval;
    QgsCollapsibleGroupBox *mGroupShowMarker;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSlider *mSliderMarkerSize;
    QLabel *label;
    QgsCollapsibleGroupBox *mShowBearingLineCheck;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QgsSymbolButton *mBearingLineStyleButton;
    QWidget *stackedWidgetPage5;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *mGPSPlainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mBtnPosition;
    QToolButton *mBtnSignal;
    QToolButton *mBtnSatellites;
    QToolButton *mBtnOptions;
    QToolButton *mBtnDebug;
    QSpacerItem *horizontalSpacer;
    QPushButton *mRecenterButton;
    QPushButton *mConnectButton;

    void setupUi(QgsPanelWidget *QgsGpsInformationWidgetBase)
    {
        if (QgsGpsInformationWidgetBase->objectName().isEmpty())
            QgsGpsInformationWidgetBase->setObjectName(QStringLiteral("QgsGpsInformationWidgetBase"));
        QgsGpsInformationWidgetBase->resize(324, 591);
        gridLayout_4 = new QGridLayout(QgsGpsInformationWidgetBase);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(2);
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        mLblStatusIndicator = new QLabel(QgsGpsInformationWidgetBase);
        mLblStatusIndicator->setObjectName(QStringLiteral("mLblStatusIndicator"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLblStatusIndicator->sizePolicy().hasHeightForWidth());
        mLblStatusIndicator->setSizePolicy(sizePolicy);
        mLblStatusIndicator->setMinimumSize(QSize(42, 0));
        mLblStatusIndicator->setMaximumSize(QSize(42, 16777215));
        mLblStatusIndicator->setFrameShape(QFrame::Box);
        mLblStatusIndicator->setScaledContents(true);

        gridLayout_15->addWidget(mLblStatusIndicator, 0, 1, 1, 1);

        mBtnCloseFeature = new QPushButton(QgsGpsInformationWidgetBase);
        mBtnCloseFeature->setObjectName(QStringLiteral("mBtnCloseFeature"));
        mBtnCloseFeature->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mBtnCloseFeature->sizePolicy().hasHeightForWidth());
        mBtnCloseFeature->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(mBtnCloseFeature, 0, 0, 1, 1);

        mBtnAddVertex = new QPushButton(QgsGpsInformationWidgetBase);
        mBtnAddVertex->setObjectName(QStringLiteral("mBtnAddVertex"));
        mBtnAddVertex->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mBtnAddVertex->sizePolicy().hasHeightForWidth());
        mBtnAddVertex->setSizePolicy(sizePolicy2);

        gridLayout_15->addWidget(mBtnAddVertex, 1, 0, 1, 1);

        mBtnResetFeature = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnResetFeature->setObjectName(QStringLiteral("mBtnResetFeature"));
        sizePolicy1.setHeightForWidth(mBtnResetFeature->sizePolicy().hasHeightForWidth());
        mBtnResetFeature->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnResetFeature->setIcon(icon);

        gridLayout_15->addWidget(mBtnResetFeature, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_15, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsGpsInformationWidgetBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        gridLayout_11 = new QGridLayout(stackedWidgetPage1);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(stackedWidgetPage1);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 114, 504));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(2, 2, 2, 2);
        mTxtLatitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtLatitude->setObjectName(QStringLiteral("mTxtLatitude"));
        mTxtLatitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtLatitude, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_2, 3, 1, 1, 1);

        mLblLongitude = new QLabel(scrollAreaWidgetContents_2);
        mLblLongitude->setObjectName(QStringLiteral("mLblLongitude"));

        gridLayout_10->addWidget(mLblLongitude, 1, 0, 1, 1);

        mTxtLongitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtLongitude->setObjectName(QStringLiteral("mTxtLongitude"));
        mTxtLongitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtLongitude, 1, 1, 1, 1);

        mTxtAltitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtAltitude->setObjectName(QStringLiteral("mTxtAltitude"));
        mTxtAltitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtAltitude, 2, 1, 1, 1);

        mLblAltitude = new QLabel(scrollAreaWidgetContents_2);
        mLblAltitude->setObjectName(QStringLiteral("mLblAltitude"));

        gridLayout_10->addWidget(mLblAltitude, 2, 0, 1, 1);

        mLblLatitude = new QLabel(scrollAreaWidgetContents_2);
        mLblLatitude->setObjectName(QStringLiteral("mLblLatitude"));

        gridLayout_10->addWidget(mLblLatitude, 0, 0, 1, 1);

        mLblUtcTime = new QLabel(scrollAreaWidgetContents_2);
        mLblUtcTime->setObjectName(QStringLiteral("mLblUtcTime"));

        gridLayout_10->addWidget(mLblUtcTime, 4, 0, 1, 1);

        mTxtDateTime = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDateTime->setObjectName(QStringLiteral("mTxtDateTime"));
        mTxtDateTime->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDateTime, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_4, 8, 1, 1, 1);

        mTxtSpeed = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtSpeed->setObjectName(QStringLiteral("mTxtSpeed"));
        mTxtSpeed->setReadOnly(true);

        gridLayout_10->addWidget(mTxtSpeed, 6, 1, 1, 1);

        mLblSpeed = new QLabel(scrollAreaWidgetContents_2);
        mLblSpeed->setObjectName(QStringLiteral("mLblSpeed"));

        gridLayout_10->addWidget(mLblSpeed, 6, 0, 1, 1);

        mTxtDirection = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDirection->setObjectName(QStringLiteral("mTxtDirection"));
        mTxtDirection->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDirection, 7, 1, 1, 1);

        mLblDirection = new QLabel(scrollAreaWidgetContents_2);
        mLblDirection->setObjectName(QStringLiteral("mLblDirection"));

        gridLayout_10->addWidget(mLblDirection, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_5, 5, 1, 1, 1);

        mTxtHdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtHdop->setObjectName(QStringLiteral("mTxtHdop"));
        mTxtHdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtHdop, 9, 1, 1, 1);

        mLblHdop = new QLabel(scrollAreaWidgetContents_2);
        mLblHdop->setObjectName(QStringLiteral("mLblHdop"));

        gridLayout_10->addWidget(mLblHdop, 9, 0, 1, 1);

        mTxtVdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtVdop->setObjectName(QStringLiteral("mTxtVdop"));
        mTxtVdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtVdop, 10, 1, 1, 1);

        mLblVdop = new QLabel(scrollAreaWidgetContents_2);
        mLblVdop->setObjectName(QStringLiteral("mLblVdop"));

        gridLayout_10->addWidget(mLblVdop, 10, 0, 1, 1);

        mTxtPdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtPdop->setObjectName(QStringLiteral("mTxtPdop"));
        mTxtPdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtPdop, 11, 1, 1, 1);

        mLblPdop = new QLabel(scrollAreaWidgetContents_2);
        mLblPdop->setObjectName(QStringLiteral("mLblPdop"));

        gridLayout_10->addWidget(mLblPdop, 11, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_3, 14, 1, 1, 1);

        mTxtFixMode = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtFixMode->setObjectName(QStringLiteral("mTxtFixMode"));
        mTxtFixMode->setReadOnly(true);

        gridLayout_10->addWidget(mTxtFixMode, 15, 1, 1, 1);

        mLblFixMode = new QLabel(scrollAreaWidgetContents_2);
        mLblFixMode->setObjectName(QStringLiteral("mLblFixMode"));

        gridLayout_10->addWidget(mLblFixMode, 15, 0, 1, 1);

        mTxtFixType = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtFixType->setObjectName(QStringLiteral("mTxtFixType"));
        mTxtFixType->setReadOnly(true);

        gridLayout_10->addWidget(mTxtFixType, 16, 1, 1, 1);

        mLblFixType = new QLabel(scrollAreaWidgetContents_2);
        mLblFixType->setObjectName(QStringLiteral("mLblFixType"));

        gridLayout_10->addWidget(mLblFixType, 16, 0, 1, 1);

        mTxtQuality = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtQuality->setObjectName(QStringLiteral("mTxtQuality"));
        mTxtQuality->setReadOnly(true);

        gridLayout_10->addWidget(mTxtQuality, 17, 1, 1, 1);

        mLblQuality = new QLabel(scrollAreaWidgetContents_2);
        mLblQuality->setObjectName(QStringLiteral("mLblQuality"));

        gridLayout_10->addWidget(mLblQuality, 17, 0, 1, 1);

        mTxtStatus = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtStatus->setObjectName(QStringLiteral("mTxtStatus"));
        mTxtStatus->setReadOnly(true);

        gridLayout_10->addWidget(mTxtStatus, 18, 1, 1, 1);

        mLblStatus = new QLabel(scrollAreaWidgetContents_2);
        mLblStatus->setObjectName(QStringLiteral("mLblStatus"));

        gridLayout_10->addWidget(mLblStatus, 18, 0, 1, 1);

        mTxtSatellitesUsed = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtSatellitesUsed->setObjectName(QStringLiteral("mTxtSatellitesUsed"));
        mTxtSatellitesUsed->setReadOnly(true);

        gridLayout_10->addWidget(mTxtSatellitesUsed, 19, 1, 1, 1);

        mLblSatellitesUsed = new QLabel(scrollAreaWidgetContents_2);
        mLblSatellitesUsed->setObjectName(QStringLiteral("mLblSatellitesUsed"));

        gridLayout_10->addWidget(mLblSatellitesUsed, 19, 0, 1, 1);

        mTxtHacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtHacc->setObjectName(QStringLiteral("mTxtHacc"));

        gridLayout_10->addWidget(mTxtHacc, 12, 1, 1, 1);

        mTxtVacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtVacc->setObjectName(QStringLiteral("mTxtVacc"));

        gridLayout_10->addWidget(mTxtVacc, 13, 1, 1, 1);

        mLblHacc = new QLabel(scrollAreaWidgetContents_2);
        mLblHacc->setObjectName(QStringLiteral("mLblHacc"));

        gridLayout_10->addWidget(mLblHacc, 12, 0, 1, 1);

        mLblVacc = new QLabel(scrollAreaWidgetContents_2);
        mLblVacc->setObjectName(QStringLiteral("mLblVacc"));

        gridLayout_10->addWidget(mLblVacc, 13, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_10, 2, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_11->addWidget(scrollArea_2, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QStringLiteral("stackedWidgetPage2"));
        mStackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QStringLiteral("stackedWidgetPage3"));
        mStackedWidget->addWidget(stackedWidgetPage3);
        stackedWidgetPage4 = new QWidget();
        stackedWidgetPage4->setObjectName(QStringLiteral("stackedWidgetPage4"));
        gridLayout_5 = new QGridLayout(stackedWidgetPage4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(stackedWidgetPage4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -425, 315, 1183));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(4);
        gridLayout_7->setContentsMargins(2, 2, 2, 2);
        mLogFileGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mLogFileGroupBox->setObjectName(QStringLiteral("mLogFileGroupBox"));
        mLogFileGroupBox->setEnabled(true);
        mLogFileGroupBox->setMinimumSize(QSize(0, 0));
        mLogFileGroupBox->setCheckable(true);
        mLogFileGroupBox->setChecked(false);
        gridLayout_13 = new QGridLayout(mLogFileGroupBox);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 2, -1, 4);
        mTxtLogFile = new QLineEdit(mLogFileGroupBox);
        mTxtLogFile->setObjectName(QStringLiteral("mTxtLogFile"));
        mTxtLogFile->setEnabled(false);
        sizePolicy1.setHeightForWidth(mTxtLogFile->sizePolicy().hasHeightForWidth());
        mTxtLogFile->setSizePolicy(sizePolicy1);
        mTxtLogFile->setAcceptDrops(false);
        mTxtLogFile->setReadOnly(true);

        gridLayout_13->addWidget(mTxtLogFile, 0, 0, 1, 1);

        mBtnLogFile = new QPushButton(mLogFileGroupBox);
        mBtnLogFile->setObjectName(QStringLiteral("mBtnLogFile"));
        mBtnLogFile->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(23);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mBtnLogFile->sizePolicy().hasHeightForWidth());
        mBtnLogFile->setSizePolicy(sizePolicy3);
        mBtnLogFile->setMinimumSize(QSize(23, 0));

        gridLayout_13->addWidget(mBtnLogFile, 0, 1, 1, 1);

        gridLayout_13->setColumnStretch(0, 100);

        gridLayout_7->addWidget(mLogFileGroupBox, 7, 0, 1, 1);

        groupBox_4 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_14 = new QGridLayout(groupBox_4);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        mCboDistanceThreshold = new QComboBox(groupBox_4);
        mCboDistanceThreshold->setObjectName(QStringLiteral("mCboDistanceThreshold"));
        mCboDistanceThreshold->setEditable(true);

        gridLayout_14->addWidget(mCboDistanceThreshold, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_14->addWidget(label_9, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_14->addWidget(label_8, 0, 0, 1, 1);

        mCboAcquisitionInterval = new QComboBox(groupBox_4);
        mCboAcquisitionInterval->setObjectName(QStringLiteral("mCboAcquisitionInterval"));
        mCboAcquisitionInterval->setEditable(true);

        gridLayout_14->addWidget(mCboAcquisitionInterval, 0, 1, 1, 1);

        gridLayout_14->setColumnStretch(1, 1);

        gridLayout_7->addWidget(groupBox_4, 4, 0, 1, 1);

        mDeviceGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDeviceGroupBox->setObjectName(QStringLiteral("mDeviceGroupBox"));
        gridLayout = new QGridLayout(mDeviceGroupBox);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 2, -1, 4);
        mRadInternal = new QRadioButton(mDeviceGroupBox);
        mRadInternal->setObjectName(QStringLiteral("mRadInternal"));

        gridLayout->addWidget(mRadInternal, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        mCboDevices = new QComboBox(mDeviceGroupBox);
        mCboDevices->setObjectName(QStringLiteral("mCboDevices"));
        mCboDevices->setEnabled(false);

        horizontalLayout_3->addWidget(mCboDevices);

        mBtnRefreshDevices = new QToolButton(mDeviceGroupBox);
        mBtnRefreshDevices->setObjectName(QStringLiteral("mBtnRefreshDevices"));
        mBtnRefreshDevices->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionRotatePointSymbols.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRefreshDevices->setIcon(icon1);

        horizontalLayout_3->addWidget(mBtnRefreshDevices);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        mRadAutodetect = new QRadioButton(mDeviceGroupBox);
        mRadAutodetect->setObjectName(QStringLiteral("mRadAutodetect"));
        mRadAutodetect->setChecked(true);

        gridLayout->addWidget(mRadAutodetect, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setVerticalSpacing(2);
        gridLayout_12->setContentsMargins(20, -1, -1, -1);
        label_4 = new QLabel(mDeviceGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_12->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(mDeviceGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_12->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(mDeviceGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_12->addWidget(label_5, 2, 0, 1, 1);

        mGpsdDevice = new QLineEdit(mDeviceGroupBox);
        mGpsdDevice->setObjectName(QStringLiteral("mGpsdDevice"));
        mGpsdDevice->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mGpsdDevice->sizePolicy().hasHeightForWidth());
        mGpsdDevice->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(mGpsdDevice, 2, 1, 1, 1);

        mGpsdHost = new QLineEdit(mDeviceGroupBox);
        mGpsdHost->setObjectName(QStringLiteral("mGpsdHost"));
        mGpsdHost->setEnabled(false);
        sizePolicy4.setHeightForWidth(mGpsdHost->sizePolicy().hasHeightForWidth());
        mGpsdHost->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(mGpsdHost, 0, 1, 1, 1);

        mGpsdPort = new QLineEdit(mDeviceGroupBox);
        mGpsdPort->setObjectName(QStringLiteral("mGpsdPort"));
        mGpsdPort->setEnabled(false);
        sizePolicy4.setHeightForWidth(mGpsdPort->sizePolicy().hasHeightForWidth());
        mGpsdPort->setSizePolicy(sizePolicy4);
        mGpsdPort->setMaxLength(5);

        gridLayout_12->addWidget(mGpsdPort, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_12, 5, 0, 1, 1);

        mRadGpsd = new QRadioButton(mDeviceGroupBox);
        mRadGpsd->setObjectName(QStringLiteral("mRadGpsd"));

        gridLayout->addWidget(mRadGpsd, 4, 0, 1, 1);

        mRadUserPath = new QRadioButton(mDeviceGroupBox);
        mRadUserPath->setObjectName(QStringLiteral("mRadUserPath"));

        gridLayout->addWidget(mRadUserPath, 2, 0, 1, 1);


        gridLayout_7->addWidget(mDeviceGroupBox, 0, 0, 1, 1);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(2);
        gridLayout_9->setContentsMargins(-1, 2, -1, 4);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_16 = new QGridLayout(groupBox_3);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 2, -1, 4);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_16->addWidget(label_6, 1, 0, 1, 1);

        mSpinTrackWidth = new QgsSpinBox(groupBox_3);
        mSpinTrackWidth->setObjectName(QStringLiteral("mSpinTrackWidth"));

        gridLayout_16->addWidget(mSpinTrackWidth, 1, 1, 1, 1);

        mCbxAutoAddVertices = new QCheckBox(groupBox_3);
        mCbxAutoAddVertices->setObjectName(QStringLiteral("mCbxAutoAddVertices"));

        gridLayout_16->addWidget(mCbxAutoAddVertices, 0, 0, 1, 2);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_16->addWidget(label_7, 2, 0, 1, 1);

        mBtnTrackColor = new QgsColorButton(groupBox_3);
        mBtnTrackColor->setObjectName(QStringLiteral("mBtnTrackColor"));
        sizePolicy1.setHeightForWidth(mBtnTrackColor->sizePolicy().hasHeightForWidth());
        mBtnTrackColor->setSizePolicy(sizePolicy1);

        gridLayout_16->addWidget(mBtnTrackColor, 2, 1, 1, 1);

        gridLayout_16->setColumnStretch(1, 1);

        gridLayout_9->addWidget(groupBox_3, 2, 0, 1, 1);

        mCbxAutoCommit = new QCheckBox(groupBox_2);
        mCbxAutoCommit->setObjectName(QStringLiteral("mCbxAutoCommit"));

        gridLayout_9->addWidget(mCbxAutoCommit, 0, 0, 1, 1);

        mGboxTimestamp = new QGroupBox(groupBox_2);
        mGboxTimestamp->setObjectName(QStringLiteral("mGboxTimestamp"));
        formLayout = new QFormLayout(mGboxTimestamp);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_10 = new QLabel(mGboxTimestamp);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        mCboTimestampField = new QgsFieldComboBox(mGboxTimestamp);
        mCboTimestampField->setObjectName(QStringLiteral("mCboTimestampField"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mCboTimestampField);

        mLblTimestampFormat = new QLabel(mGboxTimestamp);
        mLblTimestampFormat->setObjectName(QStringLiteral("mLblTimestampFormat"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mLblTimestampFormat);

        mCboTimestampFormat = new QComboBox(mGboxTimestamp);
        mCboTimestampFormat->setObjectName(QStringLiteral("mCboTimestampFormat"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mCboTimestampFormat);

        mLblTimeZone = new QLabel(mGboxTimestamp);
        mLblTimeZone->setObjectName(QStringLiteral("mLblTimeZone"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLblTimeZone);

        mCboTimeZones = new QComboBox(mGboxTimestamp);
        mCboTimeZones->setObjectName(QStringLiteral("mCboTimeZones"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mCboTimeZones);

        mLeapSeconds = new QgsSpinBox(mGboxTimestamp);
        mLeapSeconds->setObjectName(QStringLiteral("mLeapSeconds"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mLeapSeconds);

        mCbxLeapSeconds = new QCheckBox(mGboxTimestamp);
        mCbxLeapSeconds->setObjectName(QStringLiteral("mCbxLeapSeconds"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mCbxLeapSeconds);


        gridLayout_9->addWidget(mGboxTimestamp, 1, 0, 1, 1);

        mTravelBearingCheckBox = new QCheckBox(groupBox_2);
        mTravelBearingCheckBox->setObjectName(QStringLiteral("mTravelBearingCheckBox"));

        gridLayout_9->addWidget(mTravelBearingCheckBox, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setVerticalSpacing(2);
        gridLayout_8->setContentsMargins(-1, 2, -1, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, -1, -1);
        mSpinMapExtentMultiplier = new QgsSpinBox(groupBox);
        mSpinMapExtentMultiplier->setObjectName(QStringLiteral("mSpinMapExtentMultiplier"));
        mSpinMapExtentMultiplier->setEnabled(false);
        sizePolicy1.setHeightForWidth(mSpinMapExtentMultiplier->sizePolicy().hasHeightForWidth());
        mSpinMapExtentMultiplier->setSizePolicy(sizePolicy1);
        mSpinMapExtentMultiplier->setMinimum(5);
        mSpinMapExtentMultiplier->setMaximum(100);
        mSpinMapExtentMultiplier->setSingleStep(1);
        mSpinMapExtentMultiplier->setValue(50);

        horizontalLayout->addWidget(mSpinMapExtentMultiplier);


        gridLayout_8->addLayout(horizontalLayout, 2, 0, 1, 1);

        radRecenterMap = new QRadioButton(groupBox);
        radRecenterMap->setObjectName(QStringLiteral("radRecenterMap"));
        radRecenterMap->setChecked(true);

        gridLayout_8->addWidget(radRecenterMap, 0, 0, 1, 1);

        radRecenterWhenNeeded = new QRadioButton(groupBox);
        radRecenterWhenNeeded->setObjectName(QStringLiteral("radRecenterWhenNeeded"));

        gridLayout_8->addWidget(radRecenterWhenNeeded, 1, 0, 1, 1);

        radNeverRecenter = new QRadioButton(groupBox);
        radNeverRecenter->setObjectName(QStringLiteral("radNeverRecenter"));

        gridLayout_8->addWidget(radNeverRecenter, 3, 0, 1, 1);

        mRotateMapCheckBox = new QCheckBox(groupBox);
        mRotateMapCheckBox->setObjectName(QStringLiteral("mRotateMapCheckBox"));

        gridLayout_8->addWidget(mRotateMapCheckBox, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, -1, -1, -1);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_5->addWidget(label_12);

        mSpinMapRotateInterval = new QgsSpinBox(groupBox);
        mSpinMapRotateInterval->setObjectName(QStringLiteral("mSpinMapRotateInterval"));
        mSpinMapRotateInterval->setEnabled(false);
        sizePolicy1.setHeightForWidth(mSpinMapRotateInterval->sizePolicy().hasHeightForWidth());
        mSpinMapRotateInterval->setSizePolicy(sizePolicy1);
        mSpinMapRotateInterval->setProperty("minimum", QVariant(0));
        mSpinMapRotateInterval->setProperty("maximum", QVariant(1000));
        mSpinMapRotateInterval->setProperty("singleStep", QVariant(1));
        mSpinMapRotateInterval->setProperty("value", QVariant(0));

        horizontalLayout_5->addWidget(mSpinMapRotateInterval);

        horizontalLayout_5->setStretch(1, 1);

        gridLayout_8->addLayout(horizontalLayout_5, 5, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 5, 0, 1, 1);

        mGroupShowMarker = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mGroupShowMarker->setObjectName(QStringLiteral("mGroupShowMarker"));
        mGroupShowMarker->setCheckable(true);
        gridLayout_3 = new QGridLayout(mGroupShowMarker);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(2);
        gridLayout_3->setContentsMargins(-1, 4, -1, 4);
        label_2 = new QLabel(mGroupShowMarker);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        mSliderMarkerSize = new QSlider(mGroupShowMarker);
        mSliderMarkerSize->setObjectName(QStringLiteral("mSliderMarkerSize"));
        sizePolicy1.setHeightForWidth(mSliderMarkerSize->sizePolicy().hasHeightForWidth());
        mSliderMarkerSize->setSizePolicy(sizePolicy1);
        mSliderMarkerSize->setMinimum(8);
        mSliderMarkerSize->setMaximum(128);
        mSliderMarkerSize->setSingleStep(4);
        mSliderMarkerSize->setPageStep(8);
        mSliderMarkerSize->setSliderPosition(10);
        mSliderMarkerSize->setOrientation(Qt::Horizontal);
        mSliderMarkerSize->setTickPosition(QSlider::TicksBelow);

        gridLayout_3->addWidget(mSliderMarkerSize, 0, 0, 1, 3);

        label = new QLabel(mGroupShowMarker);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);


        gridLayout_7->addWidget(mGroupShowMarker, 3, 0, 1, 1);

        mShowBearingLineCheck = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mShowBearingLineCheck->setObjectName(QStringLiteral("mShowBearingLineCheck"));
        mShowBearingLineCheck->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(mShowBearingLineCheck);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_11 = new QLabel(mShowBearingLineCheck);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_4->addWidget(label_11);

        mBearingLineStyleButton = new QgsSymbolButton(mShowBearingLineCheck);
        mBearingLineStyleButton->setObjectName(QStringLiteral("mBearingLineStyleButton"));
        sizePolicy1.setHeightForWidth(mBearingLineStyleButton->sizePolicy().hasHeightForWidth());
        mBearingLineStyleButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(mBearingLineStyleButton);

        horizontalLayout_4->setStretch(1, 1);

        gridLayout_7->addWidget(mShowBearingLineCheck, 6, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage4);
        stackedWidgetPage5 = new QWidget();
        stackedWidgetPage5->setObjectName(QStringLiteral("stackedWidgetPage5"));
        gridLayout_6 = new QGridLayout(stackedWidgetPage5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mGPSPlainTextEdit = new QPlainTextEdit(stackedWidgetPage5);
        mGPSPlainTextEdit->setObjectName(QStringLiteral("mGPSPlainTextEdit"));
        mGPSPlainTextEdit->setAcceptDrops(false);
        mGPSPlainTextEdit->setUndoRedoEnabled(false);

        gridLayout_6->addWidget(mGPSPlainTextEdit, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage5);

        gridLayout_4->addWidget(mStackedWidget, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mBtnPosition = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnPosition->setObjectName(QStringLiteral("mBtnPosition"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionPropertiesWidget.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnPosition->setIcon(icon2);
        mBtnPosition->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnPosition);

        mBtnSignal = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnSignal->setObjectName(QStringLiteral("mBtnSignal"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/gpsicons/barchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSignal->setIcon(icon3);
        mBtnSignal->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnSignal);

        mBtnSatellites = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnSatellites->setObjectName(QStringLiteral("mBtnSatellites"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/gpsicons/polarchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSatellites->setIcon(icon4);
        mBtnSatellites->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnSatellites);

        mBtnOptions = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnOptions->setObjectName(QStringLiteral("mBtnOptions"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnOptions->setIcon(icon5);
        mBtnOptions->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnOptions);

        mBtnDebug = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnDebug->setObjectName(QStringLiteral("mBtnDebug"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnDebug->setIcon(icon6);
        mBtnDebug->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnDebug);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mRecenterButton = new QPushButton(QgsGpsInformationWidgetBase);
        mRecenterButton->setObjectName(QStringLiteral("mRecenterButton"));
        sizePolicy2.setHeightForWidth(mRecenterButton->sizePolicy().hasHeightForWidth());
        mRecenterButton->setSizePolicy(sizePolicy2);
        mRecenterButton->setCheckable(false);

        horizontalLayout_2->addWidget(mRecenterButton);

        mConnectButton = new QPushButton(QgsGpsInformationWidgetBase);
        mConnectButton->setObjectName(QStringLiteral("mConnectButton"));
        sizePolicy2.setHeightForWidth(mConnectButton->sizePolicy().hasHeightForWidth());
        mConnectButton->setSizePolicy(sizePolicy2);
        mConnectButton->setCheckable(true);

        horizontalLayout_2->addWidget(mConnectButton);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(mGpsdPort);
        label_3->setBuddy(mGpsdHost);
        label_5->setBuddy(mGpsdDevice);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mBtnCloseFeature, mBtnAddVertex);
        QWidget::setTabOrder(mBtnAddVertex, mBtnResetFeature);
        QWidget::setTabOrder(mBtnResetFeature, mBtnPosition);
        QWidget::setTabOrder(mBtnPosition, mBtnSignal);
        QWidget::setTabOrder(mBtnSignal, mBtnSatellites);
        QWidget::setTabOrder(mBtnSatellites, mBtnOptions);
        QWidget::setTabOrder(mBtnOptions, mBtnDebug);
        QWidget::setTabOrder(mBtnDebug, mConnectButton);
        QWidget::setTabOrder(mConnectButton, scrollArea);
        QWidget::setTabOrder(scrollArea, mRadAutodetect);
        QWidget::setTabOrder(mRadAutodetect, mRadInternal);
        QWidget::setTabOrder(mRadInternal, mRadUserPath);
        QWidget::setTabOrder(mRadUserPath, mCboDevices);
        QWidget::setTabOrder(mCboDevices, mBtnRefreshDevices);
        QWidget::setTabOrder(mBtnRefreshDevices, mRadGpsd);
        QWidget::setTabOrder(mRadGpsd, mGpsdHost);
        QWidget::setTabOrder(mGpsdHost, mGpsdPort);
        QWidget::setTabOrder(mGpsdPort, mGpsdDevice);
        QWidget::setTabOrder(mGpsdDevice, mCbxAutoCommit);
        QWidget::setTabOrder(mCbxAutoCommit, mCbxAutoAddVertices);
        QWidget::setTabOrder(mCbxAutoAddVertices, mSpinTrackWidth);
        QWidget::setTabOrder(mSpinTrackWidth, mBtnTrackColor);
        QWidget::setTabOrder(mBtnTrackColor, mGroupShowMarker);
        QWidget::setTabOrder(mGroupShowMarker, mSliderMarkerSize);
        QWidget::setTabOrder(mSliderMarkerSize, mCboAcquisitionInterval);
        QWidget::setTabOrder(mCboAcquisitionInterval, mCboDistanceThreshold);
        QWidget::setTabOrder(mCboDistanceThreshold, radRecenterMap);
        QWidget::setTabOrder(radRecenterMap, radRecenterWhenNeeded);
        QWidget::setTabOrder(radRecenterWhenNeeded, mSpinMapExtentMultiplier);
        QWidget::setTabOrder(mSpinMapExtentMultiplier, radNeverRecenter);
        QWidget::setTabOrder(radNeverRecenter, mRotateMapCheckBox);
        QWidget::setTabOrder(mRotateMapCheckBox, mLogFileGroupBox);
        QWidget::setTabOrder(mLogFileGroupBox, mTxtLogFile);
        QWidget::setTabOrder(mTxtLogFile, mBtnLogFile);
        QWidget::setTabOrder(mBtnLogFile, mGPSPlainTextEdit);
        QWidget::setTabOrder(mGPSPlainTextEdit, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mTxtLatitude);
        QWidget::setTabOrder(mTxtLatitude, mTxtLongitude);
        QWidget::setTabOrder(mTxtLongitude, mTxtAltitude);
        QWidget::setTabOrder(mTxtAltitude, mTxtDateTime);
        QWidget::setTabOrder(mTxtDateTime, mTxtSpeed);
        QWidget::setTabOrder(mTxtSpeed, mTxtDirection);
        QWidget::setTabOrder(mTxtDirection, mTxtHdop);
        QWidget::setTabOrder(mTxtHdop, mTxtVdop);
        QWidget::setTabOrder(mTxtVdop, mTxtPdop);
        QWidget::setTabOrder(mTxtPdop, mTxtHacc);
        QWidget::setTabOrder(mTxtHacc, mTxtVacc);
        QWidget::setTabOrder(mTxtVacc, mTxtFixMode);
        QWidget::setTabOrder(mTxtFixMode, mTxtFixType);
        QWidget::setTabOrder(mTxtFixType, mTxtQuality);
        QWidget::setTabOrder(mTxtQuality, mTxtStatus);
        QWidget::setTabOrder(mTxtStatus, mTxtSatellitesUsed);
        QWidget::setTabOrder(mTxtSatellitesUsed, mCboTimestampField);
        QWidget::setTabOrder(mCboTimestampField, mCboTimestampFormat);
        QWidget::setTabOrder(mCboTimestampFormat, mCboTimeZones);
        QWidget::setTabOrder(mCboTimeZones, mLeapSeconds);
        QWidget::setTabOrder(mLeapSeconds, mCbxLeapSeconds);

        retranslateUi(QgsGpsInformationWidgetBase);
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mCboDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mCboDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));
        QObject::connect(radRecenterWhenNeeded, SIGNAL(toggled(bool)), mSpinMapExtentMultiplier, SLOT(setEnabled(bool)));
        QObject::connect(radRecenterMap, SIGNAL(toggled(bool)), mSpinMapExtentMultiplier, SLOT(setDisabled(bool)));
        QObject::connect(radNeverRecenter, SIGNAL(toggled(bool)), mSpinMapExtentMultiplier, SLOT(setDisabled(bool)));
        QObject::connect(mCbxAutoAddVertices, SIGNAL(toggled(bool)), mBtnAddVertex, SLOT(setDisabled(bool)));
        QObject::connect(mConnectButton, SIGNAL(toggled(bool)), mDeviceGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(mConnectButton, SIGNAL(toggled(bool)), mLogFileGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));

        mStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(QgsGpsInformationWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsGpsInformationWidgetBase)
    {
        QgsGpsInformationWidgetBase->setWindowTitle(QApplication::translate("QgsGpsInformationWidgetBase", "GPS Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLblStatusIndicator->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Quick status indicator:\n"
"green = good or 3D fix\n"
"yellow = good 2D fix\n"
"red = no fix or bad fix\n"
"gray = no data\n"
"\n"
"2D/3D depends on this information being available", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblStatusIndicator->setText(QString());
        mBtnCloseFeature->setText(QApplication::translate("QgsGpsInformationWidgetBase", "&Add Feature", Q_NULLPTR));
        mBtnAddVertex->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Add Track Point", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnResetFeature->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Reset track", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnResetFeature->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtLatitude->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "latitude of position fix (degrees)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblLongitude->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Longitude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtLongitude->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "longitude of position fix (degrees)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mTxtAltitude->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "antenna altitude with respect to geoid (mean sea level)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblAltitude->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Altitude", Q_NULLPTR));
        mLblLatitude->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Latitude", Q_NULLPTR));
        mLblUtcTime->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Time of fix", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtDateTime->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "date/time of position fix (UTC)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTxtDateTime->setText(QString());
#ifndef QT_NO_TOOLTIP
        mTxtSpeed->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "speed over ground", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLblSpeed->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLblSpeed->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Speed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtDirection->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "track direction (degrees)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLblDirection->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLblDirection->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Direction", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtHdop->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Horizontal Dilution of Precision", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblHdop->setText(QApplication::translate("QgsGpsInformationWidgetBase", "HDOP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtVdop->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Vertical Dilution of Precision", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblVdop->setText(QApplication::translate("QgsGpsInformationWidgetBase", "VDOP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtPdop->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Position Dilution of Precision", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblPdop->setText(QApplication::translate("QgsGpsInformationWidgetBase", "PDOP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtFixMode->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "GPS receiver configuration 2D/3D mode: Automatic or Manual", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblFixMode->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtFixType->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "position fix dimensions: 2D, 3D or No fix", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblFixType->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Dimensions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtQuality->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Positioning quality indicator (NMEA GGA or comparable sentence)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblQuality->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Quality", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtStatus->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "position fix status: Valid or Invalid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblStatus->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTxtSatellitesUsed->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "number of satellites used in the position fix", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLblSatellitesUsed->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Satellites", Q_NULLPTR));
        mLblHacc->setText(QApplication::translate("QgsGpsInformationWidgetBase", "H accuracy", Q_NULLPTR));
        mLblVacc->setText(QApplication::translate("QgsGpsInformationWidgetBase", "V accuracy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLogFileGroupBox->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "save GPS data (NMEA sentences) to a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLogFileGroupBox->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Log File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnLogFile->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "browse for log file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnLogFile->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Filtering", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Distance threshold (meters)", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Acquisition interval (seconds)", Q_NULLPTR));
        mDeviceGroupBox->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Connection", Q_NULLPTR));
        mRadInternal->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Internal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnRefreshDevices->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Refresh serial device list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRefreshDevices->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
        mRadAutodetect->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Autodetect", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Host", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Device", Q_NULLPTR));
        mGpsdPort->setInputMask(QApplication::translate("QgsGpsInformationWidgetBase", "00000", Q_NULLPTR));
        mRadGpsd->setText(QApplication::translate("QgsGpsInformationWidgetBase", "gpsd", Q_NULLPTR));
        mRadUserPath->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Serial device", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Digitizing", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Track", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Line width", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSpinTrackWidth->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Track width in pixels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSpinTrackWidth->setSuffix(QApplication::translate("QgsGpsInformationWidgetBase", " px", Q_NULLPTR));
        mCbxAutoAddVertices->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Automatically add points", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Line color", Q_NULLPTR));
        mBtnTrackColor->setStyleSheet(QString());
        mBtnTrackColor->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        mCbxAutoCommit->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "save layer after every feature added", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCbxAutoCommit->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Automatically save added feature", Q_NULLPTR));
        mGboxTimestamp->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Timestamp Properties", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Specify the field where the GPS timestamp will be saved, only string or datetime fields are supported", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Destination", Q_NULLPTR));
        mLblTimestampFormat->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Format", Q_NULLPTR));
        mLblTimeZone->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Timezone", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCbxLeapSeconds->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Apply leap seconds correction by adding the seconds to GPS timestamp", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCbxLeapSeconds->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Leap seconds", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTravelBearingCheckBox->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "If checked, the bearing reported by the GPS device will be ignored and the bearing will instead be calculated by the angle between the previous two GPS locations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTravelBearingCheckBox->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Calculate bearing from travel direction", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Map Centering and Rotation", Q_NULLPTR));
        mSpinMapExtentMultiplier->setSuffix(QApplication::translate("QgsGpsInformationWidgetBase", "% of map extent", Q_NULLPTR));
        radRecenterMap->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Always", Q_NULLPTR));
        radRecenterWhenNeeded->setText(QApplication::translate("QgsGpsInformationWidgetBase", "When leaving", Q_NULLPTR));
        radNeverRecenter->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Never", Q_NULLPTR));
        mRotateMapCheckBox->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Rotate map to match GPS direction", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Frequency", Q_NULLPTR));
        mSpinMapRotateInterval->setProperty("specialValueText", QVariant(QApplication::translate("QgsGpsInformationWidgetBase", "On GPS signal", Q_NULLPTR)));
        mSpinMapRotateInterval->setProperty("suffix", QVariant(QApplication::translate("QgsGpsInformationWidgetBase", " s", Q_NULLPTR)));
        mGroupShowMarker->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Cursor", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Large", Q_NULLPTR));
        label->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Small", Q_NULLPTR));
        mShowBearingLineCheck->setTitle(QApplication::translate("QgsGpsInformationWidgetBase", "Show Bearing Line", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Line style", Q_NULLPTR));
        mBearingLineStyleButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnPosition->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Position", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnPosition->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnSignal->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Signal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnSignal->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnSatellites->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Satellite", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnSatellites->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnOptions->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnOptions->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnDebug->setToolTip(QApplication::translate("QgsGpsInformationWidgetBase", "Debug", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnDebug->setText(QApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", Q_NULLPTR));
        mRecenterButton->setText(QApplication::translate("QgsGpsInformationWidgetBase", "Recenter", Q_NULLPTR));
        mConnectButton->setText(QApplication::translate("QgsGpsInformationWidgetBase", "&Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGpsInformationWidgetBase: public Ui_QgsGpsInformationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSINFORMATIONWIDGETBASE_H
