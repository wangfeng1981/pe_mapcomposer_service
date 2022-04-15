/********************************************************************************
** Form generated from reading UI file 'simplelinematerialwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLELINEMATERIALWIDGETBASE_H
#define UI_SIMPLELINEMATERIALWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_SimpleLineMaterialWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsColorButton *btnAmbient;
    QLabel *lblAmbient;

    void setupUi(QWidget *SimpleLineMaterialWidgetBase)
    {
        if (SimpleLineMaterialWidgetBase->objectName().isEmpty())
            SimpleLineMaterialWidgetBase->setObjectName(QStringLiteral("SimpleLineMaterialWidgetBase"));
        SimpleLineMaterialWidgetBase->resize(394, 55);
        SimpleLineMaterialWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(SimpleLineMaterialWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnAmbient = new QgsColorButton(SimpleLineMaterialWidgetBase);
        btnAmbient->setObjectName(QStringLiteral("btnAmbient"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnAmbient, 0, 1, 1, 1);

        lblAmbient = new QLabel(SimpleLineMaterialWidgetBase);
        lblAmbient->setObjectName(QStringLiteral("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 0, 0, 1, 1);


        retranslateUi(SimpleLineMaterialWidgetBase);

        QMetaObject::connectSlotsByName(SimpleLineMaterialWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *SimpleLineMaterialWidgetBase)
    {
        lblAmbient->setText(QApplication::translate("SimpleLineMaterialWidgetBase", "Color", Q_NULLPTR));
        Q_UNUSED(SimpleLineMaterialWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class SimpleLineMaterialWidgetBase: public Ui_SimpleLineMaterialWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLELINEMATERIALWIDGETBASE_H
