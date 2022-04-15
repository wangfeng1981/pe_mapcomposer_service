/********************************************************************************
** Form generated from reading UI file 'qgsrulebased3drendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASED3DRENDERERWIDGET_H
#define UI_QGSRULEBASED3DRENDERERWIDGET_H

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

class Ui_QgsRuleBased3DRendererWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnEditRule;
    QPushButton *btnRemoveRule;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsRuleBased3DRendererWidget)
    {
        if (QgsRuleBased3DRendererWidget->objectName().isEmpty())
            QgsRuleBased3DRendererWidget->setObjectName(QStringLiteral("QgsRuleBased3DRendererWidget"));
        QgsRuleBased3DRendererWidget->resize(457, 372);
        verticalLayout = new QVBoxLayout(QgsRuleBased3DRendererWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewRules = new QTreeView(QgsRuleBased3DRendererWidget);
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
        btnAddRule = new QPushButton(QgsRuleBased3DRendererWidget);
        btnAddRule->setObjectName(QStringLiteral("btnAddRule"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnEditRule = new QPushButton(QgsRuleBased3DRendererWidget);
        btnEditRule->setObjectName(QStringLiteral("btnEditRule"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon1);

        horizontalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QPushButton(QgsRuleBased3DRendererWidget);
        btnRemoveRule->setObjectName(QStringLiteral("btnRemoveRule"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon2);

        horizontalLayout->addWidget(btnRemoveRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRuleBased3DRendererWidget);

        QMetaObject::connectSlotsByName(QgsRuleBased3DRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBased3DRendererWidget)
    {
#ifndef QT_NO_TOOLTIP
        btnAddRule->setToolTip(QApplication::translate("QgsRuleBased3DRendererWidget", "Add rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditRule->setToolTip(QApplication::translate("QgsRuleBased3DRendererWidget", "Edit rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveRule->setToolTip(QApplication::translate("QgsRuleBased3DRendererWidget", "Remove rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveRule->setText(QString());
        Q_UNUSED(QgsRuleBased3DRendererWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBased3DRendererWidget: public Ui_QgsRuleBased3DRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASED3DRENDERERWIDGET_H
