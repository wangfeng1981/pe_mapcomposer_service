/********************************************************************************
** Form generated from reading UI file 'widget_fontmarker.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_FONTMARKER_H
#define UI_WIDGET_FONTMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetFontMarker
{
public:
    QGridLayout *gridLayout_3;
    QgsColorButton *btnColor;
    QgsColorButton *btnStrokeColor;
    QLabel *label_2;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QLabel *lblFamily;
    QLabel *lblStyle;
    QComboBox *mFontStyleComboBox;
    QgsPropertyOverrideButton *mFontStyleDDBtn;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_6;
    QgsDoubleSpinBox *spinOffsetY;
    QFontComboBox *cboFont;
    QgsPropertyOverrideButton *mFontFamilyDDBtn;
    QLabel *mAnchorPointLabel;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *mHorizontalAnchorComboBox;
    QLabel *label_4;
    QComboBox *mVerticalAnchorComboBox;
    QgsPropertyOverrideButton *mColorDDBtn;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QLabel *label_12;
    QLineEdit *mCharLineEdit;
    QgsPropertyOverrideButton *mCharDDBtn;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QGridLayout *gridLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QLabel *mStrokeWidthLabel;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QLineEdit *mCharPreview;
    QLabel *label_13;

    void setupUi(QWidget *WidgetFontMarker)
    {
        if (WidgetFontMarker->objectName().isEmpty())
            WidgetFontMarker->setObjectName(QStringLiteral("WidgetFontMarker"));
        WidgetFontMarker->resize(487, 639);
        WidgetFontMarker->setWindowTitle(QStringLiteral("Form"));
        gridLayout_3 = new QGridLayout(WidgetFontMarker);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        btnColor = new QgsColorButton(WidgetFontMarker);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(120, 0));
        btnColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnColor, 3, 2, 1, 1);

        btnStrokeColor = new QgsColorButton(WidgetFontMarker);
        btnStrokeColor->setObjectName(QStringLiteral("btnStrokeColor"));
        sizePolicy.setHeightForWidth(btnStrokeColor->sizePolicy().hasHeightForWidth());
        btnStrokeColor->setSizePolicy(sizePolicy);
        btnStrokeColor->setMinimumSize(QSize(120, 0));
        btnStrokeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnStrokeColor, 4, 2, 1, 1);

        label_2 = new QLabel(WidgetFontMarker);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_3->addWidget(mStrokeWidthDDBtn, 5, 4, 1, 1);

        lblFamily = new QLabel(WidgetFontMarker);
        lblFamily->setObjectName(QStringLiteral("lblFamily"));

        gridLayout_3->addWidget(lblFamily, 0, 0, 1, 1);

        lblStyle = new QLabel(WidgetFontMarker);
        lblStyle->setObjectName(QStringLiteral("lblStyle"));

        gridLayout_3->addWidget(lblStyle, 1, 0, 1, 1);

        mFontStyleComboBox = new QComboBox(WidgetFontMarker);
        mFontStyleComboBox->setObjectName(QStringLiteral("mFontStyleComboBox"));
        sizePolicy.setHeightForWidth(mFontStyleComboBox->sizePolicy().hasHeightForWidth());
        mFontStyleComboBox->setSizePolicy(sizePolicy);
        mFontStyleComboBox->setMinimumSize(QSize(0, 0));
        mFontStyleComboBox->setMaximumSize(QSize(16777215, 16777215));
        mFontStyleComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(mFontStyleComboBox, 1, 2, 1, 1);

        mFontStyleDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mFontStyleDDBtn->setObjectName(QStringLiteral("mFontStyleDDBtn"));

        gridLayout_3->addWidget(mFontStyleDDBtn, 1, 4, 1, 1);

        label_5 = new QLabel(WidgetFontMarker);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 10, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(WidgetFontMarker);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetFontMarker);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+9);
        spinOffsetX->setMaximum(1e+9);
        spinOffsetX->setSingleStep(0.2);

        gridLayout_2->addWidget(spinOffsetX, 0, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);

        label_6 = new QLabel(WidgetFontMarker);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetFontMarker);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+9);
        spinOffsetY->setMaximum(1e+9);
        spinOffsetY->setSingleStep(0.2);

        gridLayout_2->addWidget(spinOffsetY, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 10, 2, 1, 1);

        cboFont = new QFontComboBox(WidgetFontMarker);
        cboFont->setObjectName(QStringLiteral("cboFont"));
        cboFont->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cboFont->setMinimumContentsLength(8);

        gridLayout_3->addWidget(cboFont, 0, 2, 1, 1);

        mFontFamilyDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mFontFamilyDDBtn->setObjectName(QStringLiteral("mFontFamilyDDBtn"));

        gridLayout_3->addWidget(mFontFamilyDDBtn, 0, 4, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetFontMarker);
        mAnchorPointLabel->setObjectName(QStringLiteral("mAnchorPointLabel"));

        gridLayout_3->addWidget(mAnchorPointLabel, 11, 0, 3, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_3->addWidget(mStrokeColorDDBtn, 4, 4, 1, 1);

        label_10 = new QLabel(WidgetFontMarker);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        label_9 = new QLabel(WidgetFontMarker);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        label_8 = new QLabel(WidgetFontMarker);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 7, 0, 1, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetFontMarker);
        mHorizontalAnchorComboBox->setObjectName(QStringLiteral("mHorizontalAnchorComboBox"));

        gridLayout_3->addWidget(mHorizontalAnchorComboBox, 12, 2, 1, 1);

        label_4 = new QLabel(WidgetFontMarker);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 9, 0, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetFontMarker);
        mVerticalAnchorComboBox->setObjectName(QStringLiteral("mVerticalAnchorComboBox"));

        gridLayout_3->addWidget(mVerticalAnchorComboBox, 11, 2, 1, 1);

        mColorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mColorDDBtn->setObjectName(QStringLiteral("mColorDDBtn"));

        gridLayout_3->addWidget(mColorDDBtn, 3, 4, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mHorizontalAnchorDDBtn->setObjectName(QStringLiteral("mHorizontalAnchorDDBtn"));

        gridLayout_3->addWidget(mHorizontalAnchorDDBtn, 12, 4, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout_3->addWidget(mOffsetDDBtn, 10, 4, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetFontMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout_3->addWidget(spinAngle, 9, 2, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mVerticalAnchorDDBtn->setObjectName(QStringLiteral("mVerticalAnchorDDBtn"));

        gridLayout_3->addWidget(mVerticalAnchorDDBtn, 11, 4, 1, 1);

        label_12 = new QLabel(WidgetFontMarker);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 15, 0, 1, 1);

        mCharLineEdit = new QLineEdit(WidgetFontMarker);
        mCharLineEdit->setObjectName(QStringLiteral("mCharLineEdit"));

        gridLayout_3->addWidget(mCharLineEdit, 15, 1, 1, 2);

        mCharDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mCharDDBtn->setObjectName(QStringLiteral("mCharDDBtn"));

        gridLayout_3->addWidget(mCharDDBtn, 15, 4, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mRotationDDBtn->setObjectName(QStringLiteral("mRotationDDBtn"));

        gridLayout_3->addWidget(mRotationDDBtn, 9, 4, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QgsScrollArea(WidgetFontMarker);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 158));
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 158));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 14, 0, 1, 5);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mJoinStyleDDBtn->setObjectName(QStringLiteral("mJoinStyleDDBtn"));

        gridLayout_3->addWidget(mJoinStyleDDBtn, 7, 4, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetFontMarker);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_3->addWidget(mStrokeWidthLabel, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetFontMarker);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy1);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(1e+9);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setValue(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mStrokeWidthUnitWidget->setObjectName(QStringLiteral("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mStrokeWidthUnitWidget);


        gridLayout_3->addLayout(horizontalLayout_3, 5, 2, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetFontMarker);
        cboJoinStyle->setObjectName(QStringLiteral("cboJoinStyle"));

        gridLayout_3->addWidget(cboJoinStyle, 7, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spinSize = new QgsDoubleSpinBox(WidgetFontMarker);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        sizePolicy1.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy1);
        spinSize->setDecimals(6);
        spinSize->setMaximum(1e+8);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(12);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mSizeUnitWidget->setObjectName(QStringLiteral("mSizeUnitWidget"));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mSizeUnitWidget);


        gridLayout_3->addLayout(horizontalLayout, 2, 2, 1, 1);

        mSizeDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mSizeDDBtn->setObjectName(QStringLiteral("mSizeDDBtn"));

        gridLayout_3->addWidget(mSizeDDBtn, 2, 4, 1, 1);

        mCharPreview = new QLineEdit(WidgetFontMarker);
        mCharPreview->setObjectName(QStringLiteral("mCharPreview"));
        mCharPreview->setReadOnly(true);

        gridLayout_3->addWidget(mCharPreview, 16, 1, 1, 2);

        label_13 = new QLabel(WidgetFontMarker);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 16, 0, 1, 1);

        QWidget::setTabOrder(cboFont, mFontStyleComboBox);
        QWidget::setTabOrder(mFontStyleComboBox, spinSize);
        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, btnColor);
        QWidget::setTabOrder(btnColor, mColorDDBtn);
        QWidget::setTabOrder(mColorDDBtn, btnStrokeColor);
        QWidget::setTabOrder(btnStrokeColor, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, scrollArea);
        QWidget::setTabOrder(scrollArea, mCharDDBtn);

        retranslateUi(WidgetFontMarker);

        QMetaObject::connectSlotsByName(WidgetFontMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetFontMarker)
    {
        btnColor->setText(QString());
        btnStrokeColor->setText(QString());
        label_2->setText(QApplication::translate("WidgetFontMarker", "Size", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        lblFamily->setText(QApplication::translate("WidgetFontMarker", "Font family", Q_NULLPTR));
        lblStyle->setText(QApplication::translate("WidgetFontMarker", "Font style", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontStyleComboBox->setToolTip(QApplication::translate("WidgetFontMarker", "Available typeface styles", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontStyleDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetFontMarker", "Offset", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetFontMarker", "x", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetFontMarker", "y", Q_NULLPTR));
        mFontFamilyDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        mAnchorPointLabel->setText(QApplication::translate("WidgetFontMarker", "Anchor point", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        label_10->setText(QApplication::translate("WidgetFontMarker", "Fill color", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetFontMarker", "Stroke color", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetFontMarker", "Join style", Q_NULLPTR));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetFontMarker", "Left", Q_NULLPTR)
         << QApplication::translate("WidgetFontMarker", "HCenter", Q_NULLPTR)
         << QApplication::translate("WidgetFontMarker", "Right", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("WidgetFontMarker", "Rotation", Q_NULLPTR));
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetFontMarker", "Top", Q_NULLPTR)
         << QApplication::translate("WidgetFontMarker", "VCenter", Q_NULLPTR)
         << QApplication::translate("WidgetFontMarker", "Bottom", Q_NULLPTR)
        );
        mColorDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        mHorizontalAnchorDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        spinAngle->setSuffix(QApplication::translate("WidgetFontMarker", " \302\260", Q_NULLPTR));
        mVerticalAnchorDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        label_12->setText(QApplication::translate("WidgetFontMarker", "Character(s)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCharLineEdit->setToolTip(QApplication::translate("WidgetFontMarker", "Type in characters directly, or enter a character's hexadecimal value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCharDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        mRotationDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        mJoinStyleDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
        mStrokeWidthLabel->setText(QApplication::translate("WidgetFontMarker", "Stroke width", Q_NULLPTR));
        mStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetFontMarker", "No stroke", Q_NULLPTR));
        mSizeDDBtn->setText(QApplication::translate("WidgetFontMarker", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCharPreview->setToolTip(QApplication::translate("WidgetFontMarker", "Type in characters directly, or enter a character's hexadecimal value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("WidgetFontMarker", "Preview", Q_NULLPTR));
        Q_UNUSED(WidgetFontMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetFontMarker: public Ui_WidgetFontMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FONTMARKER_H
