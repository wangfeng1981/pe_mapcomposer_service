/********************************************************************************
** Form generated from reading UI file 'qgsvectortilebasicrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILEBASICRENDERERWIDGET_H
#define UI_QGSVECTORTILEBASICRENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileBasicRendererWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewStyles;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAddRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnEditRule;
    QSpacerItem *horizontalSpacer;
    QLabel *mLabelCurrentZoom;
    QCheckBox *mCheckVisibleOnly;

    void setupUi(QWidget *QgsVectorTileBasicRendererWidget)
    {
        if (QgsVectorTileBasicRendererWidget->objectName().isEmpty())
            QgsVectorTileBasicRendererWidget->setObjectName(QStringLiteral("QgsVectorTileBasicRendererWidget"));
        QgsVectorTileBasicRendererWidget->resize(557, 424);
        verticalLayout = new QVBoxLayout(QgsVectorTileBasicRendererWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewStyles = new QTreeView(QgsVectorTileBasicRendererWidget);
        viewStyles->setObjectName(QStringLiteral("viewStyles"));
        viewStyles->setAcceptDrops(true);
        viewStyles->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewStyles->setDragEnabled(true);
        viewStyles->setDragDropMode(QAbstractItemView::InternalMove);
        viewStyles->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewStyles->setRootIsDecorated(false);

        verticalLayout->addWidget(viewStyles);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAddRule = new QToolButton(QgsVectorTileBasicRendererWidget);
        btnAddRule->setObjectName(QStringLiteral("btnAddRule"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);
        btnAddRule->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(btnAddRule);

        btnRemoveRule = new QPushButton(QgsVectorTileBasicRendererWidget);
        btnRemoveRule->setObjectName(QStringLiteral("btnRemoveRule"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon1);

        horizontalLayout->addWidget(btnRemoveRule);

        btnEditRule = new QPushButton(QgsVectorTileBasicRendererWidget);
        btnEditRule->setObjectName(QStringLiteral("btnEditRule"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon2);

        horizontalLayout->addWidget(btnEditRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mLabelCurrentZoom = new QLabel(QgsVectorTileBasicRendererWidget);
        mLabelCurrentZoom->setObjectName(QStringLiteral("mLabelCurrentZoom"));

        horizontalLayout->addWidget(mLabelCurrentZoom);

        mCheckVisibleOnly = new QCheckBox(QgsVectorTileBasicRendererWidget);
        mCheckVisibleOnly->setObjectName(QStringLiteral("mCheckVisibleOnly"));

        horizontalLayout->addWidget(mCheckVisibleOnly);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsVectorTileBasicRendererWidget);

        QMetaObject::connectSlotsByName(QgsVectorTileBasicRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorTileBasicRendererWidget)
    {
#ifndef QT_NO_TOOLTIP
        btnAddRule->setToolTip(QApplication::translate("QgsVectorTileBasicRendererWidget", "Add rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveRule->setToolTip(QApplication::translate("QgsVectorTileBasicRendererWidget", "Remove selected rules", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditRule->setToolTip(QApplication::translate("QgsVectorTileBasicRendererWidget", "Edit current rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditRule->setText(QString());
        mLabelCurrentZoom->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCheckVisibleOnly->setToolTip(QApplication::translate("QgsVectorTileBasicRendererWidget", "Hides any rules which are invisible because they fall outside the current map canvas zoom level", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckVisibleOnly->setText(QApplication::translate("QgsVectorTileBasicRendererWidget", "Visible rules only", Q_NULLPTR));
        Q_UNUSED(QgsVectorTileBasicRendererWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileBasicRendererWidget: public Ui_QgsVectorTileBasicRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILEBASICRENDERERWIDGET_H
