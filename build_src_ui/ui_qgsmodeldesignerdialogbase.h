/********************************************************************************
** Form generated from reading UI file 'qgsmodeldesignerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMODELDESIGNERDIALOGBASE_H
#define UI_QGSMODELDESIGNERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"
#include "qgsfilterlineedit.h"
#include "qgsmodeldesignerinputstreewidget.h"
#include "qgsmodelgraphicsview.h"
#include "qgsprocessingtoolboxtreeview.h"
#include "qgsscrollarea.h"
#include "qgsvariableeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsModelDesignerDialogBase
{
public:
    QAction *mActionOpen;
    QAction *mActionSave;
    QAction *mActionSaveAs;
    QAction *mActionZoomActual;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionExportImage;
    QAction *mActionZoomToItems;
    QAction *mActionExportPdf;
    QAction *mActionExportSvg;
    QAction *mActionExportPython;
    QAction *mActionEditHelp;
    QAction *mActionRun;
    QAction *mActionSaveInProject;
    QAction *mActionClose;
    QAction *mActionShowComments;
    QAction *mActionExportAsScriptAlgorithm;
    QAction *mActionDeleteComponents;
    QAction *mActionSnappingEnabled;
    QAction *mActionSnapSelected;
    QAction *mActionSelectAll;
    QAction *mActionAddGroupBox;
    QAction *mActionValidate;
    QAction *mActionReorderInputs;
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QgsModelGraphicsView *mView;
    QMenuBar *mMenu;
    QMenu *menu_Model;
    QMenu *menuExport;
    QMenu *mMenuView;
    QMenu *mMenuEdit;
    QToolBar *mToolbar;
    QgsDockWidget *mPropertiesDock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLineEdit *mNameEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *mGroupEdit;
    QSpacerItem *verticalSpacer;
    QgsDockWidget *mInputsDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *mInputsScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QgsModelDesignerInputsTreeWidget *mInputsTreeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mReorderInputsButton;
    QSpacerItem *horizontalSpacer;
    QgsDockWidget *mAlgorithmsDock;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QgsFilterLineEdit *mAlgorithmSearchEdit;
    QgsProcessingToolboxTreeView *mAlgorithmsTree;
    QgsDockWidget *mVariablesDock;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_5;
    QgsVariableEditorWidget *mVariablesEditor;

    void setupUi(QMainWindow *QgsModelDesignerDialogBase)
    {
        if (QgsModelDesignerDialogBase->objectName().isEmpty())
            QgsModelDesignerDialogBase->setObjectName(QStringLiteral("QgsModelDesignerDialogBase"));
        QgsModelDesignerDialogBase->resize(786, 596);
        mActionOpen = new QAction(QgsModelDesignerDialogBase);
        mActionOpen->setObjectName(QStringLiteral("mActionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpen->setIcon(icon);
        mActionSave = new QAction(QgsModelDesignerDialogBase);
        mActionSave->setObjectName(QStringLiteral("mActionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSave->setIcon(icon1);
        mActionSaveAs = new QAction(QgsModelDesignerDialogBase);
        mActionSaveAs->setObjectName(QStringLiteral("mActionSaveAs"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveAs->setIcon(icon2);
        mActionZoomActual = new QAction(QgsModelDesignerDialogBase);
        mActionZoomActual->setObjectName(QStringLiteral("mActionZoomActual"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionZoomActual.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomActual->setIcon(icon3);
        mActionZoomIn = new QAction(QgsModelDesignerDialogBase);
        mActionZoomIn->setObjectName(QStringLiteral("mActionZoomIn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomIn->setIcon(icon4);
        mActionZoomOut = new QAction(QgsModelDesignerDialogBase);
        mActionZoomOut->setObjectName(QStringLiteral("mActionZoomOut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomOut->setIcon(icon5);
        mActionExportImage = new QAction(QgsModelDesignerDialogBase);
        mActionExportImage->setObjectName(QStringLiteral("mActionExportImage"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionSaveMapAsImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportImage->setIcon(icon6);
        mActionZoomToItems = new QAction(QgsModelDesignerDialogBase);
        mActionZoomToItems->setObjectName(QStringLiteral("mActionZoomToItems"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToItems->setIcon(icon7);
        mActionExportPdf = new QAction(QgsModelDesignerDialogBase);
        mActionExportPdf->setObjectName(QStringLiteral("mActionExportPdf"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsPDF.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportPdf->setIcon(icon8);
        mActionExportSvg = new QAction(QgsModelDesignerDialogBase);
        mActionExportSvg->setObjectName(QStringLiteral("mActionExportSvg"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsSVG.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportSvg->setIcon(icon9);
        mActionExportPython = new QAction(QgsModelDesignerDialogBase);
        mActionExportPython->setObjectName(QStringLiteral("mActionExportPython"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsPython.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportPython->setIcon(icon10);
        mActionEditHelp = new QAction(QgsModelDesignerDialogBase);
        mActionEditHelp->setObjectName(QStringLiteral("mActionEditHelp"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/mActionEditHelpContent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditHelp->setIcon(icon11);
        mActionRun = new QAction(QgsModelDesignerDialogBase);
        mActionRun->setObjectName(QStringLiteral("mActionRun"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/mActionStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRun->setIcon(icon12);
        mActionSaveInProject = new QAction(QgsModelDesignerDialogBase);
        mActionSaveInProject->setObjectName(QStringLiteral("mActionSaveInProject"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/mAddToProject.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveInProject->setIcon(icon13);
        mActionClose = new QAction(QgsModelDesignerDialogBase);
        mActionClose->setObjectName(QStringLiteral("mActionClose"));
        mActionShowComments = new QAction(QgsModelDesignerDialogBase);
        mActionShowComments->setObjectName(QStringLiteral("mActionShowComments"));
        mActionShowComments->setCheckable(true);
        mActionExportAsScriptAlgorithm = new QAction(QgsModelDesignerDialogBase);
        mActionExportAsScriptAlgorithm->setObjectName(QStringLiteral("mActionExportAsScriptAlgorithm"));
        mActionExportAsScriptAlgorithm->setIcon(icon10);
        mActionDeleteComponents = new QAction(QgsModelDesignerDialogBase);
        mActionDeleteComponents->setObjectName(QStringLiteral("mActionDeleteComponents"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteComponents->setIcon(icon14);
        mActionSnappingEnabled = new QAction(QgsModelDesignerDialogBase);
        mActionSnappingEnabled->setObjectName(QStringLiteral("mActionSnappingEnabled"));
        mActionSnappingEnabled->setCheckable(true);
        mActionSnapSelected = new QAction(QgsModelDesignerDialogBase);
        mActionSnapSelected->setObjectName(QStringLiteral("mActionSnapSelected"));
        mActionSelectAll = new QAction(QgsModelDesignerDialogBase);
        mActionSelectAll->setObjectName(QStringLiteral("mActionSelectAll"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon15);
        mActionAddGroupBox = new QAction(QgsModelDesignerDialogBase);
        mActionAddGroupBox->setObjectName(QStringLiteral("mActionAddGroupBox"));
        mActionValidate = new QAction(QgsModelDesignerDialogBase);
        mActionValidate->setObjectName(QStringLiteral("mActionValidate"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/mIconSuccess.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionValidate->setIcon(icon16);
        mActionReorderInputs = new QAction(QgsModelDesignerDialogBase);
        mActionReorderInputs->setObjectName(QStringLiteral("mActionReorderInputs"));
        centralwidget = new QWidget(QgsModelDesignerDialogBase);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setSpacing(3);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(2, 2, 2, 2);
        mView = new QgsModelGraphicsView(centralwidget);
        mView->setObjectName(QStringLiteral("mView"));

        mainLayout->addWidget(mView);

        QgsModelDesignerDialogBase->setCentralWidget(centralwidget);
        mMenu = new QMenuBar(QgsModelDesignerDialogBase);
        mMenu->setObjectName(QStringLiteral("mMenu"));
        mMenu->setGeometry(QRect(0, 0, 786, 24));
        menu_Model = new QMenu(mMenu);
        menu_Model->setObjectName(QStringLiteral("menu_Model"));
        menuExport = new QMenu(menu_Model);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        mMenuView = new QMenu(mMenu);
        mMenuView->setObjectName(QStringLiteral("mMenuView"));
        mMenuEdit = new QMenu(mMenu);
        mMenuEdit->setObjectName(QStringLiteral("mMenuEdit"));
        QgsModelDesignerDialogBase->setMenuBar(mMenu);
        mToolbar = new QToolBar(QgsModelDesignerDialogBase);
        mToolbar->setObjectName(QStringLiteral("mToolbar"));
        QgsModelDesignerDialogBase->addToolBar(Qt::TopToolBarArea, mToolbar);
        mPropertiesDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mPropertiesDock->setObjectName(QStringLiteral("mPropertiesDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(dockWidgetContents);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 256, 90));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mNameEdit = new QLineEdit(scrollAreaWidgetContents);
        mNameEdit->setObjectName(QStringLiteral("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mGroupEdit = new QLineEdit(scrollAreaWidgetContents);
        mGroupEdit->setObjectName(QStringLiteral("mGroupEdit"));

        gridLayout->addWidget(mGroupEdit, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        mPropertiesDock->setWidget(dockWidgetContents);
        QgsModelDesignerDialogBase->addDockWidget(static_cast<Qt::DockWidgetArea>(1), mPropertiesDock);
        mInputsDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mInputsDock->setObjectName(QStringLiteral("mInputsDock"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mInputsScrollArea = new QgsScrollArea(dockWidgetContents_2);
        mInputsScrollArea->setObjectName(QStringLiteral("mInputsScrollArea"));
        mInputsScrollArea->setFrameShape(QFrame::NoFrame);
        mInputsScrollArea->setFrameShadow(QFrame::Plain);
        mInputsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 256, 173));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mInputsTreeWidget = new QgsModelDesignerInputsTreeWidget(scrollAreaWidgetContents_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        mInputsTreeWidget->setHeaderItem(__qtreewidgetitem);
        mInputsTreeWidget->setObjectName(QStringLiteral("mInputsTreeWidget"));

        verticalLayout_6->addWidget(mInputsTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, -1, 6);
        mReorderInputsButton = new QPushButton(scrollAreaWidgetContents_2);
        mReorderInputsButton->setObjectName(QStringLiteral("mReorderInputsButton"));

        horizontalLayout->addWidget(mReorderInputsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);

        mInputsScrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(mInputsScrollArea);

        mInputsDock->setWidget(dockWidgetContents_2);
        QgsModelDesignerDialogBase->addDockWidget(static_cast<Qt::DockWidgetArea>(1), mInputsDock);
        mAlgorithmsDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mAlgorithmsDock->setObjectName(QStringLiteral("mAlgorithmsDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(dockWidgetContents_3);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 256, 167));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mAlgorithmSearchEdit = new QgsFilterLineEdit(scrollAreaWidgetContents_3);
        mAlgorithmSearchEdit->setObjectName(QStringLiteral("mAlgorithmSearchEdit"));

        verticalLayout_4->addWidget(mAlgorithmSearchEdit);

        mAlgorithmsTree = new QgsProcessingToolboxTreeView(scrollAreaWidgetContents_3);
        mAlgorithmsTree->setObjectName(QStringLiteral("mAlgorithmsTree"));
        mAlgorithmsTree->setAlternatingRowColors(true);

        verticalLayout_4->addWidget(mAlgorithmsTree);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_2);

        mAlgorithmsDock->setWidget(dockWidgetContents_3);
        QgsModelDesignerDialogBase->addDockWidget(static_cast<Qt::DockWidgetArea>(1), mAlgorithmsDock);
        mVariablesDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mVariablesDock->setObjectName(QStringLiteral("mVariablesDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mVariablesEditor = new QgsVariableEditorWidget(dockWidgetContents_4);
        mVariablesEditor->setObjectName(QStringLiteral("mVariablesEditor"));

        verticalLayout_5->addWidget(mVariablesEditor);

        mVariablesDock->setWidget(dockWidgetContents_4);
        QgsModelDesignerDialogBase->addDockWidget(static_cast<Qt::DockWidgetArea>(1), mVariablesDock);

        mMenu->addAction(menu_Model->menuAction());
        mMenu->addAction(mMenuEdit->menuAction());
        mMenu->addAction(mMenuView->menuAction());
        menu_Model->addAction(mActionValidate);
        menu_Model->addAction(mActionRun);
        menu_Model->addAction(mActionReorderInputs);
        menu_Model->addSeparator();
        menu_Model->addAction(mActionOpen);
        menu_Model->addAction(mActionSave);
        menu_Model->addAction(mActionSaveAs);
        menu_Model->addAction(mActionSaveInProject);
        menu_Model->addAction(mActionEditHelp);
        menu_Model->addSeparator();
        menu_Model->addAction(menuExport->menuAction());
        menu_Model->addSeparator();
        menu_Model->addAction(mActionClose);
        menuExport->addAction(mActionExportImage);
        menuExport->addAction(mActionExportPdf);
        menuExport->addAction(mActionExportSvg);
        menuExport->addSeparator();
        menuExport->addAction(mActionExportPython);
        mMenuView->addAction(mActionZoomIn);
        mMenuView->addAction(mActionZoomOut);
        mMenuView->addAction(mActionZoomActual);
        mMenuView->addAction(mActionZoomToItems);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowComments);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionSnappingEnabled);
        mMenuEdit->addAction(mActionSelectAll);
        mMenuEdit->addAction(mActionSnapSelected);
        mMenuEdit->addSeparator();
        mMenuEdit->addAction(mActionDeleteComponents);
        mMenuEdit->addSeparator();
        mMenuEdit->addAction(mActionAddGroupBox);
        mToolbar->addAction(mActionOpen);
        mToolbar->addAction(mActionSave);
        mToolbar->addAction(mActionSaveAs);
        mToolbar->addAction(mActionSaveInProject);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionZoomIn);
        mToolbar->addAction(mActionZoomOut);
        mToolbar->addAction(mActionZoomActual);
        mToolbar->addAction(mActionZoomToItems);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionExportImage);
        mToolbar->addAction(mActionExportPdf);
        mToolbar->addAction(mActionExportSvg);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionEditHelp);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionRun);

        retranslateUi(QgsModelDesignerDialogBase);

        QMetaObject::connectSlotsByName(QgsModelDesignerDialogBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsModelDesignerDialogBase)
    {
        QgsModelDesignerDialogBase->setWindowTitle(QApplication::translate("QgsModelDesignerDialogBase", "Graphical Modeler", Q_NULLPTR));
        mActionOpen->setText(QApplication::translate("QgsModelDesignerDialogBase", "Open Model\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionOpen->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Open model (Ctrl+O)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionOpen->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSave->setText(QApplication::translate("QgsModelDesignerDialogBase", "Save Model", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSave->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Save model (Ctrl+S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSave->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSaveAs->setText(QApplication::translate("QgsModelDesignerDialogBase", "Save Model as\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSaveAs->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Save model as (Ctrl+S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSaveAs->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomActual->setText(QApplication::translate("QgsModelDesignerDialogBase", "Zoom to &100%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomActual->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Zoom to &100%", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomActual->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomIn->setText(QApplication::translate("QgsModelDesignerDialogBase", "Zoom In", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomIn->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Zoom in", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomIn->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl++", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomOut->setText(QApplication::translate("QgsModelDesignerDialogBase", "Zoom Out", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomOut->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Zoom out", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomOut->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+-", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionExportImage->setText(QApplication::translate("QgsModelDesignerDialogBase", "Export as Image\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportImage->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Export as image", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionZoomToItems->setText(QApplication::translate("QgsModelDesignerDialogBase", "Zoom Full", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomToItems->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Zoom full", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomToItems->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionExportPdf->setText(QApplication::translate("QgsModelDesignerDialogBase", "Export as PDF\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportPdf->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Export as PDF", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportSvg->setText(QApplication::translate("QgsModelDesignerDialogBase", "Export as SVG\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportSvg->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Export as SVG", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportPython->setText(QApplication::translate("QgsModelDesignerDialogBase", "Export as Python Script\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportPython->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Export as Python Script", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionEditHelp->setText(QApplication::translate("QgsModelDesignerDialogBase", "Edit Model Help\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionEditHelp->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Edit model help", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRun->setText(QApplication::translate("QgsModelDesignerDialogBase", "Run Model\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRun->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Run model (F5)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionRun->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSaveInProject->setText(QApplication::translate("QgsModelDesignerDialogBase", "Save Model in Project", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSaveInProject->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Save model in project", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionClose->setText(QApplication::translate("QgsModelDesignerDialogBase", "Close", Q_NULLPTR));
        mActionShowComments->setText(QApplication::translate("QgsModelDesignerDialogBase", "Show Comments", Q_NULLPTR));
        mActionExportAsScriptAlgorithm->setText(QApplication::translate("QgsModelDesignerDialogBase", "Export as Script Algorithm\342\200\246", Q_NULLPTR));
        mActionDeleteComponents->setText(QApplication::translate("QgsModelDesignerDialogBase", "Delete Selected Components", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionDeleteComponents->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Delete selected model components", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionDeleteComponents->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSnappingEnabled->setText(QApplication::translate("QgsModelDesignerDialogBase", "Enable Snapping", Q_NULLPTR));
        mActionSnapSelected->setText(QApplication::translate("QgsModelDesignerDialogBase", "Snap Selected Components to Grid", Q_NULLPTR));
        mActionSelectAll->setText(QApplication::translate("QgsModelDesignerDialogBase", "Select All", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mActionSelectAll->setShortcut(QApplication::translate("QgsModelDesignerDialogBase", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionAddGroupBox->setText(QApplication::translate("QgsModelDesignerDialogBase", "Add Group Box", Q_NULLPTR));
        mActionValidate->setText(QApplication::translate("QgsModelDesignerDialogBase", "Validate Model", Q_NULLPTR));
        mActionReorderInputs->setText(QApplication::translate("QgsModelDesignerDialogBase", "Reorder Model Inputs\342\200\246", Q_NULLPTR));
        menu_Model->setTitle(QApplication::translate("QgsModelDesignerDialogBase", "&Model", Q_NULLPTR));
        menuExport->setTitle(QApplication::translate("QgsModelDesignerDialogBase", "Export", Q_NULLPTR));
        mMenuView->setTitle(QApplication::translate("QgsModelDesignerDialogBase", "&View", Q_NULLPTR));
        mMenuEdit->setTitle(QApplication::translate("QgsModelDesignerDialogBase", "&Edit", Q_NULLPTR));
        mToolbar->setWindowTitle(QApplication::translate("QgsModelDesignerDialogBase", "Navigation", Q_NULLPTR));
        mPropertiesDock->setWindowTitle(QApplication::translate("QgsModelDesignerDialogBase", "Model Properties", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNameEdit->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Enter model name here", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QgsModelDesignerDialogBase", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsModelDesignerDialogBase", "Group", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mGroupEdit->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Enter group name here", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mInputsDock->setWindowTitle(QApplication::translate("QgsModelDesignerDialogBase", "Inputs", Q_NULLPTR));
        mReorderInputsButton->setText(QApplication::translate("QgsModelDesignerDialogBase", "Reorder Model Inputs\342\200\246", Q_NULLPTR));
        mAlgorithmsDock->setWindowTitle(QApplication::translate("QgsModelDesignerDialogBase", "Algorithms", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAlgorithmSearchEdit->setToolTip(QApplication::translate("QgsModelDesignerDialogBase", "Enter algorithm name to filter list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mVariablesDock->setWindowTitle(QApplication::translate("QgsModelDesignerDialogBase", "Variables", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsModelDesignerDialogBase: public Ui_QgsModelDesignerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMODELDESIGNERDIALOGBASE_H
