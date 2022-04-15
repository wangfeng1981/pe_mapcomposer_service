/********************************************************************************
** Form generated from reading UI file 'widget_ellipse.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ELLIPSE_H
#define UI_WIDGET_ELLIPSE_H

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
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetEllipseBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *mSymbolWidthLabel;
    QLabel *label_8;
    QgsPenStyleComboBox *mStrokeStyleComboBox;
    QListWidget *mShapeListWidget;
    QComboBox *mHorizontalAnchorComboBox;
    QLabel *mSymbolHeightLabel;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_4;
    QgsDoubleSpinBox *spinOffsetY;
    QLabel *mAnchorPointLabel;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QComboBox *mVerticalAnchorComboBox;
    QLabel *label_5;
    QLabel *mRotationLabel;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsUnitSelectionWidget *mSymbolWidthUnitWidget;
    QgsDoubleSpinBox *mRotationSpinBox;
    QgsPropertyOverrideButton *mSymbolWidthDDBtn;
    QgsPropertyOverrideButton *mShapeDDBtn;
    QLabel *label_3;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QLabel *mStrokeStyleLabel;
    QgsPropertyOverrideButton *mStrokeStyleDDBtn;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mHeightSpinBox;
    QgsUnitSelectionWidget *mSymbolHeightUnitWidget;
    QgsPropertyOverrideButton *mSymbolHeightDDBtn;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsColorButton *btnChangeColorStroke;
    QLabel *label;
    QgsColorButton *btnChangeColorFill;
    QLabel *mStrokeWidthLabel;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;

    void setupUi(QWidget *WidgetEllipseBase)
    {
        if (WidgetEllipseBase->objectName().isEmpty())
            WidgetEllipseBase->setObjectName(QStringLiteral("WidgetEllipseBase"));
        WidgetEllipseBase->resize(328, 680);
        WidgetEllipseBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(WidgetEllipseBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mSymbolWidthLabel = new QLabel(WidgetEllipseBase);
        mSymbolWidthLabel->setObjectName(QStringLiteral("mSymbolWidthLabel"));

        gridLayout_2->addWidget(mSymbolWidthLabel, 2, 0, 1, 1);

        label_8 = new QLabel(WidgetEllipseBase);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1);

        mStrokeStyleComboBox = new QgsPenStyleComboBox(WidgetEllipseBase);
        mStrokeStyleComboBox->setObjectName(QStringLiteral("mStrokeStyleComboBox"));

        gridLayout_2->addWidget(mStrokeStyleComboBox, 6, 1, 1, 1);

        mShapeListWidget = new QListWidget(WidgetEllipseBase);
        mShapeListWidget->setObjectName(QStringLiteral("mShapeListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mShapeListWidget->sizePolicy().hasHeightForWidth());
        mShapeListWidget->setSizePolicy(sizePolicy);
        mShapeListWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        mShapeListWidget->setIconSize(QSize(20, 20));
        mShapeListWidget->setMovement(QListView::Static);
        mShapeListWidget->setFlow(QListView::LeftToRight);
        mShapeListWidget->setResizeMode(QListView::Adjust);
        mShapeListWidget->setSpacing(4);
        mShapeListWidget->setGridSize(QSize(30, 24));
        mShapeListWidget->setViewMode(QListView::IconMode);
        mShapeListWidget->setWordWrap(true);
        mShapeListWidget->setSelectionRectVisible(true);

        gridLayout_2->addWidget(mShapeListWidget, 14, 0, 1, 2);

        mHorizontalAnchorComboBox = new QComboBox(WidgetEllipseBase);
        mHorizontalAnchorComboBox->setObjectName(QStringLiteral("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 13, 1, 1, 1);

        mSymbolHeightLabel = new QLabel(WidgetEllipseBase);
        mSymbolHeightLabel->setObjectName(QStringLiteral("mSymbolHeightLabel"));

        gridLayout_2->addWidget(mSymbolHeightLabel, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(WidgetEllipseBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetEllipseBase);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+9);
        spinOffsetX->setMaximum(1e+9);
        spinOffsetX->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetX, 2, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 2, 2, 2, 1);

        label_4 = new QLabel(WidgetEllipseBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetEllipseBase);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+9);
        spinOffsetY->setMaximum(1e+9);
        spinOffsetY->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetY, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 11, 1, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetEllipseBase);
        mAnchorPointLabel->setObjectName(QStringLiteral("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 12, 0, 2, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetEllipseBase);
        cboJoinStyle->setObjectName(QStringLiteral("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 8, 1, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetEllipseBase);
        mVerticalAnchorComboBox->setObjectName(QStringLiteral("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 12, 1, 1, 1);

        label_5 = new QLabel(WidgetEllipseBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 11, 0, 1, 1);

        mRotationLabel = new QLabel(WidgetEllipseBase);
        mRotationLabel->setObjectName(QStringLiteral("mRotationLabel"));

        gridLayout_2->addWidget(mRotationLabel, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mWidthSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mWidthSpinBox->setObjectName(QStringLiteral("mWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy1);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(1e+9);
        mWidthSpinBox->setSingleStep(0.2);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(mWidthSpinBox);

        mSymbolWidthUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mSymbolWidthUnitWidget->setObjectName(QStringLiteral("mSymbolWidthUnitWidget"));
        mSymbolWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mSymbolWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mSymbolWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mRotationSpinBox->setObjectName(QStringLiteral("mRotationSpinBox"));
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360);
        mRotationSpinBox->setMaximum(360);
        mRotationSpinBox->setSingleStep(0.5);

        gridLayout_2->addWidget(mRotationSpinBox, 10, 1, 1, 1);

        mSymbolWidthDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mSymbolWidthDDBtn->setObjectName(QStringLiteral("mSymbolWidthDDBtn"));

        gridLayout_2->addWidget(mSymbolWidthDDBtn, 2, 2, 1, 1);

        mShapeDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mShapeDDBtn->setObjectName(QStringLiteral("mShapeDDBtn"));

        gridLayout_2->addWidget(mShapeDDBtn, 14, 2, 1, 1);

        label_3 = new QLabel(WidgetEllipseBase);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mRotationDDBtn->setObjectName(QStringLiteral("mRotationDDBtn"));

        gridLayout_2->addWidget(mRotationDDBtn, 10, 2, 1, 1);

        mStrokeStyleLabel = new QLabel(WidgetEllipseBase);
        mStrokeStyleLabel->setObjectName(QStringLiteral("mStrokeStyleLabel"));

        gridLayout_2->addWidget(mStrokeStyleLabel, 6, 0, 1, 1);

        mStrokeStyleDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mStrokeStyleDDBtn->setObjectName(QStringLiteral("mStrokeStyleDDBtn"));

        gridLayout_2->addWidget(mStrokeStyleDDBtn, 6, 2, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 5, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mHeightSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mHeightSpinBox->setObjectName(QStringLiteral("mHeightSpinBox"));
        sizePolicy1.setHeightForWidth(mHeightSpinBox->sizePolicy().hasHeightForWidth());
        mHeightSpinBox->setSizePolicy(sizePolicy1);
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(1e+9);
        mHeightSpinBox->setSingleStep(0.2);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(mHeightSpinBox);

        mSymbolHeightUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mSymbolHeightUnitWidget->setObjectName(QStringLiteral("mSymbolHeightUnitWidget"));
        mSymbolHeightUnitWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(mSymbolHeightUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        mSymbolHeightDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mSymbolHeightDDBtn->setObjectName(QStringLiteral("mSymbolHeightDDBtn"));

        gridLayout_2->addWidget(mSymbolHeightDDBtn, 3, 2, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mJoinStyleDDBtn->setObjectName(QStringLiteral("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 8, 2, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 11, 2, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mVerticalAnchorDDBtn->setObjectName(QStringLiteral("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 12, 2, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mHorizontalAnchorDDBtn->setObjectName(QStringLiteral("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 13, 2, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 4, 2, 1, 1);

        btnChangeColorStroke = new QgsColorButton(WidgetEllipseBase);
        btnChangeColorStroke->setObjectName(QStringLiteral("btnChangeColorStroke"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnChangeColorStroke->sizePolicy().hasHeightForWidth());
        btnChangeColorStroke->setSizePolicy(sizePolicy3);
        btnChangeColorStroke->setMinimumSize(QSize(100, 0));
        btnChangeColorStroke->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorStroke, 5, 1, 1, 1);

        label = new QLabel(WidgetEllipseBase);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label, 5, 0, 1, 1);

        btnChangeColorFill = new QgsColorButton(WidgetEllipseBase);
        btnChangeColorFill->setObjectName(QStringLiteral("btnChangeColorFill"));
        sizePolicy3.setHeightForWidth(btnChangeColorFill->sizePolicy().hasHeightForWidth());
        btnChangeColorFill->setSizePolicy(sizePolicy3);
        btnChangeColorFill->setMinimumSize(QSize(100, 0));
        btnChangeColorFill->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorFill, 4, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetEllipseBase);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_2->addWidget(mStrokeWidthLabel, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy1);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(1e+9);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mStrokeWidthUnitWidget->setObjectName(QStringLiteral("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 1, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 7, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSymbolWidthLabel->setBuddy(mWidthSpinBox);
        mSymbolHeightLabel->setBuddy(mHeightSpinBox);
        mAnchorPointLabel->setBuddy(mHorizontalAnchorComboBox);
        label_5->setBuddy(spinOffsetX);
        mRotationLabel->setBuddy(mRotationSpinBox);
        label_3->setBuddy(btnChangeColorFill);
        mStrokeStyleLabel->setBuddy(mStrokeStyleComboBox);
        label->setBuddy(btnChangeColorStroke);
        mStrokeWidthLabel->setBuddy(mStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mWidthSpinBox, mSymbolWidthUnitWidget);
        QWidget::setTabOrder(mSymbolWidthUnitWidget, mSymbolWidthDDBtn);
        QWidget::setTabOrder(mSymbolWidthDDBtn, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mSymbolHeightDDBtn);
        QWidget::setTabOrder(mSymbolHeightDDBtn, btnChangeColorFill);
        QWidget::setTabOrder(btnChangeColorFill, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, btnChangeColorStroke);
        QWidget::setTabOrder(btnChangeColorStroke, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeStyleComboBox);
        QWidget::setTabOrder(mStrokeStyleComboBox, mStrokeStyleDDBtn);
        QWidget::setTabOrder(mStrokeStyleDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, mShapeListWidget);
        QWidget::setTabOrder(mShapeListWidget, mShapeDDBtn);

        retranslateUi(WidgetEllipseBase);

        QMetaObject::connectSlotsByName(WidgetEllipseBase);
    } // setupUi

    void retranslateUi(QWidget *WidgetEllipseBase)
    {
        mSymbolWidthLabel->setText(QApplication::translate("WidgetEllipseBase", "Symbol width", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetEllipseBase", "Join style", Q_NULLPTR));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetEllipseBase", "Left", Q_NULLPTR)
         << QApplication::translate("WidgetEllipseBase", "HCenter", Q_NULLPTR)
         << QApplication::translate("WidgetEllipseBase", "Right", Q_NULLPTR)
        );
        mSymbolHeightLabel->setText(QApplication::translate("WidgetEllipseBase", "Symbol height", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetEllipseBase", "x", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetEllipseBase", "y", Q_NULLPTR));
        mAnchorPointLabel->setText(QApplication::translate("WidgetEllipseBase", "Anchor point", Q_NULLPTR));
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetEllipseBase", "Top", Q_NULLPTR)
         << QApplication::translate("WidgetEllipseBase", "VCenter", Q_NULLPTR)
         << QApplication::translate("WidgetEllipseBase", "Bottom", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("WidgetEllipseBase", "Offset", Q_NULLPTR));
        mRotationLabel->setText(QApplication::translate("WidgetEllipseBase", "Rotation", Q_NULLPTR));
        mRotationSpinBox->setSuffix(QApplication::translate("WidgetEllipseBase", " \302\260", Q_NULLPTR));
        mSymbolWidthDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mShapeDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetEllipseBase", "Fill color", Q_NULLPTR));
        mRotationDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mStrokeStyleLabel->setText(QApplication::translate("WidgetEllipseBase", "Stroke style", Q_NULLPTR));
        mStrokeStyleDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mSymbolHeightDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mJoinStyleDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mVerticalAnchorDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mHorizontalAnchorDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        mFillColorDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        btnChangeColorStroke->setText(QString());
        label->setText(QApplication::translate("WidgetEllipseBase", "Stroke color", Q_NULLPTR));
        btnChangeColorFill->setText(QString());
        mStrokeWidthLabel->setText(QApplication::translate("WidgetEllipseBase", "Stroke width", Q_NULLPTR));
        mStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetEllipseBase", "Hairline", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetEllipseBase", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetEllipseBase);
    } // retranslateUi

};

namespace Ui {
    class WidgetEllipseBase: public Ui_WidgetEllipseBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ELLIPSE_H
