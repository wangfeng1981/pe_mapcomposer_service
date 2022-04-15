/********************************************************************************
** Form generated from reading UI file 'qgsrulebasedrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASEDRENDERERWIDGET_H
#define UI_QGSRULEBASEDRENDERERWIDGET_H

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

class Ui_QgsRuleBasedRendererWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnEditRule;
    QPushButton *btnCountFeatures;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRenderingOrder;
    QHBoxLayout *horizontalLayout2;
    QPushButton *btnRefineRule;
    QSpacerItem *horizontalSpacer2;

    void setupUi(QWidget *QgsRuleBasedRendererWidget)
    {
        if (QgsRuleBasedRendererWidget->objectName().isEmpty())
            QgsRuleBasedRendererWidget->setObjectName(QStringLiteral("QgsRuleBasedRendererWidget"));
        QgsRuleBasedRendererWidget->resize(709, 401);
        verticalLayout = new QVBoxLayout(QgsRuleBasedRendererWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewRules = new QTreeView(QgsRuleBasedRendererWidget);
        viewRules->setObjectName(QStringLiteral("viewRules"));
        viewRules->setContextMenuPolicy(Qt::CustomContextMenu);
        viewRules->setAcceptDrops(true);
        viewRules->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewRules->setDragEnabled(true);
        viewRules->setDragDropMode(QAbstractItemView::InternalMove);
        viewRules->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewRules->setAllColumnsShowFocus(true);
        viewRules->header()->setMinimumSectionSize(100);
        viewRules->header()->setStretchLastSection(true);

        verticalLayout->addWidget(viewRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAddRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnAddRule->setObjectName(QStringLiteral("btnAddRule"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnRemoveRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnRemoveRule->setObjectName(QStringLiteral("btnRemoveRule"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon1);

        horizontalLayout->addWidget(btnRemoveRule);

        btnEditRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnEditRule->setObjectName(QStringLiteral("btnEditRule"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon2);

        horizontalLayout->addWidget(btnEditRule);

        btnCountFeatures = new QPushButton(QgsRuleBasedRendererWidget);
        btnCountFeatures->setObjectName(QStringLiteral("btnCountFeatures"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionSum.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCountFeatures->setIcon(icon3);

        horizontalLayout->addWidget(btnCountFeatures);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRenderingOrder = new QPushButton(QgsRuleBasedRendererWidget);
        btnRenderingOrder->setObjectName(QStringLiteral("btnRenderingOrder"));

        horizontalLayout->addWidget(btnRenderingOrder);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName(QStringLiteral("horizontalLayout2"));
        btnRefineRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnRefineRule->setObjectName(QStringLiteral("btnRefineRule"));
        btnRefineRule->setEnabled(true);
        btnRefineRule->setCheckable(false);
        btnRefineRule->setAutoDefault(false);
        btnRefineRule->setFlat(false);

        horizontalLayout2->addWidget(btnRefineRule);

        horizontalSpacer2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout2->addItem(horizontalSpacer2);


        verticalLayout->addLayout(horizontalLayout2);


        retranslateUi(QgsRuleBasedRendererWidget);

        btnRefineRule->setDefault(false);


        QMetaObject::connectSlotsByName(QgsRuleBasedRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBasedRendererWidget)
    {
#ifndef QT_NO_TOOLTIP
        btnAddRule->setToolTip(QApplication::translate("QgsRuleBasedRendererWidget", "Add rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveRule->setToolTip(QApplication::translate("QgsRuleBasedRendererWidget", "Remove selected rules", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditRule->setToolTip(QApplication::translate("QgsRuleBasedRendererWidget", "Edit current rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCountFeatures->setToolTip(QApplication::translate("QgsRuleBasedRendererWidget", "Count features", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRenderingOrder->setText(QApplication::translate("QgsRuleBasedRendererWidget", "Symbol Levels\342\200\246", Q_NULLPTR));
        btnRefineRule->setText(QApplication::translate("QgsRuleBasedRendererWidget", "Refine Selected Rules", Q_NULLPTR));
        Q_UNUSED(QgsRuleBasedRendererWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBasedRendererWidget: public Ui_QgsRuleBasedRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASEDRENDERERWIDGET_H
