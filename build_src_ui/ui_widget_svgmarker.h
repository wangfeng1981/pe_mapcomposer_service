/********************************************************************************
** Form generated from reading UI file 'widget_svgmarker.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGMARKER_H
#define UI_WIDGET_SVGMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgMarker
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QgsDoubleSpinBox *spinOffsetX;
    QLabel *label_8;
    QgsDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *spinAngle;
    QgsColorButton *mChangeStrokeColorButton;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QLabel *label_4;
    QgsPropertyOverrideButton *mFilenameDDBtn;
    QHBoxLayout *horizontalLayout_5;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QComboBox *mVerticalAnchorComboBox;
    QLabel *label_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QTreeView *viewGroups;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListView *viewImages;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QLabel *label_9;
    QgsColorButton *mChangeColorButton;
    QLabel *mStrokeColorLabel;
    QLabel *mAnchorPointLabel;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QgsDoubleSpinBox *spinWidth;
    QLabel *label_11;
    QgsDoubleSpinBox *spinHeight;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QLabel *label_13;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QLabel *mStrokeWidthLabel;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QComboBox *mHorizontalAnchorComboBox;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QgsSvgSourceLineEdit *mSvgSourceLineEdit;

    void setupUi(QWidget *WidgetSvgMarker)
    {
        if (WidgetSvgMarker->objectName().isEmpty())
            WidgetSvgMarker->setObjectName(QStringLiteral("WidgetSvgMarker"));
        WidgetSvgMarker->resize(445, 729);
        WidgetSvgMarker->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(WidgetSvgMarker);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(WidgetSvgMarker);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(WidgetSvgMarker);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+8);
        spinOffsetX->setMaximum(1e+8);
        spinOffsetX->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetX, 0, 1, 1, 1);

        label_8 = new QLabel(WidgetSvgMarker);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+8);
        spinOffsetY->setMaximum(1e+8);
        spinOffsetY->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetY, 1, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout_2->addLayout(gridLayout, 6, 1, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout_2->addWidget(spinAngle, 5, 1, 1, 1);

        mChangeStrokeColorButton = new QgsColorButton(WidgetSvgMarker);
        mChangeStrokeColorButton->setObjectName(QStringLiteral("mChangeStrokeColorButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mChangeStrokeColorButton->sizePolicy().hasHeightForWidth());
        mChangeStrokeColorButton->setSizePolicy(sizePolicy2);
        mChangeStrokeColorButton->setMinimumSize(QSize(120, 0));
        mChangeStrokeColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mChangeStrokeColorButton, 3, 1, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mVerticalAnchorDDBtn->setObjectName(QStringLiteral("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 7, 3, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 1, 3, 1, 1);

        label_4 = new QLabel(WidgetSvgMarker);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        mFilenameDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mFilenameDDBtn->setObjectName(QStringLiteral("mFilenameDDBtn"));

        gridLayout_2->addWidget(mFilenameDDBtn, 10, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetSvgMarker);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy1);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(1e+9);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setValue(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_5->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mStrokeWidthUnitWidget->setObjectName(QStringLiteral("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetSvgMarker);
        mVerticalAnchorComboBox->setObjectName(QStringLiteral("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 7, 1, 1, 1);

        label_3 = new QLabel(WidgetSvgMarker);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        splitter = new QSplitter(WidgetSvgMarker);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        viewGroups = new QTreeView(layoutWidget);
        viewGroups->setObjectName(QStringLiteral("viewGroups"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(viewGroups->sizePolicy().hasHeightForWidth());
        viewGroups->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(viewGroups);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        viewImages = new QListView(layoutWidget1);
        viewImages->setObjectName(QStringLiteral("viewImages"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(5);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(viewImages->sizePolicy().hasHeightForWidth());
        viewImages->setSizePolicy(sizePolicy4);
        viewImages->setMinimumSize(QSize(0, 250));
        viewImages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewImages->setIconSize(QSize(32, 32));
        viewImages->setMovement(QListView::Static);
        viewImages->setResizeMode(QListView::Adjust);
        viewImages->setLayoutMode(QListView::Batched);
        viewImages->setSpacing(2);
        viewImages->setGridSize(QSize(36, 36));
        viewImages->setViewMode(QListView::IconMode);
        viewImages->setUniformItemSizes(true);
        viewImages->setWordWrap(true);

        verticalLayout_2->addWidget(viewImages);

        splitter->addWidget(layoutWidget1);

        gridLayout_2->addWidget(splitter, 9, 0, 1, 4);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 3, 3, 1, 1);

        label_9 = new QLabel(WidgetSvgMarker);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        mChangeColorButton = new QgsColorButton(WidgetSvgMarker);
        mChangeColorButton->setObjectName(QStringLiteral("mChangeColorButton"));
        sizePolicy.setHeightForWidth(mChangeColorButton->sizePolicy().hasHeightForWidth());
        mChangeColorButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mChangeColorButton, 1, 1, 1, 1);

        mStrokeColorLabel = new QLabel(WidgetSvgMarker);
        mStrokeColorLabel->setObjectName(QStringLiteral("mStrokeColorLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mStrokeColorLabel->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(mStrokeColorLabel, 3, 0, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetSvgMarker);
        mAnchorPointLabel->setObjectName(QStringLiteral("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 7, 0, 2, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 6, 3, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(WidgetSvgMarker);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 0, 3, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mHeightDDBtn->setObjectName(QStringLiteral("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 1, 3, 1, 1);

        spinWidth = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy6);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);
        spinWidth->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(spinWidth, 0, 1, 1, 1);

        label_11 = new QLabel(WidgetSvgMarker);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        spinHeight = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        sizePolicy6.setHeightForWidth(spinHeight->sizePolicy().hasHeightForWidth());
        spinHeight->setSizePolicy(sizePolicy6);
        spinHeight->setDecimals(6);
        spinHeight->setMaximum(100000);
        spinHeight->setSingleStep(0.2);
        spinHeight->setValue(1);
        spinHeight->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(spinHeight, 1, 1, 1, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(WidgetSvgMarker);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy7);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 2, 2, 1);

        label_13 = new QLabel(WidgetSvgMarker);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mSizeUnitWidget->setObjectName(QStringLiteral("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mSizeUnitWidget, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout_3, 0, 1, 1, 3);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 4, 3, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetSvgMarker);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_2->addWidget(mStrokeWidthLabel, 4, 0, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mHorizontalAnchorDDBtn->setObjectName(QStringLiteral("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 8, 3, 1, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetSvgMarker);
        mHorizontalAnchorComboBox->setObjectName(QStringLiteral("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 8, 1, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mAngleDDBtn->setObjectName(QStringLiteral("mAngleDDBtn"));

        gridLayout_2->addWidget(mAngleDDBtn, 5, 3, 1, 1);

        mSvgSourceLineEdit = new QgsSvgSourceLineEdit(WidgetSvgMarker);
        mSvgSourceLineEdit->setObjectName(QStringLiteral("mSvgSourceLineEdit"));
        mSvgSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mSvgSourceLineEdit, 10, 0, 1, 3);

        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, mChangeStrokeColorButton);
        QWidget::setTabOrder(mChangeStrokeColorButton, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, viewGroups);
        QWidget::setTabOrder(viewGroups, viewImages);
        QWidget::setTabOrder(viewImages, mSvgSourceLineEdit);
        QWidget::setTabOrder(mSvgSourceLineEdit, mFilenameDDBtn);

        retranslateUi(WidgetSvgMarker);

        QMetaObject::connectSlotsByName(WidgetSvgMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgMarker)
    {
        label_6->setText(QApplication::translate("WidgetSvgMarker", "Fill color", Q_NULLPTR));
        label_7->setText(QApplication::translate("WidgetSvgMarker", "x", Q_NULLPTR));
        spinOffsetX->setPrefix(QString());
        label_8->setText(QApplication::translate("WidgetSvgMarker", "y", Q_NULLPTR));
        spinOffsetY->setPrefix(QString());
        spinAngle->setSuffix(QApplication::translate("WidgetSvgMarker", " \302\260", Q_NULLPTR));
        mChangeStrokeColorButton->setText(QString());
        mVerticalAnchorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        mFillColorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetSvgMarker", "Offset", Q_NULLPTR));
        mFilenameDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        mStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetSvgMarker", "No stroke", Q_NULLPTR));
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSvgMarker", "Top", Q_NULLPTR)
         << QApplication::translate("WidgetSvgMarker", "VCenter", Q_NULLPTR)
         << QApplication::translate("WidgetSvgMarker", "Bottom", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("WidgetSvgMarker", "Rotation", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetSvgMarker", "SVG Groups", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetSvgMarker", "SVG Image", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetSvgMarker", "Size", Q_NULLPTR));
        mStrokeColorLabel->setText(QApplication::translate("WidgetSvgMarker", "Stroke color", Q_NULLPTR));
        mAnchorPointLabel->setText(QApplication::translate("WidgetSvgMarker", "Anchor point", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        label_10->setText(QApplication::translate("WidgetSvgMarker", "Width", Q_NULLPTR));
        mWidthDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        mHeightDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        label_11->setText(QApplication::translate("WidgetSvgMarker", "Height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("WidgetSvgMarker", "Lock aspect ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("WidgetSvgMarker", "Unit", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        mStrokeWidthLabel->setText(QApplication::translate("WidgetSvgMarker", "Stroke width", Q_NULLPTR));
        mHorizontalAnchorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSvgMarker", "Left", Q_NULLPTR)
         << QApplication::translate("WidgetSvgMarker", "HCenter", Q_NULLPTR)
         << QApplication::translate("WidgetSvgMarker", "Right", Q_NULLPTR)
        );
        mAngleDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(WidgetSvgMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgMarker: public Ui_WidgetSvgMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGMARKER_H
