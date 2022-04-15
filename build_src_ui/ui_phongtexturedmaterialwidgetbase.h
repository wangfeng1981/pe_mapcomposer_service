/********************************************************************************
** Form generated from reading UI file 'phongtexturedmaterialwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONGTEXTUREDMATERIALWIDGETBASE_H
#define UI_PHONGTEXTUREDMATERIALWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PhongTexturedMaterialWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *textureRotationSpinBox;
    QgsDoubleSpinBox *spinShininess;
    QLabel *lblSpecular;
    QgsColorButton *btnSpecular;
    QLabel *lblTextureScale;
    QgsDoubleSpinBox *textureScaleSpinBox;
    QLabel *lblAmbient;
    QgsColorButton *btnAmbient;
    QLabel *lblTextureRotation;
    QLabel *lblShininess;
    QgsImageSourceLineEdit *textureFile;
    QLabel *lblTextureScale_2;

    void setupUi(QWidget *PhongTexturedMaterialWidgetBase)
    {
        if (PhongTexturedMaterialWidgetBase->objectName().isEmpty())
            PhongTexturedMaterialWidgetBase->setObjectName(QStringLiteral("PhongTexturedMaterialWidgetBase"));
        PhongTexturedMaterialWidgetBase->resize(394, 197);
        PhongTexturedMaterialWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(PhongTexturedMaterialWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textureRotationSpinBox = new QgsDoubleSpinBox(PhongTexturedMaterialWidgetBase);
        textureRotationSpinBox->setObjectName(QStringLiteral("textureRotationSpinBox"));
        textureRotationSpinBox->setMinimum(-360);
        textureRotationSpinBox->setMaximum(360);
        textureRotationSpinBox->setSingleStep(0.5);

        gridLayout->addWidget(textureRotationSpinBox, 5, 1, 1, 1);

        spinShininess = new QgsDoubleSpinBox(PhongTexturedMaterialWidgetBase);
        spinShininess->setObjectName(QStringLiteral("spinShininess"));
        spinShininess->setMaximum(1000);

        gridLayout->addWidget(spinShininess, 2, 1, 1, 1);

        lblSpecular = new QLabel(PhongTexturedMaterialWidgetBase);
        lblSpecular->setObjectName(QStringLiteral("lblSpecular"));

        gridLayout->addWidget(lblSpecular, 1, 0, 1, 1);

        btnSpecular = new QgsColorButton(PhongTexturedMaterialWidgetBase);
        btnSpecular->setObjectName(QStringLiteral("btnSpecular"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSpecular->sizePolicy().hasHeightForWidth());
        btnSpecular->setSizePolicy(sizePolicy);
        btnSpecular->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnSpecular, 1, 1, 1, 1);

        lblTextureScale = new QLabel(PhongTexturedMaterialWidgetBase);
        lblTextureScale->setObjectName(QStringLiteral("lblTextureScale"));

        gridLayout->addWidget(lblTextureScale, 4, 0, 1, 1);

        textureScaleSpinBox = new QgsDoubleSpinBox(PhongTexturedMaterialWidgetBase);
        textureScaleSpinBox->setObjectName(QStringLiteral("textureScaleSpinBox"));
        textureScaleSpinBox->setMinimum(0.01);
        textureScaleSpinBox->setMaximum(100000);
        textureScaleSpinBox->setSingleStep(1);
        textureScaleSpinBox->setValue(100);

        gridLayout->addWidget(textureScaleSpinBox, 4, 1, 1, 1);

        lblAmbient = new QLabel(PhongTexturedMaterialWidgetBase);
        lblAmbient->setObjectName(QStringLiteral("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 0, 0, 1, 1);

        btnAmbient = new QgsColorButton(PhongTexturedMaterialWidgetBase);
        btnAmbient->setObjectName(QStringLiteral("btnAmbient"));
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnAmbient, 0, 1, 1, 1);

        lblTextureRotation = new QLabel(PhongTexturedMaterialWidgetBase);
        lblTextureRotation->setObjectName(QStringLiteral("lblTextureRotation"));

        gridLayout->addWidget(lblTextureRotation, 5, 0, 1, 1);

        lblShininess = new QLabel(PhongTexturedMaterialWidgetBase);
        lblShininess->setObjectName(QStringLiteral("lblShininess"));

        gridLayout->addWidget(lblShininess, 2, 0, 1, 1);

        textureFile = new QgsImageSourceLineEdit(PhongTexturedMaterialWidgetBase);
        textureFile->setObjectName(QStringLiteral("textureFile"));

        gridLayout->addWidget(textureFile, 3, 1, 1, 1);

        lblTextureScale_2 = new QLabel(PhongTexturedMaterialWidgetBase);
        lblTextureScale_2->setObjectName(QStringLiteral("lblTextureScale_2"));

        gridLayout->addWidget(lblTextureScale_2, 3, 0, 1, 1);

        QWidget::setTabOrder(btnAmbient, btnSpecular);
        QWidget::setTabOrder(btnSpecular, spinShininess);
        QWidget::setTabOrder(spinShininess, textureScaleSpinBox);
        QWidget::setTabOrder(textureScaleSpinBox, textureRotationSpinBox);

        retranslateUi(PhongTexturedMaterialWidgetBase);

        QMetaObject::connectSlotsByName(PhongTexturedMaterialWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *PhongTexturedMaterialWidgetBase)
    {
        textureRotationSpinBox->setSuffix(QApplication::translate("PhongTexturedMaterialWidgetBase", " \302\260", Q_NULLPTR));
        lblSpecular->setText(QApplication::translate("PhongTexturedMaterialWidgetBase", "Specular", Q_NULLPTR));
        lblTextureScale->setText(QApplication::translate("PhongTexturedMaterialWidgetBase", "Texture scale", Q_NULLPTR));
        textureScaleSpinBox->setSuffix(QApplication::translate("PhongTexturedMaterialWidgetBase", " %", Q_NULLPTR));
        lblAmbient->setText(QApplication::translate("PhongTexturedMaterialWidgetBase", "Ambient", Q_NULLPTR));
        lblTextureRotation->setText(QApplication::translate("PhongTexturedMaterialWidgetBase", "Texture rotation", Q_NULLPTR));
        lblShininess->setText(QApplication::translate("PhongTexturedMaterialWidgetBase", "Shininess", Q_NULLPTR));
        lblTextureScale_2->setText(QApplication::translate("PhongTexturedMaterialWidgetBase", "Diffuse texture", Q_NULLPTR));
        Q_UNUSED(PhongTexturedMaterialWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class PhongTexturedMaterialWidgetBase: public Ui_PhongTexturedMaterialWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGTEXTUREDMATERIALWIDGETBASE_H
