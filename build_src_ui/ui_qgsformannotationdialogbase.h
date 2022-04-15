/********************************************************************************
** Form generated from reading UI file 'qgsformannotationdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFORMANNOTATIONDIALOGBASE_H
#define UI_QGSFORMANNOTATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsFormAnnotationDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mFileLineEdit;
    QToolButton *mBrowseToolButton;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFormAnnotationDialogBase)
    {
        if (QgsFormAnnotationDialogBase->objectName().isEmpty())
            QgsFormAnnotationDialogBase->setObjectName(QStringLiteral("QgsFormAnnotationDialogBase"));
        QgsFormAnnotationDialogBase->resize(298, 134);
        gridLayout = new QGridLayout(QgsFormAnnotationDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFileLineEdit = new QLineEdit(QgsFormAnnotationDialogBase);
        mFileLineEdit->setObjectName(QStringLiteral("mFileLineEdit"));

        horizontalLayout->addWidget(mFileLineEdit);

        mBrowseToolButton = new QToolButton(QgsFormAnnotationDialogBase);
        mBrowseToolButton->setObjectName(QStringLiteral("mBrowseToolButton"));

        horizontalLayout->addWidget(mBrowseToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsFormAnnotationDialogBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 1, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsFormAnnotationDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);


        retranslateUi(QgsFormAnnotationDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFormAnnotationDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFormAnnotationDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFormAnnotationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFormAnnotationDialogBase)
    {
        QgsFormAnnotationDialogBase->setWindowTitle(QApplication::translate("QgsFormAnnotationDialogBase", "Form Annotation", Q_NULLPTR));
        mBrowseToolButton->setText(QApplication::translate("QgsFormAnnotationDialogBase", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsFormAnnotationDialogBase: public Ui_QgsFormAnnotationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFORMANNOTATIONDIALOGBASE_H
