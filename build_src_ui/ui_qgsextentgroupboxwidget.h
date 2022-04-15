/********************************************************************************
** Form generated from reading UI file 'qgsextentgroupboxwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXTENTGROUPBOXWIDGET_H
#define UI_QGSEXTENTGROUPBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgshighlightablelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExtentGroupBoxWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mExpandedWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *mYMinLabel;
    QLineEdit *mYMaxLineEdit;
    QLineEdit *mYMinLineEdit;
    QLabel *mYMaxLabel;
    QLabel *mXMaxLabel;
    QLabel *mXMinLabel;
    QLineEdit *mXMaxLineEdit;
    QLineEdit *mXMinLineEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *mButtonDrawOnCanvas;
    QPushButton *mOriginalExtentButton;
    QPushButton *mCurrentExtentButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mButtonCalcFromLayer;
    QWidget *mCondensedFrame;
    QHBoxLayout *horizontalLayout;
    QgsHighlightableLineEdit *mCondensedLineEdit;
    QToolButton *mCondensedToolButton;

    void setupUi(QWidget *QgsExtentGroupBoxWidget)
    {
        if (QgsExtentGroupBoxWidget->objectName().isEmpty())
            QgsExtentGroupBoxWidget->setObjectName(QStringLiteral("QgsExtentGroupBoxWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExtentGroupBoxWidget->sizePolicy().hasHeightForWidth());
        QgsExtentGroupBoxWidget->setSizePolicy(sizePolicy);
        QgsExtentGroupBoxWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsExtentGroupBoxWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mExpandedWidget = new QWidget(QgsExtentGroupBoxWidget);
        mExpandedWidget->setObjectName(QStringLiteral("mExpandedWidget"));
        verticalLayout_2 = new QVBoxLayout(mExpandedWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mYMinLabel = new QLabel(mExpandedWidget);
        mYMinLabel->setObjectName(QStringLiteral("mYMinLabel"));
        mYMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMinLabel, 2, 1, 1, 1);

        mYMaxLineEdit = new QLineEdit(mExpandedWidget);
        mYMaxLineEdit->setObjectName(QStringLiteral("mYMaxLineEdit"));

        gridLayout_4->addWidget(mYMaxLineEdit, 0, 2, 1, 1);

        mYMinLineEdit = new QLineEdit(mExpandedWidget);
        mYMinLineEdit->setObjectName(QStringLiteral("mYMinLineEdit"));

        gridLayout_4->addWidget(mYMinLineEdit, 2, 2, 1, 1);

        mYMaxLabel = new QLabel(mExpandedWidget);
        mYMaxLabel->setObjectName(QStringLiteral("mYMaxLabel"));
        mYMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMaxLabel, 0, 1, 1, 1);

        mXMaxLabel = new QLabel(mExpandedWidget);
        mXMaxLabel->setObjectName(QStringLiteral("mXMaxLabel"));
        mXMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMaxLabel, 1, 2, 1, 1);

        mXMinLabel = new QLabel(mExpandedWidget);
        mXMinLabel->setObjectName(QStringLiteral("mXMinLabel"));
        mXMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMinLabel, 1, 0, 1, 1);

        mXMaxLineEdit = new QLineEdit(mExpandedWidget);
        mXMaxLineEdit->setObjectName(QStringLiteral("mXMaxLineEdit"));

        gridLayout_4->addWidget(mXMaxLineEdit, 1, 3, 1, 1);

        mXMinLineEdit = new QLineEdit(mExpandedWidget);
        mXMinLineEdit->setObjectName(QStringLiteral("mXMinLineEdit"));

        gridLayout_4->addWidget(mXMinLineEdit, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        widget_2 = new QWidget(mExpandedWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mButtonDrawOnCanvas = new QPushButton(widget_2);
        mButtonDrawOnCanvas->setObjectName(QStringLiteral("mButtonDrawOnCanvas"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mButtonDrawOnCanvas->sizePolicy().hasHeightForWidth());
        mButtonDrawOnCanvas->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mButtonDrawOnCanvas, 2, 11, 1, 1);

        mOriginalExtentButton = new QPushButton(widget_2);
        mOriginalExtentButton->setObjectName(QStringLiteral("mOriginalExtentButton"));
        mOriginalExtentButton->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(mOriginalExtentButton, 2, 0, 1, 1);

        mCurrentExtentButton = new QPushButton(widget_2);
        mCurrentExtentButton->setObjectName(QStringLiteral("mCurrentExtentButton"));
        mCurrentExtentButton->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(mCurrentExtentButton, 2, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 10, 1, 1);

        mButtonCalcFromLayer = new QPushButton(widget_2);
        mButtonCalcFromLayer->setObjectName(QStringLiteral("mButtonCalcFromLayer"));
        sizePolicy1.setHeightForWidth(mButtonCalcFromLayer->sizePolicy().hasHeightForWidth());
        mButtonCalcFromLayer->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mButtonCalcFromLayer, 2, 3, 1, 1);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(mExpandedWidget);

        mCondensedFrame = new QWidget(QgsExtentGroupBoxWidget);
        mCondensedFrame->setObjectName(QStringLiteral("mCondensedFrame"));
        horizontalLayout = new QHBoxLayout(mCondensedFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mCondensedLineEdit = new QgsHighlightableLineEdit(mCondensedFrame);
        mCondensedLineEdit->setObjectName(QStringLiteral("mCondensedLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mCondensedLineEdit->sizePolicy().hasHeightForWidth());
        mCondensedLineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mCondensedLineEdit);

        mCondensedToolButton = new QToolButton(mCondensedFrame);
        mCondensedToolButton->setObjectName(QStringLiteral("mCondensedToolButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mCondensedToolButton->sizePolicy().hasHeightForWidth());
        mCondensedToolButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(mCondensedToolButton);


        verticalLayout->addWidget(mCondensedFrame);

        QWidget::setTabOrder(mYMaxLineEdit, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mOriginalExtentButton);
        QWidget::setTabOrder(mOriginalExtentButton, mButtonCalcFromLayer);
        QWidget::setTabOrder(mButtonCalcFromLayer, mCurrentExtentButton);
        QWidget::setTabOrder(mCurrentExtentButton, mButtonDrawOnCanvas);

        retranslateUi(QgsExtentGroupBoxWidget);

        QMetaObject::connectSlotsByName(QgsExtentGroupBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsExtentGroupBoxWidget)
    {
        mYMinLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "South", Q_NULLPTR));
        mYMaxLineEdit->setText(QString());
        mYMaxLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "North", Q_NULLPTR));
        mXMaxLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "East", Q_NULLPTR));
        mXMinLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "West", Q_NULLPTR));
        mButtonDrawOnCanvas->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Draw on Canvas", Q_NULLPTR));
        mOriginalExtentButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Current Layer Extent", Q_NULLPTR));
        mCurrentExtentButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Map Canvas Extent", Q_NULLPTR));
        mButtonCalcFromLayer->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Calculate from Layer", Q_NULLPTR));
        mCondensedToolButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsExtentGroupBoxWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsExtentGroupBoxWidget: public Ui_QgsExtentGroupBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXTENTGROUPBOXWIDGET_H
