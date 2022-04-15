/********************************************************************************
** Form generated from reading UI file 'qgsdecorationscalebardialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONSCALEBARDIALOG_H
#define UI_QGSDECORATIONSCALEBARDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include "qgscolorbutton.h"
#include "qgsfontbutton.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationScaleBarDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout_2;
    QHBoxLayout *colorLayout;
    QLabel *fillLabel;
    QgsColorButton *pbnChangeColor;
    QLabel *outlineLabel;
    QgsColorButton *pbnChangeOutlineColor;
    QLabel *textLabel1;
    QLabel *textLabel1_3;
    QComboBox *cboStyle;
    QLabel *textLabel1_3_2;
    QLabel *textLabel1_3_22;
    QgsFontButton *mButtonFontStyle;
    QHBoxLayout *horizontalLayout_3;
    QgsSpinBox *spnSize;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *hlytMargin;
    QLabel *lblHorizontal;
    QgsSpinBox *spnHorizontal;
    QLabel *lblVertical;
    QgsSpinBox *spnVertical;
    QgsUnitSelectionWidget *wgtUnitSelection;
    QComboBox *cboPlacement;
    QLabel *lblMargin;
    QLabel *lblLocation;
    QCheckBox *chkSnapping;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsDecorationScaleBarDialog)
    {
        if (QgsDecorationScaleBarDialog->objectName().isEmpty())
            QgsDecorationScaleBarDialog->setObjectName(QStringLiteral("QgsDecorationScaleBarDialog"));
        QgsDecorationScaleBarDialog->resize(565, 337);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationScaleBarDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsDecorationScaleBarDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsDecorationScaleBarDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        grpEnable = new QGroupBox(QgsDecorationScaleBarDialog);
        grpEnable->setObjectName(QStringLiteral("grpEnable"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grpEnable->sizePolicy().hasHeightForWidth());
        grpEnable->setSizePolicy(sizePolicy);
        grpEnable->setMinimumSize(QSize(0, 220));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout_2 = new QGridLayout(grpEnable);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
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


        gridLayout_2->addLayout(colorLayout, 3, 1, 1, 1);

        textLabel1 = new QLabel(grpEnable);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1, 2, 0, 1, 1);

        textLabel1_3 = new QLabel(grpEnable);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));
        sizePolicy.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
        textLabel1_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1_3, 5, 0, 1, 1);

        cboStyle = new QComboBox(grpEnable);
        cboStyle->setObjectName(QStringLiteral("cboStyle"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cboStyle->sizePolicy().hasHeightForWidth());
        cboStyle->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(cboStyle, 2, 1, 1, 1);

        textLabel1_3_2 = new QLabel(grpEnable);
        textLabel1_3_2->setObjectName(QStringLiteral("textLabel1_3_2"));
        sizePolicy.setHeightForWidth(textLabel1_3_2->sizePolicy().hasHeightForWidth());
        textLabel1_3_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1_3_2, 3, 0, 1, 1);

        textLabel1_3_22 = new QLabel(grpEnable);
        textLabel1_3_22->setObjectName(QStringLiteral("textLabel1_3_22"));
        sizePolicy.setHeightForWidth(textLabel1_3_22->sizePolicy().hasHeightForWidth());
        textLabel1_3_22->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1_3_22, 4, 0, 1, 1);

        mButtonFontStyle = new QgsFontButton(grpEnable);
        mButtonFontStyle->setObjectName(QStringLiteral("mButtonFontStyle"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonFontStyle->sizePolicy().hasHeightForWidth());
        mButtonFontStyle->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mButtonFontStyle, 4, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        spnSize = new QgsSpinBox(grpEnable);
        spnSize->setObjectName(QStringLiteral("spnSize"));
        sizePolicy1.setHeightForWidth(spnSize->sizePolicy().hasHeightForWidth());
        spnSize->setSizePolicy(sizePolicy1);
        spnSize->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(spnSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        hlytMargin = new QHBoxLayout();
        hlytMargin->setSpacing(10);
        hlytMargin->setObjectName(QStringLiteral("hlytMargin"));
        hlytMargin->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblHorizontal = new QLabel(grpEnable);
        lblHorizontal->setObjectName(QStringLiteral("lblHorizontal"));
        sizePolicy1.setHeightForWidth(lblHorizontal->sizePolicy().hasHeightForWidth());
        lblHorizontal->setSizePolicy(sizePolicy1);
        lblHorizontal->setMinimumSize(QSize(70, 0));
        lblHorizontal->setMaximumSize(QSize(60, 16777215));
        lblHorizontal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hlytMargin->addWidget(lblHorizontal);

        spnHorizontal = new QgsSpinBox(grpEnable);
        spnHorizontal->setObjectName(QStringLiteral("spnHorizontal"));
        sizePolicy1.setHeightForWidth(spnHorizontal->sizePolicy().hasHeightForWidth());
        spnHorizontal->setSizePolicy(sizePolicy1);
        spnHorizontal->setMinimumSize(QSize(90, 0));
        spnHorizontal->setMaximumSize(QSize(90, 16777215));
        spnHorizontal->setMinimum(0);
        spnHorizontal->setMaximum(100);

        hlytMargin->addWidget(spnHorizontal);

        lblVertical = new QLabel(grpEnable);
        lblVertical->setObjectName(QStringLiteral("lblVertical"));
        lblVertical->setMinimumSize(QSize(0, 0));
        lblVertical->setMaximumSize(QSize(60, 16777215));

        hlytMargin->addWidget(lblVertical);

        spnVertical = new QgsSpinBox(grpEnable);
        spnVertical->setObjectName(QStringLiteral("spnVertical"));
        sizePolicy1.setHeightForWidth(spnVertical->sizePolicy().hasHeightForWidth());
        spnVertical->setSizePolicy(sizePolicy1);
        spnVertical->setMinimumSize(QSize(90, 0));
        spnVertical->setMaximumSize(QSize(90, 16777215));
        spnVertical->setMaximum(100);

        hlytMargin->addWidget(spnVertical);

        wgtUnitSelection = new QgsUnitSelectionWidget(grpEnable);
        wgtUnitSelection->setObjectName(QStringLiteral("wgtUnitSelection"));
        wgtUnitSelection->setFocusPolicy(Qt::StrongFocus);

        hlytMargin->addWidget(wgtUnitSelection);


        gridLayout_2->addLayout(hlytMargin, 8, 1, 1, 1);

        cboPlacement = new QComboBox(grpEnable);
        cboPlacement->setObjectName(QStringLiteral("cboPlacement"));
        sizePolicy1.setHeightForWidth(cboPlacement->sizePolicy().hasHeightForWidth());
        cboPlacement->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(cboPlacement, 7, 1, 1, 1);

        lblMargin = new QLabel(grpEnable);
        lblMargin->setObjectName(QStringLiteral("lblMargin"));
        lblMargin->setMinimumSize(QSize(155, 0));

        gridLayout_2->addWidget(lblMargin, 8, 0, 1, 1);

        lblLocation = new QLabel(grpEnable);
        lblLocation->setObjectName(QStringLiteral("lblLocation"));
        sizePolicy.setHeightForWidth(lblLocation->sizePolicy().hasHeightForWidth());
        lblLocation->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblLocation, 7, 0, 1, 1);

        chkSnapping = new QCheckBox(grpEnable);
        chkSnapping->setObjectName(QStringLiteral("chkSnapping"));
        sizePolicy1.setHeightForWidth(chkSnapping->sizePolicy().hasHeightForWidth());
        chkSnapping->setSizePolicy(sizePolicy1);
        chkSnapping->setChecked(true);

        gridLayout_2->addWidget(chkSnapping, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 2);


        gridLayout->addWidget(grpEnable, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(cboStyle);
        textLabel1_3->setBuddy(spnSize);
        lblLocation->setBuddy(cboPlacement);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(grpEnable, cboStyle);
        QWidget::setTabOrder(cboStyle, pbnChangeColor);
        QWidget::setTabOrder(pbnChangeColor, pbnChangeOutlineColor);
        QWidget::setTabOrder(pbnChangeOutlineColor, spnSize);
        QWidget::setTabOrder(spnSize, chkSnapping);
        QWidget::setTabOrder(chkSnapping, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spnHorizontal);
        QWidget::setTabOrder(spnHorizontal, spnVertical);
        QWidget::setTabOrder(spnVertical, wgtUnitSelection);
        QWidget::setTabOrder(wgtUnitSelection, buttonBox);

        retranslateUi(QgsDecorationScaleBarDialog);

        QMetaObject::connectSlotsByName(QgsDecorationScaleBarDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationScaleBarDialog)
    {
        QgsDecorationScaleBarDialog->setWindowTitle(QApplication::translate("QgsDecorationScaleBarDialog", "Scale Bar Decoration", Q_NULLPTR));
        grpEnable->setTitle(QApplication::translate("QgsDecorationScaleBarDialog", "Enable Scale Bar", Q_NULLPTR));
        fillLabel->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Fill", Q_NULLPTR));
        pbnChangeColor->setText(QString());
        outlineLabel->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Outline", Q_NULLPTR));
        pbnChangeOutlineColor->setText(QString());
        textLabel1->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Scale bar style", Q_NULLPTR));
        textLabel1_3->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Size of bar", Q_NULLPTR));
        cboStyle->clear();
        cboStyle->insertItems(0, QStringList()
         << QApplication::translate("QgsDecorationScaleBarDialog", "Tick Down", Q_NULLPTR)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Tick Up", Q_NULLPTR)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Box", Q_NULLPTR)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Bar", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        cboStyle->setToolTip(QApplication::translate("QgsDecorationScaleBarDialog", "Select the style of the scale bar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        textLabel1_3_2->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Color of bar", Q_NULLPTR));
        textLabel1_3_22->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Font of bar", Q_NULLPTR));
        mButtonFontStyle->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Font", Q_NULLPTR));
        lblHorizontal->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Horizontal", Q_NULLPTR));
        lblVertical->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Vertical", Q_NULLPTR));
        lblMargin->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Margin from edge", Q_NULLPTR));
        lblLocation->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Placement", Q_NULLPTR));
        chkSnapping->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Automatically snap to round number on resize", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationScaleBarDialog: public Ui_QgsDecorationScaleBarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONSCALEBARDIALOG_H
