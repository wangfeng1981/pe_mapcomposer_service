/********************************************************************************
** Form generated from reading UI file 'qgsrastercalcdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERCALCDIALOGBASE_H
#define UI_QGSRASTERCALCDIALOGBASE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterCalcDialogBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *mRasterBandsGroupBox;
    QGridLayout *gridLayout_2;
    QListWidget *mRasterBandsListWidget;
    QGroupBox *mResultGroupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *mRowsLabel;
    QgsSpinBox *mNRowsSpinBox;
    QgsDoubleSpinBox *mYMinSpinBox;
    QLabel *mYMinLabel;
    QLabel *mXMinLabel;
    QLabel *mXMaxLabel;
    QLabel *mColumnsLabel;
    QgsSpinBox *mNColumnsSpinBox;
    QLabel *mYMaxLabel;
    QgsDoubleSpinBox *mYMaxSpinBox;
    QgsDoubleSpinBox *mXMinSpinBox;
    QgsDoubleSpinBox *mXMaxSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QgsFileWidget *mOutputLayer;
    QLabel *mOutputFormatLabel;
    QPushButton *mCurrentLayerExtentButton;
    QLabel *mOutputLayerLabel;
    QCheckBox *mAddResultToProjectCheckBox;
    QComboBox *mOutputFormatComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QgsProjectionSelectionWidget *mCrsSelector;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout;
    QPushButton *mOrButton;
    QPushButton *mLnButton;
    QPushButton *mLesserEqualButton;
    QPushButton *mAndButton;
    QPushButton *mLogButton;
    QPushButton *mLessButton;
    QPushButton *mGreaterEqualButton;
    QPushButton *mTanButton;
    QPushButton *mPlusPushButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mCosButton;
    QPushButton *mGreaterButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mATanButton;
    QPushButton *mACosButton;
    QPushButton *mASinButton;
    QPushButton *mNotEqualButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mEqualButton;
    QPushButton *mMinusPushButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mDividePushButton;
    QPushButton *mExpButton;
    QPushButton *mSinButton;
    QPushButton *mSqrtButton;
    QPushButton *mAbsButton;
    QPushButton *mMinButton;
    QPushButton *mMaxButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterCalcDialogBase)
    {
        if (QgsRasterCalcDialogBase->objectName().isEmpty())
            QgsRasterCalcDialogBase->setObjectName(QStringLiteral("QgsRasterCalcDialogBase"));
        QgsRasterCalcDialogBase->resize(756, 644);
        verticalLayout_3 = new QVBoxLayout(QgsRasterCalcDialogBase);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter_2 = new QSplitter(QgsRasterCalcDialogBase);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        mRasterBandsGroupBox = new QGroupBox(splitter);
        mRasterBandsGroupBox->setObjectName(QStringLiteral("mRasterBandsGroupBox"));
        gridLayout_2 = new QGridLayout(mRasterBandsGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mRasterBandsListWidget = new QListWidget(mRasterBandsGroupBox);
        mRasterBandsListWidget->setObjectName(QStringLiteral("mRasterBandsListWidget"));

        gridLayout_2->addWidget(mRasterBandsListWidget, 0, 0, 1, 1);

        splitter->addWidget(mRasterBandsGroupBox);
        mResultGroupBox = new QGroupBox(splitter);
        mResultGroupBox->setObjectName(QStringLiteral("mResultGroupBox"));
        gridLayout_4 = new QGridLayout(mResultGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mRowsLabel = new QLabel(mResultGroupBox);
        mRowsLabel->setObjectName(QStringLiteral("mRowsLabel"));

        gridLayout_3->addWidget(mRowsLabel, 3, 3, 1, 1);

        mNRowsSpinBox = new QgsSpinBox(mResultGroupBox);
        mNRowsSpinBox->setObjectName(QStringLiteral("mNRowsSpinBox"));
        mNRowsSpinBox->setMaximum(999999999);

        gridLayout_3->addWidget(mNRowsSpinBox, 3, 4, 1, 1);

        mYMinSpinBox = new QgsDoubleSpinBox(mResultGroupBox);
        mYMinSpinBox->setObjectName(QStringLiteral("mYMinSpinBox"));
        mYMinSpinBox->setDecimals(5);
        mYMinSpinBox->setMinimum(-1e+9);
        mYMinSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mYMinSpinBox, 2, 1, 1, 1);

        mYMinLabel = new QLabel(mResultGroupBox);
        mYMinLabel->setObjectName(QStringLiteral("mYMinLabel"));

        gridLayout_3->addWidget(mYMinLabel, 2, 0, 1, 1);

        mXMinLabel = new QLabel(mResultGroupBox);
        mXMinLabel->setObjectName(QStringLiteral("mXMinLabel"));

        gridLayout_3->addWidget(mXMinLabel, 1, 0, 1, 1);

        mXMaxLabel = new QLabel(mResultGroupBox);
        mXMaxLabel->setObjectName(QStringLiteral("mXMaxLabel"));

        gridLayout_3->addWidget(mXMaxLabel, 1, 3, 1, 1);

        mColumnsLabel = new QLabel(mResultGroupBox);
        mColumnsLabel->setObjectName(QStringLiteral("mColumnsLabel"));

        gridLayout_3->addWidget(mColumnsLabel, 3, 0, 1, 1);

        mNColumnsSpinBox = new QgsSpinBox(mResultGroupBox);
        mNColumnsSpinBox->setObjectName(QStringLiteral("mNColumnsSpinBox"));
        mNColumnsSpinBox->setMaximum(999999999);

        gridLayout_3->addWidget(mNColumnsSpinBox, 3, 1, 1, 1);

        mYMaxLabel = new QLabel(mResultGroupBox);
        mYMaxLabel->setObjectName(QStringLiteral("mYMaxLabel"));

        gridLayout_3->addWidget(mYMaxLabel, 2, 3, 1, 1);

        mYMaxSpinBox = new QgsDoubleSpinBox(mResultGroupBox);
        mYMaxSpinBox->setObjectName(QStringLiteral("mYMaxSpinBox"));
        mYMaxSpinBox->setDecimals(5);
        mYMaxSpinBox->setMinimum(-1e+9);
        mYMaxSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mYMaxSpinBox, 2, 4, 1, 1);

        mXMinSpinBox = new QgsDoubleSpinBox(mResultGroupBox);
        mXMinSpinBox->setObjectName(QStringLiteral("mXMinSpinBox"));
        mXMinSpinBox->setDecimals(5);
        mXMinSpinBox->setMinimum(-1e+9);
        mXMinSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mXMinSpinBox, 1, 1, 1, 1);

        mXMaxSpinBox = new QgsDoubleSpinBox(mResultGroupBox);
        mXMaxSpinBox->setObjectName(QStringLiteral("mXMaxSpinBox"));
        mXMaxSpinBox->setDecimals(5);
        mXMaxSpinBox->setMinimum(-1e+9);
        mXMaxSpinBox->setMaximum(1e+9);

        gridLayout_3->addWidget(mXMaxSpinBox, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 4);

        mOutputLayer = new QgsFileWidget(mResultGroupBox);
        mOutputLayer->setObjectName(QStringLiteral("mOutputLayer"));

        gridLayout_4->addWidget(mOutputLayer, 0, 1, 1, 3);

        mOutputFormatLabel = new QLabel(mResultGroupBox);
        mOutputFormatLabel->setObjectName(QStringLiteral("mOutputFormatLabel"));

        gridLayout_4->addWidget(mOutputFormatLabel, 1, 0, 1, 1);

        mCurrentLayerExtentButton = new QPushButton(mResultGroupBox);
        mCurrentLayerExtentButton->setObjectName(QStringLiteral("mCurrentLayerExtentButton"));

        gridLayout_4->addWidget(mCurrentLayerExtentButton, 2, 0, 1, 1);

        mOutputLayerLabel = new QLabel(mResultGroupBox);
        mOutputLayerLabel->setObjectName(QStringLiteral("mOutputLayerLabel"));

        gridLayout_4->addWidget(mOutputLayerLabel, 0, 0, 1, 1);

        mAddResultToProjectCheckBox = new QCheckBox(mResultGroupBox);
        mAddResultToProjectCheckBox->setObjectName(QStringLiteral("mAddResultToProjectCheckBox"));
        mAddResultToProjectCheckBox->setChecked(true);

        gridLayout_4->addWidget(mAddResultToProjectCheckBox, 6, 0, 1, 4);

        mOutputFormatComboBox = new QComboBox(mResultGroupBox);
        mOutputFormatComboBox->setObjectName(QStringLiteral("mOutputFormatComboBox"));

        gridLayout_4->addWidget(mOutputFormatComboBox, 1, 1, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 1, 1, 1);

        label = new QLabel(mResultGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 4, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(mResultGroupBox);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 4, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 7, 0, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);
        gridLayout_4->setColumnStretch(2, 1);
        splitter->addWidget(mResultGroupBox);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        mOperatorsGroupBox->setObjectName(QStringLiteral("mOperatorsGroupBox"));
        gridLayout = new QGridLayout(mOperatorsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mOrButton = new QPushButton(mOperatorsGroupBox);
        mOrButton->setObjectName(QStringLiteral("mOrButton"));

        gridLayout->addWidget(mOrButton, 2, 11, 1, 1);

        mLnButton = new QPushButton(mOperatorsGroupBox);
        mLnButton->setObjectName(QStringLiteral("mLnButton"));

        gridLayout->addWidget(mLnButton, 1, 10, 1, 1);

        mLesserEqualButton = new QPushButton(mOperatorsGroupBox);
        mLesserEqualButton->setObjectName(QStringLiteral("mLesserEqualButton"));

        gridLayout->addWidget(mLesserEqualButton, 2, 6, 1, 1);

        mAndButton = new QPushButton(mOperatorsGroupBox);
        mAndButton->setObjectName(QStringLiteral("mAndButton"));

        gridLayout->addWidget(mAndButton, 2, 10, 1, 1);

        mLogButton = new QPushButton(mOperatorsGroupBox);
        mLogButton->setObjectName(QStringLiteral("mLogButton"));

        gridLayout->addWidget(mLogButton, 0, 10, 1, 1);

        mLessButton = new QPushButton(mOperatorsGroupBox);
        mLessButton->setObjectName(QStringLiteral("mLessButton"));

        gridLayout->addWidget(mLessButton, 2, 0, 1, 1);

        mGreaterEqualButton = new QPushButton(mOperatorsGroupBox);
        mGreaterEqualButton->setObjectName(QStringLiteral("mGreaterEqualButton"));

        gridLayout->addWidget(mGreaterEqualButton, 2, 8, 1, 1);

        mTanButton = new QPushButton(mOperatorsGroupBox);
        mTanButton->setObjectName(QStringLiteral("mTanButton"));

        gridLayout->addWidget(mTanButton, 0, 8, 1, 1);

        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QStringLiteral("mPlusPushButton"));

        gridLayout->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QStringLiteral("mMultiplyPushButton"));

        gridLayout->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mCosButton = new QPushButton(mOperatorsGroupBox);
        mCosButton->setObjectName(QStringLiteral("mCosButton"));

        gridLayout->addWidget(mCosButton, 0, 4, 1, 1);

        mGreaterButton = new QPushButton(mOperatorsGroupBox);
        mGreaterButton->setObjectName(QStringLiteral("mGreaterButton"));

        gridLayout->addWidget(mGreaterButton, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 14, 1, 1);

        mATanButton = new QPushButton(mOperatorsGroupBox);
        mATanButton->setObjectName(QStringLiteral("mATanButton"));

        gridLayout->addWidget(mATanButton, 1, 8, 1, 1);

        mACosButton = new QPushButton(mOperatorsGroupBox);
        mACosButton->setObjectName(QStringLiteral("mACosButton"));

        gridLayout->addWidget(mACosButton, 1, 4, 1, 1);

        mASinButton = new QPushButton(mOperatorsGroupBox);
        mASinButton->setObjectName(QStringLiteral("mASinButton"));

        gridLayout->addWidget(mASinButton, 1, 6, 1, 1);

        mNotEqualButton = new QPushButton(mOperatorsGroupBox);
        mNotEqualButton->setObjectName(QStringLiteral("mNotEqualButton"));

        gridLayout->addWidget(mNotEqualButton, 2, 4, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QStringLiteral("mCloseBracketPushButton"));

        gridLayout->addWidget(mCloseBracketPushButton, 1, 11, 1, 1);

        mEqualButton = new QPushButton(mOperatorsGroupBox);
        mEqualButton->setObjectName(QStringLiteral("mEqualButton"));

        gridLayout->addWidget(mEqualButton, 2, 2, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QStringLiteral("mMinusPushButton"));

        gridLayout->addWidget(mMinusPushButton, 1, 0, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QStringLiteral("mOpenBracketPushButton"));

        gridLayout->addWidget(mOpenBracketPushButton, 0, 11, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QStringLiteral("mDividePushButton"));

        gridLayout->addWidget(mDividePushButton, 1, 1, 1, 1);

        mExpButton = new QPushButton(mOperatorsGroupBox);
        mExpButton->setObjectName(QStringLiteral("mExpButton"));

        gridLayout->addWidget(mExpButton, 1, 2, 1, 1);

        mSinButton = new QPushButton(mOperatorsGroupBox);
        mSinButton->setObjectName(QStringLiteral("mSinButton"));

        gridLayout->addWidget(mSinButton, 0, 6, 1, 1);

        mSqrtButton = new QPushButton(mOperatorsGroupBox);
        mSqrtButton->setObjectName(QStringLiteral("mSqrtButton"));

        gridLayout->addWidget(mSqrtButton, 0, 2, 1, 1);

        mAbsButton = new QPushButton(mOperatorsGroupBox);
        mAbsButton->setObjectName(QStringLiteral("mAbsButton"));

        gridLayout->addWidget(mAbsButton, 3, 0, 1, 1);

        mMinButton = new QPushButton(mOperatorsGroupBox);
        mMinButton->setObjectName(QStringLiteral("mMinButton"));

        gridLayout->addWidget(mMinButton, 3, 1, 1, 1);

        mMaxButton = new QPushButton(mOperatorsGroupBox);
        mMaxButton->setObjectName(QStringLiteral("mMaxButton"));

        gridLayout->addWidget(mMaxButton, 3, 2, 1, 1);


        verticalLayout->addWidget(mOperatorsGroupBox);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mExpressionTextEdit = new QTextEdit(groupBox);
        mExpressionTextEdit->setObjectName(QStringLiteral("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);


        verticalLayout->addWidget(groupBox);

        splitter_2->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter_2);

        mExpressionValidLabel = new QLabel(QgsRasterCalcDialogBase);
        mExpressionValidLabel->setObjectName(QStringLiteral("mExpressionValidLabel"));

        verticalLayout_3->addWidget(mExpressionValidLabel);

        mButtonBox = new QDialogButtonBox(QgsRasterCalcDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(mButtonBox);

        splitter_2->raise();
        mButtonBox->raise();
        mExpressionValidLabel->raise();
        QWidget::setTabOrder(mRasterBandsListWidget, mOutputLayer);
        QWidget::setTabOrder(mOutputLayer, mOutputFormatComboBox);
        QWidget::setTabOrder(mOutputFormatComboBox, mCurrentLayerExtentButton);
        QWidget::setTabOrder(mCurrentLayerExtentButton, mXMinSpinBox);
        QWidget::setTabOrder(mXMinSpinBox, mXMaxSpinBox);
        QWidget::setTabOrder(mXMaxSpinBox, mYMinSpinBox);
        QWidget::setTabOrder(mYMinSpinBox, mYMaxSpinBox);
        QWidget::setTabOrder(mYMaxSpinBox, mNColumnsSpinBox);
        QWidget::setTabOrder(mNColumnsSpinBox, mNRowsSpinBox);
        QWidget::setTabOrder(mNRowsSpinBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mAddResultToProjectCheckBox);
        QWidget::setTabOrder(mAddResultToProjectCheckBox, mOperatorsGroupBox);
        QWidget::setTabOrder(mOperatorsGroupBox, mPlusPushButton);
        QWidget::setTabOrder(mPlusPushButton, mMultiplyPushButton);
        QWidget::setTabOrder(mMultiplyPushButton, mSqrtButton);
        QWidget::setTabOrder(mSqrtButton, mCosButton);
        QWidget::setTabOrder(mCosButton, mSinButton);
        QWidget::setTabOrder(mSinButton, mTanButton);
        QWidget::setTabOrder(mTanButton, mLogButton);
        QWidget::setTabOrder(mLogButton, mOpenBracketPushButton);
        QWidget::setTabOrder(mOpenBracketPushButton, mMinusPushButton);
        QWidget::setTabOrder(mMinusPushButton, mDividePushButton);
        QWidget::setTabOrder(mDividePushButton, mExpButton);
        QWidget::setTabOrder(mExpButton, mACosButton);
        QWidget::setTabOrder(mACosButton, mASinButton);
        QWidget::setTabOrder(mASinButton, mATanButton);
        QWidget::setTabOrder(mATanButton, mLnButton);
        QWidget::setTabOrder(mLnButton, mCloseBracketPushButton);
        QWidget::setTabOrder(mCloseBracketPushButton, mLessButton);
        QWidget::setTabOrder(mLessButton, mGreaterButton);
        QWidget::setTabOrder(mGreaterButton, mEqualButton);
        QWidget::setTabOrder(mEqualButton, mNotEqualButton);
        QWidget::setTabOrder(mNotEqualButton, mLesserEqualButton);
        QWidget::setTabOrder(mLesserEqualButton, mGreaterEqualButton);
        QWidget::setTabOrder(mGreaterEqualButton, mAndButton);
        QWidget::setTabOrder(mAndButton, mOrButton);
        QWidget::setTabOrder(mOrButton, mExpressionTextEdit);

        retranslateUi(QgsRasterCalcDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterCalcDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterCalcDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterCalcDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterCalcDialogBase)
    {
        QgsRasterCalcDialogBase->setWindowTitle(QApplication::translate("QgsRasterCalcDialogBase", "Raster Calculator", Q_NULLPTR));
        mRasterBandsGroupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Raster Bands", Q_NULLPTR));
        mResultGroupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Result Layer", Q_NULLPTR));
        mRowsLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Rows", Q_NULLPTR));
        mYMinLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Y min", Q_NULLPTR));
        mXMinLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "X min", Q_NULLPTR));
        mXMaxLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "X max", Q_NULLPTR));
        mColumnsLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Columns", Q_NULLPTR));
        mYMaxLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Y max", Q_NULLPTR));
        mOutputFormatLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Output format", Q_NULLPTR));
        mCurrentLayerExtentButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "Selected Layer Extent", Q_NULLPTR));
        mOutputLayerLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Output layer", Q_NULLPTR));
        mAddResultToProjectCheckBox->setText(QApplication::translate("QgsRasterCalcDialogBase", "Add result to project", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRasterCalcDialogBase", "Output CRS", Q_NULLPTR));
        mOperatorsGroupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Operators", Q_NULLPTR));
        mOrButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "OR", Q_NULLPTR));
        mLnButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "ln", Q_NULLPTR));
        mLesserEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "<=", Q_NULLPTR));
        mAndButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "AND", Q_NULLPTR));
        mLogButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "log10", Q_NULLPTR));
        mLessButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "<", Q_NULLPTR));
        mGreaterEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", ">=", Q_NULLPTR));
        mTanButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "tan", Q_NULLPTR));
        mPlusPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "+", Q_NULLPTR));
        mMultiplyPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "*", Q_NULLPTR));
        mCosButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "cos", Q_NULLPTR));
        mGreaterButton->setText(QApplication::translate("QgsRasterCalcDialogBase", ">", Q_NULLPTR));
        mATanButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "atan", Q_NULLPTR));
        mACosButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "acos", Q_NULLPTR));
        mASinButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "asin", Q_NULLPTR));
        mNotEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "!=", Q_NULLPTR));
        mCloseBracketPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", ")", Q_NULLPTR));
        mEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "=", Q_NULLPTR));
        mMinusPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "-", Q_NULLPTR));
        mOpenBracketPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "(", Q_NULLPTR));
        mDividePushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "/", Q_NULLPTR));
        mExpButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "^", Q_NULLPTR));
        mSinButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "sin", Q_NULLPTR));
        mSqrtButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "sqrt", Q_NULLPTR));
        mAbsButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "abs", Q_NULLPTR));
        mMinButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "min", Q_NULLPTR));
        mMaxButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "max", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Raster Calculator Expression", Q_NULLPTR));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsRasterCalcDialogBase: public Ui_QgsRasterCalcDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERCALCDIALOGBASE_H
