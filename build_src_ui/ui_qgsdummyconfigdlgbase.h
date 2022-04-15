/********************************************************************************
** Form generated from reading UI file 'qgsdummyconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDUMMYCONFIGDLGBASE_H
#define UI_QGSDUMMYCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDummyConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *mDummyTextLabel;

    void setupUi(QWidget *QgsDummyConfigDlgBase)
    {
        if (QgsDummyConfigDlgBase->objectName().isEmpty())
            QgsDummyConfigDlgBase->setObjectName(QStringLiteral("QgsDummyConfigDlgBase"));
        QgsDummyConfigDlgBase->resize(400, 300);
        QgsDummyConfigDlgBase->setWindowTitle(QStringLiteral("Form"));
        formLayout = new QFormLayout(QgsDummyConfigDlgBase);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        mDummyTextLabel = new QLabel(QgsDummyConfigDlgBase);
        mDummyTextLabel->setObjectName(QStringLiteral("mDummyTextLabel"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, mDummyTextLabel);


        retranslateUi(QgsDummyConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsDummyConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDummyConfigDlgBase)
    {
        mDummyTextLabel->setText(QApplication::translate("QgsDummyConfigDlgBase", "Dummy Text", Q_NULLPTR));
        Q_UNUSED(QgsDummyConfigDlgBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDummyConfigDlgBase: public Ui_QgsDummyConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDUMMYCONFIGDLGBASE_H
