/********************************************************************************
** Form generated from reading UI file 'qgsdecorationcopyrightdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONCOPYRIGHTDIALOG_H
#define UI_QGSDECORATIONCOPYRIGHTDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <qgsfontbutton.h>
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationCopyrightDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1_4;
    QgsSpinBox *spnHorizontal;
    QLabel *textLabel1_5;
    QgsSpinBox *spnVertical;
    QgsUnitSelectionWidget *wgtUnitSelection;
    QComboBox *cboPlacement;
    QPushButton *mInsertExpressionButton;
    QTextEdit *txtCopyrightText;
    QLabel *textLabel16;
    QLabel *lblMargin;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QgsFontButton *mButtonFontStyle;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *QgsDecorationCopyrightDialog)
    {
        if (QgsDecorationCopyrightDialog->objectName().isEmpty())
            QgsDecorationCopyrightDialog->setObjectName(QStringLiteral("QgsDecorationCopyrightDialog"));
        QgsDecorationCopyrightDialog->resize(543, 322);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationCopyrightDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsDecorationCopyrightDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsDecorationCopyrightDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        grpEnable = new QGroupBox(QgsDecorationCopyrightDialog);
        grpEnable->setObjectName(QStringLiteral("grpEnable"));
        grpEnable->setMinimumSize(QSize(0, 240));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout_2 = new QGridLayout(grpEnable);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(grpEnable);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1_4 = new QLabel(grpEnable);
        textLabel1_4->setObjectName(QStringLiteral("textLabel1_4"));

        horizontalLayout_2->addWidget(textLabel1_4);

        spnHorizontal = new QgsSpinBox(grpEnable);
        spnHorizontal->setObjectName(QStringLiteral("spnHorizontal"));
        spnHorizontal->setMinimumSize(QSize(90, 0));
        spnHorizontal->setMaximumSize(QSize(16777215, 16777215));
        spnHorizontal->setMinimum(0);
        spnHorizontal->setMaximum(100);

        horizontalLayout_2->addWidget(spnHorizontal);

        textLabel1_5 = new QLabel(grpEnable);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));

        horizontalLayout_2->addWidget(textLabel1_5);

        spnVertical = new QgsSpinBox(grpEnable);
        spnVertical->setObjectName(QStringLiteral("spnVertical"));
        spnVertical->setMinimumSize(QSize(90, 0));
        spnVertical->setMaximumSize(QSize(16777215, 16777215));
        spnVertical->setMaximum(100);

        horizontalLayout_2->addWidget(spnVertical);

        wgtUnitSelection = new QgsUnitSelectionWidget(grpEnable);
        wgtUnitSelection->setObjectName(QStringLiteral("wgtUnitSelection"));
        wgtUnitSelection->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(wgtUnitSelection);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 1, 1, 2);

        cboPlacement = new QComboBox(grpEnable);
        cboPlacement->setObjectName(QStringLiteral("cboPlacement"));

        gridLayout_2->addWidget(cboPlacement, 4, 1, 1, 2);

        mInsertExpressionButton = new QPushButton(grpEnable);
        mInsertExpressionButton->setObjectName(QStringLiteral("mInsertExpressionButton"));

        gridLayout_2->addWidget(mInsertExpressionButton, 2, 0, 1, 3);

        txtCopyrightText = new QTextEdit(grpEnable);
        txtCopyrightText->setObjectName(QStringLiteral("txtCopyrightText"));

        gridLayout_2->addWidget(txtCopyrightText, 1, 0, 1, 3);

        textLabel16 = new QLabel(grpEnable);
        textLabel16->setObjectName(QStringLiteral("textLabel16"));
        textLabel16->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(textLabel16, 4, 0, 1, 1);

        lblMargin = new QLabel(grpEnable);
        lblMargin->setObjectName(QStringLiteral("lblMargin"));
        lblMargin->setMinimumSize(QSize(155, 0));

        gridLayout_2->addWidget(lblMargin, 5, 0, 1, 1);

        label = new QLabel(grpEnable);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mButtonFontStyle = new QgsFontButton(grpEnable);
        mButtonFontStyle->setObjectName(QStringLiteral("mButtonFontStyle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonFontStyle->sizePolicy().hasHeightForWidth());
        mButtonFontStyle->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mButtonFontStyle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 2);


        gridLayout->addWidget(grpEnable, 0, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(txtCopyrightText);
        textLabel16->setBuddy(cboPlacement);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(grpEnable, txtCopyrightText);
        QWidget::setTabOrder(txtCopyrightText, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mButtonFontStyle);
        QWidget::setTabOrder(mButtonFontStyle, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spnHorizontal);
        QWidget::setTabOrder(spnHorizontal, spnVertical);
        QWidget::setTabOrder(spnVertical, wgtUnitSelection);
        QWidget::setTabOrder(wgtUnitSelection, buttonBox);

        retranslateUi(QgsDecorationCopyrightDialog);

        QMetaObject::connectSlotsByName(QgsDecorationCopyrightDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationCopyrightDialog)
    {
        QgsDecorationCopyrightDialog->setWindowTitle(QApplication::translate("QgsDecorationCopyrightDialog", "Copyright Label Decoration", Q_NULLPTR));
        grpEnable->setTitle(QApplication::translate("QgsDecorationCopyrightDialog", "Enable Copyright Label", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Copyright label text", Q_NULLPTR));
        textLabel1_4->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Horizontal", Q_NULLPTR));
        textLabel1_5->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Vertical", Q_NULLPTR));
        mInsertExpressionButton->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Insert or Edit an Expression\342\200\246", Q_NULLPTR));
        textLabel16->setText(QApplication::translate("QgsDecorationCopyrightDialog", "&Placement", Q_NULLPTR));
        lblMargin->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Margin from edge", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Font", Q_NULLPTR));
        mButtonFontStyle->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Font", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationCopyrightDialog: public Ui_QgsDecorationCopyrightDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONCOPYRIGHTDIALOG_H
