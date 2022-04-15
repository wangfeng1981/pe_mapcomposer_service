/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderer3daveragingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERER3DAVERAGINGWIDGETBASE_H
#define UI_QGSMESHRENDERER3DAVERAGINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRenderer3dAveragingWidgetBase
{
public:
    QGridLayout *gridLayout_7;
    QStackedWidget *mAveragingMethodStackedWidget;
    QWidget *mAveragingMethodSingleLevelTopPage;
    QGridLayout *gridLayout_3;
    QLabel *mAveragingMethodLabel_2;
    QgsSpinBox *mSingleVerticalLayerIndexTopSpinBox;
    QGroupBox *mSingleTopGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *mSingleTopPngLabel;
    QLabel *mSingleTopDescLabel;
    QWidget *mAveragingMethodSingleLevelBottomPage;
    QGridLayout *gridLayout_17;
    QLabel *mAveragingMethodLabel_11;
    QgsSpinBox *mSingleVerticalLayerIndexBottomSpinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_16;
    QLabel *mSingleBottomPngLabel;
    QLabel *mSingleBottomDescLabel;
    QWidget *mAveragingMethodMultiTopPage;
    QGridLayout *gridLayout_20;
    QLabel *mAveragingMethodLabel_3;
    QgsSpinBox *mMultiTopVerticalLayerStartIndexSpinBox;
    QLabel *mAveragingMethodLabel_5;
    QgsSpinBox *mMultiTopVerticalLayerEndIndexSpinBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *mMultiTopPngLabel;
    QLabel *mMultiTopDescLabel;
    QWidget *mAveragingMethodMultiBottomPage;
    QGridLayout *gridLayout_21;
    QLabel *mAveragingMethodLabel_4;
    QgsSpinBox *mMultiBottomVerticalLayerStartIndexSpinBox;
    QLabel *mAveragingMethodLabel_6;
    QgsSpinBox *mMultiBottomVerticalLayerEndIndexSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QLabel *mMultiBottomPngLabel;
    QLabel *mMultiBottomDescLabel;
    QWidget *mAveragingMethodSigmaPage;
    QGridLayout *gridLayout_12;
    QLabel *mAveragingMethodLabel_7;
    QgsDoubleSpinBox *mSigmaStartFractionSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mSigmaEndFractionSpinBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *mSigmaPngLabel;
    QLabel *mSigmaDescLabel;
    QWidget *mAveragingMethodDepthPage;
    QGridLayout *gridLayout_13;
    QLabel *mAveragingMethodLabel_8;
    QgsDoubleSpinBox *mDepthStartSpinBox;
    QLabel *lab2;
    QgsDoubleSpinBox *mDepthEndSpinBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *mDepthPngLabel;
    QLabel *mDepthDescLabel;
    QWidget *mAveragingMethodHeightPage;
    QGridLayout *gridLayout_24;
    QLabel *mAveragingMethodLabel_9;
    QgsDoubleSpinBox *mHeightStartSpinBox;
    QLabel *labl;
    QgsDoubleSpinBox *mHeightEndSpinBox;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_14;
    QLabel *mHeightPngLabel;
    QLabel *mHeightDescLabel;
    QWidget *mAveragingMethodElevationPage;
    QGridLayout *gridLayout_15;
    QLabel *mAveragingMethodLabel_10;
    QgsDoubleSpinBox *mElevationStartSpinBox;
    QLabel *label_2;
    QgsDoubleSpinBox *mElevationEndSpinBox;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_11;
    QLabel *mElevationPngLabel;
    QLabel *mElevationDescLabel;
    QLabel *mAveragingMethodLabel;
    QComboBox *mAveragingMethodComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMeshRenderer3dAveragingWidgetBase)
    {
        if (QgsMeshRenderer3dAveragingWidgetBase->objectName().isEmpty())
            QgsMeshRenderer3dAveragingWidgetBase->setObjectName(QStringLiteral("QgsMeshRenderer3dAveragingWidgetBase"));
        QgsMeshRenderer3dAveragingWidgetBase->resize(454, 179);
        QgsMeshRenderer3dAveragingWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_7 = new QGridLayout(QgsMeshRenderer3dAveragingWidgetBase);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodStackedWidget = new QStackedWidget(QgsMeshRenderer3dAveragingWidgetBase);
        mAveragingMethodStackedWidget->setObjectName(QStringLiteral("mAveragingMethodStackedWidget"));
        mAveragingMethodSingleLevelTopPage = new QWidget();
        mAveragingMethodSingleLevelTopPage->setObjectName(QStringLiteral("mAveragingMethodSingleLevelTopPage"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAveragingMethodSingleLevelTopPage->sizePolicy().hasHeightForWidth());
        mAveragingMethodSingleLevelTopPage->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(mAveragingMethodSingleLevelTopPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_2 = new QLabel(mAveragingMethodSingleLevelTopPage);
        mAveragingMethodLabel_2->setObjectName(QStringLiteral("mAveragingMethodLabel_2"));

        gridLayout_3->addWidget(mAveragingMethodLabel_2, 0, 0, 1, 1);

        mSingleVerticalLayerIndexTopSpinBox = new QgsSpinBox(mAveragingMethodSingleLevelTopPage);
        mSingleVerticalLayerIndexTopSpinBox->setObjectName(QStringLiteral("mSingleVerticalLayerIndexTopSpinBox"));
        mSingleVerticalLayerIndexTopSpinBox->setMinimum(1);
        mSingleVerticalLayerIndexTopSpinBox->setMaximum(999);

        gridLayout_3->addWidget(mSingleVerticalLayerIndexTopSpinBox, 0, 1, 1, 1);

        mSingleTopGroup = new QGroupBox(mAveragingMethodSingleLevelTopPage);
        mSingleTopGroup->setObjectName(QStringLiteral("mSingleTopGroup"));
        verticalLayout_2 = new QVBoxLayout(mSingleTopGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mSingleTopPngLabel = new QLabel(mSingleTopGroup);
        mSingleTopPngLabel->setObjectName(QStringLiteral("mSingleTopPngLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSingleTopPngLabel->sizePolicy().hasHeightForWidth());
        mSingleTopPngLabel->setSizePolicy(sizePolicy1);
        mSingleTopPngLabel->setScaledContents(false);
        mSingleTopPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(mSingleTopPngLabel);

        mSingleTopDescLabel = new QLabel(mSingleTopGroup);
        mSingleTopDescLabel->setObjectName(QStringLiteral("mSingleTopDescLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSingleTopDescLabel->sizePolicy().hasHeightForWidth());
        mSingleTopDescLabel->setSizePolicy(sizePolicy2);
        mSingleTopDescLabel->setAlignment(Qt::AlignCenter);
        mSingleTopDescLabel->setWordWrap(true);

        verticalLayout_2->addWidget(mSingleTopDescLabel);


        gridLayout_3->addWidget(mSingleTopGroup, 1, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodSingleLevelTopPage);
        mAveragingMethodSingleLevelBottomPage = new QWidget();
        mAveragingMethodSingleLevelBottomPage->setObjectName(QStringLiteral("mAveragingMethodSingleLevelBottomPage"));
        gridLayout_17 = new QGridLayout(mAveragingMethodSingleLevelBottomPage);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_11 = new QLabel(mAveragingMethodSingleLevelBottomPage);
        mAveragingMethodLabel_11->setObjectName(QStringLiteral("mAveragingMethodLabel_11"));

        gridLayout_17->addWidget(mAveragingMethodLabel_11, 0, 0, 1, 1);

        mSingleVerticalLayerIndexBottomSpinBox = new QgsSpinBox(mAveragingMethodSingleLevelBottomPage);
        mSingleVerticalLayerIndexBottomSpinBox->setObjectName(QStringLiteral("mSingleVerticalLayerIndexBottomSpinBox"));
        mSingleVerticalLayerIndexBottomSpinBox->setMinimum(1);
        mSingleVerticalLayerIndexBottomSpinBox->setMaximum(999);

        gridLayout_17->addWidget(mSingleVerticalLayerIndexBottomSpinBox, 0, 1, 1, 1);

        groupBox = new QGroupBox(mAveragingMethodSingleLevelBottomPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_16 = new QVBoxLayout(groupBox);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        mSingleBottomPngLabel = new QLabel(groupBox);
        mSingleBottomPngLabel->setObjectName(QStringLiteral("mSingleBottomPngLabel"));
        mSingleBottomPngLabel->setScaledContents(false);
        mSingleBottomPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(mSingleBottomPngLabel);

        mSingleBottomDescLabel = new QLabel(groupBox);
        mSingleBottomDescLabel->setObjectName(QStringLiteral("mSingleBottomDescLabel"));
        mSingleBottomDescLabel->setAlignment(Qt::AlignCenter);
        mSingleBottomDescLabel->setWordWrap(true);

        verticalLayout_16->addWidget(mSingleBottomDescLabel);


        gridLayout_17->addWidget(groupBox, 1, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodSingleLevelBottomPage);
        mAveragingMethodMultiTopPage = new QWidget();
        mAveragingMethodMultiTopPage->setObjectName(QStringLiteral("mAveragingMethodMultiTopPage"));
        gridLayout_20 = new QGridLayout(mAveragingMethodMultiTopPage);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_3 = new QLabel(mAveragingMethodMultiTopPage);
        mAveragingMethodLabel_3->setObjectName(QStringLiteral("mAveragingMethodLabel_3"));

        gridLayout_20->addWidget(mAveragingMethodLabel_3, 0, 0, 1, 1);

        mMultiTopVerticalLayerStartIndexSpinBox = new QgsSpinBox(mAveragingMethodMultiTopPage);
        mMultiTopVerticalLayerStartIndexSpinBox->setObjectName(QStringLiteral("mMultiTopVerticalLayerStartIndexSpinBox"));
        mMultiTopVerticalLayerStartIndexSpinBox->setMinimum(1);
        mMultiTopVerticalLayerStartIndexSpinBox->setMaximum(999);

        gridLayout_20->addWidget(mMultiTopVerticalLayerStartIndexSpinBox, 0, 1, 1, 1);

        mAveragingMethodLabel_5 = new QLabel(mAveragingMethodMultiTopPage);
        mAveragingMethodLabel_5->setObjectName(QStringLiteral("mAveragingMethodLabel_5"));

        gridLayout_20->addWidget(mAveragingMethodLabel_5, 1, 0, 1, 1);

        mMultiTopVerticalLayerEndIndexSpinBox = new QgsSpinBox(mAveragingMethodMultiTopPage);
        mMultiTopVerticalLayerEndIndexSpinBox->setObjectName(QStringLiteral("mMultiTopVerticalLayerEndIndexSpinBox"));
        mMultiTopVerticalLayerEndIndexSpinBox->setMinimum(1);
        mMultiTopVerticalLayerEndIndexSpinBox->setMaximum(999);

        gridLayout_20->addWidget(mMultiTopVerticalLayerEndIndexSpinBox, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(mAveragingMethodMultiTopPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mMultiTopPngLabel = new QLabel(groupBox_2);
        mMultiTopPngLabel->setObjectName(QStringLiteral("mMultiTopPngLabel"));
        mMultiTopPngLabel->setScaledContents(false);
        mMultiTopPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(mMultiTopPngLabel);

        mMultiTopDescLabel = new QLabel(groupBox_2);
        mMultiTopDescLabel->setObjectName(QStringLiteral("mMultiTopDescLabel"));
        mMultiTopDescLabel->setAlignment(Qt::AlignCenter);
        mMultiTopDescLabel->setWordWrap(true);

        verticalLayout_5->addWidget(mMultiTopDescLabel);


        gridLayout_20->addWidget(groupBox_2, 2, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodMultiTopPage);
        mAveragingMethodMultiBottomPage = new QWidget();
        mAveragingMethodMultiBottomPage->setObjectName(QStringLiteral("mAveragingMethodMultiBottomPage"));
        gridLayout_21 = new QGridLayout(mAveragingMethodMultiBottomPage);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_4 = new QLabel(mAveragingMethodMultiBottomPage);
        mAveragingMethodLabel_4->setObjectName(QStringLiteral("mAveragingMethodLabel_4"));

        gridLayout_21->addWidget(mAveragingMethodLabel_4, 0, 0, 1, 1);

        mMultiBottomVerticalLayerStartIndexSpinBox = new QgsSpinBox(mAveragingMethodMultiBottomPage);
        mMultiBottomVerticalLayerStartIndexSpinBox->setObjectName(QStringLiteral("mMultiBottomVerticalLayerStartIndexSpinBox"));
        mMultiBottomVerticalLayerStartIndexSpinBox->setMinimum(1);
        mMultiBottomVerticalLayerStartIndexSpinBox->setMaximum(999);

        gridLayout_21->addWidget(mMultiBottomVerticalLayerStartIndexSpinBox, 0, 1, 1, 1);

        mAveragingMethodLabel_6 = new QLabel(mAveragingMethodMultiBottomPage);
        mAveragingMethodLabel_6->setObjectName(QStringLiteral("mAveragingMethodLabel_6"));

        gridLayout_21->addWidget(mAveragingMethodLabel_6, 1, 0, 1, 1);

        mMultiBottomVerticalLayerEndIndexSpinBox = new QgsSpinBox(mAveragingMethodMultiBottomPage);
        mMultiBottomVerticalLayerEndIndexSpinBox->setObjectName(QStringLiteral("mMultiBottomVerticalLayerEndIndexSpinBox"));
        mMultiBottomVerticalLayerEndIndexSpinBox->setMinimum(1);
        mMultiBottomVerticalLayerEndIndexSpinBox->setMaximum(999);

        gridLayout_21->addWidget(mMultiBottomVerticalLayerEndIndexSpinBox, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(mAveragingMethodMultiBottomPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mMultiBottomPngLabel = new QLabel(groupBox_3);
        mMultiBottomPngLabel->setObjectName(QStringLiteral("mMultiBottomPngLabel"));
        mMultiBottomPngLabel->setScaledContents(false);
        mMultiBottomPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mMultiBottomPngLabel);

        mMultiBottomDescLabel = new QLabel(groupBox_3);
        mMultiBottomDescLabel->setObjectName(QStringLiteral("mMultiBottomDescLabel"));
        mMultiBottomDescLabel->setAlignment(Qt::AlignCenter);
        mMultiBottomDescLabel->setWordWrap(true);

        verticalLayout->addWidget(mMultiBottomDescLabel);


        gridLayout_21->addWidget(groupBox_3, 2, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodMultiBottomPage);
        mAveragingMethodSigmaPage = new QWidget();
        mAveragingMethodSigmaPage->setObjectName(QStringLiteral("mAveragingMethodSigmaPage"));
        gridLayout_12 = new QGridLayout(mAveragingMethodSigmaPage);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_7 = new QLabel(mAveragingMethodSigmaPage);
        mAveragingMethodLabel_7->setObjectName(QStringLiteral("mAveragingMethodLabel_7"));

        gridLayout_12->addWidget(mAveragingMethodLabel_7, 0, 0, 1, 1);

        mSigmaStartFractionSpinBox = new QgsDoubleSpinBox(mAveragingMethodSigmaPage);
        mSigmaStartFractionSpinBox->setObjectName(QStringLiteral("mSigmaStartFractionSpinBox"));
        mSigmaStartFractionSpinBox->setMaximum(1);
        mSigmaStartFractionSpinBox->setSingleStep(0.1);
        mSigmaStartFractionSpinBox->setValue(0);

        gridLayout_12->addWidget(mSigmaStartFractionSpinBox, 0, 1, 1, 1);

        label = new QLabel(mAveragingMethodSigmaPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_12->addWidget(label, 1, 0, 1, 1);

        mSigmaEndFractionSpinBox = new QgsDoubleSpinBox(mAveragingMethodSigmaPage);
        mSigmaEndFractionSpinBox->setObjectName(QStringLiteral("mSigmaEndFractionSpinBox"));
        mSigmaEndFractionSpinBox->setMaximum(1);
        mSigmaEndFractionSpinBox->setSingleStep(0.1);
        mSigmaEndFractionSpinBox->setValue(1);

        gridLayout_12->addWidget(mSigmaEndFractionSpinBox, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(mAveragingMethodSigmaPage);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        mSigmaPngLabel = new QLabel(groupBox_4);
        mSigmaPngLabel->setObjectName(QStringLiteral("mSigmaPngLabel"));
        mSigmaPngLabel->setScaledContents(false);
        mSigmaPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(mSigmaPngLabel);

        mSigmaDescLabel = new QLabel(groupBox_4);
        mSigmaDescLabel->setObjectName(QStringLiteral("mSigmaDescLabel"));
        mSigmaDescLabel->setAlignment(Qt::AlignCenter);
        mSigmaDescLabel->setWordWrap(true);

        verticalLayout_8->addWidget(mSigmaDescLabel);


        gridLayout_12->addWidget(groupBox_4, 2, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodSigmaPage);
        mAveragingMethodDepthPage = new QWidget();
        mAveragingMethodDepthPage->setObjectName(QStringLiteral("mAveragingMethodDepthPage"));
        gridLayout_13 = new QGridLayout(mAveragingMethodDepthPage);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_8 = new QLabel(mAveragingMethodDepthPage);
        mAveragingMethodLabel_8->setObjectName(QStringLiteral("mAveragingMethodLabel_8"));

        gridLayout_13->addWidget(mAveragingMethodLabel_8, 0, 0, 1, 1);

        mDepthStartSpinBox = new QgsDoubleSpinBox(mAveragingMethodDepthPage);
        mDepthStartSpinBox->setObjectName(QStringLiteral("mDepthStartSpinBox"));
        mDepthStartSpinBox->setMaximum(99999);

        gridLayout_13->addWidget(mDepthStartSpinBox, 0, 1, 1, 1);

        lab2 = new QLabel(mAveragingMethodDepthPage);
        lab2->setObjectName(QStringLiteral("lab2"));

        gridLayout_13->addWidget(lab2, 1, 0, 1, 1);

        mDepthEndSpinBox = new QgsDoubleSpinBox(mAveragingMethodDepthPage);
        mDepthEndSpinBox->setObjectName(QStringLiteral("mDepthEndSpinBox"));
        mDepthEndSpinBox->setMaximum(99999);
        mDepthEndSpinBox->setValue(100);

        gridLayout_13->addWidget(mDepthEndSpinBox, 1, 1, 1, 1);

        groupBox_5 = new QGroupBox(mAveragingMethodDepthPage);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_9 = new QVBoxLayout(groupBox_5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        mDepthPngLabel = new QLabel(groupBox_5);
        mDepthPngLabel->setObjectName(QStringLiteral("mDepthPngLabel"));
        mDepthPngLabel->setScaledContents(false);
        mDepthPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(mDepthPngLabel);

        mDepthDescLabel = new QLabel(groupBox_5);
        mDepthDescLabel->setObjectName(QStringLiteral("mDepthDescLabel"));
        mDepthDescLabel->setAlignment(Qt::AlignCenter);
        mDepthDescLabel->setWordWrap(true);

        verticalLayout_9->addWidget(mDepthDescLabel);


        gridLayout_13->addWidget(groupBox_5, 2, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodDepthPage);
        mAveragingMethodHeightPage = new QWidget();
        mAveragingMethodHeightPage->setObjectName(QStringLiteral("mAveragingMethodHeightPage"));
        gridLayout_24 = new QGridLayout(mAveragingMethodHeightPage);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_9 = new QLabel(mAveragingMethodHeightPage);
        mAveragingMethodLabel_9->setObjectName(QStringLiteral("mAveragingMethodLabel_9"));

        gridLayout_24->addWidget(mAveragingMethodLabel_9, 0, 0, 1, 1);

        mHeightStartSpinBox = new QgsDoubleSpinBox(mAveragingMethodHeightPage);
        mHeightStartSpinBox->setObjectName(QStringLiteral("mHeightStartSpinBox"));
        mHeightStartSpinBox->setMaximum(99999);

        gridLayout_24->addWidget(mHeightStartSpinBox, 0, 1, 1, 1);

        labl = new QLabel(mAveragingMethodHeightPage);
        labl->setObjectName(QStringLiteral("labl"));

        gridLayout_24->addWidget(labl, 1, 0, 1, 1);

        mHeightEndSpinBox = new QgsDoubleSpinBox(mAveragingMethodHeightPage);
        mHeightEndSpinBox->setObjectName(QStringLiteral("mHeightEndSpinBox"));
        mHeightEndSpinBox->setMaximum(99999);
        mHeightEndSpinBox->setValue(100);

        gridLayout_24->addWidget(mHeightEndSpinBox, 1, 1, 1, 1);

        groupBox_6 = new QGroupBox(mAveragingMethodHeightPage);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_14 = new QVBoxLayout(groupBox_6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        mHeightPngLabel = new QLabel(groupBox_6);
        mHeightPngLabel->setObjectName(QStringLiteral("mHeightPngLabel"));
        mHeightPngLabel->setScaledContents(false);
        mHeightPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(mHeightPngLabel);

        mHeightDescLabel = new QLabel(groupBox_6);
        mHeightDescLabel->setObjectName(QStringLiteral("mHeightDescLabel"));
        mHeightDescLabel->setAlignment(Qt::AlignCenter);
        mHeightDescLabel->setWordWrap(true);

        verticalLayout_14->addWidget(mHeightDescLabel);


        gridLayout_24->addWidget(groupBox_6, 2, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodHeightPage);
        mAveragingMethodElevationPage = new QWidget();
        mAveragingMethodElevationPage->setObjectName(QStringLiteral("mAveragingMethodElevationPage"));
        gridLayout_15 = new QGridLayout(mAveragingMethodElevationPage);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        mAveragingMethodLabel_10 = new QLabel(mAveragingMethodElevationPage);
        mAveragingMethodLabel_10->setObjectName(QStringLiteral("mAveragingMethodLabel_10"));

        gridLayout_15->addWidget(mAveragingMethodLabel_10, 0, 0, 1, 1);

        mElevationStartSpinBox = new QgsDoubleSpinBox(mAveragingMethodElevationPage);
        mElevationStartSpinBox->setObjectName(QStringLiteral("mElevationStartSpinBox"));
        mElevationStartSpinBox->setMinimum(-999999);
        mElevationStartSpinBox->setMaximum(0);
        mElevationStartSpinBox->setSingleStep(1);

        gridLayout_15->addWidget(mElevationStartSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(mAveragingMethodElevationPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_15->addWidget(label_2, 1, 0, 1, 1);

        mElevationEndSpinBox = new QgsDoubleSpinBox(mAveragingMethodElevationPage);
        mElevationEndSpinBox->setObjectName(QStringLiteral("mElevationEndSpinBox"));
        mElevationEndSpinBox->setMinimum(-999999);
        mElevationEndSpinBox->setMaximum(0);
        mElevationEndSpinBox->setValue(-100);

        gridLayout_15->addWidget(mElevationEndSpinBox, 1, 1, 1, 1);

        groupBox_7 = new QGroupBox(mAveragingMethodElevationPage);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_11 = new QVBoxLayout(groupBox_7);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        mElevationPngLabel = new QLabel(groupBox_7);
        mElevationPngLabel->setObjectName(QStringLiteral("mElevationPngLabel"));
        mElevationPngLabel->setScaledContents(false);
        mElevationPngLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(mElevationPngLabel);

        mElevationDescLabel = new QLabel(groupBox_7);
        mElevationDescLabel->setObjectName(QStringLiteral("mElevationDescLabel"));
        mElevationDescLabel->setAlignment(Qt::AlignCenter);
        mElevationDescLabel->setWordWrap(true);

        verticalLayout_11->addWidget(mElevationDescLabel);


        gridLayout_15->addWidget(groupBox_7, 2, 0, 1, 2);

        mAveragingMethodStackedWidget->addWidget(mAveragingMethodElevationPage);

        gridLayout_7->addWidget(mAveragingMethodStackedWidget, 1, 0, 1, 2);

        mAveragingMethodLabel = new QLabel(QgsMeshRenderer3dAveragingWidgetBase);
        mAveragingMethodLabel->setObjectName(QStringLiteral("mAveragingMethodLabel"));

        gridLayout_7->addWidget(mAveragingMethodLabel, 0, 0, 1, 1);

        mAveragingMethodComboBox = new QComboBox(QgsMeshRenderer3dAveragingWidgetBase);
        mAveragingMethodComboBox->setObjectName(QStringLiteral("mAveragingMethodComboBox"));
        mAveragingMethodComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(mAveragingMethodComboBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(QgsMeshRenderer3dAveragingWidgetBase);

        mAveragingMethodStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMeshRenderer3dAveragingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRenderer3dAveragingWidgetBase)
    {
        mAveragingMethodLabel_2->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Vertical layer index", Q_NULLPTR));
        mSingleTopGroup->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: Value of top vertical layer", Q_NULLPTR));
        mSingleTopPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "png", Q_NULLPTR));
        mSingleTopDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Display the value from a vertical layer from the top (surface). The level is truncated to the maximum number of vertical layers for particular face.", Q_NULLPTR));
        mAveragingMethodLabel_11->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Vertical layer index", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: Value of bottom vertical layer", Q_NULLPTR));
        mSingleBottomPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mSingleBottomDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Display the value from a vertical layer from the bottom (bed). The level is truncated to the maximum number of vertical layers for particular face.", Q_NULLPTR));
        mAveragingMethodLabel_3->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Start vertical layer index", Q_NULLPTR));
        mAveragingMethodLabel_5->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "End vertical layer index", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: first 2 vertical levels ", Q_NULLPTR));
        mMultiTopPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mMultiTopDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Averages values from multiple vertical layers from the top (surface). The level is truncated to the maximum number of vertical layers for particular face.", Q_NULLPTR));
        mAveragingMethodLabel_4->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Start vertical layer index", Q_NULLPTR));
        mAveragingMethodLabel_6->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "End vertical layer index", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: last 2 vertical levels", Q_NULLPTR));
        mMultiBottomPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mMultiBottomDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Averages values from multiple vertical layers from the bottom (bed). The level is truncated to the maximum number of vertical layers for particular face.", Q_NULLPTR));
        mAveragingMethodLabel_7->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Start fraction ", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "End fraction", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: Sigma range 0.25 - 0.75 ", Q_NULLPTR));
        mSigmaPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mSigmaDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Sigma averages over the values between 0 (bed level) and 1 (surface).", Q_NULLPTR));
        mAveragingMethodLabel_8->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Start depth", Q_NULLPTR));
        lab2->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "End depth", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: Depth 0.5 to 1.7", Q_NULLPTR));
        mDepthPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mDepthDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Depth averaging method averages the values based on range defined relative to surface. The range is defined in the same length units as defined by model (e.g. meters)", Q_NULLPTR));
        mAveragingMethodLabel_9->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Start height", Q_NULLPTR));
        labl->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "End height", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: Height 0-1.5m", Q_NULLPTR));
        mHeightPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mHeightDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Height averaging method averages the values based on range defined relative to bed elevation. The range is defined in the same length units as defined by model (e.g. meters)", Q_NULLPTR));
        mAveragingMethodLabel_10->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Start elevation", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "End elevation", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Example: Elevation -0.5 to -2.5", Q_NULLPTR));
        mElevationPngLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "..png...", Q_NULLPTR));
        mElevationDescLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", " Elevation averaging method averages the values based on range defined absolute value to the model's datum. The range is defined in the same length units as defined by model (e.g. meters). The elevation will be truncated at the surface and bed levels.", Q_NULLPTR));
        mAveragingMethodLabel->setText(QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Method", Q_NULLPTR));
        mAveragingMethodComboBox->clear();
        mAveragingMethodComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Single Vertical Level (from top)", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Single Vertical Level (from bottom)", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Multi Vertical Level (from top)", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Multi Vertical Level (from bottom)", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Sigma", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Depth (relative to surface)", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Height (relative to bed level)", Q_NULLPTR)
         << QApplication::translate("QgsMeshRenderer3dAveragingWidgetBase", "Elevation (absolute to model's datum)", Q_NULLPTR)
        );
        Q_UNUSED(QgsMeshRenderer3dAveragingWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRenderer3dAveragingWidgetBase: public Ui_QgsMeshRenderer3dAveragingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERER3DAVERAGINGWIDGETBASE_H
