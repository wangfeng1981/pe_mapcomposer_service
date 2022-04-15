/********************************************************************************
** Form generated from reading UI file 'qgsvaliditycheckresultsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALIDITYCHECKRESULTSBASE_H
#define UI_QGSVALIDITYCHECKRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsValidityCheckResultsBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mDescriptionLabel;
    QListView *mResultsListView;
    QTextBrowser *mDetailedDescriptionTextBrowser;

    void setupUi(QWidget *QgsValidityCheckResultsBase)
    {
        if (QgsValidityCheckResultsBase->objectName().isEmpty())
            QgsValidityCheckResultsBase->setObjectName(QStringLiteral("QgsValidityCheckResultsBase"));
        QgsValidityCheckResultsBase->resize(311, 375);
        verticalLayout = new QVBoxLayout(QgsValidityCheckResultsBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        mDescriptionLabel = new QLabel(QgsValidityCheckResultsBase);
        mDescriptionLabel->setObjectName(QStringLiteral("mDescriptionLabel"));

        verticalLayout->addWidget(mDescriptionLabel);

        mResultsListView = new QListView(QgsValidityCheckResultsBase);
        mResultsListView->setObjectName(QStringLiteral("mResultsListView"));

        verticalLayout->addWidget(mResultsListView);

        mDetailedDescriptionTextBrowser = new QTextBrowser(QgsValidityCheckResultsBase);
        mDetailedDescriptionTextBrowser->setObjectName(QStringLiteral("mDetailedDescriptionTextBrowser"));

        verticalLayout->addWidget(mDetailedDescriptionTextBrowser);


        retranslateUi(QgsValidityCheckResultsBase);

        QMetaObject::connectSlotsByName(QgsValidityCheckResultsBase);
    } // setupUi

    void retranslateUi(QWidget *QgsValidityCheckResultsBase)
    {
        mDescriptionLabel->setText(QApplication::translate("QgsValidityCheckResultsBase", "TextLabel", Q_NULLPTR));
        Q_UNUSED(QgsValidityCheckResultsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsValidityCheckResultsBase: public Ui_QgsValidityCheckResultsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALIDITYCHECKRESULTSBASE_H
