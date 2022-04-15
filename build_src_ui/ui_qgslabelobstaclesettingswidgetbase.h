/********************************************************************************
** Form generated from reading UI file 'qgslabelobstaclesettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELOBSTACLESETTINGSWIDGETBASE_H
#define UI_QGSLABELOBSTACLESETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelObstacleSettingsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_40;
    QSlider *mObstacleFactorSlider;
    QLabel *label_41;
    QgsPropertyOverrideButton *mObstacleFactorDDBtn;
    QComboBox *mObstacleTypeComboBox;
    QLabel *mObstacleTypeLabel;

    void setupUi(QgsPanelWidget *QgsLabelObstacleSettingsWidgetBase)
    {
        if (QgsLabelObstacleSettingsWidgetBase->objectName().isEmpty())
            QgsLabelObstacleSettingsWidgetBase->setObjectName(QStringLiteral("QgsLabelObstacleSettingsWidgetBase"));
        QgsLabelObstacleSettingsWidgetBase->resize(237, 225);
        QgsLabelObstacleSettingsWidgetBase->setWindowTitle(QStringLiteral("Obstacle Settings"));
        gridLayout = new QGridLayout(QgsLabelObstacleSettingsWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        groupBox = new QGroupBox(QgsLabelObstacleSettingsWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout->addWidget(label_40);

        mObstacleFactorSlider = new QSlider(groupBox);
        mObstacleFactorSlider->setObjectName(QStringLiteral("mObstacleFactorSlider"));
        mObstacleFactorSlider->setMinimum(0);
        mObstacleFactorSlider->setMaximum(10);
        mObstacleFactorSlider->setValue(5);
        mObstacleFactorSlider->setOrientation(Qt::Horizontal);
        mObstacleFactorSlider->setTickPosition(QSlider::TicksBelow);
        mObstacleFactorSlider->setTickInterval(1);

        horizontalLayout->addWidget(mObstacleFactorSlider);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout->addWidget(label_41);

        mObstacleFactorDDBtn = new QgsPropertyOverrideButton(groupBox);
        mObstacleFactorDDBtn->setObjectName(QStringLiteral("mObstacleFactorDDBtn"));

        horizontalLayout->addWidget(mObstacleFactorDDBtn);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        mObstacleTypeComboBox = new QComboBox(QgsLabelObstacleSettingsWidgetBase);
        mObstacleTypeComboBox->setObjectName(QStringLiteral("mObstacleTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mObstacleTypeComboBox->sizePolicy().hasHeightForWidth());
        mObstacleTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mObstacleTypeComboBox, 2, 1, 1, 1);

        mObstacleTypeLabel = new QLabel(QgsLabelObstacleSettingsWidgetBase);
        mObstacleTypeLabel->setObjectName(QStringLiteral("mObstacleTypeLabel"));

        gridLayout->addWidget(mObstacleTypeLabel, 2, 0, 1, 1);


        retranslateUi(QgsLabelObstacleSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelObstacleSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelObstacleSettingsWidgetBase)
    {
        groupBox->setTitle(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Obstacle Weight", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Setting a higher weight for obstacles means that labels are less likely to cover features in this layer.</span></p><p>Only labels with a higher priority than this obstacle weight will be placed over these obstacles.</p></body></html>", Q_NULLPTR));
        label_40->setText(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Low", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mObstacleFactorSlider->setToolTip(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Controls how likely labels are to cover features in this layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_41->setText(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "High", Q_NULLPTR));
        mObstacleFactorDDBtn->setText(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "\342\200\246", Q_NULLPTR));
        mObstacleTypeLabel->setText(QApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Minimize placing labels", Q_NULLPTR));
        Q_UNUSED(QgsLabelObstacleSettingsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelObstacleSettingsWidgetBase: public Ui_QgsLabelObstacleSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELOBSTACLESETTINGSWIDGETBASE_H
