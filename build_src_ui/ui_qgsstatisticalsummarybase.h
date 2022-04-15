/********************************************************************************
** Form generated from reading UI file 'qgsstatisticalsummarybase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTATISTICALSUMMARYBASE_H
#define UI_QGSSTATISTICALSUMMARYBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStatisticalSummaryWidgetBase
{
public:
    QWidget *mContents;
    QVBoxLayout *verticalLayout;
    QgsMapLayerComboBox *mLayerComboBox;
    QgsFieldExpressionWidget *mFieldExpressionWidget;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *mCalculatingProgressBar;
    QPushButton *mCancelButton;
    QTableWidget *mStatisticsTable;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mSelectedOnlyCheckBox;
    QToolButton *mButtonCopy;
    QToolButton *mButtonRefresh;
    QToolButton *mOptionsToolButton;

    void setupUi(QgsDockWidget *QgsStatisticalSummaryWidgetBase)
    {
        if (QgsStatisticalSummaryWidgetBase->objectName().isEmpty())
            QgsStatisticalSummaryWidgetBase->setObjectName(QStringLiteral("QgsStatisticalSummaryWidgetBase"));
        QgsStatisticalSummaryWidgetBase->resize(291, 376);
        mContents = new QWidget();
        mContents->setObjectName(QStringLiteral("mContents"));
        verticalLayout = new QVBoxLayout(mContents);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mLayerComboBox = new QgsMapLayerComboBox(mContents);
        mLayerComboBox->setObjectName(QStringLiteral("mLayerComboBox"));

        verticalLayout->addWidget(mLayerComboBox);

        mFieldExpressionWidget = new QgsFieldExpressionWidget(mContents);
        mFieldExpressionWidget->setObjectName(QStringLiteral("mFieldExpressionWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mFieldExpressionWidget->setSizePolicy(sizePolicy);
        mFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(mFieldExpressionWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mCalculatingProgressBar = new QProgressBar(mContents);
        mCalculatingProgressBar->setObjectName(QStringLiteral("mCalculatingProgressBar"));
        mCalculatingProgressBar->setValue(0);

        horizontalLayout_3->addWidget(mCalculatingProgressBar);

        mCancelButton = new QPushButton(mContents);
        mCancelButton->setObjectName(QStringLiteral("mCancelButton"));

        horizontalLayout_3->addWidget(mCancelButton);


        verticalLayout->addLayout(horizontalLayout_3);

        mStatisticsTable = new QTableWidget(mContents);
        if (mStatisticsTable->columnCount() < 2)
            mStatisticsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mStatisticsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mStatisticsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mStatisticsTable->setObjectName(QStringLiteral("mStatisticsTable"));
        mStatisticsTable->setAlternatingRowColors(true);
        mStatisticsTable->horizontalHeader()->setVisible(true);
        mStatisticsTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(mStatisticsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mSelectedOnlyCheckBox = new QCheckBox(mContents);
        mSelectedOnlyCheckBox->setObjectName(QStringLiteral("mSelectedOnlyCheckBox"));

        horizontalLayout->addWidget(mSelectedOnlyCheckBox);

        mButtonCopy = new QToolButton(mContents);
        mButtonCopy->setObjectName(QStringLiteral("mButtonCopy"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopy->setIcon(icon);
        mButtonCopy->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonCopy);

        mButtonRefresh = new QToolButton(mContents);
        mButtonRefresh->setObjectName(QStringLiteral("mButtonRefresh"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRefresh->setIcon(icon1);
        mButtonRefresh->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonRefresh);

        mOptionsToolButton = new QToolButton(mContents);
        mOptionsToolButton->setObjectName(QStringLiteral("mOptionsToolButton"));
        mOptionsToolButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(mOptionsToolButton);


        verticalLayout->addLayout(horizontalLayout);

        QgsStatisticalSummaryWidgetBase->setWidget(mContents);

        retranslateUi(QgsStatisticalSummaryWidgetBase);

        QMetaObject::connectSlotsByName(QgsStatisticalSummaryWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsStatisticalSummaryWidgetBase)
    {
        QgsStatisticalSummaryWidgetBase->setWindowTitle(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Statistics", Q_NULLPTR));
        mCancelButton->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Cancel", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mStatisticsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Statistic", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mStatisticsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Value", Q_NULLPTR));
        mSelectedOnlyCheckBox->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Selected features only", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonCopy->setToolTip(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Copy Statistics to Clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonCopy->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonRefresh->setToolTip(QApplication::translate("QgsStatisticalSummaryWidgetBase", "Recalculate Statistics", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRefresh->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "\342\200\246", Q_NULLPTR));
        mOptionsToolButton->setText(QApplication::translate("QgsStatisticalSummaryWidgetBase", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsStatisticalSummaryWidgetBase: public Ui_QgsStatisticalSummaryWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTATISTICALSUMMARYBASE_H
