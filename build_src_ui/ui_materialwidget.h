/********************************************************************************
** Form generated from reading UI file 'materialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALWIDGET_H
#define UI_MATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaterialWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *mMaterialTypeComboBox;
    QStackedWidget *mStackedWidget;
    QWidget *mPageDummy;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;

    void setupUi(QWidget *MaterialWidgetBase)
    {
        if (MaterialWidgetBase->objectName().isEmpty())
            MaterialWidgetBase->setObjectName(QStringLiteral("MaterialWidgetBase"));
        MaterialWidgetBase->resize(382, 264);
        MaterialWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(MaterialWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mMaterialTypeComboBox = new QComboBox(MaterialWidgetBase);
        mMaterialTypeComboBox->setObjectName(QStringLiteral("mMaterialTypeComboBox"));

        verticalLayout->addWidget(mMaterialTypeComboBox);

        mStackedWidget = new QStackedWidget(MaterialWidgetBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        mPageDummy = new QWidget();
        mPageDummy->setObjectName(QStringLiteral("mPageDummy"));
        horizontalLayout = new QHBoxLayout(mPageDummy);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(mPageDummy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        mStackedWidget->addWidget(mPageDummy);

        verticalLayout->addWidget(mStackedWidget);


        retranslateUi(MaterialWidgetBase);

        QMetaObject::connectSlotsByName(MaterialWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *MaterialWidgetBase)
    {
        label_2->setText(QApplication::translate("MaterialWidgetBase", "This material doesn't have any editable properties", Q_NULLPTR));
        Q_UNUSED(MaterialWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class MaterialWidgetBase: public Ui_MaterialWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALWIDGET_H
