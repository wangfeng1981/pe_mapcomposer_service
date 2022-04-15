/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerdigitizingproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERDIGITIZINGPROPERTIES_H
#define UI_QGSVECTORLAYERDIGITIZINGPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerDigitizingPropertiesPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *mGeometryAutoFixesGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *mRemoveDuplicateNodesCheckbox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mPrecisionUnitsLabel;
    QLineEdit *mGeometryPrecisionLineEdit;
    QGroupBox *mGeometryValidationGroupBox;
    QGroupBox *mTopologyChecksGroupBox;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *QgsVectorLayerDigitizingPropertiesPage)
    {
        if (QgsVectorLayerDigitizingPropertiesPage->objectName().isEmpty())
            QgsVectorLayerDigitizingPropertiesPage->setObjectName(QStringLiteral("QgsVectorLayerDigitizingPropertiesPage"));
        QgsVectorLayerDigitizingPropertiesPage->resize(400, 300);
        QgsVectorLayerDigitizingPropertiesPage->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsVectorLayerDigitizingPropertiesPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(QgsVectorLayerDigitizingPropertiesPage);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 400, 300));
        verticalLayout_20 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mGeometryAutoFixesGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mGeometryAutoFixesGroupBox->setObjectName(QStringLiteral("mGeometryAutoFixesGroupBox"));
        gridLayout = new QGridLayout(mGeometryAutoFixesGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mRemoveDuplicateNodesCheckbox = new QCheckBox(mGeometryAutoFixesGroupBox);
        mRemoveDuplicateNodesCheckbox->setObjectName(QStringLiteral("mRemoveDuplicateNodesCheckbox"));

        gridLayout->addWidget(mRemoveDuplicateNodesCheckbox, 0, 0, 1, 2);

        label = new QLabel(mGeometryAutoFixesGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        mPrecisionUnitsLabel = new QLabel(mGeometryAutoFixesGroupBox);
        mPrecisionUnitsLabel->setObjectName(QStringLiteral("mPrecisionUnitsLabel"));

        horizontalLayout_11->addWidget(mPrecisionUnitsLabel);

        mGeometryPrecisionLineEdit = new QLineEdit(mGeometryAutoFixesGroupBox);
        mGeometryPrecisionLineEdit->setObjectName(QStringLiteral("mGeometryPrecisionLineEdit"));
        mGeometryPrecisionLineEdit->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        horizontalLayout_11->addWidget(mGeometryPrecisionLineEdit);


        gridLayout->addLayout(horizontalLayout_11, 1, 1, 1, 1);


        verticalLayout_20->addWidget(mGeometryAutoFixesGroupBox);

        mGeometryValidationGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mGeometryValidationGroupBox->setObjectName(QStringLiteral("mGeometryValidationGroupBox"));

        verticalLayout_20->addWidget(mGeometryValidationGroupBox);

        mTopologyChecksGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mTopologyChecksGroupBox->setObjectName(QStringLiteral("mTopologyChecksGroupBox"));

        verticalLayout_20->addWidget(mTopologyChecksGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_4);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea_2);


        retranslateUi(QgsVectorLayerDigitizingPropertiesPage);

        QMetaObject::connectSlotsByName(QgsVectorLayerDigitizingPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorLayerDigitizingPropertiesPage)
    {
        mGeometryAutoFixesGroupBox->setTitle(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Automatic Fixes", Q_NULLPTR));
        mRemoveDuplicateNodesCheckbox->setText(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Remove duplicate nodes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "<html><head/><body><p>The geometry precision defines the maximum precision to of geometry coordinates that should be stored on this layer. A snap to grid algorithm will be applied on every geometry entering this layer, resulting in coordinates being rounded to multiples of this value. The operation is applied in this layer's coordinate reference system.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Geometry precision", Q_NULLPTR));
        mPrecisionUnitsLabel->setText(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "[Units]", Q_NULLPTR));
        mGeometryPrecisionLineEdit->setText(QString());
        mGeometryPrecisionLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "[No precision restriction]", Q_NULLPTR));
        mGeometryValidationGroupBox->setTitle(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Geometry checks", Q_NULLPTR));
        mTopologyChecksGroupBox->setTitle(QApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Topology checks", Q_NULLPTR));
        Q_UNUSED(QgsVectorLayerDigitizingPropertiesPage);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerDigitizingPropertiesPage: public Ui_QgsVectorLayerDigitizingPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERDIGITIZINGPROPERTIES_H
