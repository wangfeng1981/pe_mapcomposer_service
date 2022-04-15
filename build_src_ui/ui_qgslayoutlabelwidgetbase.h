/********************************************************************************
** Form generated from reading UI file 'qgslayoutlabelwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLABELWIDGETBASE_H
#define UI_QGSLAYOUTLABELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLabelWidgetBase
{
public:
    QVBoxLayout *_2;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mTextGroupBox;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *mTextEdit;
    QCheckBox *mHtmlCheckBox;
    QPushButton *mInsertExpressionButton;
    QgsCollapsibleGroupBoxBasic *mAppearanceGroup;
    QGridLayout *gridLayout;
    QLabel *mHorizontalAlignementLabel;
    QgsDoubleSpinBox *mMarginYDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mTopRadioButton;
    QRadioButton *mMiddleRadioButton;
    QRadioButton *mBottomRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mMarginYLabel;
    QLabel *mMarginXLabel;
    QgsDoubleSpinBox *mMarginXDoubleSpinBox;
    QLabel *label_2;
    QLabel *mVerticalAlignementLabel;
    QgsFontButton *mFontButton;
    QHBoxLayout *horizontalLayout;
    QgsColorButton *mFontColorButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QRadioButton *mLeftRadioButton;
    QRadioButton *mJustifyRadioButton;
    QRadioButton *mRightRadioButton;
    QRadioButton *mCenterRadioButton;
    QSpacerItem *horizontalSpacer;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *QgsLayoutLabelWidgetBase)
    {
        if (QgsLayoutLabelWidgetBase->objectName().isEmpty())
            QgsLayoutLabelWidgetBase->setObjectName(QStringLiteral("QgsLayoutLabelWidgetBase"));
        QgsLayoutLabelWidgetBase->resize(304, 705);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutLabelWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutLabelWidgetBase->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(QgsLayoutLabelWidgetBase);
        _2->setSpacing(0);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutLabelWidgetBase);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        _2->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutLabelWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 446, 665));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mTextGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mTextGroupBox->setObjectName(QStringLiteral("mTextGroupBox"));
        mTextGroupBox->setFocusPolicy(Qt::StrongFocus);
        mTextGroupBox->setCheckable(false);
        mTextGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mTextGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mTextGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mTextEdit = new QPlainTextEdit(mTextGroupBox);
        mTextEdit->setObjectName(QStringLiteral("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 150));

        gridLayout_2->addWidget(mTextEdit, 0, 0, 1, 1);

        mHtmlCheckBox = new QCheckBox(mTextGroupBox);
        mHtmlCheckBox->setObjectName(QStringLiteral("mHtmlCheckBox"));

        gridLayout_2->addWidget(mHtmlCheckBox, 1, 0, 1, 1);

        mInsertExpressionButton = new QPushButton(mTextGroupBox);
        mInsertExpressionButton->setObjectName(QStringLiteral("mInsertExpressionButton"));

        gridLayout_2->addWidget(mInsertExpressionButton, 2, 0, 1, 1);


        mainLayout->addWidget(mTextGroupBox);

        mAppearanceGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mAppearanceGroup->setObjectName(QStringLiteral("mAppearanceGroup"));
        mAppearanceGroup->setFocusPolicy(Qt::StrongFocus);
        mAppearanceGroup->setCheckable(false);
        mAppearanceGroup->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mAppearanceGroup->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mAppearanceGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mHorizontalAlignementLabel = new QLabel(mAppearanceGroup);
        mHorizontalAlignementLabel->setObjectName(QStringLiteral("mHorizontalAlignementLabel"));

        gridLayout->addWidget(mHorizontalAlignementLabel, 4, 0, 1, 2);

        mMarginYDoubleSpinBox = new QgsDoubleSpinBox(mAppearanceGroup);
        mMarginYDoubleSpinBox->setObjectName(QStringLiteral("mMarginYDoubleSpinBox"));
        mMarginYDoubleSpinBox->setMinimum(-99.99);

        gridLayout->addWidget(mMarginYDoubleSpinBox, 3, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mTopRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup = new QButtonGroup(QgsLayoutLabelWidgetBase);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(mTopRadioButton);
        mTopRadioButton->setObjectName(QStringLiteral("mTopRadioButton"));

        horizontalLayout_6->addWidget(mTopRadioButton);

        mMiddleRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup->addButton(mMiddleRadioButton);
        mMiddleRadioButton->setObjectName(QStringLiteral("mMiddleRadioButton"));

        horizontalLayout_6->addWidget(mMiddleRadioButton);

        mBottomRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup->addButton(mBottomRadioButton);
        mBottomRadioButton->setObjectName(QStringLiteral("mBottomRadioButton"));

        horizontalLayout_6->addWidget(mBottomRadioButton);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_6, 8, 0, 1, 2);

        mMarginYLabel = new QLabel(mAppearanceGroup);
        mMarginYLabel->setObjectName(QStringLiteral("mMarginYLabel"));

        gridLayout->addWidget(mMarginYLabel, 3, 0, 1, 1);

        mMarginXLabel = new QLabel(mAppearanceGroup);
        mMarginXLabel->setObjectName(QStringLiteral("mMarginXLabel"));

        gridLayout->addWidget(mMarginXLabel, 2, 0, 1, 1);

        mMarginXDoubleSpinBox = new QgsDoubleSpinBox(mAppearanceGroup);
        mMarginXDoubleSpinBox->setObjectName(QStringLiteral("mMarginXDoubleSpinBox"));
        mMarginXDoubleSpinBox->setMinimum(-99.99);

        gridLayout->addWidget(mMarginXDoubleSpinBox, 2, 1, 1, 1);

        label_2 = new QLabel(mAppearanceGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mVerticalAlignementLabel = new QLabel(mAppearanceGroup);
        mVerticalAlignementLabel->setObjectName(QStringLiteral("mVerticalAlignementLabel"));

        gridLayout->addWidget(mVerticalAlignementLabel, 7, 0, 1, 2);

        mFontButton = new QgsFontButton(mAppearanceGroup);
        mFontButton->setObjectName(QStringLiteral("mFontButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mFontButton, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFontColorButton = new QgsColorButton(mAppearanceGroup);
        mFontColorButton->setObjectName(QStringLiteral("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(mFontColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mLeftRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2 = new QButtonGroup(QgsLayoutLabelWidgetBase);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(mLeftRadioButton);
        mLeftRadioButton->setObjectName(QStringLiteral("mLeftRadioButton"));

        gridLayout_3->addWidget(mLeftRadioButton, 0, 0, 1, 1);

        mJustifyRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2->addButton(mJustifyRadioButton);
        mJustifyRadioButton->setObjectName(QStringLiteral("mJustifyRadioButton"));

        gridLayout_3->addWidget(mJustifyRadioButton, 0, 3, 1, 1);

        mRightRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2->addButton(mRightRadioButton);
        mRightRadioButton->setObjectName(QStringLiteral("mRightRadioButton"));

        gridLayout_3->addWidget(mRightRadioButton, 0, 2, 1, 1);

        mCenterRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2->addButton(mCenterRadioButton);
        mCenterRadioButton->setObjectName(QStringLiteral("mCenterRadioButton"));

        gridLayout_3->addWidget(mCenterRadioButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout->addLayout(gridLayout_3, 5, 0, 1, 2);


        mainLayout->addWidget(mAppearanceGroup);

        scrollArea->setWidget(scrollAreaWidgetContents);

        _2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mTextGroupBox);
        QWidget::setTabOrder(mTextGroupBox, mTextEdit);
        QWidget::setTabOrder(mTextEdit, mHtmlCheckBox);
        QWidget::setTabOrder(mHtmlCheckBox, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mAppearanceGroup);
        QWidget::setTabOrder(mAppearanceGroup, mFontButton);
        QWidget::setTabOrder(mFontButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mMarginXDoubleSpinBox);
        QWidget::setTabOrder(mMarginXDoubleSpinBox, mMarginYDoubleSpinBox);
        QWidget::setTabOrder(mMarginYDoubleSpinBox, mLeftRadioButton);
        QWidget::setTabOrder(mLeftRadioButton, mCenterRadioButton);
        QWidget::setTabOrder(mCenterRadioButton, mRightRadioButton);
        QWidget::setTabOrder(mRightRadioButton, mTopRadioButton);
        QWidget::setTabOrder(mTopRadioButton, mMiddleRadioButton);
        QWidget::setTabOrder(mMiddleRadioButton, mBottomRadioButton);

        retranslateUi(QgsLayoutLabelWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutLabelWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutLabelWidgetBase)
    {
        QgsLayoutLabelWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutLabelWidgetBase", "Label Options", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Label", Q_NULLPTR));
        mTextGroupBox->setTitle(QApplication::translate("QgsLayoutLabelWidgetBase", "Main Properties", Q_NULLPTR));
        mHtmlCheckBox->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Render as HTML", Q_NULLPTR));
        mInsertExpressionButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Insert or Edit an Expression\342\200\246", Q_NULLPTR));
        mAppearanceGroup->setTitle(QApplication::translate("QgsLayoutLabelWidgetBase", "Appearance", Q_NULLPTR));
        mHorizontalAlignementLabel->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Horizontal alignment", Q_NULLPTR));
        mMarginYDoubleSpinBox->setSuffix(QApplication::translate("QgsLayoutLabelWidgetBase", " mm", Q_NULLPTR));
        mTopRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Top", Q_NULLPTR));
        mMiddleRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Middle", Q_NULLPTR));
        mBottomRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Bottom", Q_NULLPTR));
        mMarginYLabel->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Vertical margin", Q_NULLPTR));
        mMarginXLabel->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Horizontal margin", Q_NULLPTR));
        mMarginXDoubleSpinBox->setPrefix(QString());
        mMarginXDoubleSpinBox->setSuffix(QApplication::translate("QgsLayoutLabelWidgetBase", " mm", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Font color", Q_NULLPTR));
        mVerticalAlignementLabel->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Vertical alignment", Q_NULLPTR));
        mFontButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Font", Q_NULLPTR));
        mFontColorButton->setText(QString());
        mLeftRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Left", Q_NULLPTR));
        mJustifyRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Justify", Q_NULLPTR));
        mRightRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Right", Q_NULLPTR));
        mCenterRadioButton->setText(QApplication::translate("QgsLayoutLabelWidgetBase", "Center", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLabelWidgetBase: public Ui_QgsLayoutLabelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLABELWIDGETBASE_H
