/********************************************************************************
** Form generated from reading UI file 'qgstableeditorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABLEEDITORBASE_H
#define UI_QGSTABLEEDITORBASE_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTableEditorBase
{
public:
    QAction *mActionSetForeground;
    QAction *mActionSetBackground;
    QAction *mActionInsertRowsAbove;
    QAction *mActionInsertRowsBelow;
    QAction *mActionInsertColumnsBefore;
    QAction *mActionInsertColumnsAfter;
    QAction *mActionDeleteRows;
    QAction *mActionDeleteColumns;
    QAction *mActionSelectAll;
    QAction *mActionSelectRow;
    QAction *mActionSelectColumn;
    QAction *mActionImportFromClipboard;
    QAction *mActionClose;
    QAction *mActionSetRowHeight;
    QAction *mActionSetColumnWidth;
    QAction *mActionClear;
    QAction *mActionIncludeHeader;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *mViewFrame;
    QStatusBar *mStatusBar;
    QMenuBar *mMenuBar;
    QMenu *menu_Table;
    QMenu *menuInsert_Rows;
    QMenu *menuInsert_Columns;
    QMenu *menu_Edit;
    QMenu *menuFile;

    void setupUi(QMainWindow *QgsTableEditorBase)
    {
        if (QgsTableEditorBase->objectName().isEmpty())
            QgsTableEditorBase->setObjectName(QStringLiteral("QgsTableEditorBase"));
        QgsTableEditorBase->resize(2180, 609);
        QgsTableEditorBase->setMouseTracking(true);
        mActionSetForeground = new QAction(QgsTableEditorBase);
        mActionSetForeground->setObjectName(QStringLiteral("mActionSetForeground"));
        mActionSetBackground = new QAction(QgsTableEditorBase);
        mActionSetBackground->setObjectName(QStringLiteral("mActionSetBackground"));
        mActionInsertRowsAbove = new QAction(QgsTableEditorBase);
        mActionInsertRowsAbove->setObjectName(QStringLiteral("mActionInsertRowsAbove"));
        mActionInsertRowsBelow = new QAction(QgsTableEditorBase);
        mActionInsertRowsBelow->setObjectName(QStringLiteral("mActionInsertRowsBelow"));
        mActionInsertColumnsBefore = new QAction(QgsTableEditorBase);
        mActionInsertColumnsBefore->setObjectName(QStringLiteral("mActionInsertColumnsBefore"));
        mActionInsertColumnsAfter = new QAction(QgsTableEditorBase);
        mActionInsertColumnsAfter->setObjectName(QStringLiteral("mActionInsertColumnsAfter"));
        mActionDeleteRows = new QAction(QgsTableEditorBase);
        mActionDeleteRows->setObjectName(QStringLiteral("mActionDeleteRows"));
        mActionDeleteColumns = new QAction(QgsTableEditorBase);
        mActionDeleteColumns->setObjectName(QStringLiteral("mActionDeleteColumns"));
        mActionSelectAll = new QAction(QgsTableEditorBase);
        mActionSelectAll->setObjectName(QStringLiteral("mActionSelectAll"));
        mActionSelectRow = new QAction(QgsTableEditorBase);
        mActionSelectRow->setObjectName(QStringLiteral("mActionSelectRow"));
        mActionSelectColumn = new QAction(QgsTableEditorBase);
        mActionSelectColumn->setObjectName(QStringLiteral("mActionSelectColumn"));
        mActionImportFromClipboard = new QAction(QgsTableEditorBase);
        mActionImportFromClipboard->setObjectName(QStringLiteral("mActionImportFromClipboard"));
        mActionClose = new QAction(QgsTableEditorBase);
        mActionClose->setObjectName(QStringLiteral("mActionClose"));
        mActionSetRowHeight = new QAction(QgsTableEditorBase);
        mActionSetRowHeight->setObjectName(QStringLiteral("mActionSetRowHeight"));
        mActionSetColumnWidth = new QAction(QgsTableEditorBase);
        mActionSetColumnWidth->setObjectName(QStringLiteral("mActionSetColumnWidth"));
        mActionClear = new QAction(QgsTableEditorBase);
        mActionClear->setObjectName(QStringLiteral("mActionClear"));
        mActionIncludeHeader = new QAction(QgsTableEditorBase);
        mActionIncludeHeader->setObjectName(QStringLiteral("mActionIncludeHeader"));
        mActionIncludeHeader->setCheckable(true);
        centralwidget = new QWidget(QgsTableEditorBase);
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

        QgsTableEditorBase->setCentralWidget(centralwidget);
        mStatusBar = new QStatusBar(QgsTableEditorBase);
        mStatusBar->setObjectName(QStringLiteral("mStatusBar"));
        QgsTableEditorBase->setStatusBar(mStatusBar);
        mMenuBar = new QMenuBar(QgsTableEditorBase);
        mMenuBar->setObjectName(QStringLiteral("mMenuBar"));
        mMenuBar->setGeometry(QRect(0, 0, 2180, 24));
        menu_Table = new QMenu(mMenuBar);
        menu_Table->setObjectName(QStringLiteral("menu_Table"));
        menuInsert_Rows = new QMenu(menu_Table);
        menuInsert_Rows->setObjectName(QStringLiteral("menuInsert_Rows"));
        menuInsert_Columns = new QMenu(menu_Table);
        menuInsert_Columns->setObjectName(QStringLiteral("menuInsert_Columns"));
        menu_Edit = new QMenu(mMenuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menuFile = new QMenu(mMenuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        QgsTableEditorBase->setMenuBar(mMenuBar);

        mMenuBar->addAction(menuFile->menuAction());
        mMenuBar->addAction(menu_Edit->menuAction());
        mMenuBar->addAction(menu_Table->menuAction());
        menu_Table->addAction(menuInsert_Rows->menuAction());
        menu_Table->addAction(menuInsert_Columns->menuAction());
        menu_Table->addAction(mActionDeleteRows);
        menu_Table->addAction(mActionDeleteColumns);
        menu_Table->addSeparator();
        menu_Table->addAction(mActionIncludeHeader);
        menuInsert_Rows->addAction(mActionInsertRowsAbove);
        menuInsert_Rows->addAction(mActionInsertRowsBelow);
        menuInsert_Columns->addAction(mActionInsertColumnsBefore);
        menuInsert_Columns->addAction(mActionInsertColumnsAfter);
        menu_Edit->addAction(mActionSelectAll);
        menu_Edit->addAction(mActionSelectRow);
        menu_Edit->addAction(mActionSelectColumn);
        menu_Edit->addSeparator();
        menu_Edit->addAction(mActionClear);
        menuFile->addAction(mActionImportFromClipboard);
        menuFile->addSeparator();
        menuFile->addAction(mActionClose);

        retranslateUi(QgsTableEditorBase);

        QMetaObject::connectSlotsByName(QgsTableEditorBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsTableEditorBase)
    {
        QgsTableEditorBase->setWindowTitle(QApplication::translate("QgsTableEditorBase", "Main Window", Q_NULLPTR));
        mActionSetForeground->setText(QApplication::translate("QgsTableEditorBase", "Set Foreground Color\342\200\246", Q_NULLPTR));
        mActionSetBackground->setText(QApplication::translate("QgsTableEditorBase", "Set Background Color\342\200\246", Q_NULLPTR));
        mActionInsertRowsAbove->setText(QApplication::translate("QgsTableEditorBase", "Rows Above", Q_NULLPTR));
        mActionInsertRowsBelow->setText(QApplication::translate("QgsTableEditorBase", "Rows Below", Q_NULLPTR));
        mActionInsertColumnsBefore->setText(QApplication::translate("QgsTableEditorBase", "Columns Before", Q_NULLPTR));
        mActionInsertColumnsAfter->setText(QApplication::translate("QgsTableEditorBase", "Columns After", Q_NULLPTR));
        mActionDeleteRows->setText(QApplication::translate("QgsTableEditorBase", "Delete Rows", Q_NULLPTR));
        mActionDeleteColumns->setText(QApplication::translate("QgsTableEditorBase", "Delete Columns", Q_NULLPTR));
        mActionSelectAll->setText(QApplication::translate("QgsTableEditorBase", "Select All", Q_NULLPTR));
        mActionSelectRow->setText(QApplication::translate("QgsTableEditorBase", "Select Row", Q_NULLPTR));
        mActionSelectColumn->setText(QApplication::translate("QgsTableEditorBase", "Select Column", Q_NULLPTR));
        mActionImportFromClipboard->setText(QApplication::translate("QgsTableEditorBase", "Import Content from Clipboard", Q_NULLPTR));
        mActionClose->setText(QApplication::translate("QgsTableEditorBase", "Close Editor", Q_NULLPTR));
        mActionSetRowHeight->setText(QApplication::translate("QgsTableEditorBase", "Set Row Height\342\200\246", Q_NULLPTR));
        mActionSetColumnWidth->setText(QApplication::translate("QgsTableEditorBase", "Set Column Width\342\200\246", Q_NULLPTR));
        mActionClear->setText(QApplication::translate("QgsTableEditorBase", "Clear Cell(s)", Q_NULLPTR));
        mActionIncludeHeader->setText(QApplication::translate("QgsTableEditorBase", "Include Header Row", Q_NULLPTR));
        menu_Table->setTitle(QApplication::translate("QgsTableEditorBase", "&Table", Q_NULLPTR));
        menuInsert_Rows->setTitle(QApplication::translate("QgsTableEditorBase", "Insert Rows", Q_NULLPTR));
        menuInsert_Columns->setTitle(QApplication::translate("QgsTableEditorBase", "Insert Columns", Q_NULLPTR));
        menu_Edit->setTitle(QApplication::translate("QgsTableEditorBase", "&Edit", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("QgsTableEditorBase", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsTableEditorBase: public Ui_QgsTableEditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABLEEDITORBASE_H
