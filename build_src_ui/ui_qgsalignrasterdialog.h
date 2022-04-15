/********************************************************************************
** Form generated from reading UI file 'qgsalignrasterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSALIGNRASTERDIALOG_H
#define UI_QGSALIGNRASTERDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAlignRasterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *mBtnAdd;
    QToolButton *mBtnEdit;
    QToolButton *mBtnRemove;
    QTreeView *mViewLayers;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_3;
    QComboBox *mCboReferenceLayer;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mSpinCellSizeX;
    QgsDoubleSpinBox *mSpinCellSizeY;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mSpinGridOffsetX;
    QgsDoubleSpinBox *mSpinGridOffsetY;
    QCheckBox *mChkAddToCanvas;
    QgsExtentGroupBox *mClipExtentGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *mEditOutputSize;
    QCheckBox *mChkCustomCRS;
    QCheckBox *mChkCustomCellSize;
    QCheckBox *mChkCustomGridOffset;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *mProgress;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAlignRasterDialog)
    {
        if (QgsAlignRasterDialog->objectName().isEmpty())
            QgsAlignRasterDialog->setObjectName(QStringLiteral("QgsAlignRasterDialog"));
        QgsAlignRasterDialog->resize(511, 415);
        verticalLayout_2 = new QVBoxLayout(QgsAlignRasterDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QgsAlignRasterDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mBtnAdd = new QToolButton(QgsAlignRasterDialog);
        mBtnAdd->setObjectName(QStringLiteral("mBtnAdd"));
        mBtnAdd->setAutoRaise(true);

        horizontalLayout->addWidget(mBtnAdd);

        mBtnEdit = new QToolButton(QgsAlignRasterDialog);
        mBtnEdit->setObjectName(QStringLiteral("mBtnEdit"));
        mBtnEdit->setAutoRaise(true);

        horizontalLayout->addWidget(mBtnEdit);

        mBtnRemove = new QToolButton(QgsAlignRasterDialog);
        mBtnRemove->setObjectName(QStringLiteral("mBtnRemove"));
        mBtnRemove->setAutoRaise(true);

        horizontalLayout->addWidget(mBtnRemove);


        verticalLayout_2->addLayout(horizontalLayout);

        mViewLayers = new QTreeView(QgsAlignRasterDialog);
        mViewLayers->setObjectName(QStringLiteral("mViewLayers"));
        mViewLayers->setRootIsDecorated(false);
        mViewLayers->setHeaderHidden(true);

        verticalLayout_2->addWidget(mViewLayers);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(QgsAlignRasterDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        label_3 = new QLabel(QgsAlignRasterDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        mCboReferenceLayer = new QComboBox(QgsAlignRasterDialog);
        mCboReferenceLayer->setObjectName(QStringLiteral("mCboReferenceLayer"));

        gridLayout->addWidget(mCboReferenceLayer, 0, 2, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsAlignRasterDialog);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));

        gridLayout->addWidget(mCrsSelector, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mSpinCellSizeX = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinCellSizeX->setObjectName(QStringLiteral("mSpinCellSizeX"));
        mSpinCellSizeX->setDecimals(6);
        mSpinCellSizeX->setMaximum(999999);

        horizontalLayout_3->addWidget(mSpinCellSizeX);

        mSpinCellSizeY = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinCellSizeY->setObjectName(QStringLiteral("mSpinCellSizeY"));
        mSpinCellSizeY->setDecimals(6);
        mSpinCellSizeY->setMaximum(999999);

        horizontalLayout_3->addWidget(mSpinCellSizeY);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mSpinGridOffsetX = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinGridOffsetX->setObjectName(QStringLiteral("mSpinGridOffsetX"));
        mSpinGridOffsetX->setDecimals(6);
        mSpinGridOffsetX->setMaximum(999999);

        horizontalLayout_4->addWidget(mSpinGridOffsetX);

        mSpinGridOffsetY = new QgsDoubleSpinBox(QgsAlignRasterDialog);
        mSpinGridOffsetY->setObjectName(QStringLiteral("mSpinGridOffsetY"));
        mSpinGridOffsetY->setDecimals(6);
        mSpinGridOffsetY->setMaximum(999999);

        horizontalLayout_4->addWidget(mSpinGridOffsetY);


        gridLayout->addLayout(horizontalLayout_4, 3, 2, 1, 1);

        mChkAddToCanvas = new QCheckBox(QgsAlignRasterDialog);
        mChkAddToCanvas->setObjectName(QStringLiteral("mChkAddToCanvas"));
        mChkAddToCanvas->setChecked(true);

        gridLayout->addWidget(mChkAddToCanvas, 7, 1, 1, 2);

        mClipExtentGroupBox = new QgsExtentGroupBox(QgsAlignRasterDialog);
        mClipExtentGroupBox->setObjectName(QStringLiteral("mClipExtentGroupBox"));
        mClipExtentGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mClipExtentGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        gridLayout->addWidget(mClipExtentGroupBox, 4, 1, 1, 2);

        mEditOutputSize = new QLineEdit(QgsAlignRasterDialog);
        mEditOutputSize->setObjectName(QStringLiteral("mEditOutputSize"));
        mEditOutputSize->setReadOnly(true);

        gridLayout->addWidget(mEditOutputSize, 5, 2, 1, 1);

        mChkCustomCRS = new QCheckBox(QgsAlignRasterDialog);
        mChkCustomCRS->setObjectName(QStringLiteral("mChkCustomCRS"));

        gridLayout->addWidget(mChkCustomCRS, 1, 1, 1, 1);

        mChkCustomCellSize = new QCheckBox(QgsAlignRasterDialog);
        mChkCustomCellSize->setObjectName(QStringLiteral("mChkCustomCellSize"));

        gridLayout->addWidget(mChkCustomCellSize, 2, 1, 1, 1);

        mChkCustomGridOffset = new QCheckBox(QgsAlignRasterDialog);
        mChkCustomGridOffset->setObjectName(QStringLiteral("mChkCustomGridOffset"));

        gridLayout->addWidget(mChkCustomGridOffset, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mProgress = new QProgressBar(QgsAlignRasterDialog);
        mProgress->setObjectName(QStringLiteral("mProgress"));
        mProgress->setValue(0);

        horizontalLayout_2->addWidget(mProgress);

        buttonBox = new QDialogButtonBox(QgsAlignRasterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(mBtnAdd, mBtnEdit);
        QWidget::setTabOrder(mBtnEdit, mBtnRemove);
        QWidget::setTabOrder(mBtnRemove, mViewLayers);
        QWidget::setTabOrder(mViewLayers, mCboReferenceLayer);
        QWidget::setTabOrder(mCboReferenceLayer, mChkCustomCRS);
        QWidget::setTabOrder(mChkCustomCRS, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mChkCustomCellSize);
        QWidget::setTabOrder(mChkCustomCellSize, mSpinCellSizeX);
        QWidget::setTabOrder(mSpinCellSizeX, mSpinCellSizeY);
        QWidget::setTabOrder(mSpinCellSizeY, mChkCustomGridOffset);
        QWidget::setTabOrder(mChkCustomGridOffset, mSpinGridOffsetX);
        QWidget::setTabOrder(mSpinGridOffsetX, mSpinGridOffsetY);
        QWidget::setTabOrder(mSpinGridOffsetY, mClipExtentGroupBox);
        QWidget::setTabOrder(mClipExtentGroupBox, mEditOutputSize);
        QWidget::setTabOrder(mEditOutputSize, mChkAddToCanvas);
        QWidget::setTabOrder(mChkAddToCanvas, buttonBox);

        retranslateUi(QgsAlignRasterDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAlignRasterDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QgsAlignRasterDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAlignRasterDialog)
    {
        QgsAlignRasterDialog->setWindowTitle(QApplication::translate("QgsAlignRasterDialog", "Align Rasters", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAlignRasterDialog", "Raster layers to align", Q_NULLPTR));
        mBtnAdd->setText(QApplication::translate("QgsAlignRasterDialog", "+", Q_NULLPTR));
        mBtnEdit->setText(QApplication::translate("QgsAlignRasterDialog", "/", Q_NULLPTR));
        mBtnRemove->setText(QApplication::translate("QgsAlignRasterDialog", "-", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsAlignRasterDialog", "Output size", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsAlignRasterDialog", "Reference layer", Q_NULLPTR));
        mChkAddToCanvas->setText(QApplication::translate("QgsAlignRasterDialog", "Add aligned rasters to map canvas", Q_NULLPTR));
        mChkCustomCRS->setText(QApplication::translate("QgsAlignRasterDialog", "CRS", Q_NULLPTR));
        mChkCustomCellSize->setText(QApplication::translate("QgsAlignRasterDialog", "Cell size", Q_NULLPTR));
        mChkCustomGridOffset->setText(QApplication::translate("QgsAlignRasterDialog", "Grid offset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAlignRasterDialog: public Ui_QgsAlignRasterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSALIGNRASTERDIALOG_H
