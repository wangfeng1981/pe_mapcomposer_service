/********************************************************************************
** Form generated from reading UI file 'qgs25drendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGS25DRENDERERWIDGETBASE_H
#define UI_QGS25DRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Qgs25DRendererWidgetBase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *mAdvancedConfigurationBox;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QgsColorButton *mRoofColorButton;
    QLabel *label_4;
    QgsColorButton *mWallColorButton;
    QCheckBox *mWallExpositionShading;
    QGroupBox *mShadowEnabledWidget;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QgsColorButton *mShadowColorButton;
    QgsDoubleSpinBox *mShadowSizeWidget;
    QLabel *label_6;
    QgsFieldExpressionWidget *mHeightWidget;
    QgsSpinBox *mAngleWidget;
    QLabel *label_7;

    void setupUi(QWidget *Qgs25DRendererWidgetBase)
    {
        if (Qgs25DRendererWidgetBase->objectName().isEmpty())
            Qgs25DRendererWidgetBase->setObjectName(QStringLiteral("Qgs25DRendererWidgetBase"));
        Qgs25DRendererWidgetBase->resize(657, 587);
        Qgs25DRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        formLayout = new QFormLayout(Qgs25DRendererWidgetBase);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Qgs25DRendererWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(Qgs25DRendererWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mAdvancedConfigurationBox = new QGroupBox(Qgs25DRendererWidgetBase);
        mAdvancedConfigurationBox->setObjectName(QStringLiteral("mAdvancedConfigurationBox"));
        formLayout_2 = new QFormLayout(mAdvancedConfigurationBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(mAdvancedConfigurationBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        mRoofColorButton = new QgsColorButton(mAdvancedConfigurationBox);
        mRoofColorButton->setObjectName(QStringLiteral("mRoofColorButton"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mRoofColorButton);

        label_4 = new QLabel(mAdvancedConfigurationBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        mWallColorButton = new QgsColorButton(mAdvancedConfigurationBox);
        mWallColorButton->setObjectName(QStringLiteral("mWallColorButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mWallColorButton);

        mWallExpositionShading = new QCheckBox(mAdvancedConfigurationBox);
        mWallExpositionShading->setObjectName(QStringLiteral("mWallExpositionShading"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, mWallExpositionShading);

        mShadowEnabledWidget = new QGroupBox(mAdvancedConfigurationBox);
        mShadowEnabledWidget->setObjectName(QStringLiteral("mShadowEnabledWidget"));
        mShadowEnabledWidget->setCheckable(true);
        formLayout_3 = new QFormLayout(mShadowEnabledWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_5 = new QLabel(mShadowEnabledWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        mShadowColorButton = new QgsColorButton(mShadowEnabledWidget);
        mShadowColorButton->setObjectName(QStringLiteral("mShadowColorButton"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mShadowColorButton);

        mShadowSizeWidget = new QgsDoubleSpinBox(mShadowEnabledWidget);
        mShadowSizeWidget->setObjectName(QStringLiteral("mShadowSizeWidget"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mShadowSizeWidget);

        label_6 = new QLabel(mShadowEnabledWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);


        formLayout_2->setWidget(4, QFormLayout::SpanningRole, mShadowEnabledWidget);


        formLayout->setWidget(2, QFormLayout::SpanningRole, mAdvancedConfigurationBox);

        mHeightWidget = new QgsFieldExpressionWidget(Qgs25DRendererWidgetBase);
        mHeightWidget->setObjectName(QStringLiteral("mHeightWidget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mHeightWidget);

        mAngleWidget = new QgsSpinBox(Qgs25DRendererWidgetBase);
        mAngleWidget->setObjectName(QStringLiteral("mAngleWidget"));
        mAngleWidget->setWrapping(true);
        mAngleWidget->setMinimum(-360);
        mAngleWidget->setMaximum(359);

        formLayout->setWidget(1, QFormLayout::FieldRole, mAngleWidget);

        label_7 = new QLabel(Qgs25DRendererWidgetBase);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::SpanningRole, label_7);


        retranslateUi(Qgs25DRendererWidgetBase);

        QMetaObject::connectSlotsByName(Qgs25DRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *Qgs25DRendererWidgetBase)
    {
        label->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Height", Q_NULLPTR));
        label_2->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Angle", Q_NULLPTR));
        mAdvancedConfigurationBox->setTitle(QApplication::translate("Qgs25DRendererWidgetBase", "Advanced Configuration", Q_NULLPTR));
        label_3->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Roof color", Q_NULLPTR));
        mRoofColorButton->setProperty("text", QVariant(QApplication::translate("Qgs25DRendererWidgetBase", "\342\200\246", Q_NULLPTR)));
        label_4->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Wall color", Q_NULLPTR));
        mWallColorButton->setText(QApplication::translate("Qgs25DRendererWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mWallExpositionShading->setToolTip(QApplication::translate("Qgs25DRendererWidgetBase", "<html><head/><body><p>Walls will have a different color based on their aspect to make them appear to differently reflect the solar radiation.</p><p><br/></p><p>If this option is enabled, make sure that <span style=\" font-style:italic;\">simplification </span>is disabled on the rendering tab or some colors may be wrong at small scales.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWallExpositionShading->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Shade walls based on aspect", Q_NULLPTR));
        mShadowEnabledWidget->setTitle(QApplication::translate("Qgs25DRendererWidgetBase", "Shadow", Q_NULLPTR));
        label_5->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Color", Q_NULLPTR));
        mShadowColorButton->setText(QApplication::translate("Qgs25DRendererWidgetBase", "\342\200\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("Qgs25DRendererWidgetBase", "Size", Q_NULLPTR));
        mAngleWidget->setSuffix(QApplication::translate("Qgs25DRendererWidgetBase", "\302\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("Qgs25DRendererWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Advanced Styling</span><br/>This page helps to configure the 2.5D effect as easily as possible with some basic parameters.</p><p>Once you have finished the basic styling, you can convert this to another renderer (single, categorized, graduated) and fine-tune the appearance to your liking.</p><p><span style=\" font-weight:600;\">Overlay problems</span></p><p>Features are rendered based on their distance to the camera. It is sometimes possible that parts of a feature are in front of another feature by mistake. This happens if any part of the overlapped feature is closer to the camera than the overlapping feature.</p><p>In such cases you can avoid rendering problems by cutting the feature in front into smaller pieces.</p></body></html>", Q_NULLPTR));
        Q_UNUSED(Qgs25DRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class Qgs25DRendererWidgetBase: public Ui_Qgs25DRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGS25DRENDERERWIDGETBASE_H
