/********************************************************************************
** Form generated from reading UI file 'widget_gradientfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GRADIENTFILL_H
#define UI_WIDGET_GRADIENTFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGradientFill
{
public:
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mGradientTypeDDBtn;
    QgsColorButton *btnChangeColor2;
    QLabel *label_11;
    QgsDoubleSpinBox *spinRefPoint1Y;
    QgsPropertyOverrideButton *mRefPoint2YDDBtn;
    QLabel *label_4;
    QgsPropertyOverrideButton *mStartColorDDBtn;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_6;
    QRadioButton *radioTwoColor;
    QgsPropertyOverrideButton *mRefPoint1YDDBtn;
    QgsPropertyOverrideButton *mRefPoint1CentroidDDBtn;
    QCheckBox *checkRefPoint2Centroid;
    QgsColorRampButton *btnColorRamp;
    QComboBox *cboGradientSpread;
    QgsPropertyOverrideButton *mEndColorDDBtn;
    QLabel *label_3;
    QComboBox *cboGradientType;
    QgsDoubleSpinBox *mSpinAngle;
    QgsDoubleSpinBox *spinRefPoint2Y;
    QRadioButton *radioColorRamp;
    QComboBox *cboCoordinateMode;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QCheckBox *checkRefPoint1Centroid;
    QgsDoubleSpinBox *spinRefPoint1X;
    QgsDoubleSpinBox *spinRefPoint2X;
    QGridLayout *gridLayout_4;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *spinOffsetY;
    QgsDoubleSpinBox *spinOffsetX;
    QgsPropertyOverrideButton *mRefPoint1XDDBtn;
    QgsPropertyOverrideButton *mRefPoint2CentroidDDBtn;
    QgsPropertyOverrideButton *mSpreadDDBtn;
    QgsPropertyOverrideButton *mCoordinateModeDDBtn;
    QgsColorButton *btnChangeColor;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QgsPropertyOverrideButton *mRefPoint2XDDBtn;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetGradientFill)
    {
        if (WidgetGradientFill->objectName().isEmpty())
            WidgetGradientFill->setObjectName(QStringLiteral("WidgetGradientFill"));
        WidgetGradientFill->resize(343, 549);
        WidgetGradientFill->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(WidgetGradientFill);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mGradientTypeDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mGradientTypeDDBtn->setObjectName(QStringLiteral("mGradientTypeDDBtn"));

        gridLayout->addWidget(mGradientTypeDDBtn, 3, 3, 1, 1);

        btnChangeColor2 = new QgsColorButton(WidgetGradientFill);
        btnChangeColor2->setObjectName(QStringLiteral("btnChangeColor2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeColor2->sizePolicy().hasHeightForWidth());
        btnChangeColor2->setSizePolicy(sizePolicy);
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor2, 1, 2, 1, 1);

        label_11 = new QLabel(WidgetGradientFill);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 14, 0, 1, 1);

        spinRefPoint1Y = new QgsDoubleSpinBox(WidgetGradientFill);
        spinRefPoint1Y->setObjectName(QStringLiteral("spinRefPoint1Y"));
        spinRefPoint1Y->setMaximum(1);
        spinRefPoint1Y->setSingleStep(0.2);

        gridLayout->addWidget(spinRefPoint1Y, 7, 2, 1, 1);

        mRefPoint2YDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint2YDDBtn->setObjectName(QStringLiteral("mRefPoint2YDDBtn"));

        gridLayout->addWidget(mRefPoint2YDDBtn, 11, 3, 1, 1);

        label_4 = new QLabel(WidgetGradientFill);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        mStartColorDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mStartColorDDBtn->setObjectName(QStringLiteral("mStartColorDDBtn"));

        gridLayout->addWidget(mStartColorDDBtn, 0, 3, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_12 = new QLabel(WidgetGradientFill);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 0, 1, 1, 1);

        label_13 = new QLabel(WidgetGradientFill);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 1, 1, 1, 1);

        label_6 = new QLabel(WidgetGradientFill);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 2, 1);

        gridLayout_5->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_5, 15, 0, 1, 1);

        radioTwoColor = new QRadioButton(WidgetGradientFill);
        radioTwoColor->setObjectName(QStringLiteral("radioTwoColor"));

        gridLayout->addWidget(radioTwoColor, 0, 0, 2, 1);

        mRefPoint1YDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint1YDDBtn->setObjectName(QStringLiteral("mRefPoint1YDDBtn"));

        gridLayout->addWidget(mRefPoint1YDDBtn, 7, 3, 1, 1);

        mRefPoint1CentroidDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint1CentroidDDBtn->setObjectName(QStringLiteral("mRefPoint1CentroidDDBtn"));

        gridLayout->addWidget(mRefPoint1CentroidDDBtn, 8, 3, 1, 1);

        checkRefPoint2Centroid = new QCheckBox(WidgetGradientFill);
        checkRefPoint2Centroid->setObjectName(QStringLiteral("checkRefPoint2Centroid"));

        gridLayout->addWidget(checkRefPoint2Centroid, 12, 2, 1, 1);

        btnColorRamp = new QgsColorRampButton(WidgetGradientFill);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        sizePolicy.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 2, 2, 1, 1);

        cboGradientSpread = new QComboBox(WidgetGradientFill);
        cboGradientSpread->setObjectName(QStringLiteral("cboGradientSpread"));

        gridLayout->addWidget(cboGradientSpread, 5, 2, 1, 1);

        mEndColorDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mEndColorDDBtn->setObjectName(QStringLiteral("mEndColorDDBtn"));

        gridLayout->addWidget(mEndColorDDBtn, 1, 3, 1, 1);

        label_3 = new QLabel(WidgetGradientFill);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        cboGradientType = new QComboBox(WidgetGradientFill);
        cboGradientType->setObjectName(QStringLiteral("cboGradientType"));

        gridLayout->addWidget(cboGradientType, 3, 2, 1, 1);

        mSpinAngle = new QgsDoubleSpinBox(WidgetGradientFill);
        mSpinAngle->setObjectName(QStringLiteral("mSpinAngle"));
        mSpinAngle->setWrapping(true);
        mSpinAngle->setMinimum(0);
        mSpinAngle->setMaximum(360);
        mSpinAngle->setSingleStep(0.5);

        gridLayout->addWidget(mSpinAngle, 14, 2, 1, 1);

        spinRefPoint2Y = new QgsDoubleSpinBox(WidgetGradientFill);
        spinRefPoint2Y->setObjectName(QStringLiteral("spinRefPoint2Y"));
        spinRefPoint2Y->setMaximum(1);
        spinRefPoint2Y->setSingleStep(0.2);
        spinRefPoint2Y->setValue(1);

        gridLayout->addWidget(spinRefPoint2Y, 11, 2, 1, 1);

        radioColorRamp = new QRadioButton(WidgetGradientFill);
        radioColorRamp->setObjectName(QStringLiteral("radioColorRamp"));

        gridLayout->addWidget(radioColorRamp, 2, 0, 1, 1);

        cboCoordinateMode = new QComboBox(WidgetGradientFill);
        cboCoordinateMode->setObjectName(QStringLiteral("cboCoordinateMode"));

        gridLayout->addWidget(cboCoordinateMode, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 17, 0, 1, 4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_9 = new QLabel(WidgetGradientFill);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_9, 0, 2, 1, 1);

        label_10 = new QLabel(WidgetGradientFill);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_10, 1, 2, 1, 1);

        label_8 = new QLabel(WidgetGradientFill);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        gridLayout_3->addWidget(label_8, 0, 1, 2, 1);

        gridLayout_3->setRowMinimumHeight(0, 1);

        gridLayout->addLayout(gridLayout_3, 10, 0, 2, 1);

        checkRefPoint1Centroid = new QCheckBox(WidgetGradientFill);
        checkRefPoint1Centroid->setObjectName(QStringLiteral("checkRefPoint1Centroid"));

        gridLayout->addWidget(checkRefPoint1Centroid, 8, 2, 1, 1);

        spinRefPoint1X = new QgsDoubleSpinBox(WidgetGradientFill);
        spinRefPoint1X->setObjectName(QStringLiteral("spinRefPoint1X"));
        spinRefPoint1X->setMaximum(1);
        spinRefPoint1X->setSingleStep(0.2);
        spinRefPoint1X->setValue(0.5);

        gridLayout->addWidget(spinRefPoint1X, 6, 2, 1, 1);

        spinRefPoint2X = new QgsDoubleSpinBox(WidgetGradientFill);
        spinRefPoint2X->setObjectName(QStringLiteral("spinRefPoint2X"));
        spinRefPoint2X->setMaximum(1);
        spinRefPoint2X->setSingleStep(0.2);
        spinRefPoint2X->setValue(0.5);

        gridLayout->addWidget(spinRefPoint2X, 10, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetGradientFill);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetGradientFill);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+9);
        spinOffsetY->setMaximum(1e+9);
        spinOffsetY->setSingleStep(0.2);

        gridLayout_4->addWidget(spinOffsetY, 1, 1, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetGradientFill);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        sizePolicy2.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy2);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+9);
        spinOffsetX->setMaximum(1e+9);
        spinOffsetX->setSingleStep(0.2);

        gridLayout_4->addWidget(spinOffsetX, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_4, 15, 2, 1, 1);

        mRefPoint1XDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint1XDDBtn->setObjectName(QStringLiteral("mRefPoint1XDDBtn"));

        gridLayout->addWidget(mRefPoint1XDDBtn, 6, 3, 1, 1);

        mRefPoint2CentroidDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint2CentroidDDBtn->setObjectName(QStringLiteral("mRefPoint2CentroidDDBtn"));

        gridLayout->addWidget(mRefPoint2CentroidDDBtn, 12, 3, 1, 1);

        mSpreadDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mSpreadDDBtn->setObjectName(QStringLiteral("mSpreadDDBtn"));

        gridLayout->addWidget(mSpreadDDBtn, 5, 3, 1, 1);

        mCoordinateModeDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mCoordinateModeDDBtn->setObjectName(QStringLiteral("mCoordinateModeDDBtn"));

        gridLayout->addWidget(mCoordinateModeDDBtn, 4, 3, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetGradientFill);
        btnChangeColor->setObjectName(QStringLiteral("btnChangeColor"));
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor, 0, 2, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mAngleDDBtn->setObjectName(QStringLiteral("mAngleDDBtn"));

        gridLayout->addWidget(mAngleDDBtn, 14, 3, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(WidgetGradientFill);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_7 = new QLabel(WidgetGradientFill);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        label = new QLabel(WidgetGradientFill);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 2, 1);

        gridLayout_2->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_2, 6, 0, 2, 1);

        label_2 = new QLabel(WidgetGradientFill);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        mRefPoint2XDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint2XDDBtn->setObjectName(QStringLiteral("mRefPoint2XDDBtn"));

        gridLayout->addWidget(mRefPoint2XDDBtn, 10, 3, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 15, 3, 1, 1);

        btnChangeColor2->raise();
        btnColorRamp->raise();
        btnChangeColor->raise();
        checkRefPoint1Centroid->raise();
        checkRefPoint2Centroid->raise();
        label_3->raise();
        radioColorRamp->raise();
        label_2->raise();
        radioTwoColor->raise();
        label_4->raise();
        label_11->raise();
        mStartColorDDBtn->raise();
        mEndColorDDBtn->raise();
        mGradientTypeDDBtn->raise();
        mCoordinateModeDDBtn->raise();
        mSpreadDDBtn->raise();
        mAngleDDBtn->raise();
        mRefPoint1CentroidDDBtn->raise();
        mRefPoint2CentroidDDBtn->raise();
        cboGradientType->raise();
        mSpinAngle->raise();
        cboGradientSpread->raise();
        cboCoordinateMode->raise();
        spinRefPoint1X->raise();
        mRefPoint1XDDBtn->raise();
        spinRefPoint1Y->raise();
        mRefPoint1YDDBtn->raise();
        spinRefPoint2X->raise();
        mRefPoint2XDDBtn->raise();
        spinRefPoint2Y->raise();
        mRefPoint2YDDBtn->raise();
        mOffsetDDBtn->raise();
        QWidget::setTabOrder(radioTwoColor, btnChangeColor);
        QWidget::setTabOrder(btnChangeColor, mStartColorDDBtn);
        QWidget::setTabOrder(mStartColorDDBtn, btnChangeColor2);
        QWidget::setTabOrder(btnChangeColor2, mEndColorDDBtn);
        QWidget::setTabOrder(mEndColorDDBtn, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, cboGradientType);
        QWidget::setTabOrder(cboGradientType, mGradientTypeDDBtn);
        QWidget::setTabOrder(mGradientTypeDDBtn, cboCoordinateMode);
        QWidget::setTabOrder(cboCoordinateMode, mCoordinateModeDDBtn);
        QWidget::setTabOrder(mCoordinateModeDDBtn, cboGradientSpread);
        QWidget::setTabOrder(cboGradientSpread, mSpreadDDBtn);
        QWidget::setTabOrder(mSpreadDDBtn, spinRefPoint1X);
        QWidget::setTabOrder(spinRefPoint1X, mRefPoint1XDDBtn);
        QWidget::setTabOrder(mRefPoint1XDDBtn, spinRefPoint1Y);
        QWidget::setTabOrder(spinRefPoint1Y, mRefPoint1YDDBtn);
        QWidget::setTabOrder(mRefPoint1YDDBtn, checkRefPoint1Centroid);
        QWidget::setTabOrder(checkRefPoint1Centroid, mRefPoint1CentroidDDBtn);
        QWidget::setTabOrder(mRefPoint1CentroidDDBtn, spinRefPoint2X);
        QWidget::setTabOrder(spinRefPoint2X, mRefPoint2XDDBtn);
        QWidget::setTabOrder(mRefPoint2XDDBtn, spinRefPoint2Y);
        QWidget::setTabOrder(spinRefPoint2Y, mRefPoint2YDDBtn);
        QWidget::setTabOrder(mRefPoint2YDDBtn, checkRefPoint2Centroid);
        QWidget::setTabOrder(checkRefPoint2Centroid, mRefPoint2CentroidDDBtn);
        QWidget::setTabOrder(mRefPoint2CentroidDDBtn, mSpinAngle);
        QWidget::setTabOrder(mSpinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);

        retranslateUi(WidgetGradientFill);
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor2, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), btnColorRamp, SLOT(setEnabled(bool)));
        QObject::connect(checkRefPoint1Centroid, SIGNAL(toggled(bool)), spinRefPoint1X, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint1Centroid, SIGNAL(toggled(bool)), spinRefPoint1Y, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint2Centroid, SIGNAL(toggled(bool)), spinRefPoint2X, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint2Centroid, SIGNAL(toggled(bool)), spinRefPoint2Y, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(WidgetGradientFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetGradientFill)
    {
        mGradientTypeDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        btnChangeColor2->setText(QString());
        label_11->setText(QApplication::translate("WidgetGradientFill", "Rotation", Q_NULLPTR));
        mRefPoint2YDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetGradientFill", "Spread", Q_NULLPTR));
        mStartColorDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_12->setText(QApplication::translate("WidgetGradientFill", "x", Q_NULLPTR));
        label_13->setText(QApplication::translate("WidgetGradientFill", "y", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetGradientFill", "Offset", Q_NULLPTR));
        radioTwoColor->setText(QApplication::translate("WidgetGradientFill", "Two color", Q_NULLPTR));
        mRefPoint1YDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mRefPoint1CentroidDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        checkRefPoint2Centroid->setText(QApplication::translate("WidgetGradientFill", "Centroid", Q_NULLPTR));
        cboGradientSpread->clear();
        cboGradientSpread->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Pad", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Repeat", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Reflect", Q_NULLPTR)
        );
        mEndColorDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetGradientFill", "Coord mode", Q_NULLPTR));
        cboGradientType->clear();
        cboGradientType->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Linear", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Radial", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Conical", Q_NULLPTR)
        );
        mSpinAngle->setSuffix(QApplication::translate("WidgetGradientFill", " \302\260", Q_NULLPTR));
        radioColorRamp->setText(QApplication::translate("WidgetGradientFill", "Color ramp", Q_NULLPTR));
        cboCoordinateMode->clear();
        cboCoordinateMode->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Object", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Viewport", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("WidgetGradientFill", "x", Q_NULLPTR));
        label_10->setText(QApplication::translate("WidgetGradientFill", "y", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetGradientFill", "Reference point 2", Q_NULLPTR));
        checkRefPoint1Centroid->setText(QApplication::translate("WidgetGradientFill", "Centroid", Q_NULLPTR));
        mRefPoint1XDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mRefPoint2CentroidDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mSpreadDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mCoordinateModeDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        btnChangeColor->setText(QString());
        mAngleDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetGradientFill", "x", Q_NULLPTR));
        label_7->setText(QApplication::translate("WidgetGradientFill", "y", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetGradientFill", "Reference point 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetGradientFill", "Gradient type", Q_NULLPTR));
        mRefPoint2XDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetGradientFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetGradientFill: public Ui_WidgetGradientFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_GRADIENTFILL_H
