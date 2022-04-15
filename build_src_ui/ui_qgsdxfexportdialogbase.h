/********************************************************************************
** Form generated from reading UI file 'qgsdxfexportdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDXFEXPORTDIALOGBASE_H
#define UI_QGSDXFEXPORTDIALOGBASE_H

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
#include <QtWidgets/QSpacerItem>
#include "qgsfilewidget.h"
#include "qgslayertreeview.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDxfExportDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *mSymbologyModeLabel;
    QLabel *mSaveAsLabel;
    QComboBox *mSymbologyModeComboBox;
    QLabel *mSymbologyScaleLabel;
    QComboBox *mEncoding;
    QgsLayerTreeView *mTreeView;
    QgsScaleWidget *mScaleWidget;
    QgsProjectionSelectionWidget *mCrsSelector;
    QComboBox *mVisibilityPresets;
    QgsFileWidget *mFileName;
    QLabel *label_3;
    QGridLayout *gridLayout_3;
    QPushButton *mSelectAllButton;
    QPushButton *mDeselectAllButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *mSymbologyScaleLabel_2;
    QGridLayout *gridLayout;
    QCheckBox *mMapExtentCheckBox;
    QCheckBox *mLayerTitleAsName;
    QCheckBox *mForce2d;
    QCheckBox *mMTextCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDxfExportDialogBase)
    {
        if (QgsDxfExportDialogBase->objectName().isEmpty())
            QgsDxfExportDialogBase->setObjectName(QStringLiteral("QgsDxfExportDialogBase"));
        QgsDxfExportDialogBase->resize(698, 680);
        gridLayout_2 = new QGridLayout(QgsDxfExportDialogBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mSymbologyModeLabel = new QLabel(QgsDxfExportDialogBase);
        mSymbologyModeLabel->setObjectName(QStringLiteral("mSymbologyModeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSymbologyModeLabel->sizePolicy().hasHeightForWidth());
        mSymbologyModeLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSymbologyModeLabel, 1, 0, 1, 1);

        mSaveAsLabel = new QLabel(QgsDxfExportDialogBase);
        mSaveAsLabel->setObjectName(QStringLiteral("mSaveAsLabel"));
        sizePolicy.setHeightForWidth(mSaveAsLabel->sizePolicy().hasHeightForWidth());
        mSaveAsLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSaveAsLabel, 0, 0, 1, 1);

        mSymbologyModeComboBox = new QComboBox(QgsDxfExportDialogBase);
        mSymbologyModeComboBox->setObjectName(QStringLiteral("mSymbologyModeComboBox"));

        gridLayout_2->addWidget(mSymbologyModeComboBox, 1, 1, 1, 1);

        mSymbologyScaleLabel = new QLabel(QgsDxfExportDialogBase);
        mSymbologyScaleLabel->setObjectName(QStringLiteral("mSymbologyScaleLabel"));
        sizePolicy.setHeightForWidth(mSymbologyScaleLabel->sizePolicy().hasHeightForWidth());
        mSymbologyScaleLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSymbologyScaleLabel, 2, 0, 1, 1);

        mEncoding = new QComboBox(QgsDxfExportDialogBase);
        mEncoding->setObjectName(QStringLiteral("mEncoding"));

        gridLayout_2->addWidget(mEncoding, 3, 1, 1, 1);

        mTreeView = new QgsLayerTreeView(QgsDxfExportDialogBase);
        mTreeView->setObjectName(QStringLiteral("mTreeView"));
        mTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mTreeView->header()->setDefaultSectionSize(0);

        gridLayout_2->addWidget(mTreeView, 7, 0, 1, 2);

        mScaleWidget = new QgsScaleWidget(QgsDxfExportDialogBase);
        mScaleWidget->setObjectName(QStringLiteral("mScaleWidget"));
        mScaleWidget->setFocusPolicy(Qt::StrongFocus);
        mScaleWidget->setProperty("showCurrentScaleButton", QVariant(true));

        gridLayout_2->addWidget(mScaleWidget, 2, 1, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsDxfExportDialogBase);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mCrsSelector, 4, 1, 1, 1);

        mVisibilityPresets = new QComboBox(QgsDxfExportDialogBase);
        mVisibilityPresets->setObjectName(QStringLiteral("mVisibilityPresets"));

        gridLayout_2->addWidget(mVisibilityPresets, 5, 1, 1, 1);

        mFileName = new QgsFileWidget(QgsDxfExportDialogBase);
        mFileName->setObjectName(QStringLiteral("mFileName"));

        gridLayout_2->addWidget(mFileName, 0, 1, 1, 1);

        label_3 = new QLabel(QgsDxfExportDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mSelectAllButton = new QPushButton(QgsDxfExportDialogBase);
        mSelectAllButton->setObjectName(QStringLiteral("mSelectAllButton"));

        gridLayout_3->addWidget(mSelectAllButton, 0, 0, 1, 1);

        mDeselectAllButton = new QPushButton(QgsDxfExportDialogBase);
        mDeselectAllButton->setObjectName(QStringLiteral("mDeselectAllButton"));

        gridLayout_3->addWidget(mDeselectAllButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 9, 0, 1, 2);

        label = new QLabel(QgsDxfExportDialogBase);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        mSymbologyScaleLabel_2 = new QLabel(QgsDxfExportDialogBase);
        mSymbologyScaleLabel_2->setObjectName(QStringLiteral("mSymbologyScaleLabel_2"));
        sizePolicy.setHeightForWidth(mSymbologyScaleLabel_2->sizePolicy().hasHeightForWidth());
        mSymbologyScaleLabel_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSymbologyScaleLabel_2, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mMapExtentCheckBox = new QCheckBox(QgsDxfExportDialogBase);
        mMapExtentCheckBox->setObjectName(QStringLiteral("mMapExtentCheckBox"));

        gridLayout->addWidget(mMapExtentCheckBox, 1, 0, 1, 1);

        mLayerTitleAsName = new QCheckBox(QgsDxfExportDialogBase);
        mLayerTitleAsName->setObjectName(QStringLiteral("mLayerTitleAsName"));

        gridLayout->addWidget(mLayerTitleAsName, 0, 0, 1, 1);

        mForce2d = new QCheckBox(QgsDxfExportDialogBase);
        mForce2d->setObjectName(QStringLiteral("mForce2d"));

        gridLayout->addWidget(mForce2d, 2, 0, 1, 1);

        mMTextCheckBox = new QCheckBox(QgsDxfExportDialogBase);
        mMTextCheckBox->setObjectName(QStringLiteral("mMTextCheckBox"));
        mMTextCheckBox->setChecked(true);

        gridLayout->addWidget(mMTextCheckBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 11, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsDxfExportDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 15, 0, 1, 2);

        QWidget::setTabOrder(mFileName, mSymbologyModeComboBox);
        QWidget::setTabOrder(mSymbologyModeComboBox, mScaleWidget);
        QWidget::setTabOrder(mScaleWidget, mEncoding);
        QWidget::setTabOrder(mEncoding, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mVisibilityPresets);
        QWidget::setTabOrder(mVisibilityPresets, mTreeView);
        QWidget::setTabOrder(mTreeView, mSelectAllButton);
        QWidget::setTabOrder(mSelectAllButton, mDeselectAllButton);
        QWidget::setTabOrder(mDeselectAllButton, mLayerTitleAsName);
        QWidget::setTabOrder(mLayerTitleAsName, mMTextCheckBox);
        QWidget::setTabOrder(mMTextCheckBox, mMapExtentCheckBox);
        QWidget::setTabOrder(mMapExtentCheckBox, mForce2d);
        QWidget::setTabOrder(mForce2d, buttonBox);

        retranslateUi(QgsDxfExportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDxfExportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDxfExportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDxfExportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDxfExportDialogBase)
    {
        QgsDxfExportDialogBase->setWindowTitle(QApplication::translate("QgsDxfExportDialogBase", "DXF Export", Q_NULLPTR));
        mSymbologyModeLabel->setText(QApplication::translate("QgsDxfExportDialogBase", "Symbology mode", Q_NULLPTR));
        mSaveAsLabel->setText(QApplication::translate("QgsDxfExportDialogBase", "Save as", Q_NULLPTR));
        mSymbologyModeComboBox->clear();
        mSymbologyModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsDxfExportDialogBase", "No symbology", Q_NULLPTR)
         << QApplication::translate("QgsDxfExportDialogBase", "Feature symbology", Q_NULLPTR)
         << QApplication::translate("QgsDxfExportDialogBase", "Symbol layer symbology", Q_NULLPTR)
        );
        mSymbologyScaleLabel->setText(QApplication::translate("QgsDxfExportDialogBase", "Symbology scale", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsDxfExportDialogBase", "CRS", Q_NULLPTR));
        mSelectAllButton->setText(QApplication::translate("QgsDxfExportDialogBase", "Select All", Q_NULLPTR));
        mDeselectAllButton->setText(QApplication::translate("QgsDxfExportDialogBase", "Deselect All", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDxfExportDialogBase", "Encoding", Q_NULLPTR));
        mSymbologyScaleLabel_2->setText(QApplication::translate("QgsDxfExportDialogBase", "Map themes", Q_NULLPTR));
        mMapExtentCheckBox->setText(QApplication::translate("QgsDxfExportDialogBase", "Export features intersecting the current map extent", Q_NULLPTR));
        mLayerTitleAsName->setText(QApplication::translate("QgsDxfExportDialogBase", "Use layer title as name if set", Q_NULLPTR));
        mForce2d->setText(QApplication::translate("QgsDxfExportDialogBase", "Force 2d output (eg. to support polyline width)", Q_NULLPTR));
        mMTextCheckBox->setText(QApplication::translate("QgsDxfExportDialogBase", "Export labels as MTEXT elements", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDxfExportDialogBase: public Ui_QgsDxfExportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDXFEXPORTDIALOGBASE_H
