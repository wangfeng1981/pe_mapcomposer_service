/********************************************************************************
** Form generated from reading UI file 'qgsattributewidgeteditgroupbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H
#define UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeWidgetEditGroupBox
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mShowLabelCheckBox;
    QgsCollapsibleGroupBox *mWidgetSpecificConfigGroupBox;

    void setupUi(QgsCollapsibleGroupBox *QgsAttributeWidgetEditGroupBox)
    {
        if (QgsAttributeWidgetEditGroupBox->objectName().isEmpty())
            QgsAttributeWidgetEditGroupBox->setObjectName(QStringLiteral("QgsAttributeWidgetEditGroupBox"));
        QgsAttributeWidgetEditGroupBox->resize(283, 278);
        gridLayout = new QGridLayout(QgsAttributeWidgetEditGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mShowLabelCheckBox = new QCheckBox(QgsAttributeWidgetEditGroupBox);
        mShowLabelCheckBox->setObjectName(QStringLiteral("mShowLabelCheckBox"));

        gridLayout->addWidget(mShowLabelCheckBox, 2, 0, 1, 1);

        mWidgetSpecificConfigGroupBox = new QgsCollapsibleGroupBox(QgsAttributeWidgetEditGroupBox);
        mWidgetSpecificConfigGroupBox->setObjectName(QStringLiteral("mWidgetSpecificConfigGroupBox"));

        gridLayout->addWidget(mWidgetSpecificConfigGroupBox, 3, 0, 1, 1);


        retranslateUi(QgsAttributeWidgetEditGroupBox);

        QMetaObject::connectSlotsByName(QgsAttributeWidgetEditGroupBox);
    } // setupUi

    void retranslateUi(QgsCollapsibleGroupBox *QgsAttributeWidgetEditGroupBox)
    {
        QgsAttributeWidgetEditGroupBox->setWindowTitle(QApplication::translate("QgsAttributeWidgetEditGroupBox", "QgsCollapsibleGroupBox", Q_NULLPTR));
        QgsAttributeWidgetEditGroupBox->setTitle(QApplication::translate("QgsAttributeWidgetEditGroupBox", "Widget Display", Q_NULLPTR));
        mShowLabelCheckBox->setText(QApplication::translate("QgsAttributeWidgetEditGroupBox", "Show label", Q_NULLPTR));
        mWidgetSpecificConfigGroupBox->setTitle(QApplication::translate("QgsAttributeWidgetEditGroupBox", "GroupBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeWidgetEditGroupBox: public Ui_QgsAttributeWidgetEditGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H
