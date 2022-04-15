/********************************************************************************
** Form generated from reading UI file 'qgsattributeactiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeActionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *groupBoxActionList;
    QGridLayout *gridLayout_3;
    QPushButton *mMoveDownButton;
    QPushButton *mRemoveButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mAddDefaultActionsButton;
    QPushButton *mMoveUpButton;
    QTableWidget *mAttributeActionTable;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mAddButton;
    QgsCollapsibleGroupBox *mShowInAttributeTable;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mAttributeTableWidgetType;

    void setupUi(QWidget *QgsAttributeActionDialogBase)
    {
        if (QgsAttributeActionDialogBase->objectName().isEmpty())
            QgsAttributeActionDialogBase->setObjectName(QStringLiteral("QgsAttributeActionDialogBase"));
        QgsAttributeActionDialogBase->resize(948, 731);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAttributeActionDialogBase->sizePolicy().hasHeightForWidth());
        QgsAttributeActionDialogBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsAttributeActionDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBoxActionList = new QgsCollapsibleGroupBox(QgsAttributeActionDialogBase);
        groupBoxActionList->setObjectName(QStringLiteral("groupBoxActionList"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(groupBoxActionList->sizePolicy().hasHeightForWidth());
        groupBoxActionList->setSizePolicy(sizePolicy1);
        groupBoxActionList->setProperty("syncGroup", QVariant(QStringLiteral("actiongroup")));
        gridLayout_3 = new QGridLayout(groupBoxActionList);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mMoveDownButton = new QPushButton(groupBoxActionList);
        mMoveDownButton->setObjectName(QStringLiteral("mMoveDownButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMoveDownButton->sizePolicy().hasHeightForWidth());
        mMoveDownButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownButton->setIcon(icon);

        gridLayout_3->addWidget(mMoveDownButton, 1, 1, 1, 1);

        mRemoveButton = new QPushButton(groupBoxActionList);
        mRemoveButton->setObjectName(QStringLiteral("mRemoveButton"));
        sizePolicy2.setHeightForWidth(mRemoveButton->sizePolicy().hasHeightForWidth());
        mRemoveButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveButton->setIcon(icon1);

        gridLayout_3->addWidget(mRemoveButton, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 5, 1, 1);

        mAddDefaultActionsButton = new QPushButton(groupBoxActionList);
        mAddDefaultActionsButton->setObjectName(QStringLiteral("mAddDefaultActionsButton"));

        gridLayout_3->addWidget(mAddDefaultActionsButton, 1, 6, 1, 1);

        mMoveUpButton = new QPushButton(groupBoxActionList);
        mMoveUpButton->setObjectName(QStringLiteral("mMoveUpButton"));
        sizePolicy2.setHeightForWidth(mMoveUpButton->sizePolicy().hasHeightForWidth());
        mMoveUpButton->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpButton->setIcon(icon2);

        gridLayout_3->addWidget(mMoveUpButton, 1, 0, 1, 1);

        mAttributeActionTable = new QTableWidget(groupBoxActionList);
        if (mAttributeActionTable->columnCount() < 8)
            mAttributeActionTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        mAttributeActionTable->setObjectName(QStringLiteral("mAttributeActionTable"));
        sizePolicy.setHeightForWidth(mAttributeActionTable->sizePolicy().hasHeightForWidth());
        mAttributeActionTable->setSizePolicy(sizePolicy);
        mAttributeActionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mAttributeActionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mAttributeActionTable->setColumnCount(8);

        gridLayout_3->addWidget(mAttributeActionTable, 0, 0, 1, 7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        mAddButton = new QPushButton(groupBoxActionList);
        mAddButton->setObjectName(QStringLiteral("mAddButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon3);

        gridLayout_3->addWidget(mAddButton, 1, 4, 1, 1);


        gridLayout_2->addWidget(groupBoxActionList, 0, 0, 1, 1);

        mShowInAttributeTable = new QgsCollapsibleGroupBox(QgsAttributeActionDialogBase);
        mShowInAttributeTable->setObjectName(QStringLiteral("mShowInAttributeTable"));
        mShowInAttributeTable->setCheckable(true);
        formLayout = new QFormLayout(mShowInAttributeTable);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(mShowInAttributeTable);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mAttributeTableWidgetType = new QComboBox(mShowInAttributeTable);
        mAttributeTableWidgetType->setObjectName(QStringLiteral("mAttributeTableWidgetType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mAttributeTableWidgetType);


        gridLayout_2->addWidget(mShowInAttributeTable, 2, 0, 1, 1);

        QWidget::setTabOrder(groupBoxActionList, mMoveUpButton);
        QWidget::setTabOrder(mMoveUpButton, mMoveDownButton);
        QWidget::setTabOrder(mMoveDownButton, mRemoveButton);
        QWidget::setTabOrder(mRemoveButton, mAddButton);
        QWidget::setTabOrder(mAddButton, mAddDefaultActionsButton);
        QWidget::setTabOrder(mAddDefaultActionsButton, mShowInAttributeTable);
        QWidget::setTabOrder(mShowInAttributeTable, mAttributeTableWidgetType);
        QWidget::setTabOrder(mAttributeTableWidgetType, mAttributeActionTable);

        retranslateUi(QgsAttributeActionDialogBase);

        QMetaObject::connectSlotsByName(QgsAttributeActionDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeActionDialogBase)
    {
        QgsAttributeActionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeActionDialogBase", "Attribute Actions", Q_NULLPTR));
        groupBoxActionList->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Action List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMoveDownButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMoveDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Remove the selected action", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveButton->setText(QString());
        mAddDefaultActionsButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Create Default Actions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMoveUpButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMoveUpButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = mAttributeActionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAttributeActionDialogBase", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mAttributeActionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mAttributeActionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Short Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mAttributeActionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mAttributeActionTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = mAttributeActionTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action Scopes", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = mAttributeActionTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsAttributeActionDialogBase", "On Notification", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem6->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "<html><head/><body><p>If not empty, this will enable provider notification listening and the action will be executed when the notification message matched the specified value. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem7 = mAttributeActionTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsAttributeActionDialogBase", "Only when editable", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        mAttributeActionTable->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "This list contains all actions that have been defined for the current layer. Add actions by entering the details in the controls below and then pressing the Add to action list button. Actions can be edited here by double clicking on the item.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        mAddButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Add a new action", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddButton->setText(QString());
        mShowInAttributeTable->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Show in Attribute Table", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAttributeActionDialogBase", "Layout", Q_NULLPTR));
        mAttributeTableWidgetType->clear();
        mAttributeTableWidgetType->insertItems(0, QStringList()
         << QApplication::translate("QgsAttributeActionDialogBase", "Separate Buttons", Q_NULLPTR)
         << QApplication::translate("QgsAttributeActionDialogBase", "Combo Box", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionDialogBase: public Ui_QgsAttributeActionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEACTIONDIALOGBASE_H
