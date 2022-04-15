/********************************************************************************
** Form generated from reading UI file 'widget_layerproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_LAYERPROPERTIES_H
#define UI_WIDGET_LAYERPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgseffectstackpropertieswidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_LayerPropertiesWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboLayerType;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mEnabledCheckBox;
    QgsPropertyOverrideButton *mEnabledDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsEffectStackCompactWidget *mEffectWidget;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *LayerPropertiesWidget)
    {
        if (LayerPropertiesWidget->objectName().isEmpty())
            LayerPropertiesWidget->setObjectName(QStringLiteral("LayerPropertiesWidget"));
        LayerPropertiesWidget->resize(335, 439);
        LayerPropertiesWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(LayerPropertiesWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LayerPropertiesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cboLayerType = new QComboBox(LayerPropertiesWidget);
        cboLayerType->setObjectName(QStringLiteral("cboLayerType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboLayerType->sizePolicy().hasHeightForWidth());
        cboLayerType->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cboLayerType);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(LayerPropertiesWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QStringLiteral("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        mEnabledCheckBox = new QCheckBox(LayerPropertiesWidget);
        mEnabledCheckBox->setObjectName(QStringLiteral("mEnabledCheckBox"));

        horizontalLayout_3->addWidget(mEnabledCheckBox);

        mEnabledDDBtn = new QgsPropertyOverrideButton(LayerPropertiesWidget);
        mEnabledDDBtn->setObjectName(QStringLiteral("mEnabledDDBtn"));

        horizontalLayout_3->addWidget(mEnabledDDBtn);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        mEffectWidget = new QgsEffectStackCompactWidget(LayerPropertiesWidget);
        mEffectWidget->setObjectName(QStringLiteral("mEffectWidget"));

        horizontalLayout_2->addWidget(mEffectWidget);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        retranslateUi(LayerPropertiesWidget);

        QMetaObject::connectSlotsByName(LayerPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *LayerPropertiesWidget)
    {
        label->setText(QApplication::translate("LayerPropertiesWidget", "Symbol layer type", Q_NULLPTR));
        label_2->setText(QApplication::translate("LayerPropertiesWidget", "This layer doesn't have any editable properties", Q_NULLPTR));
        mEnabledCheckBox->setText(QApplication::translate("LayerPropertiesWidget", "Enable symbol layer", Q_NULLPTR));
        mEnabledDDBtn->setText(QApplication::translate("LayerPropertiesWidget", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(LayerPropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class LayerPropertiesWidget: public Ui_LayerPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LAYERPROPERTIES_H
