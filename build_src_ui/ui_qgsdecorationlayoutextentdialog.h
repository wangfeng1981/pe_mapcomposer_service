/********************************************************************************
** Form generated from reading UI file 'qgsdecorationlayoutextentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONLAYOUTEXTENTDIALOG_H
#define UI_QGSDECORATIONLAYOUTEXTENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfontbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationLayoutExtentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout;
    QgsFontButton *mButtonFontStyle;
    QLabel *mLineSymbolLabel;
    QCheckBox *mCheckBoxLabelExtents;
    QgsSymbolButton *mSymbolButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationLayoutExtentDialog)
    {
        if (QgsDecorationLayoutExtentDialog->objectName().isEmpty())
            QgsDecorationLayoutExtentDialog->setObjectName(QStringLiteral("QgsDecorationLayoutExtentDialog"));
        QgsDecorationLayoutExtentDialog->resize(377, 148);
        verticalLayout = new QVBoxLayout(QgsDecorationLayoutExtentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        grpEnable = new QGroupBox(QgsDecorationLayoutExtentDialog);
        grpEnable->setObjectName(QStringLiteral("grpEnable"));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout = new QGridLayout(grpEnable);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mButtonFontStyle = new QgsFontButton(grpEnable);
        mButtonFontStyle->setObjectName(QStringLiteral("mButtonFontStyle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonFontStyle->sizePolicy().hasHeightForWidth());
        mButtonFontStyle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mButtonFontStyle, 1, 1, 1, 1);

        mLineSymbolLabel = new QLabel(grpEnable);
        mLineSymbolLabel->setObjectName(QStringLiteral("mLineSymbolLabel"));
        mLineSymbolLabel->setWordWrap(true);

        gridLayout->addWidget(mLineSymbolLabel, 0, 0, 1, 1);

        mCheckBoxLabelExtents = new QCheckBox(grpEnable);
        mCheckBoxLabelExtents->setObjectName(QStringLiteral("mCheckBoxLabelExtents"));

        gridLayout->addWidget(mCheckBoxLabelExtents, 1, 0, 1, 1);

        mSymbolButton = new QgsSymbolButton(grpEnable);
        mSymbolButton->setObjectName(QStringLiteral("mSymbolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSymbolButton->sizePolicy().hasHeightForWidth());
        mSymbolButton->setSizePolicy(sizePolicy1);
        mSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(mSymbolButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationLayoutExtentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(grpEnable, mSymbolButton);
        QWidget::setTabOrder(mSymbolButton, buttonBox);

        retranslateUi(QgsDecorationLayoutExtentDialog);

        QMetaObject::connectSlotsByName(QgsDecorationLayoutExtentDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationLayoutExtentDialog)
    {
        QgsDecorationLayoutExtentDialog->setWindowTitle(QApplication::translate("QgsDecorationLayoutExtentDialog", "Layout Extents Properties", Q_NULLPTR));
        grpEnable->setTitle(QApplication::translate("QgsDecorationLayoutExtentDialog", "Show Layout Extents", Q_NULLPTR));
        mButtonFontStyle->setText(QApplication::translate("QgsDecorationLayoutExtentDialog", "Font", Q_NULLPTR));
        mLineSymbolLabel->setText(QApplication::translate("QgsDecorationLayoutExtentDialog", "Symbol", Q_NULLPTR));
        mCheckBoxLabelExtents->setText(QApplication::translate("QgsDecorationLayoutExtentDialog", "Label extents", Q_NULLPTR));
        mSymbolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationLayoutExtentDialog: public Ui_QgsDecorationLayoutExtentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONLAYOUTEXTENTDIALOG_H
