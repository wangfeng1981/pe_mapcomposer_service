/********************************************************************************
** Form generated from reading UI file 'qgslayertreeembeddedconfigwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYERTREEEMBEDDEDCONFIGWIDGETBASE_H
#define UI_QGSLAYERTREEEMBEDDEDCONFIGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLayerTreeEmbeddedConfigWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QListView *mListAvailable;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QToolButton *mBtnAdd;
    QToolButton *mBtnRemove;
    QSpacerItem *verticalSpacer;
    QListView *mListUsed;

    void setupUi(QWidget *QgsLayerTreeEmbeddedConfigWidgetBase)
    {
        if (QgsLayerTreeEmbeddedConfigWidgetBase->objectName().isEmpty())
            QgsLayerTreeEmbeddedConfigWidgetBase->setObjectName(QStringLiteral("QgsLayerTreeEmbeddedConfigWidgetBase"));
        QgsLayerTreeEmbeddedConfigWidgetBase->resize(580, 300);
        QgsLayerTreeEmbeddedConfigWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsLayerTreeEmbeddedConfigWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QgsLayerTreeEmbeddedConfigWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsLayerTreeEmbeddedConfigWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        mListAvailable = new QListView(QgsLayerTreeEmbeddedConfigWidgetBase);
        mListAvailable->setObjectName(QStringLiteral("mListAvailable"));

        gridLayout->addWidget(mListAvailable, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        mBtnAdd = new QToolButton(QgsLayerTreeEmbeddedConfigWidgetBase);
        mBtnAdd->setObjectName(QStringLiteral("mBtnAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAdd->setIcon(icon);

        verticalLayout->addWidget(mBtnAdd);

        mBtnRemove = new QToolButton(QgsLayerTreeEmbeddedConfigWidgetBase);
        mBtnRemove->setObjectName(QStringLiteral("mBtnRemove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemove->setIcon(icon1);

        verticalLayout->addWidget(mBtnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        mListUsed = new QListView(QgsLayerTreeEmbeddedConfigWidgetBase);
        mListUsed->setObjectName(QStringLiteral("mListUsed"));

        gridLayout->addWidget(mListUsed, 1, 2, 1, 1);


        retranslateUi(QgsLayerTreeEmbeddedConfigWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayerTreeEmbeddedConfigWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayerTreeEmbeddedConfigWidgetBase)
    {
        label->setText(QApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Available widgets", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Used widgets", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnAdd->setToolTip(QApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Add  selected widgets", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnAdd->setText(QApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "->", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnRemove->setToolTip(QApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Remove selected widgets", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRemove->setText(QApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "<-", Q_NULLPTR));
        Q_UNUSED(QgsLayerTreeEmbeddedConfigWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayerTreeEmbeddedConfigWidgetBase: public Ui_QgsLayerTreeEmbeddedConfigWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYERTREEEMBEDDEDCONFIGWIDGETBASE_H
