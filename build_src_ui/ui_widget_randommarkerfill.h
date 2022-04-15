/********************************************************************************
** Form generated from reading UI file 'widget_randommarkerfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RANDOMMARKERFILL_H
#define UI_WIDGET_RANDOMMARKERFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <qgsunitselectionwidget.h>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRandomMarkerFill
{
public:
    QGridLayout *gridLayout;
    QLabel *mCountMethodLabel;
    QComboBox *mCountMethodComboBox;
    QgsPropertyOverrideButton *mSeedDdbtn;
    QLabel *label;
    QLabel *mPointCountLabel;
    QLabel *mDensityAreaLabel;
    QSpacerItem *verticalSpacer;
    QgsSpinBox *mPointCountSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mDensityAreaSpinBox;
    QgsUnitSelectionWidget *mDensityAreaUnitWidget;
    QgsPropertyOverrideButton *mDensityAreaDdbtn;
    QgsSpinBox *mSeedSpinBox;
    QgsPropertyOverrideButton *mPointCountDdbtn;
    QCheckBox *mClipPointsCheckBox;
    QgsPropertyOverrideButton *mClipPointsDdbtn;

    void setupUi(QWidget *WidgetRandomMarkerFill)
    {
        if (WidgetRandomMarkerFill->objectName().isEmpty())
            WidgetRandomMarkerFill->setObjectName(QStringLiteral("WidgetRandomMarkerFill"));
        WidgetRandomMarkerFill->resize(401, 225);
        WidgetRandomMarkerFill->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(WidgetRandomMarkerFill);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mCountMethodLabel = new QLabel(WidgetRandomMarkerFill);
        mCountMethodLabel->setObjectName(QStringLiteral("mCountMethodLabel"));

        gridLayout->addWidget(mCountMethodLabel, 0, 0, 1, 1);

        mCountMethodComboBox = new QComboBox(WidgetRandomMarkerFill);
        mCountMethodComboBox->setObjectName(QStringLiteral("mCountMethodComboBox"));

        gridLayout->addWidget(mCountMethodComboBox, 0, 1, 1, 2);

        mSeedDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mSeedDdbtn->setObjectName(QStringLiteral("mSeedDdbtn"));

        gridLayout->addWidget(mSeedDdbtn, 3, 2, 1, 1);

        label = new QLabel(WidgetRandomMarkerFill);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mPointCountLabel = new QLabel(WidgetRandomMarkerFill);
        mPointCountLabel->setObjectName(QStringLiteral("mPointCountLabel"));

        gridLayout->addWidget(mPointCountLabel, 1, 0, 1, 1);

        mDensityAreaLabel = new QLabel(WidgetRandomMarkerFill);
        mDensityAreaLabel->setObjectName(QStringLiteral("mDensityAreaLabel"));

        gridLayout->addWidget(mDensityAreaLabel, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 3);

        mPointCountSpinBox = new QgsSpinBox(WidgetRandomMarkerFill);
        mPointCountSpinBox->setObjectName(QStringLiteral("mPointCountSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPointCountSpinBox->sizePolicy().hasHeightForWidth());
        mPointCountSpinBox->setSizePolicy(sizePolicy);
        mPointCountSpinBox->setMaximum(999999999);

        gridLayout->addWidget(mPointCountSpinBox, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mDensityAreaSpinBox = new QgsDoubleSpinBox(WidgetRandomMarkerFill);
        mDensityAreaSpinBox->setObjectName(QStringLiteral("mDensityAreaSpinBox"));
        sizePolicy.setHeightForWidth(mDensityAreaSpinBox->sizePolicy().hasHeightForWidth());
        mDensityAreaSpinBox->setSizePolicy(sizePolicy);
        mDensityAreaSpinBox->setDecimals(6);
        mDensityAreaSpinBox->setMinimum(0);
        mDensityAreaSpinBox->setMaximum(1e+8);
        mDensityAreaSpinBox->setSingleStep(0.2);

        horizontalLayout_3->addWidget(mDensityAreaSpinBox);

        mDensityAreaUnitWidget = new QgsUnitSelectionWidget(WidgetRandomMarkerFill);
        mDensityAreaUnitWidget->setObjectName(QStringLiteral("mDensityAreaUnitWidget"));
        mDensityAreaUnitWidget->setMinimumSize(QSize(0, 0));
        mDensityAreaUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mDensityAreaUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        mDensityAreaDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mDensityAreaDdbtn->setObjectName(QStringLiteral("mDensityAreaDdbtn"));

        gridLayout->addWidget(mDensityAreaDdbtn, 2, 2, 1, 1);

        mSeedSpinBox = new QgsSpinBox(WidgetRandomMarkerFill);
        mSeedSpinBox->setObjectName(QStringLiteral("mSeedSpinBox"));
        sizePolicy.setHeightForWidth(mSeedSpinBox->sizePolicy().hasHeightForWidth());
        mSeedSpinBox->setSizePolicy(sizePolicy);
        mSeedSpinBox->setMaximum(999999999);

        gridLayout->addWidget(mSeedSpinBox, 3, 1, 1, 1);

        mPointCountDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mPointCountDdbtn->setObjectName(QStringLiteral("mPointCountDdbtn"));

        gridLayout->addWidget(mPointCountDdbtn, 1, 2, 1, 1);

        mClipPointsCheckBox = new QCheckBox(WidgetRandomMarkerFill);
        mClipPointsCheckBox->setObjectName(QStringLiteral("mClipPointsCheckBox"));

        gridLayout->addWidget(mClipPointsCheckBox, 4, 0, 1, 2);

        mClipPointsDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mClipPointsDdbtn->setObjectName(QStringLiteral("mClipPointsDdbtn"));

        gridLayout->addWidget(mClipPointsDdbtn, 4, 2, 1, 1);


        retranslateUi(WidgetRandomMarkerFill);

        QMetaObject::connectSlotsByName(WidgetRandomMarkerFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetRandomMarkerFill)
    {
        mCountMethodLabel->setText(QApplication::translate("WidgetRandomMarkerFill", "Count method", Q_NULLPTR));
        mSeedDdbtn->setText(QApplication::translate("WidgetRandomMarkerFill", "\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetRandomMarkerFill", "Seed", Q_NULLPTR));
        mPointCountLabel->setText(QApplication::translate("WidgetRandomMarkerFill", "Point count", Q_NULLPTR));
        mDensityAreaLabel->setText(QApplication::translate("WidgetRandomMarkerFill", "Density area", Q_NULLPTR));
        mDensityAreaDdbtn->setText(QApplication::translate("WidgetRandomMarkerFill", "\342\200\246", Q_NULLPTR));
        mSeedSpinBox->setSpecialValueText(QApplication::translate("WidgetRandomMarkerFill", "randomised", Q_NULLPTR));
        mPointCountDdbtn->setText(QApplication::translate("WidgetRandomMarkerFill", "\342\200\246", Q_NULLPTR));
        mClipPointsCheckBox->setText(QApplication::translate("WidgetRandomMarkerFill", "Clip markers to polygon boundary", Q_NULLPTR));
        mClipPointsDdbtn->setText(QApplication::translate("WidgetRandomMarkerFill", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetRandomMarkerFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetRandomMarkerFill: public Ui_WidgetRandomMarkerFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RANDOMMARKERFILL_H
