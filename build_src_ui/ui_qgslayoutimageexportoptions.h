/********************************************************************************
** Form generated from reading UI file 'qgslayoutimageexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTIMAGEEXPORTOPTIONS_H
#define UI_QGSLAYOUTIMAGEEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutImageExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QgsSpinBox *mResolutionSpinBox;
    QLabel *label_9;
    QgsSpinBox *mWidthSpinBox;
    QLabel *label_10;
    QgsSpinBox *mHeightSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mGenerateWorldFile;
    QCheckBox *mAntialiasingCheckBox;
    QgsCollapsibleGroupBoxBasic *mClipToContentGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QgsSpinBox *mTopMarginSpinBox;
    QgsSpinBox *mBottomMarginSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLayoutImageExportOptionsDialog)
    {
        if (QgsLayoutImageExportOptionsDialog->objectName().isEmpty())
            QgsLayoutImageExportOptionsDialog->setObjectName(QStringLiteral("QgsLayoutImageExportOptionsDialog"));
        QgsLayoutImageExportOptionsDialog->resize(533, 424);
        verticalLayout = new QVBoxLayout(QgsLayoutImageExportOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutImageExportOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 2);

        mResolutionSpinBox = new QgsSpinBox(groupBox);
        mResolutionSpinBox->setObjectName(QStringLiteral("mResolutionSpinBox"));
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mResolutionSpinBox, 0, 2, 1, 2);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 2);

        mWidthSpinBox = new QgsSpinBox(groupBox);
        mWidthSpinBox->setObjectName(QStringLiteral("mWidthSpinBox"));
        mWidthSpinBox->setMinimum(0);
        mWidthSpinBox->setMaximum(99999999);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mWidthSpinBox, 1, 2, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        mHeightSpinBox = new QgsSpinBox(groupBox);
        mHeightSpinBox->setObjectName(QStringLiteral("mHeightSpinBox"));
        mHeightSpinBox->setMinimum(0);
        mHeightSpinBox->setMaximum(99999999);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mHeightSpinBox, 2, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        mGenerateWorldFile = new QCheckBox(groupBox);
        mGenerateWorldFile->setObjectName(QStringLiteral("mGenerateWorldFile"));

        gridLayout->addWidget(mGenerateWorldFile, 4, 0, 1, 5);

        mAntialiasingCheckBox = new QCheckBox(groupBox);
        mAntialiasingCheckBox->setObjectName(QStringLiteral("mAntialiasingCheckBox"));

        gridLayout->addWidget(mAntialiasingCheckBox, 3, 0, 1, 5);


        verticalLayout->addWidget(groupBox);

        mClipToContentGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutImageExportOptionsDialog);
        mClipToContentGroupBox->setObjectName(QStringLiteral("mClipToContentGroupBox"));
        mClipToContentGroupBox->setCheckable(true);
        mClipToContentGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mClipToContentGroupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(mClipToContentGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mLeftMarginSpinBox->setObjectName(QStringLiteral("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(mClipToContentGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mRightMarginSpinBox->setObjectName(QStringLiteral("mRightMarginSpinBox"));
        mRightMarginSpinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(mClipToContentGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        label_4 = new QLabel(mClipToContentGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        mTopMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mTopMarginSpinBox->setObjectName(QStringLiteral("mTopMarginSpinBox"));
        mTopMarginSpinBox->setMaximum(1000);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        mBottomMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mBottomMarginSpinBox->setObjectName(QStringLiteral("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setMaximum(1000);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout->addWidget(mClipToContentGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsLayoutImageExportOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mResolutionSpinBox, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mAntialiasingCheckBox);
        QWidget::setTabOrder(mAntialiasingCheckBox, mGenerateWorldFile);
        QWidget::setTabOrder(mGenerateWorldFile, mClipToContentGroupBox);
        QWidget::setTabOrder(mClipToContentGroupBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);

        retranslateUi(QgsLayoutImageExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLayoutImageExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLayoutImageExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutImageExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutImageExportOptionsDialog)
    {
        QgsLayoutImageExportOptionsDialog->setWindowTitle(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Image Export Options", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Export Options", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Page height", Q_NULLPTR));
        mResolutionSpinBox->setSuffix(QApplication::translate("QgsLayoutImageExportOptionsDialog", " dpi", Q_NULLPTR));
        mResolutionSpinBox->setPrefix(QString());
        label_9->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Export resolution", Q_NULLPTR));
        mWidthSpinBox->setSpecialValueText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Auto", Q_NULLPTR));
        mWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutImageExportOptionsDialog", " px", Q_NULLPTR));
        mWidthSpinBox->setPrefix(QString());
        label_10->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Page width", Q_NULLPTR));
        mHeightSpinBox->setSpecialValueText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Auto", Q_NULLPTR));
        mHeightSpinBox->setSuffix(QApplication::translate("QgsLayoutImageExportOptionsDialog", " px", Q_NULLPTR));
        mHeightSpinBox->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        mGenerateWorldFile->setToolTip(QApplication::translate("QgsLayoutImageExportOptionsDialog", "If checked, a separate world file which georeferences exported images will be created", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mGenerateWorldFile->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Generate world file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAntialiasingCheckBox->setToolTip(QApplication::translate("QgsLayoutImageExportOptionsDialog", "If unchecked, the generated images will not be antialiased", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAntialiasingCheckBox->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Enable antialiasing", Q_NULLPTR));
        mClipToContentGroupBox->setTitle(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Crop to Content", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Left", Q_NULLPTR));
        mLeftMarginSpinBox->setSuffix(QString());
        label_11->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Right", Q_NULLPTR));
        mRightMarginSpinBox->setSuffix(QString());
        label_12->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Bottom", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutImageExportOptionsDialog", "Top margin (px)", Q_NULLPTR));
        mTopMarginSpinBox->setSuffix(QString());
        mBottomMarginSpinBox->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutImageExportOptionsDialog: public Ui_QgsLayoutImageExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTIMAGEEXPORTOPTIONS_H
