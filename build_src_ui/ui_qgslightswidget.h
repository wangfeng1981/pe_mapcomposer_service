/********************************************************************************
** Form generated from reading UI file 'qgslightswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLIGHTSWIDGET_H
#define UI_QGSLIGHTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLightsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboLights;
    QToolButton *btnAddLight;
    QToolButton *btnRemoveLight;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsDoubleSpinBox *spinPositionX;
    QLabel *label_9;
    QgsDoubleSpinBox *spinIntensity;
    QLabel *label_7;
    QgsDoubleSpinBox *spinPositionY;
    QLabel *label_2;
    QgsDoubleSpinBox *spinPositionZ;
    QgsColorButton *btnColor;
    QgsDoubleSpinBox *spinA0;
    QgsDoubleSpinBox *spinA1;
    QgsDoubleSpinBox *spinA2;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *spinDirectionZ;
    QgsColorButton *btnDirectionalColor;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_10;
    QgsDoubleSpinBox *spinDirectionY;
    QgsDoubleSpinBox *spinDirectionX;
    QgsDoubleSpinBox *spinDirectionalIntensity;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_11;
    QToolButton *btnRemoveDirectionalLight;
    QSpacerItem *verticalSpacer;
    QComboBox *cboDirectionalLights;
    QToolButton *btnAddDirectionalLight;

    void setupUi(QWidget *QgsLightsWidget)
    {
        if (QgsLightsWidget->objectName().isEmpty())
            QgsLightsWidget->setObjectName(QStringLiteral("QgsLightsWidget"));
        QgsLightsWidget->resize(400, 633);
        QgsLightsWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsLightsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(QgsLightsWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cboLights = new QComboBox(tab);
        cboLights->setObjectName(QStringLiteral("cboLights"));

        horizontalLayout->addWidget(cboLights);

        btnAddLight = new QToolButton(tab);
        btnAddLight->setObjectName(QStringLiteral("btnAddLight"));

        horizontalLayout->addWidget(btnAddLight);

        btnRemoveLight = new QToolButton(tab);
        btnRemoveLight->setObjectName(QStringLiteral("btnRemoveLight"));

        horizontalLayout->addWidget(btnRemoveLight);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spinPositionX = new QgsDoubleSpinBox(tab);
        spinPositionX->setObjectName(QStringLiteral("spinPositionX"));
        spinPositionX->setDecimals(1);
        spinPositionX->setMinimum(-1e+7);
        spinPositionX->setMaximum(1e+7);

        gridLayout->addWidget(spinPositionX, 0, 1, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        spinIntensity = new QgsDoubleSpinBox(tab);
        spinIntensity->setObjectName(QStringLiteral("spinIntensity"));
        spinIntensity->setDecimals(1);
        spinIntensity->setMaximum(999999);

        gridLayout->addWidget(spinIntensity, 5, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        spinPositionY = new QgsDoubleSpinBox(tab);
        spinPositionY->setObjectName(QStringLiteral("spinPositionY"));
        spinPositionY->setDecimals(1);
        spinPositionY->setMinimum(-1e+7);
        spinPositionY->setMaximum(1e+7);

        gridLayout->addWidget(spinPositionY, 1, 1, 2, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 2, 1);

        spinPositionZ = new QgsDoubleSpinBox(tab);
        spinPositionZ->setObjectName(QStringLiteral("spinPositionZ"));
        spinPositionZ->setDecimals(1);
        spinPositionZ->setMinimum(-1e+7);
        spinPositionZ->setMaximum(1e+7);

        gridLayout->addWidget(spinPositionZ, 3, 1, 1, 1);

        btnColor = new QgsColorButton(tab);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnColor, 4, 1, 1, 1);

        spinA0 = new QgsDoubleSpinBox(tab);
        spinA0->setObjectName(QStringLiteral("spinA0"));
        spinA0->setMaximum(9);
        spinA0->setSingleStep(0.1);

        gridLayout->addWidget(spinA0, 7, 1, 1, 1);

        spinA1 = new QgsDoubleSpinBox(tab);
        spinA1->setObjectName(QStringLiteral("spinA1"));
        spinA1->setMaximum(9);
        spinA1->setSingleStep(0.1);

        gridLayout->addWidget(spinA1, 8, 1, 1, 1);

        spinA2 = new QgsDoubleSpinBox(tab);
        spinA2->setObjectName(QStringLiteral("spinA2"));
        spinA2->setMaximum(9);
        spinA2->setSingleStep(0.1);

        gridLayout->addWidget(spinA2, 9, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        spinDirectionZ = new QgsDoubleSpinBox(tab_2);
        spinDirectionZ->setObjectName(QStringLiteral("spinDirectionZ"));
        spinDirectionZ->setDecimals(1);
        spinDirectionZ->setMinimum(-1e+7);
        spinDirectionZ->setMaximum(1e+7);

        gridLayout_3->addWidget(spinDirectionZ, 3, 1, 1, 1);

        btnDirectionalColor = new QgsColorButton(tab_2);
        btnDirectionalColor->setObjectName(QStringLiteral("btnDirectionalColor"));
        sizePolicy.setHeightForWidth(btnDirectionalColor->sizePolicy().hasHeightForWidth());
        btnDirectionalColor->setSizePolicy(sizePolicy);
        btnDirectionalColor->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(btnDirectionalColor, 4, 1, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 5, 0, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        spinDirectionY = new QgsDoubleSpinBox(tab_2);
        spinDirectionY->setObjectName(QStringLiteral("spinDirectionY"));
        spinDirectionY->setDecimals(1);
        spinDirectionY->setMinimum(-1e+7);
        spinDirectionY->setMaximum(1e+7);

        gridLayout_3->addWidget(spinDirectionY, 2, 1, 1, 1);

        spinDirectionX = new QgsDoubleSpinBox(tab_2);
        spinDirectionX->setObjectName(QStringLiteral("spinDirectionX"));
        spinDirectionX->setDecimals(1);
        spinDirectionX->setMinimum(-1e+7);
        spinDirectionX->setMaximum(1e+7);

        gridLayout_3->addWidget(spinDirectionX, 1, 1, 1, 1);

        spinDirectionalIntensity = new QgsDoubleSpinBox(tab_2);
        spinDirectionalIntensity->setObjectName(QStringLiteral("spinDirectionalIntensity"));
        spinDirectionalIntensity->setDecimals(1);
        spinDirectionalIntensity->setMaximum(999999);

        gridLayout_3->addWidget(spinDirectionalIntensity, 5, 1, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 4, 0, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 3);

        btnRemoveDirectionalLight = new QToolButton(tab_2);
        btnRemoveDirectionalLight->setObjectName(QStringLiteral("btnRemoveDirectionalLight"));

        gridLayout_4->addWidget(btnRemoveDirectionalLight, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);

        cboDirectionalLights = new QComboBox(tab_2);
        cboDirectionalLights->setObjectName(QStringLiteral("cboDirectionalLights"));

        gridLayout_4->addWidget(cboDirectionalLights, 0, 0, 1, 1);

        btnAddDirectionalLight = new QToolButton(tab_2);
        btnAddDirectionalLight->setObjectName(QStringLiteral("btnAddDirectionalLight"));

        gridLayout_4->addWidget(btnAddDirectionalLight, 0, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, cboLights);
        QWidget::setTabOrder(cboLights, btnAddLight);
        QWidget::setTabOrder(btnAddLight, btnRemoveLight);
        QWidget::setTabOrder(btnRemoveLight, spinPositionX);
        QWidget::setTabOrder(spinPositionX, spinPositionY);
        QWidget::setTabOrder(spinPositionY, spinPositionZ);
        QWidget::setTabOrder(spinPositionZ, btnColor);
        QWidget::setTabOrder(btnColor, spinIntensity);
        QWidget::setTabOrder(spinIntensity, spinA0);
        QWidget::setTabOrder(spinA0, spinA1);
        QWidget::setTabOrder(spinA1, spinA2);
        QWidget::setTabOrder(spinA2, cboDirectionalLights);
        QWidget::setTabOrder(cboDirectionalLights, btnAddDirectionalLight);
        QWidget::setTabOrder(btnAddDirectionalLight, btnRemoveDirectionalLight);
        QWidget::setTabOrder(btnRemoveDirectionalLight, spinDirectionX);
        QWidget::setTabOrder(spinDirectionX, spinDirectionY);
        QWidget::setTabOrder(spinDirectionY, spinDirectionZ);
        QWidget::setTabOrder(spinDirectionZ, btnDirectionalColor);
        QWidget::setTabOrder(btnDirectionalColor, spinDirectionalIntensity);

        retranslateUi(QgsLightsWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsLightsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLightsWidget)
    {
        btnAddLight->setText(QApplication::translate("QgsLightsWidget", "...", Q_NULLPTR));
        btnRemoveLight->setText(QApplication::translate("QgsLightsWidget", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLightsWidget", "Z", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">2</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">0</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLightsWidget", "Y", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLightsWidget", "Intensity", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">1</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLightsWidget", "Color", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLightsWidget", "X", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>Attenuation (A<span style=\" vertical-align:sub;\">0</span>+A<span style=\" vertical-align:sub;\">1</span>*D+A<span style=\" vertical-align:sub;\">2</span>*D<span style=\" vertical-align:super;\">2</span>)</p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsLightsWidget", "Point lights", Q_NULLPTR));
        label_14->setText(QApplication::translate("QgsLightsWidget", "Intensity", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsLightsWidget", "Y", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLightsWidget", "Z", Q_NULLPTR));
        label_16->setText(QApplication::translate("QgsLightsWidget", "Color", Q_NULLPTR));
        label_17->setText(QApplication::translate("QgsLightsWidget", "X", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsLightsWidget", "Light direction", Q_NULLPTR));
        btnRemoveDirectionalLight->setText(QApplication::translate("QgsLightsWidget", "...", Q_NULLPTR));
        btnAddDirectionalLight->setText(QApplication::translate("QgsLightsWidget", "...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsLightsWidget", "Directional lights", Q_NULLPTR));
        Q_UNUSED(QgsLightsWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsLightsWidget: public Ui_QgsLightsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLIGHTSWIDGET_H
