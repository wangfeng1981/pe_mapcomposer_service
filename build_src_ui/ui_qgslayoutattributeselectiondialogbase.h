/********************************************************************************
** Form generated from reading UI file 'qgslayoutattributeselectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTATTRIBUTESELECTIONDIALOGBASE_H
#define UI_QGSLAYOUTATTRIBUTESELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutAttributeSelectionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QGroupBox *mAttributesGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mColumnUpPushButton;
    QPushButton *mColumnDownPushButton;
    QPushButton *mAddColumnPushButton;
    QPushButton *mRemoveColumnPushButton;
    QPushButton *mResetColumnsPushButton;
    QPushButton *mClearColumnsPushButton;
    QSpacerItem *horizontalSpacer;
    QTableView *mColumnsTableView;
    QGroupBox *mSortingGroupBox;
    QGridLayout *gridLayout_3;
    QTableView *mSortColumnTableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *mSortColumnUpPushButton;
    QPushButton *mSortColumnDownPushButton;
    QPushButton *mAddSortColumnPushButton;
    QPushButton *mRemoveSortColumnPushButton;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLayoutAttributeSelectionDialogBase)
    {
        if (QgsLayoutAttributeSelectionDialogBase->objectName().isEmpty())
            QgsLayoutAttributeSelectionDialogBase->setObjectName(QStringLiteral("QgsLayoutAttributeSelectionDialogBase"));
        QgsLayoutAttributeSelectionDialogBase->resize(533, 729);
        gridLayout_2 = new QGridLayout(QgsLayoutAttributeSelectionDialogBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(QgsLayoutAttributeSelectionDialogBase);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        mAttributesGroupBox = new QGroupBox(splitter);
        mAttributesGroupBox->setObjectName(QStringLiteral("mAttributesGroupBox"));
        gridLayout = new QGridLayout(mAttributesGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mColumnUpPushButton = new QPushButton(mAttributesGroupBox);
        mColumnUpPushButton->setObjectName(QStringLiteral("mColumnUpPushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColumnUpPushButton->setIcon(icon);

        horizontalLayout_2->addWidget(mColumnUpPushButton);

        mColumnDownPushButton = new QPushButton(mAttributesGroupBox);
        mColumnDownPushButton->setObjectName(QStringLiteral("mColumnDownPushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColumnDownPushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mColumnDownPushButton);

        mAddColumnPushButton = new QPushButton(mAttributesGroupBox);
        mAddColumnPushButton->setObjectName(QStringLiteral("mAddColumnPushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddColumnPushButton->setIcon(icon2);

        horizontalLayout_2->addWidget(mAddColumnPushButton);

        mRemoveColumnPushButton = new QPushButton(mAttributesGroupBox);
        mRemoveColumnPushButton->setObjectName(QStringLiteral("mRemoveColumnPushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveColumnPushButton->setIcon(icon3);

        horizontalLayout_2->addWidget(mRemoveColumnPushButton);

        mResetColumnsPushButton = new QPushButton(mAttributesGroupBox);
        mResetColumnsPushButton->setObjectName(QStringLiteral("mResetColumnsPushButton"));

        horizontalLayout_2->addWidget(mResetColumnsPushButton);

        mClearColumnsPushButton = new QPushButton(mAttributesGroupBox);
        mClearColumnsPushButton->setObjectName(QStringLiteral("mClearColumnsPushButton"));

        horizontalLayout_2->addWidget(mClearColumnsPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        mColumnsTableView = new QTableView(mAttributesGroupBox);
        mColumnsTableView->setObjectName(QStringLiteral("mColumnsTableView"));
        mColumnsTableView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mColumnsTableView->setProperty("showDropIndicator", QVariant(false));
        mColumnsTableView->setDragEnabled(false);
        mColumnsTableView->setDragDropOverwriteMode(false);
        mColumnsTableView->setDragDropMode(QAbstractItemView::NoDragDrop);
        mColumnsTableView->setDefaultDropAction(Qt::IgnoreAction);
        mColumnsTableView->setSelectionMode(QAbstractItemView::MultiSelection);
        mColumnsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mColumnsTableView->setWordWrap(false);
        mColumnsTableView->setCornerButtonEnabled(false);

        gridLayout->addWidget(mColumnsTableView, 0, 0, 1, 2);

        splitter->addWidget(mAttributesGroupBox);
        mSortingGroupBox = new QGroupBox(splitter);
        mSortingGroupBox->setObjectName(QStringLiteral("mSortingGroupBox"));
        gridLayout_3 = new QGridLayout(mSortingGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mSortColumnTableView = new QTableView(mSortingGroupBox);
        mSortColumnTableView->setObjectName(QStringLiteral("mSortColumnTableView"));
        mSortColumnTableView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mSortColumnTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        mSortColumnTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_3->addWidget(mSortColumnTableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mSortColumnUpPushButton = new QPushButton(mSortingGroupBox);
        mSortColumnUpPushButton->setObjectName(QStringLiteral("mSortColumnUpPushButton"));
        mSortColumnUpPushButton->setIcon(icon);

        horizontalLayout->addWidget(mSortColumnUpPushButton);

        mSortColumnDownPushButton = new QPushButton(mSortingGroupBox);
        mSortColumnDownPushButton->setObjectName(QStringLiteral("mSortColumnDownPushButton"));
        mSortColumnDownPushButton->setIcon(icon1);

        horizontalLayout->addWidget(mSortColumnDownPushButton);

        mAddSortColumnPushButton = new QPushButton(mSortingGroupBox);
        mAddSortColumnPushButton->setObjectName(QStringLiteral("mAddSortColumnPushButton"));
        mAddSortColumnPushButton->setMaximumSize(QSize(16777215, 16777215));
        mAddSortColumnPushButton->setIcon(icon2);

        horizontalLayout->addWidget(mAddSortColumnPushButton);

        mRemoveSortColumnPushButton = new QPushButton(mSortingGroupBox);
        mRemoveSortColumnPushButton->setObjectName(QStringLiteral("mRemoveSortColumnPushButton"));
        mRemoveSortColumnPushButton->setIcon(icon3);

        horizontalLayout->addWidget(mRemoveSortColumnPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        splitter->addWidget(mSortingGroupBox);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLayoutAttributeSelectionDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        QWidget::setTabOrder(mColumnsTableView, mColumnUpPushButton);
        QWidget::setTabOrder(mColumnUpPushButton, mColumnDownPushButton);
        QWidget::setTabOrder(mColumnDownPushButton, mAddColumnPushButton);
        QWidget::setTabOrder(mAddColumnPushButton, mRemoveColumnPushButton);
        QWidget::setTabOrder(mRemoveColumnPushButton, mResetColumnsPushButton);
        QWidget::setTabOrder(mResetColumnsPushButton, mSortColumnTableView);
        QWidget::setTabOrder(mSortColumnTableView, mSortColumnUpPushButton);
        QWidget::setTabOrder(mSortColumnUpPushButton, mSortColumnDownPushButton);
        QWidget::setTabOrder(mSortColumnDownPushButton, mRemoveSortColumnPushButton);
        QWidget::setTabOrder(mRemoveSortColumnPushButton, buttonBox);

        retranslateUi(QgsLayoutAttributeSelectionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLayoutAttributeSelectionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLayoutAttributeSelectionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutAttributeSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutAttributeSelectionDialogBase)
    {
        QgsLayoutAttributeSelectionDialogBase->setWindowTitle(QApplication::translate("QgsLayoutAttributeSelectionDialogBase", "Select Attributes", Q_NULLPTR));
        mAttributesGroupBox->setTitle(QApplication::translate("QgsLayoutAttributeSelectionDialogBase", "Columns", Q_NULLPTR));
        mColumnUpPushButton->setText(QString());
        mColumnDownPushButton->setText(QString());
        mAddColumnPushButton->setText(QString());
        mRemoveColumnPushButton->setText(QString());
        mResetColumnsPushButton->setText(QApplication::translate("QgsLayoutAttributeSelectionDialogBase", "Reset", Q_NULLPTR));
        mClearColumnsPushButton->setText(QApplication::translate("QgsLayoutAttributeSelectionDialogBase", "Clear", Q_NULLPTR));
        mSortingGroupBox->setTitle(QApplication::translate("QgsLayoutAttributeSelectionDialogBase", "Sorting", Q_NULLPTR));
        mSortColumnUpPushButton->setText(QString());
        mSortColumnDownPushButton->setText(QString());
        mAddSortColumnPushButton->setText(QString());
        mRemoveSortColumnPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutAttributeSelectionDialogBase: public Ui_QgsLayoutAttributeSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTATTRIBUTESELECTIONDIALOGBASE_H
