/********************************************************************************
** Form generated from reading UI file 'qgsprocessingmatrixmodelerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGMATRIXMODELERWIDGETBASE_H
#define UI_QGSPROCESSINGMATRIXMODELERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingMatrixModelerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTableView *mTableView;
    QToolButton *mButtonRemoveRow;
    QToolButton *mButtonClear;
    QSpacerItem *verticalSpacer;
    QCheckBox *mFixedRows;
    QToolButton *mButtonAddRow;
    QToolButton *mButtonAddColumn;
    QToolButton *mButtonRemoveColumn;

    void setupUi(QWidget *QgsProcessingMatrixModelerWidgetBase)
    {
        if (QgsProcessingMatrixModelerWidgetBase->objectName().isEmpty())
            QgsProcessingMatrixModelerWidgetBase->setObjectName(QStringLiteral("QgsProcessingMatrixModelerWidgetBase"));
        QgsProcessingMatrixModelerWidgetBase->resize(400, 300);
        QgsProcessingMatrixModelerWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsProcessingMatrixModelerWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTableView = new QTableView(QgsProcessingMatrixModelerWidgetBase);
        mTableView->setObjectName(QStringLiteral("mTableView"));
        mTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mTableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(mTableView, 0, 0, 8, 1);

        mButtonRemoveRow = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonRemoveRow->setObjectName(QStringLiteral("mButtonRemoveRow"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveRow->setIcon(icon);

        gridLayout->addWidget(mButtonRemoveRow, 4, 1, 1, 1);

        mButtonClear = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonClear->setObjectName(QStringLiteral("mButtonClear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/console/iconClearConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonClear->setIcon(icon1);

        gridLayout->addWidget(mButtonClear, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 172, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        mFixedRows = new QCheckBox(QgsProcessingMatrixModelerWidgetBase);
        mFixedRows->setObjectName(QStringLiteral("mFixedRows"));

        gridLayout->addWidget(mFixedRows, 8, 0, 1, 2);

        mButtonAddRow = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonAddRow->setObjectName(QStringLiteral("mButtonAddRow"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddRow->setIcon(icon2);

        gridLayout->addWidget(mButtonAddRow, 3, 1, 1, 1);

        mButtonAddColumn = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonAddColumn->setObjectName(QStringLiteral("mButtonAddColumn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddColumn->setIcon(icon3);

        gridLayout->addWidget(mButtonAddColumn, 1, 1, 1, 1);

        mButtonRemoveColumn = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonRemoveColumn->setObjectName(QStringLiteral("mButtonRemoveColumn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveColumn->setIcon(icon4);

        gridLayout->addWidget(mButtonRemoveColumn, 2, 1, 1, 1);


        retranslateUi(QgsProcessingMatrixModelerWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingMatrixModelerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingMatrixModelerWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        mButtonRemoveRow->setToolTip(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Remove row", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemoveRow->setText(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonClear->setToolTip(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Clear all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonClear->setText(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", Q_NULLPTR));
        mFixedRows->setText(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Fixed number of rows", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonAddRow->setToolTip(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Add row", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAddRow->setText(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonAddColumn->setToolTip(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Add column", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAddColumn->setText(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonRemoveColumn->setToolTip(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Remove column", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemoveColumn->setText(QApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsProcessingMatrixModelerWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingMatrixModelerWidgetBase: public Ui_QgsProcessingMatrixModelerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGMATRIXMODELERWIDGETBASE_H
