/********************************************************************************
** Form generated from reading UI file 'qgsstylemanagerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEMANAGERDIALOGBASE_H
#define UI_QGSSTYLEMANAGERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStyleManagerDialogBase
{
public:
    QAction *actnRemoveItem;
    QAction *actnEditItem;
    QAction *actnAddFavorite;
    QAction *actnRemoveFavorite;
    QAction *actnDetag;
    QAction *actnEditSmartGroup;
    QAction *actnAddTag;
    QAction *actnAddSmartgroup;
    QAction *actnRemoveGroup;
    QAction *actnTagSymbols;
    QAction *actnFinishTagging;
    QAction *actnExportAsPNG;
    QAction *actnExportAsSVG;
    QVBoxLayout *mVerticalLayout;
    QSplitter *mSplitter;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTreeView *groupTree;
    QPushButton *btnAddTag;
    QPushButton *btnAddSmartgroup;
    QPushButton *btnManageGroups;
    QPushButton *btnShare;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *symbolBtnsLayout;
    QPushButton *btnAddItem;
    QPushButton *btnRemoveItem;
    QPushButton *btnEditItem;
    QPushButton *mCopyToDefaultButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *mButtonIconView;
    QToolButton *mButtonListView;
    QgsFilterLineEdit *searchBox;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabItemType;
    QWidget *tabAll;
    QWidget *tabMarker;
    QWidget *tabLine;
    QWidget *tabFill;
    QWidget *tabColorRamp;
    QWidget *tabTextFormat;
    QWidget *tabLabelSettings;
    QWidget *tabLegendPatchShapes;
    QWidget *tab3DSymbols;
    QStackedWidget *mSymbolViewStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QListView *listItems;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QTreeView *mSymbolTreeView;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsStyleManagerDialogBase)
    {
        if (QgsStyleManagerDialogBase->objectName().isEmpty())
            QgsStyleManagerDialogBase->setObjectName(QStringLiteral("QgsStyleManagerDialogBase"));
        QgsStyleManagerDialogBase->resize(867, 410);
        actnRemoveItem = new QAction(QgsStyleManagerDialogBase);
        actnRemoveItem->setObjectName(QStringLiteral("actnRemoveItem"));
        actnRemoveItem->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actnRemoveItem->setIcon(icon);
        actnEditItem = new QAction(QgsStyleManagerDialogBase);
        actnEditItem->setObjectName(QStringLiteral("actnEditItem"));
        actnEditItem->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionProjectProperties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actnEditItem->setIcon(icon1);
        actnAddFavorite = new QAction(QgsStyleManagerDialogBase);
        actnAddFavorite->setObjectName(QStringLiteral("actnAddFavorite"));
        actnAddFavorite->setEnabled(false);
        actnRemoveFavorite = new QAction(QgsStyleManagerDialogBase);
        actnRemoveFavorite->setObjectName(QStringLiteral("actnRemoveFavorite"));
        actnRemoveFavorite->setEnabled(false);
        actnDetag = new QAction(QgsStyleManagerDialogBase);
        actnDetag->setObjectName(QStringLiteral("actnDetag"));
        actnDetag->setEnabled(false);
        actnEditSmartGroup = new QAction(QgsStyleManagerDialogBase);
        actnEditSmartGroup->setObjectName(QStringLiteral("actnEditSmartGroup"));
        actnAddTag = new QAction(QgsStyleManagerDialogBase);
        actnAddTag->setObjectName(QStringLiteral("actnAddTag"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actnAddTag->setIcon(icon2);
        actnAddSmartgroup = new QAction(QgsStyleManagerDialogBase);
        actnAddSmartgroup->setObjectName(QStringLiteral("actnAddSmartgroup"));
        actnAddSmartgroup->setIcon(icon2);
        actnRemoveGroup = new QAction(QgsStyleManagerDialogBase);
        actnRemoveGroup->setObjectName(QStringLiteral("actnRemoveGroup"));
        actnRemoveGroup->setIcon(icon);
        actnTagSymbols = new QAction(QgsStyleManagerDialogBase);
        actnTagSymbols->setObjectName(QStringLiteral("actnTagSymbols"));
        actnFinishTagging = new QAction(QgsStyleManagerDialogBase);
        actnFinishTagging->setObjectName(QStringLiteral("actnFinishTagging"));
        actnFinishTagging->setEnabled(true);
        actnFinishTagging->setVisible(true);
        actnExportAsPNG = new QAction(QgsStyleManagerDialogBase);
        actnExportAsPNG->setObjectName(QStringLiteral("actnExportAsPNG"));
        actnExportAsPNG->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionSaveMapAsImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actnExportAsPNG->setIcon(icon3);
        actnExportAsSVG = new QAction(QgsStyleManagerDialogBase);
        actnExportAsSVG->setObjectName(QStringLiteral("actnExportAsSVG"));
        actnExportAsSVG->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsSVG.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actnExportAsSVG->setIcon(icon4);
        mVerticalLayout = new QVBoxLayout(QgsStyleManagerDialogBase);
        mVerticalLayout->setObjectName(QStringLiteral("mVerticalLayout"));
        mVerticalLayout->setContentsMargins(6, 6, 6, 6);
        mSplitter = new QSplitter(QgsStyleManagerDialogBase);
        mSplitter->setObjectName(QStringLiteral("mSplitter"));
        mSplitter->setOrientation(Qt::Horizontal);
        mSplitter->setHandleWidth(3);
        mSplitter->setChildrenCollapsible(false);
        widget = new QWidget(mSplitter);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 4, 0);
        groupTree = new QTreeView(widget);
        groupTree->setObjectName(QStringLiteral("groupTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupTree->sizePolicy().hasHeightForWidth());
        groupTree->setSizePolicy(sizePolicy1);
        groupTree->setMaximumSize(QSize(16777215, 16777215));
        groupTree->setEditTriggers(QAbstractItemView::DoubleClicked);

        gridLayout_2->addWidget(groupTree, 0, 0, 1, 1);

        btnAddTag = new QPushButton(widget);
        btnAddTag->setObjectName(QStringLiteral("btnAddTag"));
        btnAddTag->setAutoDefault(false);

        gridLayout_2->addWidget(btnAddTag, 1, 0, 1, 1);

        btnAddSmartgroup = new QPushButton(widget);
        btnAddSmartgroup->setObjectName(QStringLiteral("btnAddSmartgroup"));
        btnAddSmartgroup->setAutoDefault(false);

        gridLayout_2->addWidget(btnAddSmartgroup, 2, 0, 1, 1);

        btnManageGroups = new QPushButton(widget);
        btnManageGroups->setObjectName(QStringLiteral("btnManageGroups"));
        btnManageGroups->setAutoDefault(false);

        gridLayout_2->addWidget(btnManageGroups, 3, 0, 1, 1);

        btnShare = new QPushButton(widget);
        btnShare->setObjectName(QStringLiteral("btnShare"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionSharing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnShare->setIcon(icon5);
        btnShare->setAutoDefault(false);

        gridLayout_2->addWidget(btnShare, 4, 0, 1, 1);

        mSplitter->addWidget(widget);
        widget_2 = new QWidget(mSplitter);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        symbolBtnsLayout = new QHBoxLayout();
        symbolBtnsLayout->setObjectName(QStringLiteral("symbolBtnsLayout"));
        btnAddItem = new QPushButton(widget_2);
        btnAddItem->setObjectName(QStringLiteral("btnAddItem"));
        btnAddItem->setIcon(icon2);

        symbolBtnsLayout->addWidget(btnAddItem);

        btnRemoveItem = new QPushButton(widget_2);
        btnRemoveItem->setObjectName(QStringLiteral("btnRemoveItem"));
        btnRemoveItem->setIcon(icon);

        symbolBtnsLayout->addWidget(btnRemoveItem);

        btnEditItem = new QPushButton(widget_2);
        btnEditItem->setObjectName(QStringLiteral("btnEditItem"));
        btnEditItem->setIcon(icon1);

        symbolBtnsLayout->addWidget(btnEditItem);

        mCopyToDefaultButton = new QPushButton(widget_2);
        mCopyToDefaultButton->setObjectName(QStringLiteral("mCopyToDefaultButton"));

        symbolBtnsLayout->addWidget(mCopyToDefaultButton);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        symbolBtnsLayout->addItem(horizontalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        mButtonIconView = new QToolButton(widget_2);
        buttonGroup = new QButtonGroup(QgsStyleManagerDialogBase);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(mButtonIconView);
        mButtonIconView->setObjectName(QStringLiteral("mButtonIconView"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionIconView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonIconView->setIcon(icon6);
        mButtonIconView->setCheckable(true);
        mButtonIconView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonIconView);

        mButtonListView = new QToolButton(widget_2);
        buttonGroup->addButton(mButtonListView);
        mButtonListView->setObjectName(QStringLiteral("mButtonListView"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonListView->setIcon(icon7);
        mButtonListView->setCheckable(true);
        mButtonListView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonListView);


        symbolBtnsLayout->addLayout(horizontalLayout_7);

        searchBox = new QgsFilterLineEdit(widget_2);
        searchBox->setObjectName(QStringLiteral("searchBox"));

        symbolBtnsLayout->addWidget(searchBox);


        gridLayout_3->addLayout(symbolBtnsLayout, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabItemType = new QTabWidget(widget_2);
        tabItemType->setObjectName(QStringLiteral("tabItemType"));
        tabItemType->setDocumentMode(true);
        tabAll = new QWidget();
        tabAll->setObjectName(QStringLiteral("tabAll"));
        tabItemType->addTab(tabAll, QString());
        tabMarker = new QWidget();
        tabMarker->setObjectName(QStringLiteral("tabMarker"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabMarker->sizePolicy().hasHeightForWidth());
        tabMarker->setSizePolicy(sizePolicy3);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/mIconPointLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabMarker, icon8, QString());
        tabLine = new QWidget();
        tabLine->setObjectName(QStringLiteral("tabLine"));
        sizePolicy3.setHeightForWidth(tabLine->sizePolicy().hasHeightForWidth());
        tabLine->setSizePolicy(sizePolicy3);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/mIconLineLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabLine, icon9, QString());
        tabFill = new QWidget();
        tabFill->setObjectName(QStringLiteral("tabFill"));
        sizePolicy3.setHeightForWidth(tabFill->sizePolicy().hasHeightForWidth());
        tabFill->setSizePolicy(sizePolicy3);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mIconPolygonLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabFill, icon10, QString());
        tabColorRamp = new QWidget();
        tabColorRamp->setObjectName(QStringLiteral("tabColorRamp"));
        sizePolicy3.setHeightForWidth(tabColorRamp->sizePolicy().hasHeightForWidth());
        tabColorRamp->setSizePolicy(sizePolicy3);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/styleicons/color.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabColorRamp, icon11, QString());
        tabTextFormat = new QWidget();
        tabTextFormat->setObjectName(QStringLiteral("tabTextFormat"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/propertyicons/labeltext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabTextFormat, icon12, QString());
        tabLabelSettings = new QWidget();
        tabLabelSettings->setObjectName(QStringLiteral("tabLabelSettings"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/labelingSingle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabLabelSettings, icon13, QString());
        tabLegendPatchShapes = new QWidget();
        tabLegendPatchShapes->setObjectName(QStringLiteral("tabLegendPatchShapes"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabLegendPatchShapes, icon14, QString());
        tab3DSymbols = new QWidget();
        tab3DSymbols->setObjectName(QStringLiteral("tab3DSymbols"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/3d.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tab3DSymbols, icon15, QString());

        verticalLayout->addWidget(tabItemType);

        mSymbolViewStackedWidget = new QStackedWidget(widget_2);
        mSymbolViewStackedWidget->setObjectName(QStringLiteral("mSymbolViewStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listItems = new QListView(page);
        listItems->setObjectName(QStringLiteral("listItems"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(2);
        sizePolicy4.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy4);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setIconSize(QSize(77, 70));
        listItems->setTextElideMode(Qt::ElideNone);
        listItems->setFlow(QListView::LeftToRight);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setViewMode(QListView::IconMode);
        listItems->setUniformItemSizes(false);
        listItems->setWordWrap(true);

        verticalLayout_2->addWidget(listItems);

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

        verticalLayout->addWidget(mSymbolViewStackedWidget);

        verticalLayout->setStretch(1, 1);

        gridLayout_3->addLayout(verticalLayout, 3, 0, 1, 1);

        mSplitter->addWidget(widget_2);

        mVerticalLayout->addWidget(mSplitter);

        buttonBox = new QDialogButtonBox(QgsStyleManagerDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);
        buttonBox->setCenterButtons(false);

        mVerticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(groupTree, btnAddTag);
        QWidget::setTabOrder(btnAddTag, btnAddSmartgroup);
        QWidget::setTabOrder(btnAddSmartgroup, btnManageGroups);
        QWidget::setTabOrder(btnManageGroups, btnShare);
        QWidget::setTabOrder(btnShare, tabItemType);
        QWidget::setTabOrder(tabItemType, listItems);
        QWidget::setTabOrder(listItems, mSymbolTreeView);
        QWidget::setTabOrder(mSymbolTreeView, btnAddItem);
        QWidget::setTabOrder(btnAddItem, btnRemoveItem);
        QWidget::setTabOrder(btnRemoveItem, btnEditItem);
        QWidget::setTabOrder(btnEditItem, mCopyToDefaultButton);
        QWidget::setTabOrder(mCopyToDefaultButton, mButtonIconView);
        QWidget::setTabOrder(mButtonIconView, mButtonListView);
        QWidget::setTabOrder(mButtonListView, searchBox);

        retranslateUi(QgsStyleManagerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleManagerDialogBase, SLOT(reject()));
        QObject::connect(btnAddTag, SIGNAL(clicked()), actnAddTag, SLOT(trigger()));
        QObject::connect(btnAddSmartgroup, SIGNAL(clicked()), actnAddSmartgroup, SLOT(trigger()));

        tabItemType->setCurrentIndex(0);
        mSymbolViewStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsStyleManagerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleManagerDialogBase)
    {
        QgsStyleManagerDialogBase->setWindowTitle(QApplication::translate("QgsStyleManagerDialogBase", "Style Manager", Q_NULLPTR));
        actnRemoveItem->setText(QApplication::translate("QgsStyleManagerDialogBase", "Remove Item(s)\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnRemoveItem->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Remove Item(s)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnEditItem->setText(QApplication::translate("QgsStyleManagerDialogBase", "Edit Item\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnEditItem->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Edit Item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnAddFavorite->setText(QApplication::translate("QgsStyleManagerDialogBase", "Add to Favorites", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnAddFavorite->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Add to Favorites", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnRemoveFavorite->setText(QApplication::translate("QgsStyleManagerDialogBase", "Remove from Favorites", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnRemoveFavorite->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Remove from Favorites", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnDetag->setText(QApplication::translate("QgsStyleManagerDialogBase", "Clear Tags", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnDetag->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Clear Tags", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnEditSmartGroup->setText(QApplication::translate("QgsStyleManagerDialogBase", "Edit Smart Group\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnEditSmartGroup->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Edit Smart Group", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnAddTag->setText(QApplication::translate("QgsStyleManagerDialogBase", "Add Tag\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnAddTag->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Add Tag", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnAddSmartgroup->setText(QApplication::translate("QgsStyleManagerDialogBase", "Add Smart Group\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnAddSmartgroup->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Add Smart Group", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnRemoveGroup->setText(QApplication::translate("QgsStyleManagerDialogBase", "Remove", Q_NULLPTR));
        actnTagSymbols->setText(QApplication::translate("QgsStyleManagerDialogBase", "Attach Selected Tag to Symbols", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnTagSymbols->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Attach Selected Tag to Symbols", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnFinishTagging->setText(QApplication::translate("QgsStyleManagerDialogBase", "Finish Tagging", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnFinishTagging->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Finish Tagging", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnExportAsPNG->setText(QApplication::translate("QgsStyleManagerDialogBase", "Export Selected Symbol(s) as PNG\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnExportAsPNG->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Export Selected Symbol(s) as PNG", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actnExportAsSVG->setText(QApplication::translate("QgsStyleManagerDialogBase", "Export Selected Symbol(s) as SVG\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actnExportAsSVG->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Export Selected Symbol(s) as SVG", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddTag->setText(QApplication::translate("QgsStyleManagerDialogBase", "Add Tag\342\200\246", Q_NULLPTR));
        btnAddSmartgroup->setText(QApplication::translate("QgsStyleManagerDialogBase", "Add Smart Group\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnManageGroups->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Modify selected tag or smart group", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnManageGroups->setText(QApplication::translate("QgsStyleManagerDialogBase", "Modify Group", Q_NULLPTR));
        btnShare->setText(QApplication::translate("QgsStyleManagerDialogBase", "Import / Export", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddItem->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Add item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddItem->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveItem->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Remove item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveItem->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditItem->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Edit item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditItem->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCopyToDefaultButton->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Copies the selected items to the default style library", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCopyToDefaultButton->setText(QApplication::translate("QgsStyleManagerDialogBase", "Copy to Default Style\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonIconView->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "Icon View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonIconView->setText(QApplication::translate("QgsStyleManagerDialogBase", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonListView->setToolTip(QApplication::translate("QgsStyleManagerDialogBase", "List View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonListView->setText(QApplication::translate("QgsStyleManagerDialogBase", "PushButton", Q_NULLPTR));
        searchBox->setText(QString());
        tabItemType->setTabText(tabItemType->indexOf(tabAll), QApplication::translate("QgsStyleManagerDialogBase", "All", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabMarker), QApplication::translate("QgsStyleManagerDialogBase", "Marker", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabLine), QApplication::translate("QgsStyleManagerDialogBase", "Line", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabFill), QApplication::translate("QgsStyleManagerDialogBase", "Fill", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabColorRamp), QApplication::translate("QgsStyleManagerDialogBase", "Color Ramp", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabTextFormat), QApplication::translate("QgsStyleManagerDialogBase", "Text Format", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabLabelSettings), QApplication::translate("QgsStyleManagerDialogBase", "Label Settings", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tabLegendPatchShapes), QApplication::translate("QgsStyleManagerDialogBase", "Legend Patch Shapes", Q_NULLPTR));
        tabItemType->setTabText(tabItemType->indexOf(tab3DSymbols), QApplication::translate("QgsStyleManagerDialogBase", "3D Symbols", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleManagerDialogBase: public Ui_QgsStyleManagerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEMANAGERDIALOGBASE_H
