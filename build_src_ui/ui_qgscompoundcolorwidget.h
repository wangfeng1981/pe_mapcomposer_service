/********************************************************************************
** Form generated from reading UI file 'qgscompoundcolorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOUNDCOLORWIDGET_H
#define UI_QGSCOMPOUNDCOLORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscolorschemelist.h>
#include <qgscolorwidgets.h>
#include "qgscolorbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCompoundColorWidgetBase
{
public:
    QAction *mActionImportColors;
    QAction *mActionExportColors;
    QAction *mActionPasteColors;
    QAction *mActionImportPalette;
    QAction *mActionRemovePalette;
    QAction *mActionNewPalette;
    QAction *mActionCopyColors;
    QAction *mActionShowInButtons;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *mGridLayout;
    QTabWidget *mTabWidget;
    QWidget *iconColorBox;
    QHBoxLayout *horizontalLayout_9;
    QgsColorBox *mColorBox;
    QgsColorRampWidget *mVerticalRamp;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QgsColorWheel *mColorWheel;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *mSchemeComboBox;
    QToolButton *mSchemeToolButton;
    QgsColorSchemeList *mSchemeList;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *mAddColorToSchemeButton;
    QPushButton *mRemoveColorsFromSchemeButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QgsSpinBox *mSpinBoxRadius;
    QPushButton *mSampleButton;
    QLabel *label_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QgsColorPreviewWidget *mSamplePreview;
    QSpacerItem *verticalSpacer_2;
    QWidget *mSlidersWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *mHueRadio;
    QLabel *label_5;
    QgsColorSliderWidget *mHueSlider;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mSaturationRadio;
    QLabel *label_6;
    QgsColorSliderWidget *mSaturationSlider;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mValueRadio;
    QLabel *label_7;
    QgsColorSliderWidget *mValueSlider;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mRedRadio;
    QLabel *label_8;
    QgsColorSliderWidget *mRedSlider;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *mGreenRadio;
    QLabel *label_9;
    QgsColorSliderWidget *mGreenSlider;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mBlueRadio;
    QLabel *label_10;
    QgsColorSliderWidget *mBlueSlider;
    QHBoxLayout *mAlphaLayout;
    QLabel *mAlphaLabel;
    QgsColorSliderWidget *mAlphaSlider;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QgsColorTextWidget *mColorText;
    QSpacerItem *verticalSpacer;
    QWidget *mPreviewWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *mOldColorLabel;
    QPushButton *mAddCustomColorButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_13;
    QgsColorPreviewWidget *mColorPreview;
    QWidget *mSwatchesWidget;
    QGridLayout *gridLayout_4;
    QgsColorButton *mSwatchButton9;
    QgsColorButton *mSwatchButton11;
    QgsColorButton *mSwatchButton12;
    QgsColorButton *mSwatchButton5;
    QgsColorButton *mSwatchButton2;
    QgsColorButton *mSwatchButton3;
    QgsColorButton *mSwatchButton1;
    QgsColorButton *mSwatchButton13;
    QgsColorButton *mSwatchButton6;
    QgsColorButton *mSwatchButton7;
    QgsColorButton *mSwatchButton14;
    QgsColorButton *mSwatchButton15;
    QgsColorButton *mSwatchButton8;
    QgsColorButton *mSwatchButton16;
    QgsColorButton *mSwatchButton4;
    QgsColorButton *mSwatchButton10;

    void setupUi(QWidget *QgsCompoundColorWidgetBase)
    {
        if (QgsCompoundColorWidgetBase->objectName().isEmpty())
            QgsCompoundColorWidgetBase->setObjectName(QStringLiteral("QgsCompoundColorWidgetBase"));
        QgsCompoundColorWidgetBase->resize(597, 329);
        mActionImportColors = new QAction(QgsCompoundColorWidgetBase);
        mActionImportColors->setObjectName(QStringLiteral("mActionImportColors"));
        mActionExportColors = new QAction(QgsCompoundColorWidgetBase);
        mActionExportColors->setObjectName(QStringLiteral("mActionExportColors"));
        mActionPasteColors = new QAction(QgsCompoundColorWidgetBase);
        mActionPasteColors->setObjectName(QStringLiteral("mActionPasteColors"));
        mActionImportPalette = new QAction(QgsCompoundColorWidgetBase);
        mActionImportPalette->setObjectName(QStringLiteral("mActionImportPalette"));
        mActionRemovePalette = new QAction(QgsCompoundColorWidgetBase);
        mActionRemovePalette->setObjectName(QStringLiteral("mActionRemovePalette"));
        mActionNewPalette = new QAction(QgsCompoundColorWidgetBase);
        mActionNewPalette->setObjectName(QStringLiteral("mActionNewPalette"));
        mActionCopyColors = new QAction(QgsCompoundColorWidgetBase);
        mActionCopyColors->setObjectName(QStringLiteral("mActionCopyColors"));
        mActionShowInButtons = new QAction(QgsCompoundColorWidgetBase);
        mActionShowInButtons->setObjectName(QStringLiteral("mActionShowInButtons"));
        mActionShowInButtons->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(QgsCompoundColorWidgetBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGridLayout = new QGridLayout();
        mGridLayout->setObjectName(QStringLiteral("mGridLayout"));
        mGridLayout->setHorizontalSpacing(6);
        mTabWidget = new QTabWidget(QgsCompoundColorWidgetBase);
        mTabWidget->setObjectName(QStringLiteral("mTabWidget"));
        mTabWidget->setIconSize(QSize(16, 16));
        iconColorBox = new QWidget();
        iconColorBox->setObjectName(QStringLiteral("iconColorBox"));
        horizontalLayout_9 = new QHBoxLayout(iconColorBox);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mColorBox = new QgsColorBox(iconColorBox);
        mColorBox->setObjectName(QStringLiteral("mColorBox"));

        horizontalLayout_9->addWidget(mColorBox);

        mVerticalRamp = new QgsColorRampWidget(iconColorBox);
        mVerticalRamp->setObjectName(QStringLiteral("mVerticalRamp"));

        horizontalLayout_9->addWidget(mVerticalRamp);

        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconColorBox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(iconColorBox, icon, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        mColorWheel = new QgsColorWheel(widget);
        mColorWheel->setObjectName(QStringLiteral("mColorWheel"));

        horizontalLayout_10->addWidget(mColorWheel);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconColorWheel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(widget, icon1, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mSchemeComboBox = new QComboBox(tab);
        mSchemeComboBox->setObjectName(QStringLiteral("mSchemeComboBox"));

        horizontalLayout_7->addWidget(mSchemeComboBox);

        mSchemeToolButton = new QToolButton(tab);
        mSchemeToolButton->setObjectName(QStringLiteral("mSchemeToolButton"));
        mSchemeToolButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_7->addWidget(mSchemeToolButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        mSchemeList = new QgsColorSchemeList(tab);
        mSchemeList->setObjectName(QStringLiteral("mSchemeList"));

        verticalLayout_3->addWidget(mSchemeList);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        mAddColorToSchemeButton = new QPushButton(tab);
        mAddColorToSchemeButton->setObjectName(QStringLiteral("mAddColorToSchemeButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddColorToSchemeButton->setIcon(icon2);

        horizontalLayout_11->addWidget(mAddColorToSchemeButton);

        mRemoveColorsFromSchemeButton = new QPushButton(tab);
        mRemoveColorsFromSchemeButton->setObjectName(QStringLiteral("mRemoveColorsFromSchemeButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveColorsFromSchemeButton->setIcon(icon3);

        horizontalLayout_11->addWidget(mRemoveColorsFromSchemeButton);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalLayout_3->setStretch(1, 1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mIconColorSwatches.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab, icon4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);

        mSpinBoxRadius = new QgsSpinBox(tab_2);
        mSpinBoxRadius->setObjectName(QStringLiteral("mSpinBoxRadius"));
        mSpinBoxRadius->setMinimum(1);
        mSpinBoxRadius->setMaximum(100);

        horizontalLayout_12->addWidget(mSpinBoxRadius);


        verticalLayout_4->addLayout(horizontalLayout_12);

        mSampleButton = new QPushButton(tab_2);
        mSampleButton->setObjectName(QStringLiteral("mSampleButton"));

        verticalLayout_4->addWidget(mSampleButton);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        frame = new QFrame(tab_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        mSamplePreview = new QgsColorPreviewWidget(frame);
        mSamplePreview->setObjectName(QStringLiteral("mSamplePreview"));
        mSamplePreview->setMinimumSize(QSize(0, 40));

        verticalLayout_5->addWidget(mSamplePreview);


        verticalLayout_4->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mIconColorPicker.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab_2, icon5, QString());

        mGridLayout->addWidget(mTabWidget, 0, 0, 1, 1);

        mSlidersWidget = new QWidget(QgsCompoundColorWidgetBase);
        mSlidersWidget->setObjectName(QStringLiteral("mSlidersWidget"));
        verticalLayout = new QVBoxLayout(mSlidersWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mHueRadio = new QRadioButton(mSlidersWidget);
        mHueRadio->setObjectName(QStringLiteral("mHueRadio"));

        horizontalLayout_4->addWidget(mHueRadio);

        label_5 = new QLabel(mSlidersWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        mHueSlider = new QgsColorSliderWidget(mSlidersWidget);
        mHueSlider->setObjectName(QStringLiteral("mHueSlider"));

        horizontalLayout_4->addWidget(mHueSlider);

        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mSaturationRadio = new QRadioButton(mSlidersWidget);
        mSaturationRadio->setObjectName(QStringLiteral("mSaturationRadio"));

        horizontalLayout_5->addWidget(mSaturationRadio);

        label_6 = new QLabel(mSlidersWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        mSaturationSlider = new QgsColorSliderWidget(mSlidersWidget);
        mSaturationSlider->setObjectName(QStringLiteral("mSaturationSlider"));

        horizontalLayout_5->addWidget(mSaturationSlider);

        horizontalLayout_5->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mValueRadio = new QRadioButton(mSlidersWidget);
        mValueRadio->setObjectName(QStringLiteral("mValueRadio"));

        horizontalLayout_6->addWidget(mValueRadio);

        label_7 = new QLabel(mSlidersWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        mValueSlider = new QgsColorSliderWidget(mSlidersWidget);
        mValueSlider->setObjectName(QStringLiteral("mValueSlider"));

        horizontalLayout_6->addWidget(mValueSlider);

        horizontalLayout_6->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mRedRadio = new QRadioButton(mSlidersWidget);
        mRedRadio->setObjectName(QStringLiteral("mRedRadio"));

        horizontalLayout->addWidget(mRedRadio);

        label_8 = new QLabel(mSlidersWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        mRedSlider = new QgsColorSliderWidget(mSlidersWidget);
        mRedSlider->setObjectName(QStringLiteral("mRedSlider"));

        horizontalLayout->addWidget(mRedSlider);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mGreenRadio = new QRadioButton(mSlidersWidget);
        mGreenRadio->setObjectName(QStringLiteral("mGreenRadio"));

        horizontalLayout_2->addWidget(mGreenRadio);

        label_9 = new QLabel(mSlidersWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        mGreenSlider = new QgsColorSliderWidget(mSlidersWidget);
        mGreenSlider->setObjectName(QStringLiteral("mGreenSlider"));

        horizontalLayout_2->addWidget(mGreenSlider);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mBlueRadio = new QRadioButton(mSlidersWidget);
        mBlueRadio->setObjectName(QStringLiteral("mBlueRadio"));

        horizontalLayout_3->addWidget(mBlueRadio);

        label_10 = new QLabel(mSlidersWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_3->addWidget(label_10);

        mBlueSlider = new QgsColorSliderWidget(mSlidersWidget);
        mBlueSlider->setObjectName(QStringLiteral("mBlueSlider"));

        horizontalLayout_3->addWidget(mBlueSlider);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        mAlphaLayout = new QHBoxLayout();
        mAlphaLayout->setObjectName(QStringLiteral("mAlphaLayout"));
        mAlphaLabel = new QLabel(mSlidersWidget);
        mAlphaLabel->setObjectName(QStringLiteral("mAlphaLabel"));

        mAlphaLayout->addWidget(mAlphaLabel);

        mAlphaSlider = new QgsColorSliderWidget(mSlidersWidget);
        mAlphaSlider->setObjectName(QStringLiteral("mAlphaSlider"));

        mAlphaLayout->addWidget(mAlphaSlider);


        verticalLayout->addLayout(mAlphaLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(mSlidersWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        mColorText = new QgsColorTextWidget(mSlidersWidget);
        mColorText->setObjectName(QStringLiteral("mColorText"));

        horizontalLayout_8->addWidget(mColorText);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        mGridLayout->addWidget(mSlidersWidget, 0, 1, 1, 1);

        mPreviewWidget = new QWidget(QgsCompoundColorWidgetBase);
        mPreviewWidget->setObjectName(QStringLiteral("mPreviewWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPreviewWidget->sizePolicy().hasHeightForWidth());
        mPreviewWidget->setSizePolicy(sizePolicy);
        mPreviewWidget->setMaximumSize(QSize(16777215, 80));
        gridLayout = new QGridLayout(mPreviewWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(mPreviewWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mOldColorLabel = new QLabel(mPreviewWidget);
        mOldColorLabel->setObjectName(QStringLiteral("mOldColorLabel"));
        mOldColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mOldColorLabel, 1, 0, 1, 1);

        mAddCustomColorButton = new QPushButton(mPreviewWidget);
        mAddCustomColorButton->setObjectName(QStringLiteral("mAddCustomColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddCustomColorButton->sizePolicy().hasHeightForWidth());
        mAddCustomColorButton->setSizePolicy(sizePolicy1);
        mAddCustomColorButton->setMinimumSize(QSize(28, 0));
        mAddCustomColorButton->setMaximumSize(QSize(28, 16777215));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionAtlasNext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCustomColorButton->setIcon(icon6);
        mAddCustomColorButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(mAddCustomColorButton, 0, 2, 2, 1);

        frame_2 = new QFrame(mPreviewWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_2);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(1, 1, 1, 1);
        mColorPreview = new QgsColorPreviewWidget(frame_2);
        mColorPreview->setObjectName(QStringLiteral("mColorPreview"));
        mColorPreview->setMinimumSize(QSize(0, 40));

        horizontalLayout_13->addWidget(mColorPreview);


        gridLayout->addWidget(frame_2, 0, 1, 2, 1);

        gridLayout->setColumnStretch(1, 1);

        mGridLayout->addWidget(mPreviewWidget, 1, 0, 1, 1);

        mSwatchesWidget = new QWidget(QgsCompoundColorWidgetBase);
        mSwatchesWidget->setObjectName(QStringLiteral("mSwatchesWidget"));
        sizePolicy.setHeightForWidth(mSwatchesWidget->sizePolicy().hasHeightForWidth());
        mSwatchesWidget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(mSwatchesWidget);
        gridLayout_4->setSpacing(1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mSwatchButton9 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton9->setObjectName(QStringLiteral("mSwatchButton9"));
        mSwatchButton9->setMinimumSize(QSize(38, 30));
        mSwatchButton9->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton9, 1, 0, 1, 1);

        mSwatchButton11 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton11->setObjectName(QStringLiteral("mSwatchButton11"));
        mSwatchButton11->setMinimumSize(QSize(38, 30));
        mSwatchButton11->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton11, 1, 2, 1, 1);

        mSwatchButton12 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton12->setObjectName(QStringLiteral("mSwatchButton12"));
        mSwatchButton12->setMinimumSize(QSize(38, 30));
        mSwatchButton12->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton12, 1, 3, 1, 1);

        mSwatchButton5 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton5->setObjectName(QStringLiteral("mSwatchButton5"));
        mSwatchButton5->setMinimumSize(QSize(38, 30));
        mSwatchButton5->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton5, 0, 4, 1, 1);

        mSwatchButton2 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton2->setObjectName(QStringLiteral("mSwatchButton2"));
        mSwatchButton2->setMinimumSize(QSize(38, 30));
        mSwatchButton2->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton2, 0, 1, 1, 1);

        mSwatchButton3 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton3->setObjectName(QStringLiteral("mSwatchButton3"));
        mSwatchButton3->setMinimumSize(QSize(38, 30));
        mSwatchButton3->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton3, 0, 2, 1, 1);

        mSwatchButton1 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton1->setObjectName(QStringLiteral("mSwatchButton1"));
        mSwatchButton1->setMinimumSize(QSize(38, 30));
        mSwatchButton1->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton1, 0, 0, 1, 1);

        mSwatchButton13 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton13->setObjectName(QStringLiteral("mSwatchButton13"));
        mSwatchButton13->setMinimumSize(QSize(38, 30));
        mSwatchButton13->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton13, 1, 4, 1, 1);

        mSwatchButton6 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton6->setObjectName(QStringLiteral("mSwatchButton6"));
        mSwatchButton6->setMinimumSize(QSize(38, 30));
        mSwatchButton6->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton6, 0, 5, 1, 1);

        mSwatchButton7 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton7->setObjectName(QStringLiteral("mSwatchButton7"));
        mSwatchButton7->setMinimumSize(QSize(38, 30));
        mSwatchButton7->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton7, 0, 6, 1, 1);

        mSwatchButton14 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton14->setObjectName(QStringLiteral("mSwatchButton14"));
        mSwatchButton14->setMinimumSize(QSize(38, 30));
        mSwatchButton14->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton14, 1, 5, 1, 1);

        mSwatchButton15 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton15->setObjectName(QStringLiteral("mSwatchButton15"));
        mSwatchButton15->setMinimumSize(QSize(38, 30));
        mSwatchButton15->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton15, 1, 6, 1, 1);

        mSwatchButton8 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton8->setObjectName(QStringLiteral("mSwatchButton8"));
        mSwatchButton8->setMinimumSize(QSize(38, 30));
        mSwatchButton8->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton8, 0, 7, 1, 1);

        mSwatchButton16 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton16->setObjectName(QStringLiteral("mSwatchButton16"));
        mSwatchButton16->setMinimumSize(QSize(38, 30));
        mSwatchButton16->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton16, 1, 7, 1, 1);

        mSwatchButton4 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton4->setObjectName(QStringLiteral("mSwatchButton4"));
        mSwatchButton4->setMinimumSize(QSize(38, 30));
        mSwatchButton4->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton4, 0, 3, 1, 1);

        mSwatchButton10 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton10->setObjectName(QStringLiteral("mSwatchButton10"));
        mSwatchButton10->setMinimumSize(QSize(38, 30));
        mSwatchButton10->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton10, 1, 1, 1, 1);


        mGridLayout->addWidget(mSwatchesWidget, 1, 1, 1, 1);

        mGridLayout->setRowStretch(0, 1);
        mGridLayout->setColumnStretch(0, 1);

        verticalLayout_2->addLayout(mGridLayout);

        QWidget::setTabOrder(mTabWidget, mSchemeComboBox);
        QWidget::setTabOrder(mSchemeComboBox, mSchemeToolButton);
        QWidget::setTabOrder(mSchemeToolButton, mAddColorToSchemeButton);
        QWidget::setTabOrder(mAddColorToSchemeButton, mRemoveColorsFromSchemeButton);
        QWidget::setTabOrder(mRemoveColorsFromSchemeButton, mSpinBoxRadius);
        QWidget::setTabOrder(mSpinBoxRadius, mSampleButton);
        QWidget::setTabOrder(mSampleButton, mHueRadio);
        QWidget::setTabOrder(mHueRadio, mSaturationRadio);
        QWidget::setTabOrder(mSaturationRadio, mValueRadio);
        QWidget::setTabOrder(mValueRadio, mRedRadio);
        QWidget::setTabOrder(mRedRadio, mGreenRadio);
        QWidget::setTabOrder(mGreenRadio, mBlueRadio);
        QWidget::setTabOrder(mBlueRadio, mAddCustomColorButton);
        QWidget::setTabOrder(mAddCustomColorButton, mSwatchButton1);
        QWidget::setTabOrder(mSwatchButton1, mSwatchButton9);
        QWidget::setTabOrder(mSwatchButton9, mSwatchButton2);
        QWidget::setTabOrder(mSwatchButton2, mSwatchButton10);
        QWidget::setTabOrder(mSwatchButton10, mSwatchButton3);
        QWidget::setTabOrder(mSwatchButton3, mSwatchButton11);
        QWidget::setTabOrder(mSwatchButton11, mSwatchButton4);
        QWidget::setTabOrder(mSwatchButton4, mSwatchButton12);
        QWidget::setTabOrder(mSwatchButton12, mSwatchButton5);
        QWidget::setTabOrder(mSwatchButton5, mSwatchButton13);
        QWidget::setTabOrder(mSwatchButton13, mSwatchButton6);
        QWidget::setTabOrder(mSwatchButton6, mSwatchButton14);
        QWidget::setTabOrder(mSwatchButton14, mSwatchButton7);
        QWidget::setTabOrder(mSwatchButton7, mSwatchButton15);
        QWidget::setTabOrder(mSwatchButton15, mSwatchButton8);
        QWidget::setTabOrder(mSwatchButton8, mSwatchButton16);

        retranslateUi(QgsCompoundColorWidgetBase);

        mTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsCompoundColorWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompoundColorWidgetBase)
    {
        mActionImportColors->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Import Colors\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionImportColors->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Import colors from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportColors->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Export Colors\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportColors->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Export colors to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPasteColors->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Paste Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPasteColors->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Paste colors from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionImportPalette->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Import Palette\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionImportPalette->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Import palette from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRemovePalette->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Remove Palette", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRemovePalette->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Remove current palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionNewPalette->setText(QApplication::translate("QgsCompoundColorWidgetBase", "New Palette\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionNewPalette->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Create a new palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCopyColors->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Copy Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionCopyColors->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Copy selected colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionShowInButtons->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Show in Color Buttons", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(iconColorBox), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(iconColorBox), QApplication::translate("QgsCompoundColorWidgetBase", "Color ramp", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(widget), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(widget), QApplication::translate("QgsCompoundColorWidgetBase", "Color wheel", Q_NULLPTR));
        mSchemeToolButton->setText(QApplication::translate("QgsCompoundColorWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddColorToSchemeButton->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Add current color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddColorToSchemeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveColorsFromSchemeButton->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Remove selected color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveColorsFromSchemeButton->setText(QString());
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(tab), QApplication::translate("QgsCompoundColorWidgetBase", "Color swatches", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Sample average radius", Q_NULLPTR));
        mSpinBoxRadius->setSuffix(QApplication::translate("QgsCompoundColorWidgetBase", " px", Q_NULLPTR));
        mSampleButton->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Sample color", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsCompoundColorWidgetBase", "<i>Press space to sample a color from under the mouse cursor</i>", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(tab_2), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(tab_2), QApplication::translate("QgsCompoundColorWidgetBase", "Color picker", Q_NULLPTR));
        mHueRadio->setText(QString());
        label_5->setText(QApplication::translate("QgsCompoundColorWidgetBase", "H", Q_NULLPTR));
        mSaturationRadio->setText(QString());
        label_6->setText(QApplication::translate("QgsCompoundColorWidgetBase", "S", Q_NULLPTR));
        mValueRadio->setText(QString());
        label_7->setText(QApplication::translate("QgsCompoundColorWidgetBase", "V", Q_NULLPTR));
        mRedRadio->setText(QString());
        label_8->setText(QApplication::translate("QgsCompoundColorWidgetBase", "R", Q_NULLPTR));
        mGreenRadio->setText(QString());
        label_9->setText(QApplication::translate("QgsCompoundColorWidgetBase", "G", Q_NULLPTR));
        mBlueRadio->setText(QString());
        label_10->setText(QApplication::translate("QgsCompoundColorWidgetBase", "B", Q_NULLPTR));
        mAlphaLabel->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Opacity", Q_NULLPTR));
        label->setText(QApplication::translate("QgsCompoundColorWidgetBase", "HTML notation", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Current", Q_NULLPTR));
        mOldColorLabel->setText(QApplication::translate("QgsCompoundColorWidgetBase", "Old", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddCustomColorButton->setToolTip(QApplication::translate("QgsCompoundColorWidgetBase", "Add color to swatch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddCustomColorButton->setText(QString());
        mSwatchButton9->setText(QString());
        mSwatchButton11->setText(QString());
        mSwatchButton12->setText(QString());
        mSwatchButton5->setText(QString());
        mSwatchButton2->setText(QString());
        mSwatchButton3->setText(QString());
        mSwatchButton1->setText(QString());
        mSwatchButton13->setText(QString());
        mSwatchButton6->setText(QString());
        mSwatchButton7->setText(QString());
        mSwatchButton14->setText(QString());
        mSwatchButton15->setText(QString());
        mSwatchButton8->setText(QString());
        mSwatchButton16->setText(QString());
        mSwatchButton4->setText(QString());
        mSwatchButton10->setText(QString());
        Q_UNUSED(QgsCompoundColorWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCompoundColorWidgetBase: public Ui_QgsCompoundColorWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOUNDCOLORWIDGET_H
