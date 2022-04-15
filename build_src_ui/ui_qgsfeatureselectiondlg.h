/********************************************************************************
** Form generated from reading UI file 'qgsfeatureselectiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFEATURESELECTIONDLG_H
#define UI_QGSFEATURESELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdualview.h"
#include "qgsfeaturefilterwidget_p.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFeatureSelectionDlg
{
public:
    QAction *mActionSearchForm;
    QAction *mActionExpressionSelect;
    QAction *mActionSelectAll;
    QAction *mActionInvertSelection;
    QAction *mActionRemoveSelection;
    QAction *mActionSelectedToTop;
    QAction *mActionPanMapToSelectedRows;
    QAction *mActionZoomMapToSelectedRows;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QgsMessageBar *mMessageBar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsDualView *mDualView;
    QWidget *page;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout;
    QgsFeatureFilterWidget *mFeatureFilterWidget;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFeatureSelectionDlg)
    {
        if (QgsFeatureSelectionDlg->objectName().isEmpty())
            QgsFeatureSelectionDlg->setObjectName(QStringLiteral("QgsFeatureSelectionDlg"));
        QgsFeatureSelectionDlg->resize(468, 496);
        mActionSearchForm = new QAction(QgsFeatureSelectionDlg);
        mActionSearchForm->setObjectName(QStringLiteral("mActionSearchForm"));
        mActionSearchForm->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFilter2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSearchForm->setIcon(icon);
        mActionExpressionSelect = new QAction(QgsFeatureSelectionDlg);
        mActionExpressionSelect->setObjectName(QStringLiteral("mActionExpressionSelect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconExpressionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExpressionSelect->setIcon(icon1);
        mActionSelectAll = new QAction(QgsFeatureSelectionDlg);
        mActionSelectAll->setObjectName(QStringLiteral("mActionSelectAll"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon2);
        mActionInvertSelection = new QAction(QgsFeatureSelectionDlg);
        mActionInvertSelection->setObjectName(QStringLiteral("mActionInvertSelection"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvertSelection->setIcon(icon3);
        mActionRemoveSelection = new QAction(QgsFeatureSelectionDlg);
        mActionRemoveSelection->setObjectName(QStringLiteral("mActionRemoveSelection"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveSelection->setIcon(icon4);
        mActionSelectedToTop = new QAction(QgsFeatureSelectionDlg);
        mActionSelectedToTop->setObjectName(QStringLiteral("mActionSelectedToTop"));
        mActionSelectedToTop->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionSelectedToTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectedToTop->setIcon(icon5);
        mActionPanMapToSelectedRows = new QAction(QgsFeatureSelectionDlg);
        mActionPanMapToSelectedRows->setObjectName(QStringLiteral("mActionPanMapToSelectedRows"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionPanToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPanMapToSelectedRows->setIcon(icon6);
        mActionZoomMapToSelectedRows = new QAction(QgsFeatureSelectionDlg);
        mActionZoomMapToSelectedRows->setObjectName(QStringLiteral("mActionZoomMapToSelectedRows"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomMapToSelectedRows->setIcon(icon7);
        verticalLayout = new QVBoxLayout(QgsFeatureSelectionDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mToolbar = new QToolBar(QgsFeatureSelectionDlg);
        mToolbar->setObjectName(QStringLiteral("mToolbar"));
        mToolbar->setIconSize(QSize(18, 18));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mMessageBar = new QgsMessageBar(QgsFeatureSelectionDlg);
        mMessageBar->setObjectName(QStringLiteral("mMessageBar"));

        verticalLayout->addWidget(mMessageBar);

        scrollArea = new QScrollArea(QgsFeatureSelectionDlg);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 389));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mDualView = new QgsDualView(scrollAreaWidgetContents);
        mDualView->setObjectName(QStringLiteral("mDualView"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        mDualView->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        mDualView->addWidget(page_2);

        verticalLayout_2->addWidget(mDualView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFeatureFilterWidget = new QgsFeatureFilterWidget(QgsFeatureSelectionDlg);
        mFeatureFilterWidget->setObjectName(QStringLiteral("mFeatureFilterWidget"));

        horizontalLayout->addWidget(mFeatureFilterWidget);

        mButtonBox = new QDialogButtonBox(QgsFeatureSelectionDlg);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout);


        mToolbar->addAction(mActionExpressionSelect);
        mToolbar->addAction(mActionSelectAll);
        mToolbar->addAction(mActionInvertSelection);
        mToolbar->addAction(mActionRemoveSelection);
        mToolbar->addAction(mActionSearchForm);
        mToolbar->addAction(mActionSelectedToTop);
        mToolbar->addAction(mActionZoomMapToSelectedRows);
        mToolbar->addAction(mActionPanMapToSelectedRows);

        retranslateUi(QgsFeatureSelectionDlg);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFeatureSelectionDlg, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFeatureSelectionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFeatureSelectionDlg);
    } // setupUi

    void retranslateUi(QDialog *QgsFeatureSelectionDlg)
    {
        QgsFeatureSelectionDlg->setWindowTitle(QApplication::translate("QgsFeatureSelectionDlg", "Link existing child features", Q_NULLPTR));
        mActionSearchForm->setText(QApplication::translate("QgsFeatureSelectionDlg", "Select/filter features using form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSearchForm->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Select/filter features using form (Ctrl+F)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSearchForm->setShortcut(QApplication::translate("QgsFeatureSelectionDlg", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionExpressionSelect->setText(QApplication::translate("QgsFeatureSelectionDlg", "Select features using an expression", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExpressionSelect->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Select features using an expression", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionSelectAll->setText(QApplication::translate("QgsFeatureSelectionDlg", "Select all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectAll->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Select all (Ctrl+A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectAll->setShortcut(QApplication::translate("QgsFeatureSelectionDlg", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionInvertSelection->setText(QApplication::translate("QgsFeatureSelectionDlg", "Invert selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionInvertSelection->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Invert selection (Ctrl+R)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionInvertSelection->setShortcut(QApplication::translate("QgsFeatureSelectionDlg", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionRemoveSelection->setText(QApplication::translate("QgsFeatureSelectionDlg", "Deselect all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRemoveSelection->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Deselect all (Ctrl+Shift+A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionRemoveSelection->setShortcut(QApplication::translate("QgsFeatureSelectionDlg", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionSelectedToTop->setText(QApplication::translate("QgsFeatureSelectionDlg", "Move selection to top", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionSelectedToTop->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Move selection to top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPanMapToSelectedRows->setText(QApplication::translate("QgsFeatureSelectionDlg", "Pan map to the selected rows", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPanMapToSelectedRows->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Pan map to the selected rows (Ctrl+P)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionPanMapToSelectedRows->setShortcut(QApplication::translate("QgsFeatureSelectionDlg", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        mActionZoomMapToSelectedRows->setText(QApplication::translate("QgsFeatureSelectionDlg", "Zoom map to the selected rows", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionZoomMapToSelectedRows->setToolTip(QApplication::translate("QgsFeatureSelectionDlg", "Zoom map to the selected rows (Ctrl+J)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomMapToSelectedRows->setShortcut(QApplication::translate("QgsFeatureSelectionDlg", "Ctrl+J", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class QgsFeatureSelectionDlg: public Ui_QgsFeatureSelectionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFEATURESELECTIONDLG_H
