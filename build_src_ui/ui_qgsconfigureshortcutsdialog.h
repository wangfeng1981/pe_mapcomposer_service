/********************************************************************************
** Form generated from reading UI file 'qgsconfigureshortcutsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCONFIGURESHORTCUTSDIALOG_H
#define UI_QGSCONFIGURESHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsConfigureShortcutsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsFilterLineEdit *mLeFilter;
    QTreeWidget *treeActions;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnChangeShortcut;
    QPushButton *btnSetNoShortcut;
    QPushButton *btnResetShortcut;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLoadShortcuts;
    QPushButton *btnSaveShortcuts;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsConfigureShortcutsDialog)
    {
        if (QgsConfigureShortcutsDialog->objectName().isEmpty())
            QgsConfigureShortcutsDialog->setObjectName(QStringLiteral("QgsConfigureShortcutsDialog"));
        QgsConfigureShortcutsDialog->resize(385, 304);
        verticalLayout = new QVBoxLayout(QgsConfigureShortcutsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mLeFilter = new QgsFilterLineEdit(QgsConfigureShortcutsDialog);
        mLeFilter->setObjectName(QStringLiteral("mLeFilter"));

        verticalLayout->addWidget(mLeFilter);

        treeActions = new QTreeWidget(QgsConfigureShortcutsDialog);
        treeActions->setObjectName(QStringLiteral("treeActions"));
        treeActions->setRootIsDecorated(false);
        treeActions->setSortingEnabled(true);
        treeActions->setColumnCount(2);

        verticalLayout->addWidget(treeActions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnChangeShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnChangeShortcut->setObjectName(QStringLiteral("btnChangeShortcut"));
        btnChangeShortcut->setFocusPolicy(Qt::StrongFocus);
        btnChangeShortcut->setCheckable(true);
        btnChangeShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnChangeShortcut);

        btnSetNoShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnSetNoShortcut->setObjectName(QStringLiteral("btnSetNoShortcut"));
        btnSetNoShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnSetNoShortcut);

        btnResetShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnResetShortcut->setObjectName(QStringLiteral("btnResetShortcut"));
        btnResetShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnResetShortcut);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnLoadShortcuts = new QPushButton(QgsConfigureShortcutsDialog);
        btnLoadShortcuts->setObjectName(QStringLiteral("btnLoadShortcuts"));
        btnLoadShortcuts->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnLoadShortcuts);

        btnSaveShortcuts = new QPushButton(QgsConfigureShortcutsDialog);
        btnSaveShortcuts->setObjectName(QStringLiteral("btnSaveShortcuts"));
        btnSaveShortcuts->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnSaveShortcuts);

        buttonBox = new QDialogButtonBox(QgsConfigureShortcutsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(mLeFilter, treeActions);
        QWidget::setTabOrder(treeActions, btnChangeShortcut);
        QWidget::setTabOrder(btnChangeShortcut, btnSetNoShortcut);
        QWidget::setTabOrder(btnSetNoShortcut, btnResetShortcut);
        QWidget::setTabOrder(btnResetShortcut, btnLoadShortcuts);
        QWidget::setTabOrder(btnLoadShortcuts, btnSaveShortcuts);

        retranslateUi(QgsConfigureShortcutsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsConfigureShortcutsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsConfigureShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsConfigureShortcutsDialog)
    {
        QgsConfigureShortcutsDialog->setWindowTitle(QApplication::translate("QgsConfigureShortcutsDialog", "Keyboard Shortcuts", Q_NULLPTR));
        mLeFilter->setPlaceholderText(QApplication::translate("QgsConfigureShortcutsDialog", "Search\342\200\246", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeActions->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsConfigureShortcutsDialog", "Shortcut", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsConfigureShortcutsDialog", "Action", Q_NULLPTR));
        btnChangeShortcut->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Change", Q_NULLPTR));
        btnSetNoShortcut->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Set None", Q_NULLPTR));
        btnResetShortcut->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Set Default", Q_NULLPTR));
        btnLoadShortcuts->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Load\342\200\246", Q_NULLPTR));
        btnSaveShortcuts->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Save\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsConfigureShortcutsDialog: public Ui_QgsConfigureShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCONFIGURESHORTCUTSDIALOG_H
