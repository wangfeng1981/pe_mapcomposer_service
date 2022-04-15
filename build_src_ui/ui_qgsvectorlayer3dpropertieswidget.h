/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayer3dpropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYER3DPROPERTIESWIDGET_H
#define UI_QGSVECTORLAYER3DPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayer3DPropertiesWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *groupLayerRendering;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsSpinBox *spinZoomLevelsCount;
    QCheckBox *chkShowBoundingBoxes;

    void setupUi(QWidget *QgsVectorLayer3DPropertiesWidget)
    {
        if (QgsVectorLayer3DPropertiesWidget->objectName().isEmpty())
            QgsVectorLayer3DPropertiesWidget->setObjectName(QStringLiteral("QgsVectorLayer3DPropertiesWidget"));
        QgsVectorLayer3DPropertiesWidget->resize(386, 122);
        QgsVectorLayer3DPropertiesWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsVectorLayer3DPropertiesWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupLayerRendering = new QgsCollapsibleGroupBox(QgsVectorLayer3DPropertiesWidget);
        groupLayerRendering->setObjectName(QStringLiteral("groupLayerRendering"));
        verticalLayout = new QVBoxLayout(groupLayerRendering);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupLayerRendering);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinZoomLevelsCount = new QgsSpinBox(groupLayerRendering);
        spinZoomLevelsCount->setObjectName(QStringLiteral("spinZoomLevelsCount"));
        spinZoomLevelsCount->setMinimum(1);
        spinZoomLevelsCount->setMaximum(5);
        spinZoomLevelsCount->setValue(3);

        horizontalLayout->addWidget(spinZoomLevelsCount);


        verticalLayout->addLayout(horizontalLayout);

        chkShowBoundingBoxes = new QCheckBox(groupLayerRendering);
        chkShowBoundingBoxes->setObjectName(QStringLiteral("chkShowBoundingBoxes"));

        verticalLayout->addWidget(chkShowBoundingBoxes);


        verticalLayout_2->addWidget(groupLayerRendering);


        retranslateUi(QgsVectorLayer3DPropertiesWidget);

        QMetaObject::connectSlotsByName(QgsVectorLayer3DPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorLayer3DPropertiesWidget)
    {
        groupLayerRendering->setTitle(QApplication::translate("QgsVectorLayer3DPropertiesWidget", "Layer Rendering", Q_NULLPTR));
        label->setText(QApplication::translate("QgsVectorLayer3DPropertiesWidget", "Zoom levels count", Q_NULLPTR));
        chkShowBoundingBoxes->setText(QApplication::translate("QgsVectorLayer3DPropertiesWidget", "Show bounding boxes of tiles", Q_NULLPTR));
        Q_UNUSED(QgsVectorLayer3DPropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayer3DPropertiesWidget: public Ui_QgsVectorLayer3DPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYER3DPROPERTIESWIDGET_H
