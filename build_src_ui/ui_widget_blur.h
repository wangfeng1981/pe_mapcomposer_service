/********************************************************************************
** Form generated from reading UI file 'widget_blur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_BLUR_H
#define UI_WIDGET_BLUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgsunitselectionwidget.h>
#include "qgsblendmodecombobox.h"
#include "qgsdoublespinbox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetBlur
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QComboBox *mBlurTypeCombo;
    QLabel *label_28;
    QLabel *label_30;
    QgsBlendModeComboBox *mBlendCmbBx;
    QgsDoubleSpinBox *mBlurStrengthSpnBx;
    QgsUnitSelectionWidget *mBlurUnitWidget;
    QLabel *label;
    QLabel *label_27;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QLabel *label_2;
    QgsOpacityWidget *mOpacityWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetBlur)
    {
        if (WidgetBlur->objectName().isEmpty())
            WidgetBlur->setObjectName(QStringLiteral("WidgetBlur"));
        WidgetBlur->resize(404, 348);
        WidgetBlur->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(WidgetBlur);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetBlur);
        mShadowFrame->setObjectName(QStringLiteral("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mBlurTypeCombo = new QComboBox(mShadowFrame);
        mBlurTypeCombo->setObjectName(QStringLiteral("mBlurTypeCombo"));

        gridLayout_7->addWidget(mBlurTypeCombo, 0, 1, 1, 2);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_7->addWidget(label_28, 2, 0, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_7->addWidget(label_30, 3, 0, 1, 1);

        mBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mBlendCmbBx->setObjectName(QStringLiteral("mBlendCmbBx"));

        gridLayout_7->addWidget(mBlendCmbBx, 3, 1, 1, 2);

        mBlurStrengthSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mBlurStrengthSpnBx->setObjectName(QStringLiteral("mBlurStrengthSpnBx"));
        mBlurStrengthSpnBx->setDecimals(4);
        mBlurStrengthSpnBx->setMinimum(0);
        mBlurStrengthSpnBx->setMaximum(1e+7);
        mBlurStrengthSpnBx->setSingleStep(0.2);
        mBlurStrengthSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mBlurStrengthSpnBx, 1, 1, 1, 1);

        mBlurUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mBlurUnitWidget->setObjectName(QStringLiteral("mBlurUnitWidget"));
        mBlurUnitWidget->setMinimumSize(QSize(0, 0));
        mBlurUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mBlurUnitWidget, 1, 2, 1, 1);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_7->addWidget(label_27, 1, 0, 1, 1);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QStringLiteral("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 4, 1, 1, 2);

        label_2 = new QLabel(mShadowFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 4, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 2, 1, 1, 2);


        gridLayout_38->addWidget(mShadowFrame, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mBlurTypeCombo, mBlurStrengthSpnBx);
        QWidget::setTabOrder(mBlurStrengthSpnBx, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendCmbBx);
        QWidget::setTabOrder(mBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetBlur);

        QMetaObject::connectSlotsByName(WidgetBlur);
    } // setupUi

    void retranslateUi(QWidget *WidgetBlur)
    {
        label_28->setText(QApplication::translate("WidgetBlur", "Opacity", Q_NULLPTR));
        label_30->setText(QApplication::translate("WidgetBlur", "Blend mode", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetBlur", "Blur type", Q_NULLPTR));
        label_27->setText(QApplication::translate("WidgetBlur", "Blur strength", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetBlur", "Draw mode", Q_NULLPTR));
        Q_UNUSED(WidgetBlur);
    } // retranslateUi

};

namespace Ui {
    class WidgetBlur: public Ui_WidgetBlur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_BLUR_H
