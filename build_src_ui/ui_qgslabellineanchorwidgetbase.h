/********************************************************************************
** Form generated from reading UI file 'qgslabellineanchorwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELLINEANCHORWIDGETBASE_H
#define UI_QGSLABELLINEANCHORWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelLineAnchorWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QgsPropertyOverrideButton *mLinePlacementDDBtn;
    QgsDoubleSpinBox *mCustomPlacementSpinBox;
    QComboBox *mPercentPlacementComboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QComboBox *mAnchorTypeComboBox;
    QLabel *mAnchorTypeHintLabel;

    void setupUi(QgsPanelWidget *QgsLabelLineAnchorWidgetBase)
    {
        if (QgsLabelLineAnchorWidgetBase->objectName().isEmpty())
            QgsLabelLineAnchorWidgetBase->setObjectName(QStringLiteral("QgsLabelLineAnchorWidgetBase"));
        QgsLabelLineAnchorWidgetBase->resize(271, 326);
        QgsLabelLineAnchorWidgetBase->setWindowTitle(QStringLiteral("Obstacle Settings"));
        gridLayout = new QGridLayout(QgsLabelLineAnchorWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        groupBox = new QGroupBox(QgsLabelLineAnchorWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 10, -1, -1);
        mLinePlacementDDBtn = new QgsPropertyOverrideButton(groupBox);
        mLinePlacementDDBtn->setObjectName(QStringLiteral("mLinePlacementDDBtn"));

        gridLayout_2->addWidget(mLinePlacementDDBtn, 0, 2, 1, 1);

        mCustomPlacementSpinBox = new QgsDoubleSpinBox(groupBox);
        mCustomPlacementSpinBox->setObjectName(QStringLiteral("mCustomPlacementSpinBox"));
        mCustomPlacementSpinBox->setMaximum(100);

        gridLayout_2->addWidget(mCustomPlacementSpinBox, 1, 0, 1, 3);

        mPercentPlacementComboBox = new QComboBox(groupBox);
        mPercentPlacementComboBox->setObjectName(QStringLiteral("mPercentPlacementComboBox"));

        gridLayout_2->addWidget(mPercentPlacementComboBox, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(QgsLabelLineAnchorWidgetBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mAnchorTypeComboBox = new QComboBox(groupBox_2);
        mAnchorTypeComboBox->setObjectName(QStringLiteral("mAnchorTypeComboBox"));

        gridLayout_3->addWidget(mAnchorTypeComboBox, 0, 0, 1, 1);

        mAnchorTypeHintLabel = new QLabel(groupBox_2);
        mAnchorTypeHintLabel->setObjectName(QStringLiteral("mAnchorTypeHintLabel"));
        mAnchorTypeHintLabel->setWordWrap(true);

        gridLayout_3->addWidget(mAnchorTypeHintLabel, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);


        retranslateUi(QgsLabelLineAnchorWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelLineAnchorWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelLineAnchorWidgetBase)
    {
        groupBox->setTitle(QApplication::translate("QgsLabelLineAnchorWidgetBase", "Label Anchoring", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLabelLineAnchorWidgetBase", "<b>Controls the position along the line which labels will be placed close to.</b>", Q_NULLPTR));
        mLinePlacementDDBtn->setText(QApplication::translate("QgsLabelLineAnchorWidgetBase", "\342\200\246", Q_NULLPTR));
        mCustomPlacementSpinBox->setSuffix(QApplication::translate("QgsLabelLineAnchorWidgetBase", " %", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsLabelLineAnchorWidgetBase", "Placement Behavior", Q_NULLPTR));
        mAnchorTypeHintLabel->setText(QApplication::translate("QgsLabelLineAnchorWidgetBase", "Hint", Q_NULLPTR));
        Q_UNUSED(QgsLabelLineAnchorWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelLineAnchorWidgetBase: public Ui_QgsLabelLineAnchorWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELLINEANCHORWIDGETBASE_H
