/********************************************************************************
** Form generated from reading UI file 'qgsarrowsymbollayerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSARROWSYMBOLLAYERWIDGETBASE_H
#define UI_QGSARROWSYMBOLLAYERWIDGETBASE_H

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
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsArrowSymbolLayerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mArrowTypeDDBtn;
    QComboBox *mHeadTypeCombo;
    QCheckBox *mCurvedArrowChck;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mHeadThicknessSpin;
    QgsUnitSelectionWidget *mHeadThicknessUnitWidget;
    QgsPropertyOverrideButton *mHeadHeightDDBtn;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_8;
    QgsPropertyOverrideButton *mHeadWidthDDBtn;
    QgsPropertyOverrideButton *mArrowWidthDDBtn;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mOffsetSpin;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *mArrowWidthSpin;
    QgsUnitSelectionWidget *mArrowWidthUnitWidget;
    QgsPropertyOverrideButton *mHeadTypeDDBtn;
    QLabel *label_2;
    QgsPropertyOverrideButton *mArrowStartWidthDDBtn;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mHeadLengthSpin;
    QgsUnitSelectionWidget *mHeadLengthUnitWidget;
    QLabel *label_10;
    QComboBox *mArrowTypeCombo;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
    QgsDoubleSpinBox *mArrowStartWidthSpin;
    QgsUnitSelectionWidget *mArrowStartWidthUnitWidget;
    QCheckBox *mRepeatArrowChck;

    void setupUi(QWidget *QgsArrowSymbolLayerWidgetBase)
    {
        if (QgsArrowSymbolLayerWidgetBase->objectName().isEmpty())
            QgsArrowSymbolLayerWidgetBase->setObjectName(QStringLiteral("QgsArrowSymbolLayerWidgetBase"));
        QgsArrowSymbolLayerWidgetBase->resize(721, 364);
        QgsArrowSymbolLayerWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsArrowSymbolLayerWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mArrowTypeDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mArrowTypeDDBtn->setObjectName(QStringLiteral("mArrowTypeDDBtn"));

        gridLayout->addWidget(mArrowTypeDDBtn, 1, 2, 1, 1);

        mHeadTypeCombo = new QComboBox(QgsArrowSymbolLayerWidgetBase);
        mHeadTypeCombo->setObjectName(QStringLiteral("mHeadTypeCombo"));

        gridLayout->addWidget(mHeadTypeCombo, 0, 1, 1, 1);

        mCurvedArrowChck = new QCheckBox(QgsArrowSymbolLayerWidgetBase);
        mCurvedArrowChck->setObjectName(QStringLiteral("mCurvedArrowChck"));
        mCurvedArrowChck->setChecked(true);
        mCurvedArrowChck->setTristate(false);

        gridLayout->addWidget(mCurvedArrowChck, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mHeadThicknessSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mHeadThicknessSpin->setObjectName(QStringLiteral("mHeadThicknessSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHeadThicknessSpin->sizePolicy().hasHeightForWidth());
        mHeadThicknessSpin->setSizePolicy(sizePolicy);
        mHeadThicknessSpin->setDecimals(6);
        mHeadThicknessSpin->setMaximum(1e+9);
        mHeadThicknessSpin->setSingleStep(0.2);

        horizontalLayout_2->addWidget(mHeadThicknessSpin);

        mHeadThicknessUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mHeadThicknessUnitWidget->setObjectName(QStringLiteral("mHeadThicknessUnitWidget"));
        mHeadThicknessUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(mHeadThicknessUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        mHeadHeightDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mHeadHeightDDBtn->setObjectName(QStringLiteral("mHeadHeightDDBtn"));

        gridLayout->addWidget(mHeadHeightDDBtn, 5, 2, 1, 1);

        label_6 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_3 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_8 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        mHeadWidthDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mHeadWidthDDBtn->setObjectName(QStringLiteral("mHeadWidthDDBtn"));

        gridLayout->addWidget(mHeadWidthDDBtn, 4, 2, 1, 1);

        mArrowWidthDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mArrowWidthDDBtn->setObjectName(QStringLiteral("mArrowWidthDDBtn"));

        gridLayout->addWidget(mArrowWidthDDBtn, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mOffsetSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mOffsetSpin->setObjectName(QStringLiteral("mOffsetSpin"));
        sizePolicy.setHeightForWidth(mOffsetSpin->sizePolicy().hasHeightForWidth());
        mOffsetSpin->setSizePolicy(sizePolicy);
        mOffsetSpin->setDecimals(6);
        mOffsetSpin->setMinimum(-1e+8);
        mOffsetSpin->setMaximum(1e+8);
        mOffsetSpin->setSingleStep(0.2);

        horizontalLayout->addWidget(mOffsetSpin);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 6, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mArrowWidthSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mArrowWidthSpin->setObjectName(QStringLiteral("mArrowWidthSpin"));
        sizePolicy.setHeightForWidth(mArrowWidthSpin->sizePolicy().hasHeightForWidth());
        mArrowWidthSpin->setSizePolicy(sizePolicy);
        mArrowWidthSpin->setDecimals(6);
        mArrowWidthSpin->setMaximum(1e+9);
        mArrowWidthSpin->setSingleStep(0.2);
        mArrowWidthSpin->setProperty("showClearButton", QVariant(false));

        horizontalLayout_6->addWidget(mArrowWidthSpin);

        mArrowWidthUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mArrowWidthUnitWidget->setObjectName(QStringLiteral("mArrowWidthUnitWidget"));
        mArrowWidthUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_6->addWidget(mArrowWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        mHeadTypeDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mHeadTypeDDBtn->setObjectName(QStringLiteral("mHeadTypeDDBtn"));

        gridLayout->addWidget(mHeadTypeDDBtn, 0, 2, 1, 1);

        label_2 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        mArrowStartWidthDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mArrowStartWidthDDBtn->setObjectName(QStringLiteral("mArrowStartWidthDDBtn"));

        gridLayout->addWidget(mArrowStartWidthDDBtn, 3, 2, 1, 1);

        label_9 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mHeadLengthSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mHeadLengthSpin->setObjectName(QStringLiteral("mHeadLengthSpin"));
        sizePolicy.setHeightForWidth(mHeadLengthSpin->sizePolicy().hasHeightForWidth());
        mHeadLengthSpin->setSizePolicy(sizePolicy);
        mHeadLengthSpin->setDecimals(6);
        mHeadLengthSpin->setMaximum(1e+9);
        mHeadLengthSpin->setSingleStep(0.2);
        mHeadLengthSpin->setProperty("showClearButton", QVariant(false));

        horizontalLayout_7->addWidget(mHeadLengthSpin);

        mHeadLengthUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mHeadLengthUnitWidget->setObjectName(QStringLiteral("mHeadLengthUnitWidget"));
        mHeadLengthUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_7->addWidget(mHeadLengthUnitWidget);


        gridLayout->addLayout(horizontalLayout_7, 4, 1, 1, 1);

        label_10 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        mArrowTypeCombo = new QComboBox(QgsArrowSymbolLayerWidgetBase);
        mArrowTypeCombo->setObjectName(QStringLiteral("mArrowTypeCombo"));

        gridLayout->addWidget(mArrowTypeCombo, 1, 1, 1, 1);

        label = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mArrowStartWidthSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mArrowStartWidthSpin->setObjectName(QStringLiteral("mArrowStartWidthSpin"));
        sizePolicy.setHeightForWidth(mArrowStartWidthSpin->sizePolicy().hasHeightForWidth());
        mArrowStartWidthSpin->setSizePolicy(sizePolicy);
        mArrowStartWidthSpin->setDecimals(6);
        mArrowStartWidthSpin->setMaximum(1e+9);
        mArrowStartWidthSpin->setSingleStep(0.2);
        mArrowStartWidthSpin->setProperty("showClearButton", QVariant(false));

        horizontalLayout_9->addWidget(mArrowStartWidthSpin);

        mArrowStartWidthUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mArrowStartWidthUnitWidget->setObjectName(QStringLiteral("mArrowStartWidthUnitWidget"));
        mArrowStartWidthUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_9->addWidget(mArrowStartWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_9, 3, 1, 1, 1);

        mRepeatArrowChck = new QCheckBox(QgsArrowSymbolLayerWidgetBase);
        mRepeatArrowChck->setObjectName(QStringLiteral("mRepeatArrowChck"));
        mRepeatArrowChck->setChecked(true);
        mRepeatArrowChck->setTristate(false);

        gridLayout->addWidget(mRepeatArrowChck, 8, 1, 1, 1);

        QWidget::setTabOrder(mHeadTypeCombo, mHeadTypeDDBtn);
        QWidget::setTabOrder(mHeadTypeDDBtn, mArrowTypeCombo);
        QWidget::setTabOrder(mArrowTypeCombo, mArrowTypeDDBtn);
        QWidget::setTabOrder(mArrowTypeDDBtn, mArrowWidthSpin);
        QWidget::setTabOrder(mArrowWidthSpin, mArrowWidthUnitWidget);
        QWidget::setTabOrder(mArrowWidthUnitWidget, mArrowWidthDDBtn);
        QWidget::setTabOrder(mArrowWidthDDBtn, mArrowStartWidthSpin);
        QWidget::setTabOrder(mArrowStartWidthSpin, mArrowStartWidthUnitWidget);
        QWidget::setTabOrder(mArrowStartWidthUnitWidget, mArrowStartWidthDDBtn);
        QWidget::setTabOrder(mArrowStartWidthDDBtn, mHeadLengthSpin);
        QWidget::setTabOrder(mHeadLengthSpin, mHeadLengthUnitWidget);
        QWidget::setTabOrder(mHeadLengthUnitWidget, mHeadWidthDDBtn);
        QWidget::setTabOrder(mHeadWidthDDBtn, mHeadThicknessSpin);
        QWidget::setTabOrder(mHeadThicknessSpin, mHeadThicknessUnitWidget);
        QWidget::setTabOrder(mHeadThicknessUnitWidget, mHeadHeightDDBtn);
        QWidget::setTabOrder(mHeadHeightDDBtn, mOffsetSpin);
        QWidget::setTabOrder(mOffsetSpin, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mCurvedArrowChck);
        QWidget::setTabOrder(mCurvedArrowChck, mRepeatArrowChck);

        retranslateUi(QgsArrowSymbolLayerWidgetBase);

        QMetaObject::connectSlotsByName(QgsArrowSymbolLayerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsArrowSymbolLayerWidgetBase)
    {
        mArrowTypeDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        mHeadTypeCombo->clear();
        mHeadTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Single", Q_NULLPTR)
         << QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Single, reversed", Q_NULLPTR)
         << QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Double", Q_NULLPTR)
        );
        mCurvedArrowChck->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Curved arrows", Q_NULLPTR));
        mHeadHeightDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Offset", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Arrow type", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Arrow width", Q_NULLPTR));
        mHeadWidthDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        mArrowWidthDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        mHeadTypeDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Head thickness", Q_NULLPTR));
        mArrowStartWidthDDBtn->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Head length", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Head type", Q_NULLPTR));
        mArrowTypeCombo->clear();
        mArrowTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Plain", Q_NULLPTR)
         << QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Left/Exterior half", Q_NULLPTR)
         << QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Right/Interior half", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        mArrowTypeCombo->setToolTip(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "<html><head/><body><p>Plain: the arrow will be displayed entirely</p><p>Left/Exterior half: only the half of the head that is on the left of the arrow for straight arrows, or the one toward the exterior for curved arrows will be displayed</p><p>Right/Interior half: only the half of the head that is on the right of the arrow for straight arrows, or the one toward the interior for curved arrows will be displayed</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Arrow width at start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRepeatArrowChck->setToolTip(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "<html><head/><body><p>If checked, one arrow will be rendered for each consecutive points (each 2 points for a straight arrow or 3 points for a curved arrow).</p><p>If unchecked, the arrow will be defined by extermum points of the line (the middle point will be used as a control point for a curved arrow)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRepeatArrowChck->setText(QApplication::translate("QgsArrowSymbolLayerWidgetBase", "Repeat arrow on each segment", Q_NULLPTR));
        Q_UNUSED(QgsArrowSymbolLayerWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsArrowSymbolLayerWidgetBase: public Ui_QgsArrowSymbolLayerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARROWSYMBOLLAYERWIDGETBASE_H
