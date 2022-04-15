/********************************************************************************
** Form generated from reading UI file 'qgspdfexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPDFEXPORTOPTIONS_H
#define UI_QGSPDFEXPORTOPTIONS_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPdfExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mForceVectorCheckBox;
    QCheckBox *mAppendGeoreferenceCheckbox;
    QCheckBox *mIncludeMetadataCheckbox;
    QLabel *label_3;
    QComboBox *mComboImageCompression;
    QgsCollapsibleGroupBoxBasic *mGeoPDFGroupBox;
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *mGeoPDFOptionsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *mGeoPdfUnavailableReason;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QgsCollapsibleGroupBoxBasic *mIncludeMapThemesCheck;
    QVBoxLayout *verticalLayout_4;
    QListWidget *mThemesList;
    QLabel *label;
    QComboBox *mGeoPdfFormatComboBox;
    QGroupBox *mExportGeoPdfFeaturesCheckBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTreeView *mGeoPdfStructureTree;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mDisableRasterTilingCheckBox;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPdfExportOptionsDialog)
    {
        if (QgsPdfExportOptionsDialog->objectName().isEmpty())
            QgsPdfExportOptionsDialog->setObjectName(QStringLiteral("QgsPdfExportOptionsDialog"));
        QgsPdfExportOptionsDialog->resize(489, 730);
        verticalLayout = new QVBoxLayout(QgsPdfExportOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsPdfExportOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        mTextRenderFormatComboBox = new QComboBox(groupBox);
        mTextRenderFormatComboBox->setObjectName(QStringLiteral("mTextRenderFormatComboBox"));

        gridLayout->addWidget(mTextRenderFormatComboBox, 4, 1, 1, 1);

        mForceVectorCheckBox = new QCheckBox(groupBox);
        mForceVectorCheckBox->setObjectName(QStringLiteral("mForceVectorCheckBox"));

        gridLayout->addWidget(mForceVectorCheckBox, 0, 0, 1, 2);

        mAppendGeoreferenceCheckbox = new QCheckBox(groupBox);
        mAppendGeoreferenceCheckbox->setObjectName(QStringLiteral("mAppendGeoreferenceCheckbox"));
        mAppendGeoreferenceCheckbox->setChecked(true);

        gridLayout->addWidget(mAppendGeoreferenceCheckbox, 1, 0, 1, 2);

        mIncludeMetadataCheckbox = new QCheckBox(groupBox);
        mIncludeMetadataCheckbox->setObjectName(QStringLiteral("mIncludeMetadataCheckbox"));
        mIncludeMetadataCheckbox->setChecked(true);

        gridLayout->addWidget(mIncludeMetadataCheckbox, 2, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        mComboImageCompression = new QComboBox(groupBox);
        mComboImageCompression->setObjectName(QStringLiteral("mComboImageCompression"));

        gridLayout->addWidget(mComboImageCompression, 5, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        mGeoPDFGroupBox = new QgsCollapsibleGroupBoxBasic(QgsPdfExportOptionsDialog);
        mGeoPDFGroupBox->setObjectName(QStringLiteral("mGeoPDFGroupBox"));
        mGeoPDFGroupBox->setCheckable(true);
        mGeoPDFGroupBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(mGeoPDFGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mGeoPDFGroupBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -316, 451, 648));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        mGeoPDFOptionsStackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        mGeoPDFOptionsStackedWidget->setObjectName(QStringLiteral("mGeoPDFOptionsStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGeoPDFOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mGeoPDFOptionsStackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mGeoPdfUnavailableReason = new QLabel(page);
        mGeoPdfUnavailableReason->setObjectName(QStringLiteral("mGeoPdfUnavailableReason"));

        verticalLayout_3->addWidget(mGeoPdfUnavailableReason);

        mGeoPDFOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mIncludeMapThemesCheck = new QgsCollapsibleGroupBoxBasic(page_2);
        mIncludeMapThemesCheck->setObjectName(QStringLiteral("mIncludeMapThemesCheck"));
        mIncludeMapThemesCheck->setCheckable(true);
        mIncludeMapThemesCheck->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(mIncludeMapThemesCheck);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mThemesList = new QListWidget(mIncludeMapThemesCheck);
        mThemesList->setObjectName(QStringLiteral("mThemesList"));

        verticalLayout_4->addWidget(mThemesList);


        gridLayout_3->addWidget(mIncludeMapThemesCheck, 2, 0, 1, 2);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        mGeoPdfFormatComboBox = new QComboBox(page_2);
        mGeoPdfFormatComboBox->setObjectName(QStringLiteral("mGeoPdfFormatComboBox"));

        gridLayout_3->addWidget(mGeoPdfFormatComboBox, 1, 1, 1, 1);

        mExportGeoPdfFeaturesCheckBox = new QGroupBox(page_2);
        mExportGeoPdfFeaturesCheckBox->setObjectName(QStringLiteral("mExportGeoPdfFeaturesCheckBox"));
        mExportGeoPdfFeaturesCheckBox->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(mExportGeoPdfFeaturesCheckBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(mExportGeoPdfFeaturesCheckBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_5->addWidget(label_2);

        mGeoPdfStructureTree = new QTreeView(mExportGeoPdfFeaturesCheckBox);
        mGeoPdfStructureTree->setObjectName(QStringLiteral("mGeoPdfStructureTree"));
        mGeoPdfStructureTree->setHeaderHidden(true);

        verticalLayout_5->addWidget(mGeoPdfStructureTree);


        gridLayout_3->addWidget(mExportGeoPdfFeaturesCheckBox, 3, 0, 1, 2);

        gridLayout_3->setRowStretch(2, 2);
        gridLayout_3->setRowStretch(3, 5);
        mGeoPDFOptionsStackedWidget->addWidget(page_2);

        verticalLayout_6->addWidget(mGeoPDFOptionsStackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout->addWidget(mGeoPDFGroupBox);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(QgsPdfExportOptionsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mDisableRasterTilingCheckBox = new QCheckBox(groupBox_2);
        mDisableRasterTilingCheckBox->setObjectName(QStringLiteral("mDisableRasterTilingCheckBox"));
        mDisableRasterTilingCheckBox->setChecked(false);

        gridLayout_2->addWidget(mDisableRasterTilingCheckBox, 0, 0, 1, 2);

        mSimplifyGeometriesCheckbox = new QCheckBox(groupBox_2);
        mSimplifyGeometriesCheckbox->setObjectName(QStringLiteral("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout_2->addWidget(mSimplifyGeometriesCheckbox, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(6, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(QgsPdfExportOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mForceVectorCheckBox, mAppendGeoreferenceCheckbox);
        QWidget::setTabOrder(mAppendGeoreferenceCheckbox, mIncludeMetadataCheckbox);
        QWidget::setTabOrder(mIncludeMetadataCheckbox, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, mComboImageCompression);
        QWidget::setTabOrder(mComboImageCompression, mGeoPDFGroupBox);
        QWidget::setTabOrder(mGeoPDFGroupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mGeoPdfFormatComboBox);
        QWidget::setTabOrder(mGeoPdfFormatComboBox, mIncludeMapThemesCheck);
        QWidget::setTabOrder(mIncludeMapThemesCheck, mThemesList);
        QWidget::setTabOrder(mThemesList, mGeoPdfStructureTree);
        QWidget::setTabOrder(mGeoPdfStructureTree, mDisableRasterTilingCheckBox);
        QWidget::setTabOrder(mDisableRasterTilingCheckBox, mSimplifyGeometriesCheckbox);

        retranslateUi(QgsPdfExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPdfExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPdfExportOptionsDialog, SLOT(reject()));

        mGeoPDFOptionsStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsPdfExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsPdfExportOptionsDialog)
    {
        QgsPdfExportOptionsDialog->setWindowTitle(QApplication::translate("QgsPdfExportOptionsDialog", "PDF Export Options", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Export Options", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Text export", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mForceVectorCheckBox->setToolTip(QApplication::translate("QgsPdfExportOptionsDialog", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mForceVectorCheckBox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Always export as vectors", Q_NULLPTR));
        mAppendGeoreferenceCheckbox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Append georeference information", Q_NULLPTR));
        mIncludeMetadataCheckbox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Export RDF metadata (title, author, etc.)", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Image compression", Q_NULLPTR));
        mGeoPDFGroupBox->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Create Geospatial PDF (GeoPDF)", Q_NULLPTR));
        mGeoPdfUnavailableReason->setText(QString());
        mIncludeMapThemesCheck->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Include multiple map themes", Q_NULLPTR));
        label->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Format", Q_NULLPTR));
        mExportGeoPdfFeaturesCheckBox->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Layer Structure", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Uncheck layers to avoid exporting vector feature information for those layers, and optionally set the group name to allow multiple layers to be joined into a single logical PDF group. Layers can be dragged and dropped to rearrange their order in the generated GeoPDF table of contents.", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Advanced Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDisableRasterTilingCheckBox->setToolTip(QApplication::translate("QgsPdfExportOptionsDialog", "Disables tiled rendering of raster layers. This setting may improve the export quality in some circumstances, at the cost of much greater memory usage during exports.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDisableRasterTilingCheckBox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Disable tiled raster layer exports", Q_NULLPTR));
        mSimplifyGeometriesCheckbox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Simplify geometries to reduce output file size", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsPdfExportOptionsDialog: public Ui_QgsPdfExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPDFEXPORTOPTIONS_H
