/********************************************************************************
** Form generated from reading UI file 'qgsfindfilesbypatternwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFINDFILESBYPATTERNWIDGET_H
#define UI_QGSFINDFILESBYPATTERNWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFindFilesByPatternWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mFindButton;
    QLabel *label_2;
    QLineEdit *mPatternLineEdit;
    QLabel *label;
    QCheckBox *mRecursiveCheckBox;
    QTableWidget *mResultsTable;
    QgsFileWidget *mFolderWidget;

    void setupUi(QWidget *QgsFindFilesByPatternWidgetBase)
    {
        if (QgsFindFilesByPatternWidgetBase->objectName().isEmpty())
            QgsFindFilesByPatternWidgetBase->setObjectName(QStringLiteral("QgsFindFilesByPatternWidgetBase"));
        QgsFindFilesByPatternWidgetBase->resize(542, 286);
        QgsFindFilesByPatternWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsFindFilesByPatternWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mFindButton = new QPushButton(QgsFindFilesByPatternWidgetBase);
        mFindButton->setObjectName(QStringLiteral("mFindButton"));

        gridLayout->addWidget(mFindButton, 2, 2, 1, 1);

        label_2 = new QLabel(QgsFindFilesByPatternWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mPatternLineEdit = new QLineEdit(QgsFindFilesByPatternWidgetBase);
        mPatternLineEdit->setObjectName(QStringLiteral("mPatternLineEdit"));

        gridLayout->addWidget(mPatternLineEdit, 0, 1, 1, 2);

        label = new QLabel(QgsFindFilesByPatternWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mRecursiveCheckBox = new QCheckBox(QgsFindFilesByPatternWidgetBase);
        mRecursiveCheckBox->setObjectName(QStringLiteral("mRecursiveCheckBox"));
        mRecursiveCheckBox->setChecked(true);

        gridLayout->addWidget(mRecursiveCheckBox, 2, 0, 1, 2);

        mResultsTable = new QTableWidget(QgsFindFilesByPatternWidgetBase);
        mResultsTable->setObjectName(QStringLiteral("mResultsTable"));

        gridLayout->addWidget(mResultsTable, 5, 0, 1, 3);

        mFolderWidget = new QgsFileWidget(QgsFindFilesByPatternWidgetBase);
        mFolderWidget->setObjectName(QStringLiteral("mFolderWidget"));

        gridLayout->addWidget(mFolderWidget, 1, 1, 1, 2);

        QWidget::setTabOrder(mPatternLineEdit, mFolderWidget);
        QWidget::setTabOrder(mFolderWidget, mRecursiveCheckBox);
        QWidget::setTabOrder(mRecursiveCheckBox, mFindButton);
        QWidget::setTabOrder(mFindButton, mResultsTable);

        retranslateUi(QgsFindFilesByPatternWidgetBase);

        QMetaObject::connectSlotsByName(QgsFindFilesByPatternWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsFindFilesByPatternWidgetBase)
    {
        mFindButton->setText(QApplication::translate("QgsFindFilesByPatternWidgetBase", "Find Files", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsFindFilesByPatternWidgetBase", "File pattern", Q_NULLPTR));
        mPatternLineEdit->setPlaceholderText(QApplication::translate("QgsFindFilesByPatternWidgetBase", "Pattern to match, e.g. *.shp", Q_NULLPTR));
        label->setText(QApplication::translate("QgsFindFilesByPatternWidgetBase", "Look in", Q_NULLPTR));
        mRecursiveCheckBox->setText(QApplication::translate("QgsFindFilesByPatternWidgetBase", "Search recursively", Q_NULLPTR));
        Q_UNUSED(QgsFindFilesByPatternWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsFindFilesByPatternWidgetBase: public Ui_QgsFindFilesByPatternWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFINDFILESBYPATTERNWIDGET_H
