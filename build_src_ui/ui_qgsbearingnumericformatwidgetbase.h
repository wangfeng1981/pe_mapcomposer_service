/********************************************************************************
** Form generated from reading UI file 'qgsbearingnumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBEARINGNUMERICFORMATWIDGETBASE_H
#define UI_QGSBEARINGNUMERICFORMATWIDGETBASE_H

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

class Ui_QgsBearingNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QgsSpinBox *mDecimalsSpinBox;
    QCheckBox *mShowTrailingZerosCheckBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *mFormatComboBox;

    void setupUi(QgsPanelWidget *QgsBearingNumericFormatWidgetBase)
    {
        if (QgsBearingNumericFormatWidgetBase->objectName().isEmpty())
            QgsBearingNumericFormatWidgetBase->setObjectName(QStringLiteral("QgsBearingNumericFormatWidgetBase"));
        QgsBearingNumericFormatWidgetBase->resize(245, 297);
        QgsBearingNumericFormatWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsBearingNumericFormatWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        mDecimalsSpinBox = new QgsSpinBox(QgsBearingNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QStringLiteral("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(6);

        gridLayout->addWidget(mDecimalsSpinBox, 1, 1, 1, 1);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsBearingNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QStringLiteral("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 2, 0, 1, 2);

        label = new QLabel(QgsBearingNumericFormatWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(QgsBearingNumericFormatWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mFormatComboBox = new QComboBox(QgsBearingNumericFormatWidgetBase);
        mFormatComboBox->setObjectName(QStringLiteral("mFormatComboBox"));

        gridLayout->addWidget(mFormatComboBox, 0, 1, 1, 1);


        retranslateUi(QgsBearingNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsBearingNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsBearingNumericFormatWidgetBase)
    {
        mShowTrailingZerosCheckBox->setText(QApplication::translate("QgsBearingNumericFormatWidgetBase", "Show trailing zeros", Q_NULLPTR));
        label->setText(QApplication::translate("QgsBearingNumericFormatWidgetBase", "Decimal places", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsBearingNumericFormatWidgetBase", "Format", Q_NULLPTR));
        Q_UNUSED(QgsBearingNumericFormatWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBearingNumericFormatWidgetBase: public Ui_QgsBearingNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBEARINGNUMERICFORMATWIDGETBASE_H
