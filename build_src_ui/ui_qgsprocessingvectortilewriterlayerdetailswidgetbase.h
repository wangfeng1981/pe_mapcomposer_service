/********************************************************************************
** Form generated from reading UI file 'qgsprocessingvectortilewriterlayerdetailswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGVECTORTILEWRITERLAYERDETAILSWIDGETBASE_H
#define UI_QGSPROCESSINGVECTORTILEWRITERLAYERDETAILSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include "qgsexpressionlineedit.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingVectorTileWriterLayerDetailsWidget
{
public:
    QGridLayout *gridLayout;
    QgsSpinBox *mSpinMinZoom;
    QLabel *label;
    QLabel *label_2;
    QgsSpinBox *mSpinMaxZoom;
    QLabel *label_3;
    QLineEdit *mEditLayerName;
    QLabel *label_4;
    QgsExpressionLineEdit *mEditFilterExpression;
    QDialogButtonBox *mButtonBox;

    void setupUi(QWidget *QgsProcessingVectorTileWriterLayerDetailsWidget)
    {
        if (QgsProcessingVectorTileWriterLayerDetailsWidget->objectName().isEmpty())
            QgsProcessingVectorTileWriterLayerDetailsWidget->setObjectName(QStringLiteral("QgsProcessingVectorTileWriterLayerDetailsWidget"));
        QgsProcessingVectorTileWriterLayerDetailsWidget->resize(465, 563);
        gridLayout = new QGridLayout(QgsProcessingVectorTileWriterLayerDetailsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mSpinMinZoom = new QgsSpinBox(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mSpinMinZoom->setObjectName(QStringLiteral("mSpinMinZoom"));
        mSpinMinZoom->setMinimum(-1);
        mSpinMinZoom->setMaximum(24);
        mSpinMinZoom->setValue(-1);

        gridLayout->addWidget(mSpinMinZoom, 0, 1, 1, 1);

        label = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mSpinMaxZoom = new QgsSpinBox(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mSpinMaxZoom->setObjectName(QStringLiteral("mSpinMaxZoom"));
        mSpinMaxZoom->setMinimum(-1);
        mSpinMaxZoom->setMaximum(24);
        mSpinMaxZoom->setValue(-1);

        gridLayout->addWidget(mSpinMaxZoom, 1, 1, 1, 1);

        label_3 = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mEditLayerName = new QLineEdit(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mEditLayerName->setObjectName(QStringLiteral("mEditLayerName"));

        gridLayout->addWidget(mEditLayerName, 2, 1, 1, 1);

        label_4 = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        mEditFilterExpression = new QgsExpressionLineEdit(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mEditFilterExpression->setObjectName(QStringLiteral("mEditFilterExpression"));

        gridLayout->addWidget(mEditFilterExpression, 4, 0, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 5, 0, 1, 2);


        retranslateUi(QgsProcessingVectorTileWriterLayerDetailsWidget);

        QMetaObject::connectSlotsByName(QgsProcessingVectorTileWriterLayerDetailsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingVectorTileWriterLayerDetailsWidget)
    {
        label->setText(QApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Min. zoom level", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Max. zoom level", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Layer name", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Filter expression", Q_NULLPTR));
        Q_UNUSED(QgsProcessingVectorTileWriterLayerDetailsWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingVectorTileWriterLayerDetailsWidget: public Ui_QgsProcessingVectorTileWriterLayerDetailsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGVECTORTILEWRITERLAYERDETAILSWIDGETBASE_H
