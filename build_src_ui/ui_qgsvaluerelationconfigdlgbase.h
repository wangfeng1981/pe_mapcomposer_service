/********************************************************************************
** Form generated from reading UI file 'qgsvaluerelationconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUERELATIONCONFIGDLGBASE_H
#define UI_QGSVALUERELATIONCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsValueRelationConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QToolButton *mEditExpression;
    QSpacerItem *horizontalSpacer;
    QLabel *label_nofColumns;
    QTextEdit *mFilterExpression;
    QLabel *label_8;
    QLabel *label_5;
    QgsFieldComboBox *mValueColumn;
    QgsMapLayerComboBox *mLayerName;
    QCheckBox *mAllowMulti;
    QCheckBox *mAllowNull;
    QCheckBox *mUseCompleter;
    QCheckBox *mOrderByValue;
    QLabel *label_6;
    QgsSpinBox *mNofColumns;
    QgsFieldComboBox *mKeyColumn;
    QLabel *label_7;
    QLabel *label;
    QgsFieldExpressionWidget *mDescriptionExpression;

    void setupUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        if (QgsValueRelationConfigDlgBase->objectName().isEmpty())
            QgsValueRelationConfigDlgBase->setObjectName(QStringLiteral("QgsValueRelationConfigDlgBase"));
        QgsValueRelationConfigDlgBase->resize(427, 489);
        QgsValueRelationConfigDlgBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsValueRelationConfigDlgBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_19 = new QLabel(QgsValueRelationConfigDlgBase);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout->addWidget(label_19);

        mEditExpression = new QToolButton(QgsValueRelationConfigDlgBase);
        mEditExpression->setObjectName(QStringLiteral("mEditExpression"));
        mEditExpression->setLayoutDirection(Qt::RightToLeft);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditExpression->setIcon(icon);

        horizontalLayout->addWidget(mEditExpression);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 13, 0, 1, 2);

        label_nofColumns = new QLabel(QgsValueRelationConfigDlgBase);
        label_nofColumns->setObjectName(QStringLiteral("label_nofColumns"));

        gridLayout->addWidget(label_nofColumns, 9, 0, 1, 1);

        mFilterExpression = new QTextEdit(QgsValueRelationConfigDlgBase);
        mFilterExpression->setObjectName(QStringLiteral("mFilterExpression"));

        gridLayout->addWidget(mFilterExpression, 14, 0, 1, 2);

        label_8 = new QLabel(QgsValueRelationConfigDlgBase);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 2);

        label_5 = new QLabel(QgsValueRelationConfigDlgBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        mValueColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mValueColumn->setObjectName(QStringLiteral("mValueColumn"));

        gridLayout->addWidget(mValueColumn, 3, 1, 1, 1);

        mLayerName = new QgsMapLayerComboBox(QgsValueRelationConfigDlgBase);
        mLayerName->setObjectName(QStringLiteral("mLayerName"));

        gridLayout->addWidget(mLayerName, 1, 1, 1, 1);

        mAllowMulti = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowMulti->setObjectName(QStringLiteral("mAllowMulti"));

        gridLayout->addWidget(mAllowMulti, 8, 0, 1, 2);

        mAllowNull = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowNull->setObjectName(QStringLiteral("mAllowNull"));

        gridLayout->addWidget(mAllowNull, 5, 0, 1, 2);

        mUseCompleter = new QCheckBox(QgsValueRelationConfigDlgBase);
        mUseCompleter->setObjectName(QStringLiteral("mUseCompleter"));

        gridLayout->addWidget(mUseCompleter, 11, 0, 1, 2);

        mOrderByValue = new QCheckBox(QgsValueRelationConfigDlgBase);
        mOrderByValue->setObjectName(QStringLiteral("mOrderByValue"));

        gridLayout->addWidget(mOrderByValue, 7, 0, 1, 2);

        label_6 = new QLabel(QgsValueRelationConfigDlgBase);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        mNofColumns = new QgsSpinBox(QgsValueRelationConfigDlgBase);
        mNofColumns->setObjectName(QStringLiteral("mNofColumns"));

        gridLayout->addWidget(mNofColumns, 9, 1, 1, 1);

        mKeyColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mKeyColumn->setObjectName(QStringLiteral("mKeyColumn"));

        gridLayout->addWidget(mKeyColumn, 2, 1, 1, 1);

        label_7 = new QLabel(QgsValueRelationConfigDlgBase);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label = new QLabel(QgsValueRelationConfigDlgBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        mDescriptionExpression = new QgsFieldExpressionWidget(QgsValueRelationConfigDlgBase);
        mDescriptionExpression->setObjectName(QStringLiteral("mDescriptionExpression"));

        gridLayout->addWidget(mDescriptionExpression, 4, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_19->setBuddy(mValueColumn);
        label_5->setBuddy(mLayerName);
        label_6->setBuddy(mKeyColumn);
        label_7->setBuddy(mValueColumn);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mLayerName, mKeyColumn);
        QWidget::setTabOrder(mKeyColumn, mValueColumn);
        QWidget::setTabOrder(mValueColumn, mAllowNull);
        QWidget::setTabOrder(mAllowNull, mOrderByValue);
        QWidget::setTabOrder(mOrderByValue, mAllowMulti);
        QWidget::setTabOrder(mAllowMulti, mUseCompleter);
        QWidget::setTabOrder(mUseCompleter, mEditExpression);
        QWidget::setTabOrder(mEditExpression, mFilterExpression);

        retranslateUi(QgsValueRelationConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsValueRelationConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        label_19->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Filter expression", Q_NULLPTR));
        label_nofColumns->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Number of columns", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Select layer, key column and value column", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Layer", Q_NULLPTR));
        mAllowMulti->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Allow multiple selections", Q_NULLPTR));
        mAllowNull->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Allow NULL value", Q_NULLPTR));
        mUseCompleter->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Use completer", Q_NULLPTR));
        mOrderByValue->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Order by value", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Key column", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Value column", Q_NULLPTR));
        label->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Description column", Q_NULLPTR));
        Q_UNUSED(QgsValueRelationConfigDlgBase);
    } // retranslateUi

};

namespace Ui {
    class QgsValueRelationConfigDlgBase: public Ui_QgsValueRelationConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUERELATIONCONFIGDLGBASE_H
