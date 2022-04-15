/********************************************************************************
** Form generated from reading UI file 'qgsscientificnumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSCIENTIFICNUMERICFORMATWIDGETBASE_H
#define UI_QGSSCIENTIFICNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <qgsspinbox.h>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsScientificNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsSpinBox *mDecimalsSpinBox;
    QCheckBox *mShowTrailingZerosCheckBox;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowPlusCheckBox;

    void setupUi(QgsPanelWidget *QgsScientificNumericFormatWidgetBase)
    {
        if (QgsScientificNumericFormatWidgetBase->objectName().isEmpty())
            QgsScientificNumericFormatWidgetBase->setObjectName(QStringLiteral("QgsScientificNumericFormatWidgetBase"));
        QgsScientificNumericFormatWidgetBase->resize(245, 297);
        QgsScientificNumericFormatWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsScientificNumericFormatWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mDecimalsSpinBox = new QgsSpinBox(QgsScientificNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QStringLiteral("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(6);

        gridLayout->addWidget(mDecimalsSpinBox, 0, 1, 1, 1);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsScientificNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QStringLiteral("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 2, 0, 1, 2);

        label = new QLabel(QgsScientificNumericFormatWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        mShowPlusCheckBox = new QCheckBox(QgsScientificNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QStringLiteral("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 1, 0, 1, 2);


        retranslateUi(QgsScientificNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsScientificNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsScientificNumericFormatWidgetBase)
    {
        mShowTrailingZerosCheckBox->setText(QApplication::translate("QgsScientificNumericFormatWidgetBase", "Show trailing zeros", Q_NULLPTR));
        label->setText(QApplication::translate("QgsScientificNumericFormatWidgetBase", "Decimal places", Q_NULLPTR));
        mShowPlusCheckBox->setText(QApplication::translate("QgsScientificNumericFormatWidgetBase", "Show plus sign", Q_NULLPTR));
        Q_UNUSED(QgsScientificNumericFormatWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsScientificNumericFormatWidgetBase: public Ui_QgsScientificNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSCIENTIFICNUMERICFORMATWIDGETBASE_H
