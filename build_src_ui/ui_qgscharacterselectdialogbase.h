/********************************************************************************
** Form generated from reading UI file 'qgscharacterselectdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCHARACTERSELECTDIALOGBASE_H
#define UI_QGSCHARACTERSELECTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCharacterSelectorBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mCharSelectLabel;
    QLabel *mCharSelectLabelFont;
    QgsScrollArea *mCharSelectScrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *mCharSelectButtonBox;

    void setupUi(QDialog *QgsCharacterSelectorBase)
    {
        if (QgsCharacterSelectorBase->objectName().isEmpty())
            QgsCharacterSelectorBase->setObjectName(QStringLiteral("QgsCharacterSelectorBase"));
        QgsCharacterSelectorBase->resize(640, 480);
        QgsCharacterSelectorBase->setMinimumSize(QSize(640, 480));
        verticalLayout = new QVBoxLayout(QgsCharacterSelectorBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mCharSelectLabel = new QLabel(QgsCharacterSelectorBase);
        mCharSelectLabel->setObjectName(QStringLiteral("mCharSelectLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCharSelectLabel->sizePolicy().hasHeightForWidth());
        mCharSelectLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCharSelectLabel);

        mCharSelectLabelFont = new QLabel(QgsCharacterSelectorBase);
        mCharSelectLabelFont->setObjectName(QStringLiteral("mCharSelectLabelFont"));

        horizontalLayout->addWidget(mCharSelectLabelFont);


        verticalLayout->addLayout(horizontalLayout);

        mCharSelectScrollArea = new QgsScrollArea(QgsCharacterSelectorBase);
        mCharSelectScrollArea->setObjectName(QStringLiteral("mCharSelectScrollArea"));
        mCharSelectScrollArea->setMinimumSize(QSize(0, 0));
        mCharSelectScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mCharSelectScrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 371));
        mCharSelectScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(mCharSelectScrollArea);

        mCharSelectButtonBox = new QDialogButtonBox(QgsCharacterSelectorBase);
        mCharSelectButtonBox->setObjectName(QStringLiteral("mCharSelectButtonBox"));
        mCharSelectButtonBox->setOrientation(Qt::Horizontal);
        mCharSelectButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mCharSelectButtonBox);


        retranslateUi(QgsCharacterSelectorBase);
        QObject::connect(mCharSelectButtonBox, SIGNAL(accepted()), QgsCharacterSelectorBase, SLOT(accept()));
        QObject::connect(mCharSelectButtonBox, SIGNAL(rejected()), QgsCharacterSelectorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsCharacterSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCharacterSelectorBase)
    {
        QgsCharacterSelectorBase->setWindowTitle(QApplication::translate("QgsCharacterSelectorBase", "Character Selector", Q_NULLPTR));
        mCharSelectLabel->setText(QApplication::translate("QgsCharacterSelectorBase", "Font", Q_NULLPTR));
        mCharSelectLabelFont->setText(QApplication::translate("QgsCharacterSelectorBase", "Current font family and style", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCharacterSelectorBase: public Ui_QgsCharacterSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCHARACTERSELECTDIALOGBASE_H
