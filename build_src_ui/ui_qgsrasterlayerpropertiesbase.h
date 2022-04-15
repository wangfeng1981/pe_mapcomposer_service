/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERPROPERTIESBASE_H
#define UI_QGSRASTERLAYERPROPERTIESBASE_H

#include <QtCore/QDate>
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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdatetimeedit.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldcombobox.h"
#include "qgsfilterlineedit.h"
#include "qgslayertreeembeddedconfigwidget.h"
#include "qgsopacitywidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsrasterbandcombobox.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_20;
    QgsWebView *mMetadataViewer;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QLineEdit *mLayerOrigNameLineEd;
    QLabel *label_9;
    QLineEdit *leDisplayName;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_17;
    QFrame *line_4;
    QGroupBox *mWmstGroup;
    QGridLayout *gridLayout_15;
    QLabel *mLabel;
    QComboBox *mFetchModeComboBox;
    QCheckBox *mDisableTime;
    QLabel *label_16;
    QFrame *mWmstReferenceTimeFrame;
    QGridLayout *gridLayout_17;
    QLabel *mReferenceTimeLabel;
    QgsDateTimeEdit *mReferenceDateTimeEdit;
    QLabel *mWmstOptionsLabel;
    QCheckBox *mReferenceTime;
    QFrame *mWmstOptions;
    QVBoxLayout *verticalLayout_22;
    QRadioButton *mStaticTemporalRange;
    QFrame *mStaticWmstFrame;
    QGridLayout *gridLayout_16;
    QPushButton *mSetEndAsStartStaticButton;
    QLabel *label_13;
    QgsDateTimeEdit *mEndStaticDateTimeEdit;
    QLabel *label_4;
    QgsDateTimeEdit *mStartStaticDateTimeEdit;
    QLabel *label_10;
    QLabel *mProjectTemporalRangeLabel;
    QRadioButton *mProjectTemporalRange;
    QGroupBox *mPostgresRasterTemporalGroup;
    QGridLayout *gridLayout_18;
    QLabel *mPostgresRasterTemporalLabel;
    QLabel *label_12;
    QgsFieldComboBox *mPostgresRasterTemporalFieldComboBox;
    QLabel *label;
    QgsDateTimeEdit *mPostgresRasterDefaultTime;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QgsCollapsibleGroupBox *mBandRenderingGrpBx;
    QGridLayout *gridLayout_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mRenderTypeLabel;
    QComboBox *mRenderTypeComboBox;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *mRendererStackedWidget;
    QgsCollapsibleGroupBox *mColorRenderingGrpBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *mBlendTypeLabel;
    QLabel *label_2;
    QSlider *mSliderBrightness;
    QgsSpinBox *mBrightnessSpinBox;
    QSlider *mSliderContrast;
    QLabel *label_5;
    QgsSpinBox *mContrastSpinBox;
    QFrame *line_2;
    QFrame *line;
    QLabel *labelGrayscale;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mColorizeCheck;
    QgsColorButton *btnColorizeColor;
    QLabel *labelColorizeStrength;
    QSlider *sliderColorizeStrength;
    QgsSpinBox *spinColorizeStrength;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QComboBox *comboGrayscale;
    QToolButton *mResetColorRenderingBtn;
    QLabel *label_15;
    QSlider *mSliderGamma;
    QgsDoubleSpinBox *mGammaSpinBox;
    QFrame *line_3;
    QLabel *labelSaturation;
    QSlider *sliderSaturation;
    QgsSpinBox *spinBoxSaturation;
    QgsCollapsibleGroupBox *mResamplingGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mZoomedInResamplingLabel;
    QComboBox *mZoomedInResamplingComboBox;
    QLabel *mZoomedOutResamplingLabel;
    QComboBox *mZoomedOutResamplingComboBox;
    QLabel *mMaximumOversamplingLabel;
    QgsDoubleSpinBox *mMaximumOversamplingSpinBox;
    QCheckBox *mCbEarlyResampling;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *spacer_2;
    QGroupBox *groupBox10;
    QGridLayout *_7;
    QLabel *pixmapThumbnail;
    QGroupBox *groupBox9;
    QGridLayout *_8;
    QLabel *pixmapLegend;
    QGroupBox *groupBox8;
    QGridLayout *_9;
    QLabel *pixmapPalette;
    QSpacerItem *spacer;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Transparency;
    QVBoxLayout *verticalLayout_4;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    QgsCollapsibleGroupBox *gboxNoDataValue_2;
    QGridLayout *gridLayout_13;
    QgsOpacityWidget *mOpacityWidget;
    QgsCollapsibleGroupBox *gboxNoDataValue;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mSrcNoDataValueCheckBox;
    QLabel *lblSrcNoDataValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblUserNoDataValueLabel;
    QLineEdit *leNoDataValue;
    QgsCollapsibleGroupBox *gboxCustomTransparency;
    QGridLayout *gridLayout_3;
    QTableWidget *tableTransparency;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblTransparent;
    QgsRasterBandComboBox *cboxTransparencyBand;
    QVBoxLayout *_2;
    QToolButton *pbnAddValuesManually;
    QToolButton *pbnAddValuesFromDisplay;
    QToolButton *pbnRemoveSelectedRow;
    QToolButton *pbnDefaultValues;
    QToolButton *pbnImportTransparentPixelValues;
    QToolButton *pbnExportTransparentPixelValues;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_5;
    QWidget *mOptsPage_Histogram;
    QVBoxLayout *verticalLayout_15;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *mHistogramGrpBx;
    QVBoxLayout *verticalLayout_19;
    QStackedWidget *mHistogramStackedWidget;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_11;
    QgsCollapsibleGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_5;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mRefreshLayerCheckBox;
    QgsDoubleSpinBox *mRefreshLayerIntervalSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *mOptsPage_Temporal;
    QVBoxLayout *verticalLayout_21;
    QFrame *temporalFrame;
    QWidget *mOptsPage_Pyramids;
    QVBoxLayout *verticalLayout_9;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *mPyramidsGrpBx;
    QGridLayout *gridLayout_6;
    QLabel *textLabel4_2;
    QGridLayout *gridLayout_8;
    QLabel *textLabel5;
    QListWidget *lbxPyramidResolutions;
    QTextEdit *tePyramidDescription;
    QPushButton *buttonBuildPyramids;
    QComboBox *cboResamplingMethod;
    QProgressBar *mPyramidProgress;
    QComboBox *cbxPyramidsFormat;
    QLabel *label_11;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_13;
    QFrame *metadataFrame;
    QWidget *mOptsPage_Legend;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_17;
    QgsLayerTreeEmbeddedConfigWidget *mLegendConfigEmbeddedWidget;
    QWidget *mOptsPage_Server;
    QVBoxLayout *verticalLayout_8;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_12;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLabel *mLayerTitleLabel;
    QLabel *mLayerKeywordListLabel_3;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLineEdit *mLayerKeywordListLineEdit;
    QLabel *mLayerKeywordListLabel;
    QLineEdit *mLayerShortNameLineEdit;
    QLabel *mLayerShortNameLabel;
    QLabel *mLayerAbstractLabel;
    QTextEdit *mLayerAbstractTextEdit;
    QLineEdit *mLayerTitleLineEdit;
    QgsCollapsibleGroupBox *mMetaAttributionGrpBx;
    QGridLayout *gridLayout_7;
    QLabel *mLayerAttributionLabel;
    QLineEdit *mLayerAttributionLineEdit;
    QLabel *mLayerAttributionUrlLabel;
    QLineEdit *mLayerAttributionUrlLineEdit;
    QgsCollapsibleGroupBox *mMetaMetaUrlGrpBx;
    QGridLayout *gridLayout_9;
    QLabel *mLayerMetadataUrlLabel;
    QLineEdit *mLayerMetadataUrlLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mLayerMetadataUrlTypeLabel;
    QComboBox *mLayerMetadataUrlTypeComboBox;
    QLabel *mLayerMetadataUrlFormatLabel;
    QComboBox *mLayerMetadataUrlFormatComboBox;
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;
    QgsCollapsibleGroupBox *mWMSPrintGroupBox;
    QGridLayout *gridLayout_4;
    QLineEdit *mWMSPrintLayerLineEdit;
    QCheckBox *mPublishDataSourceUrlCheckBox;
    QCheckBox *mBackgroundLayerCheckBox;
    QSpacerItem *verticalSpacer_4;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        if (QgsRasterLayerPropertiesBase->objectName().isEmpty())
            QgsRasterLayerPropertiesBase->setObjectName(QStringLiteral("QgsRasterLayerPropertiesBase"));
        QgsRasterLayerPropertiesBase->resize(815, 730);
        QgsRasterLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsRasterLayerPropertiesBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsRasterLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QStringLiteral("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QStringLiteral("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/transparency.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/histogram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/propertyicons/pyramids.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/propertyicons/overlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon10);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QStringLiteral("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QStringLiteral("mOptsPage_Information"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mMetadataViewer = new QgsWebView(mOptsPage_Information);
        mMetadataViewer->setObjectName(QStringLiteral("mMetadataViewer"));

        verticalLayout_20->addWidget(mMetadataViewer);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QStringLiteral("mOptsPage_Source"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mOptsPage_Source);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 325, 978));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_8 = new QLabel(scrollAreaWidgetContents_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_14->addWidget(label_8);

        mLayerOrigNameLineEd = new QLineEdit(scrollAreaWidgetContents_3);
        mLayerOrigNameLineEd->setObjectName(QStringLiteral("mLayerOrigNameLineEd"));

        horizontalLayout_14->addWidget(mLayerOrigNameLineEd);

        label_9 = new QLabel(scrollAreaWidgetContents_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_14->addWidget(label_9);

        leDisplayName = new QLineEdit(scrollAreaWidgetContents_3);
        leDisplayName->setObjectName(QStringLiteral("leDisplayName"));
        leDisplayName->setStyleSheet(QLatin1String("color: #505050;\n"
"background-color: #F0F0F0;\n"
"border: 1px solid #B0B0B0;\n"
"border-radius: 2px;"));
        leDisplayName->setReadOnly(true);

        horizontalLayout_14->addWidget(leDisplayName);


        verticalLayout_7->addLayout(horizontalLayout_14);

        mCrsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        mCrsGroupBox->setObjectName(QStringLiteral("mCrsGroupBox"));
        mCrsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mCrsGroupBox->setCheckable(false);
        mCrsGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("vectorgeneral")));
        verticalLayout_28 = new QVBoxLayout(mCrsGroupBox);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        mCrsSelector = new QgsProjectionSelectionWidget(mCrsGroupBox);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_28->addWidget(mCrsSelector);

        label_17 = new QLabel(mCrsGroupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setTextFormat(Qt::RichText);
        label_17->setWordWrap(true);

        verticalLayout_28->addWidget(label_17);

        line_4 = new QFrame(mCrsGroupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_4);


        verticalLayout_7->addWidget(mCrsGroupBox);

        mWmstGroup = new QGroupBox(scrollAreaWidgetContents_3);
        mWmstGroup->setObjectName(QStringLiteral("mWmstGroup"));
        mWmstGroup->setEnabled(true);
        mWmstGroup->setCheckable(true);
        mWmstGroup->setChecked(true);
        gridLayout_15 = new QGridLayout(mWmstGroup);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        mLabel = new QLabel(mWmstGroup);
        mLabel->setObjectName(QStringLiteral("mLabel"));
        mLabel->setWordWrap(true);

        gridLayout_15->addWidget(mLabel, 0, 0, 1, 3);

        mFetchModeComboBox = new QComboBox(mWmstGroup);
        mFetchModeComboBox->setObjectName(QStringLiteral("mFetchModeComboBox"));

        gridLayout_15->addWidget(mFetchModeComboBox, 1, 1, 2, 2);

        mDisableTime = new QCheckBox(mWmstGroup);
        mDisableTime->setObjectName(QStringLiteral("mDisableTime"));

        gridLayout_15->addWidget(mDisableTime, 3, 0, 1, 1);

        label_16 = new QLabel(mWmstGroup);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_15->addWidget(label_16, 1, 0, 1, 1);

        mWmstReferenceTimeFrame = new QFrame(mWmstGroup);
        mWmstReferenceTimeFrame->setObjectName(QStringLiteral("mWmstReferenceTimeFrame"));
        mWmstReferenceTimeFrame->setEnabled(false);
        mWmstReferenceTimeFrame->setFrameShape(QFrame::NoFrame);
        mWmstReferenceTimeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(mWmstReferenceTimeFrame);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(-1, 0, -1, -1);
        mReferenceTimeLabel = new QLabel(mWmstReferenceTimeFrame);
        mReferenceTimeLabel->setObjectName(QStringLiteral("mReferenceTimeLabel"));

        gridLayout_17->addWidget(mReferenceTimeLabel, 1, 0, 1, 1);

        mReferenceDateTimeEdit = new QgsDateTimeEdit(mWmstReferenceTimeFrame);
        mReferenceDateTimeEdit->setObjectName(QStringLiteral("mReferenceDateTimeEdit"));
        mReferenceDateTimeEdit->setDateTime(QDateTime(QDate(2020, 1, 25), QTime(6, 20, 36)));
        mReferenceDateTimeEdit->setDate(QDate(2020, 1, 25));
        mReferenceDateTimeEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        mReferenceDateTimeEdit->setCalendarPopup(false);
        mReferenceDateTimeEdit->setTimeSpec(Qt::UTC);
        mReferenceDateTimeEdit->setProperty("allowNull", QVariant(false));

        gridLayout_17->addWidget(mReferenceDateTimeEdit, 0, 0, 1, 1);


        gridLayout_15->addWidget(mWmstReferenceTimeFrame, 8, 0, 1, 1);

        mWmstOptionsLabel = new QLabel(mWmstGroup);
        mWmstOptionsLabel->setObjectName(QStringLiteral("mWmstOptionsLabel"));
        mWmstOptionsLabel->setWordWrap(true);

        gridLayout_15->addWidget(mWmstOptionsLabel, 4, 0, 1, 3);

        mReferenceTime = new QCheckBox(mWmstGroup);
        mReferenceTime->setObjectName(QStringLiteral("mReferenceTime"));

        gridLayout_15->addWidget(mReferenceTime, 7, 0, 1, 1);

        mWmstOptions = new QFrame(mWmstGroup);
        mWmstOptions->setObjectName(QStringLiteral("mWmstOptions"));
        mWmstOptions->setFrameShape(QFrame::NoFrame);
        mWmstOptions->setFrameShadow(QFrame::Raised);
        verticalLayout_22 = new QVBoxLayout(mWmstOptions);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, -1, -1);
        mStaticTemporalRange = new QRadioButton(mWmstOptions);
        mStaticTemporalRange->setObjectName(QStringLiteral("mStaticTemporalRange"));

        verticalLayout_22->addWidget(mStaticTemporalRange);

        mStaticWmstFrame = new QFrame(mWmstOptions);
        mStaticWmstFrame->setObjectName(QStringLiteral("mStaticWmstFrame"));
        mStaticWmstFrame->setEnabled(false);
        mStaticWmstFrame->setFrameShape(QFrame::NoFrame);
        mStaticWmstFrame->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(mStaticWmstFrame);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 0, -1, 0);
        mSetEndAsStartStaticButton = new QPushButton(mStaticWmstFrame);
        mSetEndAsStartStaticButton->setObjectName(QStringLiteral("mSetEndAsStartStaticButton"));

        gridLayout_16->addWidget(mSetEndAsStartStaticButton, 2, 1, 1, 2);

        label_13 = new QLabel(mStaticWmstFrame);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_16->addWidget(label_13, 0, 0, 1, 1);

        mEndStaticDateTimeEdit = new QgsDateTimeEdit(mStaticWmstFrame);
        mEndStaticDateTimeEdit->setObjectName(QStringLiteral("mEndStaticDateTimeEdit"));
        mEndStaticDateTimeEdit->setTimeSpec(Qt::UTC);
        mEndStaticDateTimeEdit->setProperty("allowNull", QVariant(false));

        gridLayout_16->addWidget(mEndStaticDateTimeEdit, 1, 1, 1, 2);

        label_4 = new QLabel(mStaticWmstFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_16->addWidget(label_4, 1, 0, 1, 1);

        mStartStaticDateTimeEdit = new QgsDateTimeEdit(mStaticWmstFrame);
        mStartStaticDateTimeEdit->setObjectName(QStringLiteral("mStartStaticDateTimeEdit"));
        mStartStaticDateTimeEdit->setDateTime(QDateTime(QDate(2020, 4, 29), QTime(9, 3, 57)));
        mStartStaticDateTimeEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        mStartStaticDateTimeEdit->setTimeSpec(Qt::UTC);
        mStartStaticDateTimeEdit->setProperty("allowNull", QVariant(false));

        gridLayout_16->addWidget(mStartStaticDateTimeEdit, 0, 1, 1, 2);


        verticalLayout_22->addWidget(mStaticWmstFrame);

        label_10 = new QLabel(mWmstOptions);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setWordWrap(true);

        verticalLayout_22->addWidget(label_10);

        mProjectTemporalRangeLabel = new QLabel(mWmstOptions);
        mProjectTemporalRangeLabel->setObjectName(QStringLiteral("mProjectTemporalRangeLabel"));
        mProjectTemporalRangeLabel->setWordWrap(true);

        verticalLayout_22->addWidget(mProjectTemporalRangeLabel);

        mProjectTemporalRange = new QRadioButton(mWmstOptions);
        mProjectTemporalRange->setObjectName(QStringLiteral("mProjectTemporalRange"));

        verticalLayout_22->addWidget(mProjectTemporalRange);


        gridLayout_15->addWidget(mWmstOptions, 5, 0, 1, 3);


        verticalLayout_7->addWidget(mWmstGroup);

        mPostgresRasterTemporalGroup = new QGroupBox(scrollAreaWidgetContents_3);
        mPostgresRasterTemporalGroup->setObjectName(QStringLiteral("mPostgresRasterTemporalGroup"));
        mPostgresRasterTemporalGroup->setCheckable(true);
        gridLayout_18 = new QGridLayout(mPostgresRasterTemporalGroup);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        mPostgresRasterTemporalLabel = new QLabel(mPostgresRasterTemporalGroup);
        mPostgresRasterTemporalLabel->setObjectName(QStringLiteral("mPostgresRasterTemporalLabel"));
        mPostgresRasterTemporalLabel->setWordWrap(true);

        gridLayout_18->addWidget(mPostgresRasterTemporalLabel, 0, 0, 1, 2);

        label_12 = new QLabel(mPostgresRasterTemporalGroup);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_18->addWidget(label_12, 3, 0, 1, 1);

        mPostgresRasterTemporalFieldComboBox = new QgsFieldComboBox(mPostgresRasterTemporalGroup);
        mPostgresRasterTemporalFieldComboBox->setObjectName(QStringLiteral("mPostgresRasterTemporalFieldComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPostgresRasterTemporalFieldComboBox->sizePolicy().hasHeightForWidth());
        mPostgresRasterTemporalFieldComboBox->setSizePolicy(sizePolicy2);

        gridLayout_18->addWidget(mPostgresRasterTemporalFieldComboBox, 1, 1, 1, 1);

        label = new QLabel(mPostgresRasterTemporalGroup);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_18->addWidget(label, 1, 0, 1, 1);

        mPostgresRasterDefaultTime = new QgsDateTimeEdit(mPostgresRasterTemporalGroup);
        mPostgresRasterDefaultTime->setObjectName(QStringLiteral("mPostgresRasterDefaultTime"));

        gridLayout_18->addWidget(mPostgresRasterDefaultTime, 3, 1, 1, 1);

        label_14 = new QLabel(mPostgresRasterTemporalGroup);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setWordWrap(true);

        gridLayout_18->addWidget(label_14, 2, 0, 1, 2);


        verticalLayout_7->addWidget(mPostgresRasterTemporalGroup);

        verticalSpacer_3 = new QSpacerItem(17, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QStringLiteral("mOptsPage_Style"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptsPage_Style);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 643, 682));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        mBandRenderingGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mBandRenderingGrpBx->setObjectName(QStringLiteral("mBandRenderingGrpBx"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(mBandRenderingGrpBx->sizePolicy().hasHeightForWidth());
        mBandRenderingGrpBx->setSizePolicy(sizePolicy3);
        mBandRenderingGrpBx->setProperty("syncGroup", QVariant(QStringLiteral("rasterstyle")));
        gridLayout_14 = new QGridLayout(mBandRenderingGrpBx);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        mRenderTypeLabel = new QLabel(mBandRenderingGrpBx);
        mRenderTypeLabel->setObjectName(QStringLiteral("mRenderTypeLabel"));

        horizontalLayout_2->addWidget(mRenderTypeLabel);

        mRenderTypeComboBox = new QComboBox(mBandRenderingGrpBx);
        mRenderTypeComboBox->setObjectName(QStringLiteral("mRenderTypeComboBox"));

        horizontalLayout_2->addWidget(mRenderTypeComboBox);

        horizontalSpacer_2 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_14->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        mRendererStackedWidget = new QStackedWidget(mBandRenderingGrpBx);
        mRendererStackedWidget->setObjectName(QStringLiteral("mRendererStackedWidget"));

        gridLayout_14->addWidget(mRendererStackedWidget, 1, 0, 1, 1);


        verticalLayout_10->addWidget(mBandRenderingGrpBx);

        mColorRenderingGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mColorRenderingGrpBox->setObjectName(QStringLiteral("mColorRenderingGrpBox"));
        mColorRenderingGrpBox->setProperty("collapsed", QVariant(false));
        mColorRenderingGrpBox->setProperty("syncGroup", QVariant(QStringLiteral("rasterstyle")));
        mColorRenderingGrpBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_2 = new QGridLayout(mColorRenderingGrpBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(mColorRenderingGrpBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        mBlendTypeLabel = new QLabel(mColorRenderingGrpBox);
        mBlendTypeLabel->setObjectName(QStringLiteral("mBlendTypeLabel"));

        gridLayout_2->addWidget(mBlendTypeLabel, 0, 0, 1, 1);

        label_2 = new QLabel(mColorRenderingGrpBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mSliderBrightness = new QSlider(mColorRenderingGrpBox);
        mSliderBrightness->setObjectName(QStringLiteral("mSliderBrightness"));
        mSliderBrightness->setMinimumSize(QSize(75, 0));
        mSliderBrightness->setMinimum(-255);
        mSliderBrightness->setMaximum(255);
        mSliderBrightness->setOrientation(Qt::Horizontal);
        mSliderBrightness->setTickPosition(QSlider::NoTicks);
        mSliderBrightness->setTickInterval(0);

        gridLayout_2->addWidget(mSliderBrightness, 1, 1, 1, 1);

        mBrightnessSpinBox = new QgsSpinBox(mColorRenderingGrpBox);
        mBrightnessSpinBox->setObjectName(QStringLiteral("mBrightnessSpinBox"));
        mBrightnessSpinBox->setMinimum(-255);
        mBrightnessSpinBox->setMaximum(255);

        gridLayout_2->addWidget(mBrightnessSpinBox, 1, 2, 1, 1);

        mSliderContrast = new QSlider(mColorRenderingGrpBox);
        mSliderContrast->setObjectName(QStringLiteral("mSliderContrast"));
        mSliderContrast->setMinimumSize(QSize(75, 0));
        mSliderContrast->setMinimum(-100);
        mSliderContrast->setMaximum(100);
        mSliderContrast->setSingleStep(1);
        mSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(mSliderContrast, 1, 5, 1, 1);

        label_5 = new QLabel(mColorRenderingGrpBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 4, 1, 1);

        mContrastSpinBox = new QgsSpinBox(mColorRenderingGrpBox);
        mContrastSpinBox->setObjectName(QStringLiteral("mContrastSpinBox"));
        mContrastSpinBox->setMinimum(-100);
        mContrastSpinBox->setMaximum(100);

        gridLayout_2->addWidget(mContrastSpinBox, 1, 6, 1, 1);

        line_2 = new QFrame(mColorRenderingGrpBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 3, 3, 1, 1);

        line = new QFrame(mColorRenderingGrpBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 3, 1, 1);

        labelGrayscale = new QLabel(mColorRenderingGrpBox);
        labelGrayscale->setObjectName(QStringLiteral("labelGrayscale"));

        gridLayout_2->addWidget(labelGrayscale, 3, 4, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        mColorizeCheck = new QCheckBox(mColorRenderingGrpBox);
        mColorizeCheck->setObjectName(QStringLiteral("mColorizeCheck"));

        horizontalLayout_12->addWidget(mColorizeCheck);

        btnColorizeColor = new QgsColorButton(mColorRenderingGrpBox);
        btnColorizeColor->setObjectName(QStringLiteral("btnColorizeColor"));
        btnColorizeColor->setMinimumSize(QSize(100, 0));
        btnColorizeColor->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(btnColorizeColor);

        labelColorizeStrength = new QLabel(mColorRenderingGrpBox);
        labelColorizeStrength->setObjectName(QStringLiteral("labelColorizeStrength"));

        horizontalLayout_12->addWidget(labelColorizeStrength);

        sliderColorizeStrength = new QSlider(mColorRenderingGrpBox);
        sliderColorizeStrength->setObjectName(QStringLiteral("sliderColorizeStrength"));
        sliderColorizeStrength->setMaximum(100);
        sliderColorizeStrength->setValue(100);
        sliderColorizeStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(sliderColorizeStrength);

        spinColorizeStrength = new QgsSpinBox(mColorRenderingGrpBox);
        spinColorizeStrength->setObjectName(QStringLiteral("spinColorizeStrength"));
        spinColorizeStrength->setMinimum(0);
        spinColorizeStrength->setMaximum(100);
        spinColorizeStrength->setValue(100);

        horizontalLayout_12->addWidget(spinColorizeStrength);


        gridLayout_2->addLayout(horizontalLayout_12, 4, 1, 1, 6);

        mBlendModeComboBox = new QgsBlendModeComboBox(mColorRenderingGrpBox);
        mBlendModeComboBox->setObjectName(QStringLiteral("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(mBlendModeComboBox, 0, 1, 1, 3);

        comboGrayscale = new QComboBox(mColorRenderingGrpBox);
        comboGrayscale->setObjectName(QStringLiteral("comboGrayscale"));

        gridLayout_2->addWidget(comboGrayscale, 3, 5, 1, 2);

        mResetColorRenderingBtn = new QToolButton(mColorRenderingGrpBox);
        mResetColorRenderingBtn->setObjectName(QStringLiteral("mResetColorRenderingBtn"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetColorRenderingBtn->setIcon(icon11);
        mResetColorRenderingBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(mResetColorRenderingBtn, 0, 6, 1, 1);

        label_15 = new QLabel(mColorRenderingGrpBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 2, 0, 1, 1);

        mSliderGamma = new QSlider(mColorRenderingGrpBox);
        mSliderGamma->setObjectName(QStringLiteral("mSliderGamma"));
        mSliderGamma->setMinimum(10);
        mSliderGamma->setMaximum(1000);
        mSliderGamma->setSingleStep(10);
        mSliderGamma->setPageStep(100);
        mSliderGamma->setValue(100);
        mSliderGamma->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(mSliderGamma, 2, 1, 1, 1);

        mGammaSpinBox = new QgsDoubleSpinBox(mColorRenderingGrpBox);
        mGammaSpinBox->setObjectName(QStringLiteral("mGammaSpinBox"));
        mGammaSpinBox->setMinimum(0.1);
        mGammaSpinBox->setMaximum(10);
        mGammaSpinBox->setSingleStep(0.1);
        mGammaSpinBox->setValue(1);

        gridLayout_2->addWidget(mGammaSpinBox, 2, 2, 1, 1);

        line_3 = new QFrame(mColorRenderingGrpBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 2, 3, 1, 1);

        labelSaturation = new QLabel(mColorRenderingGrpBox);
        labelSaturation->setObjectName(QStringLiteral("labelSaturation"));

        gridLayout_2->addWidget(labelSaturation, 2, 4, 1, 1);

        sliderSaturation = new QSlider(mColorRenderingGrpBox);
        sliderSaturation->setObjectName(QStringLiteral("sliderSaturation"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sliderSaturation->sizePolicy().hasHeightForWidth());
        sliderSaturation->setSizePolicy(sizePolicy4);
        sliderSaturation->setMinimumSize(QSize(75, 0));
        sliderSaturation->setMinimum(-100);
        sliderSaturation->setMaximum(100);
        sliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderSaturation, 2, 5, 1, 1);

        spinBoxSaturation = new QgsSpinBox(mColorRenderingGrpBox);
        spinBoxSaturation->setObjectName(QStringLiteral("spinBoxSaturation"));
        spinBoxSaturation->setMinimum(-100);
        spinBoxSaturation->setMaximum(100);
        spinBoxSaturation->setValue(0);
        spinBoxSaturation->setProperty("decimals", QVariant(0));

        gridLayout_2->addWidget(spinBoxSaturation, 2, 6, 1, 1);


        verticalLayout_10->addWidget(mColorRenderingGrpBox);

        mResamplingGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mResamplingGroupBox->setObjectName(QStringLiteral("mResamplingGroupBox"));
        mResamplingGroupBox->setCheckable(false);
        mResamplingGroupBox->setProperty("collapsed", QVariant(false));
        mResamplingGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("rasterstyle")));
        mResamplingGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout = new QHBoxLayout(mResamplingGroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mZoomedInResamplingLabel = new QLabel(mResamplingGroupBox);
        mZoomedInResamplingLabel->setObjectName(QStringLiteral("mZoomedInResamplingLabel"));

        horizontalLayout->addWidget(mZoomedInResamplingLabel);

        mZoomedInResamplingComboBox = new QComboBox(mResamplingGroupBox);
        mZoomedInResamplingComboBox->setObjectName(QStringLiteral("mZoomedInResamplingComboBox"));

        horizontalLayout->addWidget(mZoomedInResamplingComboBox);

        mZoomedOutResamplingLabel = new QLabel(mResamplingGroupBox);
        mZoomedOutResamplingLabel->setObjectName(QStringLiteral("mZoomedOutResamplingLabel"));

        horizontalLayout->addWidget(mZoomedOutResamplingLabel);

        mZoomedOutResamplingComboBox = new QComboBox(mResamplingGroupBox);
        mZoomedOutResamplingComboBox->setObjectName(QStringLiteral("mZoomedOutResamplingComboBox"));

        horizontalLayout->addWidget(mZoomedOutResamplingComboBox);

        mMaximumOversamplingLabel = new QLabel(mResamplingGroupBox);
        mMaximumOversamplingLabel->setObjectName(QStringLiteral("mMaximumOversamplingLabel"));

        horizontalLayout->addWidget(mMaximumOversamplingLabel);

        mMaximumOversamplingSpinBox = new QgsDoubleSpinBox(mResamplingGroupBox);
        mMaximumOversamplingSpinBox->setObjectName(QStringLiteral("mMaximumOversamplingSpinBox"));

        horizontalLayout->addWidget(mMaximumOversamplingSpinBox);

        mCbEarlyResampling = new QCheckBox(mResamplingGroupBox);
        mCbEarlyResampling->setObjectName(QStringLiteral("mCbEarlyResampling"));

        horizontalLayout->addWidget(mCbEarlyResampling);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_10->addWidget(mResamplingGroupBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        spacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(spacer_2);

        groupBox10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox10->setObjectName(QStringLiteral("groupBox10"));
        _7 = new QGridLayout(groupBox10);
        _7->setObjectName(QStringLiteral("_7"));
        pixmapThumbnail = new QLabel(groupBox10);
        pixmapThumbnail->setObjectName(QStringLiteral("pixmapThumbnail"));
        pixmapThumbnail->setMinimumSize(QSize(120, 120));
        pixmapThumbnail->setMaximumSize(QSize(120, 120));
        pixmapThumbnail->setFrameShape(QFrame::StyledPanel);
        pixmapThumbnail->setScaledContents(true);

        _7->addWidget(pixmapThumbnail, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(groupBox10);

        groupBox9 = new QGroupBox(scrollAreaWidgetContents);
        groupBox9->setObjectName(QStringLiteral("groupBox9"));
        _8 = new QGridLayout(groupBox9);
        _8->setObjectName(QStringLiteral("_8"));
        pixmapLegend = new QLabel(groupBox9);
        pixmapLegend->setObjectName(QStringLiteral("pixmapLegend"));
        pixmapLegend->setMinimumSize(QSize(120, 120));
        pixmapLegend->setMaximumSize(QSize(120, 120));
        pixmapLegend->setFrameShape(QFrame::Box);
        pixmapLegend->setScaledContents(true);

        _8->addWidget(pixmapLegend, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(groupBox9);

        groupBox8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox8->setObjectName(QStringLiteral("groupBox8"));
        _9 = new QGridLayout(groupBox8);
        _9->setObjectName(QStringLiteral("_9"));
        pixmapPalette = new QLabel(groupBox8);
        pixmapPalette->setObjectName(QStringLiteral("pixmapPalette"));
        pixmapPalette->setMinimumSize(QSize(120, 120));
        pixmapPalette->setMaximumSize(QSize(120, 120));
        pixmapPalette->setFrameShape(QFrame::Box);
        pixmapPalette->setScaledContents(true);

        _9->addWidget(pixmapPalette, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(groupBox8);

        spacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(spacer);


        verticalLayout_10->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Transparency = new QWidget();
        mOptsPage_Transparency->setObjectName(QStringLiteral("mOptsPage_Transparency"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Transparency);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mOptsPage_Transparency);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 330, 446));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gboxNoDataValue_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxNoDataValue_2->setObjectName(QStringLiteral("gboxNoDataValue_2"));
        gboxNoDataValue_2->setProperty("syncGroup", QVariant(QStringLiteral("rastertransp")));
        gridLayout_13 = new QGridLayout(gboxNoDataValue_2);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        mOpacityWidget = new QgsOpacityWidget(gboxNoDataValue_2);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_13->addWidget(mOpacityWidget, 0, 0, 1, 1);


        verticalLayout_5->addWidget(gboxNoDataValue_2);

        gboxNoDataValue = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxNoDataValue->setObjectName(QStringLiteral("gboxNoDataValue"));
        gboxNoDataValue->setProperty("syncGroup", QVariant(QStringLiteral("rastertransp")));
        gridLayout_11 = new QGridLayout(gboxNoDataValue);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, -1, -1, -1);
        mSrcNoDataValueCheckBox = new QCheckBox(gboxNoDataValue);
        mSrcNoDataValueCheckBox->setObjectName(QStringLiteral("mSrcNoDataValueCheckBox"));

        horizontalLayout_5->addWidget(mSrcNoDataValueCheckBox);

        lblSrcNoDataValue = new QLabel(gboxNoDataValue);
        lblSrcNoDataValue->setObjectName(QStringLiteral("lblSrcNoDataValue"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lblSrcNoDataValue->sizePolicy().hasHeightForWidth());
        lblSrcNoDataValue->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(lblSrcNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lblUserNoDataValueLabel = new QLabel(gboxNoDataValue);
        lblUserNoDataValueLabel->setObjectName(QStringLiteral("lblUserNoDataValueLabel"));

        horizontalLayout_6->addWidget(lblUserNoDataValueLabel);

        leNoDataValue = new QLineEdit(gboxNoDataValue);
        leNoDataValue->setObjectName(QStringLiteral("leNoDataValue"));

        horizontalLayout_6->addWidget(leNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        verticalLayout_5->addWidget(gboxNoDataValue);

        gboxCustomTransparency = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxCustomTransparency->setObjectName(QStringLiteral("gboxCustomTransparency"));
        sizePolicy3.setHeightForWidth(gboxCustomTransparency->sizePolicy().hasHeightForWidth());
        gboxCustomTransparency->setSizePolicy(sizePolicy3);
        gboxCustomTransparency->setProperty("syncGroup", QVariant(QStringLiteral("rastertransp")));
        gridLayout_3 = new QGridLayout(gboxCustomTransparency);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
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

        gridLayout_3->addWidget(tableTransparency, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblTransparent = new QLabel(gboxCustomTransparency);
        lblTransparent->setObjectName(QStringLiteral("lblTransparent"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lblTransparent->sizePolicy().hasHeightForWidth());
        lblTransparent->setSizePolicy(sizePolicy6);

        horizontalLayout_7->addWidget(lblTransparent);

        cboxTransparencyBand = new QgsRasterBandComboBox(gboxCustomTransparency);
        cboxTransparencyBand->setObjectName(QStringLiteral("cboxTransparencyBand"));
        cboxTransparencyBand->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(cboxTransparencyBand->sizePolicy().hasHeightForWidth());
        cboxTransparencyBand->setSizePolicy(sizePolicy7);
        cboxTransparencyBand->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(cboxTransparencyBand);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        _2 = new QVBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 6, 0, 6);
        pbnAddValuesManually = new QToolButton(gboxCustomTransparency);
        pbnAddValuesManually->setObjectName(QStringLiteral("pbnAddValuesManually"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesManually->setIcon(icon12);

        _2->addWidget(pbnAddValuesManually);

        pbnAddValuesFromDisplay = new QToolButton(gboxCustomTransparency);
        pbnAddValuesFromDisplay->setObjectName(QStringLiteral("pbnAddValuesFromDisplay"));
        pbnAddValuesFromDisplay->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/mActionContextHelp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesFromDisplay->setIcon(icon13);

        _2->addWidget(pbnAddValuesFromDisplay);

        pbnRemoveSelectedRow = new QToolButton(gboxCustomTransparency);
        pbnRemoveSelectedRow->setObjectName(QStringLiteral("pbnRemoveSelectedRow"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveSelectedRow->setIcon(icon14);

        _2->addWidget(pbnRemoveSelectedRow);

        pbnDefaultValues = new QToolButton(gboxCustomTransparency);
        pbnDefaultValues->setObjectName(QStringLiteral("pbnDefaultValues"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultValues->setIcon(icon15);

        _2->addWidget(pbnDefaultValues);

        pbnImportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnImportTransparentPixelValues->setObjectName(QStringLiteral("pbnImportTransparentPixelValues"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportTransparentPixelValues->setIcon(icon16);

        _2->addWidget(pbnImportTransparentPixelValues);

        pbnExportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnExportTransparentPixelValues->setObjectName(QStringLiteral("pbnExportTransparentPixelValues"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportTransparentPixelValues->setIcon(icon17);

        _2->addWidget(pbnExportTransparentPixelValues);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(_2, 2, 1, 1, 1);

        label_6 = new QLabel(gboxCustomTransparency);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);


        verticalLayout_5->addWidget(gboxCustomTransparency);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Transparency);
        mOptsPage_Histogram = new QWidget();
        mOptsPage_Histogram->setObjectName(QStringLiteral("mOptsPage_Histogram"));
        verticalLayout_15 = new QVBoxLayout(mOptsPage_Histogram);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mOptsPage_Histogram);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 98, 42));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        mHistogramGrpBx = new QGroupBox(scrollAreaWidgetContents_6);
        mHistogramGrpBx->setObjectName(QStringLiteral("mHistogramGrpBx"));
        verticalLayout_19 = new QVBoxLayout(mHistogramGrpBx);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(-1, -1, 0, -1);
        mHistogramStackedWidget = new QStackedWidget(mHistogramGrpBx);
        mHistogramStackedWidget->setObjectName(QStringLiteral("mHistogramStackedWidget"));

        verticalLayout_19->addWidget(mHistogramStackedWidget);


        verticalLayout_16->addWidget(mHistogramGrpBx);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Histogram);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QStringLiteral("mOptsPage_Rendering"));
        verticalLayout_11 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        chkUseScaleDependentRendering = new QgsCollapsibleGroupBox(mOptsPage_Rendering);
        chkUseScaleDependentRendering->setObjectName(QStringLiteral("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        chkUseScaleDependentRendering->setChecked(false);
        chkUseScaleDependentRendering->setProperty("syncGroup", QVariant(QStringLiteral("rastergeneral")));
        _5 = new QGridLayout(chkUseScaleDependentRendering);
        _5->setObjectName(QStringLiteral("_5"));
        _5->setVerticalSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        mScaleRangeWidget = new QgsScaleRangeWidget(chkUseScaleDependentRendering);
        mScaleRangeWidget->setObjectName(QStringLiteral("mScaleRangeWidget"));

        _5->addWidget(mScaleRangeWidget, 0, 0, 1, 2);


        verticalLayout_11->addWidget(chkUseScaleDependentRendering);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mRefreshLayerCheckBox = new QCheckBox(mOptsPage_Rendering);
        mRefreshLayerCheckBox->setObjectName(QStringLiteral("mRefreshLayerCheckBox"));

        horizontalLayout_3->addWidget(mRefreshLayerCheckBox);

        mRefreshLayerIntervalSpinBox = new QgsDoubleSpinBox(mOptsPage_Rendering);
        mRefreshLayerIntervalSpinBox->setObjectName(QStringLiteral("mRefreshLayerIntervalSpinBox"));
        mRefreshLayerIntervalSpinBox->setDecimals(2);
        mRefreshLayerIntervalSpinBox->setMinimum(0);
        mRefreshLayerIntervalSpinBox->setMaximum(1e+20);
        mRefreshLayerIntervalSpinBox->setSingleStep(5);
        mRefreshLayerIntervalSpinBox->setValue(10);

        horizontalLayout_3->addWidget(mRefreshLayerIntervalSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_11->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Temporal = new QWidget();
        mOptsPage_Temporal->setObjectName(QStringLiteral("mOptsPage_Temporal"));
        verticalLayout_21 = new QVBoxLayout(mOptsPage_Temporal);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        temporalFrame = new QFrame(mOptsPage_Temporal);
        temporalFrame->setObjectName(QStringLiteral("temporalFrame"));
        temporalFrame->setMinimumSize(QSize(100, 450));
        temporalFrame->setStyleSheet(QStringLiteral(""));
        temporalFrame->setFrameShape(QFrame::NoFrame);
        temporalFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_21->addWidget(temporalFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Temporal);
        mOptsPage_Pyramids = new QWidget();
        mOptsPage_Pyramids->setObjectName(QStringLiteral("mOptsPage_Pyramids"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Pyramids);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QgsScrollArea(mOptsPage_Pyramids);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 535, 193));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        mPyramidsGrpBx = new QGroupBox(scrollAreaWidgetContents_5);
        mPyramidsGrpBx->setObjectName(QStringLiteral("mPyramidsGrpBx"));
        gridLayout_6 = new QGridLayout(mPyramidsGrpBx);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        textLabel4_2 = new QLabel(mPyramidsGrpBx);
        textLabel4_2->setObjectName(QStringLiteral("textLabel4_2"));

        gridLayout_6->addWidget(textLabel4_2, 2, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        textLabel5 = new QLabel(mPyramidsGrpBx);
        textLabel5->setObjectName(QStringLiteral("textLabel5"));

        gridLayout_8->addWidget(textLabel5, 0, 1, 1, 1);

        lbxPyramidResolutions = new QListWidget(mPyramidsGrpBx);
        lbxPyramidResolutions->setObjectName(QStringLiteral("lbxPyramidResolutions"));
        lbxPyramidResolutions->setMinimumSize(QSize(150, 0));
        lbxPyramidResolutions->setMaximumSize(QSize(150, 32767));
        lbxPyramidResolutions->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_8->addWidget(lbxPyramidResolutions, 1, 1, 1, 1);

        tePyramidDescription = new QTextEdit(mPyramidsGrpBx);
        tePyramidDescription->setObjectName(QStringLiteral("tePyramidDescription"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(4);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(tePyramidDescription->sizePolicy().hasHeightForWidth());
        tePyramidDescription->setSizePolicy(sizePolicy8);

        gridLayout_8->addWidget(tePyramidDescription, 0, 0, 2, 1);


        gridLayout_6->addLayout(gridLayout_8, 0, 0, 1, 5);

        buttonBuildPyramids = new QPushButton(mPyramidsGrpBx);
        buttonBuildPyramids->setObjectName(QStringLiteral("buttonBuildPyramids"));
        buttonBuildPyramids->setEnabled(false);

        gridLayout_6->addWidget(buttonBuildPyramids, 2, 4, 1, 1);

        cboResamplingMethod = new QComboBox(mPyramidsGrpBx);
        cboResamplingMethod->setObjectName(QStringLiteral("cboResamplingMethod"));

        gridLayout_6->addWidget(cboResamplingMethod, 2, 1, 1, 1);

        mPyramidProgress = new QProgressBar(mPyramidsGrpBx);
        mPyramidProgress->setObjectName(QStringLiteral("mPyramidProgress"));
        mPyramidProgress->setValue(0);

        gridLayout_6->addWidget(mPyramidProgress, 2, 2, 1, 2);

        cbxPyramidsFormat = new QComboBox(mPyramidsGrpBx);
        cbxPyramidsFormat->setObjectName(QStringLiteral("cbxPyramidsFormat"));
        sizePolicy4.setHeightForWidth(cbxPyramidsFormat->sizePolicy().hasHeightForWidth());
        cbxPyramidsFormat->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(cbxPyramidsFormat, 1, 1, 1, 1);

        label_11 = new QLabel(mPyramidsGrpBx);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);


        verticalLayout_12->addWidget(mPyramidsGrpBx);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_9->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mOptsPage_Pyramids);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QStringLiteral("mOptsPage_Metadata"));
        verticalLayout_13 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QStringLiteral("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_13->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        mOptsPage_Legend = new QWidget();
        mOptsPage_Legend->setObjectName(QStringLiteral("mOptsPage_Legend"));
        verticalLayout_18 = new QVBoxLayout(mOptsPage_Legend);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(mOptsPage_Legend);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_17 = new QVBoxLayout(groupBox);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        mLegendConfigEmbeddedWidget = new QgsLayerTreeEmbeddedConfigWidget(groupBox);
        mLegendConfigEmbeddedWidget->setObjectName(QStringLiteral("mLegendConfigEmbeddedWidget"));

        verticalLayout_17->addWidget(mLegendConfigEmbeddedWidget);


        verticalLayout_18->addWidget(groupBox);

        mOptionsStackedWidget->addWidget(mOptsPage_Legend);
        mOptsPage_Server = new QWidget();
        mOptsPage_Server->setObjectName(QStringLiteral("mOptsPage_Server"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Server);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QgsScrollArea(mOptsPage_Server);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 306, 616));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaDescriptionGrpBx->setObjectName(QStringLiteral("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setProperty("syncGroup", QVariant(QStringLiteral("rastermeta")));
        gridLayout_5 = new QGridLayout(mMetaDescriptionGrpBx);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mLayerTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerTitleLabel->setObjectName(QStringLiteral("mLayerTitleLabel"));

        gridLayout_5->addWidget(mLayerTitleLabel, 1, 0, 1, 1);

        mLayerKeywordListLabel_3 = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel_3->setObjectName(QStringLiteral("mLayerKeywordListLabel_3"));

        gridLayout_5->addWidget(mLayerKeywordListLabel_3, 6, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QStringLiteral("mLayerDataUrlLineEdit"));

        horizontalLayout_13->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QStringLiteral("mLayerDataUrlFormatLabel"));

        horizontalLayout_13->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->insertItems(0, QStringList()
         << QStringLiteral("text/html")
         << QStringLiteral("text/plain")
         << QStringLiteral("application/pdf")
        );
        mLayerDataUrlFormatComboBox->setObjectName(QStringLiteral("mLayerDataUrlFormatComboBox"));

        horizontalLayout_13->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_13, 6, 1, 1, 1);

        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QStringLiteral("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 5, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QStringLiteral("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 5, 0, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QStringLiteral("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QStringLiteral("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerAbstractLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerAbstractLabel->setObjectName(QStringLiteral("mLayerAbstractLabel"));

        gridLayout_5->addWidget(mLayerAbstractLabel, 3, 0, 1, 1);

        mLayerAbstractTextEdit = new QTextEdit(mMetaDescriptionGrpBx);
        mLayerAbstractTextEdit->setObjectName(QStringLiteral("mLayerAbstractTextEdit"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy9);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 3, 1, 1, 1);

        mLayerTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerTitleLineEdit->setObjectName(QStringLiteral("mLayerTitleLineEdit"));

        gridLayout_5->addWidget(mLayerTitleLineEdit, 1, 1, 1, 1);


        gridLayout_12->addWidget(mMetaDescriptionGrpBx, 0, 0, 1, 1);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaAttributionGrpBx->setObjectName(QStringLiteral("mMetaAttributionGrpBx"));
        mMetaAttributionGrpBx->setProperty("syncGroup", QVariant(QStringLiteral("vectormeta")));
        gridLayout_7 = new QGridLayout(mMetaAttributionGrpBx);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        mLayerAttributionLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionLabel->setObjectName(QStringLiteral("mLayerAttributionLabel"));

        gridLayout_7->addWidget(mLayerAttributionLabel, 0, 0, 1, 1);

        mLayerAttributionLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionLineEdit->setObjectName(QStringLiteral("mLayerAttributionLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionLineEdit, 0, 1, 1, 1);

        mLayerAttributionUrlLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionUrlLabel->setObjectName(QStringLiteral("mLayerAttributionUrlLabel"));

        gridLayout_7->addWidget(mLayerAttributionUrlLabel, 2, 0, 1, 1);

        mLayerAttributionUrlLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionUrlLineEdit->setObjectName(QStringLiteral("mLayerAttributionUrlLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionUrlLineEdit, 2, 1, 1, 1);


        gridLayout_12->addWidget(mMetaAttributionGrpBx, 1, 0, 1, 1);

        mMetaMetaUrlGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaMetaUrlGrpBx->setObjectName(QStringLiteral("mMetaMetaUrlGrpBx"));
        mMetaMetaUrlGrpBx->setProperty("syncGroup", QVariant(QStringLiteral("vectormeta")));
        gridLayout_9 = new QGridLayout(mMetaMetaUrlGrpBx);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        mLayerMetadataUrlLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlLabel->setObjectName(QStringLiteral("mLayerMetadataUrlLabel"));

        gridLayout_9->addWidget(mLayerMetadataUrlLabel, 0, 0, 1, 1);

        mLayerMetadataUrlLineEdit = new QLineEdit(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlLineEdit->setObjectName(QStringLiteral("mLayerMetadataUrlLineEdit"));

        gridLayout_9->addWidget(mLayerMetadataUrlLineEdit, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        mLayerMetadataUrlTypeLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlTypeLabel->setObjectName(QStringLiteral("mLayerMetadataUrlTypeLabel"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlTypeLabel);

        mLayerMetadataUrlTypeComboBox = new QComboBox(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlTypeComboBox->insertItems(0, QStringList()
         << QStringLiteral("")
         << QStringLiteral("FGDC")
         << QStringLiteral("TC211")
        );
        mLayerMetadataUrlTypeComboBox->setObjectName(QStringLiteral("mLayerMetadataUrlTypeComboBox"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlTypeComboBox);

        mLayerMetadataUrlFormatLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlFormatLabel->setObjectName(QStringLiteral("mLayerMetadataUrlFormatLabel"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlFormatLabel);

        mLayerMetadataUrlFormatComboBox = new QComboBox(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlFormatComboBox->insertItems(0, QStringList()
         << QStringLiteral("")
         << QStringLiteral("text/plain")
         << QStringLiteral("text/xml")
        );
        mLayerMetadataUrlFormatComboBox->setObjectName(QStringLiteral("mLayerMetadataUrlFormatComboBox"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlFormatComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        gridLayout_9->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        gridLayout_12->addWidget(mMetaMetaUrlGrpBx, 2, 0, 1, 1);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaLegendGrpBx->setObjectName(QStringLiteral("mMetaLegendGrpBx"));
        gridLayout_10 = new QGridLayout(mMetaLegendGrpBx);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        mLayerLegendUrlLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlLabel->setObjectName(QStringLiteral("mLayerLegendUrlLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLabel);

        mLayerLegendUrlLineEdit = new QLineEdit(mMetaLegendGrpBx);
        mLayerLegendUrlLineEdit->setObjectName(QStringLiteral("mLayerLegendUrlLineEdit"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLineEdit);

        mLayerLegendUrlFormatLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlFormatLabel->setObjectName(QStringLiteral("mLayerLegendUrlFormatLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatLabel);

        mLayerLegendUrlFormatComboBox = new QComboBox(mMetaLegendGrpBx);
        mLayerLegendUrlFormatComboBox->insertItems(0, QStringList()
         << QStringLiteral("image/png")
         << QStringLiteral("image/jpeg")
        );
        mLayerLegendUrlFormatComboBox->setObjectName(QStringLiteral("mLayerLegendUrlFormatComboBox"));
        mLayerLegendUrlFormatComboBox->setMinimumSize(QSize(137, 0));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatComboBox);


        gridLayout_10->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        gridLayout_12->addWidget(mMetaLegendGrpBx, 3, 0, 1, 1);

        mWMSPrintGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mWMSPrintGroupBox->setObjectName(QStringLiteral("mWMSPrintGroupBox"));
        gridLayout_4 = new QGridLayout(mWMSPrintGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mWMSPrintLayerLineEdit = new QLineEdit(mWMSPrintGroupBox);
        mWMSPrintLayerLineEdit->setObjectName(QStringLiteral("mWMSPrintLayerLineEdit"));

        gridLayout_4->addWidget(mWMSPrintLayerLineEdit, 0, 0, 1, 1);


        gridLayout_12->addWidget(mWMSPrintGroupBox, 4, 0, 1, 1);

        mPublishDataSourceUrlCheckBox = new QCheckBox(scrollAreaWidgetContents_4);
        mPublishDataSourceUrlCheckBox->setObjectName(QStringLiteral("mPublishDataSourceUrlCheckBox"));

        gridLayout_12->addWidget(mPublishDataSourceUrlCheckBox, 5, 0, 1, 1);

        mBackgroundLayerCheckBox = new QCheckBox(scrollAreaWidgetContents_4);
        mBackgroundLayerCheckBox->setObjectName(QStringLiteral("mBackgroundLayerCheckBox"));

        gridLayout_12->addWidget(mBackgroundLayerCheckBox, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 7, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_8->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Server);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsRasterLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy10);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, mLayerOrigNameLineEd);
        QWidget::setTabOrder(mLayerOrigNameLineEd, leDisplayName);
        QWidget::setTabOrder(leDisplayName, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);
        QWidget::setTabOrder(scrollArea, mRenderTypeComboBox);
        QWidget::setTabOrder(mRenderTypeComboBox, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mResetColorRenderingBtn);
        QWidget::setTabOrder(mResetColorRenderingBtn, mSliderBrightness);
        QWidget::setTabOrder(mSliderBrightness, mBrightnessSpinBox);
        QWidget::setTabOrder(mBrightnessSpinBox, mSliderContrast);
        QWidget::setTabOrder(mSliderContrast, mContrastSpinBox);
        QWidget::setTabOrder(mContrastSpinBox, mSliderGamma);
        QWidget::setTabOrder(mSliderGamma, mGammaSpinBox);
        QWidget::setTabOrder(mGammaSpinBox, sliderSaturation);
        QWidget::setTabOrder(sliderSaturation, spinBoxSaturation);
        QWidget::setTabOrder(spinBoxSaturation, comboGrayscale);
        QWidget::setTabOrder(comboGrayscale, mColorizeCheck);
        QWidget::setTabOrder(mColorizeCheck, btnColorizeColor);
        QWidget::setTabOrder(btnColorizeColor, sliderColorizeStrength);
        QWidget::setTabOrder(sliderColorizeStrength, spinColorizeStrength);
        QWidget::setTabOrder(spinColorizeStrength, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, mMaximumOversamplingSpinBox);
        QWidget::setTabOrder(mMaximumOversamplingSpinBox, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mSrcNoDataValueCheckBox);
        QWidget::setTabOrder(mSrcNoDataValueCheckBox, leNoDataValue);
        QWidget::setTabOrder(leNoDataValue, cboxTransparencyBand);
        QWidget::setTabOrder(cboxTransparencyBand, tableTransparency);
        QWidget::setTabOrder(tableTransparency, pbnAddValuesManually);
        QWidget::setTabOrder(pbnAddValuesManually, pbnAddValuesFromDisplay);
        QWidget::setTabOrder(pbnAddValuesFromDisplay, pbnRemoveSelectedRow);
        QWidget::setTabOrder(pbnRemoveSelectedRow, pbnDefaultValues);
        QWidget::setTabOrder(pbnDefaultValues, pbnImportTransparentPixelValues);
        QWidget::setTabOrder(pbnImportTransparentPixelValues, pbnExportTransparentPixelValues);
        QWidget::setTabOrder(pbnExportTransparentPixelValues, chkUseScaleDependentRendering);
        QWidget::setTabOrder(chkUseScaleDependentRendering, mRefreshLayerCheckBox);
        QWidget::setTabOrder(mRefreshLayerCheckBox, mRefreshLayerIntervalSpinBox);
        QWidget::setTabOrder(mRefreshLayerIntervalSpinBox, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, tePyramidDescription);
        QWidget::setTabOrder(tePyramidDescription, lbxPyramidResolutions);
        QWidget::setTabOrder(lbxPyramidResolutions, cbxPyramidsFormat);
        QWidget::setTabOrder(cbxPyramidsFormat, cboResamplingMethod);
        QWidget::setTabOrder(cboResamplingMethod, buttonBuildPyramids);
        QWidget::setTabOrder(buttonBuildPyramids, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mLayerShortNameLineEdit);
        QWidget::setTabOrder(mLayerShortNameLineEdit, mLayerTitleLineEdit);
        QWidget::setTabOrder(mLayerTitleLineEdit, mLayerAbstractTextEdit);
        QWidget::setTabOrder(mLayerAbstractTextEdit, mLayerKeywordListLineEdit);
        QWidget::setTabOrder(mLayerKeywordListLineEdit, mLayerDataUrlLineEdit);
        QWidget::setTabOrder(mLayerDataUrlLineEdit, mLayerDataUrlFormatComboBox);
        QWidget::setTabOrder(mLayerDataUrlFormatComboBox, mLayerAttributionLineEdit);
        QWidget::setTabOrder(mLayerAttributionLineEdit, mLayerAttributionUrlLineEdit);
        QWidget::setTabOrder(mLayerAttributionUrlLineEdit, mLayerMetadataUrlLineEdit);
        QWidget::setTabOrder(mLayerMetadataUrlLineEdit, mLayerMetadataUrlTypeComboBox);
        QWidget::setTabOrder(mLayerMetadataUrlTypeComboBox, mLayerMetadataUrlFormatComboBox);
        QWidget::setTabOrder(mLayerMetadataUrlFormatComboBox, mLayerLegendUrlLineEdit);
        QWidget::setTabOrder(mLayerLegendUrlLineEdit, mLayerLegendUrlFormatComboBox);
        QWidget::setTabOrder(mLayerLegendUrlFormatComboBox, mWMSPrintLayerLineEdit);
        QWidget::setTabOrder(mWMSPrintLayerLineEdit, mPublishDataSourceUrlCheckBox);
        QWidget::setTabOrder(mPublishDataSourceUrlCheckBox, mBackgroundLayerCheckBox);
        QWidget::setTabOrder(mBackgroundLayerCheckBox, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mWmstGroup);
        QWidget::setTabOrder(mWmstGroup, mFetchModeComboBox);
        QWidget::setTabOrder(mFetchModeComboBox, mDisableTime);
        QWidget::setTabOrder(mDisableTime, mReferenceDateTimeEdit);
        QWidget::setTabOrder(mReferenceDateTimeEdit, mReferenceTime);
        QWidget::setTabOrder(mReferenceTime, mStaticTemporalRange);
        QWidget::setTabOrder(mStaticTemporalRange, mSetEndAsStartStaticButton);
        QWidget::setTabOrder(mSetEndAsStartStaticButton, mEndStaticDateTimeEdit);
        QWidget::setTabOrder(mEndStaticDateTimeEdit, mStartStaticDateTimeEdit);
        QWidget::setTabOrder(mStartStaticDateTimeEdit, mProjectTemporalRange);
        QWidget::setTabOrder(mProjectTemporalRange, mPostgresRasterTemporalGroup);
        QWidget::setTabOrder(mPostgresRasterTemporalGroup, mPostgresRasterTemporalFieldComboBox);
        QWidget::setTabOrder(mPostgresRasterTemporalFieldComboBox, mPostgresRasterDefaultTime);

        retranslateUi(QgsRasterLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsListWidget->setCurrentRow(0);
        mOptionsStackedWidget->setCurrentIndex(0);
        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        QgsRasterLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Raster Layer Properties", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Information", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Source", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Symbology", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Symbology", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Rendering", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Rendering", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Temporal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Temporal Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Metadata", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Legend", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "QGIS Server", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem10->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Edit QGIS Server settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_8->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Layer name", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "displayed as", Q_NULLPTR));
        mCrsGroupBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", Q_NULLPTR));
        label_17->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of the raster layer. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p><p>The Processing \342\200\234<span style=\" font-style:italic;\">Warp (reproject)</span>\342\200\235 tool should be used to reproject a raster source and permanently change the data source's CRS.</p></body></html>", Q_NULLPTR));
        mWmstGroup->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Use static WMS-T capabilities", Q_NULLPTR));
        mLabel->setText(QString());
        mDisableTime->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Use dates only", Q_NULLPTR));
        label_16->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Time slice mode", Q_NULLPTR));
        mReferenceTimeLabel->setText(QString());
        mReferenceDateTimeEdit->setDisplayFormat(QApplication::translate("QgsRasterLayerPropertiesBase", "M/d/yyyy H:mm:ss AP", Q_NULLPTR));
        mWmstOptionsLabel->setText(QString());
        mReferenceTime->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Reference time", Q_NULLPTR));
        mStaticTemporalRange->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Use static WMS-T temporal range", Q_NULLPTR));
        mSetEndAsStartStaticButton->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Set end same as start", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Start date", Q_NULLPTR));
        mEndStaticDateTimeEdit->setDisplayFormat(QApplication::translate("QgsRasterLayerPropertiesBase", "M/d/yyyy H:mm:ss AP", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "End date", Q_NULLPTR));
        mStartStaticDateTimeEdit->setDisplayFormat(QApplication::translate("QgsRasterLayerPropertiesBase", "M/d/yyyy H:mm:ss AP", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Note:  If the capabilities of this layer move out of this time range, the range will be reset to layer's advertised  default layer time range.", Q_NULLPTR));
        mProjectTemporalRangeLabel->setText(QString());
        mProjectTemporalRange->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Pass project temporal range to provider", Q_NULLPTR));
        mPostgresRasterTemporalGroup->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Temporal capabilities", Q_NULLPTR));
        mPostgresRasterTemporalLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "If the dataset contains multiple rasters belonging to a time series, specify the field that contains the time information, the type of the field can be any type that can be converted to a timestamp.", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Default time", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Temporal field", Q_NULLPTR));
        label_14->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<html><head/><body><p>A default value can be specified and it will be used when the temporal controller is not requesting any particular time.</p><p>It is recommended to set a default temporal value here instead of using a provider filter because the provider filter will still be active when using the temporal controller while this default value will be ignored.</p></body></html>", Q_NULLPTR));
        mBandRenderingGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Band Rendering", Q_NULLPTR));
        mRenderTypeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Render type", Q_NULLPTR));
        mColorRenderingGrpBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Color Rendering", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Hue", Q_NULLPTR));
        mBlendTypeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Blending mode", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Brightness", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Contrast", Q_NULLPTR));
        labelGrayscale->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Grayscale", Q_NULLPTR));
        mColorizeCheck->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Colorize", Q_NULLPTR));
        btnColorizeColor->setText(QString());
        labelColorizeStrength->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Strength", Q_NULLPTR));
        spinColorizeStrength->setSuffix(QApplication::translate("QgsRasterLayerPropertiesBase", "%", Q_NULLPTR));
        comboGrayscale->clear();
        comboGrayscale->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Off", Q_NULLPTR)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "By lightness", Q_NULLPTR)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "By luminosity", Q_NULLPTR)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "By average", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        mResetColorRenderingBtn->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Reset all color rendering options to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mResetColorRenderingBtn->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Reset", Q_NULLPTR));
        label_15->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Gamma", Q_NULLPTR));
        labelSaturation->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Saturation", Q_NULLPTR));
        mResamplingGroupBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Resampling", Q_NULLPTR));
        mZoomedInResamplingLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Zoomed: in", Q_NULLPTR));
        mZoomedOutResamplingLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "out", Q_NULLPTR));
        mMaximumOversamplingLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Oversampling", Q_NULLPTR));
        mCbEarlyResampling->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Early resampling", Q_NULLPTR));
        groupBox10->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Thumbnail", Q_NULLPTR));
        groupBox9->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Legend", Q_NULLPTR));
        groupBox8->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Palette", Q_NULLPTR));
        gboxNoDataValue_2->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Global Opacity", Q_NULLPTR));
        gboxNoDataValue->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "No Data Value", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSrcNoDataValueCheckBox->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Use original source no data value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSrcNoDataValueCheckBox->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "No data value", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblSrcNoDataValue->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Original data source no data value, if exists.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblSrcNoDataValue->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<src no data value>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblUserNoDataValueLabel->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Additional user defined no data value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblUserNoDataValueLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Additional no data value", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leNoDataValue->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Additional user defined no data value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gboxCustomTransparency->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Custom Transparency Options", Q_NULLPTR));
        lblTransparent->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency band", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesManually->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Add values manually", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAddValuesManually->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Add values from display", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Remove selected row", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnDefaultValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Default values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnDefaultValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Import from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Export to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "\342\200\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparent pixel list", Q_NULLPTR));
        mHistogramGrpBx->setTitle(QString());
        chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Scale Dependent Visibility", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mRefreshLayerCheckBox->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Refresh layer at interval (seconds)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRefreshLayerIntervalSpinBox->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Higher values result in more simplification", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mPyramidsGrpBx->setTitle(QString());
        textLabel4_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Resampling method", Q_NULLPTR));
        textLabel5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Resolutions", Q_NULLPTR));
        tePyramidDescription->setHtml(QApplication::translate("QgsRasterLayerPropertiesBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\"><br /></span></p></body></html>", Q_NULLPTR));
        buttonBuildPyramids->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Build Pyramids", Q_NULLPTR));
        cboResamplingMethod->clear();
        cboResamplingMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Average", Q_NULLPTR)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Nearest Neighbour", Q_NULLPTR)
        );
        cbxPyramidsFormat->clear();
        cbxPyramidsFormat->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "External", Q_NULLPTR)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Internal (if possible)", Q_NULLPTR)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "External (Erdas Imagine)", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Overview format", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Embedded Widgets in Legend", Q_NULLPTR));
        mMetaDescriptionGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Description", Q_NULLPTR));
        mLayerTitleLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Title", Q_NULLPTR));
        mLayerKeywordListLabel_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Data Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the data presentation.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the data presentation.", Q_NULLPTR));
        mLayerDataUrlFormatLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", Q_NULLPTR));
        mLayerKeywordListLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Keyword list", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
        mLayerShortNameLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Short name", Q_NULLPTR));
        mLayerAbstractLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Abstract", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerAbstractTextEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "The abstract is a descriptive narrative providing more information about the layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLayerTitleLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerTitleLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", Q_NULLPTR));
        mMetaAttributionGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution", Q_NULLPTR));
        mLayerAttributionLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", Q_NULLPTR));
        mLayerAttributionUrlLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", Q_NULLPTR));
        mMetaMetaUrlGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "MetadataUrl", Q_NULLPTR));
        mLayerMetadataUrlLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "The URL of the metadata document.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "The URL of the metadata document.", Q_NULLPTR));
        mLayerMetadataUrlTypeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Type", Q_NULLPTR));
        mLayerMetadataUrlFormatLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Format", Q_NULLPTR));
        mMetaLegendGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "LegendUrl", Q_NULLPTR));
        mLayerLegendUrlLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the legend image.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "A URL of the legend image.", Q_NULLPTR));
        mLayerLegendUrlFormatLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Format", Q_NULLPTR));
        mWMSPrintGroupBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "WMS Print layer", Q_NULLPTR));
        mPublishDataSourceUrlCheckBox->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Publish WMS/WMTS data source uri", Q_NULLPTR));
        mBackgroundLayerCheckBox->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Advertise as background layer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerPropertiesBase: public Ui_QgsRasterLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERPROPERTIESBASE_H
