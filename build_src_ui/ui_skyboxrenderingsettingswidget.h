/********************************************************************************
** Form generated from reading UI file 'skyboxrenderingsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYBOXRENDERINGSETTINGSWIDGET_H
#define UI_SKYBOXRENDERINGSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsfilecontentsourcelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SkyboxRenderingSettingsWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *skyboxTypeLabel;
    QComboBox *skyboxTypeComboBox;
    QGridLayout *hdrTextureLayout;
    QLabel *panoramicTextureLabel;
    QgsImageSourceLineEdit *panoramicTextureImageSource;
    QGridLayout *faceTexturesLayout;
    QLabel *negXImageSourceLabel;
    QgsImageSourceLineEdit *negXImageSource;
    QLabel *negYImageSourceLabel;
    QgsImageSourceLineEdit *negYImageSource;
    QLabel *negZImageSourceLabel;
    QgsImageSourceLineEdit *negZImageSource;
    QLabel *posXImageSourceLabel;
    QgsImageSourceLineEdit *posXImageSource;
    QLabel *posYImageSourceLabel;
    QgsImageSourceLineEdit *posYImageSource;
    QLabel *posZImageSourceLabel;
    QgsImageSourceLineEdit *posZImageSource;

    void setupUi(QWidget *SkyboxRenderingSettingsWidget)
    {
        if (SkyboxRenderingSettingsWidget->objectName().isEmpty())
            SkyboxRenderingSettingsWidget->setObjectName(QStringLiteral("SkyboxRenderingSettingsWidget"));
        SkyboxRenderingSettingsWidget->resize(301, 228);
        gridLayout_2 = new QGridLayout(SkyboxRenderingSettingsWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        skyboxTypeLabel = new QLabel(SkyboxRenderingSettingsWidget);
        skyboxTypeLabel->setObjectName(QStringLiteral("skyboxTypeLabel"));

        gridLayout_2->addWidget(skyboxTypeLabel, 0, 1, 1, 1);

        skyboxTypeComboBox = new QComboBox(SkyboxRenderingSettingsWidget);
        skyboxTypeComboBox->setObjectName(QStringLiteral("skyboxTypeComboBox"));

        gridLayout_2->addWidget(skyboxTypeComboBox, 0, 2, 1, 1);

        hdrTextureLayout = new QGridLayout();
        hdrTextureLayout->setObjectName(QStringLiteral("hdrTextureLayout"));
        panoramicTextureLabel = new QLabel(SkyboxRenderingSettingsWidget);
        panoramicTextureLabel->setObjectName(QStringLiteral("panoramicTextureLabel"));

        hdrTextureLayout->addWidget(panoramicTextureLabel, 0, 0, 1, 1);

        panoramicTextureImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        panoramicTextureImageSource->setObjectName(QStringLiteral("panoramicTextureImageSource"));

        hdrTextureLayout->addWidget(panoramicTextureImageSource, 0, 1, 1, 1);


        gridLayout_2->addLayout(hdrTextureLayout, 1, 1, 1, 2);

        faceTexturesLayout = new QGridLayout();
        faceTexturesLayout->setObjectName(QStringLiteral("faceTexturesLayout"));
        negXImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        negXImageSourceLabel->setObjectName(QStringLiteral("negXImageSourceLabel"));

        faceTexturesLayout->addWidget(negXImageSourceLabel, 0, 0, 1, 1);

        negXImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        negXImageSource->setObjectName(QStringLiteral("negXImageSource"));

        faceTexturesLayout->addWidget(negXImageSource, 0, 1, 1, 1);

        negYImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        negYImageSourceLabel->setObjectName(QStringLiteral("negYImageSourceLabel"));

        faceTexturesLayout->addWidget(negYImageSourceLabel, 1, 0, 1, 1);

        negYImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        negYImageSource->setObjectName(QStringLiteral("negYImageSource"));

        faceTexturesLayout->addWidget(negYImageSource, 1, 1, 1, 1);

        negZImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        negZImageSourceLabel->setObjectName(QStringLiteral("negZImageSourceLabel"));

        faceTexturesLayout->addWidget(negZImageSourceLabel, 2, 0, 1, 1);

        negZImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        negZImageSource->setObjectName(QStringLiteral("negZImageSource"));

        faceTexturesLayout->addWidget(negZImageSource, 2, 1, 1, 1);

        posXImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        posXImageSourceLabel->setObjectName(QStringLiteral("posXImageSourceLabel"));

        faceTexturesLayout->addWidget(posXImageSourceLabel, 3, 0, 1, 1);

        posXImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        posXImageSource->setObjectName(QStringLiteral("posXImageSource"));

        faceTexturesLayout->addWidget(posXImageSource, 3, 1, 1, 1);

        posYImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        posYImageSourceLabel->setObjectName(QStringLiteral("posYImageSourceLabel"));

        faceTexturesLayout->addWidget(posYImageSourceLabel, 4, 0, 1, 1);

        posYImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        posYImageSource->setObjectName(QStringLiteral("posYImageSource"));

        faceTexturesLayout->addWidget(posYImageSource, 4, 1, 1, 1);

        posZImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        posZImageSourceLabel->setObjectName(QStringLiteral("posZImageSourceLabel"));

        faceTexturesLayout->addWidget(posZImageSourceLabel, 5, 0, 1, 1);

        posZImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        posZImageSource->setObjectName(QStringLiteral("posZImageSource"));

        faceTexturesLayout->addWidget(posZImageSource, 5, 1, 1, 1);


        gridLayout_2->addLayout(faceTexturesLayout, 2, 1, 1, 2);


        retranslateUi(SkyboxRenderingSettingsWidget);

        QMetaObject::connectSlotsByName(SkyboxRenderingSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SkyboxRenderingSettingsWidget)
    {
        skyboxTypeLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Skybox Type", Q_NULLPTR));
        panoramicTextureLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Panoramic Texture File", Q_NULLPTR));
        negXImageSourceLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Left (-X)", Q_NULLPTR));
        negYImageSourceLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Down (-Y)", Q_NULLPTR));
        negZImageSourceLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Back (-Z)", Q_NULLPTR));
        posXImageSourceLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Right (+X)", Q_NULLPTR));
        posYImageSourceLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Front (+Y)", Q_NULLPTR));
        posZImageSourceLabel->setText(QApplication::translate("SkyboxRenderingSettingsWidget", "Top (+Z)", Q_NULLPTR));
        Q_UNUSED(SkyboxRenderingSettingsWidget);
    } // retranslateUi

};

namespace Ui {
    class SkyboxRenderingSettingsWidget: public Ui_SkyboxRenderingSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKYBOXRENDERINGSETTINGSWIDGET_H
