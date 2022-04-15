/********************************************************************************
** Form generated from reading UI file 'map3dexportwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP3DEXPORTWIDGET_H
#define UI_MAP3DEXPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Map3DExportWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QgsSpinBox *terrainTextureResolutionSpinBox;
    QCheckBox *smoothEdgesCheckBox;
    QLabel *folderLAbel;
    QLabel *label_2;
    QLabel *sceneNameLabel;
    QgsFileWidget *selectFolderWidget;
    QSpacerItem *verticalSpacer;
    QCheckBox *exportTexturesCheckBox;
    QgsSpinBox *terrainResolutionSpinBox;
    QCheckBox *exportNormalsCheckBox;
    QLabel *label;
    QLineEdit *sceneNameLineEdit;
    QgsDoubleSpinBox *scaleSpinBox;
    QLabel *label_3;

    void setupUi(QWidget *Map3DExportWidget)
    {
        if (Map3DExportWidget->objectName().isEmpty())
            Map3DExportWidget->setObjectName(QStringLiteral("Map3DExportWidget"));
        Map3DExportWidget->resize(400, 251);
        gridLayout_2 = new QGridLayout(Map3DExportWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        terrainTextureResolutionSpinBox = new QgsSpinBox(Map3DExportWidget);
        terrainTextureResolutionSpinBox->setObjectName(QStringLiteral("terrainTextureResolutionSpinBox"));
        terrainTextureResolutionSpinBox->setMinimum(16);
        terrainTextureResolutionSpinBox->setMaximum(4096);
        terrainTextureResolutionSpinBox->setValue(512);

        gridLayout->addWidget(terrainTextureResolutionSpinBox, 3, 1, 1, 2);

        smoothEdgesCheckBox = new QCheckBox(Map3DExportWidget);
        smoothEdgesCheckBox->setObjectName(QStringLiteral("smoothEdgesCheckBox"));

        gridLayout->addWidget(smoothEdgesCheckBox, 5, 0, 1, 3);

        folderLAbel = new QLabel(Map3DExportWidget);
        folderLAbel->setObjectName(QStringLiteral("folderLAbel"));

        gridLayout->addWidget(folderLAbel, 1, 0, 1, 1);

        label_2 = new QLabel(Map3DExportWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        sceneNameLabel = new QLabel(Map3DExportWidget);
        sceneNameLabel->setObjectName(QStringLiteral("sceneNameLabel"));

        gridLayout->addWidget(sceneNameLabel, 0, 0, 1, 1);

        selectFolderWidget = new QgsFileWidget(Map3DExportWidget);
        selectFolderWidget->setObjectName(QStringLiteral("selectFolderWidget"));

        gridLayout->addWidget(selectFolderWidget, 1, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 1, 1, 1);

        exportTexturesCheckBox = new QCheckBox(Map3DExportWidget);
        exportTexturesCheckBox->setObjectName(QStringLiteral("exportTexturesCheckBox"));

        gridLayout->addWidget(exportTexturesCheckBox, 7, 0, 1, 3);

        terrainResolutionSpinBox = new QgsSpinBox(Map3DExportWidget);
        terrainResolutionSpinBox->setObjectName(QStringLiteral("terrainResolutionSpinBox"));
        terrainResolutionSpinBox->setMinimum(1);
        terrainResolutionSpinBox->setMaximum(4096);
        terrainResolutionSpinBox->setValue(1);

        gridLayout->addWidget(terrainResolutionSpinBox, 2, 1, 1, 2);

        exportNormalsCheckBox = new QCheckBox(Map3DExportWidget);
        exportNormalsCheckBox->setObjectName(QStringLiteral("exportNormalsCheckBox"));
        exportNormalsCheckBox->setChecked(true);
        exportNormalsCheckBox->setAutoRepeat(false);

        gridLayout->addWidget(exportNormalsCheckBox, 6, 0, 1, 3);

        label = new QLabel(Map3DExportWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        sceneNameLineEdit = new QLineEdit(Map3DExportWidget);
        sceneNameLineEdit->setObjectName(QStringLiteral("sceneNameLineEdit"));

        gridLayout->addWidget(sceneNameLineEdit, 0, 1, 1, 2);

        scaleSpinBox = new QgsDoubleSpinBox(Map3DExportWidget);
        scaleSpinBox->setObjectName(QStringLiteral("scaleSpinBox"));
        scaleSpinBox->setMinimum(0.1);
        scaleSpinBox->setSingleStep(0.1);
        scaleSpinBox->setValue(1);

        gridLayout->addWidget(scaleSpinBox, 4, 1, 1, 2);

        label_3 = new QLabel(Map3DExportWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(sceneNameLineEdit, terrainResolutionSpinBox);
        QWidget::setTabOrder(terrainResolutionSpinBox, terrainTextureResolutionSpinBox);
        QWidget::setTabOrder(terrainTextureResolutionSpinBox, scaleSpinBox);
        QWidget::setTabOrder(scaleSpinBox, smoothEdgesCheckBox);
        QWidget::setTabOrder(smoothEdgesCheckBox, exportNormalsCheckBox);
        QWidget::setTabOrder(exportNormalsCheckBox, exportTexturesCheckBox);

        retranslateUi(Map3DExportWidget);

        QMetaObject::connectSlotsByName(Map3DExportWidget);
    } // setupUi

    void retranslateUi(QWidget *Map3DExportWidget)
    {
        smoothEdgesCheckBox->setText(QApplication::translate("Map3DExportWidget", "Smooth edges", Q_NULLPTR));
        folderLAbel->setText(QApplication::translate("Map3DExportWidget", "Folder", Q_NULLPTR));
        label_2->setText(QApplication::translate("Map3DExportWidget", "Terrain texture resolution", Q_NULLPTR));
        sceneNameLabel->setText(QApplication::translate("Map3DExportWidget", "Scene name", Q_NULLPTR));
        exportTexturesCheckBox->setText(QApplication::translate("Map3DExportWidget", "Export textures", Q_NULLPTR));
        exportNormalsCheckBox->setText(QApplication::translate("Map3DExportWidget", "Export normals", Q_NULLPTR));
        label->setText(QApplication::translate("Map3DExportWidget", "Terrain resolution", Q_NULLPTR));
        label_3->setText(QApplication::translate("Map3DExportWidget", "Model scale", Q_NULLPTR));
        Q_UNUSED(Map3DExportWidget);
    } // retranslateUi

};

namespace Ui {
    class Map3DExportWidget: public Ui_Map3DExportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP3DEXPORTWIDGET_H
