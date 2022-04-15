/********************************************************************************
** Form generated from reading UI file 'qgsrasterminmaxwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERMINMAXWIDGETBASE_H
#define UI_QGSRASTERMINMAXWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterMinMaxWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QgsCollapsibleGroupBox *mLoadMinMaxValuesGroupBox;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QRadioButton *mUserDefinedRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *mCumulativeCutRadioButton;
    QgsDoubleSpinBox *mCumulativeCutLowerDoubleSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mCumulativeCutUpperDoubleSpinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mStdDevRadioButton;
    QgsDoubleSpinBox *mStdDevSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *mMinMaxRadioButton;
    QGridLayout *gridLayout_2;
    QComboBox *mStatisticsExtentCombo;
    QLabel *mStatisticsExtentLabel;
    QLabel *mAccuracyLabel;
    QComboBox *cboAccuracy;
    QButtonGroup *mMinMaxMethodRadioButtonGroup;

    void setupUi(QWidget *QgsRasterMinMaxWidgetBase)
    {
        if (QgsRasterMinMaxWidgetBase->objectName().isEmpty())
            QgsRasterMinMaxWidgetBase->setObjectName(QStringLiteral("QgsRasterMinMaxWidgetBase"));
        QgsRasterMinMaxWidgetBase->resize(324, 250);
        QgsRasterMinMaxWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_3 = new QVBoxLayout(QgsRasterMinMaxWidgetBase);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mLoadMinMaxValuesGroupBox = new QgsCollapsibleGroupBox(QgsRasterMinMaxWidgetBase);
        mLoadMinMaxValuesGroupBox->setObjectName(QStringLiteral("mLoadMinMaxValuesGroupBox"));
        mLoadMinMaxValuesGroupBox->setFlat(true);
        mLoadMinMaxValuesGroupBox->setCheckable(false);
        mLoadMinMaxValuesGroupBox->setProperty("collapsed", QVariant(true));
        mLoadMinMaxValuesGroupBox->setProperty("saveCollapsedState", QVariant(false));
        verticalLayout_4 = new QVBoxLayout(mLoadMinMaxValuesGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mUserDefinedRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup = new QButtonGroup(QgsRasterMinMaxWidgetBase);
        mMinMaxMethodRadioButtonGroup->setObjectName(QStringLiteral("mMinMaxMethodRadioButtonGroup"));
        mMinMaxMethodRadioButtonGroup->addButton(mUserDefinedRadioButton);
        mUserDefinedRadioButton->setObjectName(QStringLiteral("mUserDefinedRadioButton"));
        mUserDefinedRadioButton->setChecked(true);

        gridLayout->addWidget(mUserDefinedRadioButton, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mCumulativeCutRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup->addButton(mCumulativeCutRadioButton);
        mCumulativeCutRadioButton->setObjectName(QStringLiteral("mCumulativeCutRadioButton"));
        mCumulativeCutRadioButton->setChecked(false);

        horizontalLayout_4->addWidget(mCumulativeCutRadioButton);

        mCumulativeCutLowerDoubleSpinBox = new QgsDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mCumulativeCutLowerDoubleSpinBox->setObjectName(QStringLiteral("mCumulativeCutLowerDoubleSpinBox"));
        mCumulativeCutLowerDoubleSpinBox->setDecimals(1);

        horizontalLayout_4->addWidget(mCumulativeCutLowerDoubleSpinBox);

        label = new QLabel(mLoadMinMaxValuesGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        mCumulativeCutUpperDoubleSpinBox = new QgsDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mCumulativeCutUpperDoubleSpinBox->setObjectName(QStringLiteral("mCumulativeCutUpperDoubleSpinBox"));
        mCumulativeCutUpperDoubleSpinBox->setDecimals(1);

        horizontalLayout_4->addWidget(mCumulativeCutUpperDoubleSpinBox);

        label_2 = new QLabel(mLoadMinMaxValuesGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_8 = new QSpacerItem(123, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mStdDevRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup->addButton(mStdDevRadioButton);
        mStdDevRadioButton->setObjectName(QStringLiteral("mStdDevRadioButton"));

        horizontalLayout_6->addWidget(mStdDevRadioButton);

        mStdDevSpinBox = new QgsDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mStdDevSpinBox->setObjectName(QStringLiteral("mStdDevSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStdDevSpinBox->sizePolicy().hasHeightForWidth());
        mStdDevSpinBox->setSizePolicy(sizePolicy);
        mStdDevSpinBox->setValue(1);

        horizontalLayout_6->addWidget(mStdDevSpinBox);

        horizontalSpacer_6 = new QSpacerItem(123, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        mMinMaxRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup->addButton(mMinMaxRadioButton);
        mMinMaxRadioButton->setObjectName(QStringLiteral("mMinMaxRadioButton"));

        gridLayout->addWidget(mMinMaxRadioButton, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mStatisticsExtentCombo = new QComboBox(mLoadMinMaxValuesGroupBox);
        mStatisticsExtentCombo->setObjectName(QStringLiteral("mStatisticsExtentCombo"));

        gridLayout_2->addWidget(mStatisticsExtentCombo, 0, 1, 1, 1);

        mStatisticsExtentLabel = new QLabel(mLoadMinMaxValuesGroupBox);
        mStatisticsExtentLabel->setObjectName(QStringLiteral("mStatisticsExtentLabel"));
        mStatisticsExtentLabel->setMargin(0);

        gridLayout_2->addWidget(mStatisticsExtentLabel, 0, 0, 1, 1);

        mAccuracyLabel = new QLabel(mLoadMinMaxValuesGroupBox);
        mAccuracyLabel->setObjectName(QStringLiteral("mAccuracyLabel"));

        gridLayout_2->addWidget(mAccuracyLabel, 1, 0, 1, 1);

        cboAccuracy = new QComboBox(mLoadMinMaxValuesGroupBox);
        cboAccuracy->setObjectName(QStringLiteral("cboAccuracy"));

        gridLayout_2->addWidget(cboAccuracy, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 6, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(mLoadMinMaxValuesGroupBox);

        QWidget::setTabOrder(mUserDefinedRadioButton, mCumulativeCutRadioButton);
        QWidget::setTabOrder(mCumulativeCutRadioButton, mCumulativeCutLowerDoubleSpinBox);
        QWidget::setTabOrder(mCumulativeCutLowerDoubleSpinBox, mCumulativeCutUpperDoubleSpinBox);
        QWidget::setTabOrder(mCumulativeCutUpperDoubleSpinBox, mMinMaxRadioButton);
        QWidget::setTabOrder(mMinMaxRadioButton, mStdDevRadioButton);
        QWidget::setTabOrder(mStdDevRadioButton, mStdDevSpinBox);

        retranslateUi(QgsRasterMinMaxWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterMinMaxWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterMinMaxWidgetBase)
    {
        mLoadMinMaxValuesGroupBox->setTitle(QApplication::translate("QgsRasterMinMaxWidgetBase", "Min / Max Value Settings", Q_NULLPTR));
        mUserDefinedRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Use&r defined", Q_NULLPTR));
        mCumulativeCutRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Cumula&tive\n"
"count cut", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "-", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "%", Q_NULLPTR));
        mStdDevRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Mean +/-\n"
"standard de&viation \303\227", Q_NULLPTR));
        mMinMaxRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "&Min / max", Q_NULLPTR));
        mStatisticsExtentCombo->clear();
        mStatisticsExtentCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterMinMaxWidgetBase", "Whole raster", Q_NULLPTR)
         << QApplication::translate("QgsRasterMinMaxWidgetBase", "Current canvas", Q_NULLPTR)
         << QApplication::translate("QgsRasterMinMaxWidgetBase", "Updated canvas", Q_NULLPTR)
        );
        mStatisticsExtentLabel->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Statistics extent", Q_NULLPTR));
        mAccuracyLabel->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Accuracy", Q_NULLPTR));
        cboAccuracy->clear();
        cboAccuracy->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterMinMaxWidgetBase", "Estimate (faster)", Q_NULLPTR)
         << QApplication::translate("QgsRasterMinMaxWidgetBase", "Actual (slower)", Q_NULLPTR)
        );
        Q_UNUSED(QgsRasterMinMaxWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterMinMaxWidgetBase: public Ui_QgsRasterMinMaxWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERMINMAXWIDGETBASE_H
