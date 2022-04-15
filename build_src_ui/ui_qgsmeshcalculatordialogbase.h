/********************************************************************************
** Form generated from reading UI file 'qgsmeshcalculatordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHCALCULATORDIALOGBASE_H
#define UI_QGSMESHCALCULATORDIALOGBASE_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshCalculatorDialogBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *mRasterBandsGroupBox;
    QGridLayout *gridLayout_2;
    QListView *mDatasetsListWidget;
    QGroupBox *mResultGroupBox;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_5;
    QLabel *mOutputFormatLabel_2;
    QLabel *mOutputFormatLabel;
    QRadioButton *mOutputOnFileRadioButton;
    QgsFileWidget *mOutputDatasetFileWidget;
    QLabel *mOutputDatasetLabel;
    QComboBox *mOutputFormatComboBox;
    QRadioButton *mOutputVirtualRadioButton;
    QLineEdit *mOutputGroupNameLineEdit;
    QLabel *label_4;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *useExtentCb;
    QCheckBox *useMaskCb;
    QWidget *maskBox;
    QHBoxLayout *maskBoxLayout;
    QLabel *label_3;
    QgsMapLayerComboBox *cboLayerMask;
    QWidget *extendBox;
    QGridLayout *gridLayout_3;
    QLabel *mXMinLabel;
    QgsDoubleSpinBox *mXMaxSpinBox;
    QLabel *mXMaxLabel;
    QLabel *mYMaxLabel;
    QgsDoubleSpinBox *mXMinSpinBox;
    QgsDoubleSpinBox *mYMaxSpinBox;
    QLabel *mYMinLabel;
    QgsDoubleSpinBox *mYMinSpinBox;
    QPushButton *mCurrentLayerExtentButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mAllTimesButton;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_4;
    QComboBox *mEndTimeComboBox;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *mStartTimeComboBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout;
    QPushButton *mLesserEqualButton;
    QPushButton *mGreaterEqualButton;
    QPushButton *mDividePushButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mPlusPushButton;
    QPushButton *mMaxButton;
    QPushButton *mEqualButton;
    QPushButton *mGreaterButton;
    QPushButton *mLessButton;
    QPushButton *mAbsButton;
    QPushButton *mNotEqualButton;
    QPushButton *mMinButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mIfButton;
    QPushButton *mAndButton;
    QPushButton *mOrButton;
    QPushButton *mNotButton;
    QPushButton *mPowButton;
    QPushButton *mSumAggrButton;
    QPushButton *mMaxAggrButton;
    QPushButton *mMinAggrButton;
    QPushButton *mAverageAggrButton;
    QPushButton *mMinusPushButton;
    QPushButton *mNoDataButton;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;
    QDialogButtonBox *mButtonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsMeshCalculatorDialogBase)
    {
        if (QgsMeshCalculatorDialogBase->objectName().isEmpty())
            QgsMeshCalculatorDialogBase->setObjectName(QStringLiteral("QgsMeshCalculatorDialogBase"));
        QgsMeshCalculatorDialogBase->resize(912, 864);
        verticalLayout_3 = new QVBoxLayout(QgsMeshCalculatorDialogBase);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter_2 = new QSplitter(QgsMeshCalculatorDialogBase);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        mRasterBandsGroupBox = new QGroupBox(splitter);
        mRasterBandsGroupBox->setObjectName(QStringLiteral("mRasterBandsGroupBox"));
        gridLayout_2 = new QGridLayout(mRasterBandsGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mDatasetsListWidget = new QListView(mRasterBandsGroupBox);
        mDatasetsListWidget->setObjectName(QStringLiteral("mDatasetsListWidget"));

        gridLayout_2->addWidget(mDatasetsListWidget, 0, 0, 1, 1);

        splitter->addWidget(mRasterBandsGroupBox);
        mResultGroupBox = new QGroupBox(splitter);
        mResultGroupBox->setObjectName(QStringLiteral("mResultGroupBox"));
        verticalLayout_4 = new QVBoxLayout(mResultGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mOutputFormatLabel_2 = new QLabel(mResultGroupBox);
        mOutputFormatLabel_2->setObjectName(QStringLiteral("mOutputFormatLabel_2"));

        gridLayout_5->addWidget(mOutputFormatLabel_2, 3, 0, 1, 1);

        mOutputFormatLabel = new QLabel(mResultGroupBox);
        mOutputFormatLabel->setObjectName(QStringLiteral("mOutputFormatLabel"));

        gridLayout_5->addWidget(mOutputFormatLabel, 2, 0, 1, 1);

        mOutputOnFileRadioButton = new QRadioButton(mResultGroupBox);
        mOutputOnFileRadioButton->setObjectName(QStringLiteral("mOutputOnFileRadioButton"));
        mOutputOnFileRadioButton->setChecked(true);

        gridLayout_5->addWidget(mOutputOnFileRadioButton, 0, 1, 1, 1);

        mOutputDatasetFileWidget = new QgsFileWidget(mResultGroupBox);
        mOutputDatasetFileWidget->setObjectName(QStringLiteral("mOutputDatasetFileWidget"));

        gridLayout_5->addWidget(mOutputDatasetFileWidget, 1, 1, 1, 2);

        mOutputDatasetLabel = new QLabel(mResultGroupBox);
        mOutputDatasetLabel->setObjectName(QStringLiteral("mOutputDatasetLabel"));

        gridLayout_5->addWidget(mOutputDatasetLabel, 0, 0, 1, 1);

        mOutputFormatComboBox = new QComboBox(mResultGroupBox);
        mOutputFormatComboBox->setObjectName(QStringLiteral("mOutputFormatComboBox"));

        gridLayout_5->addWidget(mOutputFormatComboBox, 2, 1, 1, 2);

        mOutputVirtualRadioButton = new QRadioButton(mResultGroupBox);
        mOutputVirtualRadioButton->setObjectName(QStringLiteral("mOutputVirtualRadioButton"));

        gridLayout_5->addWidget(mOutputVirtualRadioButton, 0, 2, 1, 1);

        mOutputGroupNameLineEdit = new QLineEdit(mResultGroupBox);
        mOutputGroupNameLineEdit->setObjectName(QStringLiteral("mOutputGroupNameLineEdit"));

        gridLayout_5->addWidget(mOutputGroupNameLineEdit, 3, 1, 1, 2);

        label_4 = new QLabel(mResultGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_5);

        horizontalWidget = new QWidget(mResultGroupBox);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        useExtentCb = new QCheckBox(horizontalWidget);
        buttonGroup = new QButtonGroup(QgsMeshCalculatorDialogBase);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(useExtentCb);
        useExtentCb->setObjectName(QStringLiteral("useExtentCb"));
        useExtentCb->setChecked(true);

        horizontalLayout_5->addWidget(useExtentCb);

        useMaskCb = new QCheckBox(horizontalWidget);
        buttonGroup->addButton(useMaskCb);
        useMaskCb->setObjectName(QStringLiteral("useMaskCb"));

        horizontalLayout_5->addWidget(useMaskCb);


        verticalLayout_4->addWidget(horizontalWidget);

        maskBox = new QWidget(mResultGroupBox);
        maskBox->setObjectName(QStringLiteral("maskBox"));
        maskBoxLayout = new QHBoxLayout(maskBox);
        maskBoxLayout->setSpacing(6);
        maskBoxLayout->setObjectName(QStringLiteral("maskBoxLayout"));
        maskBoxLayout->setContentsMargins(0, -1, 0, -1);
        label_3 = new QLabel(maskBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(206, 0));

        maskBoxLayout->addWidget(label_3);

        cboLayerMask = new QgsMapLayerComboBox(maskBox);
        cboLayerMask->setObjectName(QStringLiteral("cboLayerMask"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboLayerMask->sizePolicy().hasHeightForWidth());
        cboLayerMask->setSizePolicy(sizePolicy);
        cboLayerMask->setEditable(false);

        maskBoxLayout->addWidget(cboLayerMask);


        verticalLayout_4->addWidget(maskBox);

        extendBox = new QWidget(mResultGroupBox);
        extendBox->setObjectName(QStringLiteral("extendBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(extendBox->sizePolicy().hasHeightForWidth());
        extendBox->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(extendBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mXMinLabel = new QLabel(extendBox);
        mXMinLabel->setObjectName(QStringLiteral("mXMinLabel"));

        gridLayout_3->addWidget(mXMinLabel, 1, 0, 1, 1);

        mXMaxSpinBox = new QgsDoubleSpinBox(extendBox);
        mXMaxSpinBox->setObjectName(QStringLiteral("mXMaxSpinBox"));
        mXMaxSpinBox->setDecimals(5);
        mXMaxSpinBox->setMinimum(-1e+9);
        mXMaxSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mXMaxSpinBox, 1, 3, 1, 1);

        mXMaxLabel = new QLabel(extendBox);
        mXMaxLabel->setObjectName(QStringLiteral("mXMaxLabel"));

        gridLayout_3->addWidget(mXMaxLabel, 1, 2, 1, 1);

        mYMaxLabel = new QLabel(extendBox);
        mYMaxLabel->setObjectName(QStringLiteral("mYMaxLabel"));

        gridLayout_3->addWidget(mYMaxLabel, 2, 2, 1, 1);

        mXMinSpinBox = new QgsDoubleSpinBox(extendBox);
        mXMinSpinBox->setObjectName(QStringLiteral("mXMinSpinBox"));
        mXMinSpinBox->setDecimals(5);
        mXMinSpinBox->setMinimum(-1e+9);
        mXMinSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mXMinSpinBox, 1, 1, 1, 1);

        mYMaxSpinBox = new QgsDoubleSpinBox(extendBox);
        mYMaxSpinBox->setObjectName(QStringLiteral("mYMaxSpinBox"));
        mYMaxSpinBox->setDecimals(5);
        mYMaxSpinBox->setMinimum(-1e+9);
        mYMaxSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mYMaxSpinBox, 2, 3, 1, 1);

        mYMinLabel = new QLabel(extendBox);
        mYMinLabel->setObjectName(QStringLiteral("mYMinLabel"));

        gridLayout_3->addWidget(mYMinLabel, 2, 0, 1, 1);

        mYMinSpinBox = new QgsDoubleSpinBox(extendBox);
        mYMinSpinBox->setObjectName(QStringLiteral("mYMinSpinBox"));
        mYMinSpinBox->setDecimals(5);
        mYMinSpinBox->setMinimum(-1e+9);
        mYMinSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mYMinSpinBox, 2, 1, 1, 1);

        mCurrentLayerExtentButton = new QPushButton(extendBox);
        mCurrentLayerExtentButton->setObjectName(QStringLiteral("mCurrentLayerExtentButton"));

        gridLayout_3->addWidget(mCurrentLayerExtentButton, 0, 0, 1, 2);


        verticalLayout_4->addWidget(extendBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mAllTimesButton = new QPushButton(mResultGroupBox);
        mAllTimesButton->setObjectName(QStringLiteral("mAllTimesButton"));

        horizontalLayout_2->addWidget(mAllTimesButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mEndTimeComboBox = new QComboBox(mResultGroupBox);
        mEndTimeComboBox->setObjectName(QStringLiteral("mEndTimeComboBox"));

        gridLayout_4->addWidget(mEndTimeComboBox, 2, 4, 1, 1);

        label_2 = new QLabel(mResultGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 2, 3, 1, 1);

        label = new QLabel(mResultGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 2, 1, 1);

        mStartTimeComboBox = new QComboBox(mResultGroupBox);
        mStartTimeComboBox->setObjectName(QStringLiteral("mStartTimeComboBox"));

        gridLayout_4->addWidget(mStartTimeComboBox, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        splitter->addWidget(mResultGroupBox);
        maskBox->raise();
        extendBox->raise();
        horizontalWidget->raise();
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(groupBox);
        mOperatorsGroupBox->setObjectName(QStringLiteral("mOperatorsGroupBox"));
        gridLayout = new QGridLayout(mOperatorsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mLesserEqualButton = new QPushButton(mOperatorsGroupBox);
        mLesserEqualButton->setObjectName(QStringLiteral("mLesserEqualButton"));

        gridLayout->addWidget(mLesserEqualButton, 3, 0, 1, 1);

        mGreaterEqualButton = new QPushButton(mOperatorsGroupBox);
        mGreaterEqualButton->setObjectName(QStringLiteral("mGreaterEqualButton"));

        gridLayout->addWidget(mGreaterEqualButton, 3, 1, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QStringLiteral("mDividePushButton"));

        gridLayout->addWidget(mDividePushButton, 1, 1, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QStringLiteral("mMultiplyPushButton"));

        gridLayout->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QStringLiteral("mPlusPushButton"));

        gridLayout->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mMaxButton = new QPushButton(mOperatorsGroupBox);
        mMaxButton->setObjectName(QStringLiteral("mMaxButton"));

        gridLayout->addWidget(mMaxButton, 1, 5, 1, 1);

        mEqualButton = new QPushButton(mOperatorsGroupBox);
        mEqualButton->setObjectName(QStringLiteral("mEqualButton"));

        gridLayout->addWidget(mEqualButton, 2, 4, 1, 1);

        mGreaterButton = new QPushButton(mOperatorsGroupBox);
        mGreaterButton->setObjectName(QStringLiteral("mGreaterButton"));

        gridLayout->addWidget(mGreaterButton, 2, 1, 1, 1);

        mLessButton = new QPushButton(mOperatorsGroupBox);
        mLessButton->setObjectName(QStringLiteral("mLessButton"));

        gridLayout->addWidget(mLessButton, 2, 0, 1, 1);

        mAbsButton = new QPushButton(mOperatorsGroupBox);
        mAbsButton->setObjectName(QStringLiteral("mAbsButton"));

        gridLayout->addWidget(mAbsButton, 2, 5, 1, 1);

        mNotEqualButton = new QPushButton(mOperatorsGroupBox);
        mNotEqualButton->setObjectName(QStringLiteral("mNotEqualButton"));

        gridLayout->addWidget(mNotEqualButton, 3, 4, 1, 1);

        mMinButton = new QPushButton(mOperatorsGroupBox);
        mMinButton->setObjectName(QStringLiteral("mMinButton"));

        gridLayout->addWidget(mMinButton, 0, 5, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QStringLiteral("mOpenBracketPushButton"));

        gridLayout->addWidget(mOpenBracketPushButton, 0, 4, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QStringLiteral("mCloseBracketPushButton"));

        gridLayout->addWidget(mCloseBracketPushButton, 1, 4, 1, 1);

        mIfButton = new QPushButton(mOperatorsGroupBox);
        mIfButton->setObjectName(QStringLiteral("mIfButton"));

        gridLayout->addWidget(mIfButton, 0, 6, 1, 1);

        mAndButton = new QPushButton(mOperatorsGroupBox);
        mAndButton->setObjectName(QStringLiteral("mAndButton"));

        gridLayout->addWidget(mAndButton, 1, 6, 1, 1);

        mOrButton = new QPushButton(mOperatorsGroupBox);
        mOrButton->setObjectName(QStringLiteral("mOrButton"));

        gridLayout->addWidget(mOrButton, 2, 6, 1, 1);

        mNotButton = new QPushButton(mOperatorsGroupBox);
        mNotButton->setObjectName(QStringLiteral("mNotButton"));

        gridLayout->addWidget(mNotButton, 3, 6, 1, 1);

        mPowButton = new QPushButton(mOperatorsGroupBox);
        mPowButton->setObjectName(QStringLiteral("mPowButton"));

        gridLayout->addWidget(mPowButton, 3, 5, 1, 1);

        mSumAggrButton = new QPushButton(mOperatorsGroupBox);
        mSumAggrButton->setObjectName(QStringLiteral("mSumAggrButton"));

        gridLayout->addWidget(mSumAggrButton, 0, 13, 1, 1);

        mMaxAggrButton = new QPushButton(mOperatorsGroupBox);
        mMaxAggrButton->setObjectName(QStringLiteral("mMaxAggrButton"));

        gridLayout->addWidget(mMaxAggrButton, 1, 13, 1, 1);

        mMinAggrButton = new QPushButton(mOperatorsGroupBox);
        mMinAggrButton->setObjectName(QStringLiteral("mMinAggrButton"));

        gridLayout->addWidget(mMinAggrButton, 2, 13, 1, 1);

        mAverageAggrButton = new QPushButton(mOperatorsGroupBox);
        mAverageAggrButton->setObjectName(QStringLiteral("mAverageAggrButton"));

        gridLayout->addWidget(mAverageAggrButton, 3, 13, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QStringLiteral("mMinusPushButton"));

        gridLayout->addWidget(mMinusPushButton, 1, 0, 1, 1);


        verticalLayout_2->addWidget(mOperatorsGroupBox);

        mNoDataButton = new QPushButton(groupBox);
        mNoDataButton->setObjectName(QStringLiteral("mNoDataButton"));

        verticalLayout_2->addWidget(mNoDataButton);

        mExpressionTextEdit = new QTextEdit(groupBox);
        mExpressionTextEdit->setObjectName(QStringLiteral("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);


        verticalLayout->addWidget(groupBox);

        splitter_2->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter_2);

        mExpressionValidLabel = new QLabel(QgsMeshCalculatorDialogBase);
        mExpressionValidLabel->setObjectName(QStringLiteral("mExpressionValidLabel"));

        verticalLayout_3->addWidget(mExpressionValidLabel);

        mButtonBox = new QDialogButtonBox(QgsMeshCalculatorDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(mButtonBox);

        mButtonBox->raise();
        mExpressionValidLabel->raise();
        splitter_2->raise();
        QWidget::setTabOrder(mXMinSpinBox, mXMaxSpinBox);
        QWidget::setTabOrder(mXMaxSpinBox, mYMinSpinBox);
        QWidget::setTabOrder(mYMinSpinBox, mYMaxSpinBox);
        QWidget::setTabOrder(mYMaxSpinBox, mPlusPushButton);
        QWidget::setTabOrder(mPlusPushButton, mMultiplyPushButton);
        QWidget::setTabOrder(mMultiplyPushButton, mMinusPushButton);
        QWidget::setTabOrder(mMinusPushButton, mDividePushButton);
        QWidget::setTabOrder(mDividePushButton, mExpressionTextEdit);

        retranslateUi(QgsMeshCalculatorDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsMeshCalculatorDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsMeshCalculatorDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMeshCalculatorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshCalculatorDialogBase)
    {
        QgsMeshCalculatorDialogBase->setWindowTitle(QApplication::translate("QgsMeshCalculatorDialogBase", "Mesh calculator", Q_NULLPTR));
        mRasterBandsGroupBox->setTitle(QApplication::translate("QgsMeshCalculatorDialogBase", "Datasets", Q_NULLPTR));
        mResultGroupBox->setTitle(QApplication::translate("QgsMeshCalculatorDialogBase", "Result Layer", Q_NULLPTR));
        mOutputFormatLabel_2->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Group Name", Q_NULLPTR));
        mOutputFormatLabel->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Output Format", Q_NULLPTR));
        mOutputOnFileRadioButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "On File", Q_NULLPTR));
        mOutputDatasetLabel->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Output Dataset", Q_NULLPTR));
        mOutputVirtualRadioButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Virtual", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Output File", Q_NULLPTR));
        useExtentCb->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Current Extent", Q_NULLPTR));
        useMaskCb->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Mask Layer", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Mask Layer       ", Q_NULLPTR));
        mXMinLabel->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "X min", Q_NULLPTR));
        mXMaxLabel->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "X max", Q_NULLPTR));
        mYMaxLabel->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Y max", Q_NULLPTR));
        mYMinLabel->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Y min", Q_NULLPTR));
        mCurrentLayerExtentButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Selected Layer Extent", Q_NULLPTR));
        mAllTimesButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "All Selected Dataset Times ", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "End time", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "Start time", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeshCalculatorDialogBase", "Mesh Calculator Expression", Q_NULLPTR));
        mOperatorsGroupBox->setTitle(QApplication::translate("QgsMeshCalculatorDialogBase", "Operators", Q_NULLPTR));
        mLesserEqualButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "<=", Q_NULLPTR));
        mGreaterEqualButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", ">=", Q_NULLPTR));
        mDividePushButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "/", Q_NULLPTR));
        mMultiplyPushButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "*", Q_NULLPTR));
        mPlusPushButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "+", Q_NULLPTR));
        mMaxButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "max", Q_NULLPTR));
        mEqualButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "=", Q_NULLPTR));
        mGreaterButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", ">", Q_NULLPTR));
        mLessButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "<", Q_NULLPTR));
        mAbsButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "abs", Q_NULLPTR));
        mNotEqualButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "!=", Q_NULLPTR));
        mMinButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "min", Q_NULLPTR));
        mOpenBracketPushButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "(", Q_NULLPTR));
        mCloseBracketPushButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", ")", Q_NULLPTR));
        mIfButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "IF", Q_NULLPTR));
        mAndButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "AND", Q_NULLPTR));
        mOrButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "OR", Q_NULLPTR));
        mNotButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "NOT", Q_NULLPTR));
        mPowButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "^", Q_NULLPTR));
        mSumAggrButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "sum (aggr)", Q_NULLPTR));
        mMaxAggrButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "max (aggr)", Q_NULLPTR));
        mMinAggrButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "min (aggr)", Q_NULLPTR));
        mAverageAggrButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "average (aggr)", Q_NULLPTR));
        mMinusPushButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "-", Q_NULLPTR));
        mNoDataButton->setText(QApplication::translate("QgsMeshCalculatorDialogBase", "NODATA", Q_NULLPTR));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeshCalculatorDialogBase: public Ui_QgsMeshCalculatorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHCALCULATORDIALOGBASE_H
