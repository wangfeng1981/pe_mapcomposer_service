/********************************************************************************
** Form generated from reading UI file 'qgsgradientcolorrampdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGRADIENTCOLORRAMPDIALOGBASE_H
#define UI_QGSGRADIENTCOLORRAMPDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgscompoundcolorwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsgradientstopeditor.h"
#include "qgsscrollarea.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGradientColorRampDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QgsColorButton *btnColor1;
    QLabel *label_2;
    QgsColorButton *btnColor2;
    QLabel *label_3;
    QComboBox *cboType;
    QSpacerItem *horizontalSpacer_3;
    QgsGradientStopEditor *mStopEditor;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QgsDoubleSpinBox *mPositionSpinBox;
    QPushButton *mDeleteStopButton;
    QSpacerItem *horizontalSpacer;
    QgsCompoundColorWidget *mColorWidget;
    QgsCollapsibleGroupBox *mPlotGroupBox;
    QVBoxLayout *verticalLayout_3;
    QwtPlot *mPlot;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mPlotHueCheckbox;
    QCheckBox *mPlotSaturationCheckbox;
    QCheckBox *mPlotLightnessCheckbox;
    QCheckBox *mPlotAlphaCheckbox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInformation;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsGradientColorRampDialogBase)
    {
        if (QgsGradientColorRampDialogBase->objectName().isEmpty())
            QgsGradientColorRampDialogBase->setObjectName(QStringLiteral("QgsGradientColorRampDialogBase"));
        QgsGradientColorRampDialogBase->resize(868, 638);
        verticalLayout = new QVBoxLayout(QgsGradientColorRampDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(QgsGradientColorRampDialogBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        btnColor1 = new QgsColorButton(QgsGradientColorRampDialogBase);
        btnColor1->setObjectName(QStringLiteral("btnColor1"));
        btnColor1->setMinimumSize(QSize(120, 0));
        btnColor1->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(btnColor1);

        label_2 = new QLabel(QgsGradientColorRampDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        btnColor2 = new QgsColorButton(QgsGradientColorRampDialogBase);
        btnColor2->setObjectName(QStringLiteral("btnColor2"));
        btnColor2->setMinimumSize(QSize(120, 0));
        btnColor2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(btnColor2);

        label_3 = new QLabel(QgsGradientColorRampDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cboType = new QComboBox(QgsGradientColorRampDialogBase);
        cboType->setObjectName(QStringLiteral("cboType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboType->sizePolicy().hasHeightForWidth());
        cboType->setSizePolicy(sizePolicy);
        cboType->setStyleSheet(QStringLiteral(""));
        cboType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        horizontalLayout_3->addWidget(cboType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        mStopEditor = new QgsGradientStopEditor(QgsGradientColorRampDialogBase);
        mStopEditor->setObjectName(QStringLiteral("mStopEditor"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStopEditor->sizePolicy().hasHeightForWidth());
        mStopEditor->setSizePolicy(sizePolicy1);
        mStopEditor->setMinimumSize(QSize(0, 50));
        mStopEditor->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(mStopEditor);

        scrollArea = new QgsScrollArea(QgsGradientColorRampDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 850, 494));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        mPositionSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mPositionSpinBox->setObjectName(QStringLiteral("mPositionSpinBox"));
        mPositionSpinBox->setDecimals(1);

        gridLayout->addWidget(mPositionSpinBox, 0, 1, 1, 1);

        mDeleteStopButton = new QPushButton(groupBox_2);
        mDeleteStopButton->setObjectName(QStringLiteral("mDeleteStopButton"));

        gridLayout->addWidget(mDeleteStopButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        mColorWidget = new QgsCompoundColorWidget(groupBox_2);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));
        mColorWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mColorWidget, 1, 0, 1, 4);


        verticalLayout_2->addWidget(groupBox_2);

        mPlotGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPlotGroupBox->setObjectName(QStringLiteral("mPlotGroupBox"));
        mPlotGroupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(mPlotGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 9, 0, 9);
        mPlot = new QwtPlot(mPlotGroupBox);
        mPlot->setObjectName(QStringLiteral("mPlot"));
        mPlot->setMinimumSize(QSize(0, 200));

        verticalLayout_3->addWidget(mPlot);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mPlotHueCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotHueCheckbox->setObjectName(QStringLiteral("mPlotHueCheckbox"));

        horizontalLayout_2->addWidget(mPlotHueCheckbox);

        mPlotSaturationCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotSaturationCheckbox->setObjectName(QStringLiteral("mPlotSaturationCheckbox"));

        horizontalLayout_2->addWidget(mPlotSaturationCheckbox);

        mPlotLightnessCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotLightnessCheckbox->setObjectName(QStringLiteral("mPlotLightnessCheckbox"));

        horizontalLayout_2->addWidget(mPlotLightnessCheckbox);

        mPlotAlphaCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotAlphaCheckbox->setObjectName(QStringLiteral("mPlotAlphaCheckbox"));

        horizontalLayout_2->addWidget(mPlotAlphaCheckbox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 1);

        verticalLayout_2->addWidget(mPlotGroupBox);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnInformation = new QPushButton(QgsGradientColorRampDialogBase);
        btnInformation->setObjectName(QStringLiteral("btnInformation"));

        horizontalLayout->addWidget(btnInformation);

        mButtonBox = new QDialogButtonBox(QgsGradientColorRampDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(btnColor1);
        label_2->setBuddy(btnColor2);
        label_3->setBuddy(cboType);
        label_4->setBuddy(mPositionSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnColor1, btnColor2);
        QWidget::setTabOrder(btnColor2, cboType);
        QWidget::setTabOrder(cboType, mStopEditor);
        QWidget::setTabOrder(mStopEditor, groupBox_2);
        QWidget::setTabOrder(groupBox_2, mPositionSpinBox);
        QWidget::setTabOrder(mPositionSpinBox, mDeleteStopButton);
        QWidget::setTabOrder(mDeleteStopButton, mColorWidget);
        QWidget::setTabOrder(mColorWidget, mPlotGroupBox);
        QWidget::setTabOrder(mPlotGroupBox, mPlotHueCheckbox);
        QWidget::setTabOrder(mPlotHueCheckbox, mPlotSaturationCheckbox);
        QWidget::setTabOrder(mPlotSaturationCheckbox, mPlotLightnessCheckbox);
        QWidget::setTabOrder(mPlotLightnessCheckbox, mPlotAlphaCheckbox);
        QWidget::setTabOrder(mPlotAlphaCheckbox, btnInformation);
        QWidget::setTabOrder(btnInformation, scrollArea);

        retranslateUi(QgsGradientColorRampDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsGradientColorRampDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsGradientColorRampDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGradientColorRampDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGradientColorRampDialogBase)
    {
        QgsGradientColorRampDialogBase->setWindowTitle(QApplication::translate("QgsGradientColorRampDialogBase", "Gradient Color Ramp", Q_NULLPTR));
        label->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Color &1", Q_NULLPTR));
        btnColor1->setText(QString());
        label_2->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Color &2", Q_NULLPTR));
        btnColor2->setText(QString());
        label_3->setText(QApplication::translate("QgsGradientColorRampDialogBase", "&Type", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsGradientColorRampDialogBase", "Gradient Stop", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Relative &position", Q_NULLPTR));
        mPositionSpinBox->setSuffix(QApplication::translate("QgsGradientColorRampDialogBase", " %", Q_NULLPTR));
        mDeleteStopButton->setText(QApplication::translate("QgsGradientColorRampDialogBase", "&Delete Stop", Q_NULLPTR));
        mPlotGroupBox->setTitle(QApplication::translate("QgsGradientColorRampDialogBase", "Plot", Q_NULLPTR));
        mPlotHueCheckbox->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Hue", Q_NULLPTR));
        mPlotSaturationCheckbox->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Saturation", Q_NULLPTR));
        mPlotLightnessCheckbox->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Lightness", Q_NULLPTR));
        mPlotAlphaCheckbox->setText(QApplication::translate("QgsGradientColorRampDialogBase", "Opacity", Q_NULLPTR));
        btnInformation->setText(QApplication::translate("QgsGradientColorRampDialogBase", "&Information", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGradientColorRampDialogBase: public Ui_QgsGradientColorRampDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGRADIENTCOLORRAMPDIALOGBASE_H
