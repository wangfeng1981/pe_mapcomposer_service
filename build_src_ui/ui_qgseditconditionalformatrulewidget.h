/********************************************************************************
** Form generated from reading UI file 'qgseditconditionalformatrulewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEDITCONDITIONALFORMATRULEWIDGET_H
#define UI_QGSEDITCONDITIONALFORMATRULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsEditConditionalRuleWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *mPresetsList;
    QLabel *label_3;
    QLineEdit *mNameEdit;
    QFrame *horizontalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QgsColorButton *btnBackgroundColor;
    QLabel *label_6;
    QgsColorButton *btnTextColor;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkIcon;
    QgsSymbolButton *btnChangeIcon;
    QHBoxLayout *horizontalLayout_13;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QFontComboBox *mFontFamilyCmbBx;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mSaveRule;
    QPushButton *mCancelButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *mDeleteButton;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mRuleEdit;
    QToolButton *btnBuildExpression;
    QButtonGroup *mFontButtons;

    void setupUi(QWidget *QgsEditConditionalRuleWidget)
    {
        if (QgsEditConditionalRuleWidget->objectName().isEmpty())
            QgsEditConditionalRuleWidget->setObjectName(QStringLiteral("QgsEditConditionalRuleWidget"));
        QgsEditConditionalRuleWidget->resize(328, 331);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsEditConditionalRuleWidget->sizePolicy().hasHeightForWidth());
        QgsEditConditionalRuleWidget->setSizePolicy(sizePolicy);
        QgsEditConditionalRuleWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsEditConditionalRuleWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mPresetsList = new QComboBox(QgsEditConditionalRuleWidget);
        mPresetsList->setObjectName(QStringLiteral("mPresetsList"));

        gridLayout->addWidget(mPresetsList, 5, 0, 1, 2);

        label_3 = new QLabel(QgsEditConditionalRuleWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        mNameEdit = new QLineEdit(QgsEditConditionalRuleWidget);
        mNameEdit->setObjectName(QStringLiteral("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 1, 0, 1, 2);

        horizontalFrame_2 = new QFrame(QgsEditConditionalRuleWidget);
        horizontalFrame_2->setObjectName(QStringLiteral("horizontalFrame_2"));
        verticalLayout_2 = new QVBoxLayout(horizontalFrame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(horizontalFrame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_5);

        btnBackgroundColor = new QgsColorButton(horizontalFrame_2);
        btnBackgroundColor->setObjectName(QStringLiteral("btnBackgroundColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnBackgroundColor->sizePolicy().hasHeightForWidth());
        btnBackgroundColor->setSizePolicy(sizePolicy2);
        btnBackgroundColor->setMinimumSize(QSize(10, 0));
        btnBackgroundColor->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(btnBackgroundColor);

        label_6 = new QLabel(horizontalFrame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_6);

        btnTextColor = new QgsColorButton(horizontalFrame_2);
        btnTextColor->setObjectName(QStringLiteral("btnTextColor"));
        sizePolicy2.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy2);
        btnTextColor->setMinimumSize(QSize(10, 0));
        btnTextColor->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(btnTextColor);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkIcon = new QCheckBox(horizontalFrame_2);
        checkIcon->setObjectName(QStringLiteral("checkIcon"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkIcon->sizePolicy().hasHeightForWidth());
        checkIcon->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(checkIcon);

        btnChangeIcon = new QgsSymbolButton(horizontalFrame_2);
        btnChangeIcon->setObjectName(QStringLiteral("btnChangeIcon"));
        btnChangeIcon->setEnabled(false);
        sizePolicy2.setHeightForWidth(btnChangeIcon->sizePolicy().hasHeightForWidth());
        btnChangeIcon->setSizePolicy(sizePolicy2);
        btnChangeIcon->setMinimumSize(QSize(10, 0));
        btnChangeIcon->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(btnChangeIcon);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mFontBoldBtn = new QToolButton(horizontalFrame_2);
        mFontBoldBtn->setObjectName(QStringLiteral("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(true);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        mFontBoldBtn->setFont(font);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(horizontalFrame_2);
        mFontItalicBtn->setObjectName(QStringLiteral("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(true);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        mFontItalicBtn->setFont(font1);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontItalicBtn);

        mFontUnderlineBtn = new QToolButton(horizontalFrame_2);
        mFontUnderlineBtn->setObjectName(QStringLiteral("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        font2.setUnderline(true);
        mFontUnderlineBtn->setFont(font2);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(horizontalFrame_2);
        mFontStrikethroughBtn->setObjectName(QStringLiteral("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font3);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontStrikethroughBtn);

        mFontFamilyCmbBx = new QFontComboBox(horizontalFrame_2);
        mFontFamilyCmbBx->setObjectName(QStringLiteral("mFontFamilyCmbBx"));

        horizontalLayout_13->addWidget(mFontFamilyCmbBx);


        verticalLayout_2->addLayout(horizontalLayout_13);


        gridLayout->addWidget(horizontalFrame_2, 6, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mSaveRule = new QPushButton(QgsEditConditionalRuleWidget);
        mSaveRule->setObjectName(QStringLiteral("mSaveRule"));

        horizontalLayout_2->addWidget(mSaveRule);

        mCancelButton = new QPushButton(QgsEditConditionalRuleWidget);
        mCancelButton->setObjectName(QStringLiteral("mCancelButton"));

        horizontalLayout_2->addWidget(mCancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mDeleteButton = new QToolButton(QgsEditConditionalRuleWidget);
        mDeleteButton->setObjectName(QStringLiteral("mDeleteButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon);
        mDeleteButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(mDeleteButton);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 2);

        label = new QLabel(QgsEditConditionalRuleWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        label_2 = new QLabel(QgsEditConditionalRuleWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mRuleEdit = new QLineEdit(QgsEditConditionalRuleWidget);
        mRuleEdit->setObjectName(QStringLiteral("mRuleEdit"));

        horizontalLayout_5->addWidget(mRuleEdit);

        btnBuildExpression = new QToolButton(QgsEditConditionalRuleWidget);
        btnBuildExpression->setObjectName(QStringLiteral("btnBuildExpression"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnBuildExpression->setIcon(icon1);

        horizontalLayout_5->addWidget(btnBuildExpression);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);


        retranslateUi(QgsEditConditionalRuleWidget);

        QMetaObject::connectSlotsByName(QgsEditConditionalRuleWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsEditConditionalRuleWidget)
    {
        label_3->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Preset", Q_NULLPTR));
        mNameEdit->setText(QString());
        label_5->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Background", Q_NULLPTR));
        btnBackgroundColor->setText(QString());
        label_6->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Text", Q_NULLPTR));
        btnTextColor->setText(QString());
        checkIcon->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Icon", Q_NULLPTR));
        btnChangeIcon->setText(QString());
#ifndef QT_NO_TOOLTIP
        mFontBoldBtn->setToolTip(QApplication::translate("QgsEditConditionalRuleWidget", "Bold text\n"
"(data defined only, overrides Style)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontBoldBtn->setText(QApplication::translate("QgsEditConditionalRuleWidget", "B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontItalicBtn->setToolTip(QApplication::translate("QgsEditConditionalRuleWidget", "Italic text\n"
"(data defined only, overrides Style)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontItalicBtn->setText(QApplication::translate("QgsEditConditionalRuleWidget", "I", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontUnderlineBtn->setToolTip(QApplication::translate("QgsEditConditionalRuleWidget", "Underlined text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontUnderlineBtn->setText(QApplication::translate("QgsEditConditionalRuleWidget", "U", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontStrikethroughBtn->setToolTip(QApplication::translate("QgsEditConditionalRuleWidget", "Strikeout text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontStrikethroughBtn->setText(QApplication::translate("QgsEditConditionalRuleWidget", "S", Q_NULLPTR));
        mSaveRule->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Done", Q_NULLPTR));
        mCancelButton->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Cancel", Q_NULLPTR));
        mDeleteButton->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Delete", Q_NULLPTR));
        label->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Condition", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsEditConditionalRuleWidget", "Name", Q_NULLPTR));
        mRuleEdit->setText(QApplication::translate("QgsEditConditionalRuleWidget", "@value", Q_NULLPTR));
        btnBuildExpression->setText(QApplication::translate("QgsEditConditionalRuleWidget", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsEditConditionalRuleWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsEditConditionalRuleWidget: public Ui_QgsEditConditionalRuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEDITCONDITIONALFORMATRULEWIDGET_H
