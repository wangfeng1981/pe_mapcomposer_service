/********************************************************************************
** Form generated from reading UI file 'qgsbasicnumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBASICNUMERICFORMATWIDGETBASE_H
#define UI_QGSBASICNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include "qgsfilterlineedit.h"
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBasicNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *mRadDecimalPlaces;
    QCheckBox *mShowPlusCheckBox;
    QCheckBox *mShowThousandsCheckBox;
    QLabel *label_3;
    QgsFilterLineEdit *mDecimalLineEdit;
    QgsSpinBox *mDecimalsSpinBox;
    QRadioButton *mRadSignificantFigures;
    QCheckBox *mShowTrailingZerosCheckBox;
    QSpacerItem *verticalSpacer;
    QgsFilterLineEdit *mThousandsLineEdit;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsBasicNumericFormatWidgetBase)
    {
        if (QgsBasicNumericFormatWidgetBase->objectName().isEmpty())
            QgsBasicNumericFormatWidgetBase->setObjectName(QStringLiteral("QgsBasicNumericFormatWidgetBase"));
        QgsBasicNumericFormatWidgetBase->resize(221, 285);
        QgsBasicNumericFormatWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsBasicNumericFormatWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QgsBasicNumericFormatWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mRadDecimalPlaces = new QRadioButton(QgsBasicNumericFormatWidgetBase);
        mRadDecimalPlaces->setObjectName(QStringLiteral("mRadDecimalPlaces"));
        mRadDecimalPlaces->setChecked(true);

        gridLayout->addWidget(mRadDecimalPlaces, 1, 0, 1, 2);

        mShowPlusCheckBox = new QCheckBox(QgsBasicNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QStringLiteral("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 4, 0, 1, 2);

        mShowThousandsCheckBox = new QCheckBox(QgsBasicNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QStringLiteral("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 3, 0, 1, 2);

        label_3 = new QLabel(QgsBasicNumericFormatWidgetBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        mDecimalLineEdit = new QgsFilterLineEdit(QgsBasicNumericFormatWidgetBase);
        mDecimalLineEdit->setObjectName(QStringLiteral("mDecimalLineEdit"));
        mDecimalLineEdit->setMaxLength(1);

        gridLayout->addWidget(mDecimalLineEdit, 7, 1, 1, 1);

        mDecimalsSpinBox = new QgsSpinBox(QgsBasicNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QStringLiteral("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(6);

        gridLayout->addWidget(mDecimalsSpinBox, 0, 1, 1, 1);

        mRadSignificantFigures = new QRadioButton(QgsBasicNumericFormatWidgetBase);
        mRadSignificantFigures->setObjectName(QStringLiteral("mRadSignificantFigures"));

        gridLayout->addWidget(mRadSignificantFigures, 2, 0, 1, 2);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsBasicNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QStringLiteral("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        mThousandsLineEdit = new QgsFilterLineEdit(QgsBasicNumericFormatWidgetBase);
        mThousandsLineEdit->setObjectName(QStringLiteral("mThousandsLineEdit"));
        mThousandsLineEdit->setMaxLength(1);

        gridLayout->addWidget(mThousandsLineEdit, 6, 1, 1, 1);

        label_2 = new QLabel(QgsBasicNumericFormatWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);


        retranslateUi(QgsBasicNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsBasicNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsBasicNumericFormatWidgetBase)
    {
        label->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Round to", Q_NULLPTR));
        mRadDecimalPlaces->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Decimal places", Q_NULLPTR));
        mShowPlusCheckBox->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Show plus sign", Q_NULLPTR));
        mShowThousandsCheckBox->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Show thousands separator", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Decimal separator", Q_NULLPTR));
        mDecimalLineEdit->setPlaceholderText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Default", Q_NULLPTR));
        mRadSignificantFigures->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Significant figures", Q_NULLPTR));
        mShowTrailingZerosCheckBox->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Show trailing zeros", Q_NULLPTR));
        mThousandsLineEdit->setPlaceholderText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Default", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsBasicNumericFormatWidgetBase", "Thousands separator", Q_NULLPTR));
        Q_UNUSED(QgsBasicNumericFormatWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBasicNumericFormatWidgetBase: public Ui_QgsBasicNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBASICNUMERICFORMATWIDGETBASE_H
