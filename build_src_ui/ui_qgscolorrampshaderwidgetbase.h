/********************************************************************************
** Form generated from reading UI file 'qgscolorrampshaderwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORRAMPSHADERWIDGETBASE_H
#define UI_QGSCOLORRAMPSHADERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgscolorrampbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsColorRampShaderWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mColormapTreeWidget;
    QgsColorRampButton *btnColorRamp;
    QLabel *mColorInterpolationLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mClassificationModeLabel;
    QComboBox *mClassificationModeComboBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mNumberOfEntriesLabel;
    QgsSpinBox *mNumberOfEntriesSpinBox;
    QComboBox *mColorInterpolationComboBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mClassifyButton;
    QPushButton *mAddEntryButton;
    QPushButton *mDeleteEntryButton;
    QPushButton *mLoadFromBandButton;
    QPushButton *mLoadFromFileButton;
    QPushButton *mExportToFileButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mClipCheckBox;
    QLineEdit *mUnitLineEdit;
    QLabel *mUnitLabel;
    QLabel *mColorInterpolationLabel_2;
    QLabel *label;
    QgsSpinBox *mLabelPrecisionSpinBox;

    void setupUi(QWidget *QgsColorRampShaderWidgetBase)
    {
        if (QgsColorRampShaderWidgetBase->objectName().isEmpty())
            QgsColorRampShaderWidgetBase->setObjectName(QStringLiteral("QgsColorRampShaderWidgetBase"));
        QgsColorRampShaderWidgetBase->resize(396, 605);
        QgsColorRampShaderWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsColorRampShaderWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        mColormapTreeWidget = new QTreeWidget(QgsColorRampShaderWidgetBase);
        mColormapTreeWidget->setObjectName(QStringLiteral("mColormapTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mColormapTreeWidget->sizePolicy().hasHeightForWidth());
        mColormapTreeWidget->setSizePolicy(sizePolicy);
        mColormapTreeWidget->setMinimumSize(QSize(0, 250));
        mColormapTreeWidget->header()->setDefaultSectionSize(70);
        mColormapTreeWidget->header()->setMinimumSectionSize(10);
        mColormapTreeWidget->header()->setStretchLastSection(true);

        gridLayout->addWidget(mColormapTreeWidget, 4, 0, 1, 3);

        btnColorRamp = new QgsColorRampButton(QgsColorRampShaderWidgetBase);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 1, 1, 1, 2);

        mColorInterpolationLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mColorInterpolationLabel->setObjectName(QStringLiteral("mColorInterpolationLabel"));

        gridLayout->addWidget(mColorInterpolationLabel, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mClassificationModeLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mClassificationModeLabel->setObjectName(QStringLiteral("mClassificationModeLabel"));

        horizontalLayout_5->addWidget(mClassificationModeLabel);

        mClassificationModeComboBox = new QComboBox(QgsColorRampShaderWidgetBase);
        mClassificationModeComboBox->setObjectName(QStringLiteral("mClassificationModeComboBox"));

        horizontalLayout_5->addWidget(mClassificationModeComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        mNumberOfEntriesLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mNumberOfEntriesLabel->setObjectName(QStringLiteral("mNumberOfEntriesLabel"));

        horizontalLayout_5->addWidget(mNumberOfEntriesLabel);

        mNumberOfEntriesSpinBox = new QgsSpinBox(QgsColorRampShaderWidgetBase);
        mNumberOfEntriesSpinBox->setObjectName(QStringLiteral("mNumberOfEntriesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mNumberOfEntriesSpinBox->sizePolicy().hasHeightForWidth());
        mNumberOfEntriesSpinBox->setSizePolicy(sizePolicy2);
        mNumberOfEntriesSpinBox->setMinimum(2);
        mNumberOfEntriesSpinBox->setMaximum(255);
        mNumberOfEntriesSpinBox->setValue(5);

        horizontalLayout_5->addWidget(mNumberOfEntriesSpinBox);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 3);

        mColorInterpolationComboBox = new QComboBox(QgsColorRampShaderWidgetBase);
        mColorInterpolationComboBox->setObjectName(QStringLiteral("mColorInterpolationComboBox"));

        gridLayout->addWidget(mColorInterpolationComboBox, 0, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mClassifyButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mClassifyButton->setObjectName(QStringLiteral("mClassifyButton"));

        horizontalLayout_3->addWidget(mClassifyButton);

        mAddEntryButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mAddEntryButton->setObjectName(QStringLiteral("mAddEntryButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddEntryButton->setIcon(icon);

        horizontalLayout_3->addWidget(mAddEntryButton);

        mDeleteEntryButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mDeleteEntryButton->setObjectName(QStringLiteral("mDeleteEntryButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteEntryButton->setIcon(icon1);

        horizontalLayout_3->addWidget(mDeleteEntryButton);

        mLoadFromBandButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mLoadFromBandButton->setObjectName(QStringLiteral("mLoadFromBandButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionReload.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadFromBandButton->setIcon(icon2);

        horizontalLayout_3->addWidget(mLoadFromBandButton);

        mLoadFromFileButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mLoadFromFileButton->setObjectName(QStringLiteral("mLoadFromFileButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadFromFileButton->setIcon(icon3);

        horizontalLayout_3->addWidget(mLoadFromFileButton);

        mExportToFileButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mExportToFileButton->setObjectName(QStringLiteral("mExportToFileButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExportToFileButton->setIcon(icon4);

        horizontalLayout_3->addWidget(mExportToFileButton);

        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 3);

        mClipCheckBox = new QCheckBox(QgsColorRampShaderWidgetBase);
        mClipCheckBox->setObjectName(QStringLiteral("mClipCheckBox"));

        gridLayout->addWidget(mClipCheckBox, 7, 0, 1, 3);

        mUnitLineEdit = new QLineEdit(QgsColorRampShaderWidgetBase);
        mUnitLineEdit->setObjectName(QStringLiteral("mUnitLineEdit"));

        gridLayout->addWidget(mUnitLineEdit, 2, 1, 1, 2);

        mUnitLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mUnitLabel->setObjectName(QStringLiteral("mUnitLabel"));
        mUnitLabel->setWordWrap(true);

        gridLayout->addWidget(mUnitLabel, 2, 0, 1, 1);

        mColorInterpolationLabel_2 = new QLabel(QgsColorRampShaderWidgetBase);
        mColorInterpolationLabel_2->setObjectName(QStringLiteral("mColorInterpolationLabel_2"));

        gridLayout->addWidget(mColorInterpolationLabel_2, 1, 0, 1, 1);

        label = new QLabel(QgsColorRampShaderWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mLabelPrecisionSpinBox = new QgsSpinBox(QgsColorRampShaderWidgetBase);
        mLabelPrecisionSpinBox->setObjectName(QStringLiteral("mLabelPrecisionSpinBox"));
        mLabelPrecisionSpinBox->setMinimum(-10);
        mLabelPrecisionSpinBox->setMaximum(16);
        mLabelPrecisionSpinBox->setValue(4);

        gridLayout->addWidget(mLabelPrecisionSpinBox, 3, 1, 1, 2);

        QWidget::setTabOrder(mColorInterpolationComboBox, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, mUnitLineEdit);
        QWidget::setTabOrder(mUnitLineEdit, mColormapTreeWidget);
        QWidget::setTabOrder(mColormapTreeWidget, mClassificationModeComboBox);
        QWidget::setTabOrder(mClassificationModeComboBox, mNumberOfEntriesSpinBox);
        QWidget::setTabOrder(mNumberOfEntriesSpinBox, mClassifyButton);
        QWidget::setTabOrder(mClassifyButton, mAddEntryButton);
        QWidget::setTabOrder(mAddEntryButton, mDeleteEntryButton);
        QWidget::setTabOrder(mDeleteEntryButton, mLoadFromBandButton);
        QWidget::setTabOrder(mLoadFromBandButton, mLoadFromFileButton);
        QWidget::setTabOrder(mLoadFromFileButton, mExportToFileButton);
        QWidget::setTabOrder(mExportToFileButton, mClipCheckBox);

        retranslateUi(QgsColorRampShaderWidgetBase);

        QMetaObject::connectSlotsByName(QgsColorRampShaderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsColorRampShaderWidgetBase)
    {
        QTreeWidgetItem *___qtreewidgetitem = mColormapTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsColorRampShaderWidgetBase", "Label", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsColorRampShaderWidgetBase", "Color", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsColorRampShaderWidgetBase", "Value", Q_NULLPTR));
        mColorInterpolationLabel->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Interpolation", Q_NULLPTR));
        mClassificationModeLabel->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Mode", Q_NULLPTR));
        mNumberOfEntriesLabel->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Classes", Q_NULLPTR));
        mClassifyButton->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Classify", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddEntryButton->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Add values manually", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mDeleteEntryButton->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Remove selected row(s)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLoadFromBandButton->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Load color map from band", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLoadFromFileButton->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Load color map from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mExportToFileButton->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Export color map to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mClipCheckBox->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "If checked, any pixels with a value out of range will not be rendered", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mClipCheckBox->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Clip out of range values", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mUnitLineEdit->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Unit suffix", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUnitLabel->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Label unit suffix", Q_NULLPTR));
        mColorInterpolationLabel_2->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Color ramp", Q_NULLPTR));
        label->setText(QApplication::translate("QgsColorRampShaderWidgetBase", "Label precision", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLabelPrecisionSpinBox->setToolTip(QApplication::translate("QgsColorRampShaderWidgetBase", "Precision of upper and lower values in label text.\n"
"Positive is number of decimal places\n"
"Negative rounds to powers of 10", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsColorRampShaderWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsColorRampShaderWidgetBase: public Ui_QgsColorRampShaderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORRAMPSHADERWIDGETBASE_H
