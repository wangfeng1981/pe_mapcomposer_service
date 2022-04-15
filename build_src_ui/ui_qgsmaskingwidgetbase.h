/********************************************************************************
** Form generated from reading UI file 'qgsmaskingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMASKINGWIDGETBASE_H
#define UI_QGSMASKINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmasksourceselectionwidget.h"
#include "qgsmessagebar.h"
#include "qgssymbollayerselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMaskingWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsMessageBar *mMessageBar;
    QLabel *label;
    QgsSymbolLayerSelectionWidget *mMaskTargetsWidget;
    QLabel *label_2;
    QgsMaskSourceSelectionWidget *mMaskSourcesWidget;

    void setupUi(QWidget *QgsMaskingWidgetBase)
    {
        if (QgsMaskingWidgetBase->objectName().isEmpty())
            QgsMaskingWidgetBase->setObjectName(QStringLiteral("QgsMaskingWidgetBase"));
        QgsMaskingWidgetBase->resize(812, 538);
        QgsMaskingWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsMaskingWidgetBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mMessageBar = new QgsMessageBar(QgsMaskingWidgetBase);
        mMessageBar->setObjectName(QStringLiteral("mMessageBar"));
        mMessageBar->setFrameShape(QFrame::StyledPanel);
        mMessageBar->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(mMessageBar);

        label = new QLabel(QgsMaskingWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        mMaskTargetsWidget = new QgsSymbolLayerSelectionWidget(QgsMaskingWidgetBase);
        mMaskTargetsWidget->setObjectName(QStringLiteral("mMaskTargetsWidget"));

        verticalLayout_2->addWidget(mMaskTargetsWidget);

        label_2 = new QLabel(QgsMaskingWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        mMaskSourcesWidget = new QgsMaskSourceSelectionWidget(QgsMaskingWidgetBase);
        mMaskSourcesWidget->setObjectName(QStringLiteral("mMaskSourcesWidget"));

        verticalLayout_2->addWidget(mMaskSourcesWidget);


        retranslateUi(QgsMaskingWidgetBase);

        QMetaObject::connectSlotsByName(QgsMaskingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMaskingWidgetBase)
    {
        label->setText(QApplication::translate("QgsMaskingWidgetBase", "Masked symbol layers", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMaskingWidgetBase", "Mask sources", Q_NULLPTR));
        Q_UNUSED(QgsMaskingWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMaskingWidgetBase: public Ui_QgsMaskingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMASKINGWIDGETBASE_H
