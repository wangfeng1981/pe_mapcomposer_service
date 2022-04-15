/********************************************************************************
** Form generated from reading UI file 'widget_shapeburstfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SHAPEBURSTFILL_H
#define UI_WIDGET_SHAPEBURSTFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetShapeburstFill
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *radioTwoColor;
    QgsColorRampButton *btnColorRamp;
    QgsPropertyOverrideButton *mShadeWholeShapeDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QSlider *mBlurSlider;
    QgsSpinBox *mSpinBlurRadius;
    QgsPropertyOverrideButton *mShadeDistanceDDBtn;
    QgsPropertyOverrideButton *mEndColorDDBtn;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mRadioUseMaxDistance;
    QgsDoubleSpinBox *mSpinMaxDistance;
    QSpacerItem *horizontalSpacer_3;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QgsPropertyOverrideButton *mBlurRadiusDDBtn;
    QgsPropertyOverrideButton *mStartColorDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *mIgnoreRingsCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QgsColorButton *btnChangeColor2;
    QgsPropertyOverrideButton *mIgnoreRingsDDBtn;
    QRadioButton *radioColorRamp;
    QgsColorButton *btnChangeColor;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *spinOffsetX;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mRadioUseWholeShape;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetShapeburstFill)
    {
        if (WidgetShapeburstFill->objectName().isEmpty())
            WidgetShapeburstFill->setObjectName(QStringLiteral("WidgetShapeburstFill"));
        WidgetShapeburstFill->resize(411, 427);
        WidgetShapeburstFill->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(WidgetShapeburstFill);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(WidgetShapeburstFill);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        radioTwoColor = new QRadioButton(WidgetShapeburstFill);
        radioTwoColor->setObjectName(QStringLiteral("radioTwoColor"));

        gridLayout->addWidget(radioTwoColor, 1, 0, 1, 1);

        btnColorRamp = new QgsColorRampButton(WidgetShapeburstFill);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 3, 1, 1, 3);

        mShadeWholeShapeDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mShadeWholeShapeDDBtn->setObjectName(QStringLiteral("mShadeWholeShapeDDBtn"));

        gridLayout->addWidget(mShadeWholeShapeDDBtn, 5, 4, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mBlurSlider = new QSlider(WidgetShapeburstFill);
        mBlurSlider->setObjectName(QStringLiteral("mBlurSlider"));
        mBlurSlider->setMaximum(18);
        mBlurSlider->setPageStep(3);
        mBlurSlider->setOrientation(Qt::Horizontal);
        mBlurSlider->setTickPosition(QSlider::TicksBelow);
        mBlurSlider->setTickInterval(1);

        horizontalLayout_4->addWidget(mBlurSlider);

        mSpinBlurRadius = new QgsSpinBox(WidgetShapeburstFill);
        mSpinBlurRadius->setObjectName(QStringLiteral("mSpinBlurRadius"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSpinBlurRadius->sizePolicy().hasHeightForWidth());
        mSpinBlurRadius->setSizePolicy(sizePolicy1);
        mSpinBlurRadius->setMaximum(18);

        horizontalLayout_4->addWidget(mSpinBlurRadius);


        gridLayout->addLayout(horizontalLayout_4, 9, 1, 1, 3);

        mShadeDistanceDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mShadeDistanceDDBtn->setObjectName(QStringLiteral("mShadeDistanceDDBtn"));

        gridLayout->addWidget(mShadeDistanceDDBtn, 6, 4, 1, 1);

        mEndColorDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mEndColorDDBtn->setObjectName(QStringLiteral("mEndColorDDBtn"));

        gridLayout->addWidget(mEndColorDDBtn, 2, 4, 1, 1);

        label_2 = new QLabel(WidgetShapeburstFill);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mRadioUseMaxDistance = new QRadioButton(WidgetShapeburstFill);
        mRadioUseMaxDistance->setObjectName(QStringLiteral("mRadioUseMaxDistance"));

        horizontalLayout_3->addWidget(mRadioUseMaxDistance);

        mSpinMaxDistance = new QgsDoubleSpinBox(WidgetShapeburstFill);
        mSpinMaxDistance->setObjectName(QStringLiteral("mSpinMaxDistance"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSpinMaxDistance->sizePolicy().hasHeightForWidth());
        mSpinMaxDistance->setSizePolicy(sizePolicy2);
        mSpinMaxDistance->setMaximum(1e+9);
        mSpinMaxDistance->setValue(5);
        mSpinMaxDistance->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(mSpinMaxDistance);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetShapeburstFill);
        mDistanceUnitWidget->setObjectName(QStringLiteral("mDistanceUnitWidget"));
        mDistanceUnitWidget->setMinimumSize(QSize(0, 0));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mDistanceUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 4);

        mBlurRadiusDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mBlurRadiusDDBtn->setObjectName(QStringLiteral("mBlurRadiusDDBtn"));

        gridLayout->addWidget(mBlurRadiusDDBtn, 9, 4, 1, 1);

        mStartColorDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mStartColorDDBtn->setObjectName(QStringLiteral("mStartColorDDBtn"));

        gridLayout->addWidget(mStartColorDDBtn, 1, 4, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mIgnoreRingsCheckBox = new QCheckBox(WidgetShapeburstFill);
        mIgnoreRingsCheckBox->setObjectName(QStringLiteral("mIgnoreRingsCheckBox"));

        horizontalLayout_6->addWidget(mIgnoreRingsCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_6, 8, 0, 1, 4);

        btnChangeColor2 = new QgsColorButton(WidgetShapeburstFill);
        btnChangeColor2->setObjectName(QStringLiteral("btnChangeColor2"));
        sizePolicy.setHeightForWidth(btnChangeColor2->sizePolicy().hasHeightForWidth());
        btnChangeColor2->setSizePolicy(sizePolicy);
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor2, 2, 1, 1, 3);

        mIgnoreRingsDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mIgnoreRingsDDBtn->setObjectName(QStringLiteral("mIgnoreRingsDDBtn"));

        gridLayout->addWidget(mIgnoreRingsDDBtn, 8, 4, 1, 1);

        radioColorRamp = new QRadioButton(WidgetShapeburstFill);
        radioColorRamp->setObjectName(QStringLiteral("radioColorRamp"));

        gridLayout->addWidget(radioColorRamp, 3, 0, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetShapeburstFill);
        btnChangeColor->setObjectName(QStringLiteral("btnChangeColor"));
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor, 1, 1, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spinOffsetY = new QgsDoubleSpinBox(WidgetShapeburstFill);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+8);
        spinOffsetY->setMaximum(1e+8);
        spinOffsetY->setSingleStep(0.2);

        gridLayout_2->addWidget(spinOffsetY, 1, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetShapeburstFill);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOffsetUnitWidget, 0, 1, 2, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetShapeburstFill);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        sizePolicy2.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy2);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+8);
        spinOffsetX->setMaximum(1e+8);
        spinOffsetX->setSingleStep(0.2);

        gridLayout_2->addWidget(spinOffsetX, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 10, 1, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mRadioUseWholeShape = new QRadioButton(WidgetShapeburstFill);
        mRadioUseWholeShape->setObjectName(QStringLiteral("mRadioUseWholeShape"));

        horizontalLayout_5->addWidget(mRadioUseWholeShape);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 4);

        label_3 = new QLabel(WidgetShapeburstFill);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(WidgetShapeburstFill);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(WidgetShapeburstFill);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 1, 1, 1);

        label_6 = new QLabel(WidgetShapeburstFill);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_3, 10, 0, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 10, 4, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        btnColorRamp->raise();
        label->raise();
        label_2->raise();
        radioTwoColor->raise();
        radioColorRamp->raise();
        label_3->raise();
        mStartColorDDBtn->raise();
        mEndColorDDBtn->raise();
        btnChangeColor->raise();
        btnChangeColor2->raise();
        mShadeWholeShapeDDBtn->raise();
        mShadeDistanceDDBtn->raise();
        mIgnoreRingsDDBtn->raise();
        mBlurRadiusDDBtn->raise();
        mOffsetDDBtn->raise();
        QWidget::setTabOrder(radioTwoColor, btnChangeColor);
        QWidget::setTabOrder(btnChangeColor, mStartColorDDBtn);
        QWidget::setTabOrder(mStartColorDDBtn, btnChangeColor2);
        QWidget::setTabOrder(btnChangeColor2, mEndColorDDBtn);
        QWidget::setTabOrder(mEndColorDDBtn, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, mRadioUseWholeShape);
        QWidget::setTabOrder(mRadioUseWholeShape, mShadeWholeShapeDDBtn);
        QWidget::setTabOrder(mShadeWholeShapeDDBtn, mRadioUseMaxDistance);
        QWidget::setTabOrder(mRadioUseMaxDistance, mSpinMaxDistance);
        QWidget::setTabOrder(mSpinMaxDistance, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mShadeDistanceDDBtn);
        QWidget::setTabOrder(mShadeDistanceDDBtn, mIgnoreRingsCheckBox);
        QWidget::setTabOrder(mIgnoreRingsCheckBox, mIgnoreRingsDDBtn);
        QWidget::setTabOrder(mIgnoreRingsDDBtn, mBlurSlider);
        QWidget::setTabOrder(mBlurSlider, mSpinBlurRadius);
        QWidget::setTabOrder(mSpinBlurRadius, mBlurRadiusDDBtn);
        QWidget::setTabOrder(mBlurRadiusDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, spinOffsetY);

        retranslateUi(WidgetShapeburstFill);
        QObject::connect(mRadioUseMaxDistance, SIGNAL(toggled(bool)), mSpinMaxDistance, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), btnColorRamp, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor2, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WidgetShapeburstFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetShapeburstFill)
    {
        label->setText(QApplication::translate("WidgetShapeburstFill", "Blur strength", Q_NULLPTR));
        radioTwoColor->setText(QApplication::translate("WidgetShapeburstFill", "Two color", Q_NULLPTR));
        mShadeWholeShapeDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        mShadeDistanceDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        mEndColorDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetShapeburstFill", "Gradient Colors", Q_NULLPTR));
        mRadioUseMaxDistance->setText(QApplication::translate("WidgetShapeburstFill", "Set distance", Q_NULLPTR));
        mBlurRadiusDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        mStartColorDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        mIgnoreRingsCheckBox->setText(QApplication::translate("WidgetShapeburstFill", "Ignore rings in polygons while shading", Q_NULLPTR));
        btnChangeColor2->setText(QString());
        mIgnoreRingsDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        radioColorRamp->setText(QApplication::translate("WidgetShapeburstFill", "Color ramp", Q_NULLPTR));
        btnChangeColor->setText(QString());
        mRadioUseWholeShape->setText(QApplication::translate("WidgetShapeburstFill", "Whole shape", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetShapeburstFill", "Shading Style", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetShapeburstFill", "x", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetShapeburstFill", "y", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetShapeburstFill", "Offset", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetShapeburstFill", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetShapeburstFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetShapeburstFill: public Ui_WidgetShapeburstFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SHAPEBURSTFILL_H
