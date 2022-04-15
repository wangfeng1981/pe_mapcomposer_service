/********************************************************************************
** Form generated from reading UI file 'qgsidentifyresultsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSIDENTIFYRESULTSBASE_H
#define UI_QGSIDENTIFYRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsIdentifyResultsBase
{
public:
    QAction *mExpandAction;
    QAction *mCollapseAction;
    QAction *mExpandNewAction;
    QAction *mOpenFormAction;
    QAction *mClearResultsAction;
    QAction *mActionCopy;
    QAction *mActionPrint;
    QAction *mActionSelectFeatures;
    QAction *mActionSelectPolygon;
    QAction *mActionSelectFreehand;
    QAction *mActionSelectRadius;
    QAction *mActionAutoFeatureForm;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout;
    QToolBar *mIdentifyToolbar;
    QTreeWidget *lstResults;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblIdentifyMode;
    QComboBox *cmbIdentifyMode;
    QWidget *stackedWidgetPage2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tblResults;
    QWidget *stackedWidgetPage3;
    QVBoxLayout *verticalLayout_3;
    QwtPlot *mPlot;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblViewMode;
    QComboBox *cmbViewMode;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mHelpToolButton;

    void setupUi(QDialog *QgsIdentifyResultsBase)
    {
        if (QgsIdentifyResultsBase->objectName().isEmpty())
            QgsIdentifyResultsBase->setObjectName(QStringLiteral("QgsIdentifyResultsBase"));
        QgsIdentifyResultsBase->resize(465, 490);
        mExpandAction = new QAction(QgsIdentifyResultsBase);
        mExpandAction->setObjectName(QStringLiteral("mExpandAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandAction->setIcon(icon);
        mCollapseAction = new QAction(QgsIdentifyResultsBase);
        mCollapseAction->setObjectName(QStringLiteral("mCollapseAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseAction->setIcon(icon1);
        mExpandNewAction = new QAction(QgsIdentifyResultsBase);
        mExpandNewAction->setObjectName(QStringLiteral("mExpandNewAction"));
        mExpandNewAction->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionExpandNewTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandNewAction->setIcon(icon2);
        mOpenFormAction = new QAction(QgsIdentifyResultsBase);
        mOpenFormAction->setObjectName(QStringLiteral("mOpenFormAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionFormView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenFormAction->setIcon(icon3);
        mClearResultsAction = new QAction(QgsIdentifyResultsBase);
        mClearResultsAction->setObjectName(QStringLiteral("mClearResultsAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mClearResultsAction->setIcon(icon4);
        mActionCopy = new QAction(QgsIdentifyResultsBase);
        mActionCopy->setObjectName(QStringLiteral("mActionCopy"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopy->setIcon(icon5);
        mActionPrint = new QAction(QgsIdentifyResultsBase);
        mActionPrint->setObjectName(QStringLiteral("mActionPrint"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionFilePrint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPrint->setIcon(icon6);
        mActionSelectFeatures = new QAction(QgsIdentifyResultsBase);
        mActionSelectFeatures->setObjectName(QStringLiteral("mActionSelectFeatures"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionIdentifyByRectangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFeatures->setIcon(icon7);
        mActionSelectPolygon = new QAction(QgsIdentifyResultsBase);
        mActionSelectPolygon->setObjectName(QStringLiteral("mActionSelectPolygon"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/mActionIdentifyByPolygon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectPolygon->setIcon(icon8);
        mActionSelectFreehand = new QAction(QgsIdentifyResultsBase);
        mActionSelectFreehand->setObjectName(QStringLiteral("mActionSelectFreehand"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/mActionIdentifyByFreehand.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFreehand->setIcon(icon9);
        mActionSelectRadius = new QAction(QgsIdentifyResultsBase);
        mActionSelectRadius->setObjectName(QStringLiteral("mActionSelectRadius"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mActionIdentifyByRadius.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectRadius->setIcon(icon10);
        mActionAutoFeatureForm = new QAction(QgsIdentifyResultsBase);
        mActionAutoFeatureForm->setObjectName(QStringLiteral("mActionAutoFeatureForm"));
        mActionAutoFeatureForm->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(QgsIdentifyResultsBase);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(QgsIdentifyResultsBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        verticalLayout = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mIdentifyToolbar = new QToolBar(stackedWidgetPage1);
        mIdentifyToolbar->setObjectName(QStringLiteral("mIdentifyToolbar"));
        mIdentifyToolbar->setIconSize(QSize(16, 16));
        mIdentifyToolbar->setFloatable(false);

        verticalLayout->addWidget(mIdentifyToolbar);

        lstResults = new QTreeWidget(stackedWidgetPage1);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        lstResults->setHeaderItem(__qtreewidgetitem);
        lstResults->setObjectName(QStringLiteral("lstResults"));
        lstResults->setLineWidth(2);
        lstResults->setAlternatingRowColors(true);
        lstResults->setSortingEnabled(true);

        verticalLayout->addWidget(lstResults);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, -1);
        lblIdentifyMode = new QLabel(stackedWidgetPage1);
        lblIdentifyMode->setObjectName(QStringLiteral("lblIdentifyMode"));

        horizontalLayout_2->addWidget(lblIdentifyMode);

        cmbIdentifyMode = new QComboBox(stackedWidgetPage1);
        cmbIdentifyMode->setObjectName(QStringLiteral("cmbIdentifyMode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbIdentifyMode->sizePolicy().hasHeightForWidth());
        cmbIdentifyMode->setSizePolicy(sizePolicy);
        cmbIdentifyMode->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cmbIdentifyMode->setMinimumContentsLength(6);

        horizontalLayout_2->addWidget(cmbIdentifyMode);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QStringLiteral("stackedWidgetPage2"));
        verticalLayout_2 = new QVBoxLayout(stackedWidgetPage2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tblResults = new QTableWidget(stackedWidgetPage2);
        if (tblResults->columnCount() < 4)
            tblResults->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblResults->setObjectName(QStringLiteral("tblResults"));
        tblResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblResults->setSortingEnabled(false);

        verticalLayout_2->addWidget(tblResults);

        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QStringLiteral("stackedWidgetPage3"));
        verticalLayout_3 = new QVBoxLayout(stackedWidgetPage3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mPlot = new QwtPlot(stackedWidgetPage3);
        mPlot->setObjectName(QStringLiteral("mPlot"));

        verticalLayout_3->addWidget(mPlot);

        stackedWidget->addWidget(stackedWidgetPage3);

        verticalLayout_4->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, 5, -1);
        lblViewMode = new QLabel(QgsIdentifyResultsBase);
        lblViewMode->setObjectName(QStringLiteral("lblViewMode"));

        horizontalLayout_3->addWidget(lblViewMode);

        cmbViewMode = new QComboBox(QgsIdentifyResultsBase);
        cmbViewMode->setObjectName(QStringLiteral("cmbViewMode"));

        horizontalLayout_3->addWidget(cmbViewMode);

        horizontalSpacer_2 = new QSpacerItem(58, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        mHelpToolButton = new QToolButton(QgsIdentifyResultsBase);
        mHelpToolButton->setObjectName(QStringLiteral("mHelpToolButton"));
        mHelpToolButton->setEnabled(true);
        mHelpToolButton->setCheckable(false);

        horizontalLayout_3->addWidget(mHelpToolButton);


        verticalLayout_4->addLayout(horizontalLayout_3);


        mIdentifyToolbar->addAction(mOpenFormAction);
        mIdentifyToolbar->addSeparator();
        mIdentifyToolbar->addAction(mExpandAction);
        mIdentifyToolbar->addAction(mCollapseAction);
        mIdentifyToolbar->addAction(mExpandNewAction);
        mIdentifyToolbar->addSeparator();
        mIdentifyToolbar->addAction(mClearResultsAction);
        mIdentifyToolbar->addSeparator();
        mIdentifyToolbar->addAction(mActionCopy);
        mIdentifyToolbar->addAction(mActionPrint);
        mIdentifyToolbar->addSeparator();

        retranslateUi(QgsIdentifyResultsBase);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsIdentifyResultsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIdentifyResultsBase)
    {
        QgsIdentifyResultsBase->setWindowTitle(QApplication::translate("QgsIdentifyResultsBase", "Identify Results", Q_NULLPTR));
        mExpandAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Expand Tree", Q_NULLPTR));
        mCollapseAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Collapse Tree", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCollapseAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Collapse Tree", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mExpandNewAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Expand New Results", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mExpandNewAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Expand New Results by Default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOpenFormAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Open Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mOpenFormAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Open Form", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mClearResultsAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Clear Results", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mClearResultsAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Clear Results", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCopy->setText(QApplication::translate("QgsIdentifyResultsBase", "Copy Feature", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionCopy->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Copy the Identified Feature to Clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPrint->setText(QApplication::translate("QgsIdentifyResultsBase", "Print Response", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPrint->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Print Selected HTML Response", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSelectFeatures->setText(QApplication::translate("QgsIdentifyResultsBase", "Identify Feature(s)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectFeatures->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Identify Features by area or single click", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSelectPolygon->setText(QApplication::translate("QgsIdentifyResultsBase", "Identify Features by Polygon", Q_NULLPTR));
        mActionSelectFreehand->setText(QApplication::translate("QgsIdentifyResultsBase", "Identify Features by Freehand", Q_NULLPTR));
        mActionSelectRadius->setText(QApplication::translate("QgsIdentifyResultsBase", "Identify Features by Radius", Q_NULLPTR));
        mActionAutoFeatureForm->setText(QApplication::translate("QgsIdentifyResultsBase", "Auto open form for single feature results", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblIdentifyMode->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Select identify mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblIdentifyMode->setText(QApplication::translate("QgsIdentifyResultsBase", "Mode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tblResults->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsIdentifyResultsBase", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tblResults->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsIdentifyResultsBase", "FID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tblResults->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsIdentifyResultsBase", "Attribute", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tblResults->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsIdentifyResultsBase", "Value", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblViewMode->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Select view mode for raster layers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblViewMode->setText(QApplication::translate("QgsIdentifyResultsBase", "View", Q_NULLPTR));
        mHelpToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsIdentifyResultsBase: public Ui_QgsIdentifyResultsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSIDENTIFYRESULTSBASE_H
