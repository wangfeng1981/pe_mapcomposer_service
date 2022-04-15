/********************************************************************************
** Form generated from reading UI file 'qgslayoutmanagerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMANAGERBASE_H
#define UI_QGSLAYOUTMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutManagerBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QToolButton *mRemoveButton;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListView *mLayoutListView;
    QToolButton *mShowButton;
    QToolButton *mRenameButton;
    QToolButton *mDuplicateButton;
    QgsCollapsibleGroupBox *mTemplateGrpBox;
    QGridLayout *gridLayout;
    QPushButton *mAddButton;
    QgsFileWidget *mTemplateFileWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *mTemplatesUserDirBtn;
    QPushButton *mTemplatesDefaultDirBtn;
    QSpacerItem *horizontalSpacer;
    QComboBox *mTemplate;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsLayoutManagerBase)
    {
        if (QgsLayoutManagerBase->objectName().isEmpty())
            QgsLayoutManagerBase->setObjectName(QStringLiteral("QgsLayoutManagerBase"));
        QgsLayoutManagerBase->resize(425, 300);
        QgsLayoutManagerBase->setMinimumSize(QSize(425, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionLayoutManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QgsLayoutManagerBase->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsLayoutManagerBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mRemoveButton = new QToolButton(QgsLayoutManagerBase);
        mRemoveButton->setObjectName(QStringLiteral("mRemoveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRemoveButton->sizePolicy().hasHeightForWidth());
        mRemoveButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mRemoveButton, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mSearchLineEdit = new QgsFilterLineEdit(QgsLayoutManagerBase);
        mSearchLineEdit->setObjectName(QStringLiteral("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mLayoutListView = new QListView(QgsLayoutManagerBase);
        mLayoutListView->setObjectName(QStringLiteral("mLayoutListView"));
        mLayoutListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mLayoutListView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(mLayoutListView);

        verticalLayout_2->setStretch(1, 1);

        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 4);

        mShowButton = new QToolButton(QgsLayoutManagerBase);
        mShowButton->setObjectName(QStringLiteral("mShowButton"));
        sizePolicy.setHeightForWidth(mShowButton->sizePolicy().hasHeightForWidth());
        mShowButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mShowButton, 1, 0, 1, 1);

        mRenameButton = new QToolButton(QgsLayoutManagerBase);
        mRenameButton->setObjectName(QStringLiteral("mRenameButton"));
        sizePolicy.setHeightForWidth(mRenameButton->sizePolicy().hasHeightForWidth());
        mRenameButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mRenameButton, 1, 3, 1, 1);

        mDuplicateButton = new QToolButton(QgsLayoutManagerBase);
        mDuplicateButton->setObjectName(QStringLiteral("mDuplicateButton"));
        sizePolicy.setHeightForWidth(mDuplicateButton->sizePolicy().hasHeightForWidth());
        mDuplicateButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mDuplicateButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        mTemplateGrpBox = new QgsCollapsibleGroupBox(QgsLayoutManagerBase);
        mTemplateGrpBox->setObjectName(QStringLiteral("mTemplateGrpBox"));
        mTemplateGrpBox->setMinimumSize(QSize(0, 0));
        mTemplateGrpBox->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(mTemplateGrpBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mAddButton = new QPushButton(mTemplateGrpBox);
        mAddButton->setObjectName(QStringLiteral("mAddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddButton->sizePolicy().hasHeightForWidth());
        mAddButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mAddButton, 0, 2, 1, 1);

        mTemplateFileWidget = new QgsFileWidget(mTemplateGrpBox);
        mTemplateFileWidget->setObjectName(QStringLiteral("mTemplateFileWidget"));
        mTemplateFileWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mTemplateFileWidget, 1, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(mTemplateGrpBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        mTemplatesUserDirBtn = new QPushButton(mTemplateGrpBox);
        mTemplatesUserDirBtn->setObjectName(QStringLiteral("mTemplatesUserDirBtn"));
        sizePolicy1.setHeightForWidth(mTemplatesUserDirBtn->sizePolicy().hasHeightForWidth());
        mTemplatesUserDirBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mTemplatesUserDirBtn);

        mTemplatesDefaultDirBtn = new QPushButton(mTemplateGrpBox);
        mTemplatesDefaultDirBtn->setObjectName(QStringLiteral("mTemplatesDefaultDirBtn"));
        sizePolicy1.setHeightForWidth(mTemplatesDefaultDirBtn->sizePolicy().hasHeightForWidth());
        mTemplatesDefaultDirBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mTemplatesDefaultDirBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        mTemplate = new QComboBox(mTemplateGrpBox);
        mTemplate->setObjectName(QStringLiteral("mTemplate"));

        gridLayout->addWidget(mTemplate, 0, 0, 1, 2);


        verticalLayout->addWidget(mTemplateGrpBox);

        mButtonBox = new QDialogButtonBox(QgsLayoutManagerBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(mButtonBox);

        QWidget::setTabOrder(mSearchLineEdit, mLayoutListView);
        QWidget::setTabOrder(mLayoutListView, mShowButton);
        QWidget::setTabOrder(mShowButton, mDuplicateButton);
        QWidget::setTabOrder(mDuplicateButton, mRemoveButton);
        QWidget::setTabOrder(mRemoveButton, mRenameButton);
        QWidget::setTabOrder(mRenameButton, mTemplateGrpBox);
        QWidget::setTabOrder(mTemplateGrpBox, mTemplate);
        QWidget::setTabOrder(mTemplate, mAddButton);
        QWidget::setTabOrder(mAddButton, mTemplateFileWidget);
        QWidget::setTabOrder(mTemplateFileWidget, mTemplatesUserDirBtn);
        QWidget::setTabOrder(mTemplatesUserDirBtn, mTemplatesDefaultDirBtn);

        retranslateUi(QgsLayoutManagerBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsLayoutManagerBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsLayoutManagerBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutManagerBase)
    {
        QgsLayoutManagerBase->setWindowTitle(QApplication::translate("QgsLayoutManagerBase", "Layout Manager", Q_NULLPTR));
        mRemoveButton->setText(QApplication::translate("QgsLayoutManagerBase", "&Remove\342\200\246", Q_NULLPTR));
        mSearchLineEdit->setPlaceholderText(QApplication::translate("QgsLayoutManagerBase", "Search\342\200\246", Q_NULLPTR));
        mShowButton->setText(QApplication::translate("QgsLayoutManagerBase", "&Show", Q_NULLPTR));
        mRenameButton->setText(QApplication::translate("QgsLayoutManagerBase", "Re&name\342\200\246", Q_NULLPTR));
        mDuplicateButton->setText(QApplication::translate("QgsLayoutManagerBase", "&Duplicate\342\200\246", Q_NULLPTR));
        mTemplateGrpBox->setTitle(QApplication::translate("QgsLayoutManagerBase", "New from Template", Q_NULLPTR));
        mAddButton->setText(QApplication::translate("QgsLayoutManagerBase", "Create\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutManagerBase", "Open template directory", Q_NULLPTR));
        mTemplatesUserDirBtn->setText(QApplication::translate("QgsLayoutManagerBase", "User", Q_NULLPTR));
        mTemplatesDefaultDirBtn->setText(QApplication::translate("QgsLayoutManagerBase", "Default", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutManagerBase: public Ui_QgsLayoutManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMANAGERBASE_H
