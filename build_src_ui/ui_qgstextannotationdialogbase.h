/********************************************************************************
** Form generated from reading UI file 'qgstextannotationdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEXTANNOTATIONDIALOGBASE_H
#define UI_QGSTEXTANNOTATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTextAnnotationDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *mFontComboBox;
    QSpacerItem *horizontalSpacer;
    QgsSpinBox *mFontSizeSpinBox;
    QPushButton *mBoldPushButton;
    QPushButton *mItalicsPushButton;
    QgsColorButton *mFontColorButton;
    QDialogButtonBox *mButtonBox;
    QTextEdit *mTextEdit;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QDialog *QgsTextAnnotationDialogBase)
    {
        if (QgsTextAnnotationDialogBase->objectName().isEmpty())
            QgsTextAnnotationDialogBase->setObjectName(QStringLiteral("QgsTextAnnotationDialogBase"));
        QgsTextAnnotationDialogBase->resize(519, 364);
        gridLayout = new QGridLayout(QgsTextAnnotationDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFontComboBox = new QFontComboBox(QgsTextAnnotationDialogBase);
        mFontComboBox->setObjectName(QStringLiteral("mFontComboBox"));

        horizontalLayout->addWidget(mFontComboBox);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mFontSizeSpinBox = new QgsSpinBox(QgsTextAnnotationDialogBase);
        mFontSizeSpinBox->setObjectName(QStringLiteral("mFontSizeSpinBox"));

        horizontalLayout->addWidget(mFontSizeSpinBox);

        mBoldPushButton = new QPushButton(QgsTextAnnotationDialogBase);
        mBoldPushButton->setObjectName(QStringLiteral("mBoldPushButton"));
        mBoldPushButton->setMinimumSize(QSize(50, 0));
        mBoldPushButton->setCheckable(true);

        horizontalLayout->addWidget(mBoldPushButton);

        mItalicsPushButton = new QPushButton(QgsTextAnnotationDialogBase);
        mItalicsPushButton->setObjectName(QStringLiteral("mItalicsPushButton"));
        mItalicsPushButton->setMinimumSize(QSize(50, 0));
        mItalicsPushButton->setCheckable(true);

        horizontalLayout->addWidget(mItalicsPushButton);

        mFontColorButton = new QgsColorButton(QgsTextAnnotationDialogBase);
        mFontColorButton->setObjectName(QStringLiteral("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(100, 0));
        mFontColorButton->setMaximumSize(QSize(100, 16777215));
        mFontColorButton->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(mFontColorButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsTextAnnotationDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 3, 0, 1, 1);

        mTextEdit = new QTextEdit(QgsTextAnnotationDialogBase);
        mTextEdit->setObjectName(QStringLiteral("mTextEdit"));

        gridLayout->addWidget(mTextEdit, 1, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsTextAnnotationDialogBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 2, 0, 1, 1);

        QWidget::setTabOrder(mFontComboBox, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mBoldPushButton);
        QWidget::setTabOrder(mBoldPushButton, mItalicsPushButton);
        QWidget::setTabOrder(mItalicsPushButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mTextEdit);
        QWidget::setTabOrder(mTextEdit, mButtonBox);

        retranslateUi(QgsTextAnnotationDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsTextAnnotationDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsTextAnnotationDialogBase, SLOT(reject()));

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTextAnnotationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTextAnnotationDialogBase)
    {
        QgsTextAnnotationDialogBase->setWindowTitle(QApplication::translate("QgsTextAnnotationDialogBase", "Annotation Text", Q_NULLPTR));
        mBoldPushButton->setText(QApplication::translate("QgsTextAnnotationDialogBase", "B", Q_NULLPTR));
        mItalicsPushButton->setText(QApplication::translate("QgsTextAnnotationDialogBase", "I", Q_NULLPTR));
        mFontColorButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsTextAnnotationDialogBase: public Ui_QgsTextAnnotationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTANNOTATIONDIALOGBASE_H
