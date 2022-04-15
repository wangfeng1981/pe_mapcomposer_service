/********************************************************************************
** Form generated from reading UI file 'qgslayoutitemwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTITEMWIDGETBASE_H
#define UI_QGSLAYOUTITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsopacitywidget.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgsspinbox.h"
#include "qgsvariableeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutItemWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBoxBasic *mGeneralOptionsGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mHeightSpin;
    QLabel *mYLabel;
    QgsLayoutUnitsComboBox *mPosUnitsComboBox;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mYPositionDDBtn;
    QLabel *mPageLabel;
    QgsPropertyOverrideButton *mXPositionDDBtn;
    QLabel *mHeightLabel;
    QHBoxLayout *_2;
    QgsRatioLockButton *mPosLockAspectRatio;
    QgsDoubleSpinBox *mXPosSpin;
    QgsDoubleSpinBox *mWidthSpin;
    QgsSpinBox *mPageSpinBox;
    QLabel *mXLabel;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QLabel *mWidthLabel;
    QgsDoubleSpinBox *mYPosSpin;
    QHBoxLayout *_3;
    QgsRatioLockButton *mSizeLockAspectRatio;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QRadioButton *mUpperLeftRadioButton;
    QRadioButton *mUpperMiddleRadioButton;
    QRadioButton *mUpperRightRadioButton;
    QRadioButton *mMiddleRightRadioButton;
    QRadioButton *mMiddleRadioButton;
    QRadioButton *mLowerRightRadioButton;
    QRadioButton *mLowerLeftRadioButton;
    QRadioButton *mLowerMiddleRadioButton;
    QRadioButton *mMiddleLeftRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBoxBasic *mTransformsGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mItemRotationSpinBox;
    QgsPropertyOverrideButton *mItemRotationDDBtn;
    QgsCollapsibleGroupBoxBasic *mFrameGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QgsColorButton *mFrameColorButton;
    QgsPropertyOverrideButton *mItemFrameColorDDBtn;
    QLabel *mStrokeWidthLabel;
    QHBoxLayout *horizontalLayout_8;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsLayoutUnitsComboBox *mStrokeUnitsComboBox;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *mFrameJoinStyleCombo;
    QgsCollapsibleGroupBoxBasic *mBackgroundGroupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mBackgroundColorButton;
    QgsPropertyOverrideButton *mItemBackgroundColorDDBtn;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_8;
    QLabel *mItemIdLabel;
    QLineEdit *mItemIdLineEdit;
    QgsCollapsibleGroupBoxBasic *groupRendering;
    QGridLayout *gridLayout_4;
    QLabel *labelBlendMode;
    QHBoxLayout *horizontalLayout_2;
    QgsOpacityWidget *mOpacityWidget;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mExcludeFromPrintsCheckBox;
    QgsPropertyOverrideButton *mExcludePrintsDDBtn;
    QLabel *labelTransparency;
    QHBoxLayout *horizontalLayout_3;
    QgsBlendModeComboBox *mBlendModeCombo;
    QgsPropertyOverrideButton *mBlendModeDDBtn;
    QgsCollapsibleGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QgsVariableEditorWidget *mVariableEditor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutItemWidgetBase)
    {
        if (QgsLayoutItemWidgetBase->objectName().isEmpty())
            QgsLayoutItemWidgetBase->setObjectName(QStringLiteral("QgsLayoutItemWidgetBase"));
        QgsLayoutItemWidgetBase->resize(634, 1812);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutItemWidgetBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeneralOptionsGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mGeneralOptionsGroupBox->setObjectName(QStringLiteral("mGeneralOptionsGroupBox"));
        mGeneralOptionsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGeneralOptionsGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mGeneralOptionsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mGeneralOptionsGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mHeightSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mHeightSpin->setObjectName(QStringLiteral("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(1e+7);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 4, 1, 1, 2);

        mYLabel = new QLabel(mGeneralOptionsGroupBox);
        mYLabel->setObjectName(QStringLiteral("mYLabel"));

        gridLayout_3->addWidget(mYLabel, 2, 0, 1, 1);

        mPosUnitsComboBox = new QgsLayoutUnitsComboBox(mGeneralOptionsGroupBox);
        mPosUnitsComboBox->setObjectName(QStringLiteral("mPosUnitsComboBox"));

        gridLayout_3->addWidget(mPosUnitsComboBox, 1, 5, 2, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 3, 3, 1, 1);

        mYPositionDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mYPositionDDBtn->setObjectName(QStringLiteral("mYPositionDDBtn"));

        gridLayout_3->addWidget(mYPositionDDBtn, 2, 3, 1, 1);

        mPageLabel = new QLabel(mGeneralOptionsGroupBox);
        mPageLabel->setObjectName(QStringLiteral("mPageLabel"));

        gridLayout_3->addWidget(mPageLabel, 0, 0, 1, 1);

        mXPositionDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mXPositionDDBtn->setObjectName(QStringLiteral("mXPositionDDBtn"));

        gridLayout_3->addWidget(mXPositionDDBtn, 1, 3, 1, 1);

        mHeightLabel = new QLabel(mGeneralOptionsGroupBox);
        mHeightLabel->setObjectName(QStringLiteral("mHeightLabel"));

        gridLayout_3->addWidget(mHeightLabel, 4, 0, 1, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mPosLockAspectRatio = new QgsRatioLockButton(mGeneralOptionsGroupBox);
        mPosLockAspectRatio->setObjectName(QStringLiteral("mPosLockAspectRatio"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPosLockAspectRatio->sizePolicy().hasHeightForWidth());
        mPosLockAspectRatio->setSizePolicy(sizePolicy);
        mPosLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mPosLockAspectRatio);


        gridLayout_3->addLayout(_2, 1, 4, 2, 1);

        mXPosSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mXPosSpin->setObjectName(QStringLiteral("mXPosSpin"));
        mXPosSpin->setDecimals(3);
        mXPosSpin->setMinimum(-1e+7);
        mXPosSpin->setMaximum(1e+7);
        mXPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mXPosSpin, 1, 1, 1, 2);

        mWidthSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mWidthSpin->setObjectName(QStringLiteral("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(1e+7);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 3, 1, 1, 2);

        mPageSpinBox = new QgsSpinBox(mGeneralOptionsGroupBox);
        mPageSpinBox->setObjectName(QStringLiteral("mPageSpinBox"));
        mPageSpinBox->setMinimum(1);
        mPageSpinBox->setMaximum(9999);
        mPageSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mPageSpinBox, 0, 1, 1, 3);

        mXLabel = new QLabel(mGeneralOptionsGroupBox);
        mXLabel->setObjectName(QStringLiteral("mXLabel"));

        gridLayout_3->addWidget(mXLabel, 1, 0, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mHeightDDBtn->setObjectName(QStringLiteral("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 4, 3, 1, 1);

        mWidthLabel = new QLabel(mGeneralOptionsGroupBox);
        mWidthLabel->setObjectName(QStringLiteral("mWidthLabel"));

        gridLayout_3->addWidget(mWidthLabel, 3, 0, 1, 1);

        mYPosSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mYPosSpin->setObjectName(QStringLiteral("mYPosSpin"));
        mYPosSpin->setDecimals(3);
        mYPosSpin->setMinimum(-1e+7);
        mYPosSpin->setMaximum(1e+7);
        mYPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mYPosSpin, 2, 1, 1, 2);

        _3 = new QHBoxLayout();
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(2, 2, 0, 2);
        mSizeLockAspectRatio = new QgsRatioLockButton(mGeneralOptionsGroupBox);
        mSizeLockAspectRatio->setObjectName(QStringLiteral("mSizeLockAspectRatio"));
        sizePolicy.setHeightForWidth(mSizeLockAspectRatio->sizePolicy().hasHeightForWidth());
        mSizeLockAspectRatio->setSizePolicy(sizePolicy);
        mSizeLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _3->addWidget(mSizeLockAspectRatio);


        gridLayout_3->addLayout(_3, 3, 4, 2, 1);

        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(mGeneralOptionsGroupBox);
        mSizeUnitsComboBox->setObjectName(QStringLiteral("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 3, 5, 2, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(mGeneralOptionsGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mUpperLeftRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mUpperLeftRadioButton->setObjectName(QStringLiteral("mUpperLeftRadioButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mUpperLeftRadioButton->sizePolicy().hasHeightForWidth());
        mUpperLeftRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mUpperLeftRadioButton, 0, 0, 1, 1);

        mUpperMiddleRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mUpperMiddleRadioButton->setObjectName(QStringLiteral("mUpperMiddleRadioButton"));
        sizePolicy1.setHeightForWidth(mUpperMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mUpperMiddleRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mUpperMiddleRadioButton, 0, 1, 1, 1);

        mUpperRightRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mUpperRightRadioButton->setObjectName(QStringLiteral("mUpperRightRadioButton"));
        sizePolicy1.setHeightForWidth(mUpperRightRadioButton->sizePolicy().hasHeightForWidth());
        mUpperRightRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mUpperRightRadioButton, 0, 2, 1, 1);

        mMiddleRightRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mMiddleRightRadioButton->setObjectName(QStringLiteral("mMiddleRightRadioButton"));
        sizePolicy1.setHeightForWidth(mMiddleRightRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleRightRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMiddleRightRadioButton, 1, 2, 1, 1);

        mMiddleRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mMiddleRadioButton->setObjectName(QStringLiteral("mMiddleRadioButton"));
        sizePolicy1.setHeightForWidth(mMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMiddleRadioButton, 1, 1, 1, 1);

        mLowerRightRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mLowerRightRadioButton->setObjectName(QStringLiteral("mLowerRightRadioButton"));
        sizePolicy1.setHeightForWidth(mLowerRightRadioButton->sizePolicy().hasHeightForWidth());
        mLowerRightRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLowerRightRadioButton, 2, 2, 1, 1);

        mLowerLeftRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mLowerLeftRadioButton->setObjectName(QStringLiteral("mLowerLeftRadioButton"));
        sizePolicy1.setHeightForWidth(mLowerLeftRadioButton->sizePolicy().hasHeightForWidth());
        mLowerLeftRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLowerLeftRadioButton, 2, 0, 1, 1);

        mLowerMiddleRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mLowerMiddleRadioButton->setObjectName(QStringLiteral("mLowerMiddleRadioButton"));
        sizePolicy1.setHeightForWidth(mLowerMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mLowerMiddleRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLowerMiddleRadioButton, 2, 1, 1, 1);

        mMiddleLeftRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mMiddleLeftRadioButton->setObjectName(QStringLiteral("mMiddleLeftRadioButton"));
        sizePolicy1.setHeightForWidth(mMiddleLeftRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleLeftRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMiddleLeftRadioButton, 1, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(mGeneralOptionsGroupBox);

        mTransformsGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mTransformsGroupBox->setObjectName(QStringLiteral("mTransformsGroupBox"));
        mTransformsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mTransformsGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mTransformsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(mTransformsGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(mTransformsGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mItemRotationSpinBox = new QgsDoubleSpinBox(mTransformsGroupBox);
        mItemRotationSpinBox->setObjectName(QStringLiteral("mItemRotationSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mItemRotationSpinBox->sizePolicy().hasHeightForWidth());
        mItemRotationSpinBox->setSizePolicy(sizePolicy2);
        mItemRotationSpinBox->setWrapping(true);
        mItemRotationSpinBox->setMinimum(-360);
        mItemRotationSpinBox->setMaximum(360);

        horizontalLayout_4->addWidget(mItemRotationSpinBox);

        mItemRotationDDBtn = new QgsPropertyOverrideButton(mTransformsGroupBox);
        mItemRotationDDBtn->setObjectName(QStringLiteral("mItemRotationDDBtn"));

        horizontalLayout_4->addWidget(mItemRotationDDBtn);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(mTransformsGroupBox);

        mFrameGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mFrameGroupBox->setObjectName(QStringLiteral("mFrameGroupBox"));
        mFrameGroupBox->setCheckable(true);
        mFrameGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mFrameGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(mFrameGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(mFrameGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mFrameColorButton = new QgsColorButton(mFrameGroupBox);
        mFrameColorButton->setObjectName(QStringLiteral("mFrameColorButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFrameColorButton->sizePolicy().hasHeightForWidth());
        mFrameColorButton->setSizePolicy(sizePolicy3);
        mFrameColorButton->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(mFrameColorButton);

        mItemFrameColorDDBtn = new QgsPropertyOverrideButton(mFrameGroupBox);
        mItemFrameColorDDBtn->setObjectName(QStringLiteral("mItemFrameColorDDBtn"));

        horizontalLayout_6->addWidget(mItemFrameColorDDBtn);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(mFrameGroupBox);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));
        mStrokeWidthLabel->setWordWrap(true);

        gridLayout_2->addWidget(mStrokeWidthLabel, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(mFrameGroupBox);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        sizePolicy3.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy3);
        mStrokeWidthSpinBox->setMaximum(99.99);
        mStrokeWidthSpinBox->setSingleStep(0.1);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_8->addWidget(mStrokeWidthSpinBox);

        mStrokeUnitsComboBox = new QgsLayoutUnitsComboBox(mFrameGroupBox);
        mStrokeUnitsComboBox->setObjectName(QStringLiteral("mStrokeUnitsComboBox"));

        horizontalLayout_8->addWidget(mStrokeUnitsComboBox);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        label_8 = new QLabel(mFrameGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        mFrameJoinStyleCombo = new QgsPenJoinStyleComboBox(mFrameGroupBox);
        mFrameJoinStyleCombo->setObjectName(QStringLiteral("mFrameJoinStyleCombo"));
        sizePolicy3.setHeightForWidth(mFrameJoinStyleCombo->sizePolicy().hasHeightForWidth());
        mFrameJoinStyleCombo->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mFrameJoinStyleCombo, 2, 1, 1, 1);


        verticalLayout_2->addWidget(mFrameGroupBox);

        mBackgroundGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mBackgroundGroupBox->setObjectName(QStringLiteral("mBackgroundGroupBox"));
        mBackgroundGroupBox->setCheckable(true);
        mBackgroundGroupBox->setChecked(true);
        mBackgroundGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mBackgroundGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_7 = new QGridLayout(mBackgroundGroupBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_4 = new QLabel(mBackgroundGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButton(mBackgroundGroupBox);
        mBackgroundColorButton->setObjectName(QStringLiteral("mBackgroundColorButton"));
        sizePolicy3.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy3);
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        mItemBackgroundColorDDBtn = new QgsPropertyOverrideButton(mBackgroundGroupBox);
        mItemBackgroundColorDDBtn->setObjectName(QStringLiteral("mItemBackgroundColorDDBtn"));

        horizontalLayout_5->addWidget(mItemBackgroundColorDDBtn);


        gridLayout_7->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        verticalLayout_2->addWidget(mBackgroundGroupBox);

        groupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(true));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        mItemIdLabel = new QLabel(groupBox);
        mItemIdLabel->setObjectName(QStringLiteral("mItemIdLabel"));

        gridLayout_8->addWidget(mItemIdLabel, 0, 0, 1, 1);

        mItemIdLineEdit = new QLineEdit(groupBox);
        mItemIdLineEdit->setObjectName(QStringLiteral("mItemIdLineEdit"));

        gridLayout_8->addWidget(mItemIdLineEdit, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupRendering = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        groupRendering->setObjectName(QStringLiteral("groupRendering"));
        groupRendering->setFocusPolicy(Qt::StrongFocus);
        groupRendering->setProperty("collapsed", QVariant(true));
        groupRendering->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        gridLayout_4 = new QGridLayout(groupRendering);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelBlendMode = new QLabel(groupRendering);
        labelBlendMode->setObjectName(QStringLiteral("labelBlendMode"));

        gridLayout_4->addWidget(labelBlendMode, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mOpacityWidget = new QgsOpacityWidget(groupRendering);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mOpacityWidget);

        mOpacityDDBtn = new QgsPropertyOverrideButton(groupRendering);
        mOpacityDDBtn->setObjectName(QStringLiteral("mOpacityDDBtn"));

        horizontalLayout_2->addWidget(mOpacityDDBtn);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mExcludeFromPrintsCheckBox = new QCheckBox(groupRendering);
        mExcludeFromPrintsCheckBox->setObjectName(QStringLiteral("mExcludeFromPrintsCheckBox"));

        horizontalLayout->addWidget(mExcludeFromPrintsCheckBox);

        mExcludePrintsDDBtn = new QgsPropertyOverrideButton(groupRendering);
        mExcludePrintsDDBtn->setObjectName(QStringLiteral("mExcludePrintsDDBtn"));

        horizontalLayout->addWidget(mExcludePrintsDDBtn);


        gridLayout_4->addLayout(horizontalLayout, 3, 0, 1, 2);

        labelTransparency = new QLabel(groupRendering);
        labelTransparency->setObjectName(QStringLiteral("labelTransparency"));

        gridLayout_4->addWidget(labelTransparency, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mBlendModeCombo = new QgsBlendModeComboBox(groupRendering);
        mBlendModeCombo->setObjectName(QStringLiteral("mBlendModeCombo"));

        horizontalLayout_3->addWidget(mBlendModeCombo);

        mBlendModeDDBtn = new QgsPropertyOverrideButton(groupRendering);
        mBlendModeDDBtn->setObjectName(QStringLiteral("mBlendModeDDBtn"));

        horizontalLayout_3->addWidget(mBlendModeDDBtn);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(groupRendering);

        groupBox_3 = new QgsCollapsibleGroupBox(QgsLayoutItemWidgetBase);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_3);
        mVariableEditor->setObjectName(QStringLiteral("mVariableEditor"));
        mVariableEditor->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(mVariableEditor);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        mStrokeWidthLabel->setBuddy(mStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mGeneralOptionsGroupBox, mPageSpinBox);
        QWidget::setTabOrder(mPageSpinBox, mXPosSpin);
        QWidget::setTabOrder(mXPosSpin, mXPositionDDBtn);
        QWidget::setTabOrder(mXPositionDDBtn, mYPosSpin);
        QWidget::setTabOrder(mYPosSpin, mYPositionDDBtn);
        QWidget::setTabOrder(mYPositionDDBtn, mPosLockAspectRatio);
        QWidget::setTabOrder(mPosLockAspectRatio, mPosUnitsComboBox);
        QWidget::setTabOrder(mPosUnitsComboBox, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mSizeLockAspectRatio);
        QWidget::setTabOrder(mSizeLockAspectRatio, mSizeUnitsComboBox);
        QWidget::setTabOrder(mSizeUnitsComboBox, mUpperLeftRadioButton);
        QWidget::setTabOrder(mUpperLeftRadioButton, mUpperMiddleRadioButton);
        QWidget::setTabOrder(mUpperMiddleRadioButton, mUpperRightRadioButton);
        QWidget::setTabOrder(mUpperRightRadioButton, mMiddleLeftRadioButton);
        QWidget::setTabOrder(mMiddleLeftRadioButton, mMiddleRadioButton);
        QWidget::setTabOrder(mMiddleRadioButton, mMiddleRightRadioButton);
        QWidget::setTabOrder(mMiddleRightRadioButton, mLowerLeftRadioButton);
        QWidget::setTabOrder(mLowerLeftRadioButton, mLowerMiddleRadioButton);
        QWidget::setTabOrder(mLowerMiddleRadioButton, mLowerRightRadioButton);
        QWidget::setTabOrder(mLowerRightRadioButton, mTransformsGroupBox);
        QWidget::setTabOrder(mTransformsGroupBox, mItemRotationSpinBox);
        QWidget::setTabOrder(mItemRotationSpinBox, mItemRotationDDBtn);
        QWidget::setTabOrder(mItemRotationDDBtn, mFrameGroupBox);
        QWidget::setTabOrder(mFrameGroupBox, mFrameColorButton);
        QWidget::setTabOrder(mFrameColorButton, mItemFrameColorDDBtn);
        QWidget::setTabOrder(mItemFrameColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeUnitsComboBox);
        QWidget::setTabOrder(mStrokeUnitsComboBox, mFrameJoinStyleCombo);
        QWidget::setTabOrder(mFrameJoinStyleCombo, mBackgroundGroupBox);
        QWidget::setTabOrder(mBackgroundGroupBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mItemBackgroundColorDDBtn);
        QWidget::setTabOrder(mItemBackgroundColorDDBtn, groupBox);
        QWidget::setTabOrder(groupBox, mItemIdLineEdit);
        QWidget::setTabOrder(mItemIdLineEdit, groupRendering);
        QWidget::setTabOrder(groupRendering, mBlendModeCombo);
        QWidget::setTabOrder(mBlendModeCombo, mBlendModeDDBtn);
        QWidget::setTabOrder(mBlendModeDDBtn, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mExcludeFromPrintsCheckBox);
        QWidget::setTabOrder(mExcludeFromPrintsCheckBox, mExcludePrintsDDBtn);

        retranslateUi(QgsLayoutItemWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutItemWidgetBase)
    {
        QgsLayoutItemWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Global Options", Q_NULLPTR));
        mGeneralOptionsGroupBox->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Position and Size", Q_NULLPTR));
        mHeightSpin->setSuffix(QString());
        mYLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Y", Q_NULLPTR));
        mWidthDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mYPositionDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mPageLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Page", Q_NULLPTR));
        mXPositionDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mHeightLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mPosLockAspectRatio->setToolTip(QApplication::translate("QgsLayoutItemWidgetBase", "Lock aspect ratio (including while drawing extent onto canvas)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mXPosSpin->setSuffix(QString());
        mWidthSpin->setSuffix(QString());
        mXLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "X", Q_NULLPTR));
        mHeightDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mWidthLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Width", Q_NULLPTR));
        mYPosSpin->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        mSizeLockAspectRatio->setToolTip(QApplication::translate("QgsLayoutItemWidgetBase", "Lock aspect ratio (including while drawing extent onto canvas)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Reference point", Q_NULLPTR));
        mUpperLeftRadioButton->setText(QString());
        mUpperMiddleRadioButton->setText(QString());
        mUpperRightRadioButton->setText(QString());
        mMiddleRightRadioButton->setText(QString());
        mMiddleRadioButton->setText(QString());
        mLowerRightRadioButton->setText(QString());
        mLowerLeftRadioButton->setText(QString());
        mLowerMiddleRadioButton->setText(QString());
        mMiddleLeftRadioButton->setText(QString());
        mTransformsGroupBox->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Rotation", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Rotation", Q_NULLPTR));
        mItemRotationSpinBox->setSuffix(QApplication::translate("QgsLayoutItemWidgetBase", " \302\260", Q_NULLPTR));
        mItemRotationDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mFrameGroupBox->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Frame", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Color", Q_NULLPTR));
        mFrameColorButton->setText(QString());
        mItemFrameColorDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mStrokeWidthLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Thickness", Q_NULLPTR));
        mStrokeWidthSpinBox->setSuffix(QString());
        label_8->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Join style", Q_NULLPTR));
        mBackgroundGroupBox->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Background", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Color", Q_NULLPTR));
        mBackgroundColorButton->setText(QString());
        mItemBackgroundColorDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Item ID", Q_NULLPTR));
        mItemIdLabel->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Id", Q_NULLPTR));
        groupRendering->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Rendering", Q_NULLPTR));
        labelBlendMode->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Blending mode", Q_NULLPTR));
        mOpacityDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        mExcludeFromPrintsCheckBox->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Exclude item from exports", Q_NULLPTR));
        mExcludePrintsDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        labelTransparency->setText(QApplication::translate("QgsLayoutItemWidgetBase", "Opacity", Q_NULLPTR));
        mBlendModeDDBtn->setText(QApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsLayoutItemWidgetBase", "Variables", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutItemWidgetBase: public Ui_QgsLayoutItemWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTITEMWIDGETBASE_H
