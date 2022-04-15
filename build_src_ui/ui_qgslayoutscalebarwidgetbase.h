/********************************************************************************
** Form generated from reading UI file 'qgslayoutscalebarwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTSCALEBARWIDGETBASE_H
#define UI_QGSLAYOUTSCALEBARWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsalignmentcombobox.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayoutitemcombobox.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutScaleBarWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QgsLayoutItemComboBox *mMapItemComboBox;
    QComboBox *mStyleComboBox;
    QLabel *mStyleLabel;
    QLabel *mMapLabel;
    QgsCollapsibleGroupBoxBasic *mGroupBoxUnits;
    QGridLayout *gridLayout_2;
    QLabel *mUnitLabelLabel;
    QLabel *mMapUnitsPerBarUnitLabel;
    QgsDoubleSpinBox *mMapUnitsPerBarUnitSpinBox;
    QComboBox *mUnitsComboBox;
    QLabel *mUnitsLabel;
    QLineEdit *mUnitLabelLineEdit;
    QLabel *mUnitLabelLabel_2;
    QPushButton *mNumberFormatPushButton;
    QgsCollapsibleGroupBoxBasic *mGroupBoxSegments;
    QGridLayout *gridLayout_3;
    QLabel *mSegmentLabel;
    QgsDoubleSpinBox *mSegmentSizeSpinBox;
    QLabel *label;
    QgsSpinBox *mNumberOfSegmentsSpinBox;
    QgsSpinBox *mSegmentsLeftSpinBox;
    QRadioButton *mFixedSizeRadio;
    QRadioButton *mFitWidthRadio;
    QgsDoubleSpinBox *mHeightSpinBox;
    QgsDoubleSpinBox *mMinWidthSpinBox;
    QgsDoubleSpinBox *mMaxWidthSpinBox;
    QLabel *mSubdivisionsLabel;
    QgsSpinBox *mNumberOfSubdivisionsSpinBox;
    QLabel *mSubdivisionsHeightLabel;
    QgsDoubleSpinBox *mSubdivisionsHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *mFillSymbol1Label;
    QgsAlignmentComboBox *mAlignmentComboBox;
    QgsSymbolButton *mFillSymbol2Button;
    QLabel *mFontLabel;
    QLabel *mAlignmentLabel;
    QgsFontButton *mFontButton;
    QgsDoubleSpinBox *mLabelBarSpaceSpinBox;
    QLabel *mLabelBarSpaceLabel;
    QgsSymbolButton *mFillSymbol1Button;
    QLabel *mFillSymbol2Label;
    QLabel *mDivisionStyleLabel;
    QLabel *mLineStyleLabel;
    QLabel *mLabelVerticalPlacementLabel;
    QLabel *mLabelHorizontalPlacementLabel;
    QgsSymbolButton *mLineStyleButton;
    QComboBox *mLabelVerticalPlacementComboBox;
    QComboBox *mLabelHorizontalPlacementComboBox;
    QLabel *mBoxSizeLabel;
    QgsDoubleSpinBox *mBoxSizeSpinBox;
    QLabel *mSubdivisionStyleLabel;
    QgsSymbolButton *mSubdivisionStyleButton;
    QgsSymbolButton *mDivisionStyleButton;

    void setupUi(QWidget *QgsLayoutScaleBarWidgetBase)
    {
        if (QgsLayoutScaleBarWidgetBase->objectName().isEmpty())
            QgsLayoutScaleBarWidgetBase->setObjectName(QStringLiteral("QgsLayoutScaleBarWidgetBase"));
        QgsLayoutScaleBarWidgetBase->resize(456, 662);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutScaleBarWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutScaleBarWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutScaleBarWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(QgsLayoutScaleBarWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_5);

        scrollArea = new QgsScrollArea(QgsLayoutScaleBarWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -453, 451, 1076));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mMapItemComboBox = new QgsLayoutItemComboBox(groupBox);
        mMapItemComboBox->setObjectName(QStringLiteral("mMapItemComboBox"));

        gridLayout->addWidget(mMapItemComboBox, 0, 1, 1, 2);

        mStyleComboBox = new QComboBox(groupBox);
        mStyleComboBox->setObjectName(QStringLiteral("mStyleComboBox"));

        gridLayout->addWidget(mStyleComboBox, 1, 1, 1, 2);

        mStyleLabel = new QLabel(groupBox);
        mStyleLabel->setObjectName(QStringLiteral("mStyleLabel"));

        gridLayout->addWidget(mStyleLabel, 1, 0, 1, 1);

        mMapLabel = new QLabel(groupBox);
        mMapLabel->setObjectName(QStringLiteral("mMapLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMapLabel->sizePolicy().hasHeightForWidth());
        mMapLabel->setSizePolicy(sizePolicy2);
        mMapLabel->setWordWrap(true);

        gridLayout->addWidget(mMapLabel, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        mGroupBoxUnits = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxUnits->setObjectName(QStringLiteral("mGroupBoxUnits"));
        mGroupBoxUnits->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxUnits->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mGroupBoxUnits->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mGroupBoxUnits);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mUnitLabelLabel = new QLabel(mGroupBoxUnits);
        mUnitLabelLabel->setObjectName(QStringLiteral("mUnitLabelLabel"));
        mUnitLabelLabel->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel, 2, 0, 1, 1);

        mMapUnitsPerBarUnitLabel = new QLabel(mGroupBoxUnits);
        mMapUnitsPerBarUnitLabel->setObjectName(QStringLiteral("mMapUnitsPerBarUnitLabel"));
        mMapUnitsPerBarUnitLabel->setWordWrap(false);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitLabel, 1, 0, 1, 1);

        mMapUnitsPerBarUnitSpinBox = new QgsDoubleSpinBox(mGroupBoxUnits);
        mMapUnitsPerBarUnitSpinBox->setObjectName(QStringLiteral("mMapUnitsPerBarUnitSpinBox"));
        mMapUnitsPerBarUnitSpinBox->setDecimals(6);
        mMapUnitsPerBarUnitSpinBox->setMaximum(1e+13);
        mMapUnitsPerBarUnitSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mMapUnitsPerBarUnitSpinBox, 1, 1, 1, 1);

        mUnitsComboBox = new QComboBox(mGroupBoxUnits);
        mUnitsComboBox->setObjectName(QStringLiteral("mUnitsComboBox"));

        gridLayout_2->addWidget(mUnitsComboBox, 0, 1, 1, 1);

        mUnitsLabel = new QLabel(mGroupBoxUnits);
        mUnitsLabel->setObjectName(QStringLiteral("mUnitsLabel"));

        gridLayout_2->addWidget(mUnitsLabel, 0, 0, 1, 1);

        mUnitLabelLineEdit = new QLineEdit(mGroupBoxUnits);
        mUnitLabelLineEdit->setObjectName(QStringLiteral("mUnitLabelLineEdit"));

        gridLayout_2->addWidget(mUnitLabelLineEdit, 2, 1, 1, 1);

        mUnitLabelLabel_2 = new QLabel(mGroupBoxUnits);
        mUnitLabelLabel_2->setObjectName(QStringLiteral("mUnitLabelLabel_2"));
        mUnitLabelLabel_2->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel_2, 3, 0, 1, 1);

        mNumberFormatPushButton = new QPushButton(mGroupBoxUnits);
        mNumberFormatPushButton->setObjectName(QStringLiteral("mNumberFormatPushButton"));

        gridLayout_2->addWidget(mNumberFormatPushButton, 3, 1, 1, 1);


        mainLayout->addWidget(mGroupBoxUnits);

        mGroupBoxSegments = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxSegments->setObjectName(QStringLiteral("mGroupBoxSegments"));
        mGroupBoxSegments->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxSegments->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mGroupBoxSegments->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mGroupBoxSegments);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mSegmentLabel = new QLabel(mGroupBoxSegments);
        mSegmentLabel->setObjectName(QStringLiteral("mSegmentLabel"));

        gridLayout_3->addWidget(mSegmentLabel, 0, 0, 1, 1);

        mSegmentSizeSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mSegmentSizeSpinBox->setObjectName(QStringLiteral("mSegmentSizeSpinBox"));
        mSegmentSizeSpinBox->setDecimals(6);
        mSegmentSizeSpinBox->setMaximum(1e+13);
        mSegmentSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mSegmentSizeSpinBox, 2, 2, 1, 1);

        label = new QLabel(mGroupBoxSegments);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 5, 0, 1, 2);

        mNumberOfSegmentsSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mNumberOfSegmentsSpinBox->setObjectName(QStringLiteral("mNumberOfSegmentsSpinBox"));
        mNumberOfSegmentsSpinBox->setValue(0);

        gridLayout_3->addWidget(mNumberOfSegmentsSpinBox, 1, 2, 1, 1);

        mSegmentsLeftSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mSegmentsLeftSpinBox->setObjectName(QStringLiteral("mSegmentsLeftSpinBox"));

        gridLayout_3->addWidget(mSegmentsLeftSpinBox, 0, 2, 1, 1);

        mFixedSizeRadio = new QRadioButton(mGroupBoxSegments);
        mFixedSizeRadio->setObjectName(QStringLiteral("mFixedSizeRadio"));
        mFixedSizeRadio->setChecked(true);

        gridLayout_3->addWidget(mFixedSizeRadio, 2, 0, 1, 2);

        mFitWidthRadio = new QRadioButton(mGroupBoxSegments);
        mFitWidthRadio->setObjectName(QStringLiteral("mFitWidthRadio"));

        gridLayout_3->addWidget(mFitWidthRadio, 3, 0, 1, 2);

        mHeightSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mHeightSpinBox->setObjectName(QStringLiteral("mHeightSpinBox"));
        mHeightSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mHeightSpinBox, 5, 2, 1, 1);

        mMinWidthSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mMinWidthSpinBox->setObjectName(QStringLiteral("mMinWidthSpinBox"));
        mMinWidthSpinBox->setEnabled(false);
        mMinWidthSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mMinWidthSpinBox, 3, 2, 1, 1);

        mMaxWidthSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mMaxWidthSpinBox->setObjectName(QStringLiteral("mMaxWidthSpinBox"));
        mMaxWidthSpinBox->setEnabled(false);
        mMaxWidthSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mMaxWidthSpinBox, 4, 2, 1, 1);

        mSubdivisionsLabel = new QLabel(mGroupBoxSegments);
        mSubdivisionsLabel->setObjectName(QStringLiteral("mSubdivisionsLabel"));

        gridLayout_3->addWidget(mSubdivisionsLabel, 6, 0, 1, 1);

        mNumberOfSubdivisionsSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mNumberOfSubdivisionsSpinBox->setObjectName(QStringLiteral("mNumberOfSubdivisionsSpinBox"));
        mNumberOfSubdivisionsSpinBox->setMinimum(1);

        gridLayout_3->addWidget(mNumberOfSubdivisionsSpinBox, 6, 2, 1, 1);

        mSubdivisionsHeightLabel = new QLabel(mGroupBoxSegments);
        mSubdivisionsHeightLabel->setObjectName(QStringLiteral("mSubdivisionsHeightLabel"));

        gridLayout_3->addWidget(mSubdivisionsHeightLabel, 7, 0, 1, 1);

        mSubdivisionsHeightSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mSubdivisionsHeightSpinBox->setObjectName(QStringLiteral("mSubdivisionsHeightSpinBox"));
        mSubdivisionsHeightSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mSubdivisionsHeightSpinBox, 7, 2, 1, 1);


        mainLayout->addWidget(mGroupBoxSegments);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(true));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mFillSymbol1Label = new QLabel(groupBox_5);
        mFillSymbol1Label->setObjectName(QStringLiteral("mFillSymbol1Label"));

        gridLayout_4->addWidget(mFillSymbol1Label, 7, 0, 1, 1);

        mAlignmentComboBox = new QgsAlignmentComboBox(groupBox_5);
        mAlignmentComboBox->setObjectName(QStringLiteral("mAlignmentComboBox"));

        gridLayout_4->addWidget(mAlignmentComboBox, 13, 1, 1, 2);

        mFillSymbol2Button = new QgsSymbolButton(groupBox_5);
        mFillSymbol2Button->setObjectName(QStringLiteral("mFillSymbol2Button"));
        sizePolicy2.setHeightForWidth(mFillSymbol2Button->sizePolicy().hasHeightForWidth());
        mFillSymbol2Button->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mFillSymbol2Button, 8, 1, 1, 2);

        mFontLabel = new QLabel(groupBox_5);
        mFontLabel->setObjectName(QStringLiteral("mFontLabel"));

        gridLayout_4->addWidget(mFontLabel, 14, 0, 1, 1);

        mAlignmentLabel = new QLabel(groupBox_5);
        mAlignmentLabel->setObjectName(QStringLiteral("mAlignmentLabel"));

        gridLayout_4->addWidget(mAlignmentLabel, 13, 0, 1, 1);

        mFontButton = new QgsFontButton(groupBox_5);
        mFontButton->setObjectName(QStringLiteral("mFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mFontButton, 14, 1, 1, 2);

        mLabelBarSpaceSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mLabelBarSpaceSpinBox->setObjectName(QStringLiteral("mLabelBarSpaceSpinBox"));

        gridLayout_4->addWidget(mLabelBarSpaceSpinBox, 2, 1, 1, 2);

        mLabelBarSpaceLabel = new QLabel(groupBox_5);
        mLabelBarSpaceLabel->setObjectName(QStringLiteral("mLabelBarSpaceLabel"));

        gridLayout_4->addWidget(mLabelBarSpaceLabel, 2, 0, 1, 1);

        mFillSymbol1Button = new QgsSymbolButton(groupBox_5);
        mFillSymbol1Button->setObjectName(QStringLiteral("mFillSymbol1Button"));
        sizePolicy2.setHeightForWidth(mFillSymbol1Button->sizePolicy().hasHeightForWidth());
        mFillSymbol1Button->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mFillSymbol1Button, 7, 1, 1, 2);

        mFillSymbol2Label = new QLabel(groupBox_5);
        mFillSymbol2Label->setObjectName(QStringLiteral("mFillSymbol2Label"));

        gridLayout_4->addWidget(mFillSymbol2Label, 8, 0, 1, 1);

        mDivisionStyleLabel = new QLabel(groupBox_5);
        mDivisionStyleLabel->setObjectName(QStringLiteral("mDivisionStyleLabel"));

        gridLayout_4->addWidget(mDivisionStyleLabel, 11, 0, 1, 1);

        mLineStyleLabel = new QLabel(groupBox_5);
        mLineStyleLabel->setObjectName(QStringLiteral("mLineStyleLabel"));

        gridLayout_4->addWidget(mLineStyleLabel, 9, 0, 1, 1);

        mLabelVerticalPlacementLabel = new QLabel(groupBox_5);
        mLabelVerticalPlacementLabel->setObjectName(QStringLiteral("mLabelVerticalPlacementLabel"));

        gridLayout_4->addWidget(mLabelVerticalPlacementLabel, 3, 0, 1, 3);

        mLabelHorizontalPlacementLabel = new QLabel(groupBox_5);
        mLabelHorizontalPlacementLabel->setObjectName(QStringLiteral("mLabelHorizontalPlacementLabel"));

        gridLayout_4->addWidget(mLabelHorizontalPlacementLabel, 5, 0, 1, 3);

        mLineStyleButton = new QgsSymbolButton(groupBox_5);
        mLineStyleButton->setObjectName(QStringLiteral("mLineStyleButton"));
        sizePolicy2.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mLineStyleButton, 9, 1, 1, 2);

        mLabelVerticalPlacementComboBox = new QComboBox(groupBox_5);
        mLabelVerticalPlacementComboBox->setObjectName(QStringLiteral("mLabelVerticalPlacementComboBox"));

        gridLayout_4->addWidget(mLabelVerticalPlacementComboBox, 4, 0, 1, 3);

        mLabelHorizontalPlacementComboBox = new QComboBox(groupBox_5);
        mLabelHorizontalPlacementComboBox->setObjectName(QStringLiteral("mLabelHorizontalPlacementComboBox"));

        gridLayout_4->addWidget(mLabelHorizontalPlacementComboBox, 6, 0, 1, 3);

        mBoxSizeLabel = new QLabel(groupBox_5);
        mBoxSizeLabel->setObjectName(QStringLiteral("mBoxSizeLabel"));

        gridLayout_4->addWidget(mBoxSizeLabel, 1, 0, 1, 1);

        mBoxSizeSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mBoxSizeSpinBox->setObjectName(QStringLiteral("mBoxSizeSpinBox"));

        gridLayout_4->addWidget(mBoxSizeSpinBox, 1, 1, 1, 2);

        mSubdivisionStyleLabel = new QLabel(groupBox_5);
        mSubdivisionStyleLabel->setObjectName(QStringLiteral("mSubdivisionStyleLabel"));

        gridLayout_4->addWidget(mSubdivisionStyleLabel, 12, 0, 1, 1);

        mSubdivisionStyleButton = new QgsSymbolButton(groupBox_5);
        mSubdivisionStyleButton->setObjectName(QStringLiteral("mSubdivisionStyleButton"));
        sizePolicy2.setHeightForWidth(mSubdivisionStyleButton->sizePolicy().hasHeightForWidth());
        mSubdivisionStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mSubdivisionStyleButton, 12, 1, 1, 2);

        mDivisionStyleButton = new QgsSymbolButton(groupBox_5);
        mDivisionStyleButton->setObjectName(QStringLiteral("mDivisionStyleButton"));
        sizePolicy2.setHeightForWidth(mDivisionStyleButton->sizePolicy().hasHeightForWidth());
        mDivisionStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mDivisionStyleButton, 11, 1, 1, 2);


        mainLayout->addWidget(groupBox_5);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mStyleLabel->setBuddy(mStyleComboBox);
        mMapLabel->setBuddy(mMapItemComboBox);
        mUnitLabelLabel->setBuddy(mUnitLabelLineEdit);
        mMapUnitsPerBarUnitLabel->setBuddy(mMapUnitsPerBarUnitSpinBox);
        mUnitLabelLabel_2->setBuddy(mUnitLabelLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mMapItemComboBox);
        QWidget::setTabOrder(mMapItemComboBox, mStyleComboBox);
        QWidget::setTabOrder(mStyleComboBox, mGroupBoxUnits);
        QWidget::setTabOrder(mGroupBoxUnits, mUnitsComboBox);
        QWidget::setTabOrder(mUnitsComboBox, mMapUnitsPerBarUnitSpinBox);
        QWidget::setTabOrder(mMapUnitsPerBarUnitSpinBox, mUnitLabelLineEdit);
        QWidget::setTabOrder(mUnitLabelLineEdit, mNumberFormatPushButton);
        QWidget::setTabOrder(mNumberFormatPushButton, mGroupBoxSegments);
        QWidget::setTabOrder(mGroupBoxSegments, mSegmentsLeftSpinBox);
        QWidget::setTabOrder(mSegmentsLeftSpinBox, mNumberOfSegmentsSpinBox);
        QWidget::setTabOrder(mNumberOfSegmentsSpinBox, mFixedSizeRadio);
        QWidget::setTabOrder(mFixedSizeRadio, mSegmentSizeSpinBox);
        QWidget::setTabOrder(mSegmentSizeSpinBox, mFitWidthRadio);
        QWidget::setTabOrder(mFitWidthRadio, mMinWidthSpinBox);
        QWidget::setTabOrder(mMinWidthSpinBox, mMaxWidthSpinBox);
        QWidget::setTabOrder(mMaxWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mNumberOfSubdivisionsSpinBox);
        QWidget::setTabOrder(mNumberOfSubdivisionsSpinBox, mSubdivisionsHeightSpinBox);
        QWidget::setTabOrder(mSubdivisionsHeightSpinBox, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mBoxSizeSpinBox);
        QWidget::setTabOrder(mBoxSizeSpinBox, mLabelBarSpaceSpinBox);
        QWidget::setTabOrder(mLabelBarSpaceSpinBox, mLabelVerticalPlacementComboBox);
        QWidget::setTabOrder(mLabelVerticalPlacementComboBox, mLabelHorizontalPlacementComboBox);
        QWidget::setTabOrder(mLabelHorizontalPlacementComboBox, mFillSymbol1Button);
        QWidget::setTabOrder(mFillSymbol1Button, mFillSymbol2Button);
        QWidget::setTabOrder(mFillSymbol2Button, mLineStyleButton);
        QWidget::setTabOrder(mLineStyleButton, mDivisionStyleButton);
        QWidget::setTabOrder(mDivisionStyleButton, mSubdivisionStyleButton);
        QWidget::setTabOrder(mSubdivisionStyleButton, mAlignmentComboBox);
        QWidget::setTabOrder(mAlignmentComboBox, mFontButton);

        retranslateUi(QgsLayoutScaleBarWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutScaleBarWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutScaleBarWidgetBase)
    {
        QgsLayoutScaleBarWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar Options", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Main Properties", Q_NULLPTR));
        mStyleLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "St&yle", Q_NULLPTR));
        mMapLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "&Map", Q_NULLPTR));
        mGroupBoxUnits->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Units", Q_NULLPTR));
        mUnitLabelLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "&Label for units", Q_NULLPTR));
        mMapUnitsPerBarUnitLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Label unit multiplier", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMapUnitsPerBarUnitSpinBox->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Specifies how many scalebar units per labeled unit. For example, if your scalebar units are set to \"meters\", a multiplier of 1000 will result in the scalebar labels in kilometers.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mUnitsComboBox->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Specifies the underlying units used for scalebar calculations, e.g., \"meters\" or \"feet\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUnitsLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar units", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mUnitLabelLineEdit->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Text used for labeling the scalebar units, e.g., \"m\" or \"km\". This should be matched to reflect the multiplier above.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUnitLabelLabel_2->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Number format", Q_NULLPTR));
        mNumberFormatPushButton->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Customize", Q_NULLPTR));
        mGroupBoxSegments->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Segments", Q_NULLPTR));
        mSegmentLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Segments", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSegmentSizeSpinBox->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Number of scalebar units per scalebar segment", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSegmentSizeSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " units", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Height", Q_NULLPTR));
        mNumberOfSegmentsSpinBox->setSuffix(QString());
        mNumberOfSegmentsSpinBox->setPrefix(QApplication::translate("QgsLayoutScaleBarWidgetBase", "right ", Q_NULLPTR));
        mSegmentsLeftSpinBox->setSuffix(QString());
        mSegmentsLeftSpinBox->setPrefix(QApplication::translate("QgsLayoutScaleBarWidgetBase", "left ", Q_NULLPTR));
        mFixedSizeRadio->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fi&xed width", Q_NULLPTR));
        mFitWidthRadio->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fit segment width", Q_NULLPTR));
        mHeightSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mMinWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mMaxWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mSubdivisionsLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Right segments subdivisions", Q_NULLPTR));
        mNumberOfSubdivisionsSpinBox->setSuffix(QString());
        mNumberOfSubdivisionsSpinBox->setPrefix(QString());
        mSubdivisionsHeightLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Subdivisions height", Q_NULLPTR));
        mSubdivisionsHeightSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Display", Q_NULLPTR));
        mFillSymbol1Label->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Primary fill", Q_NULLPTR));
        mFillSymbol2Button->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fill Style\342\200\246", Q_NULLPTR));
        mFontLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Font", Q_NULLPTR));
        mAlignmentLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Alignment", Q_NULLPTR));
        mFontButton->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Font", Q_NULLPTR));
        mLabelBarSpaceSpinBox->setPrefix(QString());
        mLabelBarSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mLabelBarSpaceLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Label margin", Q_NULLPTR));
        mFillSymbol1Button->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fill Style\342\200\246", Q_NULLPTR));
        mFillSymbol2Label->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Secondary fill", Q_NULLPTR));
        mDivisionStyleLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Division style", Q_NULLPTR));
        mLineStyleLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Line style", Q_NULLPTR));
        mLabelVerticalPlacementLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Vertical label placement", Q_NULLPTR));
        mLabelHorizontalPlacementLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Horizontal label placement", Q_NULLPTR));
        mLineStyleButton->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Line Style\342\200\246", Q_NULLPTR));
        mBoxSizeLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Box margin", Q_NULLPTR));
        mBoxSizeSpinBox->setPrefix(QString());
        mBoxSizeSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mSubdivisionStyleLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Subdivision style", Q_NULLPTR));
        mSubdivisionStyleButton->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Subdivision Style\342\200\246", Q_NULLPTR));
        mDivisionStyleButton->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Division Style\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutScaleBarWidgetBase: public Ui_QgsLayoutScaleBarWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTSCALEBARWIDGETBASE_H
