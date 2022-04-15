/********************************************************************************
** Form generated from reading UI file 'widget_drawsource.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DRAWSOURCE_H
#define UI_WIDGET_DRAWSOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetDrawSource
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QLabel *label_30;
    QgsBlendModeComboBox *mBlendCmbBx;
    QLabel *label_28;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QLabel *label;
    QgsOpacityWidget *mOpacityWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetDrawSource)
    {
        if (WidgetDrawSource->objectName().isEmpty())
            WidgetDrawSource->setObjectName(QStringLiteral("WidgetDrawSource"));
        WidgetDrawSource->resize(404, 348);
        WidgetDrawSource->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(WidgetDrawSource);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetDrawSource);
        mShadowFrame->setObjectName(QStringLiteral("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_7->addWidget(label_30, 1, 0, 1, 1);

        mBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mBlendCmbBx->setObjectName(QStringLiteral("mBlendCmbBx"));

        gridLayout_7->addWidget(mBlendCmbBx, 1, 1, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_7->addWidget(label_28, 0, 0, 1, 1);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QStringLiteral("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 2, 1, 1, 1);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 2, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 0, 1, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);

        gridLayout_38->addWidget(mShadowFrame, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mOpacityWidget, mBlendCmbBx);
        QWidget::setTabOrder(mBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetDrawSource);

        QMetaObject::connectSlotsByName(WidgetDrawSource);
    } // setupUi

    void retranslateUi(QWidget *WidgetDrawSource)
    {
        label_30->setText(QApplication::translate("WidgetDrawSource", "Blend mode", Q_NULLPTR));
        label_28->setText(QApplication::translate("WidgetDrawSource", "Opacity", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetDrawSource", "Draw mode", Q_NULLPTR));
        Q_UNUSED(WidgetDrawSource);
    } // retranslateUi

};

namespace Ui {
    class WidgetDrawSource: public Ui_WidgetDrawSource {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DRAWSOURCE_H
