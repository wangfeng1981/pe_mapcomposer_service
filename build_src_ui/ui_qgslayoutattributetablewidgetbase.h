/********************************************************************************
** Form generated from reading UI file 'qgslayoutattributetablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTATTRIBUTETABLEWIDGETBASE_H
#define UI_QGSLAYOUTATTRIBUTETABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgsmaplayercombobox.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayoutitemcombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutAttributeTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QComboBox *mSourceComboBox;
    QLabel *mRelationLabel;
    QComboBox *mRelationsComboBox;
    QPushButton *mRefreshPushButton;
    QPushButton *mAttributesPushButton;
    QLabel *mLayerLabel;
    QHBoxLayout *horizontalLayout_6;
    QgsMapLayerComboBox *mLayerComboBox;
    QgsPropertyOverrideButton *mLayerSourceDDBtn;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *mMaxNumFeaturesLabel;
    QgsSpinBox *mMaximumRowsSpinBox;
    QCheckBox *mUniqueOnlyCheckBox;
    QCheckBox *mShowOnlyVisibleFeaturesCheckBox;
    QLabel *mComposerMapLabel;
    QgsLayoutItemComboBox *mComposerMapComboBox;
    QCheckBox *mIntersectAtlasCheckBox;
    QCheckBox *mFeatureFilterCheckBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mFeatureFilterEdit;
    QToolButton *mFeatureFilterButton;
    QgsCollapsibleGroupBoxBasic *groupBox_6;
    QGridLayout *gridLayout_6;
    QLineEdit *mEmptyMessageLineEdit;
    QComboBox *mEmptyModeComboBox;
    QComboBox *mHeaderModeComboBox;
    QLabel *label_11;
    QPushButton *mAdvancedCustomizationButton;
    QLabel *label_10;
    QLabel *label_9;
    QCheckBox *mDrawEmptyCheckBox;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QLineEdit *mWrapStringLineEdit;
    QgsDoubleSpinBox *mMarginSpinBox;
    QComboBox *mWrapBehaviorComboBox;
    QLabel *mEmptyMessageLabel;
    QLabel *mMarginLabel;
    QCheckBox *mUseConditionalStylingCheckBox;
    QgsCollapsibleGroupBoxBasic *mShowGridGroupCheckBox;
    QGridLayout *gridLayout_7;
    QLabel *mGridStrokeWidthLabel;
    QgsDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButton *mGridColorButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mDrawHorizontalGrid;
    QCheckBox *mDrawVerticalGrid;
    QgsCollapsibleGroupBoxBasic *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QgsFontButton *mHeaderFontToolButton;
    QComboBox *mHeaderHAlignmentComboBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *lblContentsFont;
    QgsFontButton *mContentFontToolButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mResizeModeLabel;
    QComboBox *mResizeModeComboBox;
    QPushButton *mAddFramePushButton;
    QCheckBox *mEmptyFrameCheckBox;
    QCheckBox *mHideEmptyBgCheckBox;

    void setupUi(QWidget *QgsLayoutAttributeTableWidgetBase)
    {
        if (QgsLayoutAttributeTableWidgetBase->objectName().isEmpty())
            QgsLayoutAttributeTableWidgetBase->setObjectName(QStringLiteral("QgsLayoutAttributeTableWidgetBase"));
        QgsLayoutAttributeTableWidgetBase->resize(410, 815);
        verticalLayout = new QVBoxLayout(QgsLayoutAttributeTableWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutAttributeTableWidgetBase);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutAttributeTableWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -629, 394, 1419));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        mSourceComboBox = new QComboBox(groupBox);
        mSourceComboBox->setObjectName(QStringLiteral("mSourceComboBox"));

        gridLayout_4->addWidget(mSourceComboBox, 0, 1, 1, 1);

        mRelationLabel = new QLabel(groupBox);
        mRelationLabel->setObjectName(QStringLiteral("mRelationLabel"));

        gridLayout_4->addWidget(mRelationLabel, 5, 0, 1, 1);

        mRelationsComboBox = new QComboBox(groupBox);
        mRelationsComboBox->setObjectName(QStringLiteral("mRelationsComboBox"));

        gridLayout_4->addWidget(mRelationsComboBox, 5, 1, 1, 1);

        mRefreshPushButton = new QPushButton(groupBox);
        mRefreshPushButton->setObjectName(QStringLiteral("mRefreshPushButton"));

        gridLayout_4->addWidget(mRefreshPushButton, 6, 0, 1, 2);

        mAttributesPushButton = new QPushButton(groupBox);
        mAttributesPushButton->setObjectName(QStringLiteral("mAttributesPushButton"));

        gridLayout_4->addWidget(mAttributesPushButton, 7, 0, 1, 2);

        mLayerLabel = new QLabel(groupBox);
        mLayerLabel->setObjectName(QStringLiteral("mLayerLabel"));
        mLayerLabel->setWordWrap(true);

        gridLayout_4->addWidget(mLayerLabel, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mLayerComboBox = new QgsMapLayerComboBox(groupBox);
        mLayerComboBox->setObjectName(QStringLiteral("mLayerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayerComboBox->sizePolicy().hasHeightForWidth());
        mLayerComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(mLayerComboBox);

        mLayerSourceDDBtn = new QgsPropertyOverrideButton(groupBox);
        mLayerSourceDDBtn->setObjectName(QStringLiteral("mLayerSourceDDBtn"));

        horizontalLayout_6->addWidget(mLayerSourceDDBtn);


        gridLayout_4->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(false));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mMaxNumFeaturesLabel = new QLabel(groupBox_5);
        mMaxNumFeaturesLabel->setObjectName(QStringLiteral("mMaxNumFeaturesLabel"));
        mMaxNumFeaturesLabel->setWordWrap(true);

        gridLayout_5->addWidget(mMaxNumFeaturesLabel, 0, 0, 1, 1);

        mMaximumRowsSpinBox = new QgsSpinBox(groupBox_5);
        mMaximumRowsSpinBox->setObjectName(QStringLiteral("mMaximumRowsSpinBox"));
        mMaximumRowsSpinBox->setMaximum(99999);
        mMaximumRowsSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_5->addWidget(mMaximumRowsSpinBox, 0, 1, 1, 1);

        mUniqueOnlyCheckBox = new QCheckBox(groupBox_5);
        mUniqueOnlyCheckBox->setObjectName(QStringLiteral("mUniqueOnlyCheckBox"));

        gridLayout_5->addWidget(mUniqueOnlyCheckBox, 1, 0, 1, 2);

        mShowOnlyVisibleFeaturesCheckBox = new QCheckBox(groupBox_5);
        mShowOnlyVisibleFeaturesCheckBox->setObjectName(QStringLiteral("mShowOnlyVisibleFeaturesCheckBox"));

        gridLayout_5->addWidget(mShowOnlyVisibleFeaturesCheckBox, 2, 0, 1, 2);

        mComposerMapLabel = new QLabel(groupBox_5);
        mComposerMapLabel->setObjectName(QStringLiteral("mComposerMapLabel"));
        mComposerMapLabel->setWordWrap(true);

        gridLayout_5->addWidget(mComposerMapLabel, 3, 0, 1, 1);

        mComposerMapComboBox = new QgsLayoutItemComboBox(groupBox_5);
        mComposerMapComboBox->setObjectName(QStringLiteral("mComposerMapComboBox"));

        gridLayout_5->addWidget(mComposerMapComboBox, 3, 1, 1, 1);

        mIntersectAtlasCheckBox = new QCheckBox(groupBox_5);
        mIntersectAtlasCheckBox->setObjectName(QStringLiteral("mIntersectAtlasCheckBox"));

        gridLayout_5->addWidget(mIntersectAtlasCheckBox, 4, 0, 1, 2);

        mFeatureFilterCheckBox = new QCheckBox(groupBox_5);
        mFeatureFilterCheckBox->setObjectName(QStringLiteral("mFeatureFilterCheckBox"));

        gridLayout_5->addWidget(mFeatureFilterCheckBox, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFeatureFilterEdit = new QLineEdit(groupBox_5);
        mFeatureFilterEdit->setObjectName(QStringLiteral("mFeatureFilterEdit"));

        horizontalLayout->addWidget(mFeatureFilterEdit);

        mFeatureFilterButton = new QToolButton(groupBox_5);
        mFeatureFilterButton->setObjectName(QStringLiteral("mFeatureFilterButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFeatureFilterButton->setIcon(icon);

        horizontalLayout->addWidget(mFeatureFilterButton);


        gridLayout_5->addLayout(horizontalLayout, 5, 1, 1, 1);

        mShowOnlyVisibleFeaturesCheckBox->raise();
        mComposerMapLabel->raise();
        mComposerMapComboBox->raise();
        mFeatureFilterCheckBox->raise();
        mMaximumRowsSpinBox->raise();
        mMaxNumFeaturesLabel->raise();
        mIntersectAtlasCheckBox->raise();
        mUniqueOnlyCheckBox->raise();

        mainLayout->addWidget(groupBox_5);

        groupBox_6 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFocusPolicy(Qt::StrongFocus);
        groupBox_6->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_6->setProperty("collapsed", QVariant(false));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mEmptyMessageLineEdit = new QLineEdit(groupBox_6);
        mEmptyMessageLineEdit->setObjectName(QStringLiteral("mEmptyMessageLineEdit"));

        gridLayout_6->addWidget(mEmptyMessageLineEdit, 6, 1, 1, 1);

        mEmptyModeComboBox = new QComboBox(groupBox_6);
        mEmptyModeComboBox->setObjectName(QStringLiteral("mEmptyModeComboBox"));

        gridLayout_6->addWidget(mEmptyModeComboBox, 5, 1, 1, 1);

        mHeaderModeComboBox = new QComboBox(groupBox_6);
        mHeaderModeComboBox->setObjectName(QStringLiteral("mHeaderModeComboBox"));

        gridLayout_6->addWidget(mHeaderModeComboBox, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setWordWrap(true);

        gridLayout_6->addWidget(label_11, 10, 0, 1, 1);

        mAdvancedCustomizationButton = new QPushButton(groupBox_6);
        mAdvancedCustomizationButton->setObjectName(QStringLiteral("mAdvancedCustomizationButton"));

        gridLayout_6->addWidget(mAdvancedCustomizationButton, 8, 1, 1, 1);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 7, 0, 1, 1);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 5, 0, 1, 1);

        mDrawEmptyCheckBox = new QCheckBox(groupBox_6);
        mDrawEmptyCheckBox->setObjectName(QStringLiteral("mDrawEmptyCheckBox"));

        gridLayout_6->addWidget(mDrawEmptyCheckBox, 1, 0, 1, 2);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 11, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButton(groupBox_6);
        mBackgroundColorButton->setObjectName(QStringLiteral("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_5, 7, 1, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);

        mWrapStringLineEdit = new QLineEdit(groupBox_6);
        mWrapStringLineEdit->setObjectName(QStringLiteral("mWrapStringLineEdit"));
        mWrapStringLineEdit->setFrame(true);

        gridLayout_6->addWidget(mWrapStringLineEdit, 10, 1, 1, 1);

        mMarginSpinBox = new QgsDoubleSpinBox(groupBox_6);
        mMarginSpinBox->setObjectName(QStringLiteral("mMarginSpinBox"));
        mMarginSpinBox->setSingleStep(0.1);
        mMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mMarginSpinBox, 2, 1, 1, 1);

        mWrapBehaviorComboBox = new QComboBox(groupBox_6);
        mWrapBehaviorComboBox->setObjectName(QStringLiteral("mWrapBehaviorComboBox"));

        gridLayout_6->addWidget(mWrapBehaviorComboBox, 11, 1, 1, 1);

        mEmptyMessageLabel = new QLabel(groupBox_6);
        mEmptyMessageLabel->setObjectName(QStringLiteral("mEmptyMessageLabel"));

        gridLayout_6->addWidget(mEmptyMessageLabel, 6, 0, 1, 1);

        mMarginLabel = new QLabel(groupBox_6);
        mMarginLabel->setObjectName(QStringLiteral("mMarginLabel"));
        mMarginLabel->setWordWrap(true);

        gridLayout_6->addWidget(mMarginLabel, 2, 0, 1, 1);

        mUseConditionalStylingCheckBox = new QCheckBox(groupBox_6);
        mUseConditionalStylingCheckBox->setObjectName(QStringLiteral("mUseConditionalStylingCheckBox"));

        gridLayout_6->addWidget(mUseConditionalStylingCheckBox, 9, 0, 1, 2);


        mainLayout->addWidget(groupBox_6);

        mShowGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mShowGridGroupCheckBox->setObjectName(QStringLiteral("mShowGridGroupCheckBox"));
        mShowGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mShowGridGroupCheckBox->setCheckable(true);
        mShowGridGroupCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mShowGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(mShowGridGroupCheckBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        mGridStrokeWidthLabel = new QLabel(mShowGridGroupCheckBox);
        mGridStrokeWidthLabel->setObjectName(QStringLiteral("mGridStrokeWidthLabel"));
        mGridStrokeWidthLabel->setWordWrap(true);

        gridLayout_7->addWidget(mGridStrokeWidthLabel, 0, 0, 1, 1);

        mGridStrokeWidthSpinBox = new QgsDoubleSpinBox(mShowGridGroupCheckBox);
        mGridStrokeWidthSpinBox->setObjectName(QStringLiteral("mGridStrokeWidthSpinBox"));
        mGridStrokeWidthSpinBox->setSingleStep(0.1);
        mGridStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mGridStrokeWidthSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(mShowGridGroupCheckBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mGridColorButton = new QgsColorButton(mShowGridGroupCheckBox);
        mGridColorButton->setObjectName(QStringLiteral("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mGridColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        mDrawHorizontalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawHorizontalGrid->setObjectName(QStringLiteral("mDrawHorizontalGrid"));

        gridLayout_7->addWidget(mDrawHorizontalGrid, 2, 0, 1, 2);

        mDrawVerticalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawVerticalGrid->setObjectName(QStringLiteral("mDrawVerticalGrid"));

        gridLayout_7->addWidget(mDrawVerticalGrid, 3, 0, 1, 2);


        mainLayout->addWidget(mShowGridGroupCheckBox);

        groupBox_3 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFocusPolicy(Qt::StrongFocus);
        groupBox_3->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_3->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mHeaderFontToolButton = new QgsFontButton(groupBox_2);
        mHeaderFontToolButton->setObjectName(QStringLiteral("mHeaderFontToolButton"));
        sizePolicy1.setHeightForWidth(mHeaderFontToolButton->sizePolicy().hasHeightForWidth());
        mHeaderFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderFontToolButton, 0, 1, 1, 1);

        mHeaderHAlignmentComboBox = new QComboBox(groupBox_2);
        mHeaderHAlignmentComboBox->setObjectName(QStringLiteral("mHeaderHAlignmentComboBox"));
        sizePolicy1.setHeightForWidth(mHeaderHAlignmentComboBox->sizePolicy().hasHeightForWidth());
        mHeaderHAlignmentComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderHAlignmentComboBox, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblContentsFont = new QLabel(groupBox_4);
        lblContentsFont->setObjectName(QStringLiteral("lblContentsFont"));

        gridLayout_2->addWidget(lblContentsFont, 0, 0, 1, 1);

        mContentFontToolButton = new QgsFontButton(groupBox_4);
        mContentFontToolButton->setObjectName(QStringLiteral("mContentFontToolButton"));
        sizePolicy1.setHeightForWidth(mContentFontToolButton->sizePolicy().hasHeightForWidth());
        mContentFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mContentFontToolButton, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        mainLayout->addWidget(groupBox_3);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QStringLiteral("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(frameGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QStringLiteral("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QStringLiteral("mResizeModeComboBox"));
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QStringLiteral("mAddFramePushButton"));

        gridLayout_3->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QStringLiteral("mEmptyFrameCheckBox"));

        gridLayout_3->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QStringLiteral("mHideEmptyBgCheckBox"));

        gridLayout_3->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mMaxNumFeaturesLabel->setBuddy(mMaximumRowsSpinBox);
        mComposerMapLabel->setBuddy(mComposerMapComboBox);
        mMarginLabel->setBuddy(mMarginSpinBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mSourceComboBox);
        QWidget::setTabOrder(mSourceComboBox, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mLayerSourceDDBtn);
        QWidget::setTabOrder(mLayerSourceDDBtn, mRelationsComboBox);
        QWidget::setTabOrder(mRelationsComboBox, mRefreshPushButton);
        QWidget::setTabOrder(mRefreshPushButton, mAttributesPushButton);
        QWidget::setTabOrder(mAttributesPushButton, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mMaximumRowsSpinBox);
        QWidget::setTabOrder(mMaximumRowsSpinBox, mUniqueOnlyCheckBox);
        QWidget::setTabOrder(mUniqueOnlyCheckBox, mShowOnlyVisibleFeaturesCheckBox);
        QWidget::setTabOrder(mShowOnlyVisibleFeaturesCheckBox, mComposerMapComboBox);
        QWidget::setTabOrder(mComposerMapComboBox, mIntersectAtlasCheckBox);
        QWidget::setTabOrder(mIntersectAtlasCheckBox, mFeatureFilterCheckBox);
        QWidget::setTabOrder(mFeatureFilterCheckBox, mFeatureFilterEdit);
        QWidget::setTabOrder(mFeatureFilterEdit, mFeatureFilterButton);
        QWidget::setTabOrder(mFeatureFilterButton, groupBox_6);
        QWidget::setTabOrder(groupBox_6, mDrawEmptyCheckBox);
        QWidget::setTabOrder(mDrawEmptyCheckBox, mMarginSpinBox);
        QWidget::setTabOrder(mMarginSpinBox, mHeaderModeComboBox);
        QWidget::setTabOrder(mHeaderModeComboBox, mEmptyModeComboBox);
        QWidget::setTabOrder(mEmptyModeComboBox, mEmptyMessageLineEdit);
        QWidget::setTabOrder(mEmptyMessageLineEdit, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mAdvancedCustomizationButton);
        QWidget::setTabOrder(mAdvancedCustomizationButton, mWrapStringLineEdit);
        QWidget::setTabOrder(mWrapStringLineEdit, mWrapBehaviorComboBox);
        QWidget::setTabOrder(mWrapBehaviorComboBox, mShowGridGroupCheckBox);
        QWidget::setTabOrder(mShowGridGroupCheckBox, mGridStrokeWidthSpinBox);
        QWidget::setTabOrder(mGridStrokeWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mDrawHorizontalGrid);
        QWidget::setTabOrder(mDrawHorizontalGrid, mDrawVerticalGrid);
        QWidget::setTabOrder(mDrawVerticalGrid, groupBox_3);
        QWidget::setTabOrder(groupBox_3, mHeaderFontToolButton);
        QWidget::setTabOrder(mHeaderFontToolButton, mHeaderHAlignmentComboBox);
        QWidget::setTabOrder(mHeaderHAlignmentComboBox, mContentFontToolButton);
        QWidget::setTabOrder(mContentFontToolButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);

        retranslateUi(QgsLayoutAttributeTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutAttributeTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutAttributeTableWidgetBase)
    {
        QgsLayoutAttributeTableWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Attribute Table", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Attribute table", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Main Properties", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Source", Q_NULLPTR));
        mRelationLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Relation", Q_NULLPTR));
        mRefreshPushButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Refresh Table Data", Q_NULLPTR));
        mAttributesPushButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Attributes\342\200\246", Q_NULLPTR));
        mLayerLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Layer", Q_NULLPTR));
        mLayerSourceDDBtn->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "\342\200\246", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Feature Filtering", Q_NULLPTR));
        mMaxNumFeaturesLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Maximum rows", Q_NULLPTR));
        mUniqueOnlyCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Remove duplicate rows from table", Q_NULLPTR));
        mShowOnlyVisibleFeaturesCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show only features visible within a map", Q_NULLPTR));
        mComposerMapLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Linked map", Q_NULLPTR));
        mIntersectAtlasCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show only features intersecting atlas feature", Q_NULLPTR));
        mFeatureFilterCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Filter with", Q_NULLPTR));
        mFeatureFilterButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "\342\200\246", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Appearance", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Wrap text on", Q_NULLPTR));
        mAdvancedCustomizationButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Advanced Customization\342\200\246", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Background color", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Empty tables", Q_NULLPTR));
        mDrawEmptyCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show empty rows", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Oversized text", Q_NULLPTR));
        mBackgroundColorButton->setText(QString());
        label_7->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Display header", Q_NULLPTR));
        mMarginSpinBox->setSuffix(QApplication::translate("QgsLayoutAttributeTableWidgetBase", " mm", Q_NULLPTR));
        mEmptyMessageLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Message to display", Q_NULLPTR));
        mMarginLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Cell margins", Q_NULLPTR));
        mUseConditionalStylingCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Apply layer conditional styling colors", Q_NULLPTR));
        mShowGridGroupCheckBox->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show Grid", Q_NULLPTR));
        mGridStrokeWidthLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Line width", Q_NULLPTR));
        mGridStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutAttributeTableWidgetBase", " mm", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Color", Q_NULLPTR));
        mGridColorButton->setText(QString());
        mDrawHorizontalGrid->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Draw horizontal lines", Q_NULLPTR));
        mDrawVerticalGrid->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Draw vertical lines", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Fonts and Text Styling", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Table Heading", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Alignment", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Font", Q_NULLPTR));
        mHeaderFontToolButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Heading Font", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Table Contents", Q_NULLPTR));
        lblContentsFont->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Font", Q_NULLPTR));
        mContentFontToolButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Contents Font", Q_NULLPTR));
        frameGroupBox->setTitle(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Frames", Q_NULLPTR));
        mResizeModeLabel->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Resize mode", Q_NULLPTR));
        mAddFramePushButton->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Add Frame", Q_NULLPTR));
        mEmptyFrameCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Don't export page if frame is empty", Q_NULLPTR));
        mHideEmptyBgCheckBox->setText(QApplication::translate("QgsLayoutAttributeTableWidgetBase", "Don't draw background if frame is empty", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutAttributeTableWidgetBase: public Ui_QgsLayoutAttributeTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTATTRIBUTETABLEWIDGETBASE_H
