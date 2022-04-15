/********************************************************************************
** Form generated from reading UI file 'polygon3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGON3DSYMBOLWIDGET_H
#define UI_POLYGON3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsmaterialwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Polygon3DSymbolWidget
{
public:
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *spinHeight;
    QLabel *label_2;
    QgsCollapsibleGroupBox *groupShading;
    QGridLayout *gridLayout_3;
    QgsMaterialWidget *widgetMaterial;
    QgsPropertyOverrideButton *btnExtrusionDD;
    QCheckBox *chkInvertNormals;
    QComboBox *cboAltClamping;
    QgsDoubleSpinBox *spinExtrusion;
    QLabel *label_4;
    QComboBox *cboCullingMode;
    QComboBox *cboAltBinding;
    QgsPropertyOverrideButton *btnHeightDD;
    QLabel *label_3;
    QgsCollapsibleGroupBox *groupEdges;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QgsDoubleSpinBox *spinEdgeWidth;
    QLabel *label_7;
    QgsColorButton *btnEdgeColor;
    QLabel *label_5;
    QCheckBox *chkAddBackFaces;
    QLabel *label;
    QLabel *label_8;
    QComboBox *cboRenderedFacade;

    void setupUi(QWidget *Polygon3DSymbolWidget)
    {
        if (Polygon3DSymbolWidget->objectName().isEmpty())
            Polygon3DSymbolWidget->setObjectName(QStringLiteral("Polygon3DSymbolWidget"));
        Polygon3DSymbolWidget->resize(479, 397);
        Polygon3DSymbolWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(Polygon3DSymbolWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, -1);
        spinHeight = new QgsDoubleSpinBox(Polygon3DSymbolWidget);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        spinHeight->setMinimum(-99999);
        spinHeight->setMaximum(99999);

        gridLayout_2->addWidget(spinHeight, 0, 1, 1, 1);

        label_2 = new QLabel(Polygon3DSymbolWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        groupShading = new QgsCollapsibleGroupBox(Polygon3DSymbolWidget);
        groupShading->setObjectName(QStringLiteral("groupShading"));
        gridLayout_3 = new QGridLayout(groupShading);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetMaterial = new QgsMaterialWidget(groupShading);
        widgetMaterial->setObjectName(QStringLiteral("widgetMaterial"));

        gridLayout_3->addWidget(widgetMaterial, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupShading, 8, 0, 1, 3);

        btnExtrusionDD = new QgsPropertyOverrideButton(Polygon3DSymbolWidget);
        btnExtrusionDD->setObjectName(QStringLiteral("btnExtrusionDD"));

        gridLayout_2->addWidget(btnExtrusionDD, 1, 2, 1, 1);

        chkInvertNormals = new QCheckBox(Polygon3DSymbolWidget);
        chkInvertNormals->setObjectName(QStringLiteral("chkInvertNormals"));

        gridLayout_2->addWidget(chkInvertNormals, 7, 0, 1, 2);

        cboAltClamping = new QComboBox(Polygon3DSymbolWidget);
        cboAltClamping->setObjectName(QStringLiteral("cboAltClamping"));

        gridLayout_2->addWidget(cboAltClamping, 2, 1, 1, 1);

        spinExtrusion = new QgsDoubleSpinBox(Polygon3DSymbolWidget);
        spinExtrusion->setObjectName(QStringLiteral("spinExtrusion"));
        spinExtrusion->setMaximum(99999);

        gridLayout_2->addWidget(spinExtrusion, 1, 1, 1, 1);

        label_4 = new QLabel(Polygon3DSymbolWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        cboCullingMode = new QComboBox(Polygon3DSymbolWidget);
        cboCullingMode->setObjectName(QStringLiteral("cboCullingMode"));

        gridLayout_2->addWidget(cboCullingMode, 4, 1, 1, 1);

        cboAltBinding = new QComboBox(Polygon3DSymbolWidget);
        cboAltBinding->setObjectName(QStringLiteral("cboAltBinding"));

        gridLayout_2->addWidget(cboAltBinding, 3, 1, 1, 1);

        btnHeightDD = new QgsPropertyOverrideButton(Polygon3DSymbolWidget);
        btnHeightDD->setObjectName(QStringLiteral("btnHeightDD"));

        gridLayout_2->addWidget(btnHeightDD, 0, 2, 1, 1);

        label_3 = new QLabel(Polygon3DSymbolWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        groupEdges = new QgsCollapsibleGroupBox(Polygon3DSymbolWidget);
        groupEdges->setObjectName(QStringLiteral("groupEdges"));
        groupEdges->setCheckable(true);
        gridLayout = new QGridLayout(groupEdges);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupEdges);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        spinEdgeWidth = new QgsDoubleSpinBox(groupEdges);
        spinEdgeWidth->setObjectName(QStringLiteral("spinEdgeWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinEdgeWidth->sizePolicy().hasHeightForWidth());
        spinEdgeWidth->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(spinEdgeWidth, 0, 1, 1, 1);

        label_7 = new QLabel(groupEdges);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        btnEdgeColor = new QgsColorButton(groupEdges);
        btnEdgeColor->setObjectName(QStringLiteral("btnEdgeColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnEdgeColor->sizePolicy().hasHeightForWidth());
        btnEdgeColor->setSizePolicy(sizePolicy2);
        btnEdgeColor->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnEdgeColor, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupEdges, 9, 0, 1, 3);

        label_5 = new QLabel(Polygon3DSymbolWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        chkAddBackFaces = new QCheckBox(Polygon3DSymbolWidget);
        chkAddBackFaces->setObjectName(QStringLiteral("chkAddBackFaces"));

        gridLayout_2->addWidget(chkAddBackFaces, 6, 0, 1, 2);

        label = new QLabel(Polygon3DSymbolWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_8 = new QLabel(Polygon3DSymbolWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        cboRenderedFacade = new QComboBox(Polygon3DSymbolWidget);
        cboRenderedFacade->setObjectName(QStringLiteral("cboRenderedFacade"));

        gridLayout_2->addWidget(cboRenderedFacade, 5, 1, 1, 1);

        QWidget::setTabOrder(spinHeight, btnHeightDD);
        QWidget::setTabOrder(btnHeightDD, spinExtrusion);
        QWidget::setTabOrder(spinExtrusion, btnExtrusionDD);
        QWidget::setTabOrder(btnExtrusionDD, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, cboAltBinding);
        QWidget::setTabOrder(cboAltBinding, cboCullingMode);
        QWidget::setTabOrder(cboCullingMode, chkAddBackFaces);
        QWidget::setTabOrder(chkAddBackFaces, chkInvertNormals);

        retranslateUi(Polygon3DSymbolWidget);

        cboRenderedFacade->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Polygon3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Polygon3DSymbolWidget)
    {
        label_2->setText(QApplication::translate("Polygon3DSymbolWidget", "Extrusion", Q_NULLPTR));
        groupShading->setTitle(QApplication::translate("Polygon3DSymbolWidget", "Shading", Q_NULLPTR));
        btnExtrusionDD->setText(QApplication::translate("Polygon3DSymbolWidget", "\342\200\246", Q_NULLPTR));
        chkInvertNormals->setText(QApplication::translate("Polygon3DSymbolWidget", "Invert normals (experimental)", Q_NULLPTR));
        cboAltClamping->clear();
        cboAltClamping->insertItems(0, QStringList()
         << QApplication::translate("Polygon3DSymbolWidget", "Absolute", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Relative", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Terrain", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Polygon3DSymbolWidget", "Altitude binding", Q_NULLPTR));
        cboCullingMode->clear();
        cboCullingMode->insertItems(0, QStringList()
         << QApplication::translate("Polygon3DSymbolWidget", "No Culling", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Front", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Back", Q_NULLPTR)
        );
        cboAltBinding->clear();
        cboAltBinding->insertItems(0, QStringList()
         << QApplication::translate("Polygon3DSymbolWidget", "Vertex", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Centroid", Q_NULLPTR)
        );
        btnHeightDD->setText(QApplication::translate("Polygon3DSymbolWidget", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("Polygon3DSymbolWidget", "Altitude clamping", Q_NULLPTR));
        groupEdges->setTitle(QApplication::translate("Polygon3DSymbolWidget", "Edges", Q_NULLPTR));
        label_6->setText(QApplication::translate("Polygon3DSymbolWidget", "Width", Q_NULLPTR));
        spinEdgeWidth->setSuffix(QApplication::translate("Polygon3DSymbolWidget", " px", Q_NULLPTR));
        label_7->setText(QApplication::translate("Polygon3DSymbolWidget", "Color", Q_NULLPTR));
        label_5->setText(QApplication::translate("Polygon3DSymbolWidget", "Culling mode", Q_NULLPTR));
        chkAddBackFaces->setText(QApplication::translate("Polygon3DSymbolWidget", "Add back faces", Q_NULLPTR));
        label->setText(QApplication::translate("Polygon3DSymbolWidget", "Height", Q_NULLPTR));
        label_8->setText(QApplication::translate("Polygon3DSymbolWidget", "Rendered facade", Q_NULLPTR));
        cboRenderedFacade->clear();
        cboRenderedFacade->insertItems(0, QStringList()
         << QApplication::translate("Polygon3DSymbolWidget", "No Facades", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Walls", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Roofs", Q_NULLPTR)
         << QApplication::translate("Polygon3DSymbolWidget", "Walls and Roofs", Q_NULLPTR)
        );
        Q_UNUSED(Polygon3DSymbolWidget);
    } // retranslateUi

};

namespace Ui {
    class Polygon3DSymbolWidget: public Ui_Polygon3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGON3DSYMBOLWIDGET_H
