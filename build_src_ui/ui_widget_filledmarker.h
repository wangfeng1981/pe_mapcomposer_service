/********************************************************************************
** Form generated from reading UI file 'widget_filledmarker.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_FILLEDMARKER_H
#define UI_WIDGET_FILLEDMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetFilledMarker
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QLabel *label_4;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QgsDoubleSpinBox *spinOffsetY;
    QLabel *label;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QLabel *mAnchorPointLabel;
    QComboBox *mHorizontalAnchorComboBox;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QComboBox *mVerticalAnchorComboBox;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QListWidget *lstNames;
    QgsPropertyOverrideButton *mNameDDBtn;

    void setupUi(QWidget *WidgetFilledMarker)
    {
        if (WidgetFilledMarker->objectName().isEmpty())
            WidgetFilledMarker->setObjectName(QStringLiteral("WidgetFilledMarker"));
        WidgetFilledMarker->resize(341, 312);
        WidgetFilledMarker->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(WidgetFilledMarker);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(WidgetFilledMarker);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        spinSize = new QgsDoubleSpinBox(WidgetFilledMarker);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy);
        spinSize->setDecimals(6);
        spinSize->setMaximum(100000);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetFilledMarker);
        mSizeUnitWidget->setObjectName(QStringLiteral("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mSizeUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 0, 2, 1, 1);

        mSizeDDBtn = new QgsPropertyOverrideButton(WidgetFilledMarker);
        mSizeDDBtn->setObjectName(QStringLiteral("mSizeDDBtn"));

        gridLayout->addWidget(mSizeDDBtn, 0, 3, 1, 1);

        label_4 = new QLabel(WidgetFilledMarker);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetFilledMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout->addWidget(spinAngle, 1, 2, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetFilledMarker);
        mAngleDDBtn->setObjectName(QStringLiteral("mAngleDDBtn"));

        gridLayout->addWidget(mAngleDDBtn, 1, 3, 1, 1);

        label_5 = new QLabel(WidgetFilledMarker);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 2, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(WidgetFilledMarker);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetFilledMarker);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+8);
        spinOffsetY->setMaximum(1e+8);
        spinOffsetY->setSingleStep(0.2);

        gridLayout_2->addWidget(spinOffsetY, 1, 1, 1, 1);

        label = new QLabel(WidgetFilledMarker);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetFilledMarker);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        sizePolicy.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+8);
        spinOffsetX->setMaximum(1e+8);
        spinOffsetX->setSingleStep(0.2);

        gridLayout_2->addWidget(spinOffsetX, 0, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetFilledMarker);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout->addLayout(gridLayout_2, 2, 2, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetFilledMarker);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 2, 3, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetFilledMarker);
        mAnchorPointLabel->setObjectName(QStringLiteral("mAnchorPointLabel"));
        mAnchorPointLabel->setWordWrap(true);

        gridLayout->addWidget(mAnchorPointLabel, 5, 0, 2, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetFilledMarker);
        mHorizontalAnchorComboBox->setObjectName(QStringLiteral("mHorizontalAnchorComboBox"));

        gridLayout->addWidget(mHorizontalAnchorComboBox, 6, 2, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetFilledMarker);
        mHorizontalAnchorDDBtn->setObjectName(QStringLiteral("mHorizontalAnchorDDBtn"));

        gridLayout->addWidget(mHorizontalAnchorDDBtn, 6, 3, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetFilledMarker);
        mVerticalAnchorComboBox->setObjectName(QStringLiteral("mVerticalAnchorComboBox"));

        gridLayout->addWidget(mVerticalAnchorComboBox, 5, 2, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetFilledMarker);
        mVerticalAnchorDDBtn->setObjectName(QStringLiteral("mVerticalAnchorDDBtn"));

        gridLayout->addWidget(mVerticalAnchorDDBtn, 5, 3, 1, 1);

        lstNames = new QListWidget(WidgetFilledMarker);
        lstNames->setObjectName(QStringLiteral("lstNames"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstNames->sizePolicy().hasHeightForWidth());
        lstNames->setSizePolicy(sizePolicy1);
        lstNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstNames->setIconSize(QSize(20, 20));
        lstNames->setMovement(QListView::Static);
        lstNames->setFlow(QListView::LeftToRight);
        lstNames->setResizeMode(QListView::Adjust);
        lstNames->setSpacing(4);
        lstNames->setGridSize(QSize(30, 25));
        lstNames->setViewMode(QListView::IconMode);
        lstNames->setWordWrap(true);

        gridLayout->addWidget(lstNames, 8, 0, 1, 3);

        mNameDDBtn = new QgsPropertyOverrideButton(WidgetFilledMarker);
        mNameDDBtn->setObjectName(QStringLiteral("mNameDDBtn"));

        gridLayout->addWidget(mNameDDBtn, 8, 3, 1, 1);

        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, lstNames);
        QWidget::setTabOrder(lstNames, mNameDDBtn);

        retranslateUi(WidgetFilledMarker);

        QMetaObject::connectSlotsByName(WidgetFilledMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetFilledMarker)
    {
        label_3->setText(QApplication::translate("WidgetFilledMarker", "Size", Q_NULLPTR));
        mSizeDDBtn->setText(QApplication::translate("WidgetFilledMarker", "\342\200\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetFilledMarker", "Rotation", Q_NULLPTR));
        spinAngle->setSuffix(QApplication::translate("WidgetFilledMarker", " \302\260", Q_NULLPTR));
        mAngleDDBtn->setText(QApplication::translate("WidgetFilledMarker", "\342\200\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetFilledMarker", "Offset", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetFilledMarker", "y", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetFilledMarker", "x", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetFilledMarker", "\342\200\246", Q_NULLPTR));
        mAnchorPointLabel->setText(QApplication::translate("WidgetFilledMarker", "Anchor point", Q_NULLPTR));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetFilledMarker", "Left", Q_NULLPTR)
         << QApplication::translate("WidgetFilledMarker", "HCenter", Q_NULLPTR)
         << QApplication::translate("WidgetFilledMarker", "Right", Q_NULLPTR)
        );
        mHorizontalAnchorDDBtn->setText(QApplication::translate("WidgetFilledMarker", "\342\200\246", Q_NULLPTR));
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetFilledMarker", "Top", Q_NULLPTR)
         << QApplication::translate("WidgetFilledMarker", "VCenter", Q_NULLPTR)
         << QApplication::translate("WidgetFilledMarker", "Bottom", Q_NULLPTR)
        );
        mVerticalAnchorDDBtn->setText(QApplication::translate("WidgetFilledMarker", "\342\200\246", Q_NULLPTR));
        mNameDDBtn->setText(QApplication::translate("WidgetFilledMarker", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetFilledMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetFilledMarker: public Ui_WidgetFilledMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FILLEDMARKER_H
