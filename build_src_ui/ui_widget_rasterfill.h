/********************************************************************************
** Form generated from reading UI file 'widget_rasterfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RASTERFILL_H
#define UI_WIDGET_RASTERFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRasterFill
{
public:
    QGridLayout *gridLayout_2;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QgsImageSourceLineEdit *mImageSourceLineEdit;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mSpinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *mSpinOffsetX;
    QSpacerItem *verticalSpacer;
    QComboBox *cboCoordinateMode;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelImagePreview;
    QSpacerItem *horizontalSpacer;
    QgsDoubleSpinBox *mRotationSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsUnitSelectionWidget *mWidthUnitWidget;
    QgsPropertyOverrideButton *mFilenameDDBtn;
    QgsOpacityWidget *mOpacityWidget;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *mRotationLabel;
    QLabel *label;
    QLabel *label_3;
    QLabel *mTextureWidthLabel;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetRasterFill)
    {
        if (WidgetRasterFill->objectName().isEmpty())
            WidgetRasterFill->setObjectName(QStringLiteral("WidgetRasterFill"));
        WidgetRasterFill->resize(338, 419);
        WidgetRasterFill->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(WidgetRasterFill);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mRotationDDBtn->setObjectName(QStringLiteral("mRotationDDBtn"));

        gridLayout_2->addWidget(mRotationDDBtn, 5, 3, 1, 1);

        mImageSourceLineEdit = new QgsImageSourceLineEdit(WidgetRasterFill);
        mImageSourceLineEdit->setObjectName(QStringLiteral("mImageSourceLineEdit"));
        mImageSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mImageSourceLineEdit, 1, 0, 1, 3);

        mWidthDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        gridLayout_2->addWidget(mWidthDDBtn, 2, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mSpinOffsetY = new QgsDoubleSpinBox(WidgetRasterFill);
        mSpinOffsetY->setObjectName(QStringLiteral("mSpinOffsetY"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinOffsetY->sizePolicy().hasHeightForWidth());
        mSpinOffsetY->setSizePolicy(sizePolicy);
        mSpinOffsetY->setDecimals(6);
        mSpinOffsetY->setMinimum(-1e+8);
        mSpinOffsetY->setMaximum(1e+8);
        mSpinOffsetY->setSingleStep(0.2);

        gridLayout->addWidget(mSpinOffsetY, 1, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetRasterFill);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 1, 2, 1);

        mSpinOffsetX = new QgsDoubleSpinBox(WidgetRasterFill);
        mSpinOffsetX->setObjectName(QStringLiteral("mSpinOffsetX"));
        sizePolicy.setHeightForWidth(mSpinOffsetX->sizePolicy().hasHeightForWidth());
        mSpinOffsetX->setSizePolicy(sizePolicy);
        mSpinOffsetX->setDecimals(6);
        mSpinOffsetX->setMinimum(-1e+8);
        mSpinOffsetX->setMaximum(1e+8);
        mSpinOffsetX->setSingleStep(0.2);

        gridLayout->addWidget(mSpinOffsetX, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 1);

        cboCoordinateMode = new QComboBox(WidgetRasterFill);
        cboCoordinateMode->setObjectName(QStringLiteral("cboCoordinateMode"));

        gridLayout_2->addWidget(cboCoordinateMode, 3, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        mLabelImagePreview = new QLabel(WidgetRasterFill);
        mLabelImagePreview->setObjectName(QStringLiteral("mLabelImagePreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabelImagePreview->sizePolicy().hasHeightForWidth());
        mLabelImagePreview->setSizePolicy(sizePolicy1);
        mLabelImagePreview->setMinimumSize(QSize(150, 150));
        mLabelImagePreview->setFrameShape(QFrame::Panel);
        mLabelImagePreview->setFrameShadow(QFrame::Sunken);
        mLabelImagePreview->setLineWidth(1);
        mLabelImagePreview->setMidLineWidth(0);

        horizontalLayout_4->addWidget(mLabelImagePreview);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 4);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetRasterFill);
        mRotationSpinBox->setObjectName(QStringLiteral("mRotationSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mRotationSpinBox->sizePolicy().hasHeightForWidth());
        mRotationSpinBox->setSizePolicy(sizePolicy2);
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360);
        mRotationSpinBox->setMaximum(360);
        mRotationSpinBox->setSingleStep(0.5);

        gridLayout_2->addWidget(mRotationSpinBox, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mWidthSpinBox = new QgsDoubleSpinBox(WidgetRasterFill);
        mWidthSpinBox->setObjectName(QStringLiteral("mWidthSpinBox"));
        sizePolicy.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(1e+8);
        mWidthSpinBox->setSingleStep(0.2);

        horizontalLayout_2->addWidget(mWidthSpinBox);

        mWidthUnitWidget = new QgsUnitSelectionWidget(WidgetRasterFill);
        mWidthUnitWidget->setObjectName(QStringLiteral("mWidthUnitWidget"));
        mWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 2, 1, 1);

        mFilenameDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mFilenameDDBtn->setObjectName(QStringLiteral("mFilenameDDBtn"));

        gridLayout_2->addWidget(mFilenameDDBtn, 1, 3, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(WidgetRasterFill);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 4, 2, 1, 1);

        mOpacityDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mOpacityDDBtn->setObjectName(QStringLiteral("mOpacityDDBtn"));

        gridLayout_2->addWidget(mOpacityDDBtn, 4, 3, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(WidgetRasterFill);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(WidgetRasterFill);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 1, 1, 1);

        label_7 = new QLabel(WidgetRasterFill);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout_2->addLayout(gridLayout_3, 8, 0, 1, 2);

        mRotationLabel = new QLabel(WidgetRasterFill);
        mRotationLabel->setObjectName(QStringLiteral("mRotationLabel"));

        gridLayout_2->addWidget(mRotationLabel, 5, 0, 1, 2);

        label = new QLabel(WidgetRasterFill);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 2);

        label_3 = new QLabel(WidgetRasterFill);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 2);

        mTextureWidthLabel = new QLabel(WidgetRasterFill);
        mTextureWidthLabel->setObjectName(QStringLiteral("mTextureWidthLabel"));

        gridLayout_2->addWidget(mTextureWidthLabel, 2, 0, 1, 2);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 8, 3, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(mSpinOffsetX);
        mRotationLabel->setBuddy(mRotationSpinBox);
        label_3->setBuddy(cboCoordinateMode);
        mTextureWidthLabel->setBuddy(mWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mImageSourceLineEdit, mFilenameDDBtn);
        QWidget::setTabOrder(mFilenameDDBtn, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mWidthUnitWidget);
        QWidget::setTabOrder(mWidthUnitWidget, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, cboCoordinateMode);
        QWidget::setTabOrder(cboCoordinateMode, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, mSpinOffsetX);
        QWidget::setTabOrder(mSpinOffsetX, mSpinOffsetY);
        QWidget::setTabOrder(mSpinOffsetY, mOffsetUnitWidget);

        retranslateUi(WidgetRasterFill);

        QMetaObject::connectSlotsByName(WidgetRasterFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetRasterFill)
    {
        mRotationDDBtn->setText(QApplication::translate("WidgetRasterFill", "\342\200\246", Q_NULLPTR));
        mWidthDDBtn->setText(QApplication::translate("WidgetRasterFill", "\342\200\246", Q_NULLPTR));
        cboCoordinateMode->clear();
        cboCoordinateMode->insertItems(0, QStringList()
         << QApplication::translate("WidgetRasterFill", "Object", Q_NULLPTR)
         << QApplication::translate("WidgetRasterFill", "Viewport", Q_NULLPTR)
        );
        mLabelImagePreview->setText(QString());
        mRotationSpinBox->setSuffix(QApplication::translate("WidgetRasterFill", " \302\260", Q_NULLPTR));
        mWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetRasterFill", "Original", Q_NULLPTR));
        mFilenameDDBtn->setText(QApplication::translate("WidgetRasterFill", "\342\200\246", Q_NULLPTR));
        mOpacityDDBtn->setText(QApplication::translate("WidgetRasterFill", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetRasterFill", "x", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetRasterFill", "y", Q_NULLPTR));
        label_7->setText(QApplication::translate("WidgetRasterFill", "Offset", Q_NULLPTR));
        mRotationLabel->setText(QApplication::translate("WidgetRasterFill", "Rotation", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetRasterFill", "Opacity", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetRasterFill", "Coord mode", Q_NULLPTR));
        mTextureWidthLabel->setText(QApplication::translate("WidgetRasterFill", "Image width", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetRasterFill", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetRasterFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetRasterFill: public Ui_WidgetRasterFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RASTERFILL_H
