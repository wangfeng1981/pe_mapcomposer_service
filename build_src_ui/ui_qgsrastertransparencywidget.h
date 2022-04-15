/********************************************************************************
** Form generated from reading UI file 'qgsrastertransparencywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERTRANSPARENCYWIDGET_H
#define UI_QGSRASTERTRANSPARENCYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qgsrasterbandcombobox.h>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterTransparencyWidget
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *gboxGlobalTransp;
    QGridLayout *_3;
    QgsOpacityWidget *mOpacityWidget;
    QgsCollapsibleGroupBox *gboxNoDataValue;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QLabel *lblUserNoDataValueLabel;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mSrcNoDataValueCheckBox;
    QLabel *lblSrcNoDataValue;
    QLineEdit *leNoDataValue;
    QgsColorButton *mNodataColorButton;
    QgsCollapsibleGroupBox *gboxCustomTransparency;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QTableWidget *tableTransparency;
    QHBoxLayout *horizontalLayout;
    QToolButton *pbnExportTransparentPixelValues;
    QSpacerItem *horizontalSpacer;
    QToolButton *pbnImportTransparentPixelValues;
    QToolButton *pbnDefaultValues;
    QToolButton *pbnRemoveSelectedRow;
    QToolButton *pbnAddValuesFromDisplay;
    QToolButton *pbnAddValuesManually;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblTransparent;
    QgsRasterBandComboBox *cboxTransparencyBand;

    void setupUi(QWidget *QgsRasterTransparencyWidget)
    {
        if (QgsRasterTransparencyWidget->objectName().isEmpty())
            QgsRasterTransparencyWidget->setObjectName(QStringLiteral("QgsRasterTransparencyWidget"));
        QgsRasterTransparencyWidget->resize(306, 623);
        QgsRasterTransparencyWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsRasterTransparencyWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gboxGlobalTransp = new QgsCollapsibleGroupBox(QgsRasterTransparencyWidget);
        gboxGlobalTransp->setObjectName(QStringLiteral("gboxGlobalTransp"));
        gboxGlobalTransp->setFlat(true);
        gboxGlobalTransp->setProperty("syncGroup", QVariant(QStringLiteral("rastertransp")));
        _3 = new QGridLayout(gboxGlobalTransp);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(3, 3, 3, 3);
        mOpacityWidget = new QgsOpacityWidget(gboxGlobalTransp);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        _3->addWidget(mOpacityWidget, 0, 0, 1, 1);


        gridLayout->addWidget(gboxGlobalTransp, 0, 0, 1, 1);

        gboxNoDataValue = new QgsCollapsibleGroupBox(QgsRasterTransparencyWidget);
        gboxNoDataValue->setObjectName(QStringLiteral("gboxNoDataValue"));
        gboxNoDataValue->setFlat(true);
        gboxNoDataValue->setProperty("syncGroup", QVariant(QStringLiteral("rastertransp")));
        gridLayout_11 = new QGridLayout(gboxNoDataValue);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label = new QLabel(gboxNoDataValue);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_11->addWidget(label, 2, 0, 1, 1);

        lblUserNoDataValueLabel = new QLabel(gboxNoDataValue);
        lblUserNoDataValueLabel->setObjectName(QStringLiteral("lblUserNoDataValueLabel"));

        gridLayout_11->addWidget(lblUserNoDataValueLabel, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, -1, -1, -1);
        mSrcNoDataValueCheckBox = new QCheckBox(gboxNoDataValue);
        mSrcNoDataValueCheckBox->setObjectName(QStringLiteral("mSrcNoDataValueCheckBox"));

        horizontalLayout_5->addWidget(mSrcNoDataValueCheckBox);

        lblSrcNoDataValue = new QLabel(gboxNoDataValue);
        lblSrcNoDataValue->setObjectName(QStringLiteral("lblSrcNoDataValue"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblSrcNoDataValue->sizePolicy().hasHeightForWidth());
        lblSrcNoDataValue->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lblSrcNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        leNoDataValue = new QLineEdit(gboxNoDataValue);
        leNoDataValue->setObjectName(QStringLiteral("leNoDataValue"));

        gridLayout_11->addWidget(leNoDataValue, 1, 1, 1, 1);

        mNodataColorButton = new QgsColorButton(gboxNoDataValue);
        mNodataColorButton->setObjectName(QStringLiteral("mNodataColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNodataColorButton->sizePolicy().hasHeightForWidth());
        mNodataColorButton->setSizePolicy(sizePolicy1);
        mNodataColorButton->setMinimumSize(QSize(120, 0));
        mNodataColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_11->addWidget(mNodataColorButton, 2, 1, 1, 1);


        gridLayout->addWidget(gboxNoDataValue, 1, 0, 1, 1);

        gboxCustomTransparency = new QgsCollapsibleGroupBox(QgsRasterTransparencyWidget);
        gboxCustomTransparency->setObjectName(QStringLiteral("gboxCustomTransparency"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(gboxCustomTransparency->sizePolicy().hasHeightForWidth());
        gboxCustomTransparency->setSizePolicy(sizePolicy2);
        gboxCustomTransparency->setFlat(true);
        gboxCustomTransparency->setProperty("syncGroup", QVariant(QStringLiteral("rastertransp")));
        gridLayout_3 = new QGridLayout(gboxCustomTransparency);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, -1, -1, -1);
        label_6 = new QLabel(gboxCustomTransparency);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        tableTransparency = new QTableWidget(gboxCustomTransparency);
        tableTransparency->setObjectName(QStringLiteral("tableTransparency"));
        tableTransparency->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableTransparency->setAlternatingRowColors(true);
        tableTransparency->setSelectionMode(QAbstractItemView::SingleSelection);
        tableTransparency->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableTransparency->setShowGrid(false);
        tableTransparency->setRowCount(0);
        tableTransparency->setColumnCount(0);
        tableTransparency->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableTransparency, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 6, 0, 6);
        pbnExportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnExportTransparentPixelValues->setObjectName(QStringLiteral("pbnExportTransparentPixelValues"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportTransparentPixelValues->setIcon(icon);

        horizontalLayout->addWidget(pbnExportTransparentPixelValues);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbnImportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnImportTransparentPixelValues->setObjectName(QStringLiteral("pbnImportTransparentPixelValues"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportTransparentPixelValues->setIcon(icon1);

        horizontalLayout->addWidget(pbnImportTransparentPixelValues);

        pbnDefaultValues = new QToolButton(gboxCustomTransparency);
        pbnDefaultValues->setObjectName(QStringLiteral("pbnDefaultValues"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultValues->setIcon(icon2);

        horizontalLayout->addWidget(pbnDefaultValues);

        pbnRemoveSelectedRow = new QToolButton(gboxCustomTransparency);
        pbnRemoveSelectedRow->setObjectName(QStringLiteral("pbnRemoveSelectedRow"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveSelectedRow->setIcon(icon3);

        horizontalLayout->addWidget(pbnRemoveSelectedRow);

        pbnAddValuesFromDisplay = new QToolButton(gboxCustomTransparency);
        pbnAddValuesFromDisplay->setObjectName(QStringLiteral("pbnAddValuesFromDisplay"));
        pbnAddValuesFromDisplay->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionContextHelp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesFromDisplay->setIcon(icon4);

        horizontalLayout->addWidget(pbnAddValuesFromDisplay);

        pbnAddValuesManually = new QToolButton(gboxCustomTransparency);
        pbnAddValuesManually->setObjectName(QStringLiteral("pbnAddValuesManually"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesManually->setIcon(icon5);

        horizontalLayout->addWidget(pbnAddValuesManually);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblTransparent = new QLabel(gboxCustomTransparency);
        lblTransparent->setObjectName(QStringLiteral("lblTransparent"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblTransparent->sizePolicy().hasHeightForWidth());
        lblTransparent->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(lblTransparent);

        cboxTransparencyBand = new QgsRasterBandComboBox(gboxCustomTransparency);
        cboxTransparencyBand->setObjectName(QStringLiteral("cboxTransparencyBand"));
        cboxTransparencyBand->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cboxTransparencyBand->sizePolicy().hasHeightForWidth());
        cboxTransparencyBand->setSizePolicy(sizePolicy4);
        cboxTransparencyBand->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(cboxTransparencyBand);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        gridLayout->addWidget(gboxCustomTransparency, 2, 0, 1, 1);

        QWidget::setTabOrder(mOpacityWidget, mSrcNoDataValueCheckBox);
        QWidget::setTabOrder(mSrcNoDataValueCheckBox, leNoDataValue);
        QWidget::setTabOrder(leNoDataValue, mNodataColorButton);
        QWidget::setTabOrder(mNodataColorButton, cboxTransparencyBand);
        QWidget::setTabOrder(cboxTransparencyBand, pbnExportTransparentPixelValues);
        QWidget::setTabOrder(pbnExportTransparentPixelValues, pbnImportTransparentPixelValues);
        QWidget::setTabOrder(pbnImportTransparentPixelValues, pbnDefaultValues);
        QWidget::setTabOrder(pbnDefaultValues, pbnRemoveSelectedRow);
        QWidget::setTabOrder(pbnRemoveSelectedRow, pbnAddValuesFromDisplay);
        QWidget::setTabOrder(pbnAddValuesFromDisplay, pbnAddValuesManually);
        QWidget::setTabOrder(pbnAddValuesManually, tableTransparency);

        retranslateUi(QgsRasterTransparencyWidget);

        QMetaObject::connectSlotsByName(QgsRasterTransparencyWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterTransparencyWidget)
    {
        gboxGlobalTransp->setTitle(QApplication::translate("QgsRasterTransparencyWidget", "Global Opacity", Q_NULLPTR));
        gboxNoDataValue->setTitle(QApplication::translate("QgsRasterTransparencyWidget", "No Data Value", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRasterTransparencyWidget", "Display no data as", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblUserNoDataValueLabel->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Additional user defined no data value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblUserNoDataValueLabel->setText(QApplication::translate("QgsRasterTransparencyWidget", "Additional no data value", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSrcNoDataValueCheckBox->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Use original source no data value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSrcNoDataValueCheckBox->setText(QApplication::translate("QgsRasterTransparencyWidget", "No data value", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblSrcNoDataValue->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Original data source no data value, if exists.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblSrcNoDataValue->setText(QApplication::translate("QgsRasterTransparencyWidget", "<src no data value>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leNoDataValue->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Additional user defined no data value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNodataColorButton->setText(QString());
        gboxCustomTransparency->setTitle(QApplication::translate("QgsRasterTransparencyWidget", "Custom Transparency Options", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsRasterTransparencyWidget", "Transparent Pixel List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Export to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setText(QApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Import from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setText(QApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnDefaultValues->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Default values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnDefaultValues->setText(QApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Remove selected row", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setText(QApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Add values from display", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setText(QApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesManually->setToolTip(QApplication::translate("QgsRasterTransparencyWidget", "Add values manually", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAddValuesManually->setText(QApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", Q_NULLPTR));
        lblTransparent->setText(QApplication::translate("QgsRasterTransparencyWidget", "Transparency band", Q_NULLPTR));
        Q_UNUSED(QgsRasterTransparencyWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterTransparencyWidget: public Ui_QgsRasterTransparencyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERTRANSPARENCYWIDGET_H
