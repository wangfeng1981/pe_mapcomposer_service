/********************************************************************************
** Form generated from reading UI file 'widget_svgselector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGSELECTOR_H
#define UI_WIDGET_SVGSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qgsfilecontentsourcelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgSelector
{
public:
    QGridLayout *gridLayout;
    QTreeView *mGroupsTreeView;
    QLabel *mImagesLabel;
    QListView *mImagesListView;
    QLabel *mGroupsLabel;
    QgsSvgSourceLineEdit *mSvgSourceLineEdit;

    void setupUi(QWidget *WidgetSvgSelector)
    {
        if (WidgetSvgSelector->objectName().isEmpty())
            WidgetSvgSelector->setObjectName(QStringLiteral("WidgetSvgSelector"));
        WidgetSvgSelector->resize(315, 490);
        WidgetSvgSelector->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(WidgetSvgSelector);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mGroupsTreeView = new QTreeView(WidgetSvgSelector);
        mGroupsTreeView->setObjectName(QStringLiteral("mGroupsTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGroupsTreeView->sizePolicy().hasHeightForWidth());
        mGroupsTreeView->setSizePolicy(sizePolicy);
        mGroupsTreeView->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(mGroupsTreeView, 2, 0, 1, 1);

        mImagesLabel = new QLabel(WidgetSvgSelector);
        mImagesLabel->setObjectName(QStringLiteral("mImagesLabel"));

        gridLayout->addWidget(mImagesLabel, 1, 1, 1, 1);

        mImagesListView = new QListView(WidgetSvgSelector);
        mImagesListView->setObjectName(QStringLiteral("mImagesListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mImagesListView->sizePolicy().hasHeightForWidth());
        mImagesListView->setSizePolicy(sizePolicy1);
        mImagesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mImagesListView->setIconSize(QSize(32, 32));
        mImagesListView->setMovement(QListView::Static);
        mImagesListView->setResizeMode(QListView::Adjust);
        mImagesListView->setLayoutMode(QListView::Batched);
        mImagesListView->setSpacing(2);
        mImagesListView->setGridSize(QSize(36, 36));
        mImagesListView->setViewMode(QListView::IconMode);
        mImagesListView->setUniformItemSizes(true);
        mImagesListView->setWordWrap(true);

        gridLayout->addWidget(mImagesListView, 2, 1, 1, 1);

        mGroupsLabel = new QLabel(WidgetSvgSelector);
        mGroupsLabel->setObjectName(QStringLiteral("mGroupsLabel"));

        gridLayout->addWidget(mGroupsLabel, 1, 0, 1, 1);

        mSvgSourceLineEdit = new QgsSvgSourceLineEdit(WidgetSvgSelector);
        mSvgSourceLineEdit->setObjectName(QStringLiteral("mSvgSourceLineEdit"));
        mSvgSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mSvgSourceLineEdit, 3, 0, 1, 2);

        QWidget::setTabOrder(mGroupsTreeView, mImagesListView);

        retranslateUi(WidgetSvgSelector);

        QMetaObject::connectSlotsByName(WidgetSvgSelector);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgSelector)
    {
        mImagesLabel->setText(QApplication::translate("WidgetSvgSelector", "SVG Images", Q_NULLPTR));
        mGroupsLabel->setText(QApplication::translate("WidgetSvgSelector", "SVG Groups", Q_NULLPTR));
        Q_UNUSED(WidgetSvgSelector);
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgSelector: public Ui_WidgetSvgSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGSELECTOR_H
