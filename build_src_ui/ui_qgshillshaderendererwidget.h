/********************************************************************************
** Form generated from reading UI file 'qgshillshaderendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHILLSHADERENDERERWIDGET_H
#define UI_QGSHILLSHADERENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "raster/qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHillShadeWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QDial *mLightAzimuthDial;
    QgsDoubleSpinBox *mLightAzimuth;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QgsDoubleSpinBox *mLightAngle;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QgsRasterBandComboBox *mBandsCombo;
    QgsDoubleSpinBox *mZFactor;
    QCheckBox *mMultiDirection;
    QLabel *label_5;

    void setupUi(QWidget *QgsHillShadeWidget)
    {
        if (QgsHillShadeWidget->objectName().isEmpty())
            QgsHillShadeWidget->setObjectName(QStringLiteral("QgsHillShadeWidget"));
        QgsHillShadeWidget->resize(302, 541);
        QgsHillShadeWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsHillShadeWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mLightAzimuthDial = new QDial(QgsHillShadeWidget);
        mLightAzimuthDial->setObjectName(QStringLiteral("mLightAzimuthDial"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLightAzimuthDial->sizePolicy().hasHeightForWidth());
        mLightAzimuthDial->setSizePolicy(sizePolicy);
        mLightAzimuthDial->setMaximum(360);
        mLightAzimuthDial->setValue(0);
        mLightAzimuthDial->setSliderPosition(0);
        mLightAzimuthDial->setInvertedAppearance(false);
        mLightAzimuthDial->setInvertedControls(false);
        mLightAzimuthDial->setWrapping(true);
        mLightAzimuthDial->setNotchTarget(10);
        mLightAzimuthDial->setNotchesVisible(true);

        verticalLayout->addWidget(mLightAzimuthDial);

        mLightAzimuth = new QgsDoubleSpinBox(QgsHillShadeWidget);
        mLightAzimuth->setObjectName(QStringLiteral("mLightAzimuth"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLightAzimuth->sizePolicy().hasHeightForWidth());
        mLightAzimuth->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(mLightAzimuth);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 2);

        label_2 = new QLabel(QgsHillShadeWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        label = new QLabel(QgsHillShadeWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(QgsHillShadeWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 2);

        mLightAngle = new QgsDoubleSpinBox(QgsHillShadeWidget);
        mLightAngle->setObjectName(QStringLiteral("mLightAngle"));
        sizePolicy1.setHeightForWidth(mLightAngle->sizePolicy().hasHeightForWidth());
        mLightAngle->setSizePolicy(sizePolicy1);
        mLightAngle->setSingleStep(5);
        mLightAngle->setValue(45);

        gridLayout->addWidget(mLightAngle, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 3);

        label_4 = new QLabel(QgsHillShadeWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        mBandsCombo = new QgsRasterBandComboBox(QgsHillShadeWidget);
        mBandsCombo->setObjectName(QStringLiteral("mBandsCombo"));

        gridLayout->addWidget(mBandsCombo, 0, 2, 1, 1);

        mZFactor = new QgsDoubleSpinBox(QgsHillShadeWidget);
        mZFactor->setObjectName(QStringLiteral("mZFactor"));
        sizePolicy1.setHeightForWidth(mZFactor->sizePolicy().hasHeightForWidth());
        mZFactor->setSizePolicy(sizePolicy1);
        mZFactor->setDecimals(8);
        mZFactor->setValue(1);

        gridLayout->addWidget(mZFactor, 3, 2, 1, 1);

        mMultiDirection = new QCheckBox(QgsHillShadeWidget);
        mMultiDirection->setObjectName(QStringLiteral("mMultiDirection"));

        gridLayout->addWidget(mMultiDirection, 4, 2, 1, 1);

        label_5 = new QLabel(QgsHillShadeWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        QWidget::setTabOrder(mBandsCombo, mLightAngle);
        QWidget::setTabOrder(mLightAngle, mLightAzimuthDial);
        QWidget::setTabOrder(mLightAzimuthDial, mLightAzimuth);
        QWidget::setTabOrder(mLightAzimuth, mZFactor);
        QWidget::setTabOrder(mZFactor, mMultiDirection);

        retranslateUi(QgsHillShadeWidget);

        QMetaObject::connectSlotsByName(QgsHillShadeWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsHillShadeWidget)
    {
        mLightAzimuth->setSuffix(QApplication::translate("QgsHillShadeWidget", "\313\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsHillShadeWidget", "Altitude", Q_NULLPTR));
        label->setText(QApplication::translate("QgsHillShadeWidget", "Azimuth", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsHillShadeWidget", "Z Factor", Q_NULLPTR));
        mLightAngle->setSuffix(QApplication::translate("QgsHillShadeWidget", "\313\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsHillShadeWidget", "Band", Q_NULLPTR));
        mMultiDirection->setText(QString());
        label_5->setText(QApplication::translate("QgsHillShadeWidget", "Multidirectional", Q_NULLPTR));
        Q_UNUSED(QgsHillShadeWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsHillShadeWidget: public Ui_QgsHillShadeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHILLSHADERENDERERWIDGET_H
