/********************************************************************************
** Form generated from reading UI file 'qgsdevtoolswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDEVTOOLSWIDGETBASE_H
#define UI_QGSDEVTOOLSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDevToolsWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout;
    QListWidget *mOptionsListWidget;
    QStackedWidget *mStackedWidget;

    void setupUi(QWidget *QgsDevToolsWidgetBase)
    {
        if (QgsDevToolsWidgetBase->objectName().isEmpty())
            QgsDevToolsWidgetBase->setObjectName(QStringLiteral("QgsDevToolsWidgetBase"));
        QgsDevToolsWidgetBase->resize(500, 496);
        QgsDevToolsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout = new QHBoxLayout(QgsDevToolsWidgetBase);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        mOptionsListFrame = new QFrame(QgsDevToolsWidgetBase);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mOptionsListFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsListWidget->sizePolicy().hasHeightForWidth());
        mOptionsListWidget->setSizePolicy(sizePolicy);
        mOptionsListWidget->setMinimumSize(QSize(38, 0));
        mOptionsListWidget->setFrameShape(QFrame::NoFrame);
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout->addWidget(mOptionsListWidget);


        horizontalLayout->addWidget(mOptionsListFrame);

        mStackedWidget = new QStackedWidget(QgsDevToolsWidgetBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));

        horizontalLayout->addWidget(mStackedWidget);

        horizontalLayout->setStretch(1, 1);

        retranslateUi(QgsDevToolsWidgetBase);

        QMetaObject::connectSlotsByName(QgsDevToolsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDevToolsWidgetBase)
    {
        Q_UNUSED(QgsDevToolsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDevToolsWidgetBase: public Ui_QgsDevToolsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDEVTOOLSWIDGETBASE_H
