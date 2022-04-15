/********************************************************************************
** Form generated from reading UI file 'qgslimitedrandomcolorrampwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLIMITEDRANDOMCOLORRAMPWIDGETBASE_H
#define UI_QGSLIMITEDRANDOMCOLORRAMPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLimitedRandomColorRampWidgetBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QgsSpinBox *spinHue1;
    QLabel *label_4;
    QgsSpinBox *spinHue2;
    QgsSpinBox *spinSat1;
    QLabel *label_9;
    QLabel *label_5;
    QgsSpinBox *spinSat2;
    QgsSpinBox *spinVal1;
    QLabel *label_10;
    QLabel *label_6;
    QgsSpinBox *spinVal2;
    QLabel *label_7;
    QgsSpinBox *spinCount;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLabel *lblPreview;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsLimitedRandomColorRampWidgetBase)
    {
        if (QgsLimitedRandomColorRampWidgetBase->objectName().isEmpty())
            QgsLimitedRandomColorRampWidgetBase->setObjectName(QStringLiteral("QgsLimitedRandomColorRampWidgetBase"));
        QgsLimitedRandomColorRampWidgetBase->resize(277, 205);
        vboxLayout = new QVBoxLayout(QgsLimitedRandomColorRampWidgetBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        spinHue1 = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinHue1->setObjectName(QStringLiteral("spinHue1"));
        spinHue1->setMaximum(359);

        gridLayout->addWidget(spinHue1, 0, 1, 1, 1);

        label_4 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        spinHue2 = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinHue2->setObjectName(QStringLiteral("spinHue2"));
        spinHue2->setMaximum(359);
        spinHue2->setValue(359);

        gridLayout->addWidget(spinHue2, 0, 3, 1, 1);

        spinSat1 = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinSat1->setObjectName(QStringLiteral("spinSat1"));
        spinSat1->setMaximum(255);

        gridLayout->addWidget(spinSat1, 1, 1, 1, 1);

        label_9 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_5 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        spinSat2 = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinSat2->setObjectName(QStringLiteral("spinSat2"));
        spinSat2->setMaximum(255);
        spinSat2->setValue(255);

        gridLayout->addWidget(spinSat2, 1, 3, 1, 1);

        spinVal1 = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinVal1->setObjectName(QStringLiteral("spinVal1"));
        spinVal1->setMaximum(255);

        gridLayout->addWidget(spinVal1, 2, 1, 1, 1);

        label_10 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        label_6 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        spinVal2 = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinVal2->setObjectName(QStringLiteral("spinVal2"));
        spinVal2->setMaximum(255);
        spinVal2->setValue(255);

        gridLayout->addWidget(spinVal2, 2, 3, 1, 1);

        label_7 = new QLabel(QgsLimitedRandomColorRampWidgetBase);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        spinCount = new QgsSpinBox(QgsLimitedRandomColorRampWidgetBase);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMinimum(1);
        spinCount->setMaximum(100);
        spinCount->setValue(10);

        gridLayout->addWidget(spinCount, 3, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);

        vboxLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(QgsLimitedRandomColorRampWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        lblPreview->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(lblPreview);


        vboxLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        retranslateUi(QgsLimitedRandomColorRampWidgetBase);

        QMetaObject::connectSlotsByName(QgsLimitedRandomColorRampWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLimitedRandomColorRampWidgetBase)
    {
        QgsLimitedRandomColorRampWidgetBase->setWindowTitle(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "Random Color Ramp", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "Hue", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "to", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "Saturation", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "to", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "Value", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "to", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "Classes", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLimitedRandomColorRampWidgetBase", "Preview", Q_NULLPTR));
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsLimitedRandomColorRampWidgetBase: public Ui_QgsLimitedRandomColorRampWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLIMITEDRANDOMCOLORRAMPWIDGETBASE_H
