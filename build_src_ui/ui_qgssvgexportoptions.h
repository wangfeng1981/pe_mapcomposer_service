/********************************************************************************
** Form generated from reading UI file 'qgssvgexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSVGEXPORTOPTIONS_H
#define UI_QGSSVGEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <qgscollapsiblegroupbox.h>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSvgExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *chkMapLayersAsGroup;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mIncludeMetadataCheckbox;
    QCheckBox *mForceVectorCheckBox;
    QLabel *label_6;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QgsCollapsibleGroupBoxBasic *mClipToContentGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QgsDoubleSpinBox *mTopMarginSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsDoubleSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsDoubleSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mBottomMarginSpinBox;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mDisableRasterTilingCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSvgExportOptionsDialog)
    {
        if (QgsSvgExportOptionsDialog->objectName().isEmpty())
            QgsSvgExportOptionsDialog->setObjectName(QStringLiteral("QgsSvgExportOptionsDialog"));
        QgsSvgExportOptionsDialog->resize(489, 483);
        verticalLayout = new QVBoxLayout(QgsSvgExportOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        chkMapLayersAsGroup = new QCheckBox(groupBox);
        chkMapLayersAsGroup->setObjectName(QStringLiteral("chkMapLayersAsGroup"));
        chkMapLayersAsGroup->setChecked(false);

        gridLayout->addWidget(chkMapLayersAsGroup, 0, 0, 1, 2);

        mTextRenderFormatComboBox = new QComboBox(groupBox);
        mTextRenderFormatComboBox->setObjectName(QStringLiteral("mTextRenderFormatComboBox"));

        gridLayout->addWidget(mTextRenderFormatComboBox, 4, 1, 1, 1);

        mIncludeMetadataCheckbox = new QCheckBox(groupBox);
        mIncludeMetadataCheckbox->setObjectName(QStringLiteral("mIncludeMetadataCheckbox"));
        mIncludeMetadataCheckbox->setChecked(true);

        gridLayout->addWidget(mIncludeMetadataCheckbox, 2, 0, 1, 2);

        mForceVectorCheckBox = new QCheckBox(groupBox);
        mForceVectorCheckBox->setObjectName(QStringLiteral("mForceVectorCheckBox"));

        gridLayout->addWidget(mForceVectorCheckBox, 1, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        mSimplifyGeometriesCheckbox = new QCheckBox(groupBox);
        mSimplifyGeometriesCheckbox->setObjectName(QStringLiteral("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout->addWidget(mSimplifyGeometriesCheckbox, 3, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        mClipToContentGroupBox = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        mClipToContentGroupBox->setObjectName(QStringLiteral("mClipToContentGroupBox"));
        mClipToContentGroupBox->setCheckable(true);
        mClipToContentGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mClipToContentGroupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mTopMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mTopMarginSpinBox->setObjectName(QStringLiteral("mTopMarginSpinBox"));
        mTopMarginSpinBox->setSingleStep(0.1);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(mClipToContentGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mLeftMarginSpinBox->setObjectName(QStringLiteral("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setSingleStep(0.1);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(mClipToContentGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mRightMarginSpinBox->setObjectName(QStringLiteral("mRightMarginSpinBox"));
        mRightMarginSpinBox->setSingleStep(0.1);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(mClipToContentGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        mBottomMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mBottomMarginSpinBox->setObjectName(QStringLiteral("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setSingleStep(0.1);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);

        label_4 = new QLabel(mClipToContentGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout->addWidget(mClipToContentGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mDisableRasterTilingCheckBox = new QCheckBox(groupBox_2);
        mDisableRasterTilingCheckBox->setObjectName(QStringLiteral("mDisableRasterTilingCheckBox"));
        mDisableRasterTilingCheckBox->setChecked(false);

        gridLayout_2->addWidget(mDisableRasterTilingCheckBox, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(QgsSvgExportOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(chkMapLayersAsGroup, mForceVectorCheckBox);
        QWidget::setTabOrder(mForceVectorCheckBox, mIncludeMetadataCheckbox);
        QWidget::setTabOrder(mIncludeMetadataCheckbox, mSimplifyGeometriesCheckbox);
        QWidget::setTabOrder(mSimplifyGeometriesCheckbox, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, mClipToContentGroupBox);
        QWidget::setTabOrder(mClipToContentGroupBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);
        QWidget::setTabOrder(mBottomMarginSpinBox, mDisableRasterTilingCheckBox);

        retranslateUi(QgsSvgExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSvgExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSvgExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSvgExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsSvgExportOptionsDialog)
    {
        QgsSvgExportOptionsDialog->setWindowTitle(QApplication::translate("QgsSvgExportOptionsDialog", "SVG Export Options", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsSvgExportOptionsDialog", "Export Options", Q_NULLPTR));
        chkMapLayersAsGroup->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Export map layers as SVG groups", Q_NULLPTR));
        mIncludeMetadataCheckbox->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Export RDF metadata (title, author, etc.)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mForceVectorCheckBox->setToolTip(QApplication::translate("QgsSvgExportOptionsDialog", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mForceVectorCheckBox->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Always export as vectors", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Text export", Q_NULLPTR));
        mSimplifyGeometriesCheckbox->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Simplify geometries to reduce output file size", Q_NULLPTR));
        mClipToContentGroupBox->setTitle(QApplication::translate("QgsSvgExportOptionsDialog", "Crop to Content", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Left", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Right", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Bottom", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Top margin (mm)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsSvgExportOptionsDialog", "Advanced Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDisableRasterTilingCheckBox->setToolTip(QApplication::translate("QgsSvgExportOptionsDialog", "Disables tiled rendering of raster layers. This setting may improve the export quality in some circumstances, at the cost of much greater memory usage during exports.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDisableRasterTilingCheckBox->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Disable tiled raster layer exports", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsSvgExportOptionsDialog: public Ui_QgsSvgExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSVGEXPORTOPTIONS_H
