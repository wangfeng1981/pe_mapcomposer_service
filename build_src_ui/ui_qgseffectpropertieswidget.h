/********************************************************************************
** Form generated from reading UI file 'qgseffectpropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEFFECTPROPERTIESWIDGET_H
#define UI_QGSEFFECTPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EffectPropertiesWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mEffectTypeCombo;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;

    void setupUi(QWidget *EffectPropertiesWidget)
    {
        if (EffectPropertiesWidget->objectName().isEmpty())
            EffectPropertiesWidget->setObjectName(QStringLiteral("EffectPropertiesWidget"));
        EffectPropertiesWidget->resize(330, 439);
        EffectPropertiesWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(EffectPropertiesWidget);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(EffectPropertiesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mEffectTypeCombo = new QComboBox(EffectPropertiesWidget);
        mEffectTypeCombo->setObjectName(QStringLiteral("mEffectTypeCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEffectTypeCombo->sizePolicy().hasHeightForWidth());
        mEffectTypeCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mEffectTypeCombo);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(EffectPropertiesWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QStringLiteral("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(EffectPropertiesWidget);

        QMetaObject::connectSlotsByName(EffectPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *EffectPropertiesWidget)
    {
        label->setText(QApplication::translate("EffectPropertiesWidget", "Effect type", Q_NULLPTR));
        label_2->setText(QApplication::translate("EffectPropertiesWidget", "This effect doesn't have any editable properties", Q_NULLPTR));
        Q_UNUSED(EffectPropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class EffectPropertiesWidget: public Ui_EffectPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEFFECTPROPERTIESWIDGET_H
