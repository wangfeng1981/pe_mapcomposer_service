/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayersaveasdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
#define UI_QGSVECTORLAYERSAVEASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerSaveAsDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *mCrsLabel;
    QgsFileWidget *mFilename;
    QLabel *label_2;
    QComboBox *mFormatComboBox;
    QLabel *label;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_7;
    QLineEdit *leLayername;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *mEncodingComboBox;
    QCheckBox *mSelectedOnly;
    QgsCollapsibleGroupBox *mAttributesSelection;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *mAttributeTable;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mSelectAllAttributes;
    QPushButton *mDeselectAllAttributes;
    QCheckBox *mReplaceRawFieldValues;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSymbologyExportLabel;
    QComboBox *mSymbologyExportComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mScaleLabel;
    QgsScaleWidget *mScaleWidget;
    QgsCollapsibleGroupBox *mGeometryGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mSymbologyExportLabel_2;
    QComboBox *mGeometryTypeComboBox;
    QCheckBox *mForceMultiCheckBox;
    QCheckBox *mIncludeZCheckBox;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *mDatasourceOptionsGroupBox;
    QFormLayout *formLayout;
    QgsCollapsibleGroupBox *mLayerOptionsGroupBox;
    QFormLayout *formLayout_2;
    QgsCollapsibleGroupBox *mOgrOptionsGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QTextEdit *mOgrDatasourceOptions;
    QLabel *label_6;
    QTextEdit *mOgrLayerOptions;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout1;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mAddToCanvas;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        if (QgsVectorLayerSaveAsDialogBase->objectName().isEmpty())
            QgsVectorLayerSaveAsDialogBase->setObjectName(QStringLiteral("QgsVectorLayerSaveAsDialogBase"));
        QgsVectorLayerSaveAsDialogBase->resize(591, 632);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsVectorLayerSaveAsDialogBase->sizePolicy().hasHeightForWidth());
        QgsVectorLayerSaveAsDialogBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsVectorLayerSaveAsDialogBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(QgsVectorLayerSaveAsDialogBase);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mCrsLabel = new QLabel(widget);
        mCrsLabel->setObjectName(QStringLiteral("mCrsLabel"));

        gridLayout_4->addWidget(mCrsLabel, 3, 0, 1, 1);

        mFilename = new QgsFileWidget(widget);
        mFilename->setObjectName(QStringLiteral("mFilename"));
        mFilename->setEnabled(false);

        gridLayout_4->addWidget(mFilename, 1, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        mFormatComboBox = new QComboBox(widget);
        mFormatComboBox->setObjectName(QStringLiteral("mFormatComboBox"));

        gridLayout_4->addWidget(mFormatComboBox, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(widget);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 3, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        leLayername = new QLineEdit(widget);
        leLayername->setObjectName(QStringLiteral("leLayername"));
        leLayername->setEnabled(false);

        gridLayout_4->addWidget(leLayername, 2, 2, 1, 1);


        verticalLayout_2->addWidget(widget);

        scrollArea = new QgsScrollArea(QgsVectorLayerSaveAsDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -303, 557, 1004));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        mEncodingComboBox = new QComboBox(scrollAreaWidgetContents);
        mEncodingComboBox->setObjectName(QStringLiteral("mEncodingComboBox"));

        horizontalLayout_3->addWidget(mEncodingComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        mSelectedOnly = new QCheckBox(scrollAreaWidgetContents);
        mSelectedOnly->setObjectName(QStringLiteral("mSelectedOnly"));

        verticalLayout->addWidget(mSelectedOnly);

        mAttributesSelection = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mAttributesSelection->setObjectName(QStringLiteral("mAttributesSelection"));
        mAttributesSelection->setCheckable(false);
        mAttributesSelection->setChecked(false);
        mAttributesSelection->setProperty("collapsed", QVariant(true));
        verticalLayout_4 = new QVBoxLayout(mAttributesSelection);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mAttributeTable = new QTableWidget(mAttributesSelection);
        if (mAttributeTable->columnCount() < 2)
            mAttributeTable->setColumnCount(2);
        if (mAttributeTable->rowCount() < 1)
            mAttributeTable->setRowCount(1);
        mAttributeTable->setObjectName(QStringLiteral("mAttributeTable"));
        mAttributeTable->setMinimumSize(QSize(0, 200));
        mAttributeTable->setRowCount(1);
        mAttributeTable->setColumnCount(2);
        mAttributeTable->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(mAttributeTable);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mSelectAllAttributes = new QPushButton(mAttributesSelection);
        mSelectAllAttributes->setObjectName(QStringLiteral("mSelectAllAttributes"));

        horizontalLayout_5->addWidget(mSelectAllAttributes);

        mDeselectAllAttributes = new QPushButton(mAttributesSelection);
        mDeselectAllAttributes->setObjectName(QStringLiteral("mDeselectAllAttributes"));

        horizontalLayout_5->addWidget(mDeselectAllAttributes);


        verticalLayout_4->addLayout(horizontalLayout_5);

        mReplaceRawFieldValues = new QCheckBox(mAttributesSelection);
        mReplaceRawFieldValues->setObjectName(QStringLiteral("mReplaceRawFieldValues"));

        verticalLayout_4->addWidget(mReplaceRawFieldValues);


        verticalLayout->addWidget(mAttributesSelection);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mSymbologyExportLabel = new QLabel(scrollAreaWidgetContents);
        mSymbologyExportLabel->setObjectName(QStringLiteral("mSymbologyExportLabel"));

        horizontalLayout_2->addWidget(mSymbologyExportLabel);

        mSymbologyExportComboBox = new QComboBox(scrollAreaWidgetContents);
        mSymbologyExportComboBox->setObjectName(QStringLiteral("mSymbologyExportComboBox"));

        horizontalLayout_2->addWidget(mSymbologyExportComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mScaleLabel = new QLabel(scrollAreaWidgetContents);
        mScaleLabel->setObjectName(QStringLiteral("mScaleLabel"));

        horizontalLayout->addWidget(mScaleLabel);

        mScaleWidget = new QgsScaleWidget(scrollAreaWidgetContents);
        mScaleWidget->setObjectName(QStringLiteral("mScaleWidget"));
        mScaleWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mScaleWidget);


        verticalLayout->addLayout(horizontalLayout);

        mGeometryGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mGeometryGroupBox->setObjectName(QStringLiteral("mGeometryGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mGeometryGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mSymbologyExportLabel_2 = new QLabel(mGeometryGroupBox);
        mSymbologyExportLabel_2->setObjectName(QStringLiteral("mSymbologyExportLabel_2"));

        horizontalLayout_4->addWidget(mSymbologyExportLabel_2);

        mGeometryTypeComboBox = new QComboBox(mGeometryGroupBox);
        mGeometryTypeComboBox->setObjectName(QStringLiteral("mGeometryTypeComboBox"));

        horizontalLayout_4->addWidget(mGeometryTypeComboBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        mForceMultiCheckBox = new QCheckBox(mGeometryGroupBox);
        mForceMultiCheckBox->setObjectName(QStringLiteral("mForceMultiCheckBox"));

        verticalLayout_3->addWidget(mForceMultiCheckBox);

        mIncludeZCheckBox = new QCheckBox(mGeometryGroupBox);
        mIncludeZCheckBox->setObjectName(QStringLiteral("mIncludeZCheckBox"));

        verticalLayout_3->addWidget(mIncludeZCheckBox);


        verticalLayout->addWidget(mGeometryGroupBox);

        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QStringLiteral("mExtentGroupBox"));

        verticalLayout->addWidget(mExtentGroupBox);

        mDatasourceOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDatasourceOptionsGroupBox->setObjectName(QStringLiteral("mDatasourceOptionsGroupBox"));
        formLayout = new QFormLayout(mDatasourceOptionsGroupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addWidget(mDatasourceOptionsGroupBox);

        mLayerOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mLayerOptionsGroupBox->setObjectName(QStringLiteral("mLayerOptionsGroupBox"));
        formLayout_2 = new QFormLayout(mLayerOptionsGroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addWidget(mLayerOptionsGroupBox);

        mOgrOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mOgrOptionsGroupBox->setObjectName(QStringLiteral("mOgrOptionsGroupBox"));
        mOgrOptionsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mOgrOptionsGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(mOgrOptionsGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        mOgrDatasourceOptions = new QTextEdit(mOgrOptionsGroupBox);
        mOgrDatasourceOptions->setObjectName(QStringLiteral("mOgrDatasourceOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOgrDatasourceOptions->sizePolicy().hasHeightForWidth());
        mOgrDatasourceOptions->setSizePolicy(sizePolicy1);
        mOgrDatasourceOptions->setMinimumSize(QSize(0, 0));
        mOgrDatasourceOptions->setMaximumSize(QSize(16777215, 16777215));
        mOgrDatasourceOptions->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(mOgrDatasourceOptions, 0, 1, 1, 1);

        label_6 = new QLabel(mOgrOptionsGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        mOgrLayerOptions = new QTextEdit(mOgrOptionsGroupBox);
        mOgrLayerOptions->setObjectName(QStringLiteral("mOgrLayerOptions"));
        sizePolicy1.setHeightForWidth(mOgrLayerOptions->sizePolicy().hasHeightForWidth());
        mOgrLayerOptions->setSizePolicy(sizePolicy1);
        mOgrLayerOptions->setMinimumSize(QSize(0, 0));
        mOgrLayerOptions->setMaximumSize(QSize(16777215, 16777215));
        mOgrLayerOptions->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(mOgrLayerOptions, 1, 1, 1, 1);

        label_6->raise();
        label_5->raise();
        mOgrDatasourceOptions->raise();
        mOgrLayerOptions->raise();

        verticalLayout->addWidget(mOgrOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        mHelpButtonBox = new QDialogButtonBox(QgsVectorLayerSaveAsDialogBase);
        mHelpButtonBox->setObjectName(QStringLiteral("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout1->addWidget(mHelpButtonBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);

        mAddToCanvas = new QCheckBox(QgsVectorLayerSaveAsDialogBase);
        mAddToCanvas->setObjectName(QStringLiteral("mAddToCanvas"));
        mAddToCanvas->setChecked(true);

        horizontalLayout1->addWidget(mAddToCanvas);

        mButtonBox = new QDialogButtonBox(QgsVectorLayerSaveAsDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout1->addWidget(mButtonBox);


        verticalLayout_2->addLayout(horizontalLayout1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(mFormatComboBox);
        label->setBuddy(mFilename);
        label_7->setBuddy(leLayername);
        label_4->setBuddy(mEncodingComboBox);
        label_5->setBuddy(mOgrDatasourceOptions);
        label_6->setBuddy(mOgrLayerOptions);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mFormatComboBox, leLayername);
        QWidget::setTabOrder(leLayername, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);
        QWidget::setTabOrder(scrollArea, mEncodingComboBox);
        QWidget::setTabOrder(mEncodingComboBox, mSelectedOnly);
        QWidget::setTabOrder(mSelectedOnly, mAttributeTable);
        QWidget::setTabOrder(mAttributeTable, mSelectAllAttributes);
        QWidget::setTabOrder(mSelectAllAttributes, mDeselectAllAttributes);
        QWidget::setTabOrder(mDeselectAllAttributes, mReplaceRawFieldValues);
        QWidget::setTabOrder(mReplaceRawFieldValues, mSymbologyExportComboBox);
        QWidget::setTabOrder(mSymbologyExportComboBox, mScaleWidget);
        QWidget::setTabOrder(mScaleWidget, mGeometryTypeComboBox);
        QWidget::setTabOrder(mGeometryTypeComboBox, mForceMultiCheckBox);
        QWidget::setTabOrder(mForceMultiCheckBox, mIncludeZCheckBox);
        QWidget::setTabOrder(mIncludeZCheckBox, mOgrDatasourceOptions);
        QWidget::setTabOrder(mOgrDatasourceOptions, mOgrLayerOptions);
        QWidget::setTabOrder(mOgrLayerOptions, mAddToCanvas);

        retranslateUi(QgsVectorLayerSaveAsDialogBase);

        QMetaObject::connectSlotsByName(QgsVectorLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        QgsVectorLayerSaveAsDialogBase->setWindowTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save Vector Layer as\342\200\246", Q_NULLPTR));
        mCrsLabel->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "CRS", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Format", Q_NULLPTR));
        label->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "File name", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer name", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Encoding", Q_NULLPTR));
        mSelectedOnly->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save only selected features", Q_NULLPTR));
        mAttributesSelection->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Select fields to export and their export options", Q_NULLPTR));
        mSelectAllAttributes->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Select All", Q_NULLPTR));
        mDeselectAllAttributes->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Deselect All", Q_NULLPTR));
        mReplaceRawFieldValues->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Replace all selected raw field values by displayed values", Q_NULLPTR));
        mSymbologyExportLabel->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Symbology export", Q_NULLPTR));
        mScaleLabel->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Scale", Q_NULLPTR));
        mGeometryGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Geometry", Q_NULLPTR));
        mSymbologyExportLabel_2->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Geometry type", Q_NULLPTR));
        mForceMultiCheckBox->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Force multi-type", Q_NULLPTR));
        mIncludeZCheckBox->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Include z-dimension", Q_NULLPTR));
        mExtentGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Extent", Q_NULLPTR));
        mDatasourceOptionsGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Datasource Options", Q_NULLPTR));
        mLayerOptionsGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer Options", Q_NULLPTR));
        mOgrOptionsGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Custom Options", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Data source", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer", Q_NULLPTR));
        mAddToCanvas->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Add saved file to map", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerSaveAsDialogBase: public Ui_QgsVectorLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
