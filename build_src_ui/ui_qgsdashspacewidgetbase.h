/********************************************************************************
** Form generated from reading UI file 'qgsdashspacewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDASHSPACEWIDGETBASE_H
#define UI_QGSDASHSPACEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDashSpaceWidgetBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *mAddButton;
    QPushButton *mRemoveButton;
    QSpacerItem *verticalSpacer;
    QTreeWidget *mDashSpaceTreeWidget;

    void setupUi(QgsPanelWidget *QgsDashSpaceWidgetBase)
    {
        if (QgsDashSpaceWidgetBase->objectName().isEmpty())
            QgsDashSpaceWidgetBase->setObjectName(QStringLiteral("QgsDashSpaceWidgetBase"));
        QgsDashSpaceWidgetBase->resize(194, 277);
        gridLayout = new QGridLayout(QgsDashSpaceWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mAddButton = new QPushButton(QgsDashSpaceWidgetBase);
        mAddButton->setObjectName(QStringLiteral("mAddButton"));

        verticalLayout->addWidget(mAddButton);

        mRemoveButton = new QPushButton(QgsDashSpaceWidgetBase);
        mRemoveButton->setObjectName(QStringLiteral("mRemoveButton"));

        verticalLayout->addWidget(mRemoveButton);

        verticalSpacer = new QSpacerItem(20, 245, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        mDashSpaceTreeWidget = new QTreeWidget(QgsDashSpaceWidgetBase);
        mDashSpaceTreeWidget->setObjectName(QStringLiteral("mDashSpaceTreeWidget"));
        mDashSpaceTreeWidget->setColumnCount(2);

        gridLayout->addWidget(mDashSpaceTreeWidget, 0, 0, 1, 1);


        retranslateUi(QgsDashSpaceWidgetBase);

        QMetaObject::connectSlotsByName(QgsDashSpaceWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsDashSpaceWidgetBase)
    {
        QgsDashSpaceWidgetBase->setWindowTitle(QApplication::translate("QgsDashSpaceWidgetBase", "Dash Space Pattern", Q_NULLPTR));
        mAddButton->setText(QString());
        mRemoveButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mDashSpaceTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDashSpaceWidgetBase", "Space", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDashSpaceWidgetBase", "Dash", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDashSpaceWidgetBase: public Ui_QgsDashSpaceWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDASHSPACEWIDGETBASE_H
