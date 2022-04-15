/********************************************************************************
** Form generated from reading UI file 'qgsmeshrendererscalarsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsmeshvariablestrokewidthwidget.h"
#include "qgsopacitywidget.h"
#include "qgsunitselectionwidget.h"
#include "raster/qgscolorrampshaderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererScalarSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mOpacityContainerWidget;
    QFormLayout *formLayout;
    QLabel *mOpacityLabel;
    QgsOpacityWidget *mOpacityWidget;
    QGroupBox *mEdgeWidthGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mScalarEdgeStrokeWidthVariableRadioButton;
    QRadioButton *mScalarEdgeStrokeWidthFixedRadioButton;
    QgsMeshVariableStrokeWidthButton *mScalarEdgeStrokeWidthVariablePushButton;
    QgsDoubleSpinBox *mScalarEdgeStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mScalarEdgeStrokeWidthUnitSelectionWidget;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mScalarMinLabel;
    QLineEdit *mScalarMinLineEdit;
    QLabel *mScalarMaxLabel;
    QLineEdit *mScalarMaxLineEdit;
    QPushButton *mScalarRecalculateMinMaxButton;
    QWidget *mScalarResamplingWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelDataInterpolation;
    QComboBox *mScalarInterpolationTypeComboBox;
    QgsColorRampShaderWidget *mScalarColorRampShaderWidget;

    void setupUi(QWidget *QgsMeshRendererScalarSettingsWidgetBase)
    {
        if (QgsMeshRendererScalarSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererScalarSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererScalarSettingsWidgetBase"));
        QgsMeshRendererScalarSettingsWidgetBase->resize(378, 206);
        QgsMeshRendererScalarSettingsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsMeshRendererScalarSettingsWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOpacityContainerWidget = new QWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mOpacityContainerWidget->setObjectName(QStringLiteral("mOpacityContainerWidget"));
        formLayout = new QFormLayout(mOpacityContainerWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        mOpacityLabel = new QLabel(mOpacityContainerWidget);
        mOpacityLabel->setObjectName(QStringLiteral("mOpacityLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mOpacityLabel);

        mOpacityWidget = new QgsOpacityWidget(mOpacityContainerWidget);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setMinimumSize(QSize(0, 14));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(0, QFormLayout::FieldRole, mOpacityWidget);


        verticalLayout->addWidget(mOpacityContainerWidget);

        mEdgeWidthGroupBox = new QGroupBox(QgsMeshRendererScalarSettingsWidgetBase);
        mEdgeWidthGroupBox->setObjectName(QStringLiteral("mEdgeWidthGroupBox"));
        gridLayout_2 = new QGridLayout(mEdgeWidthGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mScalarEdgeStrokeWidthVariableRadioButton = new QRadioButton(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthVariableRadioButton->setObjectName(QStringLiteral("mScalarEdgeStrokeWidthVariableRadioButton"));

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthVariableRadioButton, 2, 0, 1, 1);

        mScalarEdgeStrokeWidthFixedRadioButton = new QRadioButton(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthFixedRadioButton->setObjectName(QStringLiteral("mScalarEdgeStrokeWidthFixedRadioButton"));
        mScalarEdgeStrokeWidthFixedRadioButton->setChecked(true);

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthFixedRadioButton, 0, 0, 1, 1);

        mScalarEdgeStrokeWidthVariablePushButton = new QgsMeshVariableStrokeWidthButton(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthVariablePushButton->setObjectName(QStringLiteral("mScalarEdgeStrokeWidthVariablePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mScalarEdgeStrokeWidthVariablePushButton->sizePolicy().hasHeightForWidth());
        mScalarEdgeStrokeWidthVariablePushButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthVariablePushButton, 0, 3, 3, 1);

        mScalarEdgeStrokeWidthSpinBox = new QgsDoubleSpinBox(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthSpinBox->setObjectName(QStringLiteral("mScalarEdgeStrokeWidthSpinBox"));
        sizePolicy.setHeightForWidth(mScalarEdgeStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mScalarEdgeStrokeWidthSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthSpinBox, 0, 2, 3, 1);

        mScalarEdgeStrokeWidthUnitSelectionWidget = new QgsUnitSelectionWidget(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthUnitSelectionWidget->setObjectName(QStringLiteral("mScalarEdgeStrokeWidthUnitSelectionWidget"));

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthUnitSelectionWidget, 0, 4, 3, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 3, 1);


        verticalLayout->addWidget(mEdgeWidthGroupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mScalarMinLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMinLabel->setObjectName(QStringLiteral("mScalarMinLabel"));

        horizontalLayout_2->addWidget(mScalarMinLabel);

        mScalarMinLineEdit = new QLineEdit(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMinLineEdit->setObjectName(QStringLiteral("mScalarMinLineEdit"));

        horizontalLayout_2->addWidget(mScalarMinLineEdit);

        mScalarMaxLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMaxLabel->setObjectName(QStringLiteral("mScalarMaxLabel"));

        horizontalLayout_2->addWidget(mScalarMaxLabel);

        mScalarMaxLineEdit = new QLineEdit(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMaxLineEdit->setObjectName(QStringLiteral("mScalarMaxLineEdit"));

        horizontalLayout_2->addWidget(mScalarMaxLineEdit);

        mScalarRecalculateMinMaxButton = new QPushButton(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarRecalculateMinMaxButton->setObjectName(QStringLiteral("mScalarRecalculateMinMaxButton"));

        horizontalLayout_2->addWidget(mScalarRecalculateMinMaxButton);


        verticalLayout->addLayout(horizontalLayout_2);

        mScalarResamplingWidget = new QWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarResamplingWidget->setObjectName(QStringLiteral("mScalarResamplingWidget"));
        horizontalLayout_4 = new QHBoxLayout(mScalarResamplingWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mLabelDataInterpolation = new QLabel(mScalarResamplingWidget);
        mLabelDataInterpolation->setObjectName(QStringLiteral("mLabelDataInterpolation"));

        horizontalLayout_4->addWidget(mLabelDataInterpolation);

        mScalarInterpolationTypeComboBox = new QComboBox(mScalarResamplingWidget);
        mScalarInterpolationTypeComboBox->setObjectName(QStringLiteral("mScalarInterpolationTypeComboBox"));

        horizontalLayout_4->addWidget(mScalarInterpolationTypeComboBox);


        verticalLayout->addWidget(mScalarResamplingWidget);

        mScalarColorRampShaderWidget = new QgsColorRampShaderWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarColorRampShaderWidget->setObjectName(QStringLiteral("mScalarColorRampShaderWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mScalarColorRampShaderWidget->sizePolicy().hasHeightForWidth());
        mScalarColorRampShaderWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(mScalarColorRampShaderWidget);


        retranslateUi(QgsMeshRendererScalarSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererScalarSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererScalarSettingsWidgetBase)
    {
        mOpacityLabel->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Opacity", Q_NULLPTR));
        mEdgeWidthGroupBox->setTitle(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Stroke width", Q_NULLPTR));
        mScalarEdgeStrokeWidthVariableRadioButton->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Variable", Q_NULLPTR));
        mScalarEdgeStrokeWidthFixedRadioButton->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Fixed", Q_NULLPTR));
        mScalarMinLabel->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Min", Q_NULLPTR));
        mScalarMinLineEdit->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "0", Q_NULLPTR));
        mScalarMaxLabel->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Max", Q_NULLPTR));
        mScalarMaxLineEdit->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "1", Q_NULLPTR));
        mScalarRecalculateMinMaxButton->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Load", Q_NULLPTR));
        mLabelDataInterpolation->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Resampling method", Q_NULLPTR));
        Q_UNUSED(QgsMeshRendererScalarSettingsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererScalarSettingsWidgetBase: public Ui_QgsMeshRendererScalarSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H
