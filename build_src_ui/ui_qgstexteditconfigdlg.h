/********************************************************************************
** Form generated from reading UI file 'qgstexteditconfigdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEXTEDITCONFIGDLG_H
#define UI_QGSTEXTEDITCONFIGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTextEditConfigDlg
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mIsMultiline;
    QFormLayout *formLayout;
    QCheckBox *mUseHtml;

    void setupUi(QWidget *QgsTextEditConfigDlg)
    {
        if (QgsTextEditConfigDlg->objectName().isEmpty())
            QgsTextEditConfigDlg->setObjectName(QStringLiteral("QgsTextEditConfigDlg"));
        QgsTextEditConfigDlg->resize(400, 300);
        QgsTextEditConfigDlg->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsTextEditConfigDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mIsMultiline = new QGroupBox(QgsTextEditConfigDlg);
        mIsMultiline->setObjectName(QStringLiteral("mIsMultiline"));
        mIsMultiline->setCheckable(true);
        formLayout = new QFormLayout(mIsMultiline);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        mUseHtml = new QCheckBox(mIsMultiline);
        mUseHtml->setObjectName(QStringLiteral("mUseHtml"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mUseHtml);


        gridLayout->addWidget(mIsMultiline, 0, 0, 1, 1);


        retranslateUi(QgsTextEditConfigDlg);

        QMetaObject::connectSlotsByName(QgsTextEditConfigDlg);
    } // setupUi

    void retranslateUi(QWidget *QgsTextEditConfigDlg)
    {
        mIsMultiline->setTitle(QApplication::translate("QgsTextEditConfigDlg", "Multiline", Q_NULLPTR));
        mUseHtml->setText(QApplication::translate("QgsTextEditConfigDlg", "HTML", Q_NULLPTR));
        Q_UNUSED(QgsTextEditConfigDlg);
    } // retranslateUi

};

namespace Ui {
    class QgsTextEditConfigDlg: public Ui_QgsTextEditConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTEDITCONFIGDLG_H
