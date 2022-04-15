/********************************************************************************
** Form generated from reading UI file 'qgscalendarconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCALENDARCONFIGDLGBASE_H
#define UI_QGSCALENDARCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCalendarConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *leDateFormat;
    QLabel *label_11;

    void setupUi(QWidget *QgsCalendarConfigDlgBase)
    {
        if (QgsCalendarConfigDlgBase->objectName().isEmpty())
            QgsCalendarConfigDlgBase->setObjectName(QStringLiteral("QgsCalendarConfigDlgBase"));
        QgsCalendarConfigDlgBase->resize(400, 300);
        QgsCalendarConfigDlgBase->setWindowTitle(QStringLiteral("Form"));
        formLayout = new QFormLayout(QgsCalendarConfigDlgBase);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(QgsCalendarConfigDlgBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_4);

        label_10 = new QLabel(QgsCalendarConfigDlgBase);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        leDateFormat = new QLineEdit(QgsCalendarConfigDlgBase);
        leDateFormat->setObjectName(QStringLiteral("leDateFormat"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leDateFormat);

        label_11 = new QLabel(QgsCalendarConfigDlgBase);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setOpenExternalLinks(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_11);


        retranslateUi(QgsCalendarConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsCalendarConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCalendarConfigDlgBase)
    {
        label_4->setText(QApplication::translate("QgsCalendarConfigDlgBase", "A calendar widget to enter a date.", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsCalendarConfigDlgBase", "Date format", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsCalendarConfigDlgBase", "<html><head/><body><p>Example formats:</p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#f6f6f6\"><thead><tr><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Format</span></p></td><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Result</span></p></td></tr></thead><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">dd.MM.yyyy</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-al"
                        "ign:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">21.05.2001</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">ddd MMMM d yy</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">Tue May 21 01</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">hh:mm:ss.zzz</span></p>"
                        "</td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">14:13:09.042</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">h:m:s ap</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">2:13:9 pm</span></p></td></tr></table><p><a href=\"http://qt-project.org/doc/qt-5.0/qtcore/qdatetime.html#toString\"><span style=\" text-decoration: underline; color:#0000ff;\">Reference documentation</span></a></p></body></html>", Q_NULLPTR));
        Q_UNUSED(QgsCalendarConfigDlgBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCalendarConfigDlgBase: public Ui_QgsCalendarConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCALENDARCONFIGDLGBASE_H
