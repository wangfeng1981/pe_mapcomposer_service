/********************************************************************************
** Form generated from reading UI file 'qgsdetaileditemwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDETAILEDITEMWIDGETBASE_H
#define UI_QGSDETAILEDITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDetailedItemWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lblIcon;
    QLabel *lblTitle;
    QCheckBox *cbx;
    QWidget *widget;
    QLabel *lblDetail;
    QLabel *lblCategory;

    void setupUi(QWidget *QgsDetailedItemWidgetBase)
    {
        if (QgsDetailedItemWidgetBase->objectName().isEmpty())
            QgsDetailedItemWidgetBase->setObjectName(QStringLiteral("QgsDetailedItemWidgetBase"));
        QgsDetailedItemWidgetBase->resize(246, 56);
        QgsDetailedItemWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsDetailedItemWidgetBase);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblIcon = new QLabel(QgsDetailedItemWidgetBase);
        lblIcon->setObjectName(QStringLiteral("lblIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblIcon->sizePolicy().hasHeightForWidth());
        lblIcon->setSizePolicy(sizePolicy);
        lblIcon->setMinimumSize(QSize(0, 0));
        lblIcon->setMaximumSize(QSize(150, 80));
        lblIcon->setPixmap(QPixmap(QString::fromUtf8("../../images/icons/qgis-icon-16x16.png")));
        lblIcon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lblIcon, 0, 0, 1, 1);

        lblTitle = new QLabel(QgsDetailedItemWidgetBase);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblTitle->sizePolicy().hasHeightForWidth());
        lblTitle->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblTitle->setWordWrap(true);

        gridLayout->addWidget(lblTitle, 0, 1, 1, 1);

        cbx = new QCheckBox(QgsDetailedItemWidgetBase);
        cbx->setObjectName(QStringLiteral("cbx"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbx->sizePolicy().hasHeightForWidth());
        cbx->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cbx, 0, 2, 1, 1);

        widget = new QWidget(QgsDetailedItemWidgetBase);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        lblDetail = new QLabel(QgsDetailedItemWidgetBase);
        lblDetail->setObjectName(QStringLiteral("lblDetail"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblDetail->sizePolicy().hasHeightForWidth());
        lblDetail->setSizePolicy(sizePolicy4);
        lblDetail->setScaledContents(false);
        lblDetail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDetail->setWordWrap(true);

        gridLayout->addWidget(lblDetail, 1, 1, 1, 1);

        lblCategory = new QLabel(QgsDetailedItemWidgetBase);
        lblCategory->setObjectName(QStringLiteral("lblCategory"));

        gridLayout->addWidget(lblCategory, 2, 1, 1, 1);


        retranslateUi(QgsDetailedItemWidgetBase);

        QMetaObject::connectSlotsByName(QgsDetailedItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDetailedItemWidgetBase)
    {
        lblIcon->setText(QString());
        lblTitle->setText(QApplication::translate("QgsDetailedItemWidgetBase", "Heading Label", Q_NULLPTR));
        cbx->setText(QString());
        lblDetail->setText(QApplication::translate("QgsDetailedItemWidgetBase", "Detail label", Q_NULLPTR));
        lblCategory->setText(QApplication::translate("QgsDetailedItemWidgetBase", "Category label", Q_NULLPTR));
        Q_UNUSED(QgsDetailedItemWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDetailedItemWidgetBase: public Ui_QgsDetailedItemWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDETAILEDITEMWIDGETBASE_H
