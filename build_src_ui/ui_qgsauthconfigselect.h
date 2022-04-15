/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigselect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGSELECT_H
#define UI_QGSAUTHCONFIGSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigSelect
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *cmbConfigSelect;
    QToolButton *btnConfigEdit;
    QToolButton *btnConfigRemove;
    QFrame *frConfigMsg;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leConfigMsg;
    QToolButton *btnConfigMsgClear;
    QToolButton *btnConfigAdd;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAuthConfigSelect)
    {
        if (QgsAuthConfigSelect->objectName().isEmpty())
            QgsAuthConfigSelect->setObjectName(QStringLiteral("QgsAuthConfigSelect"));
        QgsAuthConfigSelect->resize(452, 79);
        verticalLayout = new QVBoxLayout(QgsAuthConfigSelect);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        cmbConfigSelect = new QComboBox(QgsAuthConfigSelect);
        cmbConfigSelect->setObjectName(QStringLiteral("cmbConfigSelect"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbConfigSelect->sizePolicy().hasHeightForWidth());
        cmbConfigSelect->setSizePolicy(sizePolicy);
        cmbConfigSelect->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(cmbConfigSelect, 1, 0, 1, 1);

        btnConfigEdit = new QToolButton(QgsAuthConfigSelect);
        btnConfigEdit->setObjectName(QStringLiteral("btnConfigEdit"));

        gridLayout->addWidget(btnConfigEdit, 1, 1, 1, 1);

        btnConfigRemove = new QToolButton(QgsAuthConfigSelect);
        btnConfigRemove->setObjectName(QStringLiteral("btnConfigRemove"));

        gridLayout->addWidget(btnConfigRemove, 1, 2, 1, 1);

        frConfigMsg = new QFrame(QgsAuthConfigSelect);
        frConfigMsg->setObjectName(QStringLiteral("frConfigMsg"));
        frConfigMsg->setFrameShape(QFrame::StyledPanel);
        frConfigMsg->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frConfigMsg);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leConfigMsg = new QLineEdit(frConfigMsg);
        leConfigMsg->setObjectName(QStringLiteral("leConfigMsg"));
        leConfigMsg->setReadOnly(true);

        horizontalLayout_3->addWidget(leConfigMsg);

        btnConfigMsgClear = new QToolButton(frConfigMsg);
        btnConfigMsgClear->setObjectName(QStringLiteral("btnConfigMsgClear"));
        btnConfigMsgClear->setMinimumSize(QSize(26, 22));
        btnConfigMsgClear->setMaximumSize(QSize(26, 22));
        btnConfigMsgClear->setIconSize(QSize(22, 22));

        horizontalLayout_3->addWidget(btnConfigMsgClear);


        gridLayout->addWidget(frConfigMsg, 0, 0, 1, 5);

        btnConfigAdd = new QToolButton(QgsAuthConfigSelect);
        btnConfigAdd->setObjectName(QStringLiteral("btnConfigAdd"));

        gridLayout->addWidget(btnConfigAdd, 1, 3, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(leConfigMsg, btnConfigMsgClear);
        QWidget::setTabOrder(btnConfigMsgClear, cmbConfigSelect);

        retranslateUi(QgsAuthConfigSelect);

        QMetaObject::connectSlotsByName(QgsAuthConfigSelect);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthConfigSelect)
    {
        QgsAuthConfigSelect->setWindowTitle(QApplication::translate("QgsAuthConfigSelect", "Authentication Configuration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConfigEdit->setToolTip(QApplication::translate("QgsAuthConfigSelect", "Edit selected configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConfigEdit->setText(QApplication::translate("QgsAuthConfigSelect", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConfigRemove->setToolTip(QApplication::translate("QgsAuthConfigSelect", "Delete selected configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConfigRemove->setText(QApplication::translate("QgsAuthConfigSelect", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConfigMsgClear->setToolTip(QApplication::translate("QgsAuthConfigSelect", "Dismiss", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConfigMsgClear->setText(QApplication::translate("QgsAuthConfigSelect", "Dismiss", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConfigAdd->setToolTip(QApplication::translate("QgsAuthConfigSelect", "Create a new authentication configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConfigAdd->setText(QApplication::translate("QgsAuthConfigSelect", "New", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigSelect: public Ui_QgsAuthConfigSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGSELECT_H
