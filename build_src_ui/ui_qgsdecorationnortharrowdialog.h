/********************************************************************************
** Form generated from reading UI file 'qgsdecorationnortharrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONNORTHARROWDIALOG_H
#define UI_QGSDECORATIONNORTHARROWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationNorthArrowDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout;
    QLabel *sizeLabel;
    QgsDoubleSpinBox *spinSize;
    QLabel *svgLabel;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *mSvgPathLineEdit;
    QPushButton *mSvgSelectorBtn;
    QLabel *colorLabel;
    QHBoxLayout *colorLayout;
    QLabel *fillLabel;
    QgsColorButton *pbnChangeColor;
    QLabel *outlineLabel;
    QgsColorButton *pbnChangeOutlineColor;
    QHBoxLayout *horizontalLayout;
    QLabel *labelHorizontal;
    QgsSpinBox *spinHorizontal;
    QLabel *labelVertical;
    QgsSpinBox *spinVertical;
    QgsUnitSelectionWidget *wgtUnitSelection;
    QLabel *angleLabel;
    QLabel *placementLabel;
    QLabel *lblMargin;
    QComboBox *cboPlacement;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_36;
    QSlider *sliderRotation;
    QgsSpinBox *spinAngle;
    QCheckBox *cboxAutomatic;
    QLabel *pixmapLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationNorthArrowDialog)
    {
        if (QgsDecorationNorthArrowDialog->objectName().isEmpty())
            QgsDecorationNorthArrowDialog->setObjectName(QStringLiteral("QgsDecorationNorthArrowDialog"));
        QgsDecorationNorthArrowDialog->resize(578, 259);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationNorthArrowDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsDecorationNorthArrowDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        grpEnable = new QGroupBox(QgsDecorationNorthArrowDialog);
        grpEnable->setObjectName(QStringLiteral("grpEnable"));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout = new QGridLayout(grpEnable);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sizeLabel = new QLabel(grpEnable);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sizeLabel->sizePolicy().hasHeightForWidth());
        sizeLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sizeLabel, 1, 1, 1, 1);

        spinSize = new QgsDoubleSpinBox(grpEnable);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setMinimum(0.1);
        spinSize->setMaximum(9999);
        spinSize->setSingleStep(0.5);

        gridLayout->addWidget(spinSize, 1, 2, 1, 3);

        svgLabel = new QLabel(grpEnable);
        svgLabel->setObjectName(QStringLiteral("svgLabel"));
        sizePolicy.setHeightForWidth(svgLabel->sizePolicy().hasHeightForWidth());
        svgLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(svgLabel, 2, 1, 1, 1);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        mSvgPathLineEdit = new QLineEdit(grpEnable);
        mSvgPathLineEdit->setObjectName(QStringLiteral("mSvgPathLineEdit"));

        horizontalLayout_26->addWidget(mSvgPathLineEdit);

        mSvgSelectorBtn = new QPushButton(grpEnable);
        mSvgSelectorBtn->setObjectName(QStringLiteral("mSvgSelectorBtn"));

        horizontalLayout_26->addWidget(mSvgSelectorBtn);


        gridLayout->addLayout(horizontalLayout_26, 2, 2, 1, 3);

        colorLabel = new QLabel(grpEnable);
        colorLabel->setObjectName(QStringLiteral("colorLabel"));
        sizePolicy.setHeightForWidth(colorLabel->sizePolicy().hasHeightForWidth());
        colorLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorLabel, 0, 1, 1, 1);

        colorLayout = new QHBoxLayout();
        colorLayout->setSpacing(6);
        colorLayout->setObjectName(QStringLiteral("colorLayout"));
        fillLabel = new QLabel(grpEnable);
        fillLabel->setObjectName(QStringLiteral("fillLabel"));

        colorLayout->addWidget(fillLabel);

        pbnChangeColor = new QgsColorButton(grpEnable);
        pbnChangeColor->setObjectName(QStringLiteral("pbnChangeColor"));
        pbnChangeColor->setMinimumSize(QSize(150, 0));
        pbnChangeColor->setMaximumSize(QSize(120, 16777215));

        colorLayout->addWidget(pbnChangeColor);

        outlineLabel = new QLabel(grpEnable);
        outlineLabel->setObjectName(QStringLiteral("outlineLabel"));

        colorLayout->addWidget(outlineLabel);

        pbnChangeOutlineColor = new QgsColorButton(grpEnable);
        pbnChangeOutlineColor->setObjectName(QStringLiteral("pbnChangeOutlineColor"));
        pbnChangeOutlineColor->setMinimumSize(QSize(150, 0));
        pbnChangeOutlineColor->setMaximumSize(QSize(120, 16777215));

        colorLayout->addWidget(pbnChangeOutlineColor);


        gridLayout->addLayout(colorLayout, 0, 2, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelHorizontal = new QLabel(grpEnable);
        labelHorizontal->setObjectName(QStringLiteral("labelHorizontal"));

        horizontalLayout->addWidget(labelHorizontal);

        spinHorizontal = new QgsSpinBox(grpEnable);
        spinHorizontal->setObjectName(QStringLiteral("spinHorizontal"));
        spinHorizontal->setMinimumSize(QSize(90, 0));
        spinHorizontal->setMinimum(0);
        spinHorizontal->setMaximum(100);
        spinHorizontal->setValue(0);

        horizontalLayout->addWidget(spinHorizontal);

        labelVertical = new QLabel(grpEnable);
        labelVertical->setObjectName(QStringLiteral("labelVertical"));

        horizontalLayout->addWidget(labelVertical);

        spinVertical = new QgsSpinBox(grpEnable);
        spinVertical->setObjectName(QStringLiteral("spinVertical"));
        spinVertical->setMinimumSize(QSize(90, 0));
        spinVertical->setMinimum(0);
        spinVertical->setMaximum(100);
        spinVertical->setValue(0);

        horizontalLayout->addWidget(spinVertical);

        wgtUnitSelection = new QgsUnitSelectionWidget(grpEnable);
        wgtUnitSelection->setObjectName(QStringLiteral("wgtUnitSelection"));
        wgtUnitSelection->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(wgtUnitSelection);


        gridLayout->addLayout(horizontalLayout, 5, 2, 1, 3);

        angleLabel = new QLabel(grpEnable);
        angleLabel->setObjectName(QStringLiteral("angleLabel"));
        sizePolicy.setHeightForWidth(angleLabel->sizePolicy().hasHeightForWidth());
        angleLabel->setSizePolicy(sizePolicy);
        angleLabel->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(angleLabel, 3, 1, 1, 1);

        placementLabel = new QLabel(grpEnable);
        placementLabel->setObjectName(QStringLiteral("placementLabel"));

        gridLayout->addWidget(placementLabel, 4, 1, 1, 1);

        lblMargin = new QLabel(grpEnable);
        lblMargin->setObjectName(QStringLiteral("lblMargin"));
        lblMargin->setMinimumSize(QSize(155, 0));

        gridLayout->addWidget(lblMargin, 5, 1, 1, 1);

        cboPlacement = new QComboBox(grpEnable);
        cboPlacement->setObjectName(QStringLiteral("cboPlacement"));

        gridLayout->addWidget(cboPlacement, 4, 2, 1, 3);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        sliderRotation = new QSlider(grpEnable);
        sliderRotation->setObjectName(QStringLiteral("sliderRotation"));
        sliderRotation->setMaximum(360);
        sliderRotation->setSingleStep(1);
        sliderRotation->setPageStep(10);
        sliderRotation->setOrientation(Qt::Horizontal);

        horizontalLayout_36->addWidget(sliderRotation);

        spinAngle = new QgsSpinBox(grpEnable);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(1);
        spinAngle->setValue(0);

        horizontalLayout_36->addWidget(spinAngle);

        cboxAutomatic = new QCheckBox(grpEnable);
        cboxAutomatic->setObjectName(QStringLiteral("cboxAutomatic"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cboxAutomatic->sizePolicy().hasHeightForWidth());
        cboxAutomatic->setSizePolicy(sizePolicy1);
        cboxAutomatic->setMinimumSize(QSize(0, 30));
        cboxAutomatic->setChecked(true);

        horizontalLayout_36->addWidget(cboxAutomatic);


        gridLayout->addLayout(horizontalLayout_36, 3, 2, 1, 3);

        pixmapLabel = new QLabel(grpEnable);
        pixmapLabel->setObjectName(QStringLiteral("pixmapLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pixmapLabel->sizePolicy().hasHeightForWidth());
        pixmapLabel->setSizePolicy(sizePolicy2);
        pixmapLabel->setFrameShape(QFrame::StyledPanel);
        pixmapLabel->setScaledContents(false);
        pixmapLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixmapLabel, 0, 0, 6, 1);


        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationNorthArrowDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        angleLabel->setBuddy(sliderRotation);
        placementLabel->setBuddy(cboPlacement);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(grpEnable, pbnChangeColor);
        QWidget::setTabOrder(pbnChangeColor, pbnChangeOutlineColor);
        QWidget::setTabOrder(pbnChangeOutlineColor, spinSize);
        QWidget::setTabOrder(spinSize, mSvgPathLineEdit);
        QWidget::setTabOrder(mSvgPathLineEdit, mSvgSelectorBtn);
        QWidget::setTabOrder(mSvgSelectorBtn, sliderRotation);
        QWidget::setTabOrder(sliderRotation, spinAngle);
        QWidget::setTabOrder(spinAngle, cboxAutomatic);
        QWidget::setTabOrder(cboxAutomatic, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spinHorizontal);
        QWidget::setTabOrder(spinHorizontal, spinVertical);
        QWidget::setTabOrder(spinVertical, wgtUnitSelection);
        QWidget::setTabOrder(wgtUnitSelection, buttonBox);

        retranslateUi(QgsDecorationNorthArrowDialog);

        QMetaObject::connectSlotsByName(QgsDecorationNorthArrowDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationNorthArrowDialog)
    {
        QgsDecorationNorthArrowDialog->setWindowTitle(QApplication::translate("QgsDecorationNorthArrowDialog", "North Arrow Decoration", Q_NULLPTR));
        grpEnable->setTitle(QApplication::translate("QgsDecorationNorthArrowDialog", "Enable North Arrow", Q_NULLPTR));
        sizeLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Size", Q_NULLPTR));
        spinSize->setSuffix(QApplication::translate("QgsDecorationNorthArrowDialog", " mm", Q_NULLPTR));
        svgLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Custom SVG", Q_NULLPTR));
        mSvgSelectorBtn->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "\342\200\246", Q_NULLPTR));
        colorLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Color", Q_NULLPTR));
        fillLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Fill", Q_NULLPTR));
        pbnChangeColor->setText(QString());
        outlineLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Stroke", Q_NULLPTR));
        pbnChangeOutlineColor->setText(QString());
        labelHorizontal->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Horizontal", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        spinHorizontal->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        labelVertical->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Vertical", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        spinVertical->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        angleLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Angle", Q_NULLPTR));
        placementLabel->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Placement", Q_NULLPTR));
        lblMargin->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Margin from edge", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cboPlacement->setToolTip(QApplication::translate("QgsDecorationNorthArrowDialog", "Placement on screen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sliderRotation->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cboxAutomatic->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cboxAutomatic->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        cboxAutomatic->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Automatic", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pixmapLabel->setToolTip(QApplication::translate("QgsDecorationNorthArrowDialog", "Preview of north arrow", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationNorthArrowDialog: public Ui_QgsDecorationNorthArrowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONNORTHARROWDIALOG_H
