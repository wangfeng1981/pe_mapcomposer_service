/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderermeshsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H

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
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererMeshSettingsWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QgsUnitSelectionWidget *mLineUnitsComboBox;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QgsColorButton *mColorWidget;
    QLabel *mLineWidthLabel;
    QLabel *label_2;

    void setupUi(QWidget *QgsMeshRendererMeshSettingsWidgetBase)
    {
        if (QgsMeshRendererMeshSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererMeshSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererMeshSettingsWidgetBase"));
        QgsMeshRendererMeshSettingsWidgetBase->resize(327, 67);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsMeshRendererMeshSettingsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsMeshRendererMeshSettingsWidgetBase->setSizePolicy(sizePolicy);
        QgsMeshRendererMeshSettingsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(QgsMeshRendererMeshSettingsWidgetBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mLineUnitsComboBox = new QgsUnitSelectionWidget(QgsMeshRendererMeshSettingsWidgetBase);
        mLineUnitsComboBox->setObjectName(QStringLiteral("mLineUnitsComboBox"));

        gridLayout_2->addWidget(mLineUnitsComboBox, 0, 2, 1, 1);

        mLineWidthSpinBox = new QgsDoubleSpinBox(QgsMeshRendererMeshSettingsWidgetBase);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));
        sizePolicy.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

        mColorWidget = new QgsColorButton(QgsMeshRendererMeshSettingsWidgetBase);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));
        sizePolicy.setHeightForWidth(mColorWidget->sizePolicy().hasHeightForWidth());
        mColorWidget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mColorWidget, 1, 1, 1, 1);

        mLineWidthLabel = new QLabel(QgsMeshRendererMeshSettingsWidgetBase);
        mLineWidthLabel->setObjectName(QStringLiteral("mLineWidthLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineWidthLabel->sizePolicy().hasHeightForWidth());
        mLineWidthLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mLineWidthLabel, 0, 0, 1, 1);

        label_2 = new QLabel(QgsMeshRendererMeshSettingsWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        QWidget::setTabOrder(mLineWidthSpinBox, mLineUnitsComboBox);
        QWidget::setTabOrder(mLineUnitsComboBox, mColorWidget);

        retranslateUi(QgsMeshRendererMeshSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererMeshSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererMeshSettingsWidgetBase)
    {
        mLineWidthLabel->setText(QApplication::translate("QgsMeshRendererMeshSettingsWidgetBase", "Line width", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshRendererMeshSettingsWidgetBase", "Line color", Q_NULLPTR));
        Q_UNUSED(QgsMeshRendererMeshSettingsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererMeshSettingsWidgetBase: public Ui_QgsMeshRendererMeshSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H
