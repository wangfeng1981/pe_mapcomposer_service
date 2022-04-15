/********************************************************************************
** Form generated from reading UI file 'point3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT3DSYMBOLWIDGET_H
#define UI_POINT3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgs3dmodelsourcelineedit.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsmaterialwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Point3DSymbolWidget
{
public:
    QFormLayout *formLayout;
    QgsCollapsibleGroupBox *transformationWidget;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *spinSX;
    QgsDoubleSpinBox *spinTZ;
    QgsDoubleSpinBox *spinTX;
    QLabel *label_5;
    QgsDoubleSpinBox *spinTY;
    QgsDoubleSpinBox *spinRX;
    QgsDoubleSpinBox *spinSY;
    QgsDoubleSpinBox *spinRZ;
    QLabel *label_4;
    QgsDoubleSpinBox *spinRY;
    QLabel *label_6;
    QgsDoubleSpinBox *spinSZ;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QgsCollapsibleGroupBox *materialsGroupBox;
    QGridLayout *shadingGroup;
    QgsMaterialWidget *widgetMaterial;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *spinRadius;
    QComboBox *cboAltClamping;
    QHBoxLayout *horizontalLayout;
    Qgs3DModelSourceLineEdit *lineEditModel;
    QCheckBox *cbOverwriteMaterial;
    QLabel *labelRadius;
    QLabel *labelBottomRadius;
    QgsDoubleSpinBox *spinSize;
    QLabel *labelModel;
    QgsDoubleSpinBox *spinTopRadius;
    QgsDoubleSpinBox *spinBillboardHeight;
    QLabel *labelBillboardSymbol;
    QgsDoubleSpinBox *spinMinorRadius;
    QLabel *labelBillboardHeight;
    QLabel *labelSize;
    QgsSymbolButton *btnChangeSymbol;
    QLabel *labelMinorRadius;
    QComboBox *cboShape;
    QgsDoubleSpinBox *spinBottomRadius;
    QLabel *labelTopRadius;
    QLabel *label;
    QgsDoubleSpinBox *spinLength;
    QLabel *labelAltClamping;
    QLabel *labelLength;

    void setupUi(QWidget *Point3DSymbolWidget)
    {
        if (Point3DSymbolWidget->objectName().isEmpty())
            Point3DSymbolWidget->setObjectName(QStringLiteral("Point3DSymbolWidget"));
        Point3DSymbolWidget->resize(457, 587);
        Point3DSymbolWidget->setWindowTitle(QStringLiteral("Form"));
        formLayout = new QFormLayout(Point3DSymbolWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        transformationWidget = new QgsCollapsibleGroupBox(Point3DSymbolWidget);
        transformationWidget->setObjectName(QStringLiteral("transformationWidget"));
        gridLayout = new QGridLayout(transformationWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinSX = new QgsDoubleSpinBox(transformationWidget);
        spinSX->setObjectName(QStringLiteral("spinSX"));
        spinSX->setMinimum(-99999.9);
        spinSX->setMaximum(99999.9);
        spinSX->setValue(1);

        gridLayout->addWidget(spinSX, 2, 1, 1, 1);

        spinTZ = new QgsDoubleSpinBox(transformationWidget);
        spinTZ->setObjectName(QStringLiteral("spinTZ"));
        spinTZ->setMinimum(-99999.9);
        spinTZ->setMaximum(99999.9);

        gridLayout->addWidget(spinTZ, 1, 3, 1, 1);

        spinTX = new QgsDoubleSpinBox(transformationWidget);
        spinTX->setObjectName(QStringLiteral("spinTX"));
        spinTX->setMinimum(-99999.9);
        spinTX->setMaximum(99999.9);

        gridLayout->addWidget(spinTX, 1, 1, 1, 1);

        label_5 = new QLabel(transformationWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        spinTY = new QgsDoubleSpinBox(transformationWidget);
        spinTY->setObjectName(QStringLiteral("spinTY"));
        spinTY->setMinimum(-99999.9);
        spinTY->setMaximum(99999.9);

        gridLayout->addWidget(spinTY, 1, 2, 1, 1);

        spinRX = new QgsDoubleSpinBox(transformationWidget);
        spinRX->setObjectName(QStringLiteral("spinRX"));
        spinRX->setDecimals(0);
        spinRX->setMaximum(360);

        gridLayout->addWidget(spinRX, 3, 1, 1, 1);

        spinSY = new QgsDoubleSpinBox(transformationWidget);
        spinSY->setObjectName(QStringLiteral("spinSY"));
        spinSY->setMinimum(-99999.9);
        spinSY->setMaximum(99999.9);
        spinSY->setValue(1);

        gridLayout->addWidget(spinSY, 2, 2, 1, 1);

        spinRZ = new QgsDoubleSpinBox(transformationWidget);
        spinRZ->setObjectName(QStringLiteral("spinRZ"));
        spinRZ->setDecimals(0);
        spinRZ->setMaximum(360);

        gridLayout->addWidget(spinRZ, 3, 3, 1, 1);

        label_4 = new QLabel(transformationWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinRY = new QgsDoubleSpinBox(transformationWidget);
        spinRY->setObjectName(QStringLiteral("spinRY"));
        spinRY->setDecimals(0);
        spinRY->setMaximum(360);

        gridLayout->addWidget(spinRY, 3, 2, 1, 1);

        label_6 = new QLabel(transformationWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        spinSZ = new QgsDoubleSpinBox(transformationWidget);
        spinSZ->setObjectName(QStringLiteral("spinSZ"));
        spinSZ->setMinimum(-99999.9);
        spinSZ->setMaximum(99999.9);
        spinSZ->setValue(1);

        gridLayout->addWidget(spinSZ, 2, 3, 1, 1);

        label_2 = new QLabel(transformationWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(transformationWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(transformationWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 3, 1, 1);


        formLayout->setWidget(2, QFormLayout::SpanningRole, transformationWidget);

        materialsGroupBox = new QgsCollapsibleGroupBox(Point3DSymbolWidget);
        materialsGroupBox->setObjectName(QStringLiteral("materialsGroupBox"));
        shadingGroup = new QGridLayout(materialsGroupBox);
        shadingGroup->setContentsMargins(0, 0, 0, 0);
        shadingGroup->setObjectName(QStringLiteral("shadingGroup"));
        widgetMaterial = new QgsMaterialWidget(materialsGroupBox);
        widgetMaterial->setObjectName(QStringLiteral("widgetMaterial"));
        widgetMaterial->setEnabled(true);
        widgetMaterial->setMinimumSize(QSize(10, 10));

        shadingGroup->addWidget(widgetMaterial, 0, 0, 1, 1);


        formLayout->setWidget(1, QFormLayout::SpanningRole, materialsGroupBox);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        spinRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinRadius->setObjectName(QStringLiteral("spinRadius"));
        spinRadius->setMaximum(99999);
        spinRadius->setValue(10);

        gridLayout_2->addWidget(spinRadius, 1, 1, 1, 1);

        cboAltClamping = new QComboBox(Point3DSymbolWidget);
        cboAltClamping->setObjectName(QStringLiteral("cboAltClamping"));

        gridLayout_2->addWidget(cboAltClamping, 10, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditModel = new Qgs3DModelSourceLineEdit(Point3DSymbolWidget);
        lineEditModel->setObjectName(QStringLiteral("lineEditModel"));

        horizontalLayout->addWidget(lineEditModel);

        cbOverwriteMaterial = new QCheckBox(Point3DSymbolWidget);
        cbOverwriteMaterial->setObjectName(QStringLiteral("cbOverwriteMaterial"));

        horizontalLayout->addWidget(cbOverwriteMaterial);


        gridLayout_2->addLayout(horizontalLayout, 7, 1, 1, 1);

        labelRadius = new QLabel(Point3DSymbolWidget);
        labelRadius->setObjectName(QStringLiteral("labelRadius"));

        gridLayout_2->addWidget(labelRadius, 1, 0, 1, 1);

        labelBottomRadius = new QLabel(Point3DSymbolWidget);
        labelBottomRadius->setObjectName(QStringLiteral("labelBottomRadius"));

        gridLayout_2->addWidget(labelBottomRadius, 4, 0, 1, 1);

        spinSize = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setMaximum(99999);
        spinSize->setValue(10);

        gridLayout_2->addWidget(spinSize, 5, 1, 1, 1);

        labelModel = new QLabel(Point3DSymbolWidget);
        labelModel->setObjectName(QStringLiteral("labelModel"));

        gridLayout_2->addWidget(labelModel, 7, 0, 1, 1);

        spinTopRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinTopRadius->setObjectName(QStringLiteral("spinTopRadius"));
        spinTopRadius->setMaximum(99999);

        gridLayout_2->addWidget(spinTopRadius, 3, 1, 1, 1);

        spinBillboardHeight = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinBillboardHeight->setObjectName(QStringLiteral("spinBillboardHeight"));
        spinBillboardHeight->setMaximum(99999);

        gridLayout_2->addWidget(spinBillboardHeight, 8, 1, 1, 1);

        labelBillboardSymbol = new QLabel(Point3DSymbolWidget);
        labelBillboardSymbol->setObjectName(QStringLiteral("labelBillboardSymbol"));

        gridLayout_2->addWidget(labelBillboardSymbol, 9, 0, 1, 1);

        spinMinorRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinMinorRadius->setObjectName(QStringLiteral("spinMinorRadius"));
        spinMinorRadius->setMaximum(99999);
        spinMinorRadius->setValue(5);

        gridLayout_2->addWidget(spinMinorRadius, 2, 1, 1, 1);

        labelBillboardHeight = new QLabel(Point3DSymbolWidget);
        labelBillboardHeight->setObjectName(QStringLiteral("labelBillboardHeight"));

        gridLayout_2->addWidget(labelBillboardHeight, 8, 0, 1, 1);

        labelSize = new QLabel(Point3DSymbolWidget);
        labelSize->setObjectName(QStringLiteral("labelSize"));

        gridLayout_2->addWidget(labelSize, 5, 0, 1, 1);

        btnChangeSymbol = new QgsSymbolButton(Point3DSymbolWidget);
        btnChangeSymbol->setObjectName(QStringLiteral("btnChangeSymbol"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeSymbol->sizePolicy().hasHeightForWidth());
        btnChangeSymbol->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnChangeSymbol, 9, 1, 1, 1);

        labelMinorRadius = new QLabel(Point3DSymbolWidget);
        labelMinorRadius->setObjectName(QStringLiteral("labelMinorRadius"));

        gridLayout_2->addWidget(labelMinorRadius, 2, 0, 1, 1);

        cboShape = new QComboBox(Point3DSymbolWidget);
        cboShape->setObjectName(QStringLiteral("cboShape"));

        gridLayout_2->addWidget(cboShape, 0, 1, 1, 1);

        spinBottomRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinBottomRadius->setObjectName(QStringLiteral("spinBottomRadius"));
        spinBottomRadius->setMaximum(99999);
        spinBottomRadius->setValue(10);

        gridLayout_2->addWidget(spinBottomRadius, 4, 1, 1, 1);

        labelTopRadius = new QLabel(Point3DSymbolWidget);
        labelTopRadius->setObjectName(QStringLiteral("labelTopRadius"));

        gridLayout_2->addWidget(labelTopRadius, 3, 0, 1, 1);

        label = new QLabel(Point3DSymbolWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinLength = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinLength->setObjectName(QStringLiteral("spinLength"));
        spinLength->setMaximum(99999);
        spinLength->setValue(10);

        gridLayout_2->addWidget(spinLength, 6, 1, 1, 1);

        labelAltClamping = new QLabel(Point3DSymbolWidget);
        labelAltClamping->setObjectName(QStringLiteral("labelAltClamping"));

        gridLayout_2->addWidget(labelAltClamping, 10, 0, 1, 1);

        labelLength = new QLabel(Point3DSymbolWidget);
        labelLength->setObjectName(QStringLiteral("labelLength"));

        gridLayout_2->addWidget(labelLength, 6, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout_2);

        QWidget::setTabOrder(cboShape, spinRadius);
        QWidget::setTabOrder(spinRadius, spinMinorRadius);
        QWidget::setTabOrder(spinMinorRadius, spinTopRadius);
        QWidget::setTabOrder(spinTopRadius, spinBottomRadius);
        QWidget::setTabOrder(spinBottomRadius, spinSize);
        QWidget::setTabOrder(spinSize, spinLength);
        QWidget::setTabOrder(spinLength, lineEditModel);
        QWidget::setTabOrder(lineEditModel, cbOverwriteMaterial);
        QWidget::setTabOrder(cbOverwriteMaterial, spinBillboardHeight);
        QWidget::setTabOrder(spinBillboardHeight, btnChangeSymbol);
        QWidget::setTabOrder(btnChangeSymbol, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, spinTX);
        QWidget::setTabOrder(spinTX, spinTY);
        QWidget::setTabOrder(spinTY, spinTZ);
        QWidget::setTabOrder(spinTZ, spinSX);
        QWidget::setTabOrder(spinSX, spinSY);
        QWidget::setTabOrder(spinSY, spinSZ);
        QWidget::setTabOrder(spinSZ, spinRX);
        QWidget::setTabOrder(spinRX, spinRY);
        QWidget::setTabOrder(spinRY, spinRZ);

        retranslateUi(Point3DSymbolWidget);

        QMetaObject::connectSlotsByName(Point3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Point3DSymbolWidget)
    {
        transformationWidget->setTitle(QApplication::translate("Point3DSymbolWidget", "Transformation", Q_NULLPTR));
        label_5->setText(QApplication::translate("Point3DSymbolWidget", "X", Q_NULLPTR));
        label_4->setText(QApplication::translate("Point3DSymbolWidget", "Rotation", Q_NULLPTR));
        label_6->setText(QApplication::translate("Point3DSymbolWidget", "Y", Q_NULLPTR));
        label_2->setText(QApplication::translate("Point3DSymbolWidget", "Translation", Q_NULLPTR));
        label_3->setText(QApplication::translate("Point3DSymbolWidget", "Scale", Q_NULLPTR));
        label_7->setText(QApplication::translate("Point3DSymbolWidget", "Z", Q_NULLPTR));
        materialsGroupBox->setTitle(QApplication::translate("Point3DSymbolWidget", "Shading", Q_NULLPTR));
        cboAltClamping->clear();
        cboAltClamping->insertItems(0, QStringList()
         << QApplication::translate("Point3DSymbolWidget", "Absolute", Q_NULLPTR)
         << QApplication::translate("Point3DSymbolWidget", "Relative", Q_NULLPTR)
         << QApplication::translate("Point3DSymbolWidget", "Terrain", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        cbOverwriteMaterial->setToolTip(QApplication::translate("Point3DSymbolWidget", "Overwrite model material", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbOverwriteMaterial->setText(QString());
        labelRadius->setText(QApplication::translate("Point3DSymbolWidget", "Radius", Q_NULLPTR));
        labelBottomRadius->setText(QApplication::translate("Point3DSymbolWidget", "Bottom radius", Q_NULLPTR));
        labelModel->setText(QApplication::translate("Point3DSymbolWidget", "Model", Q_NULLPTR));
        labelBillboardSymbol->setText(QApplication::translate("Point3DSymbolWidget", "Billboard symbol", Q_NULLPTR));
        labelBillboardHeight->setText(QApplication::translate("Point3DSymbolWidget", "Billboard Height", Q_NULLPTR));
        labelSize->setText(QApplication::translate("Point3DSymbolWidget", "Size", Q_NULLPTR));
        btnChangeSymbol->setText(QString());
        labelMinorRadius->setText(QApplication::translate("Point3DSymbolWidget", "Minor radius", Q_NULLPTR));
        labelTopRadius->setText(QApplication::translate("Point3DSymbolWidget", "Top radius", Q_NULLPTR));
        label->setText(QApplication::translate("Point3DSymbolWidget", "Shape", Q_NULLPTR));
        labelAltClamping->setText(QApplication::translate("Point3DSymbolWidget", "Altitude clamping", Q_NULLPTR));
        labelLength->setText(QApplication::translate("Point3DSymbolWidget", "Length", Q_NULLPTR));
        Q_UNUSED(Point3DSymbolWidget);
    } // retranslateUi

};

namespace Ui {
    class Point3DSymbolWidget: public Ui_Point3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT3DSYMBOLWIDGET_H
