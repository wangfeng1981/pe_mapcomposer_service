/********************************************************************************
** Form generated from reading UI file 'qgsmapstylingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPSTYLINGWIDGETBASE_H
#define UI_QGSMAPSTYLINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmaplayercombobox.h"
#include "qgspanelwidgetstack.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayerStylingWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QgsMapLayerComboBox *mLayerCombo;
    QgsPanelWidgetStack *mWidgetStack;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mUndoButton;
    QToolButton *mRedoButton;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mLiveApplyCheck;
    QDialogButtonBox *mButtonBox;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout;
    QListWidget *mOptionsListWidget;

    void setupUi(QWidget *QgsLayerStylingWidgetBase)
    {
        if (QgsLayerStylingWidgetBase->objectName().isEmpty())
            QgsLayerStylingWidgetBase->setObjectName(QStringLiteral("QgsLayerStylingWidgetBase"));
        QgsLayerStylingWidgetBase->resize(367, 466);
        QgsLayerStylingWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(QgsLayerStylingWidgetBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        mStackedWidget = new QStackedWidget(QgsLayerStylingWidgetBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mLayerCombo = new QgsMapLayerComboBox(page_2);
        mLayerCombo->setObjectName(QStringLiteral("mLayerCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLayerCombo->sizePolicy().hasHeightForWidth());
        mLayerCombo->setSizePolicy(sizePolicy);
        mLayerCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        horizontalLayout->addWidget(mLayerCombo);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        mWidgetStack = new QgsPanelWidgetStack(page_2);
        mWidgetStack->setObjectName(QStringLiteral("mWidgetStack"));

        gridLayout->addWidget(mWidgetStack, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mUndoButton = new QToolButton(page_2);
        mUndoButton->setObjectName(QStringLiteral("mUndoButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUndoButton->setIcon(icon);

        horizontalLayout_2->addWidget(mUndoButton);

        mRedoButton = new QToolButton(page_2);
        mRedoButton->setObjectName(QStringLiteral("mRedoButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionRedo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRedoButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mRedoButton);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        mLiveApplyCheck = new QCheckBox(page_2);
        mLiveApplyCheck->setObjectName(QStringLiteral("mLiveApplyCheck"));
        mLiveApplyCheck->setChecked(true);
        mLiveApplyCheck->setAutoRepeat(false);

        horizontalLayout_2->addWidget(mLiveApplyCheck);

        mButtonBox = new QDialogButtonBox(page_2);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy1);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply);

        horizontalLayout_2->addWidget(mButtonBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        mOptionsListFrame = new QFrame(page_2);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mOptionsListFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOptionsListWidget->sizePolicy().hasHeightForWidth());
        mOptionsListWidget->setSizePolicy(sizePolicy2);
        mOptionsListWidget->setMinimumSize(QSize(38, 0));
        mOptionsListWidget->setFrameShape(QFrame::NoFrame);
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout->addWidget(mOptionsListWidget);


        gridLayout->addWidget(mOptionsListFrame, 1, 0, 2, 1);

        mStackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(mStackedWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(mLayerCombo, mUndoButton);
        QWidget::setTabOrder(mUndoButton, mRedoButton);
        QWidget::setTabOrder(mRedoButton, mLiveApplyCheck);

        retranslateUi(QgsLayerStylingWidgetBase);

        mStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsLayerStylingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayerStylingWidgetBase)
    {
        label_2->setText(QApplication::translate("QgsLayerStylingWidgetBase", "Not supported or no layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mUndoButton->setToolTip(QApplication::translate("QgsLayerStylingWidgetBase", "Undo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUndoButton->setText(QApplication::translate("QgsLayerStylingWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRedoButton->setToolTip(QApplication::translate("QgsLayerStylingWidgetBase", "Redo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRedoButton->setText(QApplication::translate("QgsLayerStylingWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLiveApplyCheck->setToolTip(QApplication::translate("QgsLayerStylingWidgetBase", "If checked, the map canvas will automatically update whenever an option has been changed without the requirement to click Apply", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLiveApplyCheck->setText(QApplication::translate("QgsLayerStylingWidgetBase", "Live update", Q_NULLPTR));
        Q_UNUSED(QgsLayerStylingWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayerStylingWidgetBase: public Ui_QgsLayerStylingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPSTYLINGWIDGETBASE_H
