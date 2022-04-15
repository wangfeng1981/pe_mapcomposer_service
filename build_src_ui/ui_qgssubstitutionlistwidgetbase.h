/********************************************************************************
** Form generated from reading UI file 'qgssubstitutionlistwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSUBSTITUTIONLISTWIDGETBASE_H
#define UI_QGSSUBSTITUTIONLISTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSubstitutionListWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mTableSubstitutions;
    QHBoxLayout *horizontalLayout;
    QToolButton *mButtonAdd;
    QToolButton *mButtonRemove;
    QToolButton *mButtonImport;
    QToolButton *mButtonExport;
    QSpacerItem *horizontalSpacer;

    void setupUi(QgsPanelWidget *QgsSubstitutionListWidgetBase)
    {
        if (QgsSubstitutionListWidgetBase->objectName().isEmpty())
            QgsSubstitutionListWidgetBase->setObjectName(QStringLiteral("QgsSubstitutionListWidgetBase"));
        QgsSubstitutionListWidgetBase->resize(291, 416);
        QgsSubstitutionListWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsSubstitutionListWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mTableSubstitutions = new QTableWidget(QgsSubstitutionListWidgetBase);
        if (mTableSubstitutions->columnCount() < 4)
            mTableSubstitutions->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mTableSubstitutions->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mTableSubstitutions->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mTableSubstitutions->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mTableSubstitutions->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        mTableSubstitutions->setObjectName(QStringLiteral("mTableSubstitutions"));
        mTableSubstitutions->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(mTableSubstitutions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mButtonAdd = new QToolButton(QgsSubstitutionListWidgetBase);
        mButtonAdd->setObjectName(QStringLiteral("mButtonAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAdd->setIcon(icon);

        horizontalLayout->addWidget(mButtonAdd);

        mButtonRemove = new QToolButton(QgsSubstitutionListWidgetBase);
        mButtonRemove->setObjectName(QStringLiteral("mButtonRemove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemove->setIcon(icon1);

        horizontalLayout->addWidget(mButtonRemove);

        mButtonImport = new QToolButton(QgsSubstitutionListWidgetBase);
        mButtonImport->setObjectName(QStringLiteral("mButtonImport"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonImport->setIcon(icon2);

        horizontalLayout->addWidget(mButtonImport);

        mButtonExport = new QToolButton(QgsSubstitutionListWidgetBase);
        mButtonExport->setObjectName(QStringLiteral("mButtonExport"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonExport->setIcon(icon3);

        horizontalLayout->addWidget(mButtonExport);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsSubstitutionListWidgetBase);

        QMetaObject::connectSlotsByName(QgsSubstitutionListWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsSubstitutionListWidgetBase)
    {
        QTableWidgetItem *___qtablewidgetitem = mTableSubstitutions->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "Text", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mTableSubstitutions->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "Substitution", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mTableSubstitutions->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "Case Sensitive", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mTableSubstitutions->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "Whole Word", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem3->setToolTip(QApplication::translate("QgsSubstitutionListWidgetBase", "If checked, only whole word matches are replaced", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAdd->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "\342\200\246", Q_NULLPTR));
        mButtonRemove->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "\342\200\246", Q_NULLPTR));
        mButtonImport->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "\342\200\246", Q_NULLPTR));
        mButtonExport->setText(QApplication::translate("QgsSubstitutionListWidgetBase", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsSubstitutionListWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSubstitutionListWidgetBase: public Ui_QgsSubstitutionListWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSUBSTITUTIONLISTWIDGETBASE_H
