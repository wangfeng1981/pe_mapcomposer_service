/********************************************************************************
** Form generated from reading UI file 'qgspropertygenericnumericassistantwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROPERTYGENERICNUMERICASSISTANTWIDGET_H
#define UI_QGSPROPERTYGENERICNUMERICASSISTANTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyGenericNumericAssistant
{
public:
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *maxOutputSpinBox;
    QLabel *mLabelMinOutput;
    QLabel *mLabelNullOutput;
    QLabel *mExponentLabel;
    QgsDoubleSpinBox *nullOutputSpinBox;
    QgsDoubleSpinBox *exponentSpinBox;
    QLabel *label_6;
    QgsDoubleSpinBox *minOutputSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PropertyGenericNumericAssistant)
    {
        if (PropertyGenericNumericAssistant->objectName().isEmpty())
            PropertyGenericNumericAssistant->setObjectName(QStringLiteral("PropertyGenericNumericAssistant"));
        PropertyGenericNumericAssistant->resize(288, 192);
        gridLayout_2 = new QGridLayout(PropertyGenericNumericAssistant);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        maxOutputSpinBox = new QgsDoubleSpinBox(PropertyGenericNumericAssistant);
        maxOutputSpinBox->setObjectName(QStringLiteral("maxOutputSpinBox"));
        maxOutputSpinBox->setDecimals(6);
        maxOutputSpinBox->setMaximum(1e+8);
        maxOutputSpinBox->setValue(10);

        gridLayout_2->addWidget(maxOutputSpinBox, 1, 1, 1, 1);

        mLabelMinOutput = new QLabel(PropertyGenericNumericAssistant);
        mLabelMinOutput->setObjectName(QStringLiteral("mLabelMinOutput"));

        gridLayout_2->addWidget(mLabelMinOutput, 0, 0, 1, 1);

        mLabelNullOutput = new QLabel(PropertyGenericNumericAssistant);
        mLabelNullOutput->setObjectName(QStringLiteral("mLabelNullOutput"));

        gridLayout_2->addWidget(mLabelNullOutput, 3, 0, 1, 1);

        mExponentLabel = new QLabel(PropertyGenericNumericAssistant);
        mExponentLabel->setObjectName(QStringLiteral("mExponentLabel"));

        gridLayout_2->addWidget(mExponentLabel, 2, 0, 1, 1);

        nullOutputSpinBox = new QgsDoubleSpinBox(PropertyGenericNumericAssistant);
        nullOutputSpinBox->setObjectName(QStringLiteral("nullOutputSpinBox"));
        nullOutputSpinBox->setDecimals(6);
        nullOutputSpinBox->setMaximum(1e+8);
        nullOutputSpinBox->setSingleStep(0.1);

        gridLayout_2->addWidget(nullOutputSpinBox, 3, 1, 1, 1);

        exponentSpinBox = new QgsDoubleSpinBox(PropertyGenericNumericAssistant);
        exponentSpinBox->setObjectName(QStringLiteral("exponentSpinBox"));
        exponentSpinBox->setMinimum(0);
        exponentSpinBox->setSingleStep(0.05);
        exponentSpinBox->setValue(1);

        gridLayout_2->addWidget(exponentSpinBox, 2, 1, 1, 1);

        label_6 = new QLabel(PropertyGenericNumericAssistant);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        minOutputSpinBox = new QgsDoubleSpinBox(PropertyGenericNumericAssistant);
        minOutputSpinBox->setObjectName(QStringLiteral("minOutputSpinBox"));
        minOutputSpinBox->setDecimals(6);
        minOutputSpinBox->setMinimum(0);
        minOutputSpinBox->setMaximum(1e+8);
        minOutputSpinBox->setValue(1);

        gridLayout_2->addWidget(minOutputSpinBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        QWidget::setTabOrder(minOutputSpinBox, maxOutputSpinBox);
        QWidget::setTabOrder(maxOutputSpinBox, exponentSpinBox);
        QWidget::setTabOrder(exponentSpinBox, nullOutputSpinBox);

        retranslateUi(PropertyGenericNumericAssistant);

        QMetaObject::connectSlotsByName(PropertyGenericNumericAssistant);
    } // setupUi

    void retranslateUi(QWidget *PropertyGenericNumericAssistant)
    {
        mLabelMinOutput->setText(QApplication::translate("PropertyGenericNumericAssistant", "Output from", Q_NULLPTR));
        mLabelNullOutput->setText(QApplication::translate("PropertyGenericNumericAssistant", "Output when NULL", Q_NULLPTR));
        mExponentLabel->setText(QApplication::translate("PropertyGenericNumericAssistant", "Exponent", Q_NULLPTR));
        label_6->setText(QApplication::translate("PropertyGenericNumericAssistant", "to", Q_NULLPTR));
        Q_UNUSED(PropertyGenericNumericAssistant);
    } // retranslateUi

};

namespace Ui {
    class PropertyGenericNumericAssistant: public Ui_PropertyGenericNumericAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROPERTYGENERICNUMERICASSISTANTWIDGET_H
