/********************************************************************************
** Form generated from reading UI file 'widget_vectorfield.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_VECTORFIELD_H
#define UI_WIDGET_VECTORFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetVectorFieldBase
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *mXAttributeLabel;
    QComboBox *mXAttributeComboBox;
    QLabel *mYAttributeLabel;
    QComboBox *mYAttributeComboBox;
    QLabel *mDistanceUnitLabel;
    QLabel *mScaleLabel;
    QgsDoubleSpinBox *mScaleSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *mFieldTypeGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mHeightRadioButton;
    QRadioButton *mPolarRadioButton;
    QRadioButton *mCartesianRadioButton;
    QGroupBox *mAngleUnitsGroupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *mDegreesRadioButton;
    QRadioButton *mRadiansRadioButton;
    QGroupBox *mAngleOrientationGroupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *mClockwiseFromNorthRadioButton;
    QRadioButton *mCounterclockwiseFromEastRadioButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetVectorFieldBase)
    {
        if (WidgetVectorFieldBase->objectName().isEmpty())
            WidgetVectorFieldBase->setObjectName(QStringLiteral("WidgetVectorFieldBase"));
        WidgetVectorFieldBase->resize(338, 378);
        WidgetVectorFieldBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(WidgetVectorFieldBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setHorizontalSpacing(28);
        mXAttributeLabel = new QLabel(WidgetVectorFieldBase);
        mXAttributeLabel->setObjectName(QStringLiteral("mXAttributeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mXAttributeLabel->sizePolicy().hasHeightForWidth());
        mXAttributeLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, mXAttributeLabel);

        mXAttributeComboBox = new QComboBox(WidgetVectorFieldBase);
        mXAttributeComboBox->setObjectName(QStringLiteral("mXAttributeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mXAttributeComboBox->sizePolicy().hasHeightForWidth());
        mXAttributeComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, mXAttributeComboBox);

        mYAttributeLabel = new QLabel(WidgetVectorFieldBase);
        mYAttributeLabel->setObjectName(QStringLiteral("mYAttributeLabel"));
        sizePolicy.setHeightForWidth(mYAttributeLabel->sizePolicy().hasHeightForWidth());
        mYAttributeLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, mYAttributeLabel);

        mYAttributeComboBox = new QComboBox(WidgetVectorFieldBase);
        mYAttributeComboBox->setObjectName(QStringLiteral("mYAttributeComboBox"));
        sizePolicy1.setHeightForWidth(mYAttributeComboBox->sizePolicy().hasHeightForWidth());
        mYAttributeComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, mYAttributeComboBox);

        mDistanceUnitLabel = new QLabel(WidgetVectorFieldBase);
        mDistanceUnitLabel->setObjectName(QStringLiteral("mDistanceUnitLabel"));
        sizePolicy.setHeightForWidth(mDistanceUnitLabel->sizePolicy().hasHeightForWidth());
        mDistanceUnitLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, mDistanceUnitLabel);

        mScaleLabel = new QLabel(WidgetVectorFieldBase);
        mScaleLabel->setObjectName(QStringLiteral("mScaleLabel"));
        sizePolicy.setHeightForWidth(mScaleLabel->sizePolicy().hasHeightForWidth());
        mScaleLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, mScaleLabel);

        mScaleSpinBox = new QgsDoubleSpinBox(WidgetVectorFieldBase);
        mScaleSpinBox->setObjectName(QStringLiteral("mScaleSpinBox"));
        sizePolicy1.setHeightForWidth(mScaleSpinBox->sizePolicy().hasHeightForWidth());
        mScaleSpinBox->setSizePolicy(sizePolicy1);
        mScaleSpinBox->setDecimals(2);
        mScaleSpinBox->setMaximum(1e+7);
        mScaleSpinBox->setSingleStep(0.2);
        mScaleSpinBox->setValue(1);
        mScaleSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout->setWidget(3, QFormLayout::FieldRole, mScaleSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetVectorFieldBase);
        mDistanceUnitWidget->setObjectName(QStringLiteral("mDistanceUnitWidget"));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(2, QFormLayout::FieldRole, mDistanceUnitWidget);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mFieldTypeGroupBox = new QGroupBox(WidgetVectorFieldBase);
        mFieldTypeGroupBox->setObjectName(QStringLiteral("mFieldTypeGroupBox"));
        gridLayout = new QGridLayout(mFieldTypeGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mHeightRadioButton = new QRadioButton(mFieldTypeGroupBox);
        mHeightRadioButton->setObjectName(QStringLiteral("mHeightRadioButton"));

        gridLayout->addWidget(mHeightRadioButton, 2, 0, 1, 1);

        mPolarRadioButton = new QRadioButton(mFieldTypeGroupBox);
        mPolarRadioButton->setObjectName(QStringLiteral("mPolarRadioButton"));

        gridLayout->addWidget(mPolarRadioButton, 1, 0, 1, 1);

        mCartesianRadioButton = new QRadioButton(mFieldTypeGroupBox);
        mCartesianRadioButton->setObjectName(QStringLiteral("mCartesianRadioButton"));

        gridLayout->addWidget(mCartesianRadioButton, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(mFieldTypeGroupBox);

        mAngleUnitsGroupBox = new QGroupBox(WidgetVectorFieldBase);
        mAngleUnitsGroupBox->setObjectName(QStringLiteral("mAngleUnitsGroupBox"));
        gridLayout_3 = new QGridLayout(mAngleUnitsGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mDegreesRadioButton = new QRadioButton(mAngleUnitsGroupBox);
        mDegreesRadioButton->setObjectName(QStringLiteral("mDegreesRadioButton"));

        gridLayout_3->addWidget(mDegreesRadioButton, 0, 0, 1, 1);

        mRadiansRadioButton = new QRadioButton(mAngleUnitsGroupBox);
        mRadiansRadioButton->setObjectName(QStringLiteral("mRadiansRadioButton"));

        gridLayout_3->addWidget(mRadiansRadioButton, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(mAngleUnitsGroupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        mAngleOrientationGroupBox = new QGroupBox(WidgetVectorFieldBase);
        mAngleOrientationGroupBox->setObjectName(QStringLiteral("mAngleOrientationGroupBox"));
        verticalLayout_2 = new QVBoxLayout(mAngleOrientationGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mClockwiseFromNorthRadioButton = new QRadioButton(mAngleOrientationGroupBox);
        mClockwiseFromNorthRadioButton->setObjectName(QStringLiteral("mClockwiseFromNorthRadioButton"));

        verticalLayout_2->addWidget(mClockwiseFromNorthRadioButton);

        mCounterclockwiseFromEastRadioButton = new QRadioButton(mAngleOrientationGroupBox);
        mCounterclockwiseFromEastRadioButton->setObjectName(QStringLiteral("mCounterclockwiseFromEastRadioButton"));

        verticalLayout_2->addWidget(mCounterclockwiseFromEastRadioButton);


        verticalLayout->addWidget(mAngleOrientationGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mXAttributeComboBox, mYAttributeComboBox);
        QWidget::setTabOrder(mYAttributeComboBox, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mScaleSpinBox);
        QWidget::setTabOrder(mScaleSpinBox, mCartesianRadioButton);
        QWidget::setTabOrder(mCartesianRadioButton, mPolarRadioButton);
        QWidget::setTabOrder(mPolarRadioButton, mHeightRadioButton);
        QWidget::setTabOrder(mHeightRadioButton, mDegreesRadioButton);
        QWidget::setTabOrder(mDegreesRadioButton, mRadiansRadioButton);
        QWidget::setTabOrder(mRadiansRadioButton, mClockwiseFromNorthRadioButton);
        QWidget::setTabOrder(mClockwiseFromNorthRadioButton, mCounterclockwiseFromEastRadioButton);

        retranslateUi(WidgetVectorFieldBase);

        QMetaObject::connectSlotsByName(WidgetVectorFieldBase);
    } // setupUi

    void retranslateUi(QWidget *WidgetVectorFieldBase)
    {
        mXAttributeLabel->setText(QApplication::translate("WidgetVectorFieldBase", "X attribute", Q_NULLPTR));
        mYAttributeLabel->setText(QApplication::translate("WidgetVectorFieldBase", "Y attribute", Q_NULLPTR));
        mDistanceUnitLabel->setText(QApplication::translate("WidgetVectorFieldBase", "Distance unit", Q_NULLPTR));
        mScaleLabel->setText(QApplication::translate("WidgetVectorFieldBase", "Scale", Q_NULLPTR));
        mFieldTypeGroupBox->setTitle(QApplication::translate("WidgetVectorFieldBase", "Vector Field Type", Q_NULLPTR));
        mHeightRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Height only", Q_NULLPTR));
        mPolarRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Polar", Q_NULLPTR));
        mCartesianRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Cartesian", Q_NULLPTR));
        mAngleUnitsGroupBox->setTitle(QApplication::translate("WidgetVectorFieldBase", "Angle Units", Q_NULLPTR));
        mDegreesRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Degrees", Q_NULLPTR));
        mRadiansRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Radians", Q_NULLPTR));
        mAngleOrientationGroupBox->setTitle(QApplication::translate("WidgetVectorFieldBase", "Angle Orientation", Q_NULLPTR));
        mClockwiseFromNorthRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Clockwise from north", Q_NULLPTR));
        mCounterclockwiseFromEastRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Counterclockwise from east", Q_NULLPTR));
        Q_UNUSED(WidgetVectorFieldBase);
    } // retranslateUi

};

namespace Ui {
    class WidgetVectorFieldBase: public Ui_WidgetVectorFieldBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_VECTORFIELD_H
