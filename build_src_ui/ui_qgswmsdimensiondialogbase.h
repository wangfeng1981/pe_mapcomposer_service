/********************************************************************************
** Form generated from reading UI file 'qgswmsdimensiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMSDIMENSIONDIALOGBASE_H
#define UI_QGSWMSDIMENSIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsWmsDimensionDialogBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *mUnitSymbolLineEdit;
    QLineEdit *mUnitsLineEdit;
    QComboBox *mNameComboBox;
    QgsFieldComboBox *mFieldComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *mFieldLabel;
    QLabel *mNameLabel;
    QLabel *mEndFiledLabel;
    QgsFieldComboBox *mEndFieldComboBox;
    QLabel *mUnitSymbolLabel;
    QLabel *mUnitsLabel;
    QLabel *mDefaultDisplayLabel;
    QLabel *mReferenceValueLabel;
    QComboBox *mDefaultDisplayComboBox;
    QComboBox *mReferenceValueComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsWmsDimensionDialogBase)
    {
        if (QgsWmsDimensionDialogBase->objectName().isEmpty())
            QgsWmsDimensionDialogBase->setObjectName(QStringLiteral("QgsWmsDimensionDialogBase"));
        QgsWmsDimensionDialogBase->resize(400, 300);
        gridLayout = new QGridLayout(QgsWmsDimensionDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mUnitSymbolLineEdit = new QLineEdit(QgsWmsDimensionDialogBase);
        mUnitSymbolLineEdit->setObjectName(QStringLiteral("mUnitSymbolLineEdit"));

        gridLayout->addWidget(mUnitSymbolLineEdit, 4, 1, 1, 1);

        mUnitsLineEdit = new QLineEdit(QgsWmsDimensionDialogBase);
        mUnitsLineEdit->setObjectName(QStringLiteral("mUnitsLineEdit"));

        gridLayout->addWidget(mUnitsLineEdit, 3, 1, 1, 1);

        mNameComboBox = new QComboBox(QgsWmsDimensionDialogBase);
        mNameComboBox->setObjectName(QStringLiteral("mNameComboBox"));
        mNameComboBox->setEditable(true);

        gridLayout->addWidget(mNameComboBox, 0, 1, 1, 1);

        mFieldComboBox = new QgsFieldComboBox(QgsWmsDimensionDialogBase);
        mFieldComboBox->setObjectName(QStringLiteral("mFieldComboBox"));

        gridLayout->addWidget(mFieldComboBox, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        mFieldLabel = new QLabel(QgsWmsDimensionDialogBase);
        mFieldLabel->setObjectName(QStringLiteral("mFieldLabel"));

        gridLayout->addWidget(mFieldLabel, 1, 0, 1, 1);

        mNameLabel = new QLabel(QgsWmsDimensionDialogBase);
        mNameLabel->setObjectName(QStringLiteral("mNameLabel"));

        gridLayout->addWidget(mNameLabel, 0, 0, 1, 1);

        mEndFiledLabel = new QLabel(QgsWmsDimensionDialogBase);
        mEndFiledLabel->setObjectName(QStringLiteral("mEndFiledLabel"));

        gridLayout->addWidget(mEndFiledLabel, 2, 0, 1, 1);

        mEndFieldComboBox = new QgsFieldComboBox(QgsWmsDimensionDialogBase);
        mEndFieldComboBox->setObjectName(QStringLiteral("mEndFieldComboBox"));

        gridLayout->addWidget(mEndFieldComboBox, 2, 1, 1, 1);

        mUnitSymbolLabel = new QLabel(QgsWmsDimensionDialogBase);
        mUnitSymbolLabel->setObjectName(QStringLiteral("mUnitSymbolLabel"));

        gridLayout->addWidget(mUnitSymbolLabel, 4, 0, 1, 1);

        mUnitsLabel = new QLabel(QgsWmsDimensionDialogBase);
        mUnitsLabel->setObjectName(QStringLiteral("mUnitsLabel"));
        mUnitsLabel->setEnabled(true);

        gridLayout->addWidget(mUnitsLabel, 3, 0, 1, 1);

        mDefaultDisplayLabel = new QLabel(QgsWmsDimensionDialogBase);
        mDefaultDisplayLabel->setObjectName(QStringLiteral("mDefaultDisplayLabel"));

        gridLayout->addWidget(mDefaultDisplayLabel, 5, 0, 1, 1);

        mReferenceValueLabel = new QLabel(QgsWmsDimensionDialogBase);
        mReferenceValueLabel->setObjectName(QStringLiteral("mReferenceValueLabel"));

        gridLayout->addWidget(mReferenceValueLabel, 6, 0, 1, 1);

        mDefaultDisplayComboBox = new QComboBox(QgsWmsDimensionDialogBase);
        mDefaultDisplayComboBox->setObjectName(QStringLiteral("mDefaultDisplayComboBox"));

        gridLayout->addWidget(mDefaultDisplayComboBox, 5, 1, 1, 1);

        mReferenceValueComboBox = new QComboBox(QgsWmsDimensionDialogBase);
        mReferenceValueComboBox->setObjectName(QStringLiteral("mReferenceValueComboBox"));
        mReferenceValueComboBox->setEditable(true);

        gridLayout->addWidget(mReferenceValueComboBox, 6, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsWmsDimensionDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);


        retranslateUi(QgsWmsDimensionDialogBase);

        QMetaObject::connectSlotsByName(QgsWmsDimensionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWmsDimensionDialogBase)
    {
        QgsWmsDimensionDialogBase->setWindowTitle(QApplication::translate("QgsWmsDimensionDialogBase", "Add WMS Dimension", Q_NULLPTR));
        mFieldLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "Attribute", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNameLabel->setToolTip(QApplication::translate("QgsWmsDimensionDialogBase", "OAPIF supports \"Name\" and \"Date\" only, \"WMS\" does not support \"Date\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNameLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "Name", Q_NULLPTR));
        mEndFiledLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "End attribute (optional)", Q_NULLPTR));
        mUnitSymbolLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "Unit symbol", Q_NULLPTR));
        mUnitsLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "Units", Q_NULLPTR));
        mDefaultDisplayLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "Default display", Q_NULLPTR));
        mReferenceValueLabel->setText(QApplication::translate("QgsWmsDimensionDialogBase", "Reference value", Q_NULLPTR));
        mDefaultDisplayComboBox->clear();
        mDefaultDisplayComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsWmsDimensionDialogBase", "All values", Q_NULLPTR)
         << QApplication::translate("QgsWmsDimensionDialogBase", "Min value", Q_NULLPTR)
         << QApplication::translate("QgsWmsDimensionDialogBase", "Max value", Q_NULLPTR)
         << QApplication::translate("QgsWmsDimensionDialogBase", "Reference value", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class QgsWmsDimensionDialogBase: public Ui_QgsWmsDimensionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMSDIMENSIONDIALOGBASE_H
