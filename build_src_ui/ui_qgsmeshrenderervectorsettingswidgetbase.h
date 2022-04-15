/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderervectorsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"
#include "raster/qgscolorrampshaderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererVectorSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mSymbologyGroupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *mSymbologyVectorComboBox;
    QGroupBox *arrowWidthColorGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mColoringMethodComboBox;
    QSpacerItem *horizontalSpacer;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QLabel *label_4;
    QgsCollapsibleGroupBox *mColorRampShaderGroupBox;
    QGridLayout *gridLayout_5;
    QPushButton *mColorRampShaderLoadButton;
    QFrame *line;
    QLabel *label_5;
    QLineEdit *mColorRampShaderMaximumEditLine;
    QLabel *label;
    QLineEdit *mColorRampShaderMinimumEditLine;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QgsColorButton *mColorWidget;
    QLabel *mSimgleColorLabel;
    QGroupBox *mFilterByMagGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minimumMagLabel;
    QLineEdit *mMinMagLineEdit;
    QLabel *maximumMagLabel;
    QLineEdit *mMaxMagLineEdit;
    QGroupBox *mDisplayVectorsOnGridGroupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *xSpacingLabel;
    QLabel *ySpacingLabel;
    QgsSpinBox *mXSpacingSpinBox;
    QgsSpinBox *mYSpacingSpinBox;
    QWidget *mArrowWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *headOptionsGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *headWidthLabel;
    QLineEdit *mHeadWidthLineEdit;
    QLabel *percShaftLenLabel;
    QLabel *headLengthLabel;
    QLineEdit *mHeadLengthLineEdit;
    QLabel *percShaftLenLabel_2;
    QGroupBox *generalOptionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *mShaftLengthComboBox;
    QStackedWidget *mShaftOptionsStackedWidget;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *minimumShaftLabel;
    QLineEdit *mMinimumShaftLineEdit;
    QLabel *maximumShaftLabel;
    QLineEdit *mMaximumShaftLineEdit;
    QWidget *page_2;
    QFormLayout *formLayout_2;
    QLabel *scaleByFactorOfLabel;
    QLineEdit *mScaleShaftByFactorOfLineEdit;
    QWidget *page_3;
    QFormLayout *formLayout_3;
    QLabel *LengthLabel;
    QLineEdit *mShaftLengthLineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *mStreamlineWidget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mStreamlinesSeedingMethodComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mStreamlinesDensityLabel;
    QgsDoubleSpinBox *mStreamlinesDensitySpinBox;
    QGroupBox *mTracesGroupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QgsSpinBox *mTracesParticlesCountSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QgsDoubleSpinBox *mTracesMaxLengthSpinBox;
    QgsUnitSelectionWidget *mTracesTailLengthMapUnitWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        if (QgsMeshRendererVectorSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererVectorSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererVectorSettingsWidgetBase"));
        QgsMeshRendererVectorSettingsWidgetBase->resize(376, 1000);
        QgsMeshRendererVectorSettingsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsMeshRendererVectorSettingsWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mSymbologyGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mSymbologyGroupBox->setObjectName(QStringLiteral("mSymbologyGroupBox"));
        mSymbologyGroupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(mSymbologyGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mSymbologyVectorComboBox = new QComboBox(mSymbologyGroupBox);
        mSymbologyVectorComboBox->setObjectName(QStringLiteral("mSymbologyVectorComboBox"));

        verticalLayout_3->addWidget(mSymbologyVectorComboBox);


        verticalLayout->addWidget(mSymbologyGroupBox);

        arrowWidthColorGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        arrowWidthColorGroupBox->setObjectName(QStringLiteral("arrowWidthColorGroupBox"));
        gridLayout_3 = new QGridLayout(arrowWidthColorGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mColoringMethodComboBox = new QComboBox(arrowWidthColorGroupBox);
        mColoringMethodComboBox->setObjectName(QStringLiteral("mColoringMethodComboBox"));

        gridLayout_3->addWidget(mColoringMethodComboBox, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        mLineWidthSpinBox = new QgsDoubleSpinBox(arrowWidthColorGroupBox);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mLineWidthSpinBox, 0, 0, 1, 1);

        label_4 = new QLabel(arrowWidthColorGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 2, 1, 1);

        mColorRampShaderGroupBox = new QgsCollapsibleGroupBox(arrowWidthColorGroupBox);
        mColorRampShaderGroupBox->setObjectName(QStringLiteral("mColorRampShaderGroupBox"));
        gridLayout_5 = new QGridLayout(mColorRampShaderGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mColorRampShaderLoadButton = new QPushButton(mColorRampShaderGroupBox);
        mColorRampShaderLoadButton->setObjectName(QStringLiteral("mColorRampShaderLoadButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColorRampShaderLoadButton->setIcon(icon);

        gridLayout_5->addWidget(mColorRampShaderLoadButton, 0, 4, 1, 1);

        line = new QFrame(mColorRampShaderGroupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 5);

        label_5 = new QLabel(mColorRampShaderGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 0, 2, 1, 1);

        mColorRampShaderMaximumEditLine = new QLineEdit(mColorRampShaderGroupBox);
        mColorRampShaderMaximumEditLine->setObjectName(QStringLiteral("mColorRampShaderMaximumEditLine"));

        gridLayout_5->addWidget(mColorRampShaderMaximumEditLine, 0, 3, 1, 1);

        label = new QLabel(mColorRampShaderGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        mColorRampShaderMinimumEditLine = new QLineEdit(mColorRampShaderGroupBox);
        mColorRampShaderMinimumEditLine->setObjectName(QStringLiteral("mColorRampShaderMinimumEditLine"));

        gridLayout_5->addWidget(mColorRampShaderMinimumEditLine, 0, 1, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(mColorRampShaderGroupBox);
        mColorRampShaderWidget->setObjectName(QStringLiteral("mColorRampShaderWidget"));
        mColorRampShaderWidget->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(mColorRampShaderWidget, 2, 0, 1, 5);


        gridLayout_3->addWidget(mColorRampShaderGroupBox, 2, 0, 2, 4);

        mColorWidget = new QgsColorButton(arrowWidthColorGroupBox);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));

        gridLayout_3->addWidget(mColorWidget, 1, 3, 1, 1);

        mSimgleColorLabel = new QLabel(arrowWidthColorGroupBox);
        mSimgleColorLabel->setObjectName(QStringLiteral("mSimgleColorLabel"));

        gridLayout_3->addWidget(mSimgleColorLabel, 1, 1, 1, 2);


        verticalLayout->addWidget(arrowWidthColorGroupBox);

        mFilterByMagGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mFilterByMagGroupBox->setObjectName(QStringLiteral("mFilterByMagGroupBox"));
        mFilterByMagGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(mFilterByMagGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minimumMagLabel = new QLabel(mFilterByMagGroupBox);
        minimumMagLabel->setObjectName(QStringLiteral("minimumMagLabel"));

        horizontalLayout_2->addWidget(minimumMagLabel);

        mMinMagLineEdit = new QLineEdit(mFilterByMagGroupBox);
        mMinMagLineEdit->setObjectName(QStringLiteral("mMinMagLineEdit"));

        horizontalLayout_2->addWidget(mMinMagLineEdit);

        maximumMagLabel = new QLabel(mFilterByMagGroupBox);
        maximumMagLabel->setObjectName(QStringLiteral("maximumMagLabel"));

        horizontalLayout_2->addWidget(maximumMagLabel);

        mMaxMagLineEdit = new QLineEdit(mFilterByMagGroupBox);
        mMaxMagLineEdit->setObjectName(QStringLiteral("mMaxMagLineEdit"));

        horizontalLayout_2->addWidget(mMaxMagLineEdit);


        verticalLayout->addWidget(mFilterByMagGroupBox);

        mDisplayVectorsOnGridGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mDisplayVectorsOnGridGroupBox->setObjectName(QStringLiteral("mDisplayVectorsOnGridGroupBox"));
        mDisplayVectorsOnGridGroupBox->setCheckable(true);
        mDisplayVectorsOnGridGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(mDisplayVectorsOnGridGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xSpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        xSpacingLabel->setObjectName(QStringLiteral("xSpacingLabel"));

        gridLayout->addWidget(xSpacingLabel, 0, 0, 1, 1);

        ySpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        ySpacingLabel->setObjectName(QStringLiteral("ySpacingLabel"));

        gridLayout->addWidget(ySpacingLabel, 1, 0, 1, 1);

        mXSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mXSpacingSpinBox->setObjectName(QStringLiteral("mXSpacingSpinBox"));
        mXSpacingSpinBox->setMinimum(1);
        mXSpacingSpinBox->setMaximum(8000);
        mXSpacingSpinBox->setSingleStep(10);
        mXSpacingSpinBox->setValue(10);

        gridLayout->addWidget(mXSpacingSpinBox, 0, 1, 1, 1);

        mYSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mYSpacingSpinBox->setObjectName(QStringLiteral("mYSpacingSpinBox"));
        mYSpacingSpinBox->setMinimum(1);
        mYSpacingSpinBox->setMaximum(5000);
        mYSpacingSpinBox->setSingleStep(10);
        mYSpacingSpinBox->setValue(10);

        gridLayout->addWidget(mYSpacingSpinBox, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(mDisplayVectorsOnGridGroupBox);

        mArrowWidget = new QWidget(QgsMeshRendererVectorSettingsWidgetBase);
        mArrowWidget->setObjectName(QStringLiteral("mArrowWidget"));
        verticalLayout_4 = new QVBoxLayout(mArrowWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        headOptionsGroupBox = new QGroupBox(mArrowWidget);
        headOptionsGroupBox->setObjectName(QStringLiteral("headOptionsGroupBox"));
        gridLayout_4 = new QGridLayout(headOptionsGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        headWidthLabel = new QLabel(headOptionsGroupBox);
        headWidthLabel->setObjectName(QStringLiteral("headWidthLabel"));

        gridLayout_4->addWidget(headWidthLabel, 0, 0, 1, 1);

        mHeadWidthLineEdit = new QLineEdit(headOptionsGroupBox);
        mHeadWidthLineEdit->setObjectName(QStringLiteral("mHeadWidthLineEdit"));

        gridLayout_4->addWidget(mHeadWidthLineEdit, 0, 1, 1, 1);

        percShaftLenLabel = new QLabel(headOptionsGroupBox);
        percShaftLenLabel->setObjectName(QStringLiteral("percShaftLenLabel"));

        gridLayout_4->addWidget(percShaftLenLabel, 0, 2, 1, 1);

        headLengthLabel = new QLabel(headOptionsGroupBox);
        headLengthLabel->setObjectName(QStringLiteral("headLengthLabel"));

        gridLayout_4->addWidget(headLengthLabel, 1, 0, 1, 1);

        mHeadLengthLineEdit = new QLineEdit(headOptionsGroupBox);
        mHeadLengthLineEdit->setObjectName(QStringLiteral("mHeadLengthLineEdit"));

        gridLayout_4->addWidget(mHeadLengthLineEdit, 1, 1, 1, 1);

        percShaftLenLabel_2 = new QLabel(headOptionsGroupBox);
        percShaftLenLabel_2->setObjectName(QStringLiteral("percShaftLenLabel_2"));

        gridLayout_4->addWidget(percShaftLenLabel_2, 1, 2, 1, 1);


        verticalLayout_4->addWidget(headOptionsGroupBox);

        generalOptionsGroupBox = new QGroupBox(mArrowWidget);
        generalOptionsGroupBox->setObjectName(QStringLiteral("generalOptionsGroupBox"));
        verticalLayout_2 = new QVBoxLayout(generalOptionsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mShaftLengthComboBox = new QComboBox(generalOptionsGroupBox);
        mShaftLengthComboBox->setObjectName(QStringLiteral("mShaftLengthComboBox"));
        mShaftLengthComboBox->setMinimumSize(QSize(0, 0));
        mShaftLengthComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout_2->addWidget(mShaftLengthComboBox);

        mShaftOptionsStackedWidget = new QStackedWidget(generalOptionsGroupBox);
        mShaftOptionsStackedWidget->setObjectName(QStringLiteral("mShaftOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        minimumShaftLabel = new QLabel(page);
        minimumShaftLabel->setObjectName(QStringLiteral("minimumShaftLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumShaftLabel);

        mMinimumShaftLineEdit = new QLineEdit(page);
        mMinimumShaftLineEdit->setObjectName(QStringLiteral("mMinimumShaftLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mMinimumShaftLineEdit);

        maximumShaftLabel = new QLabel(page);
        maximumShaftLabel->setObjectName(QStringLiteral("maximumShaftLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumShaftLabel);

        mMaximumShaftLineEdit = new QLineEdit(page);
        mMaximumShaftLineEdit->setObjectName(QStringLiteral("mMaximumShaftLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mMaximumShaftLineEdit);

        mShaftOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout_2 = new QFormLayout(page_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        scaleByFactorOfLabel = new QLabel(page_2);
        scaleByFactorOfLabel->setObjectName(QStringLiteral("scaleByFactorOfLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, scaleByFactorOfLabel);

        mScaleShaftByFactorOfLineEdit = new QLineEdit(page_2);
        mScaleShaftByFactorOfLineEdit->setObjectName(QStringLiteral("mScaleShaftByFactorOfLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mScaleShaftByFactorOfLineEdit);

        mShaftOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        formLayout_3 = new QFormLayout(page_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        LengthLabel = new QLabel(page_3);
        LengthLabel->setObjectName(QStringLiteral("LengthLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, LengthLabel);

        mShaftLengthLineEdit = new QLineEdit(page_3);
        mShaftLengthLineEdit->setObjectName(QStringLiteral("mShaftLengthLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mShaftLengthLineEdit);

        mShaftOptionsStackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(mShaftOptionsStackedWidget);


        verticalLayout_4->addWidget(generalOptionsGroupBox);


        verticalLayout->addWidget(mArrowWidget);

        widget = new QWidget(QgsMeshRendererVectorSettingsWidgetBase);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mStreamlineWidget = new QGroupBox(widget);
        mStreamlineWidget->setObjectName(QStringLiteral("mStreamlineWidget"));
        horizontalLayout_4 = new QHBoxLayout(mStreamlineWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mStreamlinesSeedingMethodComboBox = new QComboBox(mStreamlineWidget);
        mStreamlinesSeedingMethodComboBox->setObjectName(QStringLiteral("mStreamlinesSeedingMethodComboBox"));

        horizontalLayout_4->addWidget(mStreamlinesSeedingMethodComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mStreamlinesDensityLabel = new QLabel(mStreamlineWidget);
        mStreamlinesDensityLabel->setObjectName(QStringLiteral("mStreamlinesDensityLabel"));

        horizontalLayout->addWidget(mStreamlinesDensityLabel);

        mStreamlinesDensitySpinBox = new QgsDoubleSpinBox(mStreamlineWidget);
        mStreamlinesDensitySpinBox->setObjectName(QStringLiteral("mStreamlinesDensitySpinBox"));
        mStreamlinesDensitySpinBox->setDecimals(1);
        mStreamlinesDensitySpinBox->setValue(5);

        horizontalLayout->addWidget(mStreamlinesDensitySpinBox);

        horizontalLayout->setStretch(0, 1);

        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_5->addWidget(mStreamlineWidget);


        verticalLayout->addWidget(widget);

        mTracesGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mTracesGroupBox->setObjectName(QStringLiteral("mTracesGroupBox"));
        verticalLayout_6 = new QVBoxLayout(mTracesGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(mTracesGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        mTracesParticlesCountSpinBox = new QgsSpinBox(mTracesGroupBox);
        mTracesParticlesCountSpinBox->setObjectName(QStringLiteral("mTracesParticlesCountSpinBox"));
        mTracesParticlesCountSpinBox->setMaximum(1000000);
        mTracesParticlesCountSpinBox->setSingleStep(100);
        mTracesParticlesCountSpinBox->setValue(1000);

        horizontalLayout_6->addWidget(mTracesParticlesCountSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(mTracesGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        mTracesMaxLengthSpinBox = new QgsDoubleSpinBox(mTracesGroupBox);
        mTracesMaxLengthSpinBox->setObjectName(QStringLiteral("mTracesMaxLengthSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTracesMaxLengthSpinBox->sizePolicy().hasHeightForWidth());
        mTracesMaxLengthSpinBox->setSizePolicy(sizePolicy1);
        mTracesMaxLengthSpinBox->setMinimumSize(QSize(0, 0));
        mTracesMaxLengthSpinBox->setMaximumSize(QSize(16777215, 16777215));
        mTracesMaxLengthSpinBox->setMinimum(1);
        mTracesMaxLengthSpinBox->setMaximum(1e+14);
        mTracesMaxLengthSpinBox->setSingleStep(10);
        mTracesMaxLengthSpinBox->setValue(10);

        horizontalLayout_7->addWidget(mTracesMaxLengthSpinBox);

        mTracesTailLengthMapUnitWidget = new QgsUnitSelectionWidget(mTracesGroupBox);
        mTracesTailLengthMapUnitWidget->setObjectName(QStringLiteral("mTracesTailLengthMapUnitWidget"));

        horizontalLayout_7->addWidget(mTracesTailLengthMapUnitWidget);


        verticalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(mTracesGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsMeshRendererVectorSettingsWidgetBase);

        mShaftOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMeshRendererVectorSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        mSymbologyGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Symbology", Q_NULLPTR));
        mSymbologyVectorComboBox->clear();
        mSymbologyVectorComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrows", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Streamlines", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Traces", Q_NULLPTR)
        );
        arrowWidthColorGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Line Width and Color", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Coloring Method", Q_NULLPTR));
        mColorRampShaderGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Color Ramp Shader", Q_NULLPTR));
        mColorRampShaderLoadButton->setText(QString());
        label_5->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", Q_NULLPTR));
        mSimgleColorLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Color", Q_NULLPTR));
        mFilterByMagGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Filter by Magnitude", Q_NULLPTR));
        minimumMagLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", Q_NULLPTR));
        maximumMagLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", Q_NULLPTR));
        mDisplayVectorsOnGridGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Display on User Grid", Q_NULLPTR));
        xSpacingLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "X Spacing", Q_NULLPTR));
        ySpacingLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Y Spacing", Q_NULLPTR));
        mXSpacingSpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", Q_NULLPTR));
        mYSpacingSpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", Q_NULLPTR));
        headOptionsGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Head Options", Q_NULLPTR));
        headWidthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Width", Q_NULLPTR));
        percShaftLenLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of shaft length", Q_NULLPTR));
        headLengthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", Q_NULLPTR));
        percShaftLenLabel_2->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of shaft length", Q_NULLPTR));
        generalOptionsGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrow Length", Q_NULLPTR));
        mShaftLengthComboBox->clear();
        mShaftLengthComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Defined by Min and Max", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scaled to Magnitude", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Fixed", Q_NULLPTR)
        );
        minimumShaftLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Minimum", Q_NULLPTR));
        maximumShaftLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Maximum", Q_NULLPTR));
        scaleByFactorOfLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scale by a factor of", Q_NULLPTR));
        LengthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", Q_NULLPTR));
        mStreamlineWidget->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Streamlines Seeding Method", Q_NULLPTR));
        mStreamlinesSeedingMethodComboBox->clear();
        mStreamlinesSeedingMethodComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "On Mesh/Grid", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Randomly", Q_NULLPTR)
        );
        mStreamlinesDensityLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Density", Q_NULLPTR));
        mStreamlinesDensitySpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "%", Q_NULLPTR));
        mTracesGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Traces", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Particles count", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max tail length", Q_NULLPTR));
        Q_UNUSED(QgsMeshRendererVectorSettingsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererVectorSettingsWidgetBase: public Ui_QgsMeshRendererVectorSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
