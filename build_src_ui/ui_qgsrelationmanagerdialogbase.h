/********************************************************************************
** Form generated from reading UI file 'qgsrelationmanagerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONMANAGERDIALOGBASE_H
#define UI_QGSRELATIONMANAGERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationManagerDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mRelationsTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mBtnAddRelation;
    QPushButton *mBtnDiscoverRelations;
    QPushButton *mBtnRemoveRelation;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsRelationManagerDialogBase)
    {
        if (QgsRelationManagerDialogBase->objectName().isEmpty())
            QgsRelationManagerDialogBase->setObjectName(QStringLiteral("QgsRelationManagerDialogBase"));
        QgsRelationManagerDialogBase->resize(713, 427);
        QgsRelationManagerDialogBase->setWindowTitle(QStringLiteral("Dialog"));
        verticalLayout = new QVBoxLayout(QgsRelationManagerDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mRelationsTable = new QTableWidget(QgsRelationManagerDialogBase);
        if (mRelationsTable->columnCount() < 7)
            mRelationsTable->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        mRelationsTable->setObjectName(QStringLiteral("mRelationsTable"));
        mRelationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mRelationsTable->setSortingEnabled(true);
        mRelationsTable->horizontalHeader()->setStretchLastSection(true);
        mRelationsTable->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(mRelationsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mBtnAddRelation = new QPushButton(QgsRelationManagerDialogBase);
        mBtnAddRelation->setObjectName(QStringLiteral("mBtnAddRelation"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAddRelation->setIcon(icon);

        horizontalLayout->addWidget(mBtnAddRelation);

        mBtnDiscoverRelations = new QPushButton(QgsRelationManagerDialogBase);
        mBtnDiscoverRelations->setObjectName(QStringLiteral("mBtnDiscoverRelations"));
        mBtnDiscoverRelations->setIcon(icon);

        horizontalLayout->addWidget(mBtnDiscoverRelations);

        mBtnRemoveRelation = new QPushButton(QgsRelationManagerDialogBase);
        mBtnRemoveRelation->setObjectName(QStringLiteral("mBtnRemoveRelation"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemoveRelation->setIcon(icon1);

        horizontalLayout->addWidget(mBtnRemoveRelation);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRelationManagerDialogBase);

        QMetaObject::connectSlotsByName(QgsRelationManagerDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelationManagerDialogBase)
    {
        QTableWidgetItem *___qtablewidgetitem = mRelationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsRelationManagerDialogBase", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mRelationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referenced Layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem1->setToolTip(QApplication::translate("QgsRelationManagerDialogBase", "Referenced Layer (Parent)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem2 = mRelationsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referenced Field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem2->setToolTip(QApplication::translate("QgsRelationManagerDialogBase", "Referenced Field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem3 = mRelationsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referencing Layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem3->setToolTip(QApplication::translate("QgsRelationManagerDialogBase", "Referencing Layer (Child)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem4 = mRelationsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referencing Field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem4->setToolTip(QApplication::translate("QgsRelationManagerDialogBase", "Referencing Field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem5 = mRelationsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsRelationManagerDialogBase", "Id", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem5->setToolTip(QApplication::translate("QgsRelationManagerDialogBase", "Id", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem6 = mRelationsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsRelationManagerDialogBase", "Strength", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem6->setToolTip(QApplication::translate("QgsRelationManagerDialogBase", "Strength", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnAddRelation->setText(QApplication::translate("QgsRelationManagerDialogBase", "Add Relation", Q_NULLPTR));
        mBtnDiscoverRelations->setText(QApplication::translate("QgsRelationManagerDialogBase", "Discover Relations", Q_NULLPTR));
        mBtnRemoveRelation->setText(QApplication::translate("QgsRelationManagerDialogBase", "Remove Relation", Q_NULLPTR));
        Q_UNUSED(QgsRelationManagerDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRelationManagerDialogBase: public Ui_QgsRelationManagerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONMANAGERDIALOGBASE_H
