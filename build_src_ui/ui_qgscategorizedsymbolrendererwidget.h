/********************************************************************************
** Form generated from reading UI file 'qgscategorizedsymbolrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCATEGORIZEDSYMBOLRENDERERWIDGET_H
#define UI_QGSCATEGORIZEDSYMBOLRENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include <qgsfieldexpressionwidget.h>
#include "qgscolorrampbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCategorizedSymbolRendererWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsFieldExpressionWidget *mExpressionWidget;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QgsColorRampButton *btnColorRamp;
    QTreeView *viewCategories;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddCategories;
    QPushButton *btnAddCategory;
    QPushButton *btnDeleteCategories;
    QPushButton *btnDeleteAllCategories;
    QSpacerItem *spacerItem;
    QPushButton *btnAdvanced;
    QgsSymbolButton *btnChangeCategorizedSymbol;

    void setupUi(QWidget *QgsCategorizedSymbolRendererWidget)
    {
        if (QgsCategorizedSymbolRendererWidget->objectName().isEmpty())
            QgsCategorizedSymbolRendererWidget->setObjectName(QStringLiteral("QgsCategorizedSymbolRendererWidget"));
        QgsCategorizedSymbolRendererWidget->resize(424, 368);
        gridLayout = new QGridLayout(QgsCategorizedSymbolRendererWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(QgsCategorizedSymbolRendererWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsCategorizedSymbolRendererWidget);
        mExpressionWidget->setObjectName(QStringLiteral("mExpressionWidget"));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExpressionWidget, 0, 1, 1, 1);

        label_9 = new QLabel(QgsCategorizedSymbolRendererWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(QgsCategorizedSymbolRendererWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnColorRamp = new QgsColorRampButton(QgsCategorizedSymbolRendererWidget);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(btnColorRamp);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        viewCategories = new QTreeView(QgsCategorizedSymbolRendererWidget);
        viewCategories->setObjectName(QStringLiteral("viewCategories"));
        viewCategories->setContextMenuPolicy(Qt::CustomContextMenu);
        viewCategories->setDragDropMode(QAbstractItemView::InternalMove);
        viewCategories->setDefaultDropAction(Qt::IgnoreAction);
        viewCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewCategories->setIconSize(QSize(16, 16));
        viewCategories->setRootIsDecorated(false);
        viewCategories->setItemsExpandable(false);
        viewCategories->setSortingEnabled(true);
        viewCategories->setAllColumnsShowFocus(true);

        gridLayout->addWidget(viewCategories, 3, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnAddCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnAddCategories->setObjectName(QStringLiteral("btnAddCategories"));

        horizontalLayout_3->addWidget(btnAddCategories);

        btnAddCategory = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnAddCategory->setObjectName(QStringLiteral("btnAddCategory"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddCategory->setIcon(icon);

        horizontalLayout_3->addWidget(btnAddCategory);

        btnDeleteCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnDeleteCategories->setObjectName(QStringLiteral("btnDeleteCategories"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteCategories->setIcon(icon1);

        horizontalLayout_3->addWidget(btnDeleteCategories);

        btnDeleteAllCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnDeleteAllCategories->setObjectName(QStringLiteral("btnDeleteAllCategories"));

        horizontalLayout_3->addWidget(btnDeleteAllCategories);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem);

        btnAdvanced = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnAdvanced->setObjectName(QStringLiteral("btnAdvanced"));

        horizontalLayout_3->addWidget(btnAdvanced);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 2);

        btnChangeCategorizedSymbol = new QgsSymbolButton(QgsCategorizedSymbolRendererWidget);
        btnChangeCategorizedSymbol->setObjectName(QStringLiteral("btnChangeCategorizedSymbol"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnChangeCategorizedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeCategorizedSymbol->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnChangeCategorizedSymbol, 1, 1, 1, 1);

        viewCategories->raise();
        btnChangeCategorizedSymbol->raise();
        label_9->raise();
        label_10->raise();
        mExpressionWidget->raise();
        label_3->raise();
        QWidget::setTabOrder(mExpressionWidget, btnChangeCategorizedSymbol);
        QWidget::setTabOrder(btnChangeCategorizedSymbol, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, viewCategories);
        QWidget::setTabOrder(viewCategories, btnAddCategories);
        QWidget::setTabOrder(btnAddCategories, btnAddCategory);
        QWidget::setTabOrder(btnAddCategory, btnDeleteCategories);
        QWidget::setTabOrder(btnDeleteCategories, btnDeleteAllCategories);
        QWidget::setTabOrder(btnDeleteAllCategories, btnAdvanced);

        retranslateUi(QgsCategorizedSymbolRendererWidget);

        QMetaObject::connectSlotsByName(QgsCategorizedSymbolRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsCategorizedSymbolRendererWidget)
    {
        label_3->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Value", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Symbol", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Color ramp", Q_NULLPTR));
        btnAddCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Classify", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddCategory->setToolTip(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Add", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDeleteCategories->setToolTip(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Delete", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDeleteAllCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Delete All", Q_NULLPTR));
        btnAdvanced->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Advanced", Q_NULLPTR));
        btnChangeCategorizedSymbol->setText(QApplication::translate("QgsCategorizedSymbolRendererWidget", "Change\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsCategorizedSymbolRendererWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsCategorizedSymbolRendererWidget: public Ui_QgsCategorizedSymbolRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCATEGORIZEDSYMBOLRENDERERWIDGET_H
