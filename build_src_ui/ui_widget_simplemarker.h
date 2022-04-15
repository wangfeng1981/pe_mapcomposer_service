/********************************************************************************
** Form generated from reading UI file 'widget_simplemarker.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEMARKER_H
#define UI_WIDGET_SIMPLEMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleMarker
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QLabel *mStrokeWidthLabel;
    QLabel *label;
    QLabel *mStrokeStyleLabel;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QLabel *label_2;
    QLabel *mAnchorPointLabel;
    QLabel *label_4;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QgsDoubleSpinBox *spinOffsetX;
    QLabel *label_6;
    QgsDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QHBoxLayout *horizontalLayout_8;
    QListWidget *lstNames;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QgsPropertyOverrideButton *mNameDDBtn;
    QgsPropertyOverrideButton *mStrokeStyleDDBtn;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QComboBox *mVerticalAnchorComboBox;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsPenStyleComboBox *mStrokeStyleComboBox;
    QComboBox *mHorizontalAnchorComboBox;
    QgsColorButton *btnChangeColorStroke;
    QgsColorButton *btnChangeColorFill;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;

    void setupUi(QWidget *WidgetSimpleMarker)
    {
        if (WidgetSimpleMarker->objectName().isEmpty())
            WidgetSimpleMarker->setObjectName(QStringLiteral("WidgetSimpleMarker"));
        WidgetSimpleMarker->resize(333, 637);
        WidgetSimpleMarker->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(WidgetSimpleMarker);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(WidgetSimpleMarker);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        mSizeDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mSizeDDBtn->setObjectName(QStringLiteral("mSizeDDBtn"));

        gridLayout_2->addWidget(mSizeDDBtn, 0, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        spinSize = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy);
        spinSize->setDecimals(6);
        spinSize->setMaximum(100000);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mSizeUnitWidget->setObjectName(QStringLiteral("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mSizeUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 2, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetSimpleMarker);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_2->addWidget(mStrokeWidthLabel, 8, 0, 1, 1);

        label = new QLabel(WidgetSimpleMarker);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        mStrokeStyleLabel = new QLabel(WidgetSimpleMarker);
        mStrokeStyleLabel->setObjectName(QStringLiteral("mStrokeStyleLabel"));

        gridLayout_2->addWidget(mStrokeStyleLabel, 6, 0, 1, 1);

        label_8 = new QLabel(WidgetSimpleMarker);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 9, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleMarker);
        cboJoinStyle->setObjectName(QStringLiteral("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 9, 2, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout_2->addWidget(spinAngle, 12, 2, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mAngleDDBtn->setObjectName(QStringLiteral("mAngleDDBtn"));

        gridLayout_2->addWidget(mAngleDDBtn, 12, 4, 1, 1);

        label_2 = new QLabel(WidgetSimpleMarker);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetSimpleMarker);
        mAnchorPointLabel->setObjectName(QStringLiteral("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 15, 0, 3, 1);

        label_4 = new QLabel(WidgetSimpleMarker);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 12, 0, 1, 1);

        label_5 = new QLabel(WidgetSimpleMarker);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 13, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(WidgetSimpleMarker);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        sizePolicy.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+8);
        spinOffsetX->setMaximum(1e+8);
        spinOffsetX->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetX, 0, 1, 1, 1);

        label_6 = new QLabel(WidgetSimpleMarker);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+8);
        spinOffsetY->setMaximum(1e+8);
        spinOffsetY->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetY, 1, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout_2->addLayout(gridLayout, 13, 2, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mJoinStyleDDBtn->setObjectName(QStringLiteral("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 9, 4, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lstNames = new QListWidget(WidgetSimpleMarker);
        lstNames->setObjectName(QStringLiteral("lstNames"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lstNames->sizePolicy().hasHeightForWidth());
        lstNames->setSizePolicy(sizePolicy3);
        lstNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstNames->setIconSize(QSize(20, 20));
        lstNames->setMovement(QListView::Static);
        lstNames->setFlow(QListView::LeftToRight);
        lstNames->setResizeMode(QListView::Adjust);
        lstNames->setSpacing(4);
        lstNames->setGridSize(QSize(30, 25));
        lstNames->setViewMode(QListView::IconMode);
        lstNames->setWordWrap(true);

        horizontalLayout_8->addWidget(lstNames);


        gridLayout_2->addLayout(horizontalLayout_8, 18, 0, 1, 3);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mVerticalAnchorDDBtn->setObjectName(QStringLiteral("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 15, 4, 1, 1);

        mNameDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mNameDDBtn->setObjectName(QStringLiteral("mNameDDBtn"));

        gridLayout_2->addWidget(mNameDDBtn, 18, 4, 1, 1);

        mStrokeStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mStrokeStyleDDBtn->setObjectName(QStringLiteral("mStrokeStyleDDBtn"));

        gridLayout_2->addWidget(mStrokeStyleDDBtn, 6, 4, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 1, 4, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mHorizontalAnchorDDBtn->setObjectName(QStringLiteral("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 16, 4, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 3, 4, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetSimpleMarker);
        mVerticalAnchorComboBox->setObjectName(QStringLiteral("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 15, 2, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 13, 4, 1, 1);

        mStrokeStyleComboBox = new QgsPenStyleComboBox(WidgetSimpleMarker);
        mStrokeStyleComboBox->setObjectName(QStringLiteral("mStrokeStyleComboBox"));

        gridLayout_2->addWidget(mStrokeStyleComboBox, 6, 2, 1, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetSimpleMarker);
        mHorizontalAnchorComboBox->setObjectName(QStringLiteral("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 16, 2, 1, 1);

        btnChangeColorStroke = new QgsColorButton(WidgetSimpleMarker);
        btnChangeColorStroke->setObjectName(QStringLiteral("btnChangeColorStroke"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnChangeColorStroke->sizePolicy().hasHeightForWidth());
        btnChangeColorStroke->setSizePolicy(sizePolicy4);
        btnChangeColorStroke->setMinimumSize(QSize(120, 0));
        btnChangeColorStroke->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorStroke, 3, 2, 1, 1);

        btnChangeColorFill = new QgsColorButton(WidgetSimpleMarker);
        btnChangeColorFill->setObjectName(QStringLiteral("btnChangeColorFill"));
        sizePolicy4.setHeightForWidth(btnChangeColorFill->sizePolicy().hasHeightForWidth());
        btnChangeColorFill->setSizePolicy(sizePolicy4);
        btnChangeColorFill->setMinimumSize(QSize(120, 0));
        btnChangeColorFill->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorFill, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetSimpleMarker);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        sizePolicy2.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy2);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(1e+9);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_4->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mStrokeWidthUnitWidget->setObjectName(QStringLiteral("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_4, 8, 2, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 8, 4, 1, 1);

        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, btnChangeColorFill);
        QWidget::setTabOrder(btnChangeColorFill, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, btnChangeColorStroke);
        QWidget::setTabOrder(btnChangeColorStroke, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeStyleComboBox);
        QWidget::setTabOrder(mStrokeStyleComboBox, mStrokeStyleDDBtn);
        QWidget::setTabOrder(mStrokeStyleDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, lstNames);
        QWidget::setTabOrder(lstNames, mNameDDBtn);

        retranslateUi(WidgetSimpleMarker);

        QMetaObject::connectSlotsByName(WidgetSimpleMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleMarker)
    {
        label_3->setText(QApplication::translate("WidgetSimpleMarker", "Size", Q_NULLPTR));
        mSizeDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mStrokeWidthLabel->setText(QApplication::translate("WidgetSimpleMarker", "Stroke width", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetSimpleMarker", "Stroke color", Q_NULLPTR));
        mStrokeStyleLabel->setText(QApplication::translate("WidgetSimpleMarker", "Stroke style", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetSimpleMarker", "Join style", Q_NULLPTR));
        spinAngle->setSuffix(QApplication::translate("WidgetSimpleMarker", " \302\260", Q_NULLPTR));
        mAngleDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetSimpleMarker", "Fill color", Q_NULLPTR));
        mAnchorPointLabel->setText(QApplication::translate("WidgetSimpleMarker", "Anchor point", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetSimpleMarker", "Rotation", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetSimpleMarker", "Offset", Q_NULLPTR));
        label_7->setText(QApplication::translate("WidgetSimpleMarker", "x", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetSimpleMarker", "y", Q_NULLPTR));
        mJoinStyleDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mVerticalAnchorDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mNameDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mStrokeStyleDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mFillColorDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mHorizontalAnchorDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSimpleMarker", "Top", Q_NULLPTR)
         << QApplication::translate("WidgetSimpleMarker", "VCenter", Q_NULLPTR)
         << QApplication::translate("WidgetSimpleMarker", "Bottom", Q_NULLPTR)
        );
        mOffsetDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSimpleMarker", "Left", Q_NULLPTR)
         << QApplication::translate("WidgetSimpleMarker", "HCenter", Q_NULLPTR)
         << QApplication::translate("WidgetSimpleMarker", "Right", Q_NULLPTR)
        );
        btnChangeColorStroke->setText(QString());
        btnChangeColorFill->setText(QString());
        mStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetSimpleMarker", "Hairline", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetSimpleMarker", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetSimpleMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleMarker: public Ui_WidgetSimpleMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEMARKER_H
