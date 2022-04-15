/********************************************************************************
** Form generated from reading UI file 'qgsrelationreferenceconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONREFERENCECONFIGDLGBASE_H
#define UI_QGSRELATIONREFERENCECONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfieldexpressionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRelReferenceConfigDlgBase
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *mCbxShowForm;
    QCheckBox *mCbxShowOpenFormButton;
    QComboBox *mComboRelation;
    QCheckBox *mCbxAllowNull;
    QCheckBox *mCbxReadOnly;
    QgsFieldExpressionWidget *mExpressionWidget;
    QLabel *label_2;
    QCheckBox *mCbxOrderByValue;
    QCheckBox *mCbxMapIdentification;
    QLabel *label;
    QgsCollapsibleGroupBox *mFilterGroupBox;
    QGridLayout *gridLayout;
    QToolButton *mAddFilterButton;
    QListWidget *mAvailableFieldsList;
    QListWidget *mFilterFieldsList;
    QCheckBox *mCbxChainFilters;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QToolButton *mEditExpression;
    QSpacerItem *horizontalSpacer;
    QToolButton *mRemoveFilterButton;
    QTextEdit *mFilterExpression;
    QCheckBox *mCbxAllowAddFeatures;

    void setupUi(QWidget *QgsRelReferenceConfigDlgBase)
    {
        if (QgsRelReferenceConfigDlgBase->objectName().isEmpty())
            QgsRelReferenceConfigDlgBase->setObjectName(QStringLiteral("QgsRelReferenceConfigDlgBase"));
        QgsRelReferenceConfigDlgBase->resize(470, 502);
        QgsRelReferenceConfigDlgBase->setWindowTitle(QStringLiteral("Dialog"));
        gridLayout_2 = new QGridLayout(QgsRelReferenceConfigDlgBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mCbxShowForm = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxShowForm->setObjectName(QStringLiteral("mCbxShowForm"));

        gridLayout_2->addWidget(mCbxShowForm, 4, 0, 1, 2);

        mCbxShowOpenFormButton = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxShowOpenFormButton->setObjectName(QStringLiteral("mCbxShowOpenFormButton"));

        gridLayout_2->addWidget(mCbxShowOpenFormButton, 5, 0, 1, 2);

        mComboRelation = new QComboBox(QgsRelReferenceConfigDlgBase);
        mComboRelation->setObjectName(QStringLiteral("mComboRelation"));
        mComboRelation->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(mComboRelation, 1, 1, 1, 1);

        mCbxAllowNull = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxAllowNull->setObjectName(QStringLiteral("mCbxAllowNull"));

        gridLayout_2->addWidget(mCbxAllowNull, 2, 0, 1, 2);

        mCbxReadOnly = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxReadOnly->setObjectName(QStringLiteral("mCbxReadOnly"));

        gridLayout_2->addWidget(mCbxReadOnly, 7, 0, 1, 2);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsRelReferenceConfigDlgBase);
        mExpressionWidget->setObjectName(QStringLiteral("mExpressionWidget"));
        mExpressionWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(mExpressionWidget, 0, 1, 1, 1);

        label_2 = new QLabel(QgsRelReferenceConfigDlgBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mCbxOrderByValue = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxOrderByValue->setObjectName(QStringLiteral("mCbxOrderByValue"));

        gridLayout_2->addWidget(mCbxOrderByValue, 3, 0, 1, 1);

        mCbxMapIdentification = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxMapIdentification->setObjectName(QStringLiteral("mCbxMapIdentification"));

        gridLayout_2->addWidget(mCbxMapIdentification, 6, 0, 1, 2);

        label = new QLabel(QgsRelReferenceConfigDlgBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mFilterGroupBox = new QgsCollapsibleGroupBox(QgsRelReferenceConfigDlgBase);
        mFilterGroupBox->setObjectName(QStringLiteral("mFilterGroupBox"));
        mFilterGroupBox->setCheckable(true);
        mFilterGroupBox->setChecked(false);
        gridLayout = new QGridLayout(mFilterGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mAddFilterButton = new QToolButton(mFilterGroupBox);
        mAddFilterButton->setObjectName(QStringLiteral("mAddFilterButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddFilterButton->setIcon(icon);

        gridLayout->addWidget(mAddFilterButton, 2, 1, 1, 1);

        mAvailableFieldsList = new QListWidget(mFilterGroupBox);
        mAvailableFieldsList->setObjectName(QStringLiteral("mAvailableFieldsList"));

        gridLayout->addWidget(mAvailableFieldsList, 1, 0, 4, 1);

        mFilterFieldsList = new QListWidget(mFilterGroupBox);
        mFilterFieldsList->setObjectName(QStringLiteral("mFilterFieldsList"));

        gridLayout->addWidget(mFilterFieldsList, 1, 2, 4, 1);

        mCbxChainFilters = new QCheckBox(mFilterGroupBox);
        mCbxChainFilters->setObjectName(QStringLiteral("mCbxChainFilters"));

        gridLayout->addWidget(mCbxChainFilters, 5, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        label_3 = new QLabel(mFilterGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        mEditExpression = new QToolButton(mFilterGroupBox);
        mEditExpression->setObjectName(QStringLiteral("mEditExpression"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditExpression->setIcon(icon1);

        horizontalLayout->addWidget(mEditExpression);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 3);

        mRemoveFilterButton = new QToolButton(mFilterGroupBox);
        mRemoveFilterButton->setObjectName(QStringLiteral("mRemoveFilterButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveFilterButton->setIcon(icon2);

        gridLayout->addWidget(mRemoveFilterButton, 3, 1, 1, 1);

        mFilterExpression = new QTextEdit(mFilterGroupBox);
        mFilterExpression->setObjectName(QStringLiteral("mFilterExpression"));

        gridLayout->addWidget(mFilterExpression, 7, 0, 1, 3);


        gridLayout_2->addWidget(mFilterGroupBox, 9, 0, 1, 2);

        mCbxAllowAddFeatures = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxAllowAddFeatures->setObjectName(QStringLiteral("mCbxAllowAddFeatures"));

        gridLayout_2->addWidget(mCbxAllowAddFeatures, 8, 0, 1, 2);

        QWidget::setTabOrder(mExpressionWidget, mComboRelation);
        QWidget::setTabOrder(mComboRelation, mCbxAllowNull);
        QWidget::setTabOrder(mCbxAllowNull, mCbxOrderByValue);
        QWidget::setTabOrder(mCbxOrderByValue, mCbxShowForm);
        QWidget::setTabOrder(mCbxShowForm, mCbxShowOpenFormButton);
        QWidget::setTabOrder(mCbxShowOpenFormButton, mCbxMapIdentification);
        QWidget::setTabOrder(mCbxMapIdentification, mCbxReadOnly);
        QWidget::setTabOrder(mCbxReadOnly, mCbxAllowAddFeatures);
        QWidget::setTabOrder(mCbxAllowAddFeatures, mFilterGroupBox);
        QWidget::setTabOrder(mFilterGroupBox, mAvailableFieldsList);
        QWidget::setTabOrder(mAvailableFieldsList, mAddFilterButton);
        QWidget::setTabOrder(mAddFilterButton, mRemoveFilterButton);
        QWidget::setTabOrder(mRemoveFilterButton, mFilterFieldsList);
        QWidget::setTabOrder(mFilterFieldsList, mCbxChainFilters);

        retranslateUi(QgsRelReferenceConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsRelReferenceConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelReferenceConfigDlgBase)
    {
        mCbxShowForm->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Show embedded form", Q_NULLPTR));
        mCbxShowOpenFormButton->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Show open form button", Q_NULLPTR));
        mCbxAllowNull->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Allow NULL value", Q_NULLPTR));
        mCbxReadOnly->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Use a read-only line edit instead of a combobox", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Relation", Q_NULLPTR));
        mCbxOrderByValue->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Order by value", Q_NULLPTR));
        mCbxMapIdentification->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "On map identification (for geometric layers only)", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Display expression \342\222\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("QgsRelReferenceConfigDlgBase", "This setting is not saved in the style. It is changing the display name on the referenced layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFilterGroupBox->setTitle(QApplication::translate("QgsRelReferenceConfigDlgBase", "Filters", Q_NULLPTR));
        mAddFilterButton->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCbxChainFilters->setToolTip(QApplication::translate("QgsRelReferenceConfigDlgBase", "When activated, the filters will restrict the choices of fields to options that are ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCbxChainFilters->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Chain filters", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Filter expression", Q_NULLPTR));
        mRemoveFilterButton->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "\342\200\246", Q_NULLPTR));
        mCbxAllowAddFeatures->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Allow adding new features", Q_NULLPTR));
        Q_UNUSED(QgsRelReferenceConfigDlgBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRelReferenceConfigDlgBase: public Ui_QgsRelReferenceConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONREFERENCECONFIGDLGBASE_H
