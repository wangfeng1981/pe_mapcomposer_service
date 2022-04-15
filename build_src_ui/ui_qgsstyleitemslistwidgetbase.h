/********************************************************************************
** Form generated from reading UI file 'qgsstyleitemslistwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEITEMSLISTWIDGETBASE_H
#define UI_QGSSTYLEITEMSLISTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleItemsListWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *groupsCombo;
    QToolButton *openStyleManagerButton;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *mButtonIconView;
    QToolButton *mButtonListView;
    QLabel *lblSymbolName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSaveSymbol;
    QPushButton *btnAdvanced;
    QStackedWidget *mSymbolViewStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QListView *viewSymbols;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QTreeView *mSymbolTreeView;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *QgsStyleItemsListWidgetBase)
    {
        if (QgsStyleItemsListWidgetBase->objectName().isEmpty())
            QgsStyleItemsListWidgetBase->setObjectName(QStringLiteral("QgsStyleItemsListWidgetBase"));
        QgsStyleItemsListWidgetBase->resize(386, 619);
        QgsStyleItemsListWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_4 = new QGridLayout(QgsStyleItemsListWidgetBase);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupsCombo = new QComboBox(QgsStyleItemsListWidgetBase);
        groupsCombo->setObjectName(QStringLiteral("groupsCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupsCombo->sizePolicy().hasHeightForWidth());
        groupsCombo->setSizePolicy(sizePolicy);
        groupsCombo->setMinimumSize(QSize(50, 0));
        groupsCombo->setEditable(true);

        horizontalLayout_3->addWidget(groupsCombo);

        openStyleManagerButton = new QToolButton(QgsStyleItemsListWidgetBase);
        openStyleManagerButton->setObjectName(QStringLiteral("openStyleManagerButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionStyleManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openStyleManagerButton->setIcon(icon);
        openStyleManagerButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(openStyleManagerButton);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 2, -1, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        mButtonIconView = new QToolButton(QgsStyleItemsListWidgetBase);
        buttonGroup = new QButtonGroup(QgsStyleItemsListWidgetBase);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(mButtonIconView);
        mButtonIconView->setObjectName(QStringLiteral("mButtonIconView"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionIconView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonIconView->setIcon(icon1);
        mButtonIconView->setCheckable(true);
        mButtonIconView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonIconView);

        mButtonListView = new QToolButton(QgsStyleItemsListWidgetBase);
        buttonGroup->addButton(mButtonListView);
        mButtonListView->setObjectName(QStringLiteral("mButtonListView"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonListView->setIcon(icon2);
        mButtonListView->setCheckable(true);
        mButtonListView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonListView);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        lblSymbolName = new QLabel(QgsStyleItemsListWidgetBase);
        lblSymbolName->setObjectName(QStringLiteral("lblSymbolName"));

        horizontalLayout_4->addWidget(lblSymbolName);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnSaveSymbol = new QPushButton(QgsStyleItemsListWidgetBase);
        btnSaveSymbol->setObjectName(QStringLiteral("btnSaveSymbol"));

        horizontalLayout_4->addWidget(btnSaveSymbol);

        btnAdvanced = new QPushButton(QgsStyleItemsListWidgetBase);
        btnAdvanced->setObjectName(QStringLiteral("btnAdvanced"));

        horizontalLayout_4->addWidget(btnAdvanced);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        mSymbolViewStackedWidget = new QStackedWidget(QgsStyleItemsListWidgetBase);
        mSymbolViewStackedWidget->setObjectName(QStringLiteral("mSymbolViewStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        viewSymbols = new QListView(page);
        viewSymbols->setObjectName(QStringLiteral("viewSymbols"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(viewSymbols->sizePolicy().hasHeightForWidth());
        viewSymbols->setSizePolicy(sizePolicy1);
        viewSymbols->setIconSize(QSize(77, 70));
        viewSymbols->setTextElideMode(Qt::ElideNone);
        viewSymbols->setFlow(QListView::LeftToRight);
        viewSymbols->setResizeMode(QListView::Adjust);
        viewSymbols->setSpacing(5);
        viewSymbols->setViewMode(QListView::IconMode);
        viewSymbols->setUniformItemSizes(false);
        viewSymbols->setWordWrap(true);

        verticalLayout_2->addWidget(viewSymbols);

        mSymbolViewStackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        verticalLayout_3 = new QVBoxLayout(page2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mSymbolTreeView = new QTreeView(page2);
        mSymbolTreeView->setObjectName(QStringLiteral("mSymbolTreeView"));

        verticalLayout_3->addWidget(mSymbolTreeView);

        mSymbolViewStackedWidget->addWidget(page2);

        gridLayout_4->addWidget(mSymbolViewStackedWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(groupsCombo, openStyleManagerButton);
        QWidget::setTabOrder(openStyleManagerButton, btnSaveSymbol);
        QWidget::setTabOrder(btnSaveSymbol, btnAdvanced);

        retranslateUi(QgsStyleItemsListWidgetBase);

        mSymbolViewStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsStyleItemsListWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsStyleItemsListWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        groupsCombo->setToolTip(QApplication::translate("QgsStyleItemsListWidgetBase", "Filter Symbols", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        openStyleManagerButton->setToolTip(QApplication::translate("QgsStyleItemsListWidgetBase", "Style Manager", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openStyleManagerButton->setText(QApplication::translate("QgsStyleItemsListWidgetBase", "Open Library\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonIconView->setToolTip(QApplication::translate("QgsStyleItemsListWidgetBase", "Icon View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonIconView->setText(QApplication::translate("QgsStyleItemsListWidgetBase", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonListView->setToolTip(QApplication::translate("QgsStyleItemsListWidgetBase", "List View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonListView->setText(QApplication::translate("QgsStyleItemsListWidgetBase", "PushButton", Q_NULLPTR));
        lblSymbolName->setText(QApplication::translate("QgsStyleItemsListWidgetBase", "Symbol Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSaveSymbol->setToolTip(QApplication::translate("QgsStyleItemsListWidgetBase", "Save symbol", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSaveSymbol->setText(QApplication::translate("QgsStyleItemsListWidgetBase", "Save Symbol", Q_NULLPTR));
        btnAdvanced->setText(QApplication::translate("QgsStyleItemsListWidgetBase", "Advanced", Q_NULLPTR));
        Q_UNUSED(QgsStyleItemsListWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsStyleItemsListWidgetBase: public Ui_QgsStyleItemsListWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEITEMSLISTWIDGETBASE_H
