/********************************************************************************
** Form generated from reading UI file 'qgstablewidgetuibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABLEWIDGETUIBASE_H
#define UI_QGSTABLEWIDGETUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTableWidgetUiBase
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QToolButton *addButton;
    QToolButton *removeButton;
    QSpacerItem *verticalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *QgsTableWidgetUiBase)
    {
        if (QgsTableWidgetUiBase->objectName().isEmpty())
            QgsTableWidgetUiBase->setObjectName(QStringLiteral("QgsTableWidgetUiBase"));
        QgsTableWidgetUiBase->resize(426, 112);
        QgsTableWidgetUiBase->setMinimumSize(QSize(300, 82));
        QgsTableWidgetUiBase->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout_3 = new QHBoxLayout(QgsTableWidgetUiBase);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addButton = new QToolButton(QgsTableWidgetUiBase);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        verticalLayout->addWidget(addButton);

        removeButton = new QToolButton(QgsTableWidgetUiBase);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        verticalLayout->addWidget(removeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        tableView = new QTableView(QgsTableWidgetUiBase);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(tableView);


        retranslateUi(QgsTableWidgetUiBase);

        QMetaObject::connectSlotsByName(QgsTableWidgetUiBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTableWidgetUiBase)
    {
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("QgsTableWidgetUiBase", "Add entry", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("QgsTableWidgetUiBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("QgsTableWidgetUiBase", "Remove entry", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QApplication::translate("QgsTableWidgetUiBase", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsTableWidgetUiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsTableWidgetUiBase: public Ui_QgsTableWidgetUiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABLEWIDGETUIBASE_H
