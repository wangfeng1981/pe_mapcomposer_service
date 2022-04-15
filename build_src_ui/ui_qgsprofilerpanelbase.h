/********************************************************************************
** Form generated from reading UI file 'qgsprofilerpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROFILERPANELBASE_H
#define UI_QGSPROFILERPANELBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProfilerPanelBase
{
public:
    QAction *mActionClear;
    QAction *mActionRecord;
    QAction *mActionShowSuccessful;
    QAction *mActionShowTimeouts;
    QAction *mActionSaveLog;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mCategoryComboBox;
    QTreeView *mTreeView;

    void setupUi(QgsPanelWidget *QgsProfilerPanelBase)
    {
        if (QgsProfilerPanelBase->objectName().isEmpty())
            QgsProfilerPanelBase->setObjectName(QStringLiteral("QgsProfilerPanelBase"));
        QgsProfilerPanelBase->resize(700, 629);
        mActionClear = new QAction(QgsProfilerPanelBase);
        mActionClear->setObjectName(QStringLiteral("mActionClear"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClear->setIcon(icon);
        mActionRecord = new QAction(QgsProfilerPanelBase);
        mActionRecord->setObjectName(QStringLiteral("mActionRecord"));
        mActionRecord->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionPlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRecord->setIcon(icon1);
        mActionShowSuccessful = new QAction(QgsProfilerPanelBase);
        mActionShowSuccessful->setObjectName(QStringLiteral("mActionShowSuccessful"));
        mActionShowSuccessful->setCheckable(true);
        mActionShowTimeouts = new QAction(QgsProfilerPanelBase);
        mActionShowTimeouts->setObjectName(QStringLiteral("mActionShowTimeouts"));
        mActionShowTimeouts->setCheckable(true);
        mActionSaveLog = new QAction(QgsProfilerPanelBase);
        mActionSaveLog->setObjectName(QStringLiteral("mActionSaveLog"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveLog->setIcon(icon2);
        verticalLayout = new QVBoxLayout(QgsProfilerPanelBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(QgsProfilerPanelBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mCategoryComboBox = new QComboBox(QgsProfilerPanelBase);
        mCategoryComboBox->setObjectName(QStringLiteral("mCategoryComboBox"));

        horizontalLayout->addWidget(mCategoryComboBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        mTreeView = new QTreeView(QgsProfilerPanelBase);
        mTreeView->setObjectName(QStringLiteral("mTreeView"));

        verticalLayout->addWidget(mTreeView);


        retranslateUi(QgsProfilerPanelBase);

        QMetaObject::connectSlotsByName(QgsProfilerPanelBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProfilerPanelBase)
    {
        mActionClear->setText(QApplication::translate("QgsProfilerPanelBase", "Clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionClear->setToolTip(QApplication::translate("QgsProfilerPanelBase", "Clear Log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRecord->setText(QApplication::translate("QgsProfilerPanelBase", "Record Log", Q_NULLPTR));
        mActionShowSuccessful->setText(QApplication::translate("QgsProfilerPanelBase", "Show Successful Requests", Q_NULLPTR));
        mActionShowTimeouts->setText(QApplication::translate("QgsProfilerPanelBase", "Show Timeouts", Q_NULLPTR));
        mActionSaveLog->setText(QApplication::translate("QgsProfilerPanelBase", "Save Log\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("QgsProfilerPanelBase", "Category", Q_NULLPTR));
        Q_UNUSED(QgsProfilerPanelBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProfilerPanelBase: public Ui_QgsProfilerPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROFILERPANELBASE_H
