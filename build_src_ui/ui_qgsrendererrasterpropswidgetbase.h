/********************************************************************************
** Form generated from reading UI file 'qgsrendererrasterpropswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERRASTERPROPSWIDGETBASE_H
#define UI_QGSRENDERERRASTERPROPSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererRasterPropsWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *mLayerRendering;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QCheckBox *mColorizeCheck;
    QgsColorButton *btnColorizeColor;
    QLabel *labelColorizeStrength;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sliderColorizeStrength;
    QgsSpinBox *spinColorizeStrength;
    QLabel *label_3;
    QSlider *mSliderContrast;
    QLabel *mBlendTypeLabel;
    QLabel *labelGrayscale;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QgsSpinBox *mContrastSpinBox;
    QComboBox *comboGrayscale;
    QSlider *mSliderBrightness;
    QSlider *sliderSaturation;
    QgsSpinBox *spinBoxSaturation;
    QgsSpinBox *mBrightnessSpinBox;
    QLabel *label_2;
    QToolButton *mResetColorRenderingBtn;
    QLabel *label_5;
    QLabel *labelSaturation;
    QLabel *label_4;
    QSlider *mSliderGamma;
    QgsDoubleSpinBox *mGammaSpinBox;
    QGroupBox *mResamplingBox;
    QGridLayout *gridLayout2;
    QLabel *mZoomedInResamplingLabel;
    QLabel *mZoomedOutResamplingLabel;
    QLabel *mMaximumOversamplingLabel;
    QComboBox *mZoomedInResamplingComboBox;
    QComboBox *mZoomedOutResamplingComboBox;
    QgsDoubleSpinBox *mMaximumOversamplingSpinBox;
    QCheckBox *mCbEarlyResampling;
    QComboBox *cboRenderers;

    void setupUi(QWidget *QgsRendererRasterPropsWidgetBase)
    {
        if (QgsRendererRasterPropsWidgetBase->objectName().isEmpty())
            QgsRendererRasterPropsWidgetBase->setObjectName(QStringLiteral("QgsRendererRasterPropsWidgetBase"));
        QgsRendererRasterPropsWidgetBase->resize(382, 593);
        QgsRendererRasterPropsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(QgsRendererRasterPropsWidgetBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);

        stackedWidget = new QStackedWidget(QgsRendererRasterPropsWidgetBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QStringLiteral("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);

        frame = new QFrame(QgsRendererRasterPropsWidgetBase);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mLayerRendering = new QGroupBox(frame);
        mLayerRendering->setObjectName(QStringLiteral("mLayerRendering"));
        gridLayout_3 = new QGridLayout(mLayerRendering);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mColorizeCheck = new QCheckBox(mLayerRendering);
        mColorizeCheck->setObjectName(QStringLiteral("mColorizeCheck"));

        gridLayout->addWidget(mColorizeCheck, 0, 0, 1, 2);

        btnColorizeColor = new QgsColorButton(mLayerRendering);
        btnColorizeColor->setObjectName(QStringLiteral("btnColorizeColor"));
        btnColorizeColor->setMinimumSize(QSize(100, 0));
        btnColorizeColor->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(btnColorizeColor, 0, 2, 1, 1);

        labelColorizeStrength = new QLabel(mLayerRendering);
        labelColorizeStrength->setObjectName(QStringLiteral("labelColorizeStrength"));

        gridLayout->addWidget(labelColorizeStrength, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sliderColorizeStrength = new QSlider(mLayerRendering);
        sliderColorizeStrength->setObjectName(QStringLiteral("sliderColorizeStrength"));
        sliderColorizeStrength->setMaximum(100);
        sliderColorizeStrength->setValue(100);
        sliderColorizeStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderColorizeStrength);

        spinColorizeStrength = new QgsSpinBox(mLayerRendering);
        spinColorizeStrength->setObjectName(QStringLiteral("spinColorizeStrength"));
        spinColorizeStrength->setMinimum(0);
        spinColorizeStrength->setMaximum(100);
        spinColorizeStrength->setValue(100);

        horizontalLayout_2->addWidget(spinColorizeStrength);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 2);


        gridLayout_3->addLayout(gridLayout, 6, 1, 1, 2);

        label_3 = new QLabel(mLayerRendering);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 6, 0, 1, 1);

        mSliderContrast = new QSlider(mLayerRendering);
        mSliderContrast->setObjectName(QStringLiteral("mSliderContrast"));
        mSliderContrast->setMinimumSize(QSize(75, 0));
        mSliderContrast->setMinimum(-100);
        mSliderContrast->setMaximum(100);
        mSliderContrast->setSingleStep(1);
        mSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(mSliderContrast, 3, 1, 1, 1);

        mBlendTypeLabel = new QLabel(mLayerRendering);
        mBlendTypeLabel->setObjectName(QStringLiteral("mBlendTypeLabel"));

        gridLayout_3->addWidget(mBlendTypeLabel, 0, 0, 1, 1);

        labelGrayscale = new QLabel(mLayerRendering);
        labelGrayscale->setObjectName(QStringLiteral("labelGrayscale"));

        gridLayout_3->addWidget(labelGrayscale, 5, 0, 1, 1);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRendering);
        mBlendModeComboBox->setObjectName(QStringLiteral("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(mBlendModeComboBox, 0, 1, 1, 2);

        mContrastSpinBox = new QgsSpinBox(mLayerRendering);
        mContrastSpinBox->setObjectName(QStringLiteral("mContrastSpinBox"));
        mContrastSpinBox->setMinimum(-100);
        mContrastSpinBox->setMaximum(100);

        gridLayout_3->addWidget(mContrastSpinBox, 3, 2, 1, 1);

        comboGrayscale = new QComboBox(mLayerRendering);
        comboGrayscale->setObjectName(QStringLiteral("comboGrayscale"));

        gridLayout_3->addWidget(comboGrayscale, 5, 1, 1, 2);

        mSliderBrightness = new QSlider(mLayerRendering);
        mSliderBrightness->setObjectName(QStringLiteral("mSliderBrightness"));
        mSliderBrightness->setMinimumSize(QSize(75, 0));
        mSliderBrightness->setMinimum(-255);
        mSliderBrightness->setMaximum(255);
        mSliderBrightness->setOrientation(Qt::Horizontal);
        mSliderBrightness->setTickPosition(QSlider::NoTicks);
        mSliderBrightness->setTickInterval(0);

        gridLayout_3->addWidget(mSliderBrightness, 1, 1, 1, 1);

        sliderSaturation = new QSlider(mLayerRendering);
        sliderSaturation->setObjectName(QStringLiteral("sliderSaturation"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sliderSaturation->sizePolicy().hasHeightForWidth());
        sliderSaturation->setSizePolicy(sizePolicy2);
        sliderSaturation->setMinimumSize(QSize(75, 0));
        sliderSaturation->setMinimum(-100);
        sliderSaturation->setMaximum(100);
        sliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderSaturation, 2, 1, 1, 1);

        spinBoxSaturation = new QgsSpinBox(mLayerRendering);
        spinBoxSaturation->setObjectName(QStringLiteral("spinBoxSaturation"));
        spinBoxSaturation->setMinimum(-100);
        spinBoxSaturation->setMaximum(100);
        spinBoxSaturation->setValue(0);
        spinBoxSaturation->setProperty("decimals", QVariant(0));

        gridLayout_3->addWidget(spinBoxSaturation, 2, 2, 1, 1);

        mBrightnessSpinBox = new QgsSpinBox(mLayerRendering);
        mBrightnessSpinBox->setObjectName(QStringLiteral("mBrightnessSpinBox"));
        mBrightnessSpinBox->setMinimum(-255);
        mBrightnessSpinBox->setMaximum(255);

        gridLayout_3->addWidget(mBrightnessSpinBox, 1, 2, 1, 1);

        label_2 = new QLabel(mLayerRendering);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        mResetColorRenderingBtn = new QToolButton(mLayerRendering);
        mResetColorRenderingBtn->setObjectName(QStringLiteral("mResetColorRenderingBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetColorRenderingBtn->setIcon(icon);
        mResetColorRenderingBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(mResetColorRenderingBtn, 7, 1, 1, 1);

        label_5 = new QLabel(mLayerRendering);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        labelSaturation = new QLabel(mLayerRendering);
        labelSaturation->setObjectName(QStringLiteral("labelSaturation"));

        gridLayout_3->addWidget(labelSaturation, 2, 0, 1, 1);

        label_4 = new QLabel(mLayerRendering);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        mSliderGamma = new QSlider(mLayerRendering);
        mSliderGamma->setObjectName(QStringLiteral("mSliderGamma"));
        mSliderGamma->setMinimum(10);
        mSliderGamma->setMaximum(1000);
        mSliderGamma->setSingleStep(10);
        mSliderGamma->setPageStep(100);
        mSliderGamma->setValue(100);
        mSliderGamma->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(mSliderGamma, 4, 1, 1, 1);

        mGammaSpinBox = new QgsDoubleSpinBox(mLayerRendering);
        mGammaSpinBox->setObjectName(QStringLiteral("mGammaSpinBox"));
        mGammaSpinBox->setMinimum(0.1);
        mGammaSpinBox->setMaximum(10);
        mGammaSpinBox->setSingleStep(0.1);
        mGammaSpinBox->setValue(1);

        gridLayout_3->addWidget(mGammaSpinBox, 4, 2, 1, 1);


        verticalLayout_3->addWidget(mLayerRendering);

        mResamplingBox = new QGroupBox(frame);
        mResamplingBox->setObjectName(QStringLiteral("mResamplingBox"));
        gridLayout2 = new QGridLayout(mResamplingBox);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        mZoomedInResamplingLabel = new QLabel(mResamplingBox);
        mZoomedInResamplingLabel->setObjectName(QStringLiteral("mZoomedInResamplingLabel"));

        gridLayout2->addWidget(mZoomedInResamplingLabel, 0, 0, 1, 1);

        mZoomedOutResamplingLabel = new QLabel(mResamplingBox);
        mZoomedOutResamplingLabel->setObjectName(QStringLiteral("mZoomedOutResamplingLabel"));

        gridLayout2->addWidget(mZoomedOutResamplingLabel, 1, 0, 1, 1);

        mMaximumOversamplingLabel = new QLabel(mResamplingBox);
        mMaximumOversamplingLabel->setObjectName(QStringLiteral("mMaximumOversamplingLabel"));

        gridLayout2->addWidget(mMaximumOversamplingLabel, 2, 0, 1, 1);

        mZoomedInResamplingComboBox = new QComboBox(mResamplingBox);
        mZoomedInResamplingComboBox->setObjectName(QStringLiteral("mZoomedInResamplingComboBox"));

        gridLayout2->addWidget(mZoomedInResamplingComboBox, 0, 2, 1, 1);

        mZoomedOutResamplingComboBox = new QComboBox(mResamplingBox);
        mZoomedOutResamplingComboBox->setObjectName(QStringLiteral("mZoomedOutResamplingComboBox"));

        gridLayout2->addWidget(mZoomedOutResamplingComboBox, 1, 2, 1, 1);

        mMaximumOversamplingSpinBox = new QgsDoubleSpinBox(mResamplingBox);
        mMaximumOversamplingSpinBox->setObjectName(QStringLiteral("mMaximumOversamplingSpinBox"));

        gridLayout2->addWidget(mMaximumOversamplingSpinBox, 2, 2, 1, 1);

        mCbEarlyResampling = new QCheckBox(mResamplingBox);
        mCbEarlyResampling->setObjectName(QStringLiteral("mCbEarlyResampling"));

        gridLayout2->addWidget(mCbEarlyResampling, 3, 0, 1, 1);


        verticalLayout_3->addWidget(mResamplingBox);


        gridLayout_2->addWidget(frame, 2, 0, 1, 1);

        cboRenderers = new QComboBox(QgsRendererRasterPropsWidgetBase);
        cboRenderers->setObjectName(QStringLiteral("cboRenderers"));

        gridLayout_2->addWidget(cboRenderers, 0, 0, 1, 1);

        QWidget::setTabOrder(cboRenderers, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mSliderBrightness);
        QWidget::setTabOrder(mSliderBrightness, mBrightnessSpinBox);
        QWidget::setTabOrder(mBrightnessSpinBox, sliderSaturation);
        QWidget::setTabOrder(sliderSaturation, spinBoxSaturation);
        QWidget::setTabOrder(spinBoxSaturation, mSliderContrast);
        QWidget::setTabOrder(mSliderContrast, mContrastSpinBox);
        QWidget::setTabOrder(mContrastSpinBox, mSliderGamma);
        QWidget::setTabOrder(mSliderGamma, mGammaSpinBox);
        QWidget::setTabOrder(mGammaSpinBox, comboGrayscale);
        QWidget::setTabOrder(comboGrayscale, mColorizeCheck);
        QWidget::setTabOrder(mColorizeCheck, btnColorizeColor);
        QWidget::setTabOrder(btnColorizeColor, sliderColorizeStrength);
        QWidget::setTabOrder(sliderColorizeStrength, spinColorizeStrength);
        QWidget::setTabOrder(spinColorizeStrength, mResetColorRenderingBtn);
        QWidget::setTabOrder(mResetColorRenderingBtn, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, mMaximumOversamplingSpinBox);
        QWidget::setTabOrder(mMaximumOversamplingSpinBox, mCbEarlyResampling);

        retranslateUi(QgsRendererRasterPropsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRendererRasterPropsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererRasterPropsWidgetBase)
    {
        label->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "This renderer doesn't implement a graphical interface.", Q_NULLPTR));
        mLayerRendering->setTitle(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Layer Rendering", Q_NULLPTR));
        mColorizeCheck->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Colorize", Q_NULLPTR));
        btnColorizeColor->setText(QString());
        labelColorizeStrength->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Strength", Q_NULLPTR));
        spinColorizeStrength->setSuffix(QApplication::translate("QgsRendererRasterPropsWidgetBase", "%", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Hue", Q_NULLPTR));
        mBlendTypeLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Blending mode", Q_NULLPTR));
        labelGrayscale->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Grayscale", Q_NULLPTR));
        comboGrayscale->clear();
        comboGrayscale->insertItems(0, QStringList()
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "Off", Q_NULLPTR)
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "By lightness", Q_NULLPTR)
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "By luminosity", Q_NULLPTR)
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "By average", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Brightness", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mResetColorRenderingBtn->setToolTip(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Reset all color rendering options to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mResetColorRenderingBtn->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Reset", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Contrast", Q_NULLPTR));
        labelSaturation->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Saturation", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Gamma", Q_NULLPTR));
        mResamplingBox->setTitle(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Resampling", Q_NULLPTR));
        mZoomedInResamplingLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Zoomed in", Q_NULLPTR));
        mZoomedOutResamplingLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Zoomed out", Q_NULLPTR));
        mMaximumOversamplingLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Oversampling", Q_NULLPTR));
        mCbEarlyResampling->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Early resampling", Q_NULLPTR));
        Q_UNUSED(QgsRendererRasterPropsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRendererRasterPropsWidgetBase: public Ui_QgsRendererRasterPropsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERRASTERPROPSWIDGETBASE_H
