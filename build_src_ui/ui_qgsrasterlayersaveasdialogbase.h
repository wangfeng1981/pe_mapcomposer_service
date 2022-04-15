/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayersaveasdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERSAVEASDIALOGBASE_H
#define UI_QGSRASTERLAYERSAVEASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsrasterformatsaveoptionswidget.h"
#include "qgsrasterpyramidsoptionswidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerSaveAsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QgsFileWidget *mFilename;
    QLabel *mModeLabel;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mRawModeRadioButton;
    QRadioButton *mRenderedModeRadioButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mFormatLabel;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout;
    QComboBox *mFormatComboBox;
    QCheckBox *mTileModeCheckBox;
    QLabel *label_2;
    QLabel *mSaveAsLabel;
    QLabel *label_3;
    QLineEdit *mLayerName;
    QgsScrollArea *mScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *mResolutionGroupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QRadioButton *mResolutionRadioButton;
    QLineEdit *mXResolutionLineEdit;
    QRadioButton *mSizeRadioButton;
    QLineEdit *mColumnsLineEdit;
    QLabel *mRowsLabel;
    QLineEdit *mYResolutionLineEdit;
    QLineEdit *mRowsLineEdit;
    QPushButton *mOriginalResolutionPushButton;
    QPushButton *mOriginalSizePushButton;
    QLabel *label;
    QgsCollapsibleGroupBox *mTilesGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mMaximumSizeXLabel;
    QLineEdit *mMaximumSizeXLineEdit;
    QLabel *mMaximumSizeYLabel;
    QLineEdit *mMaximumSizeYLineEdit;
    QgsCollapsibleGroupBox *mCreateOptionsGroupBox;
    QGridLayout *gridLayout_5;
    QgsRasterFormatSaveOptionsWidget *mCreateOptionsWidget;
    QgsCollapsibleGroupBox *mPyramidsGroupBox;
    QGridLayout *gridLayout_3;
    QgsRasterPyramidsOptionsWidget *mPyramidsOptionsWidget;
    QFrame *line;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mPyramidResolutionsLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *mPyramidResolutionsLineEdit;
    QCheckBox *mPyramidsUseExistingCheckBox;
    QgsCollapsibleGroupBox *mNoDataGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout;
    QPushButton *mRemoveSelectedNoDataToolButton;
    QPushButton *mAddNoDataManuallyToolButton;
    QTableWidget *mNoDataTableWidget;
    QPushButton *mLoadTransparentNoDataToolButton;
    QPushButton *mRemoveAllNoDataToolButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer1;
    QCheckBox *mAddToCanvas;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterLayerSaveAsDialogBase)
    {
        if (QgsRasterLayerSaveAsDialogBase->objectName().isEmpty())
            QgsRasterLayerSaveAsDialogBase->setObjectName(QStringLiteral("QgsRasterLayerSaveAsDialogBase"));
        QgsRasterLayerSaveAsDialogBase->resize(575, 610);
        verticalLayout = new QVBoxLayout(QgsRasterLayerSaveAsDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mFilename = new QgsFileWidget(QgsRasterLayerSaveAsDialogBase);
        mFilename->setObjectName(QStringLiteral("mFilename"));
        mFilename->setEnabled(true);
        mFilename->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mFilename, 2, 1, 1, 1);

        mModeLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mModeLabel->setObjectName(QStringLiteral("mModeLabel"));

        gridLayout_4->addWidget(mModeLabel, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mRawModeRadioButton = new QRadioButton(QgsRasterLayerSaveAsDialogBase);
        mRawModeRadioButton->setObjectName(QStringLiteral("mRawModeRadioButton"));
        mRawModeRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(mRawModeRadioButton);

        mRenderedModeRadioButton = new QRadioButton(QgsRasterLayerSaveAsDialogBase);
        mRenderedModeRadioButton->setObjectName(QStringLiteral("mRenderedModeRadioButton"));
        mRenderedModeRadioButton->setChecked(false);

        horizontalLayout_6->addWidget(mRenderedModeRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mFormatLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mFormatLabel->setObjectName(QStringLiteral("mFormatLabel"));

        gridLayout_4->addWidget(mFormatLabel, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsRasterLayerSaveAsDialogBase);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFormatComboBox = new QComboBox(QgsRasterLayerSaveAsDialogBase);
        mFormatComboBox->setObjectName(QStringLiteral("mFormatComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormatComboBox->sizePolicy().hasHeightForWidth());
        mFormatComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFormatComboBox);

        mTileModeCheckBox = new QCheckBox(QgsRasterLayerSaveAsDialogBase);
        mTileModeCheckBox->setObjectName(QStringLiteral("mTileModeCheckBox"));

        horizontalLayout->addWidget(mTileModeCheckBox);


        gridLayout_4->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_2 = new QLabel(QgsRasterLayerSaveAsDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(label_2, 4, 0, 1, 1);

        mSaveAsLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mSaveAsLabel->setObjectName(QStringLiteral("mSaveAsLabel"));

        gridLayout_4->addWidget(mSaveAsLabel, 2, 0, 1, 1);

        label_3 = new QLabel(QgsRasterLayerSaveAsDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        mLayerName = new QLineEdit(QgsRasterLayerSaveAsDialogBase);
        mLayerName->setObjectName(QStringLiteral("mLayerName"));

        gridLayout_4->addWidget(mLayerName, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        mScrollArea = new QgsScrollArea(QgsRasterLayerSaveAsDialogBase);
        mScrollArea->setObjectName(QStringLiteral("mScrollArea"));
        mScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 541, 597));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QStringLiteral("mExtentGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mExtentGroupBox->sizePolicy().hasHeightForWidth());
        mExtentGroupBox->setSizePolicy(sizePolicy2);
        mExtentGroupBox->setAutoFillBackground(false);
        mExtentGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mExtentGroupBox->setCheckable(false);
        mExtentGroupBox->setProperty("collapsed", QVariant(false));
        mExtentGroupBox->setProperty("saveCollapsedState", QVariant(true));

        verticalLayout_5->addWidget(mExtentGroupBox);

        mResolutionGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mResolutionGroupBox->setObjectName(QStringLiteral("mResolutionGroupBox"));
        sizePolicy2.setHeightForWidth(mResolutionGroupBox->sizePolicy().hasHeightForWidth());
        mResolutionGroupBox->setSizePolicy(sizePolicy2);
        mResolutionGroupBox->setFlat(false);
        mResolutionGroupBox->setCheckable(false);
        mResolutionGroupBox->setProperty("collapsed", QVariant(false));
        mResolutionGroupBox->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mResolutionGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mResolutionRadioButton = new QRadioButton(mResolutionGroupBox);
        mResolutionRadioButton->setObjectName(QStringLiteral("mResolutionRadioButton"));
        mResolutionRadioButton->setChecked(true);

        gridLayout_2->addWidget(mResolutionRadioButton, 0, 0, 1, 1);

        mXResolutionLineEdit = new QLineEdit(mResolutionGroupBox);
        mXResolutionLineEdit->setObjectName(QStringLiteral("mXResolutionLineEdit"));

        gridLayout_2->addWidget(mXResolutionLineEdit, 0, 1, 1, 1);

        mSizeRadioButton = new QRadioButton(mResolutionGroupBox);
        mSizeRadioButton->setObjectName(QStringLiteral("mSizeRadioButton"));

        gridLayout_2->addWidget(mSizeRadioButton, 1, 0, 1, 1);

        mColumnsLineEdit = new QLineEdit(mResolutionGroupBox);
        mColumnsLineEdit->setObjectName(QStringLiteral("mColumnsLineEdit"));

        gridLayout_2->addWidget(mColumnsLineEdit, 1, 1, 1, 1);

        mRowsLabel = new QLabel(mResolutionGroupBox);
        mRowsLabel->setObjectName(QStringLiteral("mRowsLabel"));

        gridLayout_2->addWidget(mRowsLabel, 1, 2, 1, 1);

        mYResolutionLineEdit = new QLineEdit(mResolutionGroupBox);
        mYResolutionLineEdit->setObjectName(QStringLiteral("mYResolutionLineEdit"));

        gridLayout_2->addWidget(mYResolutionLineEdit, 0, 3, 1, 1);

        mRowsLineEdit = new QLineEdit(mResolutionGroupBox);
        mRowsLineEdit->setObjectName(QStringLiteral("mRowsLineEdit"));

        gridLayout_2->addWidget(mRowsLineEdit, 1, 3, 1, 1);

        mOriginalResolutionPushButton = new QPushButton(mResolutionGroupBox);
        mOriginalResolutionPushButton->setObjectName(QStringLiteral("mOriginalResolutionPushButton"));

        gridLayout_2->addWidget(mOriginalResolutionPushButton, 0, 4, 1, 1);

        mOriginalSizePushButton = new QPushButton(mResolutionGroupBox);
        mOriginalSizePushButton->setObjectName(QStringLiteral("mOriginalSizePushButton"));

        gridLayout_2->addWidget(mOriginalSizePushButton, 1, 4, 1, 1);

        label = new QLabel(mResolutionGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_5->addWidget(mResolutionGroupBox);

        mTilesGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mTilesGroupBox->setObjectName(QStringLiteral("mTilesGroupBox"));
        sizePolicy2.setHeightForWidth(mTilesGroupBox->sizePolicy().hasHeightForWidth());
        mTilesGroupBox->setSizePolicy(sizePolicy2);
        mTilesGroupBox->setCheckable(false);
        mTilesGroupBox->setChecked(false);
        mTilesGroupBox->setProperty("collapsed", QVariant(false));
        mTilesGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout_5 = new QHBoxLayout(mTilesGroupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mMaximumSizeXLabel = new QLabel(mTilesGroupBox);
        mMaximumSizeXLabel->setObjectName(QStringLiteral("mMaximumSizeXLabel"));

        horizontalLayout_5->addWidget(mMaximumSizeXLabel);

        mMaximumSizeXLineEdit = new QLineEdit(mTilesGroupBox);
        mMaximumSizeXLineEdit->setObjectName(QStringLiteral("mMaximumSizeXLineEdit"));

        horizontalLayout_5->addWidget(mMaximumSizeXLineEdit);

        mMaximumSizeYLabel = new QLabel(mTilesGroupBox);
        mMaximumSizeYLabel->setObjectName(QStringLiteral("mMaximumSizeYLabel"));

        horizontalLayout_5->addWidget(mMaximumSizeYLabel);

        mMaximumSizeYLineEdit = new QLineEdit(mTilesGroupBox);
        mMaximumSizeYLineEdit->setObjectName(QStringLiteral("mMaximumSizeYLineEdit"));

        horizontalLayout_5->addWidget(mMaximumSizeYLineEdit);


        verticalLayout_5->addWidget(mTilesGroupBox);

        mCreateOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mCreateOptionsGroupBox->setObjectName(QStringLiteral("mCreateOptionsGroupBox"));
        sizePolicy2.setHeightForWidth(mCreateOptionsGroupBox->sizePolicy().hasHeightForWidth());
        mCreateOptionsGroupBox->setSizePolicy(sizePolicy2);
        mCreateOptionsGroupBox->setCheckable(true);
        mCreateOptionsGroupBox->setChecked(false);
        mCreateOptionsGroupBox->setProperty("collapsed", QVariant(false));
        mCreateOptionsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_5 = new QGridLayout(mCreateOptionsGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mCreateOptionsWidget = new QgsRasterFormatSaveOptionsWidget(mCreateOptionsGroupBox);
        mCreateOptionsWidget->setObjectName(QStringLiteral("mCreateOptionsWidget"));

        gridLayout_5->addWidget(mCreateOptionsWidget, 0, 0, 1, 1);


        verticalLayout_5->addWidget(mCreateOptionsGroupBox);

        mPyramidsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPyramidsGroupBox->setObjectName(QStringLiteral("mPyramidsGroupBox"));
        sizePolicy2.setHeightForWidth(mPyramidsGroupBox->sizePolicy().hasHeightForWidth());
        mPyramidsGroupBox->setSizePolicy(sizePolicy2);
        mPyramidsGroupBox->setCheckable(true);
        mPyramidsGroupBox->setChecked(false);
        mPyramidsGroupBox->setProperty("collapsed", QVariant(false));
        mPyramidsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_3 = new QGridLayout(mPyramidsGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mPyramidsOptionsWidget = new QgsRasterPyramidsOptionsWidget(mPyramidsGroupBox);
        mPyramidsOptionsWidget->setObjectName(QStringLiteral("mPyramidsOptionsWidget"));

        gridLayout_3->addWidget(mPyramidsOptionsWidget, 3, 0, 1, 1);

        line = new QFrame(mPyramidsGroupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mPyramidResolutionsLabel = new QLabel(mPyramidsGroupBox);
        mPyramidResolutionsLabel->setObjectName(QStringLiteral("mPyramidResolutionsLabel"));

        horizontalLayout_9->addWidget(mPyramidResolutionsLabel);

        horizontalSpacer_5 = new QSpacerItem(10, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        mPyramidResolutionsLineEdit = new QLineEdit(mPyramidsGroupBox);
        mPyramidResolutionsLineEdit->setObjectName(QStringLiteral("mPyramidResolutionsLineEdit"));
        mPyramidResolutionsLineEdit->setAutoFillBackground(false);
        mPyramidResolutionsLineEdit->setFrame(false);
        mPyramidResolutionsLineEdit->setReadOnly(true);

        horizontalLayout_9->addWidget(mPyramidResolutionsLineEdit);


        gridLayout_3->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        mPyramidsUseExistingCheckBox = new QCheckBox(mPyramidsGroupBox);
        mPyramidsUseExistingCheckBox->setObjectName(QStringLiteral("mPyramidsUseExistingCheckBox"));

        gridLayout_3->addWidget(mPyramidsUseExistingCheckBox, 0, 0, 1, 1);


        verticalLayout_5->addWidget(mPyramidsGroupBox);

        mNoDataGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mNoDataGroupBox->setObjectName(QStringLiteral("mNoDataGroupBox"));
        sizePolicy2.setHeightForWidth(mNoDataGroupBox->sizePolicy().hasHeightForWidth());
        mNoDataGroupBox->setSizePolicy(sizePolicy2);
        mNoDataGroupBox->setCheckable(true);
        mNoDataGroupBox->setChecked(false);
        mNoDataGroupBox->setProperty("collapsed", QVariant(false));
        mNoDataGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout_7 = new QHBoxLayout(mNoDataGroupBox);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mRemoveSelectedNoDataToolButton = new QPushButton(mNoDataGroupBox);
        mRemoveSelectedNoDataToolButton->setObjectName(QStringLiteral("mRemoveSelectedNoDataToolButton"));
        sizePolicy1.setHeightForWidth(mRemoveSelectedNoDataToolButton->sizePolicy().hasHeightForWidth());
        mRemoveSelectedNoDataToolButton->setSizePolicy(sizePolicy1);
        mRemoveSelectedNoDataToolButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveSelectedNoDataToolButton->setIcon(icon);

        gridLayout->addWidget(mRemoveSelectedNoDataToolButton, 2, 1, 1, 1);

        mAddNoDataManuallyToolButton = new QPushButton(mNoDataGroupBox);
        mAddNoDataManuallyToolButton->setObjectName(QStringLiteral("mAddNoDataManuallyToolButton"));
        sizePolicy1.setHeightForWidth(mAddNoDataManuallyToolButton->sizePolicy().hasHeightForWidth());
        mAddNoDataManuallyToolButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddNoDataManuallyToolButton->setIcon(icon1);

        gridLayout->addWidget(mAddNoDataManuallyToolButton, 2, 0, 1, 1);

        mNoDataTableWidget = new QTableWidget(mNoDataGroupBox);
        mNoDataTableWidget->setObjectName(QStringLiteral("mNoDataTableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mNoDataTableWidget->sizePolicy().hasHeightForWidth());
        mNoDataTableWidget->setSizePolicy(sizePolicy3);
        mNoDataTableWidget->setMinimumSize(QSize(0, 0));
        mNoDataTableWidget->horizontalHeader()->setDefaultSectionSize(250);
        mNoDataTableWidget->horizontalHeader()->setMinimumSectionSize(200);

        gridLayout->addWidget(mNoDataTableWidget, 1, 0, 1, 5);

        mLoadTransparentNoDataToolButton = new QPushButton(mNoDataGroupBox);
        mLoadTransparentNoDataToolButton->setObjectName(QStringLiteral("mLoadTransparentNoDataToolButton"));
        sizePolicy1.setHeightForWidth(mLoadTransparentNoDataToolButton->sizePolicy().hasHeightForWidth());
        mLoadTransparentNoDataToolButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadTransparentNoDataToolButton->setIcon(icon2);

        gridLayout->addWidget(mLoadTransparentNoDataToolButton, 2, 2, 1, 1);

        mRemoveAllNoDataToolButton = new QPushButton(mNoDataGroupBox);
        mRemoveAllNoDataToolButton->setObjectName(QStringLiteral("mRemoveAllNoDataToolButton"));
        sizePolicy1.setHeightForWidth(mRemoveAllNoDataToolButton->sizePolicy().hasHeightForWidth());
        mRemoveAllNoDataToolButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAllNoDataToolButton->setIcon(icon3);

        gridLayout->addWidget(mRemoveAllNoDataToolButton, 2, 3, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);


        verticalLayout_5->addWidget(mNoDataGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        mScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(mScrollArea);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        mHelpButtonBox = new QDialogButtonBox(QgsRasterLayerSaveAsDialogBase);
        mHelpButtonBox->setObjectName(QStringLiteral("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout_10->addWidget(mHelpButtonBox);

        horizontalSpacer1 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer1);

        mAddToCanvas = new QCheckBox(QgsRasterLayerSaveAsDialogBase);
        mAddToCanvas->setObjectName(QStringLiteral("mAddToCanvas"));
        mAddToCanvas->setChecked(true);

        horizontalLayout_10->addWidget(mAddToCanvas);

        mButtonBox = new QDialogButtonBox(QgsRasterLayerSaveAsDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_10->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout_10);

#ifndef QT_NO_SHORTCUT
        mFormatLabel->setBuddy(mFormatComboBox);
        mSaveAsLabel->setBuddy(mFilename);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mRawModeRadioButton, mRenderedModeRadioButton);
        QWidget::setTabOrder(mRenderedModeRadioButton, mFormatComboBox);
        QWidget::setTabOrder(mFormatComboBox, mTileModeCheckBox);
        QWidget::setTabOrder(mTileModeCheckBox, mFilename);
        QWidget::setTabOrder(mFilename, mLayerName);
        QWidget::setTabOrder(mLayerName, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mScrollArea);
        QWidget::setTabOrder(mScrollArea, mResolutionRadioButton);
        QWidget::setTabOrder(mResolutionRadioButton, mXResolutionLineEdit);
        QWidget::setTabOrder(mXResolutionLineEdit, mYResolutionLineEdit);
        QWidget::setTabOrder(mYResolutionLineEdit, mOriginalResolutionPushButton);
        QWidget::setTabOrder(mOriginalResolutionPushButton, mSizeRadioButton);
        QWidget::setTabOrder(mSizeRadioButton, mColumnsLineEdit);
        QWidget::setTabOrder(mColumnsLineEdit, mRowsLineEdit);
        QWidget::setTabOrder(mRowsLineEdit, mOriginalSizePushButton);
        QWidget::setTabOrder(mOriginalSizePushButton, mMaximumSizeXLineEdit);
        QWidget::setTabOrder(mMaximumSizeXLineEdit, mMaximumSizeYLineEdit);
        QWidget::setTabOrder(mMaximumSizeYLineEdit, mCreateOptionsGroupBox);
        QWidget::setTabOrder(mCreateOptionsGroupBox, mPyramidsGroupBox);
        QWidget::setTabOrder(mPyramidsGroupBox, mPyramidsUseExistingCheckBox);
        QWidget::setTabOrder(mPyramidsUseExistingCheckBox, mPyramidResolutionsLineEdit);
        QWidget::setTabOrder(mPyramidResolutionsLineEdit, mNoDataGroupBox);
        QWidget::setTabOrder(mNoDataGroupBox, mNoDataTableWidget);
        QWidget::setTabOrder(mNoDataTableWidget, mAddNoDataManuallyToolButton);
        QWidget::setTabOrder(mAddNoDataManuallyToolButton, mRemoveSelectedNoDataToolButton);
        QWidget::setTabOrder(mRemoveSelectedNoDataToolButton, mLoadTransparentNoDataToolButton);
        QWidget::setTabOrder(mLoadTransparentNoDataToolButton, mRemoveAllNoDataToolButton);
        QWidget::setTabOrder(mRemoveAllNoDataToolButton, mAddToCanvas);

        retranslateUi(QgsRasterLayerSaveAsDialogBase);

        QMetaObject::connectSlotsByName(QgsRasterLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerSaveAsDialogBase)
    {
        QgsRasterLayerSaveAsDialogBase->setWindowTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Save Raster Layer as\342\200\246", Q_NULLPTR));
        mModeLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Output mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRawModeRadioButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Write out raw raster layer data. Optionally user defined no data values may be applied.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRawModeRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Raw data", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRenderedModeRadioButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Write out 3 bands RGB image rendered using current layer style.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRenderedModeRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Rendered image", Q_NULLPTR));
        mFormatLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTileModeCheckBox->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create GDAL Virtual Format composed of multiple\n"
"datasets with maximum width and height specified below.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTileModeCheckBox->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create VRT", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "CRS", Q_NULLPTR));
        mSaveAsLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "File name", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer name", Q_NULLPTR));
        mExtentGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Extent", Q_NULLPTR));
        mResolutionGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Resolution", Q_NULLPTR));
        mResolutionRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Horizontal", Q_NULLPTR));
        mSizeRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Columns", Q_NULLPTR));
        mRowsLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Rows", Q_NULLPTR));
        mOriginalResolutionPushButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer Resolution", Q_NULLPTR));
        mOriginalSizePushButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer Size", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Vertical", Q_NULLPTR));
        mTilesGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "VRT Tiles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMaximumSizeXLabel->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of columns in one tile.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMaximumSizeXLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Max columns", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMaximumSizeXLineEdit->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of columns in one tile.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mMaximumSizeYLabel->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of rows in one tile.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMaximumSizeYLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Max rows", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMaximumSizeYLineEdit->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of rows in one tile.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCreateOptionsGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create Options", Q_NULLPTR));
        mPyramidsGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Pyramids", Q_NULLPTR));
        mPyramidResolutionsLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Resolutions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mPyramidResolutionsLineEdit->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Pyramid resolutions corresponding to levels given", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mPyramidResolutionsLineEdit->setText(QString());
        mPyramidsUseExistingCheckBox->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Use existing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNoDataGroupBox->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Additional no data values. The specified values will be set to no data in output raster.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNoDataGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "No data values", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRemoveSelectedNoDataToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Remove selected row", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveSelectedNoDataToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddNoDataManuallyToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Add values manually", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddNoDataManuallyToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mLoadTransparentNoDataToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Load user defined fully transparent (100%) values ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLoadTransparentNoDataToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveAllNoDataToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Clear all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveAllNoDataToolButton->setText(QString());
        mAddToCanvas->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Add saved file to map", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerSaveAsDialogBase: public Ui_QgsRasterLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERSAVEASDIALOGBASE_H
