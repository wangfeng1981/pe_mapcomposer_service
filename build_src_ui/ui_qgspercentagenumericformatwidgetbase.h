/********************************************************************************
** Form generated from reading UI file 'qgspercentagenumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPERCENTAGENUMERICFORMATWIDGETBASE_H
#define UI_QGSPERCENTAGENUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPercentageNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mShowPlusCheckBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowThousandsCheckBox;
    QgsSpinBox *mDecimalsSpinBox;
    QLabel *label;
    QCheckBox *mShowTrailingZerosCheckBox;
    QComboBox *mScalingComboBox;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsPercentageNumericFormatWidgetBase)
    {
        if (QgsPercentageNumericFormatWidgetBase->objectName().isEmpty())
            QgsPercentageNumericFormatWidgetBase->setObjectName(QStringLiteral("QgsPercentageNumericFormatWidgetBase"));
        QgsPercentageNumericFormatWidgetBase->resize(245, 297);
        QgsPercentageNumericFormatWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsPercentageNumericFormatWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mShowPlusCheckBox = new QCheckBox(QgsPercentageNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QStringLiteral("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        mShowThousandsCheckBox = new QCheckBox(QgsPercentageNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QStringLiteral("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 1, 0, 1, 2);

        mDecimalsSpinBox = new QgsSpinBox(QgsPercentageNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QStringLiteral("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(2);

        gridLayout->addWidget(mDecimalsSpinBox, 0, 1, 1, 1);

        label = new QLabel(QgsPercentageNumericFormatWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsPercentageNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QStringLiteral("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 3, 0, 1, 2);

        mScalingComboBox = new QComboBox(QgsPercentageNumericFormatWidgetBase);
        mScalingComboBox->setObjectName(QStringLiteral("mScalingComboBox"));

        gridLayout->addWidget(mScalingComboBox, 4, 1, 1, 1);

        label_2 = new QLabel(QgsPercentageNumericFormatWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);


        retranslateUi(QgsPercentageNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsPercentageNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsPercentageNumericFormatWidgetBase)
    {
        mShowPlusCheckBox->setText(QApplication::translate("QgsPercentageNumericFormatWidgetBase", "Show plus sign", Q_NULLPTR));
        mShowThousandsCheckBox->setText(QApplication::translate("QgsPercentageNumericFormatWidgetBase", "Show thousands separator", Q_NULLPTR));
        label->setText(QApplication::translate("QgsPercentageNumericFormatWidgetBase", "Decimal places", Q_NULLPTR));
        mShowTrailingZerosCheckBox->setText(QApplication::translate("QgsPercentageNumericFormatWidgetBase", "Show trailing zeros", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsPercentageNumericFormatWidgetBase", "Scaling", Q_NULLPTR));
        Q_UNUSED(QgsPercentageNumericFormatWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPercentageNumericFormatWidgetBase: public Ui_QgsPercentageNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPERCENTAGENUMERICFORMATWIDGETBASE_H
