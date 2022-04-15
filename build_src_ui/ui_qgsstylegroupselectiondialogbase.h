/********************************************************************************
** Form generated from reading UI file 'qgsstylegroupselectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEGROUPSELECTIONDIALOGBASE_H
#define UI_QGSSTYLEGROUPSELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SymbolsGroupSelectionDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *groupTree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *SymbolsGroupSelectionDialogBase)
    {
        if (SymbolsGroupSelectionDialogBase->objectName().isEmpty())
            SymbolsGroupSelectionDialogBase->setObjectName(QStringLiteral("SymbolsGroupSelectionDialogBase"));
        SymbolsGroupSelectionDialogBase->resize(287, 348);
        verticalLayout = new QVBoxLayout(SymbolsGroupSelectionDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupTree = new QTreeView(SymbolsGroupSelectionDialogBase);
        groupTree->setObjectName(QStringLiteral("groupTree"));
        groupTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        groupTree->setHeaderHidden(true);

        verticalLayout->addWidget(groupTree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(SymbolsGroupSelectionDialogBase);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SymbolsGroupSelectionDialogBase);
        QObject::connect(okButton, SIGNAL(clicked()), SymbolsGroupSelectionDialogBase, SLOT(accept()));
        QObject::connect(SymbolsGroupSelectionDialogBase, SIGNAL(destroyed()), SymbolsGroupSelectionDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(SymbolsGroupSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SymbolsGroupSelectionDialogBase)
    {
        SymbolsGroupSelectionDialogBase->setWindowTitle(QApplication::translate("SymbolsGroupSelectionDialogBase", "Group Selection Dialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("SymbolsGroupSelectionDialogBase", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SymbolsGroupSelectionDialogBase: public Ui_SymbolsGroupSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEGROUPSELECTIONDIALOGBASE_H
