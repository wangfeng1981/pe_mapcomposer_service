/********************************************************************************
** Form generated from reading UI file 'qgsmeshdatasetgrouptreewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHDATASETGROUPTREEWIDGETBASE_H
#define UI_QGSMESHDATASETGROUPTREEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmeshdatasetgrouptreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshDatasetGroupTreeWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mAddDatasetButton;
    QToolButton *mCollapseButton;
    QToolButton *mExpandButton;
    QToolButton *mCheckAllButton;
    QToolButton *mUnCheckAllButton;
    QToolButton *mResetDefaultButton;
    QSpacerItem *horizontalSpacer_2;
    QgsMeshDatasetGroupTreeView *mDatasetGroupTreeView;

    void setupUi(QWidget *QgsMeshDatasetGroupTreeWidgetBase)
    {
        if (QgsMeshDatasetGroupTreeWidgetBase->objectName().isEmpty())
            QgsMeshDatasetGroupTreeWidgetBase->setObjectName(QStringLiteral("QgsMeshDatasetGroupTreeWidgetBase"));
        QgsMeshDatasetGroupTreeWidgetBase->resize(433, 314);
        horizontalLayout = new QHBoxLayout(QgsMeshDatasetGroupTreeWidgetBase);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsMeshDatasetGroupTreeWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mAddDatasetButton = new QToolButton(groupBox);
        mAddDatasetButton->setObjectName(QStringLiteral("mAddDatasetButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddDatasetButton->setIcon(icon);
        mAddDatasetButton->setIconSize(QSize(20, 20));
        mAddDatasetButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mAddDatasetButton);

        mCollapseButton = new QToolButton(groupBox);
        mCollapseButton->setObjectName(QStringLiteral("mCollapseButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseButton->setIcon(icon1);
        mCollapseButton->setIconSize(QSize(20, 20));
        mCollapseButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mCollapseButton);

        mExpandButton = new QToolButton(groupBox);
        mExpandButton->setObjectName(QStringLiteral("mExpandButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandButton->setIcon(icon2);
        mExpandButton->setIconSize(QSize(20, 20));
        mExpandButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mExpandButton);

        mCheckAllButton = new QToolButton(groupBox);
        mCheckAllButton->setObjectName(QStringLiteral("mCheckAllButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionSelectAllTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCheckAllButton->setIcon(icon3);
        mCheckAllButton->setIconSize(QSize(20, 20));
        mCheckAllButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mCheckAllButton);

        mUnCheckAllButton = new QToolButton(groupBox);
        mUnCheckAllButton->setObjectName(QStringLiteral("mUnCheckAllButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionDeselectAllTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUnCheckAllButton->setIcon(icon4);
        mUnCheckAllButton->setIconSize(QSize(20, 20));
        mUnCheckAllButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mUnCheckAllButton);

        mResetDefaultButton = new QToolButton(groupBox);
        mResetDefaultButton->setObjectName(QStringLiteral("mResetDefaultButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetDefaultButton->setIcon(icon5);
        mResetDefaultButton->setIconSize(QSize(20, 20));
        mResetDefaultButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mResetDefaultButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_2);

        mDatasetGroupTreeView = new QgsMeshDatasetGroupTreeView(groupBox);
        mDatasetGroupTreeView->setObjectName(QStringLiteral("mDatasetGroupTreeView"));

        verticalLayout_7->addWidget(mDatasetGroupTreeView);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(QgsMeshDatasetGroupTreeWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshDatasetGroupTreeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshDatasetGroupTreeWidgetBase)
    {
        QgsMeshDatasetGroupTreeWidgetBase->setWindowTitle(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Available Mesh Dataset Groups", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Available Datasets", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddDatasetButton->setToolTip(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Assign Extra Dataset to Mesh", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddDatasetButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCollapseButton->setToolTip(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Collapse All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCollapseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mExpandButton->setToolTip(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Expand All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mExpandButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCheckAllButton->setToolTip(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Check All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckAllButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mUnCheckAllButton->setToolTip(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Uncheck All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUnCheckAllButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mResetDefaultButton->setToolTip(QApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Reset to Defaults", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mResetDefaultButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeshDatasetGroupTreeWidgetBase: public Ui_QgsMeshDatasetGroupTreeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHDATASETGROUPTREEWIDGETBASE_H
