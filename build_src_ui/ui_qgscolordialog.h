/********************************************************************************
** Form generated from reading UI file 'qgscolordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORDIALOG_H
#define UI_QGSCOLORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "qgscompoundcolorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsColorDialogBase
{
public:
    QAction *mActionImportColors;
    QAction *mActionExportColors;
    QAction *mActionPasteColors;
    QAction *mActionImportPalette;
    QAction *mActionRemovePalette;
    QAction *mActionNewPalette;
    QAction *mActionCopyColors;
    QVBoxLayout *verticalLayout_2;
    QgsCompoundColorWidget *mColorWidget;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsColorDialogBase)
    {
        if (QgsColorDialogBase->objectName().isEmpty())
            QgsColorDialogBase->setObjectName(QStringLiteral("QgsColorDialogBase"));
        QgsColorDialogBase->resize(620, 402);
        QgsColorDialogBase->setSizeGripEnabled(true);
        mActionImportColors = new QAction(QgsColorDialogBase);
        mActionImportColors->setObjectName(QStringLiteral("mActionImportColors"));
        mActionExportColors = new QAction(QgsColorDialogBase);
        mActionExportColors->setObjectName(QStringLiteral("mActionExportColors"));
        mActionPasteColors = new QAction(QgsColorDialogBase);
        mActionPasteColors->setObjectName(QStringLiteral("mActionPasteColors"));
        mActionImportPalette = new QAction(QgsColorDialogBase);
        mActionImportPalette->setObjectName(QStringLiteral("mActionImportPalette"));
        mActionRemovePalette = new QAction(QgsColorDialogBase);
        mActionRemovePalette->setObjectName(QStringLiteral("mActionRemovePalette"));
        mActionNewPalette = new QAction(QgsColorDialogBase);
        mActionNewPalette->setObjectName(QStringLiteral("mActionNewPalette"));
        mActionCopyColors = new QAction(QgsColorDialogBase);
        mActionCopyColors->setObjectName(QStringLiteral("mActionCopyColors"));
        verticalLayout_2 = new QVBoxLayout(QgsColorDialogBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mColorWidget = new QgsCompoundColorWidget(QgsColorDialogBase);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));

        verticalLayout_2->addWidget(mColorWidget);

        mButtonBox = new QDialogButtonBox(QgsColorDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(mButtonBox);


        retranslateUi(QgsColorDialogBase);

        QMetaObject::connectSlotsByName(QgsColorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsColorDialogBase)
    {
        QgsColorDialogBase->setWindowTitle(QApplication::translate("QgsColorDialogBase", "Color Picker", Q_NULLPTR));
        mActionImportColors->setText(QApplication::translate("QgsColorDialogBase", "Import Colors\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionImportColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Import colors from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionExportColors->setText(QApplication::translate("QgsColorDialogBase", "Export Colors\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionExportColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Export colors to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionPasteColors->setText(QApplication::translate("QgsColorDialogBase", "Paste Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionPasteColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Paste colors from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionImportPalette->setText(QApplication::translate("QgsColorDialogBase", "Import Palette\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionImportPalette->setToolTip(QApplication::translate("QgsColorDialogBase", "Import palette from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRemovePalette->setText(QApplication::translate("QgsColorDialogBase", "Remove Palette", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRemovePalette->setToolTip(QApplication::translate("QgsColorDialogBase", "Remove current palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionNewPalette->setText(QApplication::translate("QgsColorDialogBase", "New Palette\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionNewPalette->setToolTip(QApplication::translate("QgsColorDialogBase", "Create a new palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionCopyColors->setText(QApplication::translate("QgsColorDialogBase", "Copy Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionCopyColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Copy selected colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsColorDialogBase: public Ui_QgsColorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORDIALOG_H
