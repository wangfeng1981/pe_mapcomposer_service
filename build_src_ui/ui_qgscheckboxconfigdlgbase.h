/********************************************************************************
** Form generated from reading UI file 'qgscheckboxconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCHECKBOXCONFIGDLGBASE_H
#define UI_QGSCHECKBOXCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCheckBoxConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leCheckedState;
    QLabel *label_3;
    QLineEdit *leUncheckedState;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCheckBoxConfigDlgBase)
    {
        if (QgsCheckBoxConfigDlgBase->objectName().isEmpty())
            QgsCheckBoxConfigDlgBase->setObjectName(QStringLiteral("QgsCheckBoxConfigDlgBase"));
        QgsCheckBoxConfigDlgBase->resize(400, 300);
        QgsCheckBoxConfigDlgBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsCheckBoxConfigDlgBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(QgsCheckBoxConfigDlgBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leCheckedState = new QLineEdit(QgsCheckBoxConfigDlgBase);
        leCheckedState->setObjectName(QStringLiteral("leCheckedState"));

        gridLayout->addWidget(leCheckedState, 0, 1, 1, 1);

        label_3 = new QLabel(QgsCheckBoxConfigDlgBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        leUncheckedState = new QLineEdit(QgsCheckBoxConfigDlgBase);
        leUncheckedState->setObjectName(QStringLiteral("leUncheckedState"));

        gridLayout->addWidget(leUncheckedState, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(QgsCheckBoxConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsCheckBoxConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCheckBoxConfigDlgBase)
    {
        label_2->setText(QApplication::translate("QgsCheckBoxConfigDlgBase", "Representation for checked state", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsCheckBoxConfigDlgBase", "Representation for unchecked state", Q_NULLPTR));
        Q_UNUSED(QgsCheckBoxConfigDlgBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCheckBoxConfigDlgBase: public Ui_QgsCheckBoxConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCHECKBOXCONFIGDLGBASE_H
