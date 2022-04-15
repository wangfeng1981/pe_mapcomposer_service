/********************************************************************************
** Form generated from reading UI file 'qgsnewgeopackagelayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWGEOPACKAGELAYERDIALOGBASE_H
#define UI_QGSNEWGEOPACKAGELAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewGeoPackageLayerDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QDialogButtonBox *buttonBox;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_51;
    QGroupBox *groupBox_3;
    QGridLayout *_2;
    QLineEdit *mFieldNameEdit;
    QComboBox *mFieldTypeBox;
    QLabel *mFieldLengthLabel;
    QLabel *mFieldNameLabel;
    QToolButton *mAddAttributeButton;
    QLabel *mFieldTypeLabel;
    QLineEdit *mFieldLengthEdit;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QgsFileWidget *mDatabase;
    QLabel *mGeometryTypeLabel;
    QLineEdit *mTableNameEdit;
    QLabel *mDatabaseLabel;
    QLabel *mTableNameLabel;
    QComboBox *mGeometryTypeBox;
    QHBoxLayout *horizontalZMLayout;
    QCheckBox *mGeometryWithZCheckBox;
    QCheckBox *mGeometryWithMCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QgsProjectionSelectionWidget *mCrsSelector;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mRemoveAttributeButton;
    QTreeWidget *mAttributeView;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *mLayerIdentifierLabel;
    QLineEdit *mLayerIdentifierEdit;
    QLabel *mLayerDescriptionLabel;
    QLineEdit *mLayerDescriptionEdit;
    QLabel *mFeatureIdLabel;
    QLineEdit *mFeatureIdColumnEdit;
    QLabel *mGeometryColumnLabel;
    QLineEdit *mGeometryColumnEdit;
    QCheckBox *mCheckBoxCreateSpatialIndex;

    void setupUi(QDialog *QgsNewGeoPackageLayerDialogBase)
    {
        if (QgsNewGeoPackageLayerDialogBase->objectName().isEmpty())
            QgsNewGeoPackageLayerDialogBase->setObjectName(QStringLiteral("QgsNewGeoPackageLayerDialogBase"));
        QgsNewGeoPackageLayerDialogBase->resize(548, 686);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewGeoPackageLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewGeoPackageLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewGeoPackageLayerDialogBase->setMinimumSize(QSize(351, 0));
        QgsNewGeoPackageLayerDialogBase->setMaximumSize(QSize(16777215, 16777215));
        QgsNewGeoPackageLayerDialogBase->setModal(true);
        gridLayout_4 = new QGridLayout(QgsNewGeoPackageLayerDialogBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        buttonBox = new QDialogButtonBox(QgsNewGeoPackageLayerDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 9, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsNewGeoPackageLayerDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 514, 663));
        gridLayout_51 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_51->setSpacing(6);
        gridLayout_51->setContentsMargins(11, 11, 11, 11);
        gridLayout_51->setObjectName(QStringLiteral("gridLayout_51"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        _2 = new QGridLayout(groupBox_3);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QStringLiteral("_2"));
        mFieldNameEdit = new QLineEdit(groupBox_3);
        mFieldNameEdit->setObjectName(QStringLiteral("mFieldNameEdit"));

        _2->addWidget(mFieldNameEdit, 0, 1, 1, 3);

        mFieldTypeBox = new QComboBox(groupBox_3);
        mFieldTypeBox->setObjectName(QStringLiteral("mFieldTypeBox"));

        _2->addWidget(mFieldTypeBox, 1, 1, 1, 3);

        mFieldLengthLabel = new QLabel(groupBox_3);
        mFieldLengthLabel->setObjectName(QStringLiteral("mFieldLengthLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFieldLengthLabel->sizePolicy().hasHeightForWidth());
        mFieldLengthLabel->setSizePolicy(sizePolicy1);

        _2->addWidget(mFieldLengthLabel, 2, 0, 1, 1);

        mFieldNameLabel = new QLabel(groupBox_3);
        mFieldNameLabel->setObjectName(QStringLiteral("mFieldNameLabel"));

        _2->addWidget(mFieldNameLabel, 0, 0, 1, 1);

        mAddAttributeButton = new QToolButton(groupBox_3);
        mAddAttributeButton->setObjectName(QStringLiteral("mAddAttributeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy2);
        mAddAttributeButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        _2->addWidget(mAddAttributeButton, 4, 3, 1, 1);

        mFieldTypeLabel = new QLabel(groupBox_3);
        mFieldTypeLabel->setObjectName(QStringLiteral("mFieldTypeLabel"));

        _2->addWidget(mFieldTypeLabel, 1, 0, 1, 1);

        mFieldLengthEdit = new QLineEdit(groupBox_3);
        mFieldLengthEdit->setObjectName(QStringLiteral("mFieldLengthEdit"));

        _2->addWidget(mFieldLengthEdit, 2, 1, 1, 3);


        gridLayout_51->addWidget(groupBox_3, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mDatabase = new QgsFileWidget(scrollAreaWidgetContents);
        mDatabase->setObjectName(QStringLiteral("mDatabase"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mDatabase->sizePolicy().hasHeightForWidth());
        mDatabase->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(mDatabase);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        mGeometryTypeLabel = new QLabel(scrollAreaWidgetContents);
        mGeometryTypeLabel->setObjectName(QStringLiteral("mGeometryTypeLabel"));
        mGeometryTypeLabel->setEnabled(true);

        gridLayout_2->addWidget(mGeometryTypeLabel, 2, 0, 1, 1);

        mTableNameEdit = new QLineEdit(scrollAreaWidgetContents);
        mTableNameEdit->setObjectName(QStringLiteral("mTableNameEdit"));
        sizePolicy3.setHeightForWidth(mTableNameEdit->sizePolicy().hasHeightForWidth());
        mTableNameEdit->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mTableNameEdit, 1, 1, 1, 1);

        mDatabaseLabel = new QLabel(scrollAreaWidgetContents);
        mDatabaseLabel->setObjectName(QStringLiteral("mDatabaseLabel"));
        mDatabaseLabel->setEnabled(true);

        gridLayout_2->addWidget(mDatabaseLabel, 0, 0, 1, 1);

        mTableNameLabel = new QLabel(scrollAreaWidgetContents);
        mTableNameLabel->setObjectName(QStringLiteral("mTableNameLabel"));

        gridLayout_2->addWidget(mTableNameLabel, 1, 0, 1, 1);

        mGeometryTypeBox = new QComboBox(scrollAreaWidgetContents);
        mGeometryTypeBox->setObjectName(QStringLiteral("mGeometryTypeBox"));
        mGeometryTypeBox->setEnabled(true);
        sizePolicy3.setHeightForWidth(mGeometryTypeBox->sizePolicy().hasHeightForWidth());
        mGeometryTypeBox->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mGeometryTypeBox, 2, 1, 1, 1);

        horizontalZMLayout = new QHBoxLayout();
        horizontalZMLayout->setSpacing(6);
        horizontalZMLayout->setObjectName(QStringLiteral("horizontalZMLayout"));
        mGeometryWithZCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mGeometryWithZCheckBox->setObjectName(QStringLiteral("mGeometryWithZCheckBox"));

        horizontalZMLayout->addWidget(mGeometryWithZCheckBox);

        mGeometryWithMCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mGeometryWithMCheckBox->setObjectName(QStringLiteral("mGeometryWithMCheckBox"));

        horizontalZMLayout->addWidget(mGeometryWithMCheckBox);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalZMLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalZMLayout, 3, 1, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(scrollAreaWidgetContents);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mCrsSelector, 4, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_2, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QStringLiteral("mRemoveAttributeButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy4);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon1);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(mRemoveAttributeButton, 2, 1, 1, 2);

        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QStringLiteral("mAttributeView"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy5);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(3);

        gridLayout_3->addWidget(mAttributeView, 1, 0, 1, 3);


        gridLayout_51->addWidget(groupBox_2, 4, 0, 1, 1);

        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mLayerIdentifierLabel = new QLabel(groupBox);
        mLayerIdentifierLabel->setObjectName(QStringLiteral("mLayerIdentifierLabel"));

        gridLayout_5->addWidget(mLayerIdentifierLabel, 1, 0, 1, 1);

        mLayerIdentifierEdit = new QLineEdit(groupBox);
        mLayerIdentifierEdit->setObjectName(QStringLiteral("mLayerIdentifierEdit"));
        sizePolicy3.setHeightForWidth(mLayerIdentifierEdit->sizePolicy().hasHeightForWidth());
        mLayerIdentifierEdit->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mLayerIdentifierEdit, 1, 2, 1, 1);

        mLayerDescriptionLabel = new QLabel(groupBox);
        mLayerDescriptionLabel->setObjectName(QStringLiteral("mLayerDescriptionLabel"));

        gridLayout_5->addWidget(mLayerDescriptionLabel, 2, 0, 1, 1);

        mLayerDescriptionEdit = new QLineEdit(groupBox);
        mLayerDescriptionEdit->setObjectName(QStringLiteral("mLayerDescriptionEdit"));
        sizePolicy3.setHeightForWidth(mLayerDescriptionEdit->sizePolicy().hasHeightForWidth());
        mLayerDescriptionEdit->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mLayerDescriptionEdit, 2, 2, 1, 1);

        mFeatureIdLabel = new QLabel(groupBox);
        mFeatureIdLabel->setObjectName(QStringLiteral("mFeatureIdLabel"));

        gridLayout_5->addWidget(mFeatureIdLabel, 3, 0, 1, 1);

        mFeatureIdColumnEdit = new QLineEdit(groupBox);
        mFeatureIdColumnEdit->setObjectName(QStringLiteral("mFeatureIdColumnEdit"));
        sizePolicy3.setHeightForWidth(mFeatureIdColumnEdit->sizePolicy().hasHeightForWidth());
        mFeatureIdColumnEdit->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mFeatureIdColumnEdit, 3, 2, 1, 1);

        mGeometryColumnLabel = new QLabel(groupBox);
        mGeometryColumnLabel->setObjectName(QStringLiteral("mGeometryColumnLabel"));

        gridLayout_5->addWidget(mGeometryColumnLabel, 4, 0, 1, 1);

        mGeometryColumnEdit = new QLineEdit(groupBox);
        mGeometryColumnEdit->setObjectName(QStringLiteral("mGeometryColumnEdit"));
        sizePolicy3.setHeightForWidth(mGeometryColumnEdit->sizePolicy().hasHeightForWidth());
        mGeometryColumnEdit->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mGeometryColumnEdit, 4, 2, 1, 1);

        mCheckBoxCreateSpatialIndex = new QCheckBox(groupBox);
        mCheckBoxCreateSpatialIndex->setObjectName(QStringLiteral("mCheckBoxCreateSpatialIndex"));

        gridLayout_5->addWidget(mCheckBoxCreateSpatialIndex, 5, 2, 1, 1);


        gridLayout_51->addWidget(groupBox, 5, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mFieldNameLabel->setBuddy(mFieldNameEdit);
        mFieldTypeLabel->setBuddy(mFieldTypeBox);
        mTableNameLabel->setBuddy(mLayerIdentifierEdit);
        mLayerIdentifierLabel->setBuddy(mLayerIdentifierEdit);
        mLayerDescriptionLabel->setBuddy(mLayerIdentifierEdit);
        mFeatureIdLabel->setBuddy(mGeometryColumnEdit);
        mGeometryColumnLabel->setBuddy(mGeometryColumnEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, mTableNameEdit);
        QWidget::setTabOrder(mTableNameEdit, mGeometryTypeBox);
        QWidget::setTabOrder(mGeometryTypeBox, mGeometryWithZCheckBox);
        QWidget::setTabOrder(mGeometryWithZCheckBox, mGeometryWithMCheckBox);
        QWidget::setTabOrder(mGeometryWithMCheckBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mFieldNameEdit);
        QWidget::setTabOrder(mFieldNameEdit, mFieldTypeBox);
        QWidget::setTabOrder(mFieldTypeBox, mFieldLengthEdit);
        QWidget::setTabOrder(mFieldLengthEdit, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
        QWidget::setTabOrder(mAttributeView, mRemoveAttributeButton);
        QWidget::setTabOrder(mRemoveAttributeButton, mLayerIdentifierEdit);
        QWidget::setTabOrder(mLayerIdentifierEdit, mLayerDescriptionEdit);
        QWidget::setTabOrder(mLayerDescriptionEdit, mFeatureIdColumnEdit);
        QWidget::setTabOrder(mFeatureIdColumnEdit, mGeometryColumnEdit);
        QWidget::setTabOrder(mGeometryColumnEdit, mCheckBoxCreateSpatialIndex);

        retranslateUi(QgsNewGeoPackageLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewGeoPackageLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewGeoPackageLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewGeoPackageLayerDialogBase)
    {
        QgsNewGeoPackageLayerDialogBase->setWindowTitle(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "New GeoPackage Layer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "New Field", Q_NULLPTR));
        mFieldLengthLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Maximum length", Q_NULLPTR));
        mFieldNameLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddAttributeButton->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Add field to list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddAttributeButton->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Add to Fields List", Q_NULLPTR));
        mFieldTypeLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFieldLengthEdit->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Field length / width</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mDatabase->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Existing or new GeoPackage database file name</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mGeometryTypeLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Geometry type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTableNameEdit->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Table name in the database</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDatabaseLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Database", Q_NULLPTR));
        mTableNameLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Table name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mGeometryTypeBox->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Geometry type</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mGeometryWithZCheckBox->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Include Z dimension", Q_NULLPTR));
        mGeometryWithMCheckBox->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Include M values", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Fields List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRemoveAttributeButton->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Delete selected field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveAttributeButton->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Remove Field", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Length", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Type", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Name", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Advanced Options", Q_NULLPTR));
        mLayerIdentifierLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Layer identifier", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerIdentifierEdit->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Human-readable identifier (e.g. short name) for the layer content</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDescriptionLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Layer description", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerDescriptionEdit->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Human-readable description for the layer content</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFeatureIdLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Feature id column", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFeatureIdColumnEdit->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Name of the feature id column</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mGeometryColumnLabel->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Geometry column", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mGeometryColumnEdit->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Name of the geometry column</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mCheckBoxCreateSpatialIndex->setToolTip(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Create a spatial index for this layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxCreateSpatialIndex->setText(QApplication::translate("QgsNewGeoPackageLayerDialogBase", "Create a spatial index", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsNewGeoPackageLayerDialogBase: public Ui_QgsNewGeoPackageLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWGEOPACKAGELAYERDIALOGBASE_H
