/********************************************************************************
** Form generated from reading UI file 'qgssimplifytolerancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSIMPLIFYTOLERANCEDIALOG_H
#define UI_QGSSIMPLIFYTOLERANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_SimplifyUserInputWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *labelStatus;
    QLabel *label_2;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsDoubleSpinBox *mToleranceSpinBox;
    QComboBox *mToleranceUnitsComboBox;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QgsSpinBox *mIterationsSpin;
    QLabel *label_4;
    QgsSpinBox *mOffsetSpin;
    QDialogButtonBox *mButtonBox;
    QComboBox *mMethodComboBox;

    void setupUi(QWidget *SimplifyUserInputWidgetBase)
    {
        if (SimplifyUserInputWidgetBase->objectName().isEmpty())
            SimplifyUserInputWidgetBase->setObjectName(QStringLiteral("SimplifyUserInputWidgetBase"));
        SimplifyUserInputWidgetBase->resize(452, 114);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SimplifyUserInputWidgetBase->sizePolicy().hasHeightForWidth());
        SimplifyUserInputWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SimplifyUserInputWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelStatus = new QLabel(SimplifyUserInputWidgetBase);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        gridLayout->addWidget(labelStatus, 2, 0, 1, 5);

        label_2 = new QLabel(SimplifyUserInputWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mOptionsStackedWidget = new QStackedWidget(SimplifyUserInputWidgetBase);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mToleranceSpinBox = new QgsDoubleSpinBox(page);
        mToleranceSpinBox->setObjectName(QStringLiteral("mToleranceSpinBox"));
        mToleranceSpinBox->setDecimals(6);
        mToleranceSpinBox->setMaximum(999999);
        mToleranceSpinBox->setValue(1);

        horizontalLayout->addWidget(mToleranceSpinBox);

        mToleranceUnitsComboBox = new QComboBox(page);
        mToleranceUnitsComboBox->setObjectName(QStringLiteral("mToleranceUnitsComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mToleranceUnitsComboBox->sizePolicy().hasHeightForWidth());
        mToleranceUnitsComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mToleranceUnitsComboBox);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        horizontalLayout_2 = new QHBoxLayout(page_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mIterationsSpin = new QgsSpinBox(page_2);
        mIterationsSpin->setObjectName(QStringLiteral("mIterationsSpin"));
        sizePolicy1.setHeightForWidth(mIterationsSpin->sizePolicy().hasHeightForWidth());
        mIterationsSpin->setSizePolicy(sizePolicy1);
        mIterationsSpin->setMinimum(1);
        mIterationsSpin->setMaximum(5);
        mIterationsSpin->setValue(1);

        horizontalLayout_2->addWidget(mIterationsSpin);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        mOffsetSpin = new QgsSpinBox(page_2);
        mOffsetSpin->setObjectName(QStringLiteral("mOffsetSpin"));
        sizePolicy1.setHeightForWidth(mOffsetSpin->sizePolicy().hasHeightForWidth());
        mOffsetSpin->setSizePolicy(sizePolicy1);
        mOffsetSpin->setMaximum(50);

        horizontalLayout_2->addWidget(mOffsetSpin);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(3, 1);
        mOptionsStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mOptionsStackedWidget, 1, 0, 1, 5);

        mButtonBox = new QDialogButtonBox(SimplifyUserInputWidgetBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy2);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 0, 3, 1, 1);

        mMethodComboBox = new QComboBox(SimplifyUserInputWidgetBase);
        mMethodComboBox->setObjectName(QStringLiteral("mMethodComboBox"));
        sizePolicy1.setHeightForWidth(mMethodComboBox->sizePolicy().hasHeightForWidth());
        mMethodComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMethodComboBox, 0, 1, 1, 2);


        retranslateUi(SimplifyUserInputWidgetBase);

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SimplifyUserInputWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *SimplifyUserInputWidgetBase)
    {
        SimplifyUserInputWidgetBase->setWindowTitle(QApplication::translate("SimplifyUserInputWidgetBase", "Simplification Tool", Q_NULLPTR));
        label_2->setText(QApplication::translate("SimplifyUserInputWidgetBase", "Method", Q_NULLPTR));
        label->setText(QApplication::translate("SimplifyUserInputWidgetBase", "Tolerance", Q_NULLPTR));
        label_3->setText(QApplication::translate("SimplifyUserInputWidgetBase", "Iterations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mIterationsSpin->setToolTip(QApplication::translate("SimplifyUserInputWidgetBase", "Number of smooth iterations. More iterations results in smoother geometries, at the expense of greatly increasing the number of vertices in those geometries.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SimplifyUserInputWidgetBase", "Offset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mOffsetSpin->setToolTip(QApplication::translate("SimplifyUserInputWidgetBase", "Offset from existing vertices at which to insert smoothed vertices. Larger values result in \"looser\" smoothing, smaller values result in \"tight\" smoothing.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOffsetSpin->setSuffix(QApplication::translate("SimplifyUserInputWidgetBase", " %", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimplifyUserInputWidgetBase: public Ui_SimplifyUserInputWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSIMPLIFYTOLERANCEDIALOG_H
