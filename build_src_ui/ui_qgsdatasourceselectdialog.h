/********************************************************************************
** Form generated from reading UI file 'qgsdatasourceselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATASOURCESELECTDIALOG_H
#define UI_QGSDATASOURCESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsbrowsertreeview.h"
#include "qgsfilterlineedit.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDataSourceSelectDialog
{
public:
    QAction *mActionRefresh;
    QAction *mActionShowFilter;
    QAction *mActionCollapse;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QToolBar *mBrowserToolbar;
    QWidget *mWidgetFilter;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *mBtnFilterOptions;
    QgsFilterLineEdit *mLeFilter;
    QgsBrowserTreeView *mBrowserTreeView;

    void setupUi(QgsPanelWidget *QgsDataSourceSelectDialog)
    {
        if (QgsDataSourceSelectDialog->objectName().isEmpty())
            QgsDataSourceSelectDialog->setObjectName(QStringLiteral("QgsDataSourceSelectDialog"));
        QgsDataSourceSelectDialog->resize(700, 629);
        QgsDataSourceSelectDialog->setWindowTitle(QStringLiteral("Dialog"));
        mActionRefresh = new QAction(QgsDataSourceSelectDialog);
        mActionRefresh->setObjectName(QStringLiteral("mActionRefresh"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefresh->setIcon(icon);
        mActionShowFilter = new QAction(QgsDataSourceSelectDialog);
        mActionShowFilter->setObjectName(QStringLiteral("mActionShowFilter"));
        mActionShowFilter->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFilter2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowFilter->setIcon(icon1);
        mActionCollapse = new QAction(QgsDataSourceSelectDialog);
        mActionCollapse->setObjectName(QStringLiteral("mActionCollapse"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCollapse->setIcon(icon2);
        verticalLayout = new QVBoxLayout(QgsDataSourceSelectDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mBrowserToolbar = new QToolBar(QgsDataSourceSelectDialog);
        mBrowserToolbar->setObjectName(QStringLiteral("mBrowserToolbar"));
        mBrowserToolbar->setIconSize(QSize(24, 24));
        mBrowserToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mBrowserToolbar);

        mWidgetFilter = new QWidget(QgsDataSourceSelectDialog);
        mWidgetFilter->setObjectName(QStringLiteral("mWidgetFilter"));
        horizontalLayout = new QHBoxLayout(mWidgetFilter);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(mWidgetFilter);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 0, 2, 0);
        mBtnFilterOptions = new QToolButton(frame);
        mBtnFilterOptions->setObjectName(QStringLiteral("mBtnFilterOptions"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnFilterOptions->setIcon(icon3);
        mBtnFilterOptions->setPopupMode(QToolButton::InstantPopup);
        mBtnFilterOptions->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mBtnFilterOptions->setAutoRaise(true);

        horizontalLayout_3->addWidget(mBtnFilterOptions);

        mLeFilter = new QgsFilterLineEdit(frame);
        mLeFilter->setObjectName(QStringLiteral("mLeFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLeFilter->sizePolicy().hasHeightForWidth());
        mLeFilter->setSizePolicy(sizePolicy1);
        mLeFilter->setMinimumSize(QSize(0, 0));
        mLeFilter->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(mLeFilter);


        horizontalLayout->addWidget(frame);


        verticalLayout_2->addWidget(mWidgetFilter);

        mBrowserTreeView = new QgsBrowserTreeView(QgsDataSourceSelectDialog);
        mBrowserTreeView->setObjectName(QStringLiteral("mBrowserTreeView"));

        verticalLayout_2->addWidget(mBrowserTreeView);


        verticalLayout->addLayout(verticalLayout_2);


        mBrowserToolbar->addAction(mActionRefresh);
        mBrowserToolbar->addAction(mActionShowFilter);
        mBrowserToolbar->addAction(mActionCollapse);

        retranslateUi(QgsDataSourceSelectDialog);

        QMetaObject::connectSlotsByName(QgsDataSourceSelectDialog);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsDataSourceSelectDialog)
    {
        mActionRefresh->setText(QApplication::translate("QgsDataSourceSelectDialog", "Refresh", Q_NULLPTR));
        mActionShowFilter->setText(QApplication::translate("QgsDataSourceSelectDialog", "Filter Browser", Q_NULLPTR));
        mActionShowFilter->setIconText(QApplication::translate("QgsDataSourceSelectDialog", "Filter Browser", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionShowFilter->setToolTip(QApplication::translate("QgsDataSourceSelectDialog", "Filter Browser", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCollapse->setText(QApplication::translate("QgsDataSourceSelectDialog", "Collapse All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionCollapse->setToolTip(QApplication::translate("QgsDataSourceSelectDialog", "Collapse All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mBtnFilterOptions->setToolTip(QApplication::translate("QgsDataSourceSelectDialog", "Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnFilterOptions->setText(QString());
        Q_UNUSED(QgsDataSourceSelectDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsDataSourceSelectDialog: public Ui_QgsDataSourceSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATASOURCESELECTDIALOG_H
