/********************************************************************************
** Form generated from reading UI file 'phongmaterialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONGMATERIALWIDGET_H
#define UI_PHONGMATERIALWIDGET_H

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

QT_BEGIN_NAMESPACE

class Ui_PhongMaterialWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblShininess;
    QLabel *lblDiffuse;
    QLabel *lblAmbient;
    QgsColorButton *btnAmbient;
    QgsColorButton *btnSpecular;
    QgsDoubleSpinBox *spinShininess;
    QgsColorButton *btnDiffuse;
    QLabel *lblSpecular;

    void setupUi(QWidget *PhongMaterialWidget)
    {
        if (PhongMaterialWidget->objectName().isEmpty())
            PhongMaterialWidget->setObjectName(QStringLiteral("PhongMaterialWidget"));
        PhongMaterialWidget->resize(394, 133);
        PhongMaterialWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(PhongMaterialWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblShininess = new QLabel(PhongMaterialWidget);
        lblShininess->setObjectName(QStringLiteral("lblShininess"));

        gridLayout->addWidget(lblShininess, 3, 0, 1, 1);

        lblDiffuse = new QLabel(PhongMaterialWidget);
        lblDiffuse->setObjectName(QStringLiteral("lblDiffuse"));

        gridLayout->addWidget(lblDiffuse, 0, 0, 1, 1);

        lblAmbient = new QLabel(PhongMaterialWidget);
        lblAmbient->setObjectName(QStringLiteral("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 1, 0, 1, 1);

        btnAmbient = new QgsColorButton(PhongMaterialWidget);
        btnAmbient->setObjectName(QStringLiteral("btnAmbient"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnAmbient, 1, 1, 1, 1);

        btnSpecular = new QgsColorButton(PhongMaterialWidget);
        btnSpecular->setObjectName(QStringLiteral("btnSpecular"));
        sizePolicy.setHeightForWidth(btnSpecular->sizePolicy().hasHeightForWidth());
        btnSpecular->setSizePolicy(sizePolicy);
        btnSpecular->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnSpecular, 2, 1, 1, 1);

        spinShininess = new QgsDoubleSpinBox(PhongMaterialWidget);
        spinShininess->setObjectName(QStringLiteral("spinShininess"));
        spinShininess->setMaximum(1000);

        gridLayout->addWidget(spinShininess, 3, 1, 1, 1);

        btnDiffuse = new QgsColorButton(PhongMaterialWidget);
        btnDiffuse->setObjectName(QStringLiteral("btnDiffuse"));
        sizePolicy.setHeightForWidth(btnDiffuse->sizePolicy().hasHeightForWidth());
        btnDiffuse->setSizePolicy(sizePolicy);
        btnDiffuse->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnDiffuse, 0, 1, 1, 1);

        lblSpecular = new QLabel(PhongMaterialWidget);
        lblSpecular->setObjectName(QStringLiteral("lblSpecular"));

        gridLayout->addWidget(lblSpecular, 2, 0, 1, 1);

        QWidget::setTabOrder(btnDiffuse, btnAmbient);
        QWidget::setTabOrder(btnAmbient, btnSpecular);
        QWidget::setTabOrder(btnSpecular, spinShininess);

        retranslateUi(PhongMaterialWidget);

        QMetaObject::connectSlotsByName(PhongMaterialWidget);
    } // setupUi

    void retranslateUi(QWidget *PhongMaterialWidget)
    {
        lblShininess->setText(QApplication::translate("PhongMaterialWidget", "Shininess", Q_NULLPTR));
        lblDiffuse->setText(QApplication::translate("PhongMaterialWidget", "Diffuse", Q_NULLPTR));
        lblAmbient->setText(QApplication::translate("PhongMaterialWidget", "Ambient", Q_NULLPTR));
        lblSpecular->setText(QApplication::translate("PhongMaterialWidget", "Specular", Q_NULLPTR));
        Q_UNUSED(PhongMaterialWidget);
    } // retranslateUi

};

namespace Ui {
    class PhongMaterialWidget: public Ui_PhongMaterialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGMATERIALWIDGET_H
