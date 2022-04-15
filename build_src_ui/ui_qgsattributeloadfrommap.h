/********************************************************************************
** Form generated from reading UI file 'qgsattributeloadfrommap.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTELOADFROMMAP_H
#define UI_QGSATTRIBUTELOADFROMMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeLoadValues
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *layerLabel;
    QLabel *keyLabel;
    QComboBox *layerComboBox;
    QTableWidget *previewTableWidget;
    QLabel *valueTableLabel;
    QLabel *valueLabel;
    QComboBox *valueComboBox;
    QPushButton *previewButton;
    QComboBox *keyComboBox;
    QCheckBox *nullCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAttributeLoadValues)
    {
        if (QgsAttributeLoadValues->objectName().isEmpty())
            QgsAttributeLoadValues->setObjectName(QStringLiteral("QgsAttributeLoadValues"));
        QgsAttributeLoadValues->resize(420, 578);
        verticalLayout = new QVBoxLayout(QgsAttributeLoadValues);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        layerLabel = new QLabel(QgsAttributeLoadValues);
        layerLabel->setObjectName(QStringLiteral("layerLabel"));

        gridLayout->addWidget(layerLabel, 1, 0, 1, 1);

        keyLabel = new QLabel(QgsAttributeLoadValues);
        keyLabel->setObjectName(QStringLiteral("keyLabel"));

        gridLayout->addWidget(keyLabel, 3, 0, 1, 1);

        layerComboBox = new QComboBox(QgsAttributeLoadValues);
        layerComboBox->setObjectName(QStringLiteral("layerComboBox"));

        gridLayout->addWidget(layerComboBox, 1, 1, 1, 2);

        previewTableWidget = new QTableWidget(QgsAttributeLoadValues);
        if (previewTableWidget->columnCount() < 2)
            previewTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        previewTableWidget->setObjectName(QStringLiteral("previewTableWidget"));

        gridLayout->addWidget(previewTableWidget, 5, 0, 1, 3);

        valueTableLabel = new QLabel(QgsAttributeLoadValues);
        valueTableLabel->setObjectName(QStringLiteral("valueTableLabel"));

        gridLayout->addWidget(valueTableLabel, 0, 0, 1, 3);

        valueLabel = new QLabel(QgsAttributeLoadValues);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        gridLayout->addWidget(valueLabel, 2, 0, 1, 1);

        valueComboBox = new QComboBox(QgsAttributeLoadValues);
        valueComboBox->setObjectName(QStringLiteral("valueComboBox"));

        gridLayout->addWidget(valueComboBox, 2, 1, 1, 1);

        previewButton = new QPushButton(QgsAttributeLoadValues);
        previewButton->setObjectName(QStringLiteral("previewButton"));

        gridLayout->addWidget(previewButton, 2, 2, 2, 1);

        keyComboBox = new QComboBox(QgsAttributeLoadValues);
        keyComboBox->setObjectName(QStringLiteral("keyComboBox"));

        gridLayout->addWidget(keyComboBox, 3, 1, 1, 1);

        nullCheckBox = new QCheckBox(QgsAttributeLoadValues);
        nullCheckBox->setObjectName(QStringLiteral("nullCheckBox"));

        gridLayout->addWidget(nullCheckBox, 4, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(QgsAttributeLoadValues);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(layerComboBox, valueComboBox);
        QWidget::setTabOrder(valueComboBox, keyComboBox);
        QWidget::setTabOrder(keyComboBox, previewButton);
        QWidget::setTabOrder(previewButton, nullCheckBox);
        QWidget::setTabOrder(nullCheckBox, previewTableWidget);
        QWidget::setTabOrder(previewTableWidget, buttonBox);

        retranslateUi(QgsAttributeLoadValues);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeLoadValues, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeLoadValues, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeLoadValues);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeLoadValues)
    {
        QgsAttributeLoadValues->setWindowTitle(QApplication::translate("QgsAttributeLoadValues", "Load Values from Layer", Q_NULLPTR));
        layerLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Layer", Q_NULLPTR));
        keyLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = previewTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAttributeLoadValues", "Value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = previewTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAttributeLoadValues", "Description", Q_NULLPTR));
        valueTableLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Select data from attributes in selected layer.", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Value", Q_NULLPTR));
        previewButton->setText(QApplication::translate("QgsAttributeLoadValues", "View All", Q_NULLPTR));
        nullCheckBox->setText(QApplication::translate("QgsAttributeLoadValues", "Insert NULL value on top", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeLoadValues: public Ui_QgsAttributeLoadValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTELOADFROMMAP_H
