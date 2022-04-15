/********************************************************************************
** Form generated from reading UI file 'qgsrulebasedlabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASEDLABELINGWIDGET_H
#define UI_QGSRULEBASEDLABELINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRuleBasedLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnEditRule;
    QPushButton *btnRemoveRule;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsRuleBasedLabelingWidget)
    {
        if (QgsRuleBasedLabelingWidget->objectName().isEmpty())
            QgsRuleBasedLabelingWidget->setObjectName(QStringLiteral("QgsRuleBasedLabelingWidget"));
        QgsRuleBasedLabelingWidget->resize(457, 372);
        verticalLayout = new QVBoxLayout(QgsRuleBasedLabelingWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewRules = new QTreeView(QgsRuleBasedLabelingWidget);
        viewRules->setObjectName(QStringLiteral("viewRules"));
        viewRules->setContextMenuPolicy(Qt::ActionsContextMenu);
        viewRules->setAcceptDrops(true);
        viewRules->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewRules->setDragEnabled(true);
        viewRules->setDragDropMode(QAbstractItemView::InternalMove);
        viewRules->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewRules->setAllColumnsShowFocus(true);
        viewRules->header()->setMinimumSectionSize(100);

        verticalLayout->addWidget(viewRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAddRule = new QPushButton(QgsRuleBasedLabelingWidget);
        btnAddRule->setObjectName(QStringLiteral("btnAddRule"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnEditRule = new QPushButton(QgsRuleBasedLabelingWidget);
        btnEditRule->setObjectName(QStringLiteral("btnEditRule"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon1);

        horizontalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QPushButton(QgsRuleBasedLabelingWidget);
        btnRemoveRule->setObjectName(QStringLiteral("btnRemoveRule"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon2);

        horizontalLayout->addWidget(btnRemoveRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRuleBasedLabelingWidget);

        QMetaObject::connectSlotsByName(QgsRuleBasedLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBasedLabelingWidget)
    {
#ifndef QT_NO_TOOLTIP
        btnAddRule->setToolTip(QApplication::translate("QgsRuleBasedLabelingWidget", "Add rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditRule->setToolTip(QApplication::translate("QgsRuleBasedLabelingWidget", "Edit rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveRule->setToolTip(QApplication::translate("QgsRuleBasedLabelingWidget", "Remove rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveRule->setText(QString());
        Q_UNUSED(QgsRuleBasedLabelingWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBasedLabelingWidget: public Ui_QgsRuleBasedLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASEDLABELINGWIDGET_H
