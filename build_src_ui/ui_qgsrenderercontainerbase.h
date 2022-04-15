/********************************************************************************
** Form generated from reading UI file 'qgsrenderercontainerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERCONTAINERBASE_H
#define UI_QGSRENDERERCONTAINERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererWidgetContainerBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *mBackButton;
    QLabel *mTitleText;
    QToolButton *mMenuButton;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mStackedWidget;

    void setupUi(QWidget *QgsRendererWidgetContainerBase)
    {
        if (QgsRendererWidgetContainerBase->objectName().isEmpty())
            QgsRendererWidgetContainerBase->setObjectName(QStringLiteral("QgsRendererWidgetContainerBase"));
        QgsRendererWidgetContainerBase->resize(375, 628);
        QgsRendererWidgetContainerBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsRendererWidgetContainerBase);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mBackButton = new QToolButton(QgsRendererWidgetContainerBase);
        mBackButton->setObjectName(QStringLiteral("mBackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBackButton->sizePolicy().hasHeightForWidth());
        mBackButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBackButton->setIcon(icon);
        mBackButton->setAutoRepeat(false);
        mBackButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(mBackButton);

        mTitleText = new QLabel(QgsRendererWidgetContainerBase);
        mTitleText->setObjectName(QStringLiteral("mTitleText"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTitleText->sizePolicy().hasHeightForWidth());
        mTitleText->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mTitleText);

        mMenuButton = new QToolButton(QgsRendererWidgetContainerBase);
        mMenuButton->setObjectName(QStringLiteral("mMenuButton"));
        sizePolicy.setHeightForWidth(mMenuButton->sizePolicy().hasHeightForWidth());
        mMenuButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconHamburgerMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMenuButton->setIcon(icon1);
        mMenuButton->setAutoRepeat(false);
        mMenuButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(mMenuButton);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea = new QgsScrollArea(QgsRendererWidgetContainerBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 375, 596));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mStackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(QgsRendererWidgetContainerBase);

        QMetaObject::connectSlotsByName(QgsRendererWidgetContainerBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererWidgetContainerBase)
    {
#ifndef QT_NO_TOOLTIP
        mBackButton->setToolTip(QApplication::translate("QgsRendererWidgetContainerBase", "Go back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBackButton->setText(QString());
        mTitleText->setText(QString());
#ifndef QT_NO_TOOLTIP
        mMenuButton->setToolTip(QApplication::translate("QgsRendererWidgetContainerBase", "Go back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMenuButton->setText(QString());
        Q_UNUSED(QgsRendererWidgetContainerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRendererWidgetContainerBase: public Ui_QgsRendererWidgetContainerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERCONTAINERBASE_H
