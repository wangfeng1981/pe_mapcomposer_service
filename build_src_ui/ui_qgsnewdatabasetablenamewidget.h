/********************************************************************************
** Form generated from reading UI file 'qgsnewdatabasetablenamewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWDATABASETABLENAMEWIDGET_H
#define UI_QGSNEWDATABASETABLENAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include "qgsbrowsertreeview.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewDatabaseTableNameWidget
{
public:
    QAction *mActionRefresh;
    QGridLayout *gridLayout;
    QLineEdit *mNewTableName;
    QPushButton *mOkButton;
    QVBoxLayout *verticalLayout_2;
    QToolBar *mBrowserToolbar;
    QgsBrowserTreeView *mBrowserTreeView;
    QLabel *label;
    QLabel *mValidationResults;

    void setupUi(QgsPanelWidget *QgsNewDatabaseTableNameWidget)
    {
        if (QgsNewDatabaseTableNameWidget->objectName().isEmpty())
            QgsNewDatabaseTableNameWidget->setObjectName(QStringLiteral("QgsNewDatabaseTableNameWidget"));
        QgsNewDatabaseTableNameWidget->resize(700, 629);
        mActionRefresh = new QAction(QgsNewDatabaseTableNameWidget);
        mActionRefresh->setObjectName(QStringLiteral("mActionRefresh"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefresh->setIcon(icon);
        gridLayout = new QGridLayout(QgsNewDatabaseTableNameWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 4);
        mNewTableName = new QLineEdit(QgsNewDatabaseTableNameWidget);
        mNewTableName->setObjectName(QStringLiteral("mNewTableName"));

        gridLayout->addWidget(mNewTableName, 2, 0, 1, 1);

        mOkButton = new QPushButton(QgsNewDatabaseTableNameWidget);
        mOkButton->setObjectName(QStringLiteral("mOkButton"));

        gridLayout->addWidget(mOkButton, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        mBrowserToolbar = new QToolBar(QgsNewDatabaseTableNameWidget);
        mBrowserToolbar->setObjectName(QStringLiteral("mBrowserToolbar"));
        mBrowserToolbar->setIconSize(QSize(24, 24));
        mBrowserToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mBrowserToolbar);

        mBrowserTreeView = new QgsBrowserTreeView(QgsNewDatabaseTableNameWidget);
        mBrowserTreeView->setObjectName(QStringLiteral("mBrowserTreeView"));

        verticalLayout_2->addWidget(mBrowserTreeView);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 2);

        label = new QLabel(QgsNewDatabaseTableNameWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        mValidationResults = new QLabel(QgsNewDatabaseTableNameWidget);
        mValidationResults->setObjectName(QStringLiteral("mValidationResults"));
        mValidationResults->setEnabled(true);

        gridLayout->addWidget(mValidationResults, 3, 0, 1, 2);


        mBrowserToolbar->addAction(mActionRefresh);

        retranslateUi(QgsNewDatabaseTableNameWidget);

        QMetaObject::connectSlotsByName(QgsNewDatabaseTableNameWidget);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsNewDatabaseTableNameWidget)
    {
        mActionRefresh->setText(QApplication::translate("QgsNewDatabaseTableNameWidget", "Refresh", Q_NULLPTR));
        mNewTableName->setText(QString());
        mNewTableName->setPlaceholderText(QApplication::translate("QgsNewDatabaseTableNameWidget", "name of the new table", Q_NULLPTR));
        mOkButton->setText(QApplication::translate("QgsNewDatabaseTableNameWidget", "Ok", Q_NULLPTR));
        label->setText(QApplication::translate("QgsNewDatabaseTableNameWidget", "New table name", Q_NULLPTR));
        mValidationResults->setText(QApplication::translate("QgsNewDatabaseTableNameWidget", "Validation results", Q_NULLPTR));
        Q_UNUSED(QgsNewDatabaseTableNameWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsNewDatabaseTableNameWidget: public Ui_QgsNewDatabaseTableNameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWDATABASETABLENAMEWIDGET_H
