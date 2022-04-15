/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPWIDGETBASE_H
#define UI_QGSLAYOUTMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgsmaplayercombobox.h>
#include "qgsblendmodecombobox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutitemcombobox.h"
#include "qgsprojectionselectionwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapWidgetBase
{
public:
    QAction *mActionUpdatePreview;
    QAction *mActionSetToCanvasExtent;
    QAction *mActionViewExtentInCanvas;
    QAction *mActionMoveContent;
    QAction *mActionViewScaleInCanvas;
    QAction *mActionSetToCanvasScale;
    QAction *mActionLabelSettings;
    QAction *mActionClipSettings;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabel;
    QToolBar *mDockToolbar;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *mScaleLabel;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mScaleLineEdit;
    QgsPropertyOverrideButton *mScaleDDBtn;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mMapRotationSpinBox;
    QgsPropertyOverrideButton *mMapRotationDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsProjectionSelectionWidget *mCrsSelector;
    QgsPropertyOverrideButton *mCRSDDBtn;
    QLabel *mMapRotationLabel;
    QLabel *mCrsLabel;
    QCheckBox *mDrawCanvasItemsCheckBox;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mFollowVisibilityPresetCheckBox;
    QComboBox *mFollowVisibilityPresetCombo;
    QgsPropertyOverrideButton *mStylePresetsDDBtn;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *mKeepLayerListCheckBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *mLayerListFromPresetButton;
    QgsPropertyOverrideButton *mLayersDDBtn;
    QCheckBox *mKeepLayerStylesCheckBox;
    QgsCollapsibleGroupBoxBasic *mExtentsCheckBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *mYMinLineEdit;
    QgsPropertyOverrideButton *mYMinDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mXMaxLineEdit;
    QgsPropertyOverrideButton *mXMaxDDBtn;
    QLabel *mYMinLabel;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mYMaxLineEdit;
    QgsPropertyOverrideButton *mYMaxDDBtn;
    QLabel *mXMaxLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mXMinLineEdit;
    QgsPropertyOverrideButton *mXMinDDBtn;
    QLabel *mXMinLabel;
    QLabel *mYMaxLabel;
    QgsCollapsibleGroupBoxBasic *mTemporalCheckBox;
    QGridLayout *gridLayout_5;
    QLabel *mStartDateTimeLabel;
    QDateTimeEdit *mStartDateTime;
    QgsPropertyOverrideButton *mStartDateTimeDDBtn;
    QLabel *mEndDateTimeLabel;
    QDateTimeEdit *mEndDateTime;
    QgsPropertyOverrideButton *mEndDateTimeDDBtn;
    QgsCollapsibleGroupBoxBasic *mAtlasCheckBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mAtlasMarginRadio;
    QHBoxLayout *horizontalLayout_11;
    QgsSpinBox *mAtlasMarginSpinBox;
    QgsPropertyOverrideButton *mAtlasMarginDDBtn;
    QRadioButton *mAtlasPredefinedScaleRadio;
    QRadioButton *mAtlasFixedScaleRadio;
    QgsCollapsibleGroupBoxBasic *mGridGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *mAddGridPushButton;
    QPushButton *mRemoveGridPushButton;
    QPushButton *mGridUpButton;
    QPushButton *mGridDownButton;
    QListWidget *mGridListWidget;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *mGridPropertiesButton;
    QgsCollapsibleGroupBoxBasic *mOverviewsGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *mAddOverviewPushButton;
    QPushButton *mRemoveOverviewPushButton;
    QPushButton *mOverviewUpButton;
    QPushButton *mOverviewDownButton;
    QListWidget *mOverviewListWidget;
    QgsCollapsibleGroupBoxBasic *mOverviewCheckBox;
    QGridLayout *gridLayout_8;
    QComboBox *mOverviewPositionComboBox;
    QLabel *mOverviewPositionLabel;
    QgsSymbolButton *mOverviewFrameStyleButton;
    QgsBlendModeComboBox *mOverviewBlendModeComboBox;
    QCheckBox *mOverviewInvertCheckbox;
    QLabel *mOverviewBlendModeLabel;
    QLabel *mOverviewFrameStyleLabel;
    QLabel *mOverviewFrameMapLabel;
    QCheckBox *mOverviewCenterCheckbox;
    QgsLayoutItemComboBox *mOverviewFrameMapComboBox;
    QgsMapLayerComboBox *mOverviewStackingLayerComboBox;
    QLabel *label;

    void setupUi(QWidget *QgsLayoutMapWidgetBase)
    {
        if (QgsLayoutMapWidgetBase->objectName().isEmpty())
            QgsLayoutMapWidgetBase->setObjectName(QStringLiteral("QgsLayoutMapWidgetBase"));
        QgsLayoutMapWidgetBase->resize(564, 749);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapWidgetBase->setSizePolicy(sizePolicy);
        mActionUpdatePreview = new QAction(QgsLayoutMapWidgetBase);
        mActionUpdatePreview->setObjectName(QStringLiteral("mActionUpdatePreview"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUpdatePreview->setIcon(icon);
        mActionSetToCanvasExtent = new QAction(QgsLayoutMapWidgetBase);
        mActionSetToCanvasExtent->setObjectName(QStringLiteral("mActionSetToCanvasExtent"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionSetToCanvasExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetToCanvasExtent->setIcon(icon1);
        mActionViewExtentInCanvas = new QAction(QgsLayoutMapWidgetBase);
        mActionViewExtentInCanvas->setObjectName(QStringLiteral("mActionViewExtentInCanvas"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionViewExtentInCanvas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionViewExtentInCanvas->setIcon(icon2);
        mActionMoveContent = new QAction(QgsLayoutMapWidgetBase);
        mActionMoveContent->setObjectName(QStringLiteral("mActionMoveContent"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionMoveItemContent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveContent->setIcon(icon3);
        mActionViewScaleInCanvas = new QAction(QgsLayoutMapWidgetBase);
        mActionViewScaleInCanvas->setObjectName(QStringLiteral("mActionViewScaleInCanvas"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionViewScaleInCanvas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionViewScaleInCanvas->setIcon(icon4);
        mActionSetToCanvasScale = new QAction(QgsLayoutMapWidgetBase);
        mActionSetToCanvasScale->setObjectName(QStringLiteral("mActionSetToCanvasScale"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionSetToCanvasScale.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetToCanvasScale->setIcon(icon5);
        mActionLabelSettings = new QAction(QgsLayoutMapWidgetBase);
        mActionLabelSettings->setObjectName(QStringLiteral("mActionLabelSettings"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/labelingSingle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLabelSettings->setIcon(icon6);
        mActionClipSettings = new QAction(QgsLayoutMapWidgetBase);
        mActionClipSettings->setObjectName(QStringLiteral("mActionClipSettings"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/algorithms/mAlgorithmClip.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClipSettings->setIcon(icon7);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutMapWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mLabel = new QLabel(QgsLayoutMapWidgetBase);
        mLabel->setObjectName(QStringLiteral("mLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabel->sizePolicy().hasHeightForWidth());
        mLabel->setSizePolicy(sizePolicy1);
        mLabel->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(mLabel);

        mDockToolbar = new QToolBar(QgsLayoutMapWidgetBase);
        mDockToolbar->setObjectName(QStringLiteral("mDockToolbar"));
        mDockToolbar->setIconSize(QSize(16, 16));
        mDockToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mDockToolbar);

        scrollArea = new QgsScrollArea(QgsLayoutMapWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 548, 1284));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mScaleLabel = new QLabel(groupBox);
        mScaleLabel->setObjectName(QStringLiteral("mScaleLabel"));

        gridLayout_4->addWidget(mScaleLabel, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mScaleLineEdit = new QLineEdit(groupBox);
        mScaleLineEdit->setObjectName(QStringLiteral("mScaleLineEdit"));

        horizontalLayout_6->addWidget(mScaleLineEdit);

        mScaleDDBtn = new QgsPropertyOverrideButton(groupBox);
        mScaleDDBtn->setObjectName(QStringLiteral("mScaleDDBtn"));

        horizontalLayout_6->addWidget(mScaleDDBtn);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mMapRotationSpinBox = new QgsDoubleSpinBox(groupBox);
        mMapRotationSpinBox->setObjectName(QStringLiteral("mMapRotationSpinBox"));
        mMapRotationSpinBox->setWrapping(true);
        mMapRotationSpinBox->setMinimum(-360);
        mMapRotationSpinBox->setMaximum(360);

        horizontalLayout_7->addWidget(mMapRotationSpinBox);

        mMapRotationDDBtn = new QgsPropertyOverrideButton(groupBox);
        mMapRotationDDBtn->setObjectName(QStringLiteral("mMapRotationDDBtn"));

        horizontalLayout_7->addWidget(mMapRotationDDBtn);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mCrsSelector);

        mCRSDDBtn = new QgsPropertyOverrideButton(groupBox);
        mCRSDDBtn->setObjectName(QStringLiteral("mCRSDDBtn"));

        horizontalLayout_2->addWidget(mCRSDDBtn);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 3, 1);

        mMapRotationLabel = new QLabel(groupBox);
        mMapRotationLabel->setObjectName(QStringLiteral("mMapRotationLabel"));

        gridLayout_4->addWidget(mMapRotationLabel, 1, 0, 1, 1);

        mCrsLabel = new QLabel(groupBox);
        mCrsLabel->setObjectName(QStringLiteral("mCrsLabel"));

        gridLayout_4->addWidget(mCrsLabel, 2, 0, 1, 1);

        mDrawCanvasItemsCheckBox = new QCheckBox(groupBox);
        mDrawCanvasItemsCheckBox->setObjectName(QStringLiteral("mDrawCanvasItemsCheckBox"));

        gridLayout_4->addWidget(mDrawCanvasItemsCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        mFollowVisibilityPresetCheckBox = new QCheckBox(groupBox_2);
        mFollowVisibilityPresetCheckBox->setObjectName(QStringLiteral("mFollowVisibilityPresetCheckBox"));

        horizontalLayout_12->addWidget(mFollowVisibilityPresetCheckBox);

        mFollowVisibilityPresetCombo = new QComboBox(groupBox_2);
        mFollowVisibilityPresetCombo->setObjectName(QStringLiteral("mFollowVisibilityPresetCombo"));

        horizontalLayout_12->addWidget(mFollowVisibilityPresetCombo);

        mStylePresetsDDBtn = new QgsPropertyOverrideButton(groupBox_2);
        mStylePresetsDDBtn->setObjectName(QStringLiteral("mStylePresetsDDBtn"));

        horizontalLayout_12->addWidget(mStylePresetsDDBtn);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        mKeepLayerListCheckBox = new QCheckBox(groupBox_2);
        mKeepLayerListCheckBox->setObjectName(QStringLiteral("mKeepLayerListCheckBox"));
        sizePolicy1.setHeightForWidth(mKeepLayerListCheckBox->sizePolicy().hasHeightForWidth());
        mKeepLayerListCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(mKeepLayerListCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        mLayerListFromPresetButton = new QToolButton(groupBox_2);
        mLayerListFromPresetButton->setObjectName(QStringLiteral("mLayerListFromPresetButton"));
        mLayerListFromPresetButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_10->addWidget(mLayerListFromPresetButton);

        mLayersDDBtn = new QgsPropertyOverrideButton(groupBox_2);
        mLayersDDBtn->setObjectName(QStringLiteral("mLayersDDBtn"));

        horizontalLayout_10->addWidget(mLayersDDBtn);


        verticalLayout_4->addLayout(horizontalLayout_10);

        mKeepLayerStylesCheckBox = new QCheckBox(groupBox_2);
        mKeepLayerStylesCheckBox->setObjectName(QStringLiteral("mKeepLayerStylesCheckBox"));

        verticalLayout_4->addWidget(mKeepLayerStylesCheckBox);


        mainLayout->addWidget(groupBox_2);

        mExtentsCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mExtentsCheckBox->setObjectName(QStringLiteral("mExtentsCheckBox"));
        mExtentsCheckBox->setFocusPolicy(Qt::StrongFocus);
        mExtentsCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mExtentsCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mExtentsCheckBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mYMinLineEdit = new QLineEdit(mExtentsCheckBox);
        mYMinLineEdit->setObjectName(QStringLiteral("mYMinLineEdit"));

        horizontalLayout_3->addWidget(mYMinLineEdit);

        mYMinDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mYMinDDBtn->setObjectName(QStringLiteral("mYMinDDBtn"));

        horizontalLayout_3->addWidget(mYMinDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mXMaxLineEdit = new QLineEdit(mExtentsCheckBox);
        mXMaxLineEdit->setObjectName(QStringLiteral("mXMaxLineEdit"));

        horizontalLayout_4->addWidget(mXMaxLineEdit);

        mXMaxDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mXMaxDDBtn->setObjectName(QStringLiteral("mXMaxDDBtn"));

        horizontalLayout_4->addWidget(mXMaxDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        mYMinLabel = new QLabel(mExtentsCheckBox);
        mYMinLabel->setObjectName(QStringLiteral("mYMinLabel"));
        mYMinLabel->setWordWrap(false);

        gridLayout->addWidget(mYMinLabel, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mYMaxLineEdit = new QLineEdit(mExtentsCheckBox);
        mYMaxLineEdit->setObjectName(QStringLiteral("mYMaxLineEdit"));

        horizontalLayout_5->addWidget(mYMaxLineEdit);

        mYMaxDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mYMaxDDBtn->setObjectName(QStringLiteral("mYMaxDDBtn"));

        horizontalLayout_5->addWidget(mYMaxDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        mXMaxLabel = new QLabel(mExtentsCheckBox);
        mXMaxLabel->setObjectName(QStringLiteral("mXMaxLabel"));
        mXMaxLabel->setWordWrap(false);

        gridLayout->addWidget(mXMaxLabel, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mXMinLineEdit = new QLineEdit(mExtentsCheckBox);
        mXMinLineEdit->setObjectName(QStringLiteral("mXMinLineEdit"));

        horizontalLayout->addWidget(mXMinLineEdit);

        mXMinDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mXMinDDBtn->setObjectName(QStringLiteral("mXMinDDBtn"));

        horizontalLayout->addWidget(mXMinDDBtn);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        mXMinLabel = new QLabel(mExtentsCheckBox);
        mXMinLabel->setObjectName(QStringLiteral("mXMinLabel"));
        mXMinLabel->setEnabled(true);
        mXMinLabel->setWordWrap(false);

        gridLayout->addWidget(mXMinLabel, 0, 0, 1, 1);

        mYMaxLabel = new QLabel(mExtentsCheckBox);
        mYMaxLabel->setObjectName(QStringLiteral("mYMaxLabel"));
        mYMaxLabel->setWordWrap(false);

        gridLayout->addWidget(mYMaxLabel, 3, 0, 1, 1);


        mainLayout->addWidget(mExtentsCheckBox);

        mTemporalCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mTemporalCheckBox->setObjectName(QStringLiteral("mTemporalCheckBox"));
        mTemporalCheckBox->setCheckable(true);
        mTemporalCheckBox->setChecked(false);
        mTemporalCheckBox->setProperty("collapsed", QVariant(true));
        mTemporalCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        gridLayout_5 = new QGridLayout(mTemporalCheckBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mStartDateTimeLabel = new QLabel(mTemporalCheckBox);
        mStartDateTimeLabel->setObjectName(QStringLiteral("mStartDateTimeLabel"));
        mStartDateTimeLabel->setEnabled(true);
        mStartDateTimeLabel->setWordWrap(false);

        gridLayout_5->addWidget(mStartDateTimeLabel, 0, 0, 1, 1);

        mStartDateTime = new QDateTimeEdit(mTemporalCheckBox);
        mStartDateTime->setObjectName(QStringLiteral("mStartDateTime"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStartDateTime->sizePolicy().hasHeightForWidth());
        mStartDateTime->setSizePolicy(sizePolicy2);
        mStartDateTime->setTimeSpec(Qt::UTC);

        gridLayout_5->addWidget(mStartDateTime, 0, 1, 1, 1);

        mStartDateTimeDDBtn = new QgsPropertyOverrideButton(mTemporalCheckBox);
        mStartDateTimeDDBtn->setObjectName(QStringLiteral("mStartDateTimeDDBtn"));

        gridLayout_5->addWidget(mStartDateTimeDDBtn, 0, 2, 1, 1);

        mEndDateTimeLabel = new QLabel(mTemporalCheckBox);
        mEndDateTimeLabel->setObjectName(QStringLiteral("mEndDateTimeLabel"));
        mEndDateTimeLabel->setEnabled(true);
        mEndDateTimeLabel->setWordWrap(false);

        gridLayout_5->addWidget(mEndDateTimeLabel, 1, 0, 1, 1);

        mEndDateTime = new QDateTimeEdit(mTemporalCheckBox);
        mEndDateTime->setObjectName(QStringLiteral("mEndDateTime"));
        sizePolicy2.setHeightForWidth(mEndDateTime->sizePolicy().hasHeightForWidth());
        mEndDateTime->setSizePolicy(sizePolicy2);
        mEndDateTime->setTimeSpec(Qt::UTC);

        gridLayout_5->addWidget(mEndDateTime, 1, 1, 1, 1);

        mEndDateTimeDDBtn = new QgsPropertyOverrideButton(mTemporalCheckBox);
        mEndDateTimeDDBtn->setObjectName(QStringLiteral("mEndDateTimeDDBtn"));

        gridLayout_5->addWidget(mEndDateTimeDDBtn, 1, 2, 1, 1);


        mainLayout->addWidget(mTemporalCheckBox);

        mAtlasCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mAtlasCheckBox->setObjectName(QStringLiteral("mAtlasCheckBox"));
        mAtlasCheckBox->setCheckable(true);
        mAtlasCheckBox->setChecked(false);
        mAtlasCheckBox->setProperty("collapsed", QVariant(true));
        mAtlasCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        gridLayout_2 = new QGridLayout(mAtlasCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mAtlasMarginRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasMarginRadio->setObjectName(QStringLiteral("mAtlasMarginRadio"));
        mAtlasMarginRadio->setEnabled(false);

        gridLayout_2->addWidget(mAtlasMarginRadio, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        mAtlasMarginSpinBox = new QgsSpinBox(mAtlasCheckBox);
        mAtlasMarginSpinBox->setObjectName(QStringLiteral("mAtlasMarginSpinBox"));
        mAtlasMarginSpinBox->setEnabled(false);
        sizePolicy2.setHeightForWidth(mAtlasMarginSpinBox->sizePolicy().hasHeightForWidth());
        mAtlasMarginSpinBox->setSizePolicy(sizePolicy2);
        mAtlasMarginSpinBox->setMaximum(9999);
        mAtlasMarginSpinBox->setValue(10);

        horizontalLayout_11->addWidget(mAtlasMarginSpinBox);

        mAtlasMarginDDBtn = new QgsPropertyOverrideButton(mAtlasCheckBox);
        mAtlasMarginDDBtn->setObjectName(QStringLiteral("mAtlasMarginDDBtn"));

        horizontalLayout_11->addWidget(mAtlasMarginDDBtn);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 1, 1, 1);

        mAtlasPredefinedScaleRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasPredefinedScaleRadio->setObjectName(QStringLiteral("mAtlasPredefinedScaleRadio"));

        gridLayout_2->addWidget(mAtlasPredefinedScaleRadio, 1, 0, 1, 1);

        mAtlasFixedScaleRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasFixedScaleRadio->setObjectName(QStringLiteral("mAtlasFixedScaleRadio"));
        mAtlasFixedScaleRadio->setEnabled(false);

        gridLayout_2->addWidget(mAtlasFixedScaleRadio, 2, 0, 1, 1);


        mainLayout->addWidget(mAtlasCheckBox);

        mGridGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridGroupBox->setObjectName(QStringLiteral("mGridGroupBox"));
        mGridGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridGroupBox->setProperty("collapsed", QVariant(true));
        mGridGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        verticalLayout_3 = new QVBoxLayout(mGridGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        mAddGridPushButton = new QPushButton(mGridGroupBox);
        mAddGridPushButton->setObjectName(QStringLiteral("mAddGridPushButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddGridPushButton->setIcon(icon8);

        horizontalLayout_8->addWidget(mAddGridPushButton);

        mRemoveGridPushButton = new QPushButton(mGridGroupBox);
        mRemoveGridPushButton->setObjectName(QStringLiteral("mRemoveGridPushButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveGridPushButton->setIcon(icon9);

        horizontalLayout_8->addWidget(mRemoveGridPushButton);

        mGridUpButton = new QPushButton(mGridGroupBox);
        mGridUpButton->setObjectName(QStringLiteral("mGridUpButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mGridUpButton->setIcon(icon10);

        horizontalLayout_8->addWidget(mGridUpButton);

        mGridDownButton = new QPushButton(mGridGroupBox);
        mGridDownButton->setObjectName(QStringLiteral("mGridDownButton"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mGridDownButton->setIcon(icon11);

        horizontalLayout_8->addWidget(mGridDownButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        mGridListWidget = new QListWidget(mGridGroupBox);
        mGridListWidget->setObjectName(QStringLiteral("mGridListWidget"));
        sizePolicy.setHeightForWidth(mGridListWidget->sizePolicy().hasHeightForWidth());
        mGridListWidget->setSizePolicy(sizePolicy);
        mGridListWidget->setMaximumSize(QSize(16777215, 90));

        verticalLayout_3->addWidget(mGridListWidget);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mGridPropertiesButton = new QPushButton(mGridGroupBox);
        mGridPropertiesButton->setObjectName(QStringLiteral("mGridPropertiesButton"));

        horizontalLayout_13->addWidget(mGridPropertiesButton);


        verticalLayout_3->addLayout(horizontalLayout_13);


        mainLayout->addWidget(mGridGroupBox);

        mOverviewsGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mOverviewsGroupBox->setObjectName(QStringLiteral("mOverviewsGroupBox"));
        mOverviewsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mOverviewsGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mOverviewsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mOverviewsGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mAddOverviewPushButton = new QPushButton(mOverviewsGroupBox);
        mAddOverviewPushButton->setObjectName(QStringLiteral("mAddOverviewPushButton"));
        mAddOverviewPushButton->setIcon(icon8);

        horizontalLayout_9->addWidget(mAddOverviewPushButton);

        mRemoveOverviewPushButton = new QPushButton(mOverviewsGroupBox);
        mRemoveOverviewPushButton->setObjectName(QStringLiteral("mRemoveOverviewPushButton"));
        mRemoveOverviewPushButton->setIcon(icon9);

        horizontalLayout_9->addWidget(mRemoveOverviewPushButton);

        mOverviewUpButton = new QPushButton(mOverviewsGroupBox);
        mOverviewUpButton->setObjectName(QStringLiteral("mOverviewUpButton"));
        mOverviewUpButton->setIcon(icon10);

        horizontalLayout_9->addWidget(mOverviewUpButton);

        mOverviewDownButton = new QPushButton(mOverviewsGroupBox);
        mOverviewDownButton->setObjectName(QStringLiteral("mOverviewDownButton"));
        mOverviewDownButton->setIcon(icon11);

        horizontalLayout_9->addWidget(mOverviewDownButton);


        verticalLayout->addLayout(horizontalLayout_9);

        mOverviewListWidget = new QListWidget(mOverviewsGroupBox);
        mOverviewListWidget->setObjectName(QStringLiteral("mOverviewListWidget"));
        sizePolicy.setHeightForWidth(mOverviewListWidget->sizePolicy().hasHeightForWidth());
        mOverviewListWidget->setSizePolicy(sizePolicy);
        mOverviewListWidget->setMaximumSize(QSize(16777215, 90));

        verticalLayout->addWidget(mOverviewListWidget);

        mOverviewCheckBox = new QgsCollapsibleGroupBoxBasic(mOverviewsGroupBox);
        mOverviewCheckBox->setObjectName(QStringLiteral("mOverviewCheckBox"));
        mOverviewCheckBox->setCheckable(true);
        mOverviewCheckBox->setChecked(true);
        mOverviewCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composermapoverview")));
        mOverviewCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(mOverviewCheckBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        mOverviewPositionComboBox = new QComboBox(mOverviewCheckBox);
        mOverviewPositionComboBox->setObjectName(QStringLiteral("mOverviewPositionComboBox"));

        gridLayout_8->addWidget(mOverviewPositionComboBox, 5, 1, 1, 1);

        mOverviewPositionLabel = new QLabel(mOverviewCheckBox);
        mOverviewPositionLabel->setObjectName(QStringLiteral("mOverviewPositionLabel"));

        gridLayout_8->addWidget(mOverviewPositionLabel, 5, 0, 1, 1);

        mOverviewFrameStyleButton = new QgsSymbolButton(mOverviewCheckBox);
        mOverviewFrameStyleButton->setObjectName(QStringLiteral("mOverviewFrameStyleButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mOverviewFrameStyleButton->sizePolicy().hasHeightForWidth());
        mOverviewFrameStyleButton->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(mOverviewFrameStyleButton, 1, 1, 1, 1);

        mOverviewBlendModeComboBox = new QgsBlendModeComboBox(mOverviewCheckBox);
        mOverviewBlendModeComboBox->setObjectName(QStringLiteral("mOverviewBlendModeComboBox"));

        gridLayout_8->addWidget(mOverviewBlendModeComboBox, 2, 1, 1, 1);

        mOverviewInvertCheckbox = new QCheckBox(mOverviewCheckBox);
        mOverviewInvertCheckbox->setObjectName(QStringLiteral("mOverviewInvertCheckbox"));

        gridLayout_8->addWidget(mOverviewInvertCheckbox, 3, 0, 1, 2);

        mOverviewBlendModeLabel = new QLabel(mOverviewCheckBox);
        mOverviewBlendModeLabel->setObjectName(QStringLiteral("mOverviewBlendModeLabel"));

        gridLayout_8->addWidget(mOverviewBlendModeLabel, 2, 0, 1, 1);

        mOverviewFrameStyleLabel = new QLabel(mOverviewCheckBox);
        mOverviewFrameStyleLabel->setObjectName(QStringLiteral("mOverviewFrameStyleLabel"));

        gridLayout_8->addWidget(mOverviewFrameStyleLabel, 1, 0, 1, 1);

        mOverviewFrameMapLabel = new QLabel(mOverviewCheckBox);
        mOverviewFrameMapLabel->setObjectName(QStringLiteral("mOverviewFrameMapLabel"));

        gridLayout_8->addWidget(mOverviewFrameMapLabel, 0, 0, 1, 1);

        mOverviewCenterCheckbox = new QCheckBox(mOverviewCheckBox);
        mOverviewCenterCheckbox->setObjectName(QStringLiteral("mOverviewCenterCheckbox"));

        gridLayout_8->addWidget(mOverviewCenterCheckbox, 4, 0, 1, 2);

        mOverviewFrameMapComboBox = new QgsLayoutItemComboBox(mOverviewCheckBox);
        mOverviewFrameMapComboBox->setObjectName(QStringLiteral("mOverviewFrameMapComboBox"));

        gridLayout_8->addWidget(mOverviewFrameMapComboBox, 0, 1, 1, 1);

        mOverviewStackingLayerComboBox = new QgsMapLayerComboBox(mOverviewCheckBox);
        mOverviewStackingLayerComboBox->setObjectName(QStringLiteral("mOverviewStackingLayerComboBox"));
        sizePolicy2.setHeightForWidth(mOverviewStackingLayerComboBox->sizePolicy().hasHeightForWidth());
        mOverviewStackingLayerComboBox->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(mOverviewStackingLayerComboBox, 6, 1, 1, 1);

        label = new QLabel(mOverviewCheckBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_8->addWidget(label, 6, 0, 1, 1);


        verticalLayout->addWidget(mOverviewCheckBox);


        mainLayout->addWidget(mOverviewsGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mScaleLabel->setBuddy(mScaleLineEdit);
        mYMinLabel->setBuddy(mYMinLineEdit);
        mXMaxLabel->setBuddy(mXMaxLineEdit);
        mXMinLabel->setBuddy(mXMinLineEdit);
        mYMaxLabel->setBuddy(mYMaxLineEdit);
        mStartDateTimeLabel->setBuddy(mStartDateTime);
        mEndDateTimeLabel->setBuddy(mEndDateTime);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mScaleLineEdit);
        QWidget::setTabOrder(mScaleLineEdit, mScaleDDBtn);
        QWidget::setTabOrder(mScaleDDBtn, mMapRotationSpinBox);
        QWidget::setTabOrder(mMapRotationSpinBox, mMapRotationDDBtn);
        QWidget::setTabOrder(mMapRotationDDBtn, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mDrawCanvasItemsCheckBox);
        QWidget::setTabOrder(mDrawCanvasItemsCheckBox, mFollowVisibilityPresetCheckBox);
        QWidget::setTabOrder(mFollowVisibilityPresetCheckBox, mFollowVisibilityPresetCombo);
        QWidget::setTabOrder(mFollowVisibilityPresetCombo, mStylePresetsDDBtn);
        QWidget::setTabOrder(mStylePresetsDDBtn, mKeepLayerListCheckBox);
        QWidget::setTabOrder(mKeepLayerListCheckBox, mLayerListFromPresetButton);
        QWidget::setTabOrder(mLayerListFromPresetButton, mLayersDDBtn);
        QWidget::setTabOrder(mLayersDDBtn, mKeepLayerStylesCheckBox);
        QWidget::setTabOrder(mKeepLayerStylesCheckBox, mExtentsCheckBox);
        QWidget::setTabOrder(mExtentsCheckBox, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMinDDBtn);
        QWidget::setTabOrder(mXMinDDBtn, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mYMinDDBtn);
        QWidget::setTabOrder(mYMinDDBtn, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mXMaxDDBtn);
        QWidget::setTabOrder(mXMaxDDBtn, mYMaxLineEdit);
        QWidget::setTabOrder(mYMaxLineEdit, mYMaxDDBtn);
        QWidget::setTabOrder(mYMaxDDBtn, mAtlasCheckBox);
        QWidget::setTabOrder(mAtlasCheckBox, mAtlasMarginRadio);
        QWidget::setTabOrder(mAtlasMarginRadio, mAtlasMarginSpinBox);
        QWidget::setTabOrder(mAtlasMarginSpinBox, mAtlasMarginDDBtn);
        QWidget::setTabOrder(mAtlasMarginDDBtn, mAtlasPredefinedScaleRadio);
        QWidget::setTabOrder(mAtlasPredefinedScaleRadio, mAtlasFixedScaleRadio);
        QWidget::setTabOrder(mAtlasFixedScaleRadio, mGridGroupBox);
        QWidget::setTabOrder(mGridGroupBox, mAddGridPushButton);
        QWidget::setTabOrder(mAddGridPushButton, mRemoveGridPushButton);
        QWidget::setTabOrder(mRemoveGridPushButton, mGridUpButton);
        QWidget::setTabOrder(mGridUpButton, mGridDownButton);
        QWidget::setTabOrder(mGridDownButton, mGridListWidget);
        QWidget::setTabOrder(mGridListWidget, mGridPropertiesButton);
        QWidget::setTabOrder(mGridPropertiesButton, mGridPropertiesButton);
        QWidget::setTabOrder(mGridPropertiesButton, mOverviewsGroupBox);
        QWidget::setTabOrder(mOverviewsGroupBox, mAddOverviewPushButton);
        QWidget::setTabOrder(mAddOverviewPushButton, mRemoveOverviewPushButton);
        QWidget::setTabOrder(mRemoveOverviewPushButton, mOverviewUpButton);
        QWidget::setTabOrder(mOverviewUpButton, mOverviewDownButton);
        QWidget::setTabOrder(mOverviewDownButton, mOverviewListWidget);
        QWidget::setTabOrder(mOverviewListWidget, mOverviewCheckBox);
        QWidget::setTabOrder(mOverviewCheckBox, mOverviewFrameMapComboBox);
        QWidget::setTabOrder(mOverviewFrameMapComboBox, mOverviewFrameStyleButton);
        QWidget::setTabOrder(mOverviewFrameStyleButton, mOverviewBlendModeComboBox);
        QWidget::setTabOrder(mOverviewBlendModeComboBox, mOverviewInvertCheckbox);
        QWidget::setTabOrder(mOverviewInvertCheckbox, mOverviewCenterCheckbox);
        QWidget::setTabOrder(mOverviewCenterCheckbox, mOverviewPositionComboBox);
        QWidget::setTabOrder(mOverviewPositionComboBox, mOverviewStackingLayerComboBox);

        mDockToolbar->addAction(mActionUpdatePreview);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionSetToCanvasExtent);
        mDockToolbar->addAction(mActionViewExtentInCanvas);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionSetToCanvasScale);
        mDockToolbar->addAction(mActionViewScaleInCanvas);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionMoveContent);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionLabelSettings);
        mDockToolbar->addAction(mActionClipSettings);

        retranslateUi(QgsLayoutMapWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapWidgetBase)
    {
        QgsLayoutMapWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Map Options", Q_NULLPTR));
        mActionUpdatePreview->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Update Preview", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionUpdatePreview->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Update Map Preview", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSetToCanvasExtent->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Set to Map Canvas Extent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSetToCanvasExtent->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Set Map Extent to Match Main Canvas Extent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionViewExtentInCanvas->setText(QApplication::translate("QgsLayoutMapWidgetBase", "View Extent in Map Canvas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionViewExtentInCanvas->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "View Current Map Extent in Main Canvas", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionMoveContent->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Move Map Content", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionMoveContent->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Interactively Edit Map Extent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionViewScaleInCanvas->setText(QApplication::translate("QgsLayoutMapWidgetBase", "View Scale in Map Canvas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionViewScaleInCanvas->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Set Main Canvas to Match Current Map Scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSetToCanvasScale->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Set to Map Canvas Scale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSetToCanvasScale->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Set Map Scale to Match Main Canvas Scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionLabelSettings->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Label Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionLabelSettings->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Labeling Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionClipSettings->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Clipping Settings", Q_NULLPTR));
        mLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Map", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Main Properties", Q_NULLPTR));
        mScaleLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Scale", Q_NULLPTR));
        mScaleLineEdit->setInputMask(QString());
        mScaleDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mMapRotationSpinBox->setSuffix(QApplication::translate("QgsLayoutMapWidgetBase", " \302\260", Q_NULLPTR));
        mMapRotationDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mMapRotationLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Map rotation", Q_NULLPTR));
        mCrsLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "CRS", Q_NULLPTR));
        mDrawCanvasItemsCheckBox->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Draw map canvas items", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Layers", Q_NULLPTR));
        mFollowVisibilityPresetCheckBox->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Follow map theme", Q_NULLPTR));
        mStylePresetsDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mKeepLayerListCheckBox->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Lock layers", Q_NULLPTR));
        mLayerListFromPresetButton->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mLayersDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mKeepLayerStylesCheckBox->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Lock styles for layers", Q_NULLPTR));
        mExtentsCheckBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Extents", Q_NULLPTR));
        mYMinDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mXMaxDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mYMinLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Y min", Q_NULLPTR));
        mYMaxDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mXMaxLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "X max", Q_NULLPTR));
        mXMinDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mXMinLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "X min", Q_NULLPTR));
        mYMaxLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Y max", Q_NULLPTR));
        mTemporalCheckBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Temporal Range", Q_NULLPTR));
        mStartDateTimeLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Start", Q_NULLPTR));
        mStartDateTime->setDisplayFormat(QApplication::translate("QgsLayoutMapWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mStartDateTimeDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mEndDateTimeLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "End", Q_NULLPTR));
        mEndDateTime->setDisplayFormat(QApplication::translate("QgsLayoutMapWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mEndDateTimeDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
        mAtlasCheckBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Controlled by Atlas", Q_NULLPTR));
        mAtlasMarginRadio->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Margin around feature", Q_NULLPTR));
        mAtlasMarginSpinBox->setSuffix(QApplication::translate("QgsLayoutMapWidgetBase", "%", Q_NULLPTR));
        mAtlasMarginDDBtn->setText(QApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAtlasPredefinedScaleRadio->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Use one of the predefined scales of the project where the atlas feature best fits.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAtlasPredefinedScaleRadio->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Predefined scale (best fit)", Q_NULLPTR));
        mAtlasFixedScaleRadio->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Fixed scale", Q_NULLPTR));
        mGridGroupBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Grids", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddGridPushButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Add a new grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddGridPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveGridPushButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Remove selected grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveGridPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mGridUpButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Move selected grid up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mGridUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mGridDownButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Move selected grid down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mGridDownButton->setText(QString());
        mGridPropertiesButton->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Modify Grid\342\200\246", Q_NULLPTR));
        mOverviewsGroupBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Overviews", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddOverviewPushButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Add a new overview", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddOverviewPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveOverviewPushButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Remove selected overview", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveOverviewPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mOverviewUpButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Move selected overview up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOverviewUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mOverviewDownButton->setToolTip(QApplication::translate("QgsLayoutMapWidgetBase", "Move selected overview down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOverviewDownButton->setText(QString());
        mOverviewCheckBox->setTitle(QApplication::translate("QgsLayoutMapWidgetBase", "Draw overview", Q_NULLPTR));
        mOverviewPositionLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Position", Q_NULLPTR));
        mOverviewFrameStyleButton->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Change\342\200\246", Q_NULLPTR));
        mOverviewInvertCheckbox->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Invert overview", Q_NULLPTR));
        mOverviewBlendModeLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Blending mode", Q_NULLPTR));
        mOverviewFrameStyleLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Frame style", Q_NULLPTR));
        mOverviewFrameMapLabel->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Map frame", Q_NULLPTR));
        mOverviewCenterCheckbox->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Center on overview", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutMapWidgetBase", "Stacking layer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapWidgetBase: public Ui_QgsLayoutMapWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPWIDGETBASE_H
