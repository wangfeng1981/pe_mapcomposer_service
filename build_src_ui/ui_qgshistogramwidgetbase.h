/********************************************************************************
** Form generated from reading UI file 'qgshistogramwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHISTOGRAMWIDGETBASE_H
#define UI_QGSHISTOGRAMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsspinbox.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHistogramWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mLoadValuesButton;
    QSpacerItem *horizontalSpacer;
    QwtPlot *mpPlot;
    QLabel *label_12;
    QgsSpinBox *mBinsSpinBox;
    QCheckBox *mMeanCheckBox;
    QCheckBox *mStdevCheckBox;

    void setupUi(QWidget *QgsHistogramWidgetBase)
    {
        if (QgsHistogramWidgetBase->objectName().isEmpty())
            QgsHistogramWidgetBase->setObjectName(QStringLiteral("QgsHistogramWidgetBase"));
        QgsHistogramWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsHistogramWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLoadValuesButton = new QPushButton(QgsHistogramWidgetBase);
        mLoadValuesButton->setObjectName(QStringLiteral("mLoadValuesButton"));

        gridLayout->addWidget(mLoadValuesButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 2);

        mpPlot = new QwtPlot(QgsHistogramWidgetBase);
        mpPlot->setObjectName(QStringLiteral("mpPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpPlot->sizePolicy().hasHeightForWidth());
        mpPlot->setSizePolicy(sizePolicy);
        mpPlot->setMinimumSize(QSize(0, 120));

        gridLayout->addWidget(mpPlot, 1, 0, 1, 3);

        label_12 = new QLabel(QgsHistogramWidgetBase);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 2, 0, 1, 2);

        mBinsSpinBox = new QgsSpinBox(QgsHistogramWidgetBase);
        mBinsSpinBox->setObjectName(QStringLiteral("mBinsSpinBox"));
        mBinsSpinBox->setMinimum(1);
        mBinsSpinBox->setMaximum(999);
        mBinsSpinBox->setValue(50);

        gridLayout->addWidget(mBinsSpinBox, 2, 2, 1, 1);

        mMeanCheckBox = new QCheckBox(QgsHistogramWidgetBase);
        mMeanCheckBox->setObjectName(QStringLiteral("mMeanCheckBox"));

        gridLayout->addWidget(mMeanCheckBox, 3, 2, 1, 1);

        mStdevCheckBox = new QCheckBox(QgsHistogramWidgetBase);
        mStdevCheckBox->setObjectName(QStringLiteral("mStdevCheckBox"));

        gridLayout->addWidget(mStdevCheckBox, 4, 2, 1, 1);


        retranslateUi(QgsHistogramWidgetBase);

        QMetaObject::connectSlotsByName(QgsHistogramWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsHistogramWidgetBase)
    {
        mLoadValuesButton->setText(QApplication::translate("QgsHistogramWidgetBase", "Load Values", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsHistogramWidgetBase", "Histogram bins", Q_NULLPTR));
        mMeanCheckBox->setText(QApplication::translate("QgsHistogramWidgetBase", "Show mean value", Q_NULLPTR));
        mStdevCheckBox->setText(QApplication::translate("QgsHistogramWidgetBase", "Show standard deviation", Q_NULLPTR));
        Q_UNUSED(QgsHistogramWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsHistogramWidgetBase: public Ui_QgsHistogramWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHISTOGRAMWIDGETBASE_H
