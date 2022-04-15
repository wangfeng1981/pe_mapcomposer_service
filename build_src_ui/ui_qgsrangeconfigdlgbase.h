/********************************************************************************
** Form generated from reading UI file 'qgsrangeconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRANGECONFIGDLGBASE_H
#define UI_QGSRANGECONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRangeConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QLabel *rangeLabel;
    QgsCollapsibleGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *suffixLabel;
    QLineEdit *suffixLineEdit;
    QLabel *precisionLabel;
    QgsSpinBox *precisionSpinBox;
    QComboBox *rangeWidget;
    QSpacerItem *verticalSpacer;
    QLabel *valuesLabel;
    QStackedWidget *rangeStackedWidget;
    QWidget *intPage;
    QFormLayout *formLayout;
    QLabel *minimumLabel;
    QgsSpinBox *minimumSpinBox;
    QLabel *maximumLabel;
    QgsSpinBox *maximumSpinBox;
    QLabel *stepLabel;
    QgsSpinBox *stepSpinBox;
    QWidget *doublePage;
    QFormLayout *formLayout_2;
    QLabel *stepLabel_2;
    QLabel *maximumLabel_2;
    QLabel *minimumLabel_2;
    QgsDoubleSpinBox *minimumDoubleSpinBox;
    QgsDoubleSpinBox *maximumDoubleSpinBox;
    QgsDoubleSpinBox *stepDoubleSpinBox;
    QCheckBox *allowNullCheckBox;

    void setupUi(QWidget *QgsRangeConfigDlgBase)
    {
        if (QgsRangeConfigDlgBase->objectName().isEmpty())
            QgsRangeConfigDlgBase->setObjectName(QStringLiteral("QgsRangeConfigDlgBase"));
        QgsRangeConfigDlgBase->resize(549, 333);
        QgsRangeConfigDlgBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsRangeConfigDlgBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rangeLabel = new QLabel(QgsRangeConfigDlgBase);
        rangeLabel->setObjectName(QStringLiteral("rangeLabel"));
        rangeLabel->setWordWrap(true);

        gridLayout->addWidget(rangeLabel, 0, 0, 1, 2);

        groupBox = new QgsCollapsibleGroupBox(QgsRangeConfigDlgBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        suffixLabel = new QLabel(groupBox);
        suffixLabel->setObjectName(QStringLiteral("suffixLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, suffixLabel);

        suffixLineEdit = new QLineEdit(groupBox);
        suffixLineEdit->setObjectName(QStringLiteral("suffixLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, suffixLineEdit);

        precisionLabel = new QLabel(groupBox);
        precisionLabel->setObjectName(QStringLiteral("precisionLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, precisionLabel);

        precisionSpinBox = new QgsSpinBox(groupBox);
        precisionSpinBox->setObjectName(QStringLiteral("precisionSpinBox"));
        precisionSpinBox->setValue(4);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, precisionSpinBox);


        gridLayout->addWidget(groupBox, 4, 0, 1, 1);

        rangeWidget = new QComboBox(QgsRangeConfigDlgBase);
        rangeWidget->setObjectName(QStringLiteral("rangeWidget"));

        gridLayout->addWidget(rangeWidget, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        valuesLabel = new QLabel(QgsRangeConfigDlgBase);
        valuesLabel->setObjectName(QStringLiteral("valuesLabel"));
        valuesLabel->setWordWrap(true);

        gridLayout->addWidget(valuesLabel, 5, 0, 1, 1);

        rangeStackedWidget = new QStackedWidget(QgsRangeConfigDlgBase);
        rangeStackedWidget->setObjectName(QStringLiteral("rangeStackedWidget"));
        intPage = new QWidget();
        intPage->setObjectName(QStringLiteral("intPage"));
        formLayout = new QFormLayout(intPage);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 3);
        minimumLabel = new QLabel(intPage);
        minimumLabel->setObjectName(QStringLiteral("minimumLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumLabel);

        minimumSpinBox = new QgsSpinBox(intPage);
        minimumSpinBox->setObjectName(QStringLiteral("minimumSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, minimumSpinBox);

        maximumLabel = new QLabel(intPage);
        maximumLabel->setObjectName(QStringLiteral("maximumLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumLabel);

        maximumSpinBox = new QgsSpinBox(intPage);
        maximumSpinBox->setObjectName(QStringLiteral("maximumSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, maximumSpinBox);

        stepLabel = new QLabel(intPage);
        stepLabel->setObjectName(QStringLiteral("stepLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, stepLabel);

        stepSpinBox = new QgsSpinBox(intPage);
        stepSpinBox->setObjectName(QStringLiteral("stepSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, stepSpinBox);

        rangeStackedWidget->addWidget(intPage);
        doublePage = new QWidget();
        doublePage->setObjectName(QStringLiteral("doublePage"));
        formLayout_2 = new QFormLayout(doublePage);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, -1, 3);
        stepLabel_2 = new QLabel(doublePage);
        stepLabel_2->setObjectName(QStringLiteral("stepLabel_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, stepLabel_2);

        maximumLabel_2 = new QLabel(doublePage);
        maximumLabel_2->setObjectName(QStringLiteral("maximumLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, maximumLabel_2);

        minimumLabel_2 = new QLabel(doublePage);
        minimumLabel_2->setObjectName(QStringLiteral("minimumLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, minimumLabel_2);

        minimumDoubleSpinBox = new QgsDoubleSpinBox(doublePage);
        minimumDoubleSpinBox->setObjectName(QStringLiteral("minimumDoubleSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, minimumDoubleSpinBox);

        maximumDoubleSpinBox = new QgsDoubleSpinBox(doublePage);
        maximumDoubleSpinBox->setObjectName(QStringLiteral("maximumDoubleSpinBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, maximumDoubleSpinBox);

        stepDoubleSpinBox = new QgsDoubleSpinBox(doublePage);
        stepDoubleSpinBox->setObjectName(QStringLiteral("stepDoubleSpinBox"));
        stepDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, stepDoubleSpinBox);

        rangeStackedWidget->addWidget(doublePage);

        gridLayout->addWidget(rangeStackedWidget, 2, 0, 1, 1);

        allowNullCheckBox = new QCheckBox(QgsRangeConfigDlgBase);
        allowNullCheckBox->setObjectName(QStringLiteral("allowNullCheckBox"));

        gridLayout->addWidget(allowNullCheckBox, 3, 0, 1, 1);

        QWidget::setTabOrder(rangeWidget, minimumSpinBox);
        QWidget::setTabOrder(minimumSpinBox, maximumSpinBox);
        QWidget::setTabOrder(maximumSpinBox, stepSpinBox);
        QWidget::setTabOrder(stepSpinBox, minimumDoubleSpinBox);
        QWidget::setTabOrder(minimumDoubleSpinBox, maximumDoubleSpinBox);
        QWidget::setTabOrder(maximumDoubleSpinBox, stepDoubleSpinBox);
        QWidget::setTabOrder(stepDoubleSpinBox, allowNullCheckBox);
        QWidget::setTabOrder(allowNullCheckBox, groupBox);
        QWidget::setTabOrder(groupBox, suffixLineEdit);

        retranslateUi(QgsRangeConfigDlgBase);

        rangeStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsRangeConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRangeConfigDlgBase)
    {
        rangeLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Allows setting of numeric values from a specified range. The edit widget can be either a slider or a spin box.", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsRangeConfigDlgBase", "Advanced Options", Q_NULLPTR));
        suffixLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Suffix", Q_NULLPTR));
        suffixLineEdit->setPlaceholderText(QApplication::translate("QgsRangeConfigDlgBase", "Inactive", Q_NULLPTR));
        precisionLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Precision", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        precisionSpinBox->setToolTip(QApplication::translate("QgsRangeConfigDlgBase", "Number of decimal places", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        valuesLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Local minimum/maximum = 0/0", Q_NULLPTR));
        minimumLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Minimum", Q_NULLPTR));
        maximumLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Maximum", Q_NULLPTR));
        stepLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Step", Q_NULLPTR));
        stepLabel_2->setText(QApplication::translate("QgsRangeConfigDlgBase", "Step", Q_NULLPTR));
        maximumLabel_2->setText(QApplication::translate("QgsRangeConfigDlgBase", "Maximum", Q_NULLPTR));
        minimumLabel_2->setText(QApplication::translate("QgsRangeConfigDlgBase", "Minimum", Q_NULLPTR));
        allowNullCheckBox->setText(QApplication::translate("QgsRangeConfigDlgBase", "Allow NULL", Q_NULLPTR));
        Q_UNUSED(QgsRangeConfigDlgBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRangeConfigDlgBase: public Ui_QgsRangeConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRANGECONFIGDLGBASE_H
