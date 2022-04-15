/********************************************************************************
** Form generated from reading UI file 'qgslayoutpagepropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTPAGEPROPERTIESWIDGET_H
#define UI_QGSLAYOUTPAGEPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutPagePropertiesWidget
{
public:
    QGridLayout *gridLayout_2;
    QgsSymbolButton *mSymbolButton;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *mWidthLabel;
    QGridLayout *gridLayout_3;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QgsDoubleSpinBox *mHeightSpin;
    QgsDoubleSpinBox *mWidthSpin;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QLabel *mHeightLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *mPageSizeComboBox;
    QgsPropertyOverrideButton *mPaperSizeDDBtn;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mPageOrientationComboBox;
    QgsPropertyOverrideButton *mOrientationDDBtn;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mExcludePageCheckBox;
    QgsPropertyOverrideButton *mExcludePageDDBtn;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsLayoutPagePropertiesWidget)
    {
        if (QgsLayoutPagePropertiesWidget->objectName().isEmpty())
            QgsLayoutPagePropertiesWidget->setObjectName(QStringLiteral("QgsLayoutPagePropertiesWidget"));
        QgsLayoutPagePropertiesWidget->resize(717, 473);
        gridLayout_2 = new QGridLayout(QgsLayoutPagePropertiesWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mSymbolButton = new QgsSymbolButton(QgsLayoutPagePropertiesWidget);
        mSymbolButton->setObjectName(QStringLiteral("mSymbolButton"));
        mSymbolButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSymbolButton->sizePolicy().hasHeightForWidth());
        mSymbolButton->setSizePolicy(sizePolicy);
        mSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(mSymbolButton, 4, 1, 1, 1);

        label = new QLabel(QgsLayoutPagePropertiesWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        groupBox = new QGroupBox(QgsLayoutPagePropertiesWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mWidthLabel = new QLabel(groupBox);
        mWidthLabel->setObjectName(QStringLiteral("mWidthLabel"));

        gridLayout->addWidget(mWidthLabel, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mSizeUnitsComboBox->setObjectName(QStringLiteral("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 0, 5, 2, 1);

        mHeightSpin = new QgsDoubleSpinBox(groupBox);
        mHeightSpin->setObjectName(QStringLiteral("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(1e+7);
        mHeightSpin->setValue(100);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 1, 0, 1, 3);

        mWidthSpin = new QgsDoubleSpinBox(groupBox);
        mWidthSpin->setObjectName(QStringLiteral("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(1e+7);
        mWidthSpin->setValue(100);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 0, 0, 1, 3);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(groupBox);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 4, 2, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(groupBox);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 0, 3, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(groupBox);
        mHeightDDBtn->setObjectName(QStringLiteral("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 1, 3, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_3, 3, 1, 2, 1);

        mHeightLabel = new QLabel(groupBox);
        mHeightLabel->setObjectName(QStringLiteral("mHeightLabel"));

        gridLayout->addWidget(mHeightLabel, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mPageSizeComboBox = new QComboBox(groupBox);
        mPageSizeComboBox->setObjectName(QStringLiteral("mPageSizeComboBox"));

        horizontalLayout->addWidget(mPageSizeComboBox);

        mPaperSizeDDBtn = new QgsPropertyOverrideButton(groupBox);
        mPaperSizeDDBtn->setObjectName(QStringLiteral("mPaperSizeDDBtn"));

        horizontalLayout->addWidget(mPaperSizeDDBtn);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mPageOrientationComboBox = new QComboBox(groupBox);
        mPageOrientationComboBox->setObjectName(QStringLiteral("mPageOrientationComboBox"));

        horizontalLayout_3->addWidget(mPageOrientationComboBox);

        mOrientationDDBtn = new QgsPropertyOverrideButton(groupBox);
        mOrientationDDBtn->setObjectName(QStringLiteral("mOrientationDDBtn"));

        horizontalLayout_3->addWidget(mOrientationDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mExcludePageCheckBox = new QCheckBox(QgsLayoutPagePropertiesWidget);
        mExcludePageCheckBox->setObjectName(QStringLiteral("mExcludePageCheckBox"));
        mExcludePageCheckBox->setChecked(false);

        horizontalLayout_2->addWidget(mExcludePageCheckBox);

        mExcludePageDDBtn = new QgsPropertyOverrideButton(QgsLayoutPagePropertiesWidget);
        mExcludePageDDBtn->setObjectName(QStringLiteral("mExcludePageDDBtn"));

        horizontalLayout_2->addWidget(mExcludePageDDBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);
        QWidget::setTabOrder(mPageSizeComboBox, mPaperSizeDDBtn);
        QWidget::setTabOrder(mPaperSizeDDBtn, mPageOrientationComboBox);
        QWidget::setTabOrder(mPageOrientationComboBox, mOrientationDDBtn);
        QWidget::setTabOrder(mOrientationDDBtn, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mSizeUnitsComboBox);
        QWidget::setTabOrder(mSizeUnitsComboBox, mExcludePageCheckBox);
        QWidget::setTabOrder(mExcludePageCheckBox, mExcludePageDDBtn);
        QWidget::setTabOrder(mExcludePageDDBtn, mSymbolButton);

        retranslateUi(QgsLayoutPagePropertiesWidget);

        QMetaObject::connectSlotsByName(QgsLayoutPagePropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutPagePropertiesWidget)
    {
        QgsLayoutPagePropertiesWidget->setWindowTitle(QApplication::translate("QgsLayoutPagePropertiesWidget", "New Item Properties", Q_NULLPTR));
        mSymbolButton->setText(QString());
        label->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "Background", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutPagePropertiesWidget", "Page Size", Q_NULLPTR));
        mWidthLabel->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "Width", Q_NULLPTR));
        mHeightSpin->setSuffix(QString());
        mWidthSpin->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("QgsLayoutPagePropertiesWidget", "Lock aspect ratio (including while drawing extent onto canvas)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mWidthDDBtn->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", Q_NULLPTR));
        mHeightDDBtn->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", Q_NULLPTR));
        mHeightLabel->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "Height", Q_NULLPTR));
        mPaperSizeDDBtn->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "Size", Q_NULLPTR));
        mOrientationDDBtn->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "Orientation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mExcludePageCheckBox->setToolTip(QApplication::translate("QgsLayoutPagePropertiesWidget", "If checked, this page will not be included when exporting the layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mExcludePageCheckBox->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "Exclude page from exports", Q_NULLPTR));
        mExcludePageDDBtn->setText(QApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutPagePropertiesWidget: public Ui_QgsLayoutPagePropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTPAGEPROPERTIESWIDGET_H
