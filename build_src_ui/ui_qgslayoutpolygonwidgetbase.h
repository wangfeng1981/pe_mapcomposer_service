/********************************************************************************
** Form generated from reading UI file 'qgslayoutpolygonwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTPOLYGONWIDGETBASE_H
#define UI_QGSLAYOUTPOLYGONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutPolygonWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QgsSymbolButton *mPolygonStyleButton;

    void setupUi(QWidget *QgsLayoutPolygonWidgetBase)
    {
        if (QgsLayoutPolygonWidgetBase->objectName().isEmpty())
            QgsLayoutPolygonWidgetBase->setObjectName(QStringLiteral("QgsLayoutPolygonWidgetBase"));
        QgsLayoutPolygonWidgetBase->resize(285, 100);
        QgsLayoutPolygonWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsLayoutPolygonWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutPolygonWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutPolygonWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 92));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mPolygonStyleButton = new QgsSymbolButton(groupBox);
        mPolygonStyleButton->setObjectName(QStringLiteral("mPolygonStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPolygonStyleButton->sizePolicy().hasHeightForWidth());
        mPolygonStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mPolygonStyleButton, 0, 0, 1, 1);


        mainLayout->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mPolygonStyleButton);

        retranslateUi(QgsLayoutPolygonWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutPolygonWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutPolygonWidgetBase)
    {
        label_2->setText(QApplication::translate("QgsLayoutPolygonWidgetBase", "Polygon", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutPolygonWidgetBase", "Main Properties", Q_NULLPTR));
        mPolygonStyleButton->setText(QApplication::translate("QgsLayoutPolygonWidgetBase", "Change\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsLayoutPolygonWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutPolygonWidgetBase: public Ui_QgsLayoutPolygonWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTPOLYGONWIDGETBASE_H
