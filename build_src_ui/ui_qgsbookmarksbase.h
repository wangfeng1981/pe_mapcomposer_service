/********************************************************************************
** Form generated from reading UI file 'qgsbookmarksbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKSBASE_H
#define UI_QGSBOOKMARKSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBookmarksBase
{
public:
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionZoomTo;
    QWidget *bookmarksDockContents;
    QGridLayout *gridLayout;
    QToolBar *mBookmarkToolbar;
    QTreeView *lstBookmarks;

    void setupUi(QgsDockWidget *QgsBookmarksBase)
    {
        if (QgsBookmarksBase->objectName().isEmpty())
            QgsBookmarksBase->setObjectName(QStringLiteral("QgsBookmarksBase"));
        QgsBookmarksBase->resize(424, 334);
        actionAdd = new QAction(QgsBookmarksBase);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionNewBookmark.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon);
        actionDelete = new QAction(QgsBookmarksBase);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon1);
        actionZoomTo = new QAction(QgsBookmarksBase);
        actionZoomTo->setObjectName(QStringLiteral("actionZoomTo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionZoomToBookmark.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomTo->setIcon(icon2);
        bookmarksDockContents = new QWidget();
        bookmarksDockContents->setObjectName(QStringLiteral("bookmarksDockContents"));
        gridLayout = new QGridLayout(bookmarksDockContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mBookmarkToolbar = new QToolBar(bookmarksDockContents);
        mBookmarkToolbar->setObjectName(QStringLiteral("mBookmarkToolbar"));
        mBookmarkToolbar->setIconSize(QSize(16, 16));
        mBookmarkToolbar->setFloatable(false);

        gridLayout->addWidget(mBookmarkToolbar, 0, 0, 1, 1);

        lstBookmarks = new QTreeView(bookmarksDockContents);
        lstBookmarks->setObjectName(QStringLiteral("lstBookmarks"));
        lstBookmarks->setAlternatingRowColors(true);
        lstBookmarks->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstBookmarks->setRootIsDecorated(false);
        lstBookmarks->setItemsExpandable(false);
        lstBookmarks->setAnimated(false);
        lstBookmarks->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(lstBookmarks, 1, 0, 1, 1);

        QgsBookmarksBase->setWidget(bookmarksDockContents);

        mBookmarkToolbar->addAction(actionZoomTo);
        mBookmarkToolbar->addAction(actionAdd);
        mBookmarkToolbar->addAction(actionDelete);

        retranslateUi(QgsBookmarksBase);

        QMetaObject::connectSlotsByName(QgsBookmarksBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsBookmarksBase)
    {
        QgsBookmarksBase->setWindowTitle(QApplication::translate("QgsBookmarksBase", "Spatial Bookmark Manager", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("QgsBookmarksBase", "Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("QgsBookmarksBase", "Add bookmark", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("QgsBookmarksBase", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("QgsBookmarksBase", "Delete bookmark", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionZoomTo->setText(QApplication::translate("QgsBookmarksBase", "Zoom to", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoomTo->setToolTip(QApplication::translate("QgsBookmarksBase", "Zoom to bookmark", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarksBase: public Ui_QgsBookmarksBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBOOKMARKSBASE_H
