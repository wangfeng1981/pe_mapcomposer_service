/********************************************************************************
** Form generated from reading UI file 'qgsmesh3dpropswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESH3DPROPSWIDGET_H
#define UI_QGSMESH3DPROPSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "raster/qgscolorrampshaderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMesh3dPropsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mGroupBoxTrianglesSettings;
    QGridLayout *gridLayout_3;
    QCheckBox *mChkSmoothTriangles;
    QCheckBox *mChkWireframe;
    QGroupBox *mGroupBoxWireframe;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mSpinBoxWireframeLineWidth;
    QgsColorButton *mColorButtonWireframe;
    QgsCollapsibleGroupBox *mGroupBoxVerticaleSettings;
    QFormLayout *formLayout;
    QLabel *label_4;
    QgsDoubleSpinBox *mSpinBoxVerticaleScale;
    QLabel *label;
    QComboBox *mComboBoxDatasetVertical;
    QCheckBox *mCheckBoxVerticalMagnitudeRelative;
    QgsCollapsibleGroupBox *mGroupBoxTextureSettings;
    QGridLayout *gridLayout_6;
    QComboBox *mComboBoxTextureType;
    QWidget *mMeshSingleColorWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QgsColorButton *mMeshSingleColorButton;
    QLabel *label_5;
    QGroupBox *mGroupBoxColorRampShader;
    QGridLayout *gridLayout_7;
    QFrame *line_2;
    QLineEdit *mColorRampShaderMinEdit;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *mColorRampShaderMinMaxReloadButton;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QLineEdit *mColorRampShaderMaxEdit;
    QgsCollapsibleGroupBox *mGroupBoxArrowsSettings;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QgsDoubleSpinBox *mArrowsSpacingSpinBox;
    QLabel *label_3;
    QCheckBox *mArrowsFixedSizeCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMesh3dPropsWidget)
    {
        if (QgsMesh3dPropsWidget->objectName().isEmpty())
            QgsMesh3dPropsWidget->setObjectName(QStringLiteral("QgsMesh3dPropsWidget"));
        QgsMesh3dPropsWidget->resize(325, 566);
        QgsMesh3dPropsWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsMesh3dPropsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mGroupBoxTrianglesSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxTrianglesSettings->setObjectName(QStringLiteral("mGroupBoxTrianglesSettings"));
        gridLayout_3 = new QGridLayout(mGroupBoxTrianglesSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mChkSmoothTriangles = new QCheckBox(mGroupBoxTrianglesSettings);
        mChkSmoothTriangles->setObjectName(QStringLiteral("mChkSmoothTriangles"));

        gridLayout_3->addWidget(mChkSmoothTriangles, 0, 0, 1, 1);

        mChkWireframe = new QCheckBox(mGroupBoxTrianglesSettings);
        mChkWireframe->setObjectName(QStringLiteral("mChkWireframe"));

        gridLayout_3->addWidget(mChkWireframe, 0, 1, 1, 1);

        mGroupBoxWireframe = new QGroupBox(mGroupBoxTrianglesSettings);
        mGroupBoxWireframe->setObjectName(QStringLiteral("mGroupBoxWireframe"));
        horizontalLayout = new QHBoxLayout(mGroupBoxWireframe);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mSpinBoxWireframeLineWidth = new QgsDoubleSpinBox(mGroupBoxWireframe);
        mSpinBoxWireframeLineWidth->setObjectName(QStringLiteral("mSpinBoxWireframeLineWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinBoxWireframeLineWidth->sizePolicy().hasHeightForWidth());
        mSpinBoxWireframeLineWidth->setSizePolicy(sizePolicy);
        mSpinBoxWireframeLineWidth->setProperty("value", QVariant(1));

        horizontalLayout->addWidget(mSpinBoxWireframeLineWidth);

        mColorButtonWireframe = new QgsColorButton(mGroupBoxWireframe);
        mColorButtonWireframe->setObjectName(QStringLiteral("mColorButtonWireframe"));

        horizontalLayout->addWidget(mColorButtonWireframe);

        horizontalLayout->setStretch(1, 1);

        gridLayout_3->addWidget(mGroupBoxWireframe, 1, 0, 1, 2);


        verticalLayout->addWidget(mGroupBoxTrianglesSettings);

        mGroupBoxVerticaleSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxVerticaleSettings->setObjectName(QStringLiteral("mGroupBoxVerticaleSettings"));
        formLayout = new QFormLayout(mGroupBoxVerticaleSettings);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(mGroupBoxVerticaleSettings);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        mSpinBoxVerticaleScale = new QgsDoubleSpinBox(mGroupBoxVerticaleSettings);
        mSpinBoxVerticaleScale->setObjectName(QStringLiteral("mSpinBoxVerticaleScale"));
        sizePolicy.setHeightForWidth(mSpinBoxVerticaleScale->sizePolicy().hasHeightForWidth());
        mSpinBoxVerticaleScale->setSizePolicy(sizePolicy);
        mSpinBoxVerticaleScale->setProperty("maximum", QVariant(1e+7));
        mSpinBoxVerticaleScale->setProperty("value", QVariant(1));

        formLayout->setWidget(0, QFormLayout::FieldRole, mSpinBoxVerticaleScale);

        label = new QLabel(mGroupBoxVerticaleSettings);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        mComboBoxDatasetVertical = new QComboBox(mGroupBoxVerticaleSettings);
        mComboBoxDatasetVertical->setObjectName(QStringLiteral("mComboBoxDatasetVertical"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mComboBoxDatasetVertical->sizePolicy().hasHeightForWidth());
        mComboBoxDatasetVertical->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, mComboBoxDatasetVertical);

        mCheckBoxVerticalMagnitudeRelative = new QCheckBox(mGroupBoxVerticaleSettings);
        mCheckBoxVerticalMagnitudeRelative->setObjectName(QStringLiteral("mCheckBoxVerticalMagnitudeRelative"));
        sizePolicy1.setHeightForWidth(mCheckBoxVerticalMagnitudeRelative->sizePolicy().hasHeightForWidth());
        mCheckBoxVerticalMagnitudeRelative->setSizePolicy(sizePolicy1);
        mCheckBoxVerticalMagnitudeRelative->setMinimumSize(QSize(100, 0));

        formLayout->setWidget(2, QFormLayout::SpanningRole, mCheckBoxVerticalMagnitudeRelative);


        verticalLayout->addWidget(mGroupBoxVerticaleSettings);

        mGroupBoxTextureSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxTextureSettings->setObjectName(QStringLiteral("mGroupBoxTextureSettings"));
        gridLayout_6 = new QGridLayout(mGroupBoxTextureSettings);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mComboBoxTextureType = new QComboBox(mGroupBoxTextureSettings);
        mComboBoxTextureType->setObjectName(QStringLiteral("mComboBoxTextureType"));
        sizePolicy1.setHeightForWidth(mComboBoxTextureType->sizePolicy().hasHeightForWidth());
        mComboBoxTextureType->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(mComboBoxTextureType, 0, 1, 1, 1);

        mMeshSingleColorWidget = new QWidget(mGroupBoxTextureSettings);
        mMeshSingleColorWidget->setObjectName(QStringLiteral("mMeshSingleColorWidget"));
        horizontalLayout_3 = new QHBoxLayout(mMeshSingleColorWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(mMeshSingleColorWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        mMeshSingleColorButton = new QgsColorButton(mMeshSingleColorWidget);
        mMeshSingleColorButton->setObjectName(QStringLiteral("mMeshSingleColorButton"));

        horizontalLayout_3->addWidget(mMeshSingleColorButton);


        gridLayout_6->addWidget(mMeshSingleColorWidget, 2, 0, 1, 2);

        label_5 = new QLabel(mGroupBoxTextureSettings);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        mGroupBoxColorRampShader = new QGroupBox(mGroupBoxTextureSettings);
        mGroupBoxColorRampShader->setObjectName(QStringLiteral("mGroupBoxColorRampShader"));
        gridLayout_7 = new QGridLayout(mGroupBoxColorRampShader);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(9, 9, 9, 9);
        line_2 = new QFrame(mGroupBoxColorRampShader);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 1, 0, 1, 5);

        mColorRampShaderMinEdit = new QLineEdit(mGroupBoxColorRampShader);
        mColorRampShaderMinEdit->setObjectName(QStringLiteral("mColorRampShaderMinEdit"));
        sizePolicy1.setHeightForWidth(mColorRampShaderMinEdit->sizePolicy().hasHeightForWidth());
        mColorRampShaderMinEdit->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(mColorRampShaderMinEdit, 0, 1, 1, 1);

        label_2 = new QLabel(mGroupBoxColorRampShader);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        label_7 = new QLabel(mGroupBoxColorRampShader);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_7->addWidget(label_7, 0, 2, 1, 1);

        mColorRampShaderMinMaxReloadButton = new QPushButton(mGroupBoxColorRampShader);
        mColorRampShaderMinMaxReloadButton->setObjectName(QStringLiteral("mColorRampShaderMinMaxReloadButton"));
        mColorRampShaderMinMaxReloadButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColorRampShaderMinMaxReloadButton->setIcon(icon);

        gridLayout_7->addWidget(mColorRampShaderMinMaxReloadButton, 0, 4, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(mGroupBoxColorRampShader);
        mColorRampShaderWidget->setObjectName(QStringLiteral("mColorRampShaderWidget"));
        mColorRampShaderWidget->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(mColorRampShaderWidget, 2, 0, 1, 5);

        mColorRampShaderMaxEdit = new QLineEdit(mGroupBoxColorRampShader);
        mColorRampShaderMaxEdit->setObjectName(QStringLiteral("mColorRampShaderMaxEdit"));
        sizePolicy1.setHeightForWidth(mColorRampShaderMaxEdit->sizePolicy().hasHeightForWidth());
        mColorRampShaderMaxEdit->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(mColorRampShaderMaxEdit, 0, 3, 1, 1);


        gridLayout_6->addWidget(mGroupBoxColorRampShader, 1, 0, 1, 2);


        verticalLayout->addWidget(mGroupBoxTextureSettings);

        mGroupBoxArrowsSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxArrowsSettings->setObjectName(QStringLiteral("mGroupBoxArrowsSettings"));
        mGroupBoxArrowsSettings->setCheckable(true);
        gridLayout = new QGridLayout(mGroupBoxArrowsSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(mGroupBoxArrowsSettings);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        mArrowsSpacingSpinBox = new QgsDoubleSpinBox(mGroupBoxArrowsSettings);
        mArrowsSpacingSpinBox->setObjectName(QStringLiteral("mArrowsSpacingSpinBox"));
        sizePolicy1.setHeightForWidth(mArrowsSpacingSpinBox->sizePolicy().hasHeightForWidth());
        mArrowsSpacingSpinBox->setSizePolicy(sizePolicy1);
        mArrowsSpacingSpinBox->setMinimum(1);
        mArrowsSpacingSpinBox->setMaximum(1e+17);
        mArrowsSpacingSpinBox->setValue(25);

        gridLayout->addWidget(mArrowsSpacingSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(mGroupBoxArrowsSettings);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mArrowsFixedSizeCheckBox = new QCheckBox(mGroupBoxArrowsSettings);
        mArrowsFixedSizeCheckBox->setObjectName(QStringLiteral("mArrowsFixedSizeCheckBox"));

        gridLayout->addWidget(mArrowsFixedSizeCheckBox, 2, 0, 1, 1);


        verticalLayout->addWidget(mGroupBoxArrowsSettings);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsMesh3dPropsWidget);

        QMetaObject::connectSlotsByName(QgsMesh3dPropsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMesh3dPropsWidget)
    {
        mGroupBoxTrianglesSettings->setTitle(QApplication::translate("QgsMesh3dPropsWidget", "Triangles Settings", Q_NULLPTR));
        mChkSmoothTriangles->setText(QApplication::translate("QgsMesh3dPropsWidget", "Smooth triangles", Q_NULLPTR));
        mChkWireframe->setText(QApplication::translate("QgsMesh3dPropsWidget", "Wireframe", Q_NULLPTR));
        mGroupBoxWireframe->setTitle(QApplication::translate("QgsMesh3dPropsWidget", "Wireframe Line Width And Color", Q_NULLPTR));
        mSpinBoxWireframeLineWidth->setProperty("suffix", QVariant(QApplication::translate("QgsMesh3dPropsWidget", " px", Q_NULLPTR)));
        mGroupBoxVerticaleSettings->setTitle(QApplication::translate("QgsMesh3dPropsWidget", "Vertical Settings", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMesh3dPropsWidget", "Vertical Scale", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMesh3dPropsWidget", "Dataset Group For Vertical Value", Q_NULLPTR));
        mCheckBoxVerticalMagnitudeRelative->setText(QApplication::translate("QgsMesh3dPropsWidget", "Dataset Value Relative To Vertices Z Value", Q_NULLPTR));
        mGroupBoxTextureSettings->setTitle(QApplication::translate("QgsMesh3dPropsWidget", "Rendering Color Settings", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsMesh3dPropsWidget", "Mesh Color", Q_NULLPTR));
        mMeshSingleColorButton->setText(QString());
        label_5->setText(QApplication::translate("QgsMesh3dPropsWidget", "Rendering Style", Q_NULLPTR));
        mGroupBoxColorRampShader->setTitle(QApplication::translate("QgsMesh3dPropsWidget", "Color Ramp Shader", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMesh3dPropsWidget", "Min", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsMesh3dPropsWidget", "Max", Q_NULLPTR));
        mColorRampShaderMinMaxReloadButton->setText(QString());
        mGroupBoxArrowsSettings->setTitle(QApplication::translate("QgsMesh3dPropsWidget", "Arrows Settings", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsMesh3dPropsWidget", "Map Units", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsMesh3dPropsWidget", "Arrows Spacing", Q_NULLPTR));
        mArrowsFixedSizeCheckBox->setText(QApplication::translate("QgsMesh3dPropsWidget", "Fixed Size", Q_NULLPTR));
        Q_UNUSED(QgsMesh3dPropsWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsMesh3dPropsWidget: public Ui_QgsMesh3dPropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESH3DPROPSWIDGET_H
