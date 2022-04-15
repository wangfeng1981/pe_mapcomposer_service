/********************************************************************************
** Form generated from reading UI file 'qgsadvancedsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDSETTINGSWIDGET_H
#define UI_QGSADVANCEDSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgssettingstree.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedSettingsWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_42;
    QWidget *mAdvancedSettingsWarning;
    QVBoxLayout *verticalLayout_44;
    QLabel *label_44;
    QPushButton *mAdvancedSettingsEnableButton;
    QgsSettingsTree *mAdvancedSettingsEditor;

    void setupUi(QWidget *QgsAdvancedSettingsWidgetBase)
    {
        if (QgsAdvancedSettingsWidgetBase->objectName().isEmpty())
            QgsAdvancedSettingsWidgetBase->setObjectName(QStringLiteral("QgsAdvancedSettingsWidgetBase"));
        QgsAdvancedSettingsWidgetBase->resize(714, 610);
        horizontalLayout = new QHBoxLayout(QgsAdvancedSettingsWidgetBase);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_26 = new QGroupBox(QgsAdvancedSettingsWidgetBase);
        groupBox_26->setObjectName(QStringLiteral("groupBox_26"));
        verticalLayout_42 = new QVBoxLayout(groupBox_26);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        mAdvancedSettingsWarning = new QWidget(groupBox_26);
        mAdvancedSettingsWarning->setObjectName(QStringLiteral("mAdvancedSettingsWarning"));
        verticalLayout_44 = new QVBoxLayout(mAdvancedSettingsWarning);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        label_44 = new QLabel(mAdvancedSettingsWarning);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setWordWrap(true);

        verticalLayout_44->addWidget(label_44);

        mAdvancedSettingsEnableButton = new QPushButton(mAdvancedSettingsWarning);
        mAdvancedSettingsEnableButton->setObjectName(QStringLiteral("mAdvancedSettingsEnableButton"));

        verticalLayout_44->addWidget(mAdvancedSettingsEnableButton);


        verticalLayout_42->addWidget(mAdvancedSettingsWarning);

        mAdvancedSettingsEditor = new QgsSettingsTree(groupBox_26);
        mAdvancedSettingsEditor->setObjectName(QStringLiteral("mAdvancedSettingsEditor"));
        mAdvancedSettingsEditor->setVisible(false);

        verticalLayout_42->addWidget(mAdvancedSettingsEditor);


        horizontalLayout->addWidget(groupBox_26);


        retranslateUi(QgsAdvancedSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsAdvancedSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAdvancedSettingsWidgetBase)
    {
        groupBox_26->setTitle(QApplication::translate("QgsAdvancedSettingsWidgetBase", "Advanced Settings Editor", Q_NULLPTR));
        label_44->setText(QApplication::translate("QgsAdvancedSettingsWidgetBase", "<html><head/><body><p>Changes on this page are dangerous and can break your QGIS installation in various ways. Any change you make is applied immediately, without clicking the <span style=\" font-style:italic;\">OK</span> button.</p></body></html>", Q_NULLPTR));
        mAdvancedSettingsEnableButton->setText(QApplication::translate("QgsAdvancedSettingsWidgetBase", "I will be careful, I promise!", Q_NULLPTR));
        Q_UNUSED(QgsAdvancedSettingsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedSettingsWidgetBase: public Ui_QgsAdvancedSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDSETTINGSWIDGET_H
