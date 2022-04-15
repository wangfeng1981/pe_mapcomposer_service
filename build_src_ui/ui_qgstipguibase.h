/********************************************************************************
** Form generated from reading UI file 'qgstipguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTIPGUIBASE_H
#define UI_QGSTIPGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_QgsTipGuiBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *txtTip;
    QCheckBox *cbxDisableTips;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsTipGuiBase)
    {
        if (QgsTipGuiBase->objectName().isEmpty())
            QgsTipGuiBase->setObjectName(QStringLiteral("QgsTipGuiBase"));
        QgsTipGuiBase->resize(541, 341);
        gridLayout = new QGridLayout(QgsTipGuiBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtTip = new QTextBrowser(QgsTipGuiBase);
        txtTip->setObjectName(QStringLiteral("txtTip"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtTip->sizePolicy().hasHeightForWidth());
        txtTip->setSizePolicy(sizePolicy);
        txtTip->setOpenExternalLinks(true);

        gridLayout->addWidget(txtTip, 0, 0, 1, 2);

        cbxDisableTips = new QCheckBox(QgsTipGuiBase);
        cbxDisableTips->setObjectName(QStringLiteral("cbxDisableTips"));

        gridLayout->addWidget(cbxDisableTips, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsTipGuiBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(QgsTipGuiBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsTipGuiBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsTipGuiBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsTipGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTipGuiBase)
    {
        QgsTipGuiBase->setWindowTitle(QApplication::translate("QgsTipGuiBase", "QGIS Tips!", Q_NULLPTR));
        txtTip->setHtml(QApplication::translate("QgsTipGuiBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">A nice tip goes here\342\200\246</span></p></body></html>", Q_NULLPTR));
        cbxDisableTips->setText(QApplication::translate("QgsTipGuiBase", "I've had enough tips, don't show this on start up any more!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsTipGuiBase: public Ui_QgsTipGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTIPGUIBASE_H
