/********************************************************************************
** Form generated from reading UI file 'qgsdualviewbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDUALVIEWBASE_H
#define UI_QGSDUALVIEWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "attributetable/qgsattributetableview.h"
#include "attributetable/qgsfeaturelistview.h"
#include "qgspanelwidgetstack.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDualViewBase
{
public:
    QWidget *mPageTableView;
    QGridLayout *gridLayout_3;
    QSplitter *mConditionalSplitter;
    QgsAttributeTableView *mTableView;
    QgsPanelWidgetStack *mConditionalFormatWidgetStack;
    QWidget *mPageAttributeEditor;
    QAction *mActionExpressionPreview;
    QAction *mActionPreviewColumnsMenu;
    QGridLayout *gridLayout_2;
    QSplitter *mAttributeEditorViewSplitter;
    QWidget *listViewWdg;
    QVBoxLayout *verticalLayout_2;
    QToolButton *mFeatureListPreviewButton;
    QgsFeatureListView *mFeatureListView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *mFirstFeatureButton;
    QToolButton *mPreviousFeatureButton;
    QToolButton *mNextFeatureButton;
    QToolButton *mLastFeatureButton;
    QLabel *mProgressCount;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFlashButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mAutoPanButton;
    QToolButton *mAutoZoomButton;
    QFrame *mAttributeEditor;
    QGridLayout *gridLayout;

    void setupUi(QStackedWidget *QgsDualViewBase)
    {
        if (QgsDualViewBase->objectName().isEmpty())
            QgsDualViewBase->setObjectName(QStringLiteral("QgsDualViewBase"));
        QgsDualViewBase->resize(495, 507);
        mPageTableView = new QWidget();
        mPageTableView->setObjectName(QStringLiteral("mPageTableView"));
        gridLayout_3 = new QGridLayout(mPageTableView);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mConditionalSplitter = new QSplitter(mPageTableView);
        mConditionalSplitter->setObjectName(QStringLiteral("mConditionalSplitter"));
        mConditionalSplitter->setOrientation(Qt::Horizontal);
        mConditionalSplitter->setChildrenCollapsible(false);
        mTableView = new QgsAttributeTableView(mConditionalSplitter);
        mTableView->setObjectName(QStringLiteral("mTableView"));
        mTableView->setAlternatingRowColors(true);
        mConditionalSplitter->addWidget(mTableView);
        mConditionalFormatWidgetStack = new QgsPanelWidgetStack(mConditionalSplitter);
        mConditionalFormatWidgetStack->setObjectName(QStringLiteral("mConditionalFormatWidgetStack"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mConditionalFormatWidgetStack->sizePolicy().hasHeightForWidth());
        mConditionalFormatWidgetStack->setSizePolicy(sizePolicy);
        mConditionalSplitter->addWidget(mConditionalFormatWidgetStack);

        gridLayout_3->addWidget(mConditionalSplitter, 0, 0, 1, 1);

        QgsDualViewBase->addWidget(mPageTableView);
        mPageAttributeEditor = new QWidget();
        mPageAttributeEditor->setObjectName(QStringLiteral("mPageAttributeEditor"));
        mActionExpressionPreview = new QAction(mPageAttributeEditor);
        mActionExpressionPreview->setObjectName(QStringLiteral("mActionExpressionPreview"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExpressionPreview->setIcon(icon);
        mActionPreviewColumnsMenu = new QAction(mPageAttributeEditor);
        mActionPreviewColumnsMenu->setObjectName(QStringLiteral("mActionPreviewColumnsMenu"));
        gridLayout_2 = new QGridLayout(mPageAttributeEditor);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mAttributeEditorViewSplitter = new QSplitter(mPageAttributeEditor);
        mAttributeEditorViewSplitter->setObjectName(QStringLiteral("mAttributeEditorViewSplitter"));
        mAttributeEditorViewSplitter->setOrientation(Qt::Horizontal);
        listViewWdg = new QWidget(mAttributeEditorViewSplitter);
        listViewWdg->setObjectName(QStringLiteral("listViewWdg"));
        verticalLayout_2 = new QVBoxLayout(listViewWdg);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mFeatureListPreviewButton = new QToolButton(listViewWdg);
        mFeatureListPreviewButton->setObjectName(QStringLiteral("mFeatureListPreviewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFeatureListPreviewButton->sizePolicy().hasHeightForWidth());
        mFeatureListPreviewButton->setSizePolicy(sizePolicy1);
        mFeatureListPreviewButton->setPopupMode(QToolButton::InstantPopup);
        mFeatureListPreviewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mFeatureListPreviewButton->setAutoRaise(true);
        mFeatureListPreviewButton->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(mFeatureListPreviewButton);

        mFeatureListView = new QgsFeatureListView(listViewWdg);
        mFeatureListView->setObjectName(QStringLiteral("mFeatureListView"));
        sizePolicy.setHeightForWidth(mFeatureListView->sizePolicy().hasHeightForWidth());
        mFeatureListView->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mFeatureListView);

        widget = new QWidget(listViewWdg);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mFirstFeatureButton = new QToolButton(widget);
        mFirstFeatureButton->setObjectName(QStringLiteral("mFirstFeatureButton"));
        mFirstFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionDoubleArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFirstFeatureButton->setIcon(icon1);
        mFirstFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mFirstFeatureButton);

        mPreviousFeatureButton = new QToolButton(widget);
        mPreviousFeatureButton->setObjectName(QStringLiteral("mPreviousFeatureButton"));
        mPreviousFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPreviousFeatureButton->setIcon(icon2);
        mPreviousFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mPreviousFeatureButton);

        mNextFeatureButton = new QToolButton(widget);
        mNextFeatureButton->setObjectName(QStringLiteral("mNextFeatureButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mNextFeatureButton->sizePolicy().hasHeightForWidth());
        mNextFeatureButton->setSizePolicy(sizePolicy3);
        mNextFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNextFeatureButton->setIcon(icon3);
        mNextFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mNextFeatureButton);

        mLastFeatureButton = new QToolButton(widget);
        mLastFeatureButton->setObjectName(QStringLiteral("mLastFeatureButton"));
        mLastFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionDoubleArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLastFeatureButton->setIcon(icon4);
        mLastFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mLastFeatureButton);

        mProgressCount = new QLabel(widget);
        mProgressCount->setObjectName(QStringLiteral("mProgressCount"));
        QFont font;
        font.setPointSize(11);
        mProgressCount->setFont(font);

        horizontalLayout->addWidget(mProgressCount);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mFlashButton = new QToolButton(widget);
        mFlashButton->setObjectName(QStringLiteral("mFlashButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionHighlightFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFlashButton->setIcon(icon5);
        mFlashButton->setCheckable(true);
        mFlashButton->setAutoRaise(true);

        horizontalLayout->addWidget(mFlashButton);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mAutoPanButton = new QToolButton(widget);
        mAutoPanButton->setObjectName(QStringLiteral("mAutoPanButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionPanTo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAutoPanButton->setIcon(icon6);
        mAutoPanButton->setCheckable(true);
        mAutoPanButton->setAutoRaise(true);

        horizontalLayout->addWidget(mAutoPanButton);

        mAutoZoomButton = new QToolButton(widget);
        mAutoZoomButton->setObjectName(QStringLiteral("mAutoZoomButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionZoomTo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAutoZoomButton->setIcon(icon7);
        mAutoZoomButton->setCheckable(true);
        mAutoZoomButton->setAutoRaise(true);

        horizontalLayout->addWidget(mAutoZoomButton);

        horizontalLayout->setStretch(5, 1);

        verticalLayout_2->addWidget(widget);

        mAttributeEditorViewSplitter->addWidget(listViewWdg);
        mAttributeEditor = new QFrame(mAttributeEditorViewSplitter);
        mAttributeEditor->setObjectName(QStringLiteral("mAttributeEditor"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mAttributeEditor->sizePolicy().hasHeightForWidth());
        mAttributeEditor->setSizePolicy(sizePolicy4);
        mAttributeEditor->setFrameShape(QFrame::StyledPanel);
        mAttributeEditor->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mAttributeEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mAttributeEditorViewSplitter->addWidget(mAttributeEditor);

        gridLayout_2->addWidget(mAttributeEditorViewSplitter, 0, 0, 1, 1);

        QgsDualViewBase->addWidget(mPageAttributeEditor);

        retranslateUi(QgsDualViewBase);

        QgsDualViewBase->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDualViewBase);
    } // setupUi

    void retranslateUi(QStackedWidget *QgsDualViewBase)
    {
        mActionExpressionPreview->setText(QApplication::translate("QgsDualViewBase", "Expression", Q_NULLPTR));
        mActionPreviewColumnsMenu->setText(QApplication::translate("QgsDualViewBase", "Column Preview", Q_NULLPTR));
        mFeatureListPreviewButton->setText(QApplication::translate("QgsDualViewBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFirstFeatureButton->setToolTip(QApplication::translate("QgsDualViewBase", "Navigate to first feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFirstFeatureButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPreviousFeatureButton->setToolTip(QApplication::translate("QgsDualViewBase", "Navigate to previous feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mPreviousFeatureButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mNextFeatureButton->setToolTip(QApplication::translate("QgsDualViewBase", "Navigate to next feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNextFeatureButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mLastFeatureButton->setToolTip(QApplication::translate("QgsDualViewBase", "Navigate to last feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLastFeatureButton->setText(QString());
        mProgressCount->setText(QString());
#ifndef QT_NO_TOOLTIP
        mFlashButton->setToolTip(QApplication::translate("QgsDualViewBase", "Highlight current feature on map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFlashButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAutoPanButton->setToolTip(QApplication::translate("QgsDualViewBase", "Automatically pan to the current feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAutoPanButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAutoZoomButton->setToolTip(QApplication::translate("QgsDualViewBase", "Automatically zoom to the current feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAutoZoomButton->setText(QString());
        Q_UNUSED(QgsDualViewBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDualViewBase: public Ui_QgsDualViewBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDUALVIEWBASE_H
