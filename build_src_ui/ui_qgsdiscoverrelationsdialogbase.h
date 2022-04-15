/********************************************************************************
** Form generated from reading UI file 'qgsdiscoverrelationsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDISCOVERRELATIONSDIALOGBASE_H
#define UI_QGSDISCOVERRELATIONSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsDiscoverRelationsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mRelationsTable;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsDiscoverRelationsDialogBase)
    {
        if (QgsDiscoverRelationsDialogBase->objectName().isEmpty())
            QgsDiscoverRelationsDialogBase->setObjectName(QStringLiteral("QgsDiscoverRelationsDialogBase"));
        QgsDiscoverRelationsDialogBase->resize(700, 267);
        verticalLayout = new QVBoxLayout(QgsDiscoverRelationsDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mRelationsTable = new QTableWidget(QgsDiscoverRelationsDialogBase);
        if (mRelationsTable->columnCount() < 6)
            mRelationsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        mRelationsTable->setObjectName(QStringLiteral("mRelationsTable"));
        mRelationsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mRelationsTable->setSelectionMode(QAbstractItemView::MultiSelection);
        mRelationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mRelationsTable->setSortingEnabled(true);
        mRelationsTable->horizontalHeader()->setStretchLastSection(true);
        mRelationsTable->verticalHeader()->setVisible(false);
        mRelationsTable->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(mRelationsTable);

        mButtonBox = new QDialogButtonBox(QgsDiscoverRelationsDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsDiscoverRelationsDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsDiscoverRelationsDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsDiscoverRelationsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDiscoverRelationsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDiscoverRelationsDialogBase)
    {
        QgsDiscoverRelationsDialogBase->setWindowTitle(QApplication::translate("QgsDiscoverRelationsDialogBase", "Discover Relations", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mRelationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsDiscoverRelationsDialogBase", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mRelationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsDiscoverRelationsDialogBase", "Referencing Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mRelationsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsDiscoverRelationsDialogBase", "Referencing Field", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mRelationsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsDiscoverRelationsDialogBase", "Referenced Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mRelationsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsDiscoverRelationsDialogBase", "Referenced Field", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = mRelationsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsDiscoverRelationsDialogBase", "Strength", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDiscoverRelationsDialogBase: public Ui_QgsDiscoverRelationsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDISCOVERRELATIONSDIALOGBASE_H
