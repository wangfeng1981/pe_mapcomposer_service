/********************************************************************************
** Form generated from reading UI file 'qgstableeditorformattingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABLEEDITORFORMATTINGWIDGETBASE_H
#define UI_QGSTABLEEDITORFORMATTINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsalignmentcombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTableEditorFormattingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *mCustomizeFormatButton;
    QgsAlignmentComboBox *mVerticalAlignComboBox;
    QCheckBox *mFormatNumbersCheckBox;
    QgsFontButton *mFontButton;
    QgsAlignmentComboBox *mHorizontalAlignComboBox;
    QLabel *label_11;
    QgsColorButton *mBackgroundColorButton;
    QgsFieldExpressionWidget *mExpressionEdit;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QgsDoubleSpinBox *mRowHeightSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mColumnWidthSpinBox;
    QLabel *label_2;
    QLabel *label_51;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsTableEditorFormattingWidgetBase)
    {
        if (QgsTableEditorFormattingWidgetBase->objectName().isEmpty())
            QgsTableEditorFormattingWidgetBase->setObjectName(QStringLiteral("QgsTableEditorFormattingWidgetBase"));
        QgsTableEditorFormattingWidgetBase->resize(410, 464);
        verticalLayout = new QVBoxLayout(QgsTableEditorFormattingWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsTableEditorFormattingWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 410, 464));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setFocusPolicy(Qt::StrongFocus);
        groupBox_7->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_7->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_7->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_7->addWidget(label_4, 3, 0, 1, 1);

        mCustomizeFormatButton = new QPushButton(groupBox_7);
        mCustomizeFormatButton->setObjectName(QStringLiteral("mCustomizeFormatButton"));

        gridLayout_7->addWidget(mCustomizeFormatButton, 1, 1, 1, 1);

        mVerticalAlignComboBox = new QgsAlignmentComboBox(groupBox_7);
        mVerticalAlignComboBox->setObjectName(QStringLiteral("mVerticalAlignComboBox"));

        gridLayout_7->addWidget(mVerticalAlignComboBox, 3, 1, 1, 1);

        mFormatNumbersCheckBox = new QCheckBox(groupBox_7);
        mFormatNumbersCheckBox->setObjectName(QStringLiteral("mFormatNumbersCheckBox"));

        gridLayout_7->addWidget(mFormatNumbersCheckBox, 1, 0, 1, 1);

        mFontButton = new QgsFontButton(groupBox_7);
        mFontButton->setObjectName(QStringLiteral("mFontButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mFontButton, 0, 1, 1, 1);

        mHorizontalAlignComboBox = new QgsAlignmentComboBox(groupBox_7);
        mHorizontalAlignComboBox->setObjectName(QStringLiteral("mHorizontalAlignComboBox"));

        gridLayout_7->addWidget(mHorizontalAlignComboBox, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_7->addWidget(label_11, 4, 0, 1, 1);

        mBackgroundColorButton = new QgsColorButton(groupBox_7);
        mBackgroundColorButton->setObjectName(QStringLiteral("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(mBackgroundColorButton, 4, 1, 1, 1);


        gridLayout->addWidget(groupBox_7, 2, 0, 1, 2);

        mExpressionEdit = new QgsFieldExpressionWidget(scrollAreaWidgetContents);
        mExpressionEdit->setObjectName(QStringLiteral("mExpressionEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mExpressionEdit->sizePolicy().hasHeightForWidth());
        mExpressionEdit->setSizePolicy(sizePolicy1);
        mExpressionEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExpressionEdit, 0, 1, 1, 1);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setFocusPolicy(Qt::StrongFocus);
        groupBox_8->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_8->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        mRowHeightSpinBox = new QgsDoubleSpinBox(groupBox_8);
        mRowHeightSpinBox->setObjectName(QStringLiteral("mRowHeightSpinBox"));
        mRowHeightSpinBox->setMaximum(999999);

        gridLayout_8->addWidget(mRowHeightSpinBox, 0, 1, 1, 1);

        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_8->addWidget(label, 0, 0, 1, 1);

        mColumnWidthSpinBox = new QgsDoubleSpinBox(groupBox_8);
        mColumnWidthSpinBox->setObjectName(QStringLiteral("mColumnWidthSpinBox"));
        mColumnWidthSpinBox->setMaximum(999999);

        gridLayout_8->addWidget(mColumnWidthSpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_8->addWidget(label_2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_8, 3, 0, 1, 2);

        label_51 = new QLabel(scrollAreaWidgetContents);
        label_51->setObjectName(QStringLiteral("label_51"));

        gridLayout->addWidget(label_51, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mExpressionEdit);
        QWidget::setTabOrder(mExpressionEdit, groupBox_7);
        QWidget::setTabOrder(groupBox_7, mFontButton);
        QWidget::setTabOrder(mFontButton, mFormatNumbersCheckBox);
        QWidget::setTabOrder(mFormatNumbersCheckBox, mCustomizeFormatButton);
        QWidget::setTabOrder(mCustomizeFormatButton, mHorizontalAlignComboBox);
        QWidget::setTabOrder(mHorizontalAlignComboBox, mVerticalAlignComboBox);
        QWidget::setTabOrder(mVerticalAlignComboBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, groupBox_8);
        QWidget::setTabOrder(groupBox_8, mRowHeightSpinBox);
        QWidget::setTabOrder(mRowHeightSpinBox, mColumnWidthSpinBox);

        retranslateUi(QgsTableEditorFormattingWidgetBase);

        QMetaObject::connectSlotsByName(QgsTableEditorFormattingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTableEditorFormattingWidgetBase)
    {
        QgsTableEditorFormattingWidgetBase->setWindowTitle(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Attribute Table", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Formatting", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Text format", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Horizontal alignment", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Vertical alignment", Q_NULLPTR));
        mCustomizeFormatButton->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Customize\342\200\246", Q_NULLPTR));
        mFormatNumbersCheckBox->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Format as number", Q_NULLPTR));
        mFontButton->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Font", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Background color", Q_NULLPTR));
        mBackgroundColorButton->setText(QString());
        groupBox_8->setTitle(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Cell Size", Q_NULLPTR));
        mRowHeightSpinBox->setSuffix(QApplication::translate("QgsTableEditorFormattingWidgetBase", " mm", Q_NULLPTR));
        label->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Row height", Q_NULLPTR));
        mColumnWidthSpinBox->setSuffix(QApplication::translate("QgsTableEditorFormattingWidgetBase", " mm", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Column width", Q_NULLPTR));
        label_51->setText(QApplication::translate("QgsTableEditorFormattingWidgetBase", "Expression", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsTableEditorFormattingWidgetBase: public Ui_QgsTableEditorFormattingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABLEEDITORFORMATTINGWIDGETBASE_H
