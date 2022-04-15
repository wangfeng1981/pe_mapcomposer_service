/********************************************************************************
** Form generated from reading UI file 'animationexport3ddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONEXPORT3DDIALOG_H
#define UI_ANIMATIONEXPORT3DDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgsfilewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_AnimationExport3DDialog
{
public:
    QGridLayout *gridLayout;
    QgsFileWidget *mOutputDirFileWidget;
    QLabel *mHeightLabel;
    QLabel *mFpsLabel;
    QLineEdit *mTemplateLineEdit;
    QLabel *mOutputDirLabel;
    QLabel *mTemplateLabel;
    QgsSpinBox *mFpsSpinBox;
    QLabel *mWidthLabel;
    QgsSpinBox *mWidthSpinBox;
    QgsSpinBox *mHeightSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *AnimationExport3DDialog)
    {
        if (AnimationExport3DDialog->objectName().isEmpty())
            AnimationExport3DDialog->setObjectName(QStringLiteral("AnimationExport3DDialog"));
        AnimationExport3DDialog->resize(434, 314);
        AnimationExport3DDialog->setModal(true);
        gridLayout = new QGridLayout(AnimationExport3DDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mOutputDirFileWidget = new QgsFileWidget(AnimationExport3DDialog);
        mOutputDirFileWidget->setObjectName(QStringLiteral("mOutputDirFileWidget"));

        gridLayout->addWidget(mOutputDirFileWidget, 1, 1, 1, 2);

        mHeightLabel = new QLabel(AnimationExport3DDialog);
        mHeightLabel->setObjectName(QStringLiteral("mHeightLabel"));

        gridLayout->addWidget(mHeightLabel, 4, 0, 1, 1);

        mFpsLabel = new QLabel(AnimationExport3DDialog);
        mFpsLabel->setObjectName(QStringLiteral("mFpsLabel"));

        gridLayout->addWidget(mFpsLabel, 2, 0, 1, 1);

        mTemplateLineEdit = new QLineEdit(AnimationExport3DDialog);
        mTemplateLineEdit->setObjectName(QStringLiteral("mTemplateLineEdit"));

        gridLayout->addWidget(mTemplateLineEdit, 0, 1, 1, 2);

        mOutputDirLabel = new QLabel(AnimationExport3DDialog);
        mOutputDirLabel->setObjectName(QStringLiteral("mOutputDirLabel"));

        gridLayout->addWidget(mOutputDirLabel, 1, 0, 1, 1);

        mTemplateLabel = new QLabel(AnimationExport3DDialog);
        mTemplateLabel->setObjectName(QStringLiteral("mTemplateLabel"));

        gridLayout->addWidget(mTemplateLabel, 0, 0, 1, 1);

        mFpsSpinBox = new QgsSpinBox(AnimationExport3DDialog);
        mFpsSpinBox->setObjectName(QStringLiteral("mFpsSpinBox"));
        mFpsSpinBox->setMinimum(1);
        mFpsSpinBox->setValue(30);

        gridLayout->addWidget(mFpsSpinBox, 2, 1, 1, 2);

        mWidthLabel = new QLabel(AnimationExport3DDialog);
        mWidthLabel->setObjectName(QStringLiteral("mWidthLabel"));

        gridLayout->addWidget(mWidthLabel, 3, 0, 1, 1);

        mWidthSpinBox = new QgsSpinBox(AnimationExport3DDialog);
        mWidthSpinBox->setObjectName(QStringLiteral("mWidthSpinBox"));
        mWidthSpinBox->setMinimum(100);
        mWidthSpinBox->setMaximum(10000);
        mWidthSpinBox->setSingleStep(100);
        mWidthSpinBox->setValue(800);

        gridLayout->addWidget(mWidthSpinBox, 3, 1, 1, 2);

        mHeightSpinBox = new QgsSpinBox(AnimationExport3DDialog);
        mHeightSpinBox->setObjectName(QStringLiteral("mHeightSpinBox"));
        mHeightSpinBox->setMinimum(100);
        mHeightSpinBox->setMaximum(10000);
        mHeightSpinBox->setSingleStep(100);
        mHeightSpinBox->setValue(600);

        gridLayout->addWidget(mHeightSpinBox, 4, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(AnimationExport3DDialog);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 6, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        mHeightLabel->setBuddy(mHeightSpinBox);
        mTemplateLabel->setBuddy(mTemplateLineEdit);
        mWidthLabel->setBuddy(mWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTemplateLineEdit, mFpsSpinBox);
        QWidget::setTabOrder(mFpsSpinBox, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);

        retranslateUi(AnimationExport3DDialog);
        QObject::connect(mButtonBox, SIGNAL(accepted()), AnimationExport3DDialog, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), AnimationExport3DDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AnimationExport3DDialog);
    } // setupUi

    void retranslateUi(QDialog *AnimationExport3DDialog)
    {
        AnimationExport3DDialog->setWindowTitle(QApplication::translate("AnimationExport3DDialog", "Export 3D Animation", Q_NULLPTR));
        mHeightLabel->setText(QApplication::translate("AnimationExport3DDialog", "Output height", Q_NULLPTR));
        mFpsLabel->setText(QApplication::translate("AnimationExport3DDialog", "Frames per second", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTemplateLineEdit->setToolTip(QApplication::translate("AnimationExport3DDialog", "Number of # represents number of digits (e.g. frame###.png -> frame001.png)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOutputDirLabel->setText(QApplication::translate("AnimationExport3DDialog", "Output directory", Q_NULLPTR));
        mTemplateLabel->setText(QApplication::translate("AnimationExport3DDialog", "Template", Q_NULLPTR));
        mWidthLabel->setText(QApplication::translate("AnimationExport3DDialog", "Output width", Q_NULLPTR));
        mWidthSpinBox->setSuffix(QApplication::translate("AnimationExport3DDialog", " px", Q_NULLPTR));
        mHeightSpinBox->setSuffix(QApplication::translate("AnimationExport3DDialog", " px", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationExport3DDialog: public Ui_AnimationExport3DDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONEXPORT3DDIALOG_H
