/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapgridwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPGRIDWIDGETBASE_H
#define UI_QGSLAYOUTMAPGRIDWIDGETBASE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsprojectionselectionwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapGridWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mEnabledCheckBox;
    QgsPropertyOverrideButton *mEnabledDDBtn;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBoxBasic *mGridCheckBox;
    QGridLayout *gridLayout_6;
    QLabel *mCrossWidthLabel;
    QComboBox *mGridTypeComboBox;
    QLabel *mGridBlendLabel;
    QLabel *mMapGridCRSLabel;
    QgsDoubleSpinBox *mCrossWidthSpinBox;
    QgsProjectionSelectionWidget *mMapGridCrsSelector;
    QLabel *mLineStyleLabel;
    QLabel *mIntervalXLabel_2;
    QgsSymbolButton *mGridLineStyleButton;
    QLabel *mGridTypeLabel_2;
    QStackedWidget *mIntervalStackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QgsDoubleSpinBox *mIntervalXSpinBox;
    QgsPropertyOverrideButton *mIntervalYDDBtn;
    QgsDoubleSpinBox *mIntervalYSpinBox;
    QgsPropertyOverrideButton *mIntervalXDDBtn;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mMinWidthSpinBox;
    QgsDoubleSpinBox *mMaxWidthSpinBox;
    QLabel *label_4;
    QLabel *label_5;
    QgsBlendModeComboBox *mGridBlendComboBox;
    QLabel *mMarkerStyleLabel;
    QLabel *mOffsetXLabel_2;
    QgsSymbolButton *mGridMarkerStyleButton;
    QComboBox *mMapGridUnitComboBox;
    QgsPropertyOverrideButton *mCrossWidthDDBtn;
    QGridLayout *gridLayout_5;
    QgsPropertyOverrideButton *mOffsetYDDBtn;
    QgsPropertyOverrideButton *mOffsetXDDBtn;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QgsCollapsibleGroupBoxBasic *mGridFrameGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mFrameStyleComboBox;
    QLabel *mFrameStyleLabel_2;
    QgsDoubleSpinBox *mGridFrameMarginSpinBox;
    QgsDoubleSpinBox *mFrameWidthSpinBox;
    QgsPropertyOverrideButton *mFrameMarginDDBtn;
    QLabel *mFrameFillLabel;
    QLabel *mFrameWidthLabel;
    QgsPropertyOverrideButton *mFrameSizeDDBtn;
    QLabel *mFramePenLabel;
    QGridLayout *gridLayout_4;
    QCheckBox *mCheckGridRightSide;
    QCheckBox *mCheckGridLeftSide;
    QCheckBox *mCheckGridBottomSide;
    QCheckBox *mCheckGridTopSide;
    QgsDoubleSpinBox *mGridFramePenSizeSpinBox;
    QLabel *mFrameMarginLabel;
    QgsPropertyOverrideButton *mFrameLineThicknessDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *mFrameDivisionsLeftComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsLeftDDBtn;
    QLabel *mLeftDivisionsLabel;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *mFrameDivisionsRightComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsRightDDBtn;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *mFrameDivisionsTopComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsTopDDBtn;
    QLabel *mRightDivisionsLabel;
    QLabel *mTopDivisionsLabel;
    QLabel *mBottomDivisionsLabel;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *mFrameDivisionsBottomComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsBottomDDBtn;
    QgsColorButton *mGridFrameFill1ColorButton;
    QgsColorButton *mGridFrameFill2ColorButton;
    QgsColorButton *mGridFramePenColorButton;
    QGroupBox *mRotatedTicksGroupBox;
    QFormLayout *formLayout;
    QLabel *label_6;
    QComboBox *mRotatedTicksLengthModeComboBox;
    QLabel *label_7;
    QgsDoubleSpinBox *mRotatedTicksThresholdSpinBox;
    QLabel *label_annot_corner;
    QgsDoubleSpinBox *mRotatedTicksMarginToCornerSpinBox;
    QgsCollapsibleGroupBoxBasic *mDrawAnnotationGroupBox;
    QGridLayout *gridLayout;
    QLabel *mAnnotationFormatLabel;
    QComboBox *mAnnotationDirectionComboBoxLeft;
    QComboBox *mAnnotationPositionLeftComboBox;
    QComboBox *mAnnotationPositionRightComboBox;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *mAnnotationFormatComboBox;
    QToolButton *mAnnotationFormatButton;
    QComboBox *mAnnotationDirectionComboBoxRight;
    QComboBox *mAnnotationPositionTopComboBox;
    QComboBox *mAnnotationPositionBottomComboBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mAnnotationDisplayLeftComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayLeftDDBtn;
    QgsDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QgsPropertyOverrideButton *mLabelDistDDBtn;
    QgsFontButton *mAnnotationFontButton;
    QLabel *mAnnotationPositionLabelLeft;
    QComboBox *mAnnotationDirectionComboBoxBottom;
    QLabel *mDistanceToMapFrameLabel;
    QLabel *mCoordinatePrecisionLabel;
    QComboBox *mAnnotationDirectionComboBoxTop;
    QgsSpinBox *mCoordinatePrecisionSpinBox;
    QGroupBox *mRotatedAnnotationsGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QComboBox *mRotatedAnnotationsLengthModeComboBox;
    QLabel *label_9;
    QgsDoubleSpinBox *mRotatedAnnotationsThresholdSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mRotatedAnnotationsMarginToCornerSpinBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *mAnnotationDisplayRightComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayRightDDBtn;
    QLabel *mAnnotationPositionLabelRight;
    QLabel *mAnnotationPositionLabelTop;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mAnnotationDisplayTopComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayTopDDBtn;
    QLabel *mAnnotationPositionLabelBottom;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *mAnnotationDisplayBottomComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayBottomDDBtn;

    void setupUi(QWidget *QgsLayoutMapGridWidgetBase)
    {
        if (QgsLayoutMapGridWidgetBase->objectName().isEmpty())
            QgsLayoutMapGridWidgetBase->setObjectName(QStringLiteral("QgsLayoutMapGridWidgetBase"));
        QgsLayoutMapGridWidgetBase->resize(507, 1205);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapGridWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapGridWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutMapGridWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLayoutMapGridWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 492, 1225));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(0);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mEnabledCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mEnabledCheckBox->setObjectName(QStringLiteral("mEnabledCheckBox"));

        horizontalLayout_2->addWidget(mEnabledCheckBox);

        mEnabledDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents);
        mEnabledDDBtn->setObjectName(QStringLiteral("mEnabledDDBtn"));

        horizontalLayout_2->addWidget(mEnabledDDBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        mainLayout->addLayout(horizontalLayout_2);

        mGridCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridCheckBox->setObjectName(QStringLiteral("mGridCheckBox"));
        gridLayout_6 = new QGridLayout(mGridCheckBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mCrossWidthLabel = new QLabel(mGridCheckBox);
        mCrossWidthLabel->setObjectName(QStringLiteral("mCrossWidthLabel"));
        mCrossWidthLabel->setWordWrap(false);

        gridLayout_6->addWidget(mCrossWidthLabel, 7, 0, 1, 1);

        mGridTypeComboBox = new QComboBox(mGridCheckBox);
        mGridTypeComboBox->setObjectName(QStringLiteral("mGridTypeComboBox"));

        gridLayout_6->addWidget(mGridTypeComboBox, 2, 1, 1, 2);

        mGridBlendLabel = new QLabel(mGridCheckBox);
        mGridBlendLabel->setObjectName(QStringLiteral("mGridBlendLabel"));

        gridLayout_6->addWidget(mGridBlendLabel, 10, 0, 1, 1);

        mMapGridCRSLabel = new QLabel(mGridCheckBox);
        mMapGridCRSLabel->setObjectName(QStringLiteral("mMapGridCRSLabel"));

        gridLayout_6->addWidget(mMapGridCRSLabel, 3, 0, 1, 1);

        mCrossWidthSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mCrossWidthSpinBox->setObjectName(QStringLiteral("mCrossWidthSpinBox"));
        mCrossWidthSpinBox->setDecimals(2);
        mCrossWidthSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_6->addWidget(mCrossWidthSpinBox, 7, 1, 1, 1);

        mMapGridCrsSelector = new QgsProjectionSelectionWidget(mGridCheckBox);
        mMapGridCrsSelector->setObjectName(QStringLiteral("mMapGridCrsSelector"));
        mMapGridCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mMapGridCrsSelector, 3, 1, 1, 2);

        mLineStyleLabel = new QLabel(mGridCheckBox);
        mLineStyleLabel->setObjectName(QStringLiteral("mLineStyleLabel"));
        mLineStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mLineStyleLabel, 8, 0, 1, 1);

        mIntervalXLabel_2 = new QLabel(mGridCheckBox);
        mIntervalXLabel_2->setObjectName(QStringLiteral("mIntervalXLabel_2"));
        mIntervalXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mIntervalXLabel_2, 4, 0, 1, 1);

        mGridLineStyleButton = new QgsSymbolButton(mGridCheckBox);
        mGridLineStyleButton->setObjectName(QStringLiteral("mGridLineStyleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mGridLineStyleButton->sizePolicy().hasHeightForWidth());
        mGridLineStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mGridLineStyleButton, 8, 1, 1, 2);

        mGridTypeLabel_2 = new QLabel(mGridCheckBox);
        mGridTypeLabel_2->setObjectName(QStringLiteral("mGridTypeLabel_2"));
        mGridTypeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mGridTypeLabel_2, 2, 0, 1, 1);

        mIntervalStackedWidget = new QStackedWidget(mGridCheckBox);
        mIntervalStackedWidget->setObjectName(QStringLiteral("mIntervalStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(10, 0, 0, 0);
        mIntervalXSpinBox = new QgsDoubleSpinBox(page);
        mIntervalXSpinBox->setObjectName(QStringLiteral("mIntervalXSpinBox"));
        mIntervalXSpinBox->setDecimals(12);
        mIntervalXSpinBox->setMaximum(1e+7);
        mIntervalXSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_7->addWidget(mIntervalXSpinBox, 0, 1, 1, 1);

        mIntervalYDDBtn = new QgsPropertyOverrideButton(page);
        mIntervalYDDBtn->setObjectName(QStringLiteral("mIntervalYDDBtn"));

        gridLayout_7->addWidget(mIntervalYDDBtn, 1, 2, 1, 1);

        mIntervalYSpinBox = new QgsDoubleSpinBox(page);
        mIntervalYSpinBox->setObjectName(QStringLiteral("mIntervalYSpinBox"));
        mIntervalYSpinBox->setDecimals(12);
        mIntervalYSpinBox->setMaximum(1e+7);

        gridLayout_7->addWidget(mIntervalYSpinBox, 1, 1, 1, 1);

        mIntervalXDDBtn = new QgsPropertyOverrideButton(page);
        mIntervalXDDBtn->setObjectName(QStringLiteral("mIntervalXDDBtn"));

        gridLayout_7->addWidget(mIntervalXDDBtn, 0, 2, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_7->addWidget(label_3, 1, 0, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);
        mIntervalStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 0, 0, 0);
        mMinWidthSpinBox = new QgsDoubleSpinBox(page_2);
        mMinWidthSpinBox->setObjectName(QStringLiteral("mMinWidthSpinBox"));
        mMinWidthSpinBox->setEnabled(true);
        mMinWidthSpinBox->setMaximum(999.99);

        gridLayout_2->addWidget(mMinWidthSpinBox, 0, 1, 1, 1);

        mMaxWidthSpinBox = new QgsDoubleSpinBox(page_2);
        mMaxWidthSpinBox->setObjectName(QStringLiteral("mMaxWidthSpinBox"));
        mMaxWidthSpinBox->setEnabled(true);
        mMaxWidthSpinBox->setMaximum(999.99);

        gridLayout_2->addWidget(mMaxWidthSpinBox, 1, 1, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        mIntervalStackedWidget->addWidget(page_2);

        gridLayout_6->addWidget(mIntervalStackedWidget, 5, 0, 1, 3);

        mGridBlendComboBox = new QgsBlendModeComboBox(mGridCheckBox);
        mGridBlendComboBox->setObjectName(QStringLiteral("mGridBlendComboBox"));

        gridLayout_6->addWidget(mGridBlendComboBox, 10, 1, 1, 2);

        mMarkerStyleLabel = new QLabel(mGridCheckBox);
        mMarkerStyleLabel->setObjectName(QStringLiteral("mMarkerStyleLabel"));
        mMarkerStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mMarkerStyleLabel, 9, 0, 1, 1);

        mOffsetXLabel_2 = new QLabel(mGridCheckBox);
        mOffsetXLabel_2->setObjectName(QStringLiteral("mOffsetXLabel_2"));
        mOffsetXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mOffsetXLabel_2, 6, 0, 1, 1);

        mGridMarkerStyleButton = new QgsSymbolButton(mGridCheckBox);
        mGridMarkerStyleButton->setObjectName(QStringLiteral("mGridMarkerStyleButton"));
        sizePolicy2.setHeightForWidth(mGridMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mGridMarkerStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mGridMarkerStyleButton, 9, 1, 1, 2);

        mMapGridUnitComboBox = new QComboBox(mGridCheckBox);
        mMapGridUnitComboBox->setObjectName(QStringLiteral("mMapGridUnitComboBox"));

        gridLayout_6->addWidget(mMapGridUnitComboBox, 4, 1, 1, 2);

        mCrossWidthDDBtn = new QgsPropertyOverrideButton(mGridCheckBox);
        mCrossWidthDDBtn->setObjectName(QStringLiteral("mCrossWidthDDBtn"));

        gridLayout_6->addWidget(mCrossWidthDDBtn, 7, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mOffsetYDDBtn = new QgsPropertyOverrideButton(mGridCheckBox);
        mOffsetYDDBtn->setObjectName(QStringLiteral("mOffsetYDDBtn"));

        gridLayout_5->addWidget(mOffsetYDDBtn, 2, 1, 1, 1);

        mOffsetXDDBtn = new QgsPropertyOverrideButton(mGridCheckBox);
        mOffsetXDDBtn->setObjectName(QStringLiteral("mOffsetXDDBtn"));

        gridLayout_5->addWidget(mOffsetXDDBtn, 1, 1, 1, 1);

        mOffsetYSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetYSpinBox->setObjectName(QStringLiteral("mOffsetYSpinBox"));
        mOffsetYSpinBox->setDecimals(12);
        mOffsetYSpinBox->setMaximum(1e+7);

        gridLayout_5->addWidget(mOffsetYSpinBox, 2, 0, 1, 1);

        mOffsetXSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetXSpinBox->setObjectName(QStringLiteral("mOffsetXSpinBox"));
        mOffsetXSpinBox->setDecimals(12);
        mOffsetXSpinBox->setMaximum(1e+7);

        gridLayout_5->addWidget(mOffsetXSpinBox, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 6, 1, 1, 2);


        mainLayout->addWidget(mGridCheckBox);

        mGridFrameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridFrameGroupBox->setObjectName(QStringLiteral("mGridFrameGroupBox"));
        mGridFrameGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridFrameGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composermapgrid")));
        gridLayout_3 = new QGridLayout(mGridFrameGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mFrameStyleComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameStyleComboBox->setObjectName(QStringLiteral("mFrameStyleComboBox"));

        gridLayout_3->addWidget(mFrameStyleComboBox, 1, 1, 1, 4);

        mFrameStyleLabel_2 = new QLabel(mGridFrameGroupBox);
        mFrameStyleLabel_2->setObjectName(QStringLiteral("mFrameStyleLabel_2"));
        mFrameStyleLabel_2->setWordWrap(false);

        gridLayout_3->addWidget(mFrameStyleLabel_2, 1, 0, 1, 1);

        mGridFrameMarginSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFrameMarginSpinBox->setObjectName(QStringLiteral("mGridFrameMarginSpinBox"));
        mGridFrameMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFrameMarginSpinBox, 5, 1, 1, 3);

        mFrameWidthSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mFrameWidthSpinBox->setObjectName(QStringLiteral("mFrameWidthSpinBox"));
        mFrameWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mFrameWidthSpinBox, 3, 1, 1, 3);

        mFrameMarginDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameMarginDDBtn->setObjectName(QStringLiteral("mFrameMarginDDBtn"));

        gridLayout_3->addWidget(mFrameMarginDDBtn, 5, 4, 1, 1);

        mFrameFillLabel = new QLabel(mGridFrameGroupBox);
        mFrameFillLabel->setObjectName(QStringLiteral("mFrameFillLabel"));

        gridLayout_3->addWidget(mFrameFillLabel, 8, 0, 1, 1);

        mFrameWidthLabel = new QLabel(mGridFrameGroupBox);
        mFrameWidthLabel->setObjectName(QStringLiteral("mFrameWidthLabel"));
        mFrameWidthLabel->setWordWrap(false);

        gridLayout_3->addWidget(mFrameWidthLabel, 3, 0, 1, 1);

        mFrameSizeDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameSizeDDBtn->setObjectName(QStringLiteral("mFrameSizeDDBtn"));

        gridLayout_3->addWidget(mFrameSizeDDBtn, 3, 4, 1, 1);

        mFramePenLabel = new QLabel(mGridFrameGroupBox);
        mFramePenLabel->setObjectName(QStringLiteral("mFramePenLabel"));

        gridLayout_3->addWidget(mFramePenLabel, 7, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mCheckGridRightSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridRightSide->setObjectName(QStringLiteral("mCheckGridRightSide"));

        gridLayout_4->addWidget(mCheckGridRightSide, 0, 1, 1, 1);

        mCheckGridLeftSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridLeftSide->setObjectName(QStringLiteral("mCheckGridLeftSide"));

        gridLayout_4->addWidget(mCheckGridLeftSide, 0, 0, 1, 1);

        mCheckGridBottomSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridBottomSide->setObjectName(QStringLiteral("mCheckGridBottomSide"));

        gridLayout_4->addWidget(mCheckGridBottomSide, 1, 1, 1, 1);

        mCheckGridTopSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridTopSide->setObjectName(QStringLiteral("mCheckGridTopSide"));

        gridLayout_4->addWidget(mCheckGridTopSide, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 13, 0, 1, 5);

        mGridFramePenSizeSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFramePenSizeSpinBox->setObjectName(QStringLiteral("mGridFramePenSizeSpinBox"));
        mGridFramePenSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFramePenSizeSpinBox, 7, 1, 1, 1);

        mFrameMarginLabel = new QLabel(mGridFrameGroupBox);
        mFrameMarginLabel->setObjectName(QStringLiteral("mFrameMarginLabel"));

        gridLayout_3->addWidget(mFrameMarginLabel, 5, 0, 1, 1);

        mFrameLineThicknessDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameLineThicknessDDBtn->setObjectName(QStringLiteral("mFrameLineThicknessDDBtn"));

        gridLayout_3->addWidget(mFrameLineThicknessDDBtn, 7, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mFrameDivisionsLeftComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsLeftComboBox->setObjectName(QStringLiteral("mFrameDivisionsLeftComboBox"));

        horizontalLayout_6->addWidget(mFrameDivisionsLeftComboBox);

        mFrameDivisionsLeftDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsLeftDDBtn->setObjectName(QStringLiteral("mFrameDivisionsLeftDDBtn"));

        horizontalLayout_6->addWidget(mFrameDivisionsLeftDDBtn);


        gridLayout_3->addLayout(horizontalLayout_6, 9, 1, 1, 4);

        mLeftDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mLeftDivisionsLabel->setObjectName(QStringLiteral("mLeftDivisionsLabel"));

        gridLayout_3->addWidget(mLeftDivisionsLabel, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mFrameDivisionsRightComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsRightComboBox->setObjectName(QStringLiteral("mFrameDivisionsRightComboBox"));

        horizontalLayout_7->addWidget(mFrameDivisionsRightComboBox);

        mFrameDivisionsRightDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsRightDDBtn->setObjectName(QStringLiteral("mFrameDivisionsRightDDBtn"));

        horizontalLayout_7->addWidget(mFrameDivisionsRightDDBtn);


        gridLayout_3->addLayout(horizontalLayout_7, 10, 1, 1, 4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mFrameDivisionsTopComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsTopComboBox->setObjectName(QStringLiteral("mFrameDivisionsTopComboBox"));

        horizontalLayout_9->addWidget(mFrameDivisionsTopComboBox);

        mFrameDivisionsTopDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsTopDDBtn->setObjectName(QStringLiteral("mFrameDivisionsTopDDBtn"));

        horizontalLayout_9->addWidget(mFrameDivisionsTopDDBtn);


        gridLayout_3->addLayout(horizontalLayout_9, 11, 1, 1, 4);

        mRightDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mRightDivisionsLabel->setObjectName(QStringLiteral("mRightDivisionsLabel"));

        gridLayout_3->addWidget(mRightDivisionsLabel, 10, 0, 1, 1);

        mTopDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mTopDivisionsLabel->setObjectName(QStringLiteral("mTopDivisionsLabel"));

        gridLayout_3->addWidget(mTopDivisionsLabel, 11, 0, 1, 1);

        mBottomDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mBottomDivisionsLabel->setObjectName(QStringLiteral("mBottomDivisionsLabel"));

        gridLayout_3->addWidget(mBottomDivisionsLabel, 12, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        mFrameDivisionsBottomComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsBottomComboBox->setObjectName(QStringLiteral("mFrameDivisionsBottomComboBox"));

        horizontalLayout_10->addWidget(mFrameDivisionsBottomComboBox);

        mFrameDivisionsBottomDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsBottomDDBtn->setObjectName(QStringLiteral("mFrameDivisionsBottomDDBtn"));

        horizontalLayout_10->addWidget(mFrameDivisionsBottomDDBtn);


        gridLayout_3->addLayout(horizontalLayout_10, 12, 1, 1, 4);

        mGridFrameFill1ColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFrameFill1ColorButton->setObjectName(QStringLiteral("mGridFrameFill1ColorButton"));
        sizePolicy2.setHeightForWidth(mGridFrameFill1ColorButton->sizePolicy().hasHeightForWidth());
        mGridFrameFill1ColorButton->setSizePolicy(sizePolicy2);
        mGridFrameFill1ColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridFrameFill1ColorButton, 8, 1, 1, 2);

        mGridFrameFill2ColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFrameFill2ColorButton->setObjectName(QStringLiteral("mGridFrameFill2ColorButton"));
        sizePolicy2.setHeightForWidth(mGridFrameFill2ColorButton->sizePolicy().hasHeightForWidth());
        mGridFrameFill2ColorButton->setSizePolicy(sizePolicy2);
        mGridFrameFill2ColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridFrameFill2ColorButton, 8, 3, 1, 2);

        mGridFramePenColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFramePenColorButton->setObjectName(QStringLiteral("mGridFramePenColorButton"));
        sizePolicy2.setHeightForWidth(mGridFramePenColorButton->sizePolicy().hasHeightForWidth());
        mGridFramePenColorButton->setSizePolicy(sizePolicy2);
        mGridFramePenColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridFramePenColorButton, 7, 3, 1, 2);

        mRotatedTicksGroupBox = new QGroupBox(mGridFrameGroupBox);
        mRotatedTicksGroupBox->setObjectName(QStringLiteral("mRotatedTicksGroupBox"));
        mRotatedTicksGroupBox->setCheckable(true);
        formLayout = new QFormLayout(mRotatedTicksGroupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_6 = new QLabel(mRotatedTicksGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        mRotatedTicksLengthModeComboBox = new QComboBox(mRotatedTicksGroupBox);
        mRotatedTicksLengthModeComboBox->setObjectName(QStringLiteral("mRotatedTicksLengthModeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mRotatedTicksLengthModeComboBox);

        label_7 = new QLabel(mRotatedTicksGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        mRotatedTicksThresholdSpinBox = new QgsDoubleSpinBox(mRotatedTicksGroupBox);
        mRotatedTicksThresholdSpinBox->setObjectName(QStringLiteral("mRotatedTicksThresholdSpinBox"));
        mRotatedTicksThresholdSpinBox->setDecimals(2);
        mRotatedTicksThresholdSpinBox->setMaximum(90);
        mRotatedTicksThresholdSpinBox->setValue(0);
        mRotatedTicksThresholdSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, mRotatedTicksThresholdSpinBox);

        label_annot_corner = new QLabel(mRotatedTicksGroupBox);
        label_annot_corner->setObjectName(QStringLiteral("label_annot_corner"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_annot_corner);

        mRotatedTicksMarginToCornerSpinBox = new QgsDoubleSpinBox(mRotatedTicksGroupBox);
        mRotatedTicksMarginToCornerSpinBox->setObjectName(QStringLiteral("mRotatedTicksMarginToCornerSpinBox"));
        mRotatedTicksMarginToCornerSpinBox->setDecimals(2);
        mRotatedTicksMarginToCornerSpinBox->setValue(0);
        mRotatedTicksMarginToCornerSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout->setWidget(2, QFormLayout::FieldRole, mRotatedTicksMarginToCornerSpinBox);


        gridLayout_3->addWidget(mRotatedTicksGroupBox, 14, 0, 1, 5);


        mainLayout->addWidget(mGridFrameGroupBox);

        mDrawAnnotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mDrawAnnotationGroupBox->setObjectName(QStringLiteral("mDrawAnnotationGroupBox"));
        mDrawAnnotationGroupBox->setEnabled(true);
        mDrawAnnotationGroupBox->setCheckable(true);
        mDrawAnnotationGroupBox->setChecked(true);
        mDrawAnnotationGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composermapgrid")));
        mDrawAnnotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mDrawAnnotationGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mAnnotationFormatLabel = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationFormatLabel->setObjectName(QStringLiteral("mAnnotationFormatLabel"));

        gridLayout->addWidget(mAnnotationFormatLabel, 0, 0, 1, 1);

        mAnnotationDirectionComboBoxLeft = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxLeft->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxLeft"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxLeft, 7, 1, 1, 2);

        mAnnotationPositionLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionLeftComboBox->setObjectName(QStringLiteral("mAnnotationPositionLeftComboBox"));

        gridLayout->addWidget(mAnnotationPositionLeftComboBox, 6, 1, 1, 2);

        mAnnotationPositionRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionRightComboBox->setObjectName(QStringLiteral("mAnnotationPositionRightComboBox"));

        gridLayout->addWidget(mAnnotationPositionRightComboBox, 11, 1, 1, 2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mAnnotationFormatComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationFormatComboBox->setObjectName(QStringLiteral("mAnnotationFormatComboBox"));

        horizontalLayout_13->addWidget(mAnnotationFormatComboBox);

        mAnnotationFormatButton = new QToolButton(mDrawAnnotationGroupBox);
        mAnnotationFormatButton->setObjectName(QStringLiteral("mAnnotationFormatButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAnnotationFormatButton->setIcon(icon);

        horizontalLayout_13->addWidget(mAnnotationFormatButton);


        gridLayout->addLayout(horizontalLayout_13, 0, 1, 1, 2);

        mAnnotationDirectionComboBoxRight = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxRight->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxRight"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxRight, 12, 1, 1, 2);

        mAnnotationPositionTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionTopComboBox->setObjectName(QStringLiteral("mAnnotationPositionTopComboBox"));

        gridLayout->addWidget(mAnnotationPositionTopComboBox, 15, 1, 1, 2);

        mAnnotationPositionBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionBottomComboBox->setObjectName(QStringLiteral("mAnnotationPositionBottomComboBox"));

        gridLayout->addWidget(mAnnotationPositionBottomComboBox, 19, 1, 1, 2);

        label = new QLabel(mDrawAnnotationGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 21, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mAnnotationDisplayLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayLeftComboBox->setObjectName(QStringLiteral("mAnnotationDisplayLeftComboBox"));

        horizontalLayout_3->addWidget(mAnnotationDisplayLeftComboBox);

        mAnnotationDisplayLeftDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayLeftDDBtn->setObjectName(QStringLiteral("mAnnotationDisplayLeftDDBtn"));

        horizontalLayout_3->addWidget(mAnnotationDisplayLeftDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 2);

        mDistanceToMapFrameSpinBox = new QgsDoubleSpinBox(mDrawAnnotationGroupBox);
        mDistanceToMapFrameSpinBox->setObjectName(QStringLiteral("mDistanceToMapFrameSpinBox"));
        mDistanceToMapFrameSpinBox->setMinimum(-99);

        gridLayout->addWidget(mDistanceToMapFrameSpinBox, 22, 1, 1, 1);

        mLabelDistDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mLabelDistDDBtn->setObjectName(QStringLiteral("mLabelDistDDBtn"));

        gridLayout->addWidget(mLabelDistDDBtn, 22, 2, 1, 1);

        mAnnotationFontButton = new QgsFontButton(mDrawAnnotationGroupBox);
        mAnnotationFontButton->setObjectName(QStringLiteral("mAnnotationFontButton"));
        sizePolicy2.setHeightForWidth(mAnnotationFontButton->sizePolicy().hasHeightForWidth());
        mAnnotationFontButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mAnnotationFontButton, 21, 1, 1, 2);

        mAnnotationPositionLabelLeft = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelLeft->setObjectName(QStringLiteral("mAnnotationPositionLabelLeft"));
        mAnnotationPositionLabelLeft->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelLeft, 1, 0, 1, 1);

        mAnnotationDirectionComboBoxBottom = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxBottom->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxBottom"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxBottom, 20, 1, 1, 2);

        mDistanceToMapFrameLabel = new QLabel(mDrawAnnotationGroupBox);
        mDistanceToMapFrameLabel->setObjectName(QStringLiteral("mDistanceToMapFrameLabel"));
        mDistanceToMapFrameLabel->setWordWrap(true);

        gridLayout->addWidget(mDistanceToMapFrameLabel, 22, 0, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mDrawAnnotationGroupBox);
        mCoordinatePrecisionLabel->setObjectName(QStringLiteral("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout->addWidget(mCoordinatePrecisionLabel, 24, 0, 1, 1);

        mAnnotationDirectionComboBoxTop = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxTop->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxTop"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxTop, 16, 1, 1, 2);

        mCoordinatePrecisionSpinBox = new QgsSpinBox(mDrawAnnotationGroupBox);
        mCoordinatePrecisionSpinBox->setObjectName(QStringLiteral("mCoordinatePrecisionSpinBox"));
        mCoordinatePrecisionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mCoordinatePrecisionSpinBox, 24, 1, 1, 2);

        mRotatedAnnotationsGroupBox = new QGroupBox(mDrawAnnotationGroupBox);
        mRotatedAnnotationsGroupBox->setObjectName(QStringLiteral("mRotatedAnnotationsGroupBox"));
        mRotatedAnnotationsGroupBox->setCheckable(true);
        formLayout_2 = new QFormLayout(mRotatedAnnotationsGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_10 = new QLabel(mRotatedAnnotationsGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        mRotatedAnnotationsLengthModeComboBox = new QComboBox(mRotatedAnnotationsGroupBox);
        mRotatedAnnotationsLengthModeComboBox->setObjectName(QStringLiteral("mRotatedAnnotationsLengthModeComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mRotatedAnnotationsLengthModeComboBox);

        label_9 = new QLabel(mRotatedAnnotationsGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        mRotatedAnnotationsThresholdSpinBox = new QgsDoubleSpinBox(mRotatedAnnotationsGroupBox);
        mRotatedAnnotationsThresholdSpinBox->setObjectName(QStringLiteral("mRotatedAnnotationsThresholdSpinBox"));
        mRotatedAnnotationsThresholdSpinBox->setDecimals(2);
        mRotatedAnnotationsThresholdSpinBox->setMaximum(90);
        mRotatedAnnotationsThresholdSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mRotatedAnnotationsThresholdSpinBox);

        label_12 = new QLabel(mRotatedAnnotationsGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        mRotatedAnnotationsMarginToCornerSpinBox = new QgsDoubleSpinBox(mRotatedAnnotationsGroupBox);
        mRotatedAnnotationsMarginToCornerSpinBox->setObjectName(QStringLiteral("mRotatedAnnotationsMarginToCornerSpinBox"));
        mRotatedAnnotationsMarginToCornerSpinBox->setDecimals(2);
        mRotatedAnnotationsMarginToCornerSpinBox->setValue(0);
        mRotatedAnnotationsMarginToCornerSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mRotatedAnnotationsMarginToCornerSpinBox);


        gridLayout->addWidget(mRotatedAnnotationsGroupBox, 25, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mAnnotationDisplayRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayRightComboBox->setObjectName(QStringLiteral("mAnnotationDisplayRightComboBox"));

        horizontalLayout->addWidget(mAnnotationDisplayRightComboBox);

        mAnnotationDisplayRightDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayRightDDBtn->setObjectName(QStringLiteral("mAnnotationDisplayRightDDBtn"));

        horizontalLayout->addWidget(mAnnotationDisplayRightDDBtn);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 2);

        mAnnotationPositionLabelRight = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelRight->setObjectName(QStringLiteral("mAnnotationPositionLabelRight"));

        gridLayout->addWidget(mAnnotationPositionLabelRight, 8, 0, 1, 1);

        mAnnotationPositionLabelTop = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelTop->setObjectName(QStringLiteral("mAnnotationPositionLabelTop"));
        mAnnotationPositionLabelTop->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelTop, 13, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mAnnotationDisplayTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayTopComboBox->setObjectName(QStringLiteral("mAnnotationDisplayTopComboBox"));

        horizontalLayout_4->addWidget(mAnnotationDisplayTopComboBox);

        mAnnotationDisplayTopDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayTopDDBtn->setObjectName(QStringLiteral("mAnnotationDisplayTopDDBtn"));

        horizontalLayout_4->addWidget(mAnnotationDisplayTopDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 13, 1, 1, 2);

        mAnnotationPositionLabelBottom = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelBottom->setObjectName(QStringLiteral("mAnnotationPositionLabelBottom"));
        mAnnotationPositionLabelBottom->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelBottom, 17, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mAnnotationDisplayBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayBottomComboBox->setObjectName(QStringLiteral("mAnnotationDisplayBottomComboBox"));

        horizontalLayout_5->addWidget(mAnnotationDisplayBottomComboBox);

        mAnnotationDisplayBottomDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayBottomDDBtn->setObjectName(QStringLiteral("mAnnotationDisplayBottomDDBtn"));

        horizontalLayout_5->addWidget(mAnnotationDisplayBottomDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 17, 1, 1, 2);


        mainLayout->addWidget(mDrawAnnotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mEnabledCheckBox);
        QWidget::setTabOrder(mEnabledCheckBox, mEnabledDDBtn);
        QWidget::setTabOrder(mEnabledDDBtn, mGridTypeComboBox);
        QWidget::setTabOrder(mGridTypeComboBox, mMapGridCrsSelector);
        QWidget::setTabOrder(mMapGridCrsSelector, mMapGridUnitComboBox);
        QWidget::setTabOrder(mMapGridUnitComboBox, mMinWidthSpinBox);
        QWidget::setTabOrder(mMinWidthSpinBox, mMaxWidthSpinBox);
        QWidget::setTabOrder(mMaxWidthSpinBox, mIntervalXSpinBox);
        QWidget::setTabOrder(mIntervalXSpinBox, mIntervalXDDBtn);
        QWidget::setTabOrder(mIntervalXDDBtn, mIntervalYSpinBox);
        QWidget::setTabOrder(mIntervalYSpinBox, mIntervalYDDBtn);
        QWidget::setTabOrder(mIntervalYDDBtn, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetXDDBtn);
        QWidget::setTabOrder(mOffsetXDDBtn, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mOffsetYDDBtn);
        QWidget::setTabOrder(mOffsetYDDBtn, mCrossWidthSpinBox);
        QWidget::setTabOrder(mCrossWidthSpinBox, mCrossWidthDDBtn);
        QWidget::setTabOrder(mCrossWidthDDBtn, mGridLineStyleButton);
        QWidget::setTabOrder(mGridLineStyleButton, mGridMarkerStyleButton);
        QWidget::setTabOrder(mGridMarkerStyleButton, mGridBlendComboBox);
        QWidget::setTabOrder(mGridBlendComboBox, mGridFrameGroupBox);
        QWidget::setTabOrder(mGridFrameGroupBox, mFrameStyleComboBox);
        QWidget::setTabOrder(mFrameStyleComboBox, mFrameWidthSpinBox);
        QWidget::setTabOrder(mFrameWidthSpinBox, mFrameSizeDDBtn);
        QWidget::setTabOrder(mFrameSizeDDBtn, mGridFrameMarginSpinBox);
        QWidget::setTabOrder(mGridFrameMarginSpinBox, mFrameMarginDDBtn);
        QWidget::setTabOrder(mFrameMarginDDBtn, mGridFramePenSizeSpinBox);
        QWidget::setTabOrder(mGridFramePenSizeSpinBox, mFrameLineThicknessDDBtn);
        QWidget::setTabOrder(mFrameLineThicknessDDBtn, mGridFramePenColorButton);
        QWidget::setTabOrder(mGridFramePenColorButton, mGridFrameFill1ColorButton);
        QWidget::setTabOrder(mGridFrameFill1ColorButton, mGridFrameFill2ColorButton);
        QWidget::setTabOrder(mGridFrameFill2ColorButton, mCheckGridLeftSide);
        QWidget::setTabOrder(mCheckGridLeftSide, mCheckGridRightSide);
        QWidget::setTabOrder(mCheckGridRightSide, mCheckGridTopSide);
        QWidget::setTabOrder(mCheckGridTopSide, mCheckGridBottomSide);
        QWidget::setTabOrder(mCheckGridBottomSide, mRotatedTicksGroupBox);
        QWidget::setTabOrder(mRotatedTicksGroupBox, mRotatedTicksLengthModeComboBox);
        QWidget::setTabOrder(mRotatedTicksLengthModeComboBox, mRotatedTicksThresholdSpinBox);
        QWidget::setTabOrder(mRotatedTicksThresholdSpinBox, mRotatedTicksMarginToCornerSpinBox);
        QWidget::setTabOrder(mRotatedTicksMarginToCornerSpinBox, mDrawAnnotationGroupBox);
        QWidget::setTabOrder(mDrawAnnotationGroupBox, mAnnotationFormatComboBox);
        QWidget::setTabOrder(mAnnotationFormatComboBox, mAnnotationFormatButton);
        QWidget::setTabOrder(mAnnotationFormatButton, mAnnotationPositionLeftComboBox);
        QWidget::setTabOrder(mAnnotationPositionLeftComboBox, mAnnotationDirectionComboBoxLeft);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxLeft, mAnnotationPositionRightComboBox);
        QWidget::setTabOrder(mAnnotationPositionRightComboBox, mAnnotationDirectionComboBoxRight);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxRight, mAnnotationPositionTopComboBox);
        QWidget::setTabOrder(mAnnotationPositionTopComboBox, mAnnotationDirectionComboBoxTop);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxTop, mAnnotationPositionBottomComboBox);
        QWidget::setTabOrder(mAnnotationPositionBottomComboBox, mAnnotationDirectionComboBoxBottom);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxBottom, mAnnotationFontButton);
        QWidget::setTabOrder(mAnnotationFontButton, mDistanceToMapFrameSpinBox);
        QWidget::setTabOrder(mDistanceToMapFrameSpinBox, mLabelDistDDBtn);
        QWidget::setTabOrder(mLabelDistDDBtn, mCoordinatePrecisionSpinBox);
        QWidget::setTabOrder(mCoordinatePrecisionSpinBox, mRotatedAnnotationsGroupBox);
        QWidget::setTabOrder(mRotatedAnnotationsGroupBox, mRotatedAnnotationsLengthModeComboBox);
        QWidget::setTabOrder(mRotatedAnnotationsLengthModeComboBox, mRotatedAnnotationsThresholdSpinBox);
        QWidget::setTabOrder(mRotatedAnnotationsThresholdSpinBox, mRotatedAnnotationsMarginToCornerSpinBox);

        retranslateUi(QgsLayoutMapGridWidgetBase);

        mIntervalStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsLayoutMapGridWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapGridWidgetBase)
    {
        QgsLayoutMapGridWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Map Options", Q_NULLPTR));
        mEnabledCheckBox->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Enable grid", Q_NULLPTR));
        mEnabledDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mGridCheckBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Appearance", Q_NULLPTR));
        mCrossWidthLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Cross width", Q_NULLPTR));
        mGridBlendLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Blend mode", Q_NULLPTR));
        mMapGridCRSLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "CRS", Q_NULLPTR));
        mCrossWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mLineStyleLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Line style", Q_NULLPTR));
        mIntervalXLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Interval", Q_NULLPTR));
        mGridLineStyleButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        mGridTypeLabel_2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        mGridTypeLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Grid type", Q_NULLPTR));
        mIntervalXSpinBox->setPrefix(QString());
        mIntervalYDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mIntervalYSpinBox->setPrefix(QString());
        mIntervalXDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Y", Q_NULLPTR));
        mMinWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mMaxWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Minimum", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Maximum", Q_NULLPTR));
        mMarkerStyleLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Marker style", Q_NULLPTR));
        mOffsetXLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Offset", Q_NULLPTR));
        mGridMarkerStyleButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", Q_NULLPTR));
        mCrossWidthDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mOffsetYDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mOffsetXDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsLayoutMapGridWidgetBase", "Y ", Q_NULLPTR));
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsLayoutMapGridWidgetBase", "X ", Q_NULLPTR));
        mGridFrameGroupBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame", Q_NULLPTR));
        mFrameStyleLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame style", Q_NULLPTR));
        mGridFrameMarginSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mFrameWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mFrameMarginDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mFrameFillLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame fill colors", Q_NULLPTR));
        mFrameWidthLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame size", Q_NULLPTR));
        mFrameSizeDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mFramePenLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame line thickness", Q_NULLPTR));
        mCheckGridRightSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Right side", Q_NULLPTR));
        mCheckGridLeftSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Left side", Q_NULLPTR));
        mCheckGridBottomSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom side", Q_NULLPTR));
        mCheckGridTopSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Top side", Q_NULLPTR));
        mGridFramePenSizeSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mFrameMarginLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame margin", Q_NULLPTR));
        mFrameLineThicknessDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mFrameDivisionsLeftDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mLeftDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Left divisions", Q_NULLPTR));
        mFrameDivisionsRightDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mFrameDivisionsTopDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mRightDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Right divisions", Q_NULLPTR));
        mTopDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Top divisions", Q_NULLPTR));
        mBottomDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom divisions", Q_NULLPTR));
        mFrameDivisionsBottomDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mGridFrameFill1ColorButton->setText(QString());
        mGridFrameFill2ColorButton->setText(QString());
        mGridFramePenColorButton->setText(QString());
        mRotatedTicksGroupBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Follow grid rotation", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Ticks alignment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRotatedTicksLengthModeComboBox->setToolTip(QApplication::translate("QgsLayoutMapGridWidgetBase", "Determines how the ticks length is defined when rotated.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Skip below angle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRotatedTicksThresholdSpinBox->setToolTip(QApplication::translate("QgsLayoutMapGridWidgetBase", "Grid lines intersecting the border below this threshold will be ignored.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRotatedTicksThresholdSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " \302\260", Q_NULLPTR));
        label_annot_corner->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Margin from map corner", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRotatedTicksMarginToCornerSpinBox->setToolTip(QApplication::translate("QgsLayoutMapGridWidgetBase", "Outwards facing ticks closer to the corners than this margin will be ignored.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRotatedTicksMarginToCornerSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mDrawAnnotationGroupBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Draw Coordinates", Q_NULLPTR));
        mAnnotationFormatLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Format", Q_NULLPTR));
        mAnnotationFormatButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Font", Q_NULLPTR));
        mAnnotationDisplayLeftDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mDistanceToMapFrameSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mLabelDistDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mAnnotationFontButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Font", Q_NULLPTR));
        mAnnotationPositionLabelLeft->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Left", Q_NULLPTR));
        mDistanceToMapFrameLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Distance to map frame", Q_NULLPTR));
        mCoordinatePrecisionLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Coordinate precision", Q_NULLPTR));
        mRotatedAnnotationsGroupBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Follow grid rotation", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Annotations alignment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRotatedAnnotationsLengthModeComboBox->setToolTip(QApplication::translate("QgsLayoutMapGridWidgetBase", "Determines how the ticks length is defined when rotated.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Skip below angle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRotatedAnnotationsThresholdSpinBox->setToolTip(QApplication::translate("QgsLayoutMapGridWidgetBase", "Grid lines intersecting the border below this threshold will be ignored.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRotatedAnnotationsThresholdSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " \302\260", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Margin from map corner", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRotatedAnnotationsMarginToCornerSpinBox->setToolTip(QApplication::translate("QgsLayoutMapGridWidgetBase", "Outwards facing annotations closer to the corners than this margin will be ignored.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRotatedAnnotationsMarginToCornerSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mAnnotationDisplayRightDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mAnnotationPositionLabelRight->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Right", Q_NULLPTR));
        mAnnotationPositionLabelTop->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Top", Q_NULLPTR));
        mAnnotationDisplayTopDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mAnnotationPositionLabelBottom->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom", Q_NULLPTR));
        mAnnotationDisplayBottomDDBtn->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapGridWidgetBase: public Ui_QgsLayoutMapGridWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPGRIDWIDGETBASE_H
