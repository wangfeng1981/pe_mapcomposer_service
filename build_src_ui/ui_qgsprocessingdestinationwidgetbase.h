/********************************************************************************
** Form generated from reading UI file 'qgsprocessingdestinationwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGDESTINATIONWIDGETBASE_H
#define UI_QGSPROCESSINGDESTINATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgshighlightablelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingDestinationWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsHighlightableLineEdit *leText;
    QToolButton *mSelectButton;

    void setupUi(QWidget *QgsProcessingDestinationWidgetBase)
    {
        if (QgsProcessingDestinationWidgetBase->objectName().isEmpty())
            QgsProcessingDestinationWidgetBase->setObjectName(QStringLiteral("QgsProcessingDestinationWidgetBase"));
        QgsProcessingDestinationWidgetBase->resize(249, 27);
        QgsProcessingDestinationWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsProcessingDestinationWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        leText = new QgsHighlightableLineEdit(QgsProcessingDestinationWidgetBase);
        leText->setObjectName(QStringLiteral("leText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leText->sizePolicy().hasHeightForWidth());
        leText->setSizePolicy(sizePolicy);

        gridLayout->addWidget(leText, 0, 0, 1, 1);

        mSelectButton = new QToolButton(QgsProcessingDestinationWidgetBase);
        mSelectButton->setObjectName(QStringLiteral("mSelectButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSelectButton->sizePolicy().hasHeightForWidth());
        mSelectButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mSelectButton, 0, 1, 1, 1);


        retranslateUi(QgsProcessingDestinationWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingDestinationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingDestinationWidgetBase)
    {
        mSelectButton->setText(QApplication::translate("QgsProcessingDestinationWidgetBase", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsProcessingDestinationWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingDestinationWidgetBase: public Ui_QgsProcessingDestinationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGDESTINATIONWIDGETBASE_H
