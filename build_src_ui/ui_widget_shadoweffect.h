/********************************************************************************
** Form generated from reading UI file 'widget_shadoweffect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SHADOWEFFECT_H
#define UI_WIDGET_SHADOWEFFECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetShadowEffect
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QgsDoubleSpinBox *mShadowOffsetSpnBx;
    QLabel *label_33;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_28;
    QLabel *label_9;
    QLabel *label_30;
    QLabel *label_27;
    QgsBlendModeComboBox *mShadowBlendCmbBx;
    QgsDoubleSpinBox *mShadowRadiuSpnBx;
    QgsUnitSelectionWidget *mBlurUnitWidget;
    QHBoxLayout *horizontalLayout_24;
    QDial *mShadowOffsetAngleDial;
    QgsSpinBox *mShadowOffsetAngleSpnBx;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QLabel *label;
    QgsOpacityWidget *mOpacityWidget;
    QgsColorButton *mShadowColorBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetShadowEffect)
    {
        if (WidgetShadowEffect->objectName().isEmpty())
            WidgetShadowEffect->setObjectName(QStringLiteral("WidgetShadowEffect"));
        WidgetShadowEffect->resize(443, 367);
        WidgetShadowEffect->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(WidgetShadowEffect);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetShadowEffect);
        mShadowFrame->setObjectName(QStringLiteral("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mShadowOffsetSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowOffsetSpnBx->setObjectName(QStringLiteral("mShadowOffsetSpnBx"));
        mShadowOffsetSpnBx->setDecimals(4);
        mShadowOffsetSpnBx->setMinimum(0);
        mShadowOffsetSpnBx->setMaximum(1e+7);
        mShadowOffsetSpnBx->setSingleStep(0.2);
        mShadowOffsetSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowOffsetSpnBx, 1, 1, 1, 1);

        label_33 = new QLabel(mShadowFrame);
        label_33->setObjectName(QStringLiteral("label_33"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_33, 4, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOffsetUnitWidget, 1, 2, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_7->addWidget(label_28, 3, 0, 1, 1);

        label_9 = new QLabel(mShadowFrame);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_7->addWidget(label_30, 5, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_7->addWidget(label_27, 2, 0, 1, 1);

        mShadowBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mShadowBlendCmbBx->setObjectName(QStringLiteral("mShadowBlendCmbBx"));

        gridLayout_7->addWidget(mShadowBlendCmbBx, 5, 1, 1, 2);

        mShadowRadiuSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowRadiuSpnBx->setObjectName(QStringLiteral("mShadowRadiuSpnBx"));
        mShadowRadiuSpnBx->setDecimals(4);
        mShadowRadiuSpnBx->setMinimum(0);
        mShadowRadiuSpnBx->setMaximum(1e+7);
        mShadowRadiuSpnBx->setSingleStep(0.2);
        mShadowRadiuSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowRadiuSpnBx, 2, 1, 1, 1);

        mBlurUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mBlurUnitWidget->setObjectName(QStringLiteral("mBlurUnitWidget"));
        mBlurUnitWidget->setMinimumSize(QSize(0, 0));
        mBlurUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mBlurUnitWidget, 2, 2, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        mShadowOffsetAngleDial = new QDial(mShadowFrame);
        mShadowOffsetAngleDial->setObjectName(QStringLiteral("mShadowOffsetAngleDial"));
        mShadowOffsetAngleDial->setMinimumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMaximumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMinimum(-180);
        mShadowOffsetAngleDial->setMaximum(180);
        mShadowOffsetAngleDial->setValue(0);
        mShadowOffsetAngleDial->setInvertedControls(true);
        mShadowOffsetAngleDial->setWrapping(true);

        horizontalLayout_24->addWidget(mShadowOffsetAngleDial);

        mShadowOffsetAngleSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowOffsetAngleSpnBx->setObjectName(QStringLiteral("mShadowOffsetAngleSpnBx"));
        mShadowOffsetAngleSpnBx->setWrapping(true);
        mShadowOffsetAngleSpnBx->setMinimum(-360);
        mShadowOffsetAngleSpnBx->setMaximum(360);
        mShadowOffsetAngleSpnBx->setProperty("showClearButton", QVariant(false));

        horizontalLayout_24->addWidget(mShadowOffsetAngleSpnBx);


        gridLayout_7->addLayout(horizontalLayout_24, 0, 1, 1, 2);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QStringLiteral("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 6, 1, 1, 2);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 6, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 3, 1, 1, 2);

        mShadowColorBtn = new QgsColorButton(mShadowFrame);
        mShadowColorBtn->setObjectName(QStringLiteral("mShadowColorBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mShadowColorBtn->sizePolicy().hasHeightForWidth());
        mShadowColorBtn->setSizePolicy(sizePolicy1);
        mShadowColorBtn->setMinimumSize(QSize(120, 0));

        gridLayout_7->addWidget(mShadowColorBtn, 4, 1, 1, 2);


        gridLayout_38->addWidget(mShadowFrame, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mShadowOffsetAngleDial, mShadowOffsetAngleSpnBx);
        QWidget::setTabOrder(mShadowOffsetAngleSpnBx, mShadowOffsetSpnBx);
        QWidget::setTabOrder(mShadowOffsetSpnBx, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mShadowRadiuSpnBx);
        QWidget::setTabOrder(mShadowRadiuSpnBx, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mShadowColorBtn);
        QWidget::setTabOrder(mShadowColorBtn, mShadowBlendCmbBx);
        QWidget::setTabOrder(mShadowBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetShadowEffect);

        QMetaObject::connectSlotsByName(WidgetShadowEffect);
    } // setupUi

    void retranslateUi(QWidget *WidgetShadowEffect)
    {
        label_33->setText(QApplication::translate("WidgetShadowEffect", "Color", Q_NULLPTR));
        label_28->setText(QApplication::translate("WidgetShadowEffect", "Opacity", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetShadowEffect", "Offset", Q_NULLPTR));
        label_30->setText(QApplication::translate("WidgetShadowEffect", "Blend mode", Q_NULLPTR));
        label_27->setText(QApplication::translate("WidgetShadowEffect", "Blur radius", Q_NULLPTR));
        mShadowOffsetAngleSpnBx->setSuffix(QApplication::translate("WidgetShadowEffect", "\313\232", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetShadowEffect", "Draw mode", Q_NULLPTR));
        Q_UNUSED(WidgetShadowEffect);
    } // retranslateUi

};

namespace Ui {
    class WidgetShadowEffect: public Ui_WidgetShadowEffect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SHADOWEFFECT_H
