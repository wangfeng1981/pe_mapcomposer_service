/********************************************************************************
** Form generated from reading UI file 'shadowrenderingsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADOWRENDERINGSETTINGSWIDGET_H
#define UI_SHADOWRENDERINGSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ShadowRenderingSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *labelUsedDirectionalLight;
    QComboBox *usedDirectionalLightComboBox;
    QLabel *labelShadowRenderinMaximumDistance;
    QgsDoubleSpinBox *shadowRenderinMaximumDistanceSpinBox;
    QLabel *labelShadowBias;
    QgsDoubleSpinBox *shadowBiasSpinBox;
    QLabel *labelShadowMapResolution;
    QgsSpinBox *shadowMapResolutionSpinBox;

    void setupUi(QWidget *ShadowRenderingSettingsWidget)
    {
        if (ShadowRenderingSettingsWidget->objectName().isEmpty())
            ShadowRenderingSettingsWidget->setObjectName(QStringLiteral("ShadowRenderingSettingsWidget"));
        ShadowRenderingSettingsWidget->resize(416, 139);
        gridLayout = new QGridLayout(ShadowRenderingSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelUsedDirectionalLight = new QLabel(ShadowRenderingSettingsWidget);
        labelUsedDirectionalLight->setObjectName(QStringLiteral("labelUsedDirectionalLight"));

        gridLayout->addWidget(labelUsedDirectionalLight, 0, 0, 1, 1);

        usedDirectionalLightComboBox = new QComboBox(ShadowRenderingSettingsWidget);
        usedDirectionalLightComboBox->setObjectName(QStringLiteral("usedDirectionalLightComboBox"));

        gridLayout->addWidget(usedDirectionalLightComboBox, 0, 1, 1, 1);

        labelShadowRenderinMaximumDistance = new QLabel(ShadowRenderingSettingsWidget);
        labelShadowRenderinMaximumDistance->setObjectName(QStringLiteral("labelShadowRenderinMaximumDistance"));

        gridLayout->addWidget(labelShadowRenderinMaximumDistance, 1, 0, 1, 1);

        shadowRenderinMaximumDistanceSpinBox = new QgsDoubleSpinBox(ShadowRenderingSettingsWidget);
        shadowRenderinMaximumDistanceSpinBox->setObjectName(QStringLiteral("shadowRenderinMaximumDistanceSpinBox"));
        shadowRenderinMaximumDistanceSpinBox->setMaximum(1e+10);
        shadowRenderinMaximumDistanceSpinBox->setValue(500);

        gridLayout->addWidget(shadowRenderinMaximumDistanceSpinBox, 1, 1, 1, 1);

        labelShadowBias = new QLabel(ShadowRenderingSettingsWidget);
        labelShadowBias->setObjectName(QStringLiteral("labelShadowBias"));

        gridLayout->addWidget(labelShadowBias, 2, 0, 1, 1);

        shadowBiasSpinBox = new QgsDoubleSpinBox(ShadowRenderingSettingsWidget);
        shadowBiasSpinBox->setObjectName(QStringLiteral("shadowBiasSpinBox"));
        shadowBiasSpinBox->setDecimals(10);
        shadowBiasSpinBox->setMaximum(1);
        shadowBiasSpinBox->setSingleStep(1e-5);
        shadowBiasSpinBox->setValue(1e-5);

        gridLayout->addWidget(shadowBiasSpinBox, 2, 1, 1, 1);

        labelShadowMapResolution = new QLabel(ShadowRenderingSettingsWidget);
        labelShadowMapResolution->setObjectName(QStringLiteral("labelShadowMapResolution"));

        gridLayout->addWidget(labelShadowMapResolution, 3, 0, 1, 1);

        shadowMapResolutionSpinBox = new QgsSpinBox(ShadowRenderingSettingsWidget);
        shadowMapResolutionSpinBox->setObjectName(QStringLiteral("shadowMapResolutionSpinBox"));
        shadowMapResolutionSpinBox->setMinimum(128);
        shadowMapResolutionSpinBox->setMaximum(8192);
        shadowMapResolutionSpinBox->setValue(2048);

        gridLayout->addWidget(shadowMapResolutionSpinBox, 3, 1, 1, 1);


        retranslateUi(ShadowRenderingSettingsWidget);

        QMetaObject::connectSlotsByName(ShadowRenderingSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *ShadowRenderingSettingsWidget)
    {
        labelUsedDirectionalLight->setText(QApplication::translate("ShadowRenderingSettingsWidget", "Directional light", Q_NULLPTR));
        labelShadowRenderinMaximumDistance->setText(QApplication::translate("ShadowRenderingSettingsWidget", "Shadow rendering maximum distance", Q_NULLPTR));
        shadowRenderinMaximumDistanceSpinBox->setSuffix(QApplication::translate("ShadowRenderingSettingsWidget", " map units", Q_NULLPTR));
        labelShadowBias->setText(QApplication::translate("ShadowRenderingSettingsWidget", "Shadow bias", Q_NULLPTR));
        labelShadowMapResolution->setText(QApplication::translate("ShadowRenderingSettingsWidget", "Shadow map resolution", Q_NULLPTR));
        shadowMapResolutionSpinBox->setSuffix(QApplication::translate("ShadowRenderingSettingsWidget", " px", Q_NULLPTR));
        Q_UNUSED(ShadowRenderingSettingsWidget);
    } // retranslateUi

};

namespace Ui {
    class ShadowRenderingSettingsWidget: public Ui_ShadowRenderingSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOWRENDERINGSETTINGSWIDGET_H
