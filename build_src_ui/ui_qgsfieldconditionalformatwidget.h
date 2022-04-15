/********************************************************************************
** Form generated from reading UI file 'qgsfieldconditionalformatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDCONDITIONALFORMATWIDGET_H
#define UI_QGSFIELDCONDITIONALFORMATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldConditionalWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QPushButton *mNewButton;
    QHBoxLayout *horizontalLayout;
    QgsFieldComboBox *mFieldCombo;
    QRadioButton *fieldRadio;
    QRadioButton *rowRadio;
    QListView *listView;
    QButtonGroup *mFontButtons;

    void setupUi(QWidget *QgsFieldConditionalWidget)
    {
        if (QgsFieldConditionalWidget->objectName().isEmpty())
            QgsFieldConditionalWidget->setObjectName(QStringLiteral("QgsFieldConditionalWidget"));
        QgsFieldConditionalWidget->resize(335, 376);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsFieldConditionalWidget->sizePolicy().hasHeightForWidth());
        QgsFieldConditionalWidget->setSizePolicy(sizePolicy);
        QgsFieldConditionalWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsFieldConditionalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        mNewButton = new QPushButton(QgsFieldConditionalWidget);
        mNewButton->setObjectName(QStringLiteral("mNewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNewButton->sizePolicy().hasHeightForWidth());
        mNewButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNewButton->setIcon(icon);

        gridLayout_4->addWidget(mNewButton, 0, 3, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mFieldCombo = new QgsFieldComboBox(QgsFieldConditionalWidget);
        mFieldCombo->setObjectName(QStringLiteral("mFieldCombo"));

        horizontalLayout->addWidget(mFieldCombo);


        gridLayout_4->addLayout(horizontalLayout, 0, 2, 1, 1);

        fieldRadio = new QRadioButton(QgsFieldConditionalWidget);
        fieldRadio->setObjectName(QStringLiteral("fieldRadio"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fieldRadio->sizePolicy().hasHeightForWidth());
        fieldRadio->setSizePolicy(sizePolicy2);
        fieldRadio->setChecked(true);

        gridLayout_4->addWidget(fieldRadio, 0, 0, 1, 1);

        rowRadio = new QRadioButton(QgsFieldConditionalWidget);
        rowRadio->setObjectName(QStringLiteral("rowRadio"));
        sizePolicy2.setHeightForWidth(rowRadio->sizePolicy().hasHeightForWidth());
        rowRadio->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(rowRadio, 1, 0, 1, 1);

        gridLayout_4->setColumnStretch(3, 2);

        verticalLayout->addLayout(gridLayout_4);

        listView = new QListView(QgsFieldConditionalWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setIconSize(QSize(64, 32));

        verticalLayout->addWidget(listView);


        retranslateUi(QgsFieldConditionalWidget);

        QMetaObject::connectSlotsByName(QgsFieldConditionalWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsFieldConditionalWidget)
    {
        mNewButton->setText(QApplication::translate("QgsFieldConditionalWidget", "New Rule", Q_NULLPTR));
        fieldRadio->setText(QApplication::translate("QgsFieldConditionalWidget", "Field", Q_NULLPTR));
        rowRadio->setText(QApplication::translate("QgsFieldConditionalWidget", "Full row", Q_NULLPTR));
        Q_UNUSED(QgsFieldConditionalWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsFieldConditionalWidget: public Ui_QgsFieldConditionalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCONDITIONALFORMATWIDGET_H
