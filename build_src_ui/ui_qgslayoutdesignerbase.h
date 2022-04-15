/********************************************************************************
** Form generated from reading UI file 'qgslayoutdesignerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTDESIGNERBASE_H
#define UI_QGSLAYOUTDESIGNERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutDesignerBase
{
public:
    QAction *mActionClose;
    QAction *mActionPan;
    QAction *mActionZoomTool;
    QAction *mActionSelectMoveItem;
    QAction *mActionZoomAll;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionZoomActual;
    QAction *mActionZoomToWidth;
    QAction *mActionShowRulers;
    QAction *mActionToggleFullScreen;
    QAction *mActionAddPages;
    QAction *mActionShowGrid;
    QAction *mActionSnapGrid;
    QAction *mActionManageGuides;
    QAction *mActionShowGuides;
    QAction *mActionSnapGuides;
    QAction *mActionClearGuides;
    QAction *mActionLayoutProperties;
    QAction *mActionShowBoxes;
    QAction *mActionSmartGuides;
    QAction *mActionDeselectAll;
    QAction *mActionSelectAll;
    QAction *mActionInvertSelection;
    QAction *mActionSelectNextBelow;
    QAction *mActionSelectNextAbove;
    QAction *mActionLockItems;
    QAction *mActionUnlockAll;
    QAction *mActionHidePanels;
    QAction *mActionRaiseItems;
    QAction *mActionLowerItems;
    QAction *mActionMoveItemsToTop;
    QAction *mActionMoveItemsToBottom;
    QAction *mActionAlignLeft;
    QAction *mActionAlignHCenter;
    QAction *mActionAlignRight;
    QAction *mActionAlignTop;
    QAction *mActionAlignVCenter;
    QAction *mActionAlignBottom;
    QAction *mActionDistributeLeft;
    QAction *mActionDistributeHCenter;
    QAction *mActionDistributeHSpace;
    QAction *mActionDistributeRight;
    QAction *mActionDistributeTop;
    QAction *mActionDistributeVCenter;
    QAction *mActionDistributeVSpace;
    QAction *mActionDistributeBottom;
    QAction *mActionResizeNarrowest;
    QAction *mActionResizeWidest;
    QAction *mActionResizeShortest;
    QAction *mActionResizeTallest;
    QAction *mActionDeleteSelection;
    QAction *mActionResizeToSquare;
    QAction *mActionPreviewModeOff;
    QAction *mActionPreviewModeGrayscale;
    QAction *mActionPreviewModeMono;
    QAction *mActionPreviewProtanope;
    QAction *mActionPreviewDeuteranope;
    QAction *mActionShowPage;
    QAction *mActionGroupItems;
    QAction *mActionUngroupItems;
    QAction *mActionRefreshView;
    QAction *mActionEditNodesItem;
    QAction *mActionMoveItemContent;
    QAction *mActionPasteInPlace;
    QAction *mActionSaveAsTemplate;
    QAction *mActionLoadFromTemplate;
    QAction *mActionDuplicateLayout;
    QAction *mActionSaveProject;
    QAction *mActionNewLayout;
    QAction *mActionLayoutManager;
    QAction *mActionRenameLayout;
    QAction *mActionRemoveLayout;
    QAction *mActionExportAsImage;
    QAction *mActionExportAsPDF;
    QAction *mActionExportAsSVG;
    QAction *mActionAtlasFirst;
    QAction *mActionAtlasPrev;
    QAction *mActionAtlasNext;
    QAction *mActionAtlasLast;
    QAction *mActionPrintAtlas;
    QAction *mActionExportAtlasAsImage;
    QAction *mActionExportAtlasAsSVG;
    QAction *mActionExportAtlasAsPDF;
    QAction *mActionAtlasSettings;
    QAction *mActionAtlasPreview;
    QAction *mActionExportReportAsImage;
    QAction *mActionExportReportAsSVG;
    QAction *mActionExportReportAsPDF;
    QAction *mActionReportSettings;
    QAction *mActionPrint;
    QAction *mActionPrintReport;
    QAction *mActionPageSetup;
    QAction *mActionOptions;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *mViewFrame;
    QStatusBar *mStatusBar;
    QToolBar *mLayoutToolbar;
    QToolBar *mToolsToolbar;
    QToolBar *mNavigationToolbar;
    QToolBar *mActionsToolbar;
    QToolBar *mAtlasToolbar;
    QToolBar *mReportToolbar;
    QMenuBar *mMenuBar;
    QMenu *mLayoutMenu;
    QMenu *mLayoutsMenu;
    QMenu *mItemMenu;
    QMenu *mMenuView;
    QMenu *mToolbarMenu;
    QMenu *mPanelsMenu;
    QMenu *menuPreview;
    QMenu *menuEdit;
    QMenu *menuLayout;
    QMenu *menuAlign_Items;
    QMenu *menu_Distribute_Items;
    QMenu *menuResize;
    QMenu *mMenuAtlas;
    QMenu *mMenuReport;
    QMenu *menuSettings;

    void setupUi(QMainWindow *QgsLayoutDesignerBase)
    {
        if (QgsLayoutDesignerBase->objectName().isEmpty())
            QgsLayoutDesignerBase->setObjectName(QStringLiteral("QgsLayoutDesignerBase"));
        QgsLayoutDesignerBase->resize(2180, 609);
        QgsLayoutDesignerBase->setMouseTracking(true);
        mActionClose = new QAction(QgsLayoutDesignerBase);
        mActionClose->setObjectName(QStringLiteral("mActionClose"));
        mActionPan = new QAction(QgsLayoutDesignerBase);
        mActionPan->setObjectName(QStringLiteral("mActionPan"));
        mActionPan->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionPan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPan->setIcon(icon);
        mActionZoomTool = new QAction(QgsLayoutDesignerBase);
        mActionZoomTool->setObjectName(QStringLiteral("mActionZoomTool"));
        mActionZoomTool->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionZoomToArea.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomTool->setIcon(icon1);
        mActionSelectMoveItem = new QAction(QgsLayoutDesignerBase);
        mActionSelectMoveItem->setObjectName(QStringLiteral("mActionSelectMoveItem"));
        mActionSelectMoveItem->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectMoveItem->setIcon(icon2);
        mActionZoomAll = new QAction(QgsLayoutDesignerBase);
        mActionZoomAll->setObjectName(QStringLiteral("mActionZoomAll"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomAll->setIcon(icon3);
        mActionZoomIn = new QAction(QgsLayoutDesignerBase);
        mActionZoomIn->setObjectName(QStringLiteral("mActionZoomIn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomIn->setIcon(icon4);
        mActionZoomOut = new QAction(QgsLayoutDesignerBase);
        mActionZoomOut->setObjectName(QStringLiteral("mActionZoomOut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomOut->setIcon(icon5);
        mActionZoomActual = new QAction(QgsLayoutDesignerBase);
        mActionZoomActual->setObjectName(QStringLiteral("mActionZoomActual"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionZoomActual.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomActual->setIcon(icon6);
        mActionZoomToWidth = new QAction(QgsLayoutDesignerBase);
        mActionZoomToWidth->setObjectName(QStringLiteral("mActionZoomToWidth"));
        mActionShowRulers = new QAction(QgsLayoutDesignerBase);
        mActionShowRulers->setObjectName(QStringLiteral("mActionShowRulers"));
        mActionShowRulers->setCheckable(true);
        mActionToggleFullScreen = new QAction(QgsLayoutDesignerBase);
        mActionToggleFullScreen->setObjectName(QStringLiteral("mActionToggleFullScreen"));
        mActionToggleFullScreen->setCheckable(true);
        mActionAddPages = new QAction(QgsLayoutDesignerBase);
        mActionAddPages->setObjectName(QStringLiteral("mActionAddPages"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionNewPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddPages->setIcon(icon7);
        mActionShowGrid = new QAction(QgsLayoutDesignerBase);
        mActionShowGrid->setObjectName(QStringLiteral("mActionShowGrid"));
        mActionShowGrid->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/vector_grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowGrid->setIcon(icon8);
        mActionSnapGrid = new QAction(QgsLayoutDesignerBase);
        mActionSnapGrid->setObjectName(QStringLiteral("mActionSnapGrid"));
        mActionSnapGrid->setCheckable(true);
        mActionManageGuides = new QAction(QgsLayoutDesignerBase);
        mActionManageGuides->setObjectName(QStringLiteral("mActionManageGuides"));
        mActionShowGuides = new QAction(QgsLayoutDesignerBase);
        mActionShowGuides->setObjectName(QStringLiteral("mActionShowGuides"));
        mActionShowGuides->setCheckable(true);
        mActionSnapGuides = new QAction(QgsLayoutDesignerBase);
        mActionSnapGuides->setObjectName(QStringLiteral("mActionSnapGuides"));
        mActionSnapGuides->setCheckable(true);
        mActionClearGuides = new QAction(QgsLayoutDesignerBase);
        mActionClearGuides->setObjectName(QStringLiteral("mActionClearGuides"));
        mActionLayoutProperties = new QAction(QgsLayoutDesignerBase);
        mActionLayoutProperties->setObjectName(QStringLiteral("mActionLayoutProperties"));
        mActionShowBoxes = new QAction(QgsLayoutDesignerBase);
        mActionShowBoxes->setObjectName(QStringLiteral("mActionShowBoxes"));
        mActionShowBoxes->setCheckable(true);
        mActionSmartGuides = new QAction(QgsLayoutDesignerBase);
        mActionSmartGuides->setObjectName(QStringLiteral("mActionSmartGuides"));
        mActionSmartGuides->setCheckable(true);
        mActionDeselectAll = new QAction(QgsLayoutDesignerBase);
        mActionDeselectAll->setObjectName(QStringLiteral("mActionDeselectAll"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeselectAll->setIcon(icon9);
        mActionSelectAll = new QAction(QgsLayoutDesignerBase);
        mActionSelectAll->setObjectName(QStringLiteral("mActionSelectAll"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon10);
        mActionInvertSelection = new QAction(QgsLayoutDesignerBase);
        mActionInvertSelection->setObjectName(QStringLiteral("mActionInvertSelection"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvertSelection->setIcon(icon11);
        mActionSelectNextBelow = new QAction(QgsLayoutDesignerBase);
        mActionSelectNextBelow->setObjectName(QStringLiteral("mActionSelectNextBelow"));
        mActionSelectNextAbove = new QAction(QgsLayoutDesignerBase);
        mActionSelectNextAbove->setObjectName(QStringLiteral("mActionSelectNextAbove"));
        mActionLockItems = new QAction(QgsLayoutDesignerBase);
        mActionLockItems->setObjectName(QStringLiteral("mActionLockItems"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/mActionLockItems.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLockItems->setIcon(icon12);
        mActionUnlockAll = new QAction(QgsLayoutDesignerBase);
        mActionUnlockAll->setObjectName(QStringLiteral("mActionUnlockAll"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/mActionUnlockAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUnlockAll->setIcon(icon13);
        mActionHidePanels = new QAction(QgsLayoutDesignerBase);
        mActionHidePanels->setObjectName(QStringLiteral("mActionHidePanels"));
        mActionHidePanels->setCheckable(true);
        mActionRaiseItems = new QAction(QgsLayoutDesignerBase);
        mActionRaiseItems->setObjectName(QStringLiteral("mActionRaiseItems"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/mActionRaiseItems.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRaiseItems->setIcon(icon14);
        mActionLowerItems = new QAction(QgsLayoutDesignerBase);
        mActionLowerItems->setObjectName(QStringLiteral("mActionLowerItems"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/mActionLowerItems.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLowerItems->setIcon(icon15);
        mActionMoveItemsToTop = new QAction(QgsLayoutDesignerBase);
        mActionMoveItemsToTop->setObjectName(QStringLiteral("mActionMoveItemsToTop"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/mActionMoveItemsToTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveItemsToTop->setIcon(icon16);
        mActionMoveItemsToBottom = new QAction(QgsLayoutDesignerBase);
        mActionMoveItemsToBottom->setObjectName(QStringLiteral("mActionMoveItemsToBottom"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/themes/default/mActionMoveItemsToBottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveItemsToBottom->setIcon(icon17);
        mActionAlignLeft = new QAction(QgsLayoutDesignerBase);
        mActionAlignLeft->setObjectName(QStringLiteral("mActionAlignLeft"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/themes/default/mActionAlignLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAlignLeft->setIcon(icon18);
        mActionAlignHCenter = new QAction(QgsLayoutDesignerBase);
        mActionAlignHCenter->setObjectName(QStringLiteral("mActionAlignHCenter"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/themes/default/mActionAlignHCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAlignHCenter->setIcon(icon19);
        mActionAlignRight = new QAction(QgsLayoutDesignerBase);
        mActionAlignRight->setObjectName(QStringLiteral("mActionAlignRight"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/images/themes/default/mActionAlignRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAlignRight->setIcon(icon20);
        mActionAlignTop = new QAction(QgsLayoutDesignerBase);
        mActionAlignTop->setObjectName(QStringLiteral("mActionAlignTop"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/images/themes/default/mActionAlignTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAlignTop->setIcon(icon21);
        mActionAlignVCenter = new QAction(QgsLayoutDesignerBase);
        mActionAlignVCenter->setObjectName(QStringLiteral("mActionAlignVCenter"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/images/themes/default/mActionAlignVCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAlignVCenter->setIcon(icon22);
        mActionAlignBottom = new QAction(QgsLayoutDesignerBase);
        mActionAlignBottom->setObjectName(QStringLiteral("mActionAlignBottom"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/images/themes/default/mActionAlignBottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAlignBottom->setIcon(icon23);
        mActionDistributeLeft = new QAction(QgsLayoutDesignerBase);
        mActionDistributeLeft->setObjectName(QStringLiteral("mActionDistributeLeft"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/images/themes/default/mActionDistributeLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeLeft->setIcon(icon24);
        mActionDistributeHCenter = new QAction(QgsLayoutDesignerBase);
        mActionDistributeHCenter->setObjectName(QStringLiteral("mActionDistributeHCenter"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/images/themes/default/mActionDistributeHCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeHCenter->setIcon(icon25);
        mActionDistributeHSpace = new QAction(QgsLayoutDesignerBase);
        mActionDistributeHSpace->setObjectName(QStringLiteral("mActionDistributeHSpace"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/images/themes/default/mActionDistributeHSpace.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeHSpace->setIcon(icon26);
        mActionDistributeRight = new QAction(QgsLayoutDesignerBase);
        mActionDistributeRight->setObjectName(QStringLiteral("mActionDistributeRight"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/images/themes/default/mActionDistributeRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeRight->setIcon(icon27);
        mActionDistributeTop = new QAction(QgsLayoutDesignerBase);
        mActionDistributeTop->setObjectName(QStringLiteral("mActionDistributeTop"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/images/themes/default/mActionDistributeTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeTop->setIcon(icon28);
        mActionDistributeVCenter = new QAction(QgsLayoutDesignerBase);
        mActionDistributeVCenter->setObjectName(QStringLiteral("mActionDistributeVCenter"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/images/themes/default/mActionDistributeVCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeVCenter->setIcon(icon29);
        mActionDistributeVSpace = new QAction(QgsLayoutDesignerBase);
        mActionDistributeVSpace->setObjectName(QStringLiteral("mActionDistributeVSpace"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/images/themes/default/mActionDistributeVSpace.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeVSpace->setIcon(icon30);
        mActionDistributeBottom = new QAction(QgsLayoutDesignerBase);
        mActionDistributeBottom->setObjectName(QStringLiteral("mActionDistributeBottom"));
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/images/themes/default/mActionDistributeBottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDistributeBottom->setIcon(icon31);
        mActionResizeNarrowest = new QAction(QgsLayoutDesignerBase);
        mActionResizeNarrowest->setObjectName(QStringLiteral("mActionResizeNarrowest"));
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/images/themes/default/mActionResizeNarrowest.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionResizeNarrowest->setIcon(icon32);
        mActionResizeWidest = new QAction(QgsLayoutDesignerBase);
        mActionResizeWidest->setObjectName(QStringLiteral("mActionResizeWidest"));
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/images/themes/default/mActionResizeWidest.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionResizeWidest->setIcon(icon33);
        mActionResizeShortest = new QAction(QgsLayoutDesignerBase);
        mActionResizeShortest->setObjectName(QStringLiteral("mActionResizeShortest"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/images/themes/default/mActionResizeShortest.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionResizeShortest->setIcon(icon34);
        mActionResizeTallest = new QAction(QgsLayoutDesignerBase);
        mActionResizeTallest->setObjectName(QStringLiteral("mActionResizeTallest"));
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/images/themes/default/mActionResizeTallest.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionResizeTallest->setIcon(icon35);
        mActionDeleteSelection = new QAction(QgsLayoutDesignerBase);
        mActionDeleteSelection->setObjectName(QStringLiteral("mActionDeleteSelection"));
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteSelection->setIcon(icon36);
#ifndef QT_NO_SHORTCUT
        mActionDeleteSelection->setShortcut(QStringLiteral("Del"));
#endif // QT_NO_SHORTCUT
        mActionResizeToSquare = new QAction(QgsLayoutDesignerBase);
        mActionResizeToSquare->setObjectName(QStringLiteral("mActionResizeToSquare"));
        QIcon icon37;
        icon37.addFile(QStringLiteral(":/images/themes/default/mActionResizeSquare.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionResizeToSquare->setIcon(icon37);
        mActionPreviewModeOff = new QAction(QgsLayoutDesignerBase);
        mActionPreviewModeOff->setObjectName(QStringLiteral("mActionPreviewModeOff"));
        mActionPreviewModeOff->setCheckable(true);
        mActionPreviewModeGrayscale = new QAction(QgsLayoutDesignerBase);
        mActionPreviewModeGrayscale->setObjectName(QStringLiteral("mActionPreviewModeGrayscale"));
        mActionPreviewModeGrayscale->setCheckable(true);
        mActionPreviewModeMono = new QAction(QgsLayoutDesignerBase);
        mActionPreviewModeMono->setObjectName(QStringLiteral("mActionPreviewModeMono"));
        mActionPreviewModeMono->setCheckable(true);
        mActionPreviewProtanope = new QAction(QgsLayoutDesignerBase);
        mActionPreviewProtanope->setObjectName(QStringLiteral("mActionPreviewProtanope"));
        mActionPreviewProtanope->setCheckable(true);
        mActionPreviewDeuteranope = new QAction(QgsLayoutDesignerBase);
        mActionPreviewDeuteranope->setObjectName(QStringLiteral("mActionPreviewDeuteranope"));
        mActionPreviewDeuteranope->setCheckable(true);
        mActionShowPage = new QAction(QgsLayoutDesignerBase);
        mActionShowPage->setObjectName(QStringLiteral("mActionShowPage"));
        mActionShowPage->setCheckable(true);
        mActionGroupItems = new QAction(QgsLayoutDesignerBase);
        mActionGroupItems->setObjectName(QStringLiteral("mActionGroupItems"));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/images/themes/default/mActionGroupItems.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionGroupItems->setIcon(icon38);
        mActionUngroupItems = new QAction(QgsLayoutDesignerBase);
        mActionUngroupItems->setObjectName(QStringLiteral("mActionUngroupItems"));
        QIcon icon39;
        icon39.addFile(QStringLiteral(":/images/themes/default/mActionUngroupItems.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUngroupItems->setIcon(icon39);
        mActionRefreshView = new QAction(QgsLayoutDesignerBase);
        mActionRefreshView->setObjectName(QStringLiteral("mActionRefreshView"));
        QIcon icon40;
        icon40.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefreshView->setIcon(icon40);
        mActionEditNodesItem = new QAction(QgsLayoutDesignerBase);
        mActionEditNodesItem->setObjectName(QStringLiteral("mActionEditNodesItem"));
        mActionEditNodesItem->setCheckable(true);
        QIcon icon41;
        icon41.addFile(QStringLiteral(":/images/themes/default/mActionEditNodesItem.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditNodesItem->setIcon(icon41);
        mActionMoveItemContent = new QAction(QgsLayoutDesignerBase);
        mActionMoveItemContent->setObjectName(QStringLiteral("mActionMoveItemContent"));
        mActionMoveItemContent->setCheckable(true);
        QIcon icon42;
        icon42.addFile(QStringLiteral(":/images/themes/default/mActionMoveItemContent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveItemContent->setIcon(icon42);
        mActionPasteInPlace = new QAction(QgsLayoutDesignerBase);
        mActionPasteInPlace->setObjectName(QStringLiteral("mActionPasteInPlace"));
        mActionSaveAsTemplate = new QAction(QgsLayoutDesignerBase);
        mActionSaveAsTemplate->setObjectName(QStringLiteral("mActionSaveAsTemplate"));
        QIcon icon43;
        icon43.addFile(QStringLiteral(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveAsTemplate->setIcon(icon43);
        mActionLoadFromTemplate = new QAction(QgsLayoutDesignerBase);
        mActionLoadFromTemplate->setObjectName(QStringLiteral("mActionLoadFromTemplate"));
        QIcon icon44;
        icon44.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLoadFromTemplate->setIcon(icon44);
        mActionDuplicateLayout = new QAction(QgsLayoutDesignerBase);
        mActionDuplicateLayout->setObjectName(QStringLiteral("mActionDuplicateLayout"));
        QIcon icon45;
        icon45.addFile(QStringLiteral(":/images/themes/default/mActionDuplicateLayout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDuplicateLayout->setIcon(icon45);
        mActionSaveProject = new QAction(QgsLayoutDesignerBase);
        mActionSaveProject->setObjectName(QStringLiteral("mActionSaveProject"));
        QIcon icon46;
        icon46.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveProject->setIcon(icon46);
        mActionNewLayout = new QAction(QgsLayoutDesignerBase);
        mActionNewLayout->setObjectName(QStringLiteral("mActionNewLayout"));
        QIcon icon47;
        icon47.addFile(QStringLiteral(":/images/themes/default/mActionNewLayout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewLayout->setIcon(icon47);
        mActionLayoutManager = new QAction(QgsLayoutDesignerBase);
        mActionLayoutManager->setObjectName(QStringLiteral("mActionLayoutManager"));
        QIcon icon48;
        icon48.addFile(QStringLiteral(":/images/themes/default/mActionLayoutManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLayoutManager->setIcon(icon48);
        mActionRenameLayout = new QAction(QgsLayoutDesignerBase);
        mActionRenameLayout->setObjectName(QStringLiteral("mActionRenameLayout"));
        mActionRemoveLayout = new QAction(QgsLayoutDesignerBase);
        mActionRemoveLayout->setObjectName(QStringLiteral("mActionRemoveLayout"));
        mActionRemoveLayout->setIcon(icon36);
        mActionExportAsImage = new QAction(QgsLayoutDesignerBase);
        mActionExportAsImage->setObjectName(QStringLiteral("mActionExportAsImage"));
        QIcon icon49;
        icon49.addFile(QStringLiteral(":/images/themes/default/mActionSaveMapAsImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsImage->setIcon(icon49);
        mActionExportAsPDF = new QAction(QgsLayoutDesignerBase);
        mActionExportAsPDF->setObjectName(QStringLiteral("mActionExportAsPDF"));
        QIcon icon50;
        icon50.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsPDF.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsPDF->setIcon(icon50);
        mActionExportAsSVG = new QAction(QgsLayoutDesignerBase);
        mActionExportAsSVG->setObjectName(QStringLiteral("mActionExportAsSVG"));
        QIcon icon51;
        icon51.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsSVG.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsSVG->setIcon(icon51);
        mActionAtlasFirst = new QAction(QgsLayoutDesignerBase);
        mActionAtlasFirst->setObjectName(QStringLiteral("mActionAtlasFirst"));
        QIcon icon52;
        icon52.addFile(QStringLiteral(":/images/themes/default/mActionAtlasFirst.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasFirst->setIcon(icon52);
        mActionAtlasPrev = new QAction(QgsLayoutDesignerBase);
        mActionAtlasPrev->setObjectName(QStringLiteral("mActionAtlasPrev"));
        QIcon icon53;
        icon53.addFile(QStringLiteral(":/images/themes/default/mActionAtlasPrev.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasPrev->setIcon(icon53);
        mActionAtlasNext = new QAction(QgsLayoutDesignerBase);
        mActionAtlasNext->setObjectName(QStringLiteral("mActionAtlasNext"));
        QIcon icon54;
        icon54.addFile(QStringLiteral(":/images/themes/default/mActionAtlasNext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasNext->setIcon(icon54);
        mActionAtlasLast = new QAction(QgsLayoutDesignerBase);
        mActionAtlasLast->setObjectName(QStringLiteral("mActionAtlasLast"));
        QIcon icon55;
        icon55.addFile(QStringLiteral(":/images/themes/default/mActionAtlasLast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasLast->setIcon(icon55);
        mActionPrintAtlas = new QAction(QgsLayoutDesignerBase);
        mActionPrintAtlas->setObjectName(QStringLiteral("mActionPrintAtlas"));
        QIcon icon56;
        icon56.addFile(QStringLiteral(":/images/themes/default/mActionFilePrint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPrintAtlas->setIcon(icon56);
        mActionExportAtlasAsImage = new QAction(QgsLayoutDesignerBase);
        mActionExportAtlasAsImage->setObjectName(QStringLiteral("mActionExportAtlasAsImage"));
        mActionExportAtlasAsImage->setIcon(icon49);
        mActionExportAtlasAsSVG = new QAction(QgsLayoutDesignerBase);
        mActionExportAtlasAsSVG->setObjectName(QStringLiteral("mActionExportAtlasAsSVG"));
        mActionExportAtlasAsSVG->setIcon(icon51);
        mActionExportAtlasAsPDF = new QAction(QgsLayoutDesignerBase);
        mActionExportAtlasAsPDF->setObjectName(QStringLiteral("mActionExportAtlasAsPDF"));
        mActionExportAtlasAsPDF->setIcon(icon50);
        mActionAtlasSettings = new QAction(QgsLayoutDesignerBase);
        mActionAtlasSettings->setObjectName(QStringLiteral("mActionAtlasSettings"));
        mActionAtlasSettings->setCheckable(true);
        QIcon icon57;
        icon57.addFile(QStringLiteral(":/images/themes/default/mActionAtlasSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasSettings->setIcon(icon57);
        mActionAtlasPreview = new QAction(QgsLayoutDesignerBase);
        mActionAtlasPreview->setObjectName(QStringLiteral("mActionAtlasPreview"));
        mActionAtlasPreview->setCheckable(true);
        QIcon icon58;
        icon58.addFile(QStringLiteral(":/images/themes/default/mIconAtlas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasPreview->setIcon(icon58);
        mActionExportReportAsImage = new QAction(QgsLayoutDesignerBase);
        mActionExportReportAsImage->setObjectName(QStringLiteral("mActionExportReportAsImage"));
        mActionExportReportAsImage->setIcon(icon49);
        mActionExportReportAsSVG = new QAction(QgsLayoutDesignerBase);
        mActionExportReportAsSVG->setObjectName(QStringLiteral("mActionExportReportAsSVG"));
        mActionExportReportAsSVG->setIcon(icon51);
        mActionExportReportAsPDF = new QAction(QgsLayoutDesignerBase);
        mActionExportReportAsPDF->setObjectName(QStringLiteral("mActionExportReportAsPDF"));
        mActionExportReportAsPDF->setIcon(icon50);
        mActionReportSettings = new QAction(QgsLayoutDesignerBase);
        mActionReportSettings->setObjectName(QStringLiteral("mActionReportSettings"));
        mActionReportSettings->setCheckable(true);
        mActionReportSettings->setIcon(icon57);
        mActionPrint = new QAction(QgsLayoutDesignerBase);
        mActionPrint->setObjectName(QStringLiteral("mActionPrint"));
        mActionPrint->setCheckable(false);
        mActionPrint->setIcon(icon56);
        mActionPrintReport = new QAction(QgsLayoutDesignerBase);
        mActionPrintReport->setObjectName(QStringLiteral("mActionPrintReport"));
        mActionPrintReport->setIcon(icon56);
        mActionPageSetup = new QAction(QgsLayoutDesignerBase);
        mActionPageSetup->setObjectName(QStringLiteral("mActionPageSetup"));
        mActionOptions = new QAction(QgsLayoutDesignerBase);
        mActionOptions->setObjectName(QStringLiteral("mActionOptions"));
        QIcon icon59;
        icon59.addFile(QStringLiteral(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOptions->setIcon(icon59);
        mActionOptions->setMenuRole(QAction::PreferencesRole);
        centralwidget = new QWidget(QgsLayoutDesignerBase);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMouseTracking(true);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mViewFrame = new QFrame(centralwidget);
        mViewFrame->setObjectName(QStringLiteral("mViewFrame"));
        mViewFrame->setMouseTracking(true);
        mViewFrame->setFrameShape(QFrame::StyledPanel);
        mViewFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(mViewFrame, 0, 0, 1, 1);

        QgsLayoutDesignerBase->setCentralWidget(centralwidget);
        mStatusBar = new QStatusBar(QgsLayoutDesignerBase);
        mStatusBar->setObjectName(QStringLiteral("mStatusBar"));
        QgsLayoutDesignerBase->setStatusBar(mStatusBar);
        mLayoutToolbar = new QToolBar(QgsLayoutDesignerBase);
        mLayoutToolbar->setObjectName(QStringLiteral("mLayoutToolbar"));
        QgsLayoutDesignerBase->addToolBar(Qt::TopToolBarArea, mLayoutToolbar);
        mToolsToolbar = new QToolBar(QgsLayoutDesignerBase);
        mToolsToolbar->setObjectName(QStringLiteral("mToolsToolbar"));
        QgsLayoutDesignerBase->addToolBar(Qt::TopToolBarArea, mToolsToolbar);
        QgsLayoutDesignerBase->insertToolBarBreak(mToolsToolbar);
        mNavigationToolbar = new QToolBar(QgsLayoutDesignerBase);
        mNavigationToolbar->setObjectName(QStringLiteral("mNavigationToolbar"));
        QgsLayoutDesignerBase->addToolBar(Qt::TopToolBarArea, mNavigationToolbar);
        mActionsToolbar = new QToolBar(QgsLayoutDesignerBase);
        mActionsToolbar->setObjectName(QStringLiteral("mActionsToolbar"));
        QgsLayoutDesignerBase->addToolBar(Qt::TopToolBarArea, mActionsToolbar);
        mAtlasToolbar = new QToolBar(QgsLayoutDesignerBase);
        mAtlasToolbar->setObjectName(QStringLiteral("mAtlasToolbar"));
        QgsLayoutDesignerBase->addToolBar(Qt::TopToolBarArea, mAtlasToolbar);
        mReportToolbar = new QToolBar(QgsLayoutDesignerBase);
        mReportToolbar->setObjectName(QStringLiteral("mReportToolbar"));
        QgsLayoutDesignerBase->addToolBar(Qt::TopToolBarArea, mReportToolbar);
        mMenuBar = new QMenuBar(QgsLayoutDesignerBase);
        mMenuBar->setObjectName(QStringLiteral("mMenuBar"));
        mMenuBar->setGeometry(QRect(0, 0, 2180, 25));
        mLayoutMenu = new QMenu(mMenuBar);
        mLayoutMenu->setObjectName(QStringLiteral("mLayoutMenu"));
        mLayoutsMenu = new QMenu(mLayoutMenu);
        mLayoutsMenu->setObjectName(QStringLiteral("mLayoutsMenu"));
        mItemMenu = new QMenu(mMenuBar);
        mItemMenu->setObjectName(QStringLiteral("mItemMenu"));
        mMenuView = new QMenu(mMenuBar);
        mMenuView->setObjectName(QStringLiteral("mMenuView"));
        mToolbarMenu = new QMenu(mMenuView);
        mToolbarMenu->setObjectName(QStringLiteral("mToolbarMenu"));
        mPanelsMenu = new QMenu(mMenuView);
        mPanelsMenu->setObjectName(QStringLiteral("mPanelsMenu"));
        menuPreview = new QMenu(mMenuView);
        menuPreview->setObjectName(QStringLiteral("menuPreview"));
        menuEdit = new QMenu(mMenuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuLayout = new QMenu(mMenuBar);
        menuLayout->setObjectName(QStringLiteral("menuLayout"));
        menuAlign_Items = new QMenu(menuLayout);
        menuAlign_Items->setObjectName(QStringLiteral("menuAlign_Items"));
        menu_Distribute_Items = new QMenu(menuLayout);
        menu_Distribute_Items->setObjectName(QStringLiteral("menu_Distribute_Items"));
        menuResize = new QMenu(menuLayout);
        menuResize->setObjectName(QStringLiteral("menuResize"));
        mMenuAtlas = new QMenu(mMenuBar);
        mMenuAtlas->setObjectName(QStringLiteral("mMenuAtlas"));
        mMenuReport = new QMenu(mMenuBar);
        mMenuReport->setObjectName(QStringLiteral("mMenuReport"));
        menuSettings = new QMenu(mMenuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        QgsLayoutDesignerBase->setMenuBar(mMenuBar);

        mLayoutToolbar->addAction(mActionSaveProject);
        mLayoutToolbar->addSeparator();
        mLayoutToolbar->addAction(mActionNewLayout);
        mLayoutToolbar->addAction(mActionDuplicateLayout);
        mLayoutToolbar->addAction(mActionLayoutManager);
        mLayoutToolbar->addAction(mActionLoadFromTemplate);
        mLayoutToolbar->addAction(mActionSaveAsTemplate);
        mLayoutToolbar->addSeparator();
        mLayoutToolbar->addAction(mActionAddPages);
        mLayoutToolbar->addSeparator();
        mLayoutToolbar->addAction(mActionPrint);
        mLayoutToolbar->addAction(mActionExportAsImage);
        mLayoutToolbar->addAction(mActionExportAsSVG);
        mLayoutToolbar->addAction(mActionExportAsPDF);
        mToolsToolbar->addAction(mActionPan);
        mToolsToolbar->addAction(mActionZoomTool);
        mToolsToolbar->addAction(mActionSelectMoveItem);
        mToolsToolbar->addAction(mActionMoveItemContent);
        mToolsToolbar->addAction(mActionEditNodesItem);
        mNavigationToolbar->addAction(mActionZoomIn);
        mNavigationToolbar->addAction(mActionZoomOut);
        mNavigationToolbar->addAction(mActionZoomActual);
        mNavigationToolbar->addAction(mActionZoomAll);
        mNavigationToolbar->addAction(mActionRefreshView);
        mActionsToolbar->addAction(mActionLockItems);
        mActionsToolbar->addAction(mActionUnlockAll);
        mActionsToolbar->addAction(mActionGroupItems);
        mActionsToolbar->addAction(mActionUngroupItems);
        mAtlasToolbar->addAction(mActionAtlasPreview);
        mAtlasToolbar->addAction(mActionAtlasFirst);
        mAtlasToolbar->addAction(mActionAtlasPrev);
        mAtlasToolbar->addAction(mActionAtlasNext);
        mAtlasToolbar->addAction(mActionAtlasLast);
        mAtlasToolbar->addAction(mActionPrintAtlas);
        mAtlasToolbar->addAction(mActionAtlasSettings);
        mReportToolbar->addAction(mActionPrintReport);
        mReportToolbar->addAction(mActionExportReportAsImage);
        mReportToolbar->addAction(mActionExportReportAsSVG);
        mReportToolbar->addAction(mActionExportReportAsPDF);
        mReportToolbar->addAction(mActionReportSettings);
        mMenuBar->addAction(mLayoutMenu->menuAction());
        mMenuBar->addAction(menuEdit->menuAction());
        mMenuBar->addAction(mMenuView->menuAction());
        mMenuBar->addAction(menuLayout->menuAction());
        mMenuBar->addAction(mItemMenu->menuAction());
        mMenuBar->addAction(mMenuAtlas->menuAction());
        mMenuBar->addAction(mMenuReport->menuAction());
        mMenuBar->addAction(menuSettings->menuAction());
        mLayoutMenu->addAction(mActionSaveProject);
        mLayoutMenu->addSeparator();
        mLayoutMenu->addAction(mActionNewLayout);
        mLayoutMenu->addAction(mActionDuplicateLayout);
        mLayoutMenu->addAction(mActionRemoveLayout);
        mLayoutMenu->addAction(mActionLayoutManager);
        mLayoutMenu->addAction(mLayoutsMenu->menuAction());
        mLayoutMenu->addSeparator();
        mLayoutMenu->addAction(mActionLayoutProperties);
        mLayoutMenu->addAction(mActionRenameLayout);
        mLayoutMenu->addAction(mActionAddPages);
        mLayoutMenu->addSeparator();
        mLayoutMenu->addAction(mActionLoadFromTemplate);
        mLayoutMenu->addAction(mActionSaveAsTemplate);
        mLayoutMenu->addSeparator();
        mLayoutMenu->addAction(mActionExportAsImage);
        mLayoutMenu->addAction(mActionExportAsSVG);
        mLayoutMenu->addAction(mActionExportAsPDF);
        mLayoutMenu->addSeparator();
        mLayoutMenu->addAction(mActionPageSetup);
        mLayoutMenu->addAction(mActionPrint);
        mLayoutMenu->addSeparator();
        mLayoutMenu->addAction(mActionClose);
        mMenuView->addAction(mActionRefreshView);
        mMenuView->addAction(menuPreview->menuAction());
        mMenuView->addSeparator();
        mMenuView->addAction(mActionZoomIn);
        mMenuView->addAction(mActionZoomOut);
        mMenuView->addAction(mActionZoomActual);
        mMenuView->addAction(mActionZoomAll);
        mMenuView->addAction(mActionZoomToWidth);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowGrid);
        mMenuView->addAction(mActionSnapGrid);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowGuides);
        mMenuView->addAction(mActionSnapGuides);
        mMenuView->addAction(mActionSmartGuides);
        mMenuView->addAction(mActionManageGuides);
        mMenuView->addAction(mActionClearGuides);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowRulers);
        mMenuView->addAction(mActionShowBoxes);
        mMenuView->addAction(mActionShowPage);
        mMenuView->addSeparator();
        mMenuView->addAction(mToolbarMenu->menuAction());
        mMenuView->addAction(mPanelsMenu->menuAction());
        mMenuView->addAction(mActionToggleFullScreen);
        mMenuView->addAction(mActionHidePanels);
        menuPreview->addAction(mActionPreviewModeOff);
        menuPreview->addAction(mActionPreviewModeGrayscale);
        menuPreview->addAction(mActionPreviewModeMono);
        menuPreview->addAction(mActionPreviewProtanope);
        menuPreview->addAction(mActionPreviewDeuteranope);
        menuEdit->addSeparator();
        menuEdit->addAction(mActionDeleteSelection);
        menuEdit->addSeparator();
        menuEdit->addAction(mActionPasteInPlace);
        menuEdit->addSeparator();
        menuEdit->addAction(mActionSelectAll);
        menuEdit->addAction(mActionDeselectAll);
        menuEdit->addAction(mActionInvertSelection);
        menuEdit->addAction(mActionSelectNextBelow);
        menuEdit->addAction(mActionSelectNextAbove);
        menuEdit->addSeparator();
        menuEdit->addAction(mActionPan);
        menuEdit->addAction(mActionZoomTool);
        menuEdit->addAction(mActionSelectMoveItem);
        menuEdit->addAction(mActionMoveItemContent);
        menuEdit->addAction(mActionEditNodesItem);
        menuLayout->addAction(mActionGroupItems);
        menuLayout->addAction(mActionUngroupItems);
        menuLayout->addSeparator();
        menuLayout->addAction(mActionRaiseItems);
        menuLayout->addAction(mActionLowerItems);
        menuLayout->addAction(mActionMoveItemsToTop);
        menuLayout->addAction(mActionMoveItemsToBottom);
        menuLayout->addSeparator();
        menuLayout->addAction(mActionLockItems);
        menuLayout->addAction(mActionUnlockAll);
        menuLayout->addSeparator();
        menuLayout->addAction(menuAlign_Items->menuAction());
        menuLayout->addAction(menu_Distribute_Items->menuAction());
        menuLayout->addAction(menuResize->menuAction());
        menuAlign_Items->addAction(mActionAlignLeft);
        menuAlign_Items->addAction(mActionAlignHCenter);
        menuAlign_Items->addAction(mActionAlignRight);
        menuAlign_Items->addSeparator();
        menuAlign_Items->addAction(mActionAlignBottom);
        menuAlign_Items->addAction(mActionAlignVCenter);
        menuAlign_Items->addAction(mActionAlignTop);
        menu_Distribute_Items->addAction(mActionDistributeLeft);
        menu_Distribute_Items->addAction(mActionDistributeHCenter);
        menu_Distribute_Items->addAction(mActionDistributeHSpace);
        menu_Distribute_Items->addAction(mActionDistributeRight);
        menu_Distribute_Items->addSeparator();
        menu_Distribute_Items->addAction(mActionDistributeTop);
        menu_Distribute_Items->addAction(mActionDistributeVCenter);
        menu_Distribute_Items->addAction(mActionDistributeVSpace);
        menu_Distribute_Items->addAction(mActionDistributeBottom);
        menuResize->addAction(mActionResizeNarrowest);
        menuResize->addAction(mActionResizeWidest);
        menuResize->addSeparator();
        menuResize->addAction(mActionResizeShortest);
        menuResize->addAction(mActionResizeTallest);
        menuResize->addSeparator();
        menuResize->addAction(mActionResizeToSquare);
        mMenuAtlas->addAction(mActionAtlasPreview);
        mMenuAtlas->addSeparator();
        mMenuAtlas->addAction(mActionAtlasFirst);
        mMenuAtlas->addAction(mActionAtlasPrev);
        mMenuAtlas->addAction(mActionAtlasNext);
        mMenuAtlas->addAction(mActionAtlasLast);
        mMenuAtlas->addSeparator();
        mMenuAtlas->addAction(mActionPrintAtlas);
        mMenuAtlas->addAction(mActionExportAtlasAsImage);
        mMenuAtlas->addAction(mActionExportAtlasAsSVG);
        mMenuAtlas->addAction(mActionExportAtlasAsPDF);
        mMenuAtlas->addSeparator();
        mMenuAtlas->addAction(mActionAtlasSettings);
        mMenuReport->addAction(mActionPrintReport);
        mMenuReport->addAction(mActionExportReportAsImage);
        mMenuReport->addAction(mActionExportReportAsSVG);
        mMenuReport->addAction(mActionExportReportAsPDF);
        mMenuReport->addSeparator();
        mMenuReport->addAction(mActionReportSettings);
        menuSettings->addAction(mActionOptions);

        retranslateUi(QgsLayoutDesignerBase);

        QMetaObject::connectSlotsByName(QgsLayoutDesignerBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsLayoutDesignerBase)
    {
        QgsLayoutDesignerBase->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Main Window", Q_NULLPTR));
        mActionClose->setText(QApplication::translate("QgsLayoutDesignerBase", "&Close", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionClose->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Close designer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionClose->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionPan->setText(QApplication::translate("QgsLayoutDesignerBase", "Pan Layout", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionPan->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomTool->setText(QApplication::translate("QgsLayoutDesignerBase", "Zoom", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomTool->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Zoom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomTool->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSelectMoveItem->setText(QApplication::translate("QgsLayoutDesignerBase", "Select/Move Item", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectMoveItem->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Select/Move item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectMoveItem->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomAll->setText(QApplication::translate("QgsLayoutDesignerBase", "Zoom &Full", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomAll->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Zoom full", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomAll->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomIn->setText(QApplication::translate("QgsLayoutDesignerBase", "Zoom &In", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomIn->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Zoom in", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomIn->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl++", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomOut->setText(QApplication::translate("QgsLayoutDesignerBase", "Zoom &Out", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomOut->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Zoom out", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomOut->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+-", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomActual->setText(QApplication::translate("QgsLayoutDesignerBase", "Zoom to &100%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomActual->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Zoom to 100%", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomActual->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomToWidth->setText(QApplication::translate("QgsLayoutDesignerBase", "Zoom to Width", Q_NULLPTR));
        mActionShowRulers->setText(QApplication::translate("QgsLayoutDesignerBase", "Show Ru&lers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowRulers->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Show rulers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionShowRulers->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionToggleFullScreen->setText(QApplication::translate("QgsLayoutDesignerBase", "Toggle Full Scr&een", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionToggleFullScreen->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Toggle full screen mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionToggleFullScreen->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "F11", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionAddPages->setText(QApplication::translate("QgsLayoutDesignerBase", "Add Pages\342\200\246", Q_NULLPTR));
        mActionShowGrid->setText(QApplication::translate("QgsLayoutDesignerBase", "Show &Grid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowGrid->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Show grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionShowGrid->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+'", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSnapGrid->setText(QApplication::translate("QgsLayoutDesignerBase", "S&nap to Grid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSnapGrid->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Snap to grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSnapGrid->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+'", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionManageGuides->setText(QApplication::translate("QgsLayoutDesignerBase", "Manage Guides\342\200\246", Q_NULLPTR));
        mActionShowGuides->setText(QApplication::translate("QgsLayoutDesignerBase", "Show G&uides", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowGuides->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Show guides", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionShowGuides->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+;", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSnapGuides->setText(QApplication::translate("QgsLayoutDesignerBase", "&Snap to Guides", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSnapGuides->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Snap to guides", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSnapGuides->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+;", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionClearGuides->setText(QApplication::translate("QgsLayoutDesignerBase", "&Clear Guides", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionClearGuides->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Clear guides", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionLayoutProperties->setText(QApplication::translate("QgsLayoutDesignerBase", "Layout Properties\342\200\246", Q_NULLPTR));
        mActionShowBoxes->setText(QApplication::translate("QgsLayoutDesignerBase", "Show Bounding Boxes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowBoxes->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Show bounding boxes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionShowBoxes->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSmartGuides->setText(QApplication::translate("QgsLayoutDesignerBase", "S&mart Guides", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSmartGuides->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Smart guides", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSmartGuides->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Alt+;", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionDeselectAll->setText(QApplication::translate("QgsLayoutDesignerBase", "D&eselect All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDeselectAll->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Deselect all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionDeselectAll->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSelectAll->setText(QApplication::translate("QgsLayoutDesignerBase", "&Select All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectAll->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Select all items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectAll->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionInvertSelection->setText(QApplication::translate("QgsLayoutDesignerBase", "&Invert Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionInvertSelection->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Invert selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSelectNextBelow->setText(QApplication::translate("QgsLayoutDesignerBase", "Select Next Item &Below", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectNextBelow->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Select next item below", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectNextBelow->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Alt+[", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSelectNextAbove->setText(QApplication::translate("QgsLayoutDesignerBase", "Select Next Item &Above", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectNextAbove->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Select next item above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectNextAbove->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Alt+]", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionLockItems->setText(QApplication::translate("QgsLayoutDesignerBase", "Loc&k Selected Items", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionLockItems->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionUnlockAll->setText(QApplication::translate("QgsLayoutDesignerBase", "Unl&ock All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionUnlockAll->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Unlock All Items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionUnlockAll->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionHidePanels->setText(QApplication::translate("QgsLayoutDesignerBase", "Toggle Panel &Visibility", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionHidePanels->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Hide panels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionHidePanels->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Tab", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionRaiseItems->setText(QApplication::translate("QgsLayoutDesignerBase", "&Raise", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRaiseItems->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Raise selected items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionRaiseItems->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+]", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionLowerItems->setText(QApplication::translate("QgsLayoutDesignerBase", "&Lower", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionLowerItems->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Lower selected items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionLowerItems->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+[", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionMoveItemsToTop->setText(QApplication::translate("QgsLayoutDesignerBase", "Bring to &Front", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemsToTop->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Move selected items to top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionMoveItemsToTop->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+]", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionMoveItemsToBottom->setText(QApplication::translate("QgsLayoutDesignerBase", "Send to &Back", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemsToBottom->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Move selected items to bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionMoveItemsToBottom->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+[", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionAlignLeft->setText(QApplication::translate("QgsLayoutDesignerBase", "Align &Left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionAlignLeft->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Align selected items left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAlignHCenter->setText(QApplication::translate("QgsLayoutDesignerBase", "Align &Center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionAlignHCenter->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Align center horizontal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAlignRight->setText(QApplication::translate("QgsLayoutDesignerBase", "Align &Right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionAlignRight->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Align selected items right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAlignTop->setText(QApplication::translate("QgsLayoutDesignerBase", "Align &Top", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionAlignTop->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Align selected items to top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAlignVCenter->setText(QApplication::translate("QgsLayoutDesignerBase", "Align Center &Vertical", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionAlignVCenter->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Align center vertical", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAlignBottom->setText(QApplication::translate("QgsLayoutDesignerBase", "Align &Bottom", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionAlignBottom->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Align selected items bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeLeft->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute &Left Edges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeLeft->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes left edges of items equidistantly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeHCenter->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute Horizontal &Centers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeHCenter->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes horizontal centers of items equidistantly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeHSpace->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute &Horizontal Spacing Equally", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeHSpace->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes the horizontal spacing equally between all items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeRight->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute &Right Edges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeRight->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes right edges of items equidistantly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeTop->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute &Top Edges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeTop->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes top edges of items equidistantly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeVCenter->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute &Vertical Centers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeVCenter->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes vertical centers of items equidistantly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeVSpace->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute Vertical Spacing &Equally", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeVSpace->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes items equidistantly with respect to their vertical edges", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDistributeBottom->setText(QApplication::translate("QgsLayoutDesignerBase", "Distribute &Bottom Edges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDistributeBottom->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Distributes bottom edges of items equidistantly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionResizeNarrowest->setText(QApplication::translate("QgsLayoutDesignerBase", "Resize to &Narrowest", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionResizeNarrowest->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Resizes item width to match the narrowest selected item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionResizeWidest->setText(QApplication::translate("QgsLayoutDesignerBase", "Resize to &Widest", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionResizeWidest->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Resizes item width to match the widest selected item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionResizeShortest->setText(QApplication::translate("QgsLayoutDesignerBase", "Resize to &Shortest", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionResizeShortest->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Resizes item height to match the shortest selected item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionResizeTallest->setText(QApplication::translate("QgsLayoutDesignerBase", "Resize to &Tallest", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionResizeTallest->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Resizes item height to match the tallest selected item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDeleteSelection->setText(QApplication::translate("QgsLayoutDesignerBase", "&Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDeleteSelection->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Delete selected items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionResizeToSquare->setText(QApplication::translate("QgsLayoutDesignerBase", "Resize to S&quare", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionResizeToSquare->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Resizes items to squares", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPreviewModeOff->setText(QApplication::translate("QgsLayoutDesignerBase", "&Normal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPreviewModeOff->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Normal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPreviewModeGrayscale->setText(QApplication::translate("QgsLayoutDesignerBase", "Simulate Photocopy (&Grayscale)", Q_NULLPTR));
        mActionPreviewModeMono->setText(QApplication::translate("QgsLayoutDesignerBase", "Simulate Fax (&Mono)", Q_NULLPTR));
        mActionPreviewProtanope->setText(QApplication::translate("QgsLayoutDesignerBase", "Simulate Color Blindness (&Protanope)", Q_NULLPTR));
        mActionPreviewDeuteranope->setText(QApplication::translate("QgsLayoutDesignerBase", "Simulate Color Blindness (&Deuteranope)", Q_NULLPTR));
        mActionShowPage->setText(QApplication::translate("QgsLayoutDesignerBase", "Show Pages", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowPage->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Show pages", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionGroupItems->setText(QApplication::translate("QgsLayoutDesignerBase", "&Group", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionGroupItems->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Group items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionGroupItems->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionUngroupItems->setText(QApplication::translate("QgsLayoutDesignerBase", "&Ungroup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionUngroupItems->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Ungroup items", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionUngroupItems->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionRefreshView->setText(QApplication::translate("QgsLayoutDesignerBase", "&Refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRefreshView->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Refresh view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionRefreshView->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionEditNodesItem->setText(QApplication::translate("QgsLayoutDesignerBase", "Edit Nodes Item", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionEditNodesItem->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Edit Nodes Item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionMoveItemContent->setText(QApplication::translate("QgsLayoutDesignerBase", "Move &Content", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemContent->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Move item content", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionMoveItemContent->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionPasteInPlace->setText(QApplication::translate("QgsLayoutDesignerBase", "Paste in P&lace", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPasteInPlace->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Paste in place", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionPasteInPlace->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSaveAsTemplate->setText(QApplication::translate("QgsLayoutDesignerBase", "Save as &Template\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSaveAsTemplate->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Save as template", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionLoadFromTemplate->setText(QApplication::translate("QgsLayoutDesignerBase", "&Add Items from Template\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionLoadFromTemplate->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Add items from template", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionDuplicateLayout->setText(QApplication::translate("QgsLayoutDesignerBase", "&Duplicate Layout\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDuplicateLayout->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Duplicate layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSaveProject->setText(QApplication::translate("QgsLayoutDesignerBase", "&Save Project", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSaveProject->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Save project", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSaveProject->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionNewLayout->setText(QApplication::translate("QgsLayoutDesignerBase", "&New Layout\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionNewLayout->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "New layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionNewLayout->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionLayoutManager->setText(QApplication::translate("QgsLayoutDesignerBase", "Layout &Manager\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionLayoutManager->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Layout manager", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRenameLayout->setText(QApplication::translate("QgsLayoutDesignerBase", "Rename Layout\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRenameLayout->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Rename layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRemoveLayout->setText(QApplication::translate("QgsLayoutDesignerBase", "Delete Layout\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRemoveLayout->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Delete layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportAsImage->setText(QApplication::translate("QgsLayoutDesignerBase", "Export as &Image\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportAsImage->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Export as image", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportAsPDF->setText(QApplication::translate("QgsLayoutDesignerBase", "&Export as PDF\342\200\246", Q_NULLPTR));
        mActionExportAsSVG->setText(QApplication::translate("QgsLayoutDesignerBase", "Export as S&VG\342\200\246", Q_NULLPTR));
        mActionAtlasFirst->setText(QApplication::translate("QgsLayoutDesignerBase", "&First Feature", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionAtlasFirst->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+<", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionAtlasPrev->setText(QApplication::translate("QgsLayoutDesignerBase", "P&revious Feature", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionAtlasPrev->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+,", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionAtlasNext->setText(QApplication::translate("QgsLayoutDesignerBase", "&Next Feature", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionAtlasNext->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+.", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionAtlasLast->setText(QApplication::translate("QgsLayoutDesignerBase", "&Last Feature", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionAtlasLast->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+>", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionPrintAtlas->setText(QApplication::translate("QgsLayoutDesignerBase", "&Print Atlas\342\200\246", Q_NULLPTR));
        mActionExportAtlasAsImage->setText(QApplication::translate("QgsLayoutDesignerBase", "Export Atlas as &Images\342\200\246", Q_NULLPTR));
        mActionExportAtlasAsSVG->setText(QApplication::translate("QgsLayoutDesignerBase", "Export Atlas as S&VG\342\200\246", Q_NULLPTR));
        mActionExportAtlasAsPDF->setText(QApplication::translate("QgsLayoutDesignerBase", "&Export Atlas as PDF\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportAtlasAsPDF->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Export Atlas as PDF", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionAtlasSettings->setText(QApplication::translate("QgsLayoutDesignerBase", "Atlas &Settings", Q_NULLPTR));
        mActionAtlasPreview->setText(QApplication::translate("QgsLayoutDesignerBase", "Preview &Atlas", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionAtlasPreview->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Alt+/", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionExportReportAsImage->setText(QApplication::translate("QgsLayoutDesignerBase", "Export Report as &Images\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportReportAsImage->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Export Report as Images", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportReportAsSVG->setText(QApplication::translate("QgsLayoutDesignerBase", "Export Report as S&VG\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportReportAsSVG->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Export Report as SVG", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportReportAsPDF->setText(QApplication::translate("QgsLayoutDesignerBase", "&Export Report as PDF\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportReportAsPDF->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Export Report as PDF", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionReportSettings->setText(QApplication::translate("QgsLayoutDesignerBase", "Report &Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionReportSettings->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Report Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPrint->setText(QApplication::translate("QgsLayoutDesignerBase", "&Print\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPrint->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Print Layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionPrint->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionPrintReport->setText(QApplication::translate("QgsLayoutDesignerBase", "&Print Report\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPrintReport->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Print Report", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPageSetup->setText(QApplication::translate("QgsLayoutDesignerBase", "Pa&ge Setup\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPageSetup->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Page setup", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionPageSetup->setShortcut(QApplication::translate("QgsLayoutDesignerBase", "Ctrl+Shift+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionOptions->setText(QApplication::translate("QgsLayoutDesignerBase", "Layout &Options\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionOptions->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Layout Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayoutToolbar->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Layout Toolbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayoutToolbar->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Layout Toolbar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mToolsToolbar->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Toolbox", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mToolsToolbar->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Toolbox", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNavigationToolbar->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Navigation Toolbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNavigationToolbar->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Navigation Toolbar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionsToolbar->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Actions Toolbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionsToolbar->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Actions Toolbar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAtlasToolbar->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Atlas Toolbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAtlasToolbar->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Atlas Toolbar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mReportToolbar->setWindowTitle(QApplication::translate("QgsLayoutDesignerBase", "Report Toolbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mReportToolbar->setToolTip(QApplication::translate("QgsLayoutDesignerBase", "Report Toolbar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayoutMenu->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Layout", Q_NULLPTR));
        mLayoutsMenu->setTitle(QApplication::translate("QgsLayoutDesignerBase", "Layouts", Q_NULLPTR));
        mItemMenu->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Add Item", Q_NULLPTR));
        mMenuView->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&View", Q_NULLPTR));
        mToolbarMenu->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Toolbars", Q_NULLPTR));
        mPanelsMenu->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Panels", Q_NULLPTR));
        menuPreview->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Preview", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Edit", Q_NULLPTR));
        menuLayout->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Items", Q_NULLPTR));
        menuAlign_Items->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Align Items", Q_NULLPTR));
        menu_Distribute_Items->setTitle(QApplication::translate("QgsLayoutDesignerBase", "&Distribute Items", Q_NULLPTR));
        menuResize->setTitle(QApplication::translate("QgsLayoutDesignerBase", "Re&size", Q_NULLPTR));
        mMenuAtlas->setTitle(QApplication::translate("QgsLayoutDesignerBase", "Atlas", Q_NULLPTR));
        mMenuReport->setTitle(QApplication::translate("QgsLayoutDesignerBase", "Report", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("QgsLayoutDesignerBase", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutDesignerBase: public Ui_QgsLayoutDesignerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTDESIGNERBASE_H
