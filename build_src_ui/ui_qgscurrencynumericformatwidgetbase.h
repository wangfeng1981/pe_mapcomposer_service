/********************************************************************************
** Form generated from reading UI file 'qgscurrencynumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCURRENCYNUMERICFORMATWIDGETBASE_H
#define UI_QGSCURRENCYNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCurrencyNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *mShowPlusCheckBox;
    QCheckBox *mShowTrailingZerosCheckBox;
    QLabel *label;
    QgsSpinBox *mDecimalsSpinBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowThousandsCheckBox;
    QLabel *label_3;
    QLineEdit *mPrefixLineEdit;
    QLineEdit *mSuffixLineEdit;

    void setupUi(QgsPanelWidget *QgsCurrencyNumericFormatWidgetBase)
    {
        if (QgsCurrencyNumericFormatWidgetBase->objectName().isEmpty())
            QgsCurrencyNumericFormatWidgetBase->setObjectName(QStringLiteral("QgsCurrencyNumericFormatWidgetBase"));
        QgsCurrencyNumericFormatWidgetBase->resize(245, 297);
        QgsCurrencyNumericFormatWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsCurrencyNumericFormatWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(QgsCurrencyNumericFormatWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mShowPlusCheckBox = new QCheckBox(QgsCurrencyNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QStringLiteral("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 4, 0, 1, 2);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsCurrencyNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QStringLiteral("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 5, 0, 1, 2);

        label = new QLabel(QgsCurrencyNumericFormatWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mDecimalsSpinBox = new QgsSpinBox(QgsCurrencyNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QStringLiteral("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(2);

        gridLayout->addWidget(mDecimalsSpinBox, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        mShowThousandsCheckBox = new QCheckBox(QgsCurrencyNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QStringLiteral("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 3, 0, 1, 2);

        label_3 = new QLabel(QgsCurrencyNumericFormatWidgetBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mPrefixLineEdit = new QLineEdit(QgsCurrencyNumericFormatWidgetBase);
        mPrefixLineEdit->setObjectName(QStringLiteral("mPrefixLineEdit"));

        gridLayout->addWidget(mPrefixLineEdit, 0, 1, 1, 1);

        mSuffixLineEdit = new QLineEdit(QgsCurrencyNumericFormatWidgetBase);
        mSuffixLineEdit->setObjectName(QStringLiteral("mSuffixLineEdit"));

        gridLayout->addWidget(mSuffixLineEdit, 1, 1, 1, 1);


        retranslateUi(QgsCurrencyNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsCurrencyNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsCurrencyNumericFormatWidgetBase)
    {
        label_2->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Prefix", Q_NULLPTR));
        mShowPlusCheckBox->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Show plus sign", Q_NULLPTR));
        mShowTrailingZerosCheckBox->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Show trailing zeros", Q_NULLPTR));
        label->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Decimal places", Q_NULLPTR));
        mShowThousandsCheckBox->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Show thousands separator", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Suffix", Q_NULLPTR));
        mPrefixLineEdit->setText(QApplication::translate("QgsCurrencyNumericFormatWidgetBase", "$", Q_NULLPTR));
        Q_UNUSED(QgsCurrencyNumericFormatWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCurrencyNumericFormatWidgetBase: public Ui_QgsCurrencyNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCURRENCYNUMERICFORMATWIDGETBASE_H
