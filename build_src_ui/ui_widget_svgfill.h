/********************************************************************************
** Form generated from reading UI file 'widget_svgfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGFILL_H
#define UI_WIDGET_SVGFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSVGFill
{
public:
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mFilColorDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mTextureWidthSpinBox;
    QgsUnitSelectionWidget *mTextureWidthUnitWidget;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QgsDoubleSpinBox *mRotationSpinBox;
    QgsColorButton *mChangeColorButton;
    QLabel *mStrokeColorLabel;
    QLabel *label;
    QgsColorButton *mChangeStrokeColorButton;
    QLabel *mRotationLabel;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mSvgStrokeWidthUnitWidget;
    QLabel *mStrokeWidthLabel;
    QgsPropertyOverrideButton *mTextureWidthDDBtn;
    QLabel *mTextureWidthLabel;
    QgsPropertyOverrideButton *mSVGDDBtn;
    QGridLayout *gridLayout_2;
    QLabel *mSymbolGroupLabel;
    QLabel *mSymbolListLabel;
    QTreeView *mSvgTreeView;
    QListView *mSvgListView;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QgsSvgSourceLineEdit *mSvgSourceLineEdit;

    void setupUi(QWidget *WidgetSVGFill)
    {
        if (WidgetSVGFill->objectName().isEmpty())
            WidgetSVGFill->setObjectName(QStringLiteral("WidgetSVGFill"));
        WidgetSVGFill->resize(328, 509);
        WidgetSVGFill->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(WidgetSVGFill);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mFilColorDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mFilColorDDBtn->setObjectName(QStringLiteral("mFilColorDDBtn"));

        gridLayout->addWidget(mFilColorDDBtn, 3, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mTextureWidthSpinBox = new QgsDoubleSpinBox(WidgetSVGFill);
        mTextureWidthSpinBox->setObjectName(QStringLiteral("mTextureWidthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTextureWidthSpinBox->sizePolicy().hasHeightForWidth());
        mTextureWidthSpinBox->setSizePolicy(sizePolicy);
        mTextureWidthSpinBox->setDecimals(6);
        mTextureWidthSpinBox->setMaximum(1e+9);
        mTextureWidthSpinBox->setSingleStep(0.2);
        mTextureWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_2->addWidget(mTextureWidthSpinBox);

        mTextureWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSVGFill);
        mTextureWidthUnitWidget->setObjectName(QStringLiteral("mTextureWidthUnitWidget"));
        mTextureWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mTextureWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mRotationDDBtn->setObjectName(QStringLiteral("mRotationDDBtn"));

        gridLayout->addWidget(mRotationDDBtn, 8, 3, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetSVGFill);
        mRotationSpinBox->setObjectName(QStringLiteral("mRotationSpinBox"));
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360);
        mRotationSpinBox->setMaximum(360);
        mRotationSpinBox->setSingleStep(0.5);

        gridLayout->addWidget(mRotationSpinBox, 8, 1, 1, 1);

        mChangeColorButton = new QgsColorButton(WidgetSVGFill);
        mChangeColorButton->setObjectName(QStringLiteral("mChangeColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mChangeColorButton->sizePolicy().hasHeightForWidth());
        mChangeColorButton->setSizePolicy(sizePolicy1);
        mChangeColorButton->setMinimumSize(QSize(120, 0));
        mChangeColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mChangeColorButton, 3, 1, 1, 1);

        mStrokeColorLabel = new QLabel(WidgetSVGFill);
        mStrokeColorLabel->setObjectName(QStringLiteral("mStrokeColorLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mStrokeColorLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mStrokeColorLabel, 5, 0, 1, 1);

        label = new QLabel(WidgetSVGFill);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mChangeStrokeColorButton = new QgsColorButton(WidgetSVGFill);
        mChangeStrokeColorButton->setObjectName(QStringLiteral("mChangeStrokeColorButton"));
        sizePolicy1.setHeightForWidth(mChangeStrokeColorButton->sizePolicy().hasHeightForWidth());
        mChangeStrokeColorButton->setSizePolicy(sizePolicy1);
        mChangeStrokeColorButton->setMinimumSize(QSize(120, 0));
        mChangeStrokeColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mChangeStrokeColorButton, 5, 1, 1, 1);

        mRotationLabel = new QLabel(WidgetSVGFill);
        mRotationLabel->setObjectName(QStringLiteral("mRotationLabel"));

        gridLayout->addWidget(mRotationLabel, 8, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetSVGFill);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        sizePolicy.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(1e+9);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_4->addWidget(mStrokeWidthSpinBox);

        mSvgStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSVGFill);
        mSvgStrokeWidthUnitWidget->setObjectName(QStringLiteral("mSvgStrokeWidthUnitWidget"));
        mSvgStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mSvgStrokeWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 6, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetSVGFill);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout->addWidget(mStrokeWidthLabel, 6, 0, 1, 1);

        mTextureWidthDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mTextureWidthDDBtn->setObjectName(QStringLiteral("mTextureWidthDDBtn"));

        gridLayout->addWidget(mTextureWidthDDBtn, 0, 3, 1, 1);

        mTextureWidthLabel = new QLabel(WidgetSVGFill);
        mTextureWidthLabel->setObjectName(QStringLiteral("mTextureWidthLabel"));

        gridLayout->addWidget(mTextureWidthLabel, 0, 0, 1, 1);

        mSVGDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mSVGDDBtn->setObjectName(QStringLiteral("mSVGDDBtn"));

        gridLayout->addWidget(mSVGDDBtn, 10, 3, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mSymbolGroupLabel = new QLabel(WidgetSVGFill);
        mSymbolGroupLabel->setObjectName(QStringLiteral("mSymbolGroupLabel"));

        gridLayout_2->addWidget(mSymbolGroupLabel, 0, 0, 1, 1);

        mSymbolListLabel = new QLabel(WidgetSVGFill);
        mSymbolListLabel->setObjectName(QStringLiteral("mSymbolListLabel"));

        gridLayout_2->addWidget(mSymbolListLabel, 0, 1, 1, 1);

        mSvgTreeView = new QTreeView(WidgetSVGFill);
        mSvgTreeView->setObjectName(QStringLiteral("mSvgTreeView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSvgTreeView->sizePolicy().hasHeightForWidth());
        mSvgTreeView->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mSvgTreeView, 1, 0, 1, 1);

        mSvgListView = new QListView(WidgetSVGFill);
        mSvgListView->setObjectName(QStringLiteral("mSvgListView"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(5);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mSvgListView->sizePolicy().hasHeightForWidth());
        mSvgListView->setSizePolicy(sizePolicy4);
        mSvgListView->setMinimumSize(QSize(0, 250));
        mSvgListView->setIconSize(QSize(32, 32));
        mSvgListView->setFlow(QListView::LeftToRight);
        mSvgListView->setResizeMode(QListView::Adjust);
        mSvgListView->setLayoutMode(QListView::Batched);
        mSvgListView->setGridSize(QSize(36, 36));
        mSvgListView->setViewMode(QListView::IconMode);
        mSvgListView->setUniformItemSizes(true);

        gridLayout_2->addWidget(mSvgListView, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 9, 0, 1, 4);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout->addWidget(mStrokeWidthDDBtn, 6, 3, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout->addWidget(mStrokeColorDDBtn, 5, 3, 1, 1);

        mSvgSourceLineEdit = new QgsSvgSourceLineEdit(WidgetSVGFill);
        mSvgSourceLineEdit->setObjectName(QStringLiteral("mSvgSourceLineEdit"));
        mSvgSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mSvgSourceLineEdit, 10, 0, 1, 3);

        QWidget::setTabOrder(mTextureWidthSpinBox, mTextureWidthUnitWidget);
        QWidget::setTabOrder(mTextureWidthUnitWidget, mTextureWidthDDBtn);
        QWidget::setTabOrder(mTextureWidthDDBtn, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mFilColorDDBtn);
        QWidget::setTabOrder(mFilColorDDBtn, mChangeStrokeColorButton);
        QWidget::setTabOrder(mChangeStrokeColorButton, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mSvgStrokeWidthUnitWidget);
        QWidget::setTabOrder(mSvgStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, mSvgTreeView);
        QWidget::setTabOrder(mSvgTreeView, mSvgListView);
        QWidget::setTabOrder(mSvgListView, mSvgSourceLineEdit);
        QWidget::setTabOrder(mSvgSourceLineEdit, mSVGDDBtn);

        retranslateUi(WidgetSVGFill);

        QMetaObject::connectSlotsByName(WidgetSVGFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSVGFill)
    {
        mFilColorDDBtn->setText(QApplication::translate("WidgetSVGFill", "\342\200\246", Q_NULLPTR));
        mRotationDDBtn->setText(QApplication::translate("WidgetSVGFill", "\342\200\246", Q_NULLPTR));
        mRotationSpinBox->setSuffix(QApplication::translate("WidgetSVGFill", " \302\260", Q_NULLPTR));
        mChangeColorButton->setText(QString());
        mStrokeColorLabel->setText(QApplication::translate("WidgetSVGFill", "Stroke color", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetSVGFill", "Fill color", Q_NULLPTR));
        mChangeStrokeColorButton->setText(QString());
        mRotationLabel->setText(QApplication::translate("WidgetSVGFill", "Rotation", Q_NULLPTR));
        mStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetSVGFill", "No stroke", Q_NULLPTR));
        mStrokeWidthLabel->setText(QApplication::translate("WidgetSVGFill", "Stroke width", Q_NULLPTR));
        mTextureWidthDDBtn->setText(QApplication::translate("WidgetSVGFill", "\342\200\246", Q_NULLPTR));
        mTextureWidthLabel->setText(QApplication::translate("WidgetSVGFill", "Texture width", Q_NULLPTR));
        mSVGDDBtn->setText(QApplication::translate("WidgetSVGFill", "\342\200\246", Q_NULLPTR));
        mSymbolGroupLabel->setText(QApplication::translate("WidgetSVGFill", "SVG Groups", Q_NULLPTR));
        mSymbolListLabel->setText(QApplication::translate("WidgetSVGFill", "SVG Symbols", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetSVGFill", "\342\200\246", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetSVGFill", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetSVGFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetSVGFill: public Ui_WidgetSVGFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGFILL_H
