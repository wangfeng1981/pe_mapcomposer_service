/********************************************************************************
** Form generated from reading UI file 'qgsmodelinputreorderwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMODELINPUTREORDERWIDGETBASE_H
#define UI_QGSMODELINPUTREORDERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsModelInputReorderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QListView *mInputsList;
    QVBoxLayout *pushBtnBox_2;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QgsModelInputReorderWidgetBase)
    {
        if (QgsModelInputReorderWidgetBase->objectName().isEmpty())
            QgsModelInputReorderWidgetBase->setObjectName(QStringLiteral("QgsModelInputReorderWidgetBase"));
        QgsModelInputReorderWidgetBase->resize(356, 253);
        QgsModelInputReorderWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(QgsModelInputReorderWidgetBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mInputsList = new QListView(QgsModelInputReorderWidgetBase);
        mInputsList->setObjectName(QStringLiteral("mInputsList"));
        mInputsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(mInputsList);

        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QStringLiteral("pushBtnBox_2"));
        mButtonUp = new QPushButton(QgsModelInputReorderWidgetBase);
        mButtonUp->setObjectName(QStringLiteral("mButtonUp"));
        mButtonUp->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonUp->setIcon(icon);

        pushBtnBox_2->addWidget(mButtonUp);

        mButtonDown = new QPushButton(QgsModelInputReorderWidgetBase);
        mButtonDown->setObjectName(QStringLiteral("mButtonDown"));
        mButtonDown->setMaximumSize(QSize(50, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonDown->setIcon(icon1);

        pushBtnBox_2->addWidget(mButtonDown);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        pushBtnBox_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(pushBtnBox_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(QgsModelInputReorderWidgetBase);

        QMetaObject::connectSlotsByName(QgsModelInputReorderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsModelInputReorderWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        mButtonUp->setToolTip(QApplication::translate("QgsModelInputReorderWidgetBase", "Move up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mButtonDown->setToolTip(QApplication::translate("QgsModelInputReorderWidgetBase", "Move down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsModelInputReorderWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsModelInputReorderWidgetBase: public Ui_QgsModelInputReorderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMODELINPUTREORDERWIDGETBASE_H
