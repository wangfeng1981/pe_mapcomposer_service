/********************************************************************************
** Form generated from reading UI file 'qgsprocessingenummodelerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGENUMMODELERWIDGETBASE_H
#define UI_QGSPROCESSINGENUMMODELERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingEnumModelerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QToolButton *mButtonRemove;
    QSpacerItem *verticalSpacer;
    QToolButton *mButtonAdd;
    QToolButton *mButtonClear;
    QListView *mItemList;
    QCheckBox *mAllowMultiple;

    void setupUi(QWidget *QgsProcessingEnumModelerWidgetBase)
    {
        if (QgsProcessingEnumModelerWidgetBase->objectName().isEmpty())
            QgsProcessingEnumModelerWidgetBase->setObjectName(QStringLiteral("QgsProcessingEnumModelerWidgetBase"));
        QgsProcessingEnumModelerWidgetBase->resize(400, 300);
        QgsProcessingEnumModelerWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsProcessingEnumModelerWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mButtonRemove = new QToolButton(QgsProcessingEnumModelerWidgetBase);
        mButtonRemove->setObjectName(QStringLiteral("mButtonRemove"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemove->setIcon(icon);

        gridLayout->addWidget(mButtonRemove, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        mButtonAdd = new QToolButton(QgsProcessingEnumModelerWidgetBase);
        mButtonAdd->setObjectName(QStringLiteral("mButtonAdd"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAdd->setIcon(icon1);

        gridLayout->addWidget(mButtonAdd, 0, 1, 1, 1);

        mButtonClear = new QToolButton(QgsProcessingEnumModelerWidgetBase);
        mButtonClear->setObjectName(QStringLiteral("mButtonClear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/console/iconClearConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonClear->setIcon(icon2);

        gridLayout->addWidget(mButtonClear, 2, 1, 1, 1);

        mItemList = new QListView(QgsProcessingEnumModelerWidgetBase);
        mItemList->setObjectName(QStringLiteral("mItemList"));
        mItemList->setDragDropMode(QAbstractItemView::InternalMove);
        mItemList->setAlternatingRowColors(true);
        mItemList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(mItemList, 0, 0, 4, 1);

        mAllowMultiple = new QCheckBox(QgsProcessingEnumModelerWidgetBase);
        mAllowMultiple->setObjectName(QStringLiteral("mAllowMultiple"));

        gridLayout->addWidget(mAllowMultiple, 4, 0, 1, 2);


        retranslateUi(QgsProcessingEnumModelerWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingEnumModelerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingEnumModelerWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        mButtonRemove->setToolTip(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "Remove item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemove->setText(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonAdd->setToolTip(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "Add item", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAdd->setText(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonClear->setToolTip(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "Clear all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonClear->setText(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "\342\200\246", Q_NULLPTR));
        mAllowMultiple->setText(QApplication::translate("QgsProcessingEnumModelerWidgetBase", "Allow multiple selection", Q_NULLPTR));
        Q_UNUSED(QgsProcessingEnumModelerWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingEnumModelerWidgetBase: public Ui_QgsProcessingEnumModelerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGENUMMODELERWIDGETBASE_H
