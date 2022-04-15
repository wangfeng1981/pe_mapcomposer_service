/********************************************************************************
** Form generated from reading UI file 'widget_glow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GLOW_H
#define UI_WIDGET_GLOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGlow
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QRadioButton *radioColorRamp;
    QLabel *label_9;
    QLabel *label_27;
    QLabel *label_28;
    QRadioButton *radioSingleColor;
    QLabel *label_30;
    QgsDoubleSpinBox *mSpreadSpnBx;
    QgsUnitSelectionWidget *mSpreadUnitWidget;
    QgsDoubleSpinBox *mBlurRadiusSpnBx;
    QgsUnitSelectionWidget *mBlurUnitWidget;
    QgsColorRampButton *btnColorRamp;
    QgsBlendModeComboBox *mBlendCmbBx;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QLabel *label;
    QgsOpacityWidget *mOpacityWidget;
    QgsColorButton *mColorBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetGlow)
    {
        if (WidgetGlow->objectName().isEmpty())
            WidgetGlow->setObjectName(QStringLiteral("WidgetGlow"));
        WidgetGlow->resize(553, 367);
        WidgetGlow->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(WidgetGlow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetGlow);
        mShadowFrame->setObjectName(QStringLiteral("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        radioColorRamp = new QRadioButton(mShadowFrame);
        radioColorRamp->setObjectName(QStringLiteral("radioColorRamp"));

        gridLayout_7->addWidget(radioColorRamp, 4, 0, 1, 1);

        label_9 = new QLabel(mShadowFrame);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_7->addWidget(label_27, 1, 0, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_7->addWidget(label_28, 2, 0, 1, 1);

        radioSingleColor = new QRadioButton(mShadowFrame);
        radioSingleColor->setObjectName(QStringLiteral("radioSingleColor"));

        gridLayout_7->addWidget(radioSingleColor, 3, 0, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_7->addWidget(label_30, 5, 0, 1, 1);

        mSpreadSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mSpreadSpnBx->setObjectName(QStringLiteral("mSpreadSpnBx"));
        mSpreadSpnBx->setDecimals(4);
        mSpreadSpnBx->setMinimum(0);
        mSpreadSpnBx->setMaximum(1e+7);
        mSpreadSpnBx->setSingleStep(0.2);
        mSpreadSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mSpreadSpnBx, 0, 1, 1, 1);

        mSpreadUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mSpreadUnitWidget->setObjectName(QStringLiteral("mSpreadUnitWidget"));
        mSpreadUnitWidget->setMinimumSize(QSize(0, 0));
        mSpreadUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mSpreadUnitWidget, 0, 2, 1, 1);

        mBlurRadiusSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mBlurRadiusSpnBx->setObjectName(QStringLiteral("mBlurRadiusSpnBx"));
        mBlurRadiusSpnBx->setDecimals(4);
        mBlurRadiusSpnBx->setMinimum(0);
        mBlurRadiusSpnBx->setMaximum(1e+7);
        mBlurRadiusSpnBx->setSingleStep(0.2);
        mBlurRadiusSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mBlurRadiusSpnBx, 1, 1, 1, 1);

        mBlurUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mBlurUnitWidget->setObjectName(QStringLiteral("mBlurUnitWidget"));
        mBlurUnitWidget->setMinimumSize(QSize(0, 0));
        mBlurUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mBlurUnitWidget, 1, 2, 1, 1);

        btnColorRamp = new QgsColorRampButton(mShadowFrame);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(btnColorRamp, 4, 1, 1, 2);

        mBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mBlendCmbBx->setObjectName(QStringLiteral("mBlendCmbBx"));

        gridLayout_7->addWidget(mBlendCmbBx, 5, 1, 1, 2);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QStringLiteral("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 6, 1, 1, 2);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 6, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 2, 1, 1, 2);

        mColorBtn = new QgsColorButton(mShadowFrame);
        mColorBtn->setObjectName(QStringLiteral("mColorBtn"));
        sizePolicy.setHeightForWidth(mColorBtn->sizePolicy().hasHeightForWidth());
        mColorBtn->setSizePolicy(sizePolicy);
        mColorBtn->setMinimumSize(QSize(120, 0));

        gridLayout_7->addWidget(mColorBtn, 3, 1, 1, 2);

        gridLayout_7->setColumnStretch(1, 1);

        gridLayout_38->addWidget(mShadowFrame, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mSpreadSpnBx, mSpreadUnitWidget);
        QWidget::setTabOrder(mSpreadUnitWidget, mBlurRadiusSpnBx);
        QWidget::setTabOrder(mBlurRadiusSpnBx, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, radioSingleColor);
        QWidget::setTabOrder(radioSingleColor, mColorBtn);
        QWidget::setTabOrder(mColorBtn, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, mBlendCmbBx);
        QWidget::setTabOrder(mBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetGlow);
        QObject::connect(radioSingleColor, SIGNAL(toggled(bool)), mColorBtn, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), btnColorRamp, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WidgetGlow);
    } // setupUi

    void retranslateUi(QWidget *WidgetGlow)
    {
        radioColorRamp->setText(QApplication::translate("WidgetGlow", "Color ramp", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetGlow", "Spread", Q_NULLPTR));
        label_27->setText(QApplication::translate("WidgetGlow", "Blur radius", Q_NULLPTR));
        label_28->setText(QApplication::translate("WidgetGlow", "Opacity", Q_NULLPTR));
        radioSingleColor->setText(QApplication::translate("WidgetGlow", "Single color", Q_NULLPTR));
        label_30->setText(QApplication::translate("WidgetGlow", "Blend mode", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetGlow", "Draw mode", Q_NULLPTR));
        Q_UNUSED(WidgetGlow);
    } // retranslateUi

};

namespace Ui {
    class WidgetGlow: public Ui_WidgetGlow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_GLOW_H
