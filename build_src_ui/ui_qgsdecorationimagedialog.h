/********************************************************************************
** Form generated from reading UI file 'qgsdecorationimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONIMAGEDIALOG_H
#define UI_QGSDECORATIONIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationImageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout;
    QLabel *sizeLabel;
    QgsDoubleSpinBox *spinSize;
    QLabel *svgLabel;
    QgsFileWidget *wgtImagePath;
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
    QLabel *placementLabel;
    QLabel *lblMargin;
    QComboBox *cboPlacement;
    QSpacerItem *verticalSpacer;
    QLabel *pixmapLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationImageDialog)
    {
        if (QgsDecorationImageDialog->objectName().isEmpty())
            QgsDecorationImageDialog->setObjectName(QStringLiteral("QgsDecorationImageDialog"));
        QgsDecorationImageDialog->resize(578, 259);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationImageDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsDecorationImageDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        grpEnable = new QGroupBox(QgsDecorationImageDialog);
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

        gridLayout->addWidget(sizeLabel, 2, 1, 1, 1);

        spinSize = new QgsDoubleSpinBox(grpEnable);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setMinimum(0.1);
        spinSize->setMaximum(9999);
        spinSize->setSingleStep(0.5);

        gridLayout->addWidget(spinSize, 2, 2, 1, 3);

        svgLabel = new QLabel(grpEnable);
        svgLabel->setObjectName(QStringLiteral("svgLabel"));
        sizePolicy.setHeightForWidth(svgLabel->sizePolicy().hasHeightForWidth());
        svgLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(svgLabel, 0, 1, 1, 1);

        wgtImagePath = new QgsFileWidget(grpEnable);
        wgtImagePath->setObjectName(QStringLiteral("wgtImagePath"));

        gridLayout->addWidget(wgtImagePath, 0, 2, 1, 3);

        colorLabel = new QLabel(grpEnable);
        colorLabel->setObjectName(QStringLiteral("colorLabel"));
        sizePolicy.setHeightForWidth(colorLabel->sizePolicy().hasHeightForWidth());
        colorLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorLabel, 1, 1, 1, 1);

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


        gridLayout->addLayout(colorLayout, 1, 2, 1, 3);

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

        pixmapLabel = new QLabel(grpEnable);
        pixmapLabel->setObjectName(QStringLiteral("pixmapLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pixmapLabel->sizePolicy().hasHeightForWidth());
        pixmapLabel->setSizePolicy(sizePolicy1);
        pixmapLabel->setFrameShape(QFrame::StyledPanel);
        pixmapLabel->setScaledContents(false);
        pixmapLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixmapLabel, 0, 0, 6, 1);


        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationImageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        placementLabel->setBuddy(cboPlacement);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(grpEnable, pbnChangeColor);
        QWidget::setTabOrder(pbnChangeColor, pbnChangeOutlineColor);
        QWidget::setTabOrder(pbnChangeOutlineColor, spinSize);
        QWidget::setTabOrder(spinSize, wgtImagePath);
        QWidget::setTabOrder(wgtImagePath, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spinHorizontal);
        QWidget::setTabOrder(spinHorizontal, spinVertical);
        QWidget::setTabOrder(spinVertical, wgtUnitSelection);
        QWidget::setTabOrder(wgtUnitSelection, buttonBox);

        retranslateUi(QgsDecorationImageDialog);

        QMetaObject::connectSlotsByName(QgsDecorationImageDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationImageDialog)
    {
        QgsDecorationImageDialog->setWindowTitle(QApplication::translate("QgsDecorationImageDialog", "Image Decoration", Q_NULLPTR));
        grpEnable->setTitle(QApplication::translate("QgsDecorationImageDialog", "Enable Image", Q_NULLPTR));
        sizeLabel->setText(QApplication::translate("QgsDecorationImageDialog", "Size", Q_NULLPTR));
        spinSize->setSuffix(QApplication::translate("QgsDecorationImageDialog", " mm", Q_NULLPTR));
        svgLabel->setText(QApplication::translate("QgsDecorationImageDialog", "Image path", Q_NULLPTR));
        colorLabel->setText(QApplication::translate("QgsDecorationImageDialog", "Color", Q_NULLPTR));
        fillLabel->setText(QApplication::translate("QgsDecorationImageDialog", "Fill", Q_NULLPTR));
        pbnChangeColor->setText(QString());
        outlineLabel->setText(QApplication::translate("QgsDecorationImageDialog", "Stroke", Q_NULLPTR));
        pbnChangeOutlineColor->setText(QString());
        labelHorizontal->setText(QApplication::translate("QgsDecorationImageDialog", "Horizontal", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        spinHorizontal->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        labelVertical->setText(QApplication::translate("QgsDecorationImageDialog", "Vertical", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        spinVertical->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        placementLabel->setText(QApplication::translate("QgsDecorationImageDialog", "Placement", Q_NULLPTR));
        lblMargin->setText(QApplication::translate("QgsDecorationImageDialog", "Margin from edge", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cboPlacement->setToolTip(QApplication::translate("QgsDecorationImageDialog", "Placement on screen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pixmapLabel->setToolTip(QApplication::translate("QgsDecorationImageDialog", "Preview of image", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationImageDialog: public Ui_QgsDecorationImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONIMAGEDIALOG_H
