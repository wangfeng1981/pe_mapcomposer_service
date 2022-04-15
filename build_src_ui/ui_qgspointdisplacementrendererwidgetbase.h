/********************************************************************************
** Form generated from reading UI file 'qgspointdisplacementrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H
#define UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscalewidget.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointDisplacementRendererWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;
    QgsCollapsibleGroupBoxBasic *mLabelingGroupBox;
    QGridLayout *gridLayout;
    QLabel *mLabelDistanceLabel;
    QLabel *mLabelColorLabel;
    QgsScaleWidget *mMinLabelScaleWidget;
    QLabel *mLabelAttributeLabel;
    QCheckBox *mScaleDependentLabelsCheckBox;
    QgsColorButton *mLabelColorButton;
    QLabel *label;
    QComboBox *mLabelFieldComboBox;
    QLabel *mMaxScaleLabel;
    QgsFontButton *mLabelFontButton;
    QgsDoubleSpinBox *mLabelDistanceFactorSpinBox;
    QLabel *label_2;
    QLabel *mDistanceToleranceLabel;
    QPushButton *mRendererSettingsButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mDistanceSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QComboBox *mPlacementComboBox;
    QLabel *mCenterSymbolLabel;
    QgsCollapsibleGroupBoxBasic *mDisplacementCirclesGroupBox;
    QGridLayout *gridLayout_2;
    QgsColorButton *mCircleColorButton;
    QLabel *mCircleRadiusLabel;
    QLabel *mCircleWidthLabel;
    QLabel *mCircleColorLabel;
    QgsDoubleSpinBox *mCircleModificationSpinBox;
    QgsDoubleSpinBox *mCircleWidthSpinBox;
    QgsSymbolButton *mCenterSymbolToolButton;

    void setupUi(QWidget *QgsPointDisplacementRendererWidgetBase)
    {
        if (QgsPointDisplacementRendererWidgetBase->objectName().isEmpty())
            QgsPointDisplacementRendererWidgetBase->setObjectName(QStringLiteral("QgsPointDisplacementRendererWidgetBase"));
        QgsPointDisplacementRendererWidgetBase->resize(381, 550);
        QgsPointDisplacementRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_3 = new QGridLayout(QgsPointDisplacementRendererWidgetBase);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mRendererLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mRendererLabel->setObjectName(QStringLiteral("mRendererLabel"));

        gridLayout_3->addWidget(mRendererLabel, 2, 0, 1, 1);

        mRendererComboBox = new QComboBox(QgsPointDisplacementRendererWidgetBase);
        mRendererComboBox->setObjectName(QStringLiteral("mRendererComboBox"));

        gridLayout_3->addWidget(mRendererComboBox, 2, 1, 1, 1);

        mLabelingGroupBox = new QgsCollapsibleGroupBoxBasic(QgsPointDisplacementRendererWidgetBase);
        mLabelingGroupBox->setObjectName(QStringLiteral("mLabelingGroupBox"));
        gridLayout = new QGridLayout(mLabelingGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLabelDistanceLabel = new QLabel(mLabelingGroupBox);
        mLabelDistanceLabel->setObjectName(QStringLiteral("mLabelDistanceLabel"));

        gridLayout->addWidget(mLabelDistanceLabel, 3, 0, 1, 1);

        mLabelColorLabel = new QLabel(mLabelingGroupBox);
        mLabelColorLabel->setObjectName(QStringLiteral("mLabelColorLabel"));

        gridLayout->addWidget(mLabelColorLabel, 2, 0, 1, 1);

        mMinLabelScaleWidget = new QgsScaleWidget(mLabelingGroupBox);
        mMinLabelScaleWidget->setObjectName(QStringLiteral("mMinLabelScaleWidget"));
        mMinLabelScaleWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mMinLabelScaleWidget, 5, 2, 1, 1);

        mLabelAttributeLabel = new QLabel(mLabelingGroupBox);
        mLabelAttributeLabel->setObjectName(QStringLiteral("mLabelAttributeLabel"));

        gridLayout->addWidget(mLabelAttributeLabel, 0, 0, 1, 1);

        mScaleDependentLabelsCheckBox = new QCheckBox(mLabelingGroupBox);
        mScaleDependentLabelsCheckBox->setObjectName(QStringLiteral("mScaleDependentLabelsCheckBox"));

        gridLayout->addWidget(mScaleDependentLabelsCheckBox, 4, 0, 1, 3);

        mLabelColorButton = new QgsColorButton(mLabelingGroupBox);
        mLabelColorButton->setObjectName(QStringLiteral("mLabelColorButton"));
        mLabelColorButton->setMinimumSize(QSize(120, 0));
        mLabelColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLabelColorButton, 2, 2, 1, 1);

        label = new QLabel(mLabelingGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mLabelFieldComboBox = new QComboBox(mLabelingGroupBox);
        mLabelFieldComboBox->setObjectName(QStringLiteral("mLabelFieldComboBox"));

        gridLayout->addWidget(mLabelFieldComboBox, 0, 2, 1, 1);

        mMaxScaleLabel = new QLabel(mLabelingGroupBox);
        mMaxScaleLabel->setObjectName(QStringLiteral("mMaxScaleLabel"));

        gridLayout->addWidget(mMaxScaleLabel, 5, 0, 1, 1);

        mLabelFontButton = new QgsFontButton(mLabelingGroupBox);
        mLabelFontButton->setObjectName(QStringLiteral("mLabelFontButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelFontButton->sizePolicy().hasHeightForWidth());
        mLabelFontButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLabelFontButton, 1, 2, 1, 1);

        mLabelDistanceFactorSpinBox = new QgsDoubleSpinBox(mLabelingGroupBox);
        mLabelDistanceFactorSpinBox->setObjectName(QStringLiteral("mLabelDistanceFactorSpinBox"));
        mLabelDistanceFactorSpinBox->setMinimum(-5);
        mLabelDistanceFactorSpinBox->setMaximum(5);
        mLabelDistanceFactorSpinBox->setSingleStep(0.1);
        mLabelDistanceFactorSpinBox->setValue(0.5);

        gridLayout->addWidget(mLabelDistanceFactorSpinBox, 3, 2, 1, 1);


        gridLayout_3->addWidget(mLabelingGroupBox, 9, 0, 1, 2);

        label_2 = new QLabel(QgsPointDisplacementRendererWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 7, 0, 1, 1);

        mDistanceToleranceLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mDistanceToleranceLabel->setObjectName(QStringLiteral("mDistanceToleranceLabel"));

        gridLayout_3->addWidget(mDistanceToleranceLabel, 6, 0, 1, 1);

        mRendererSettingsButton = new QPushButton(QgsPointDisplacementRendererWidgetBase);
        mRendererSettingsButton->setObjectName(QStringLiteral("mRendererSettingsButton"));

        gridLayout_3->addWidget(mRendererSettingsButton, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mDistanceSpinBox = new QgsDoubleSpinBox(QgsPointDisplacementRendererWidgetBase);
        mDistanceSpinBox->setObjectName(QStringLiteral("mDistanceSpinBox"));
        mDistanceSpinBox->setDecimals(7);
        mDistanceSpinBox->setMaximum(1e+9);

        horizontalLayout->addWidget(mDistanceSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(QgsPointDisplacementRendererWidgetBase);
        mDistanceUnitWidget->setObjectName(QStringLiteral("mDistanceUnitWidget"));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mDistanceUnitWidget);


        gridLayout_3->addLayout(horizontalLayout, 6, 1, 1, 1);

        mPlacementComboBox = new QComboBox(QgsPointDisplacementRendererWidgetBase);
        mPlacementComboBox->setObjectName(QStringLiteral("mPlacementComboBox"));

        gridLayout_3->addWidget(mPlacementComboBox, 7, 1, 1, 1);

        mCenterSymbolLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mCenterSymbolLabel->setObjectName(QStringLiteral("mCenterSymbolLabel"));

        gridLayout_3->addWidget(mCenterSymbolLabel, 0, 0, 1, 1);

        mDisplacementCirclesGroupBox = new QgsCollapsibleGroupBoxBasic(QgsPointDisplacementRendererWidgetBase);
        mDisplacementCirclesGroupBox->setObjectName(QStringLiteral("mDisplacementCirclesGroupBox"));
        gridLayout_2 = new QGridLayout(mDisplacementCirclesGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mCircleColorButton = new QgsColorButton(mDisplacementCirclesGroupBox);
        mCircleColorButton->setObjectName(QStringLiteral("mCircleColorButton"));
        mCircleColorButton->setMinimumSize(QSize(120, 0));
        mCircleColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mCircleColorButton, 2, 1, 1, 1);

        mCircleRadiusLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleRadiusLabel->setObjectName(QStringLiteral("mCircleRadiusLabel"));

        gridLayout_2->addWidget(mCircleRadiusLabel, 3, 0, 1, 1);

        mCircleWidthLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleWidthLabel->setObjectName(QStringLiteral("mCircleWidthLabel"));

        gridLayout_2->addWidget(mCircleWidthLabel, 0, 0, 1, 1);

        mCircleColorLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleColorLabel->setObjectName(QStringLiteral("mCircleColorLabel"));

        gridLayout_2->addWidget(mCircleColorLabel, 2, 0, 1, 1);

        mCircleModificationSpinBox = new QgsDoubleSpinBox(mDisplacementCirclesGroupBox);
        mCircleModificationSpinBox->setObjectName(QStringLiteral("mCircleModificationSpinBox"));
        mCircleModificationSpinBox->setMinimum(-9999);
        mCircleModificationSpinBox->setMaximum(9999);
        mCircleModificationSpinBox->setSingleStep(0.1);

        gridLayout_2->addWidget(mCircleModificationSpinBox, 3, 1, 1, 1);

        mCircleWidthSpinBox = new QgsDoubleSpinBox(mDisplacementCirclesGroupBox);
        mCircleWidthSpinBox->setObjectName(QStringLiteral("mCircleWidthSpinBox"));
        mCircleWidthSpinBox->setMaximum(9999);
        mCircleWidthSpinBox->setSingleStep(0.1);

        gridLayout_2->addWidget(mCircleWidthSpinBox, 0, 1, 1, 1);


        gridLayout_3->addWidget(mDisplacementCirclesGroupBox, 8, 0, 1, 2);

        mCenterSymbolToolButton = new QgsSymbolButton(QgsPointDisplacementRendererWidgetBase);
        mCenterSymbolToolButton->setObjectName(QStringLiteral("mCenterSymbolToolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCenterSymbolToolButton->sizePolicy().hasHeightForWidth());
        mCenterSymbolToolButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mCenterSymbolToolButton, 0, 1, 1, 1);

        QWidget::setTabOrder(mCenterSymbolToolButton, mRendererComboBox);
        QWidget::setTabOrder(mRendererComboBox, mRendererSettingsButton);
        QWidget::setTabOrder(mRendererSettingsButton, mDistanceSpinBox);
        QWidget::setTabOrder(mDistanceSpinBox, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mPlacementComboBox);
        QWidget::setTabOrder(mPlacementComboBox, mCircleWidthSpinBox);
        QWidget::setTabOrder(mCircleWidthSpinBox, mCircleColorButton);
        QWidget::setTabOrder(mCircleColorButton, mCircleModificationSpinBox);
        QWidget::setTabOrder(mCircleModificationSpinBox, mLabelFieldComboBox);
        QWidget::setTabOrder(mLabelFieldComboBox, mLabelFontButton);
        QWidget::setTabOrder(mLabelFontButton, mLabelColorButton);
        QWidget::setTabOrder(mLabelColorButton, mScaleDependentLabelsCheckBox);

        retranslateUi(QgsPointDisplacementRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointDisplacementRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointDisplacementRendererWidgetBase)
    {
        mRendererLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Renderer", Q_NULLPTR));
        mLabelingGroupBox->setTitle(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Labels", Q_NULLPTR));
        mLabelDistanceLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label distance factor", Q_NULLPTR));
        mLabelColorLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label color", Q_NULLPTR));
        mLabelAttributeLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label attribute", Q_NULLPTR));
        mScaleDependentLabelsCheckBox->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Use scale dependent labeling", Q_NULLPTR));
        mLabelColorButton->setText(QString());
        label->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label font", Q_NULLPTR));
        mMaxScaleLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Minimum map scale", Q_NULLPTR));
        mLabelFontButton->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Font", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Placement method", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDistanceToleranceLabel->setToolTip(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Point distance tolerance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDistanceToleranceLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Distance", Q_NULLPTR));
        mRendererSettingsButton->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Renderer Settings\342\200\246", Q_NULLPTR));
        mCenterSymbolLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Center symbol", Q_NULLPTR));
        mDisplacementCirclesGroupBox->setTitle(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Displacement Lines", Q_NULLPTR));
        mCircleColorButton->setText(QString());
        mCircleRadiusLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Size adjustment", Q_NULLPTR));
        mCircleWidthLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Stroke width", Q_NULLPTR));
        mCircleColorLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Stroke color", Q_NULLPTR));
        mCircleModificationSpinBox->setSuffix(QApplication::translate("QgsPointDisplacementRendererWidgetBase", " mm", Q_NULLPTR));
        mCircleWidthSpinBox->setSuffix(QApplication::translate("QgsPointDisplacementRendererWidgetBase", " mm", Q_NULLPTR));
        mCenterSymbolToolButton->setText(QString());
        Q_UNUSED(QgsPointDisplacementRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPointDisplacementRendererWidgetBase: public Ui_QgsPointDisplacementRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H
