/********************************************************************************
** Form generated from reading UI file 'qgsoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOPTIONSBASE_H
#define UI_QGSOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscolorschemelist.h>
#include <qgsvariableeditorwidget.h>
#include "auth/qgsauthsettingswidget.h"
#include "qgsautheditorwidgets.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdatumtransformtablewidget.h"
#include "qgsdoublespinbox.h"
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalecombobox.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOptionsBase
{
public:
    QAction *mActionImportPalette;
    QAction *mActionRemovePalette;
    QAction *mActionNewPalette;
    QAction *mActionShowInButtons;
    QVBoxLayout *verticalLayout_5;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_15;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptionsPageGeneral;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *mOptionsScrollArea_01;
    QWidget *mOptionsScrollAreaContents_01;
    QVBoxLayout *verticalLayout_28;
    QgsCollapsibleGroupBox *grpLocale;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout_25;
    QLabel *label_7;
    QLabel *label_52;
    QLabel *label_5;
    QComboBox *cboTranslation;
    QComboBox *cboGlobalLocale;
    QCheckBox *cbShowGroupSeparator;
    QLabel *lblSystemLocale;
    QLabel *lblLocaleSample;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *cmbStyle;
    QHBoxLayout *horizontalLayout_37;
    QLabel *lblUITheme;
    QSpacerItem *horizontalSpacer_47;
    QComboBox *cmbUITheme;
    QHBoxLayout *horizontalLayout_7;
    QLabel *textLabel1_5;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cmbIconSize;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_43;
    QRadioButton *mFontFamilyRadioQt;
    QRadioButton *mFontFamilyRadioCustom;
    QFontComboBox *mFontFamilyComboBox;
    QLabel *label_20;
    QgsSpinBox *spinFontSize;
    QHBoxLayout *horizontalLayout_28;
    QLabel *mMessageTimeoutLabel;
    QSpacerItem *horizontalSpacer_13;
    QgsSpinBox *mMessageTimeoutSpnBx;
    QGridLayout *gridLayout_16;
    QCheckBox *cbxHideSplash;
    QCheckBox *mDataSourceManagerNonModal;
    QCheckBox *mNativeColorDialogsChkBx;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbxShowNews;
    QCheckBox *cbxCheckVersion;
    QgsCollapsibleGroupBox *groupBox_11;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout_4;
    QComboBox *mProjectOnLaunchCmbBx;
    QToolButton *mProjectOnLaunchPushBtn;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *horizontalSpacer_36;
    QLineEdit *mProjectOnLaunchLineEdit;
    QLabel *label_54;
    QCheckBox *cbxProjectDefaultNew;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pbnProjectDefaultSetCurrent;
    QPushButton *pbnProjectDefaultReset;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_31;
    QLineEdit *leTemplateFolder;
    QToolButton *pbnTemplateFolderBrowse;
    QToolButton *pbnTemplateFolderReset;
    QCheckBox *chbAskToSaveProjectChanges;
    QCheckBox *mLayerDeleteConfirmationChkBx;
    QCheckBox *chbWarnOldProjectVersion;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_33;
    QComboBox *mEnableMacrosComboBox;
    QSpacerItem *horizontalSpacer_17;
    QGridLayout *gridLayout_31;
    QLabel *label_67;
    QSpacerItem *horizontalSpacer_12;
    QRadioButton *mFileFormatQgzButton;
    QRadioButton *mFileFormatQgsButton;
    QSpacerItem *verticalSpacer_5;
    QWidget *mOptionsPageSystem;
    QVBoxLayout *verticalLayout_7;
    QgsScrollArea *mOptionsScrollArea_03;
    QWidget *mOptionsScrollAreaContents_03;
    QVBoxLayout *verticalLayout_22;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *_6;
    QLabel *mSVGLabel;
    QSpacerItem *spacerItem;
    QToolButton *mBtnAddSVGPath;
    QToolButton *mBtnRemoveSVGPath;
    QListWidget *mListSVGPaths;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *_3;
    QLabel *mSVGLabel_2;
    QSpacerItem *spacerItem1;
    QToolButton *mBtnAddPluginPath;
    QToolButton *mBtnRemovePluginPath;
    QListWidget *mListPluginPaths;
    QgsCollapsibleGroupBox *groupBox_29;
    QGridLayout *_4;
    QToolButton *mBtnMoveHelpDown;
    QLabel *mSVGLabel_5;
    QSpacerItem *spacerItem2;
    QToolButton *mBtnAddHelpPath;
    QToolButton *mBtnRemoveHelpPath;
    QTreeWidget *mHelpPathTreeWidget;
    QToolButton *mBtnMoveHelpUp;
    QgsCollapsibleGroupBox *mQSettingsGrpBx;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_42;
    QToolButton *mRestoreDefaultWindowStateBtn;
    QLabel *mRestoreDefaultWindowStateLbl;
    QgsCollapsibleGroupBox *mEnvironmentGrpBx;
    QGridLayout *gridLayout_32;
    QToolButton *mRemoveCustomVarBtn;
    QToolButton *mAddCustomVarBtn;
    QgsCollapsibleGroupBox *mCurrentVariablesGrpBx;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *mCurrentVariablesTable;
    QCheckBox *mCurrentVariablesQGISChxBx;
    QCheckBox *mCustomVariablesChkBx;
    QSpacerItem *horizontalSpacer_14;
    QTableWidget *mCustomVariablesTable;
    QSpacerItem *verticalSpacer_11;
    QWidget *mOptionsPageCRS;
    QVBoxLayout *verticalLayout_18;
    QgsScrollArea *mOptionsScrollArea_08;
    QWidget *mOptionsScrollAreaContents_08;
    QGridLayout *gridLayout_15;
    QgsCollapsibleGroupBox *grpProjectionBehavior;
    QGridLayout *gridLayout_14;
    QgsProjectionSelectionWidget *leLayerGlobalCrs;
    QLabel *label_8;
    QRadioButton *radUseProjectProjection;
    QLabel *label_16;
    QRadioButton *radUseGlobalProjection;
    QRadioButton *radPromptForProjection;
    QRadioButton *radCrsNoAction;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *grpProjectProjection;
    QGridLayout *gridLayout_27;
    QLabel *label_42;
    QgsProjectionSelectionWidget *leProjectGlobalCrs;
    QRadioButton *radProjectUseDefaultCrs;
    QRadioButton *radProjectUseCrsOfFirstLayer;
    QCheckBox *mPlanimetricMeasurementsComboBox;
    QWidget *mOptionsPageTransformations;
    QVBoxLayout *verticalLayout_46;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_47;
    QGroupBox *mDefaultDatumTransformGroupBox;
    QGridLayout *gridLayout_10;
    QLabel *label_40;
    QCheckBox *mShowDatumTransformDialogCheckBox;
    QFrame *line_2;
    QgsDatumTransformTableWidget *mDefaultDatumTransformTableWidget;
    QWidget *mOptionsPageDataSources;
    QVBoxLayout *verticalLayout_26;
    QgsScrollArea *mOptionsScrollArea_11;
    QWidget *mOptionsScrollAreaContents_11;
    QVBoxLayout *verticalLayout_27;
    QgsCollapsibleGroupBox *groupBox_18;
    QGridLayout *gridLayout_19;
    QCheckBox *cbxAttributeTableDocked;
    QComboBox *cmbAttrTableBehavior;
    QLabel *textLabel1_7;
    QLabel *label_14;
    QComboBox *mAttrTableViewComboBox;
    QLineEdit *leNullValue;
    QLabel *textLabel1_12;
    QHBoxLayout *horizontalLayout_10;
    QgsSpinBox *spinBoxAttrTableRowCache;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *mComboCopyFeatureFormat;
    QLabel *label_46;
    QLabel *label_48;
    QgsCollapsibleGroupBox *groupBox_19;
    QGridLayout *gridLayout_23;
    QComboBox *cmbScanItemsInBrowser;
    QCheckBox *cbxEvaluateDefaultValues;
    QComboBox *cmbScanZipInBrowser;
    QSpacerItem *horizontalSpacer_3;
    QLabel *textLabel1_13;
    QComboBox *cmbPromptSublayers;
    QLabel *label_30;
    QCheckBox *cbxCompileExpressions;
    QLabel *label_29;
    QgsCollapsibleGroupBox *groupBox_301;
    QGridLayout *gridLayout_34;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_19;
    QToolButton *mLocalizedDataPathAddButton;
    QToolButton *mLocalizedDataPathRemoveButton;
    QToolButton *mLocalizedDataPathUpButton;
    QToolButton *mLocalizedDataPathDownButton;
    QListWidget *mLocalizedDataPathListWidget;
    QgsCollapsibleGroupBox *groupBox_28;
    QGridLayout *_15;
    QToolButton *mBtnRemoveHiddenPath;
    QLabel *mSVGLabel_4;
    QSpacerItem *spacerItem3;
    QListWidget *mListHiddenBrowserPaths;
    QSpacerItem *verticalSpacer_8;
    QWidget *mOptionsPageRendering;
    QVBoxLayout *verticalLayout_12;
    QgsScrollArea *mOptionsScrollArea_04;
    QWidget *mOptionsScrollAreaContents_04;
    QGridLayout *gridLayout_22;
    QgsCollapsibleGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *chkAddedVisibility;
    QCheckBox *chkUseRenderCaching;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *chkParallelRendering;
    QFrame *line_6;
    QCheckBox *chkMaxThreads;
    QgsSpinBox *spinMaxThreads;
    QSpacerItem *horizontalSpacer_41;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_56;
    QgsSpinBox *spinMapUpdateInterval;
    QSpacerItem *horizontalSpacer_46;
    QgsCollapsibleGroupBox *mSimplifyDrawingGroupBox;
    QGridLayout *_14;
    QLabel *label_59;
    QLabel *label_65;
    QgsDoubleSpinBox *mSimplifyDrawingSpinBox;
    QLabel *mSimplifyDrawingPx;
    QSpacerItem *horizontalSpacer_40;
    QLabel *mSimplifyAlgorithmLabel;
    QComboBox *mSimplifyAlgorithmComboBox;
    QCheckBox *mSimplifyDrawingAtProvider;
    QLabel *mSimplifyMaxScaleLabel;
    QgsScaleComboBox *mSimplifyMaximumScaleComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelMagnifier;
    QgsDoubleSpinBox *doubleSpinBoxMagnifierDefault;
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBox *groupBox_8;
    QVBoxLayout *_5;
    QCheckBox *chkAntiAliasing;
    QgsCollapsibleGroupBox *mSegmentationGroupBox;
    QGridLayout *gridLayout_20;
    QLabel *mSegmentationToleranceLabel;
    QgsDoubleSpinBox *mSegmentationToleranceSpinBox;
    QLabel *mToleranceTypeLabel;
    QComboBox *mToleranceTypeComboBox;
    QgsCollapsibleGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget;
    QGridLayout *gridLayout_35;
    QLabel *label_21;
    QHBoxLayout *horizontalLayoutRGB;
    QLabel *label_22;
    QgsSpinBox *spnRed;
    QLabel *label_23;
    QgsSpinBox *spnGreen;
    QLabel *label_24;
    QgsSpinBox *spnBlue;
    QSpacerItem *horizontalSpacer_20;
    QLabel *lbldefaultZoomedInResampling;
    QComboBox *mZoomedInResamplingComboBox;
    QLabel *lbldefaultZoomedOutResampling;
    QComboBox *mZoomedOutResamplingComboBox;
    QLabel *lbldefaultOversampling;
    QHBoxLayout *horizontalLayoutOversampling;
    QgsDoubleSpinBox *spnOversampling;
    QSpacerItem *horizontalSpacer_25;
    QCheckBox *mCbEarlyResampling;
    QGroupBox *groupBox_17;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout_33;
    QComboBox *cboxContrastEnhancementLimitsMultiBandSingleByte;
    QLabel *label_50;
    QComboBox *cboxContrastEnhancementAlgorithmSingleBand;
    QLabel *label_37;
    QLabel *label_51;
    QComboBox *cboxContrastEnhancementLimitsSingleBand;
    QComboBox *cboxContrastEnhancementAlgorithmMultiBandSingleByte;
    QLabel *label_38;
    QLabel *label_39;
    QComboBox *cboxContrastEnhancementAlgorithmMultiBandMultiByte;
    QComboBox *cboxContrastEnhancementLimitsMultiBandMultiByte;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_23;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_24;
    QFrame *line;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_25;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_36;
    QgsDoubleSpinBox *mRasterCumulativeCutLowerDoubleSpinBox;
    QLabel *label_34;
    QgsDoubleSpinBox *mRasterCumulativeCutUpperDoubleSpinBox;
    QLabel *label_35;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QgsDoubleSpinBox *spnThreeBandStdDev;
    QSpacerItem *horizontalSpacer_21;
    QgsCollapsibleGroupBox *groupBox_22;
    QVBoxLayout *verticalLayout_35;
    QLabel *label_55;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_37;
    QCheckBox *mLogCanvasRefreshChkBx;
    QSpacerItem *verticalSpacer_6;
    QWidget *mOptionsPageMapCanvas;
    QVBoxLayout *verticalLayout_16;
    QgsScrollArea *mOptionsScrollArea_06;
    QWidget *mOptionsScrollAreaContents_06;
    QVBoxLayout *verticalLayout_25;
    QgsCollapsibleGroupBox *groupBox_9;
    QGridLayout *gridLayout_7;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label;
    QLabel *textLabel1_9;
    QgsColorButton *pbnSelectionColor;
    QgsCollapsibleGroupBox *mLegendGrpBx;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *cmbLegendDoubleClickAction;
    QCheckBox *cbxLegendClassifiers;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_58;
    QSpacerItem *horizontalSpacer_391;
    QgsSpinBox *mLegendGraphicResolutionSpinBox;
    QgsCollapsibleGroupBox *groupBox_12;
    QHBoxLayout *horizontalLayout_221;
    QLabel *textLabel1_16;
    QSpacerItem *horizontalSpacer_39;
    QgsSpinBox *mMapTipsDelaySpinBox;
    QSpacerItem *spacerItem4;
    QWidget *mOptionsPageMapTools;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *mOptionsScrollArea_05;
    QWidget *mOptionsScrollAreaContents_05;
    QVBoxLayout *verticalLayout_30;
    QgsCollapsibleGroupBox *mIdentifyGroupBox;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *mIdentifyRadiusHorizontalLayout;
    QLabel *textLabel1_3;
    QgsDoubleSpinBox *spinBoxIdentifyValue;
    QSpacerItem *horizontalSpacer_44;
    QHBoxLayout *mIdentifyHighlightHorizontalLayout;
    QLabel *mIdentifyHighlighColorLabel;
    QgsColorButton *mIdentifyHighlightColorButton;
    QLabel *mIdentifyHighlightBufferLabel;
    QgsDoubleSpinBox *mIdentifyHighlightBufferSpinBox;
    QLabel *mIdentifyHighlightMinWidthLabel;
    QgsDoubleSpinBox *mIdentifyHighlightMinWidthSpinBox;
    QSpacerItem *horizontalSpacer_45;
    QgsCollapsibleGroupBox *groupBox_6;
    QGridLayout *gridLayout_21;
    QLabel *textLabel1_11;
    QComboBox *mAreaUnitsComboBox;
    QComboBox *mDistanceUnitsComboBox;
    QLabel *label_13;
    QgsSpinBox *mDecimalPlacesSpinBox;
    QLabel *label_12;
    QLabel *textLabel1_10;
    QSpacerItem *spacerItem5;
    QLabel *textLabel1_14;
    QCheckBox *mKeepBaseUnitCheckBox;
    QLabel *mAngleUnitsLabel;
    QComboBox *mAngleUnitsComboBox;
    QgsColorButton *pbnMeasureColor;
    QgsCollapsibleGroupBox *mCoordinateDisplayGroup;
    QGridLayout *gridLayout_30;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_69;
    QPushButton *mCustomizeBearingFormatButton;
    QSpacerItem *horizontalSpacer_11;
    QgsCollapsibleGroupBox *groupBox_10;
    QGridLayout *_8;
    QLabel *label_3;
    QgsSpinBox *spinZoomFactor;
    QgsCollapsibleGroupBox *groupBox_15;
    QGridLayout *gridLayout_26;
    QListWidget *mListGlobalScales;
    QVBoxLayout *verticalLayout_13;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnDefaultScaleValues;
    QSpacerItem *verticalSpacer_7;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptionsPageColors;
    QVBoxLayout *verticalLayout_38;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_46;
    QgsCollapsibleGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QSpacerItem *verticalSpacer_12;
    QToolButton *mButtonImportColors;
    QgsColorSchemeList *mTreeCustomColors;
    QToolButton *mButtonPasteColors;
    QToolButton *mButtonAddColor;
    QToolButton *mButtonRemoveColor;
    QToolButton *mButtonCopyColors;
    QHBoxLayout *horizontalLayout_22;
    QComboBox *mColorSchemesComboBox;
    QToolButton *mButtonExportColors;
    QToolButton *mSchemeToolButton;
    QWidget *mOptionsPageDigitizing;
    QVBoxLayout *verticalLayout_17;
    QgsScrollArea *mOptionsScrollArea_07;
    QWidget *mOptionsScrollAreaContents_07;
    QVBoxLayout *verticalLayout_31;
    QgsCollapsibleGroupBox *mEnterAttributeValuesGroupBox;
    QGridLayout *gridLayout_28;
    QLabel *label_19;
    QCheckBox *chkDisableAttributeValuesDlg;
    QSpacerItem *horizontalSpacer_32;
    QCheckBox *chkReuseLastValues;
    QLabel *mDefaultZValueLabel;
    QgsDoubleSpinBox *mDefaultZValueSpinBox;
    QComboBox *mValidateGeometries;
    QgsCollapsibleGroupBox *mRubberBandGroupBox;
    QGridLayout *_9;
    QSpacerItem *horizontalSpacer_33;
    QLabel *mLineWidthTextLabel;
    QLabel *mLineColorTextLabel;
    QgsSpinBox *mLineWidthSpinBox;
    QgsColorButton *mFillColorToolButton;
    QLabel *mSelectColorTextLabel;
    QgsColorButton *mLineColorToolButton;
    QCheckBox *mLineGhostCheckBox;
    QgsCollapsibleGroupBox *mSnappingGroupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *mSnappingEnabledDefault;
    QLabel *mDefaultSnapModeLabel;
    QSpacerItem *spacerItem6;
    QComboBox *mDefaultSnapModeComboBox;
    QLabel *mDefaultSnappingToleranceTextLabel;
    QSpacerItem *spacerItem7;
    QgsDoubleSpinBox *mDefaultSnappingToleranceSpinBox;
    QComboBox *mDefaultSnappingToleranceComboBox;
    QLabel *mVertexSearchRadiusVertexEditLabel;
    QSpacerItem *spacerItem8;
    QgsDoubleSpinBox *mSearchRadiusVertexEditSpinBox;
    QComboBox *mSearchRadiusVertexEditComboBox;
    QLabel *label_49;
    QComboBox *mSnappingMainDialogComboBox;
    QLabel *label_2;
    QgsColorButton *mSnappingMarkerColorButton;
    QCheckBox *mSnappingTooltipsCheckbox;
    QCheckBox *mEnableSnappingOnInvisibleFeatureCheckbox;
    QgsCollapsibleGroupBox *mVertexMarkerGroupBox;
    QGridLayout *_11;
    QLabel *mMarkerStyleLabel;
    QSpacerItem *spacerItem9;
    QComboBox *mMarkerStyleComboBox;
    QgsDoubleSpinBox *mMarkerSizeSpinBox;
    QLabel *label_6;
    QSpacerItem *spacerItem10;
    QCheckBox *mMarkersOnlyForSelectedCheckBox;
    QgsCollapsibleGroupBox *groupBox_21;
    QGridLayout *gridLayout;
    QgsSpinBox *mOffsetQuadSegSpinBox;
    QLabel *label_28;
    QLabel *label_26;
    QComboBox *mOffsetJoinStyleComboBox;
    QLabel *label_27;
    QgsDoubleSpinBox *mCurveOffsetMiterLimitComboBox;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_31;
    QgsCollapsibleGroupBox *groupBox_30;
    QGridLayout *gridLayout1;
    QCheckBox *mTracingConvertToCurveCheckBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *mOptionsPageComposer;
    QVBoxLayout *verticalLayout_36;
    QgsScrollArea *mOptionsScrollArea_12;
    QWidget *mOptionsScrollAreaContents_12;
    QVBoxLayout *verticalLayout_39;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_60;
    QFontComboBox *mComposerFontComboBox;
    QgsCollapsibleGroupBox *groupBox_23;
    QGridLayout *gridLayout_9;
    QLabel *label_66;
    QComboBox *mGridStyleComboBox;
    QLabel *label_4;
    QgsColorButton *mGridColorButton;
    QgsCollapsibleGroupBox *groupBox_24;
    QGridLayout *gridLayout_11;
    QLabel *label_61;
    QgsDoubleSpinBox *mGridResolutionSpinBox;
    QLabel *label_63;
    QHBoxLayout *horizontalLayout_36;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QLabel *label_62;
    QgsSpinBox *mSnapToleranceSpinBox;
    QgsCollapsibleGroupBox *groupBox_27;
    QGridLayout *_7;
    QLabel *mSVGLabel_3;
    QSpacerItem *spacerItem11;
    QToolButton *mBtnAddTemplatePath;
    QToolButton *mBtnRemoveTemplatePath;
    QListWidget *mListComposerTemplatePaths;
    QSpacerItem *verticalSpacer_10;
    QWidget *mOptionsPageGDAL;
    QVBoxLayout *verticalLayout_4;
    QgsScrollArea *mOptionsScrollArea_02;
    QWidget *mOptionsScrollAreaContents_02;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_29;
    QComboBox *cmbEditCreateOptions;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pbnEditPyramidsOptions;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pbnEditCreateOptions;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_24;
    QLabel *label_17;
    QTreeWidget *lstRasterDrivers;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_29;
    QGroupBox *groupBox_31;
    QGridLayout *gridLayout_36;
    QLabel *label_68;
    QTreeWidget *lstVectorDrivers;
    QWidget *mOptionsPageVariables;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_25;
    QVBoxLayout *verticalLayout_41;
    QgsVariableEditorWidget *mVariableEditor;
    QWidget *mOptionsPageAuth;
    QVBoxLayout *verticalLayout_45;
    QgsAuthEditorWidgets *mAuthConfigsGrpBx;
    QWidget *mOptionsPageNetwork;
    QVBoxLayout *verticalLayout_20;
    QgsScrollArea *mOptionsScrollArea_10;
    QWidget *mOptionsScrollAreaContents_10;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_20;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mNetworkTimeoutLabel;
    QgsSpinBox *mNetworkTimeoutSpinBox;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_45;
    QgsSpinBox *mDefaultCapabilitiesExpirySpinBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_32;
    QgsSpinBox *mDefaultTileExpirySpinBox;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_57;
    QgsSpinBox *mDefaultTileMaxRetrySpinBox;
    QHBoxLayout *horizontalLayout_35;
    QLabel *lblUserAgent;
    QLineEdit *leUserAgent;
    QGroupBox *grpCache;
    QVBoxLayout *verticalLayout_19;
    QTabWidget *tabContentCache;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *mCacheDirectory;
    QgsSpinBox *mCacheSize;
    QToolButton *mBrowseCacheDirectory;
    QToolButton *mClearCache;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QCheckBox *mAutoClearAccessCache;
    QPushButton *mClearAccessCache;
    QgsCollapsibleGroupBox *grpProxy;
    QGridLayout *gridLayout_1;
    QLabel *label_47;
    QToolButton *mRemoveUrlPushButton;
    QToolButton *mAddUrlPushButton;
    QGridLayout *gridLayout_17;
    QComboBox *mProxyTypeComboBox;
    QLabel *mTypeLabel;
    QLabel *label_41;
    QFrame *frameManualProxy;
    QGridLayout *gridLayout_18;
    QLineEdit *leProxyPort;
    QLabel *lblProxyPort;
    QLineEdit *leProxyHost;
    QLabel *lblProxyHost;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_23;
    QgsAuthSettingsWidget *mAuthSettings;
    QSpacerItem *horizontalSpacer;
    QListWidget *mNoProxyUrlListWidget;
    QSpacerItem *verticalSpacer_9;
    QWidget *mOptionsLocatorSettings;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *mOptionsLocatorGroupBox;
    QWidget *mOptionsPageAcceleration;
    QVBoxLayout *mOptionsPageAccelerationLayout;
    QLabel *label_53;
    QCheckBox *mGPUEnableCheckBox;
    QWidget *mOpenClContainerWidget;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_64;
    QComboBox *mOpenClDevicesCombo;
    QTextBrowser *mGPUInfoTextBrowser;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QButtonGroup *mDefaultProjectFileFormatButtonGroup;

    void setupUi(QDialog *QgsOptionsBase)
    {
        if (QgsOptionsBase->objectName().isEmpty())
            QgsOptionsBase->setObjectName(QStringLiteral("QgsOptionsBase"));
        QgsOptionsBase->resize(1029, 730);
        QgsOptionsBase->setMinimumSize(QSize(780, 0));
        QgsOptionsBase->setModal(true);
        mActionImportPalette = new QAction(QgsOptionsBase);
        mActionImportPalette->setObjectName(QStringLiteral("mActionImportPalette"));
        mActionRemovePalette = new QAction(QgsOptionsBase);
        mActionRemovePalette->setObjectName(QStringLiteral("mActionRemovePalette"));
        mActionNewPalette = new QAction(QgsOptionsBase);
        mActionNewPalette->setObjectName(QStringLiteral("mActionNewPalette"));
        mActionShowInButtons = new QAction(QgsOptionsBase);
        mActionShowInButtons->setObjectName(QStringLiteral("mActionShowInButtons"));
        mActionShowInButtons->setCheckable(true);
        verticalLayout_5 = new QVBoxLayout(QgsOptionsBase);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mOptionsSplitter = new QSplitter(QgsOptionsBase);
        mOptionsSplitter->setObjectName(QStringLiteral("mOptionsSplitter"));
        mOptionsSplitter->setEnabled(true);
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QStringLiteral("mSearchLineEdit"));

        verticalLayout_15->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/transformation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/attributes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/propertyicons/overlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/propertyicons/map_tools.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/propertyicons/colors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/propertyicons/digitizing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mIconLayout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/propertyicons/gdal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem11->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem12->setIcon(icon12);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/locked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem13->setIcon(icon13);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/propertyicons/network_and_proxy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem14->setIcon(icon14);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem15->setIcon(icon15);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/mIconGPU.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem16->setIcon(icon16);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_15->addWidget(mOptionsListWidget);

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
        verticalLayout = new QVBoxLayout(mOptionsFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        mOptionsPageGeneral = new QWidget();
        mOptionsPageGeneral->setObjectName(QStringLiteral("mOptionsPageGeneral"));
        verticalLayout_3 = new QVBoxLayout(mOptionsPageGeneral);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_01 = new QgsScrollArea(mOptionsPageGeneral);
        mOptionsScrollArea_01->setObjectName(QStringLiteral("mOptionsScrollArea_01"));
        mOptionsScrollArea_01->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_01->setWidgetResizable(true);
        mOptionsScrollAreaContents_01 = new QWidget();
        mOptionsScrollAreaContents_01->setObjectName(QStringLiteral("mOptionsScrollAreaContents_01"));
        mOptionsScrollAreaContents_01->setGeometry(QRect(0, 0, 843, 1019));
        verticalLayout_28 = new QVBoxLayout(mOptionsScrollAreaContents_01);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        grpLocale = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        grpLocale->setObjectName(QStringLiteral("grpLocale"));
        grpLocale->setCheckable(true);
        vboxLayout = new QVBoxLayout(grpLocale);
        vboxLayout->setSpacing(12);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setSpacing(6);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        label_7 = new QLabel(grpLocale);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        gridLayout_25->addWidget(label_7, 6, 0, 1, 2);

        label_52 = new QLabel(grpLocale);
        label_52->setObjectName(QStringLiteral("label_52"));

        gridLayout_25->addWidget(label_52, 2, 0, 1, 1);

        label_5 = new QLabel(grpLocale);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_25->addWidget(label_5, 0, 0, 1, 1);

        cboTranslation = new QComboBox(grpLocale);
        cboTranslation->setObjectName(QStringLiteral("cboTranslation"));

        gridLayout_25->addWidget(cboTranslation, 0, 1, 1, 1);

        cboGlobalLocale = new QComboBox(grpLocale);
        cboGlobalLocale->setObjectName(QStringLiteral("cboGlobalLocale"));

        gridLayout_25->addWidget(cboGlobalLocale, 2, 1, 1, 1);

        cbShowGroupSeparator = new QCheckBox(grpLocale);
        cbShowGroupSeparator->setObjectName(QStringLiteral("cbShowGroupSeparator"));

        gridLayout_25->addWidget(cbShowGroupSeparator, 3, 1, 1, 1);


        vboxLayout->addLayout(gridLayout_25);

        lblSystemLocale = new QLabel(grpLocale);
        lblSystemLocale->setObjectName(QStringLiteral("lblSystemLocale"));

        vboxLayout->addWidget(lblSystemLocale);

        lblLocaleSample = new QLabel(grpLocale);
        lblLocaleSample->setObjectName(QStringLiteral("lblLocaleSample"));

        vboxLayout->addWidget(lblLocaleSample);


        verticalLayout_28->addWidget(grpLocale);

        groupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_9->addWidget(label_18);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        cmbStyle = new QComboBox(groupBox);
        cmbStyle->setObjectName(QStringLiteral("cmbStyle"));

        horizontalLayout_9->addWidget(cmbStyle);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(-1, 0, -1, -1);
        lblUITheme = new QLabel(groupBox);
        lblUITheme->setObjectName(QStringLiteral("lblUITheme"));

        horizontalLayout_37->addWidget(lblUITheme);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_47);

        cmbUITheme = new QComboBox(groupBox);
        cmbUITheme->setObjectName(QStringLiteral("cmbUITheme"));

        horizontalLayout_37->addWidget(cmbUITheme);


        verticalLayout_2->addLayout(horizontalLayout_37);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        textLabel1_5 = new QLabel(groupBox);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1_5->sizePolicy().hasHeightForWidth());
        textLabel1_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(textLabel1_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        cmbIconSize = new QComboBox(groupBox);
        cmbIconSize->setObjectName(QStringLiteral("cmbIconSize"));
        cmbIconSize->setDuplicatesEnabled(false);

        horizontalLayout_7->addWidget(cmbIconSize);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_27->addWidget(label_43);

        mFontFamilyRadioQt = new QRadioButton(groupBox);
        mFontFamilyRadioQt->setObjectName(QStringLiteral("mFontFamilyRadioQt"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFontFamilyRadioQt->sizePolicy().hasHeightForWidth());
        mFontFamilyRadioQt->setSizePolicy(sizePolicy2);
        mFontFamilyRadioQt->setChecked(true);

        horizontalLayout_27->addWidget(mFontFamilyRadioQt);

        mFontFamilyRadioCustom = new QRadioButton(groupBox);
        mFontFamilyRadioCustom->setObjectName(QStringLiteral("mFontFamilyRadioCustom"));
        sizePolicy2.setHeightForWidth(mFontFamilyRadioCustom->sizePolicy().hasHeightForWidth());
        mFontFamilyRadioCustom->setSizePolicy(sizePolicy2);

        horizontalLayout_27->addWidget(mFontFamilyRadioCustom);

        mFontFamilyComboBox = new QFontComboBox(groupBox);
        mFontFamilyComboBox->setObjectName(QStringLiteral("mFontFamilyComboBox"));

        horizontalLayout_27->addWidget(mFontFamilyComboBox);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);

        horizontalLayout_27->addWidget(label_20);

        spinFontSize = new QgsSpinBox(groupBox);
        spinFontSize->setObjectName(QStringLiteral("spinFontSize"));
        sizePolicy2.setHeightForWidth(spinFontSize->sizePolicy().hasHeightForWidth());
        spinFontSize->setSizePolicy(sizePolicy2);
        spinFontSize->setMinimum(4);

        horizontalLayout_27->addWidget(spinFontSize);


        verticalLayout_2->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        mMessageTimeoutLabel = new QLabel(groupBox);
        mMessageTimeoutLabel->setObjectName(QStringLiteral("mMessageTimeoutLabel"));
        sizePolicy3.setHeightForWidth(mMessageTimeoutLabel->sizePolicy().hasHeightForWidth());
        mMessageTimeoutLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_28->addWidget(mMessageTimeoutLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_13);

        mMessageTimeoutSpnBx = new QgsSpinBox(groupBox);
        mMessageTimeoutSpnBx->setObjectName(QStringLiteral("mMessageTimeoutSpnBx"));
        mMessageTimeoutSpnBx->setMinimum(2);
        mMessageTimeoutSpnBx->setMaximum(20);
        mMessageTimeoutSpnBx->setValue(5);

        horizontalLayout_28->addWidget(mMessageTimeoutSpnBx);


        verticalLayout_2->addLayout(horizontalLayout_28);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 0, -1, -1);
        cbxHideSplash = new QCheckBox(groupBox);
        cbxHideSplash->setObjectName(QStringLiteral("cbxHideSplash"));
        sizePolicy2.setHeightForWidth(cbxHideSplash->sizePolicy().hasHeightForWidth());
        cbxHideSplash->setSizePolicy(sizePolicy2);

        gridLayout_16->addWidget(cbxHideSplash, 0, 0, 1, 1);

        mDataSourceManagerNonModal = new QCheckBox(groupBox);
        mDataSourceManagerNonModal->setObjectName(QStringLiteral("mDataSourceManagerNonModal"));

        gridLayout_16->addWidget(mDataSourceManagerNonModal, 4, 0, 1, 1);

        mNativeColorDialogsChkBx = new QCheckBox(groupBox);
        mNativeColorDialogsChkBx->setObjectName(QStringLiteral("mNativeColorDialogsChkBx"));

        gridLayout_16->addWidget(mNativeColorDialogsChkBx, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        cbxShowNews = new QCheckBox(groupBox);
        cbxShowNews->setObjectName(QStringLiteral("cbxShowNews"));
        cbxShowNews->setChecked(true);

        gridLayout_16->addWidget(cbxShowNews, 1, 0, 1, 1);

        cbxCheckVersion = new QCheckBox(groupBox);
        cbxCheckVersion->setObjectName(QStringLiteral("cbxCheckVersion"));

        gridLayout_16->addWidget(cbxCheckVersion, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_16);


        verticalLayout_28->addWidget(groupBox);

        groupBox_11 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        vboxLayout1 = new QVBoxLayout(groupBox_11);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mProjectOnLaunchCmbBx = new QComboBox(groupBox_11);
        mProjectOnLaunchCmbBx->setObjectName(QStringLiteral("mProjectOnLaunchCmbBx"));
        sizePolicy2.setHeightForWidth(mProjectOnLaunchCmbBx->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchCmbBx->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mProjectOnLaunchCmbBx, 0, 2, 1, 2);

        mProjectOnLaunchPushBtn = new QToolButton(groupBox_11);
        mProjectOnLaunchPushBtn->setObjectName(QStringLiteral("mProjectOnLaunchPushBtn"));
        sizePolicy2.setHeightForWidth(mProjectOnLaunchPushBtn->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchPushBtn->setSizePolicy(sizePolicy2);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProjectOnLaunchPushBtn->setIcon(icon17);

        gridLayout_4->addWidget(mProjectOnLaunchPushBtn, 1, 5, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_35, 1, 0, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_36, 0, 4, 1, 1);

        mProjectOnLaunchLineEdit = new QLineEdit(groupBox_11);
        mProjectOnLaunchLineEdit->setObjectName(QStringLiteral("mProjectOnLaunchLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mProjectOnLaunchLineEdit->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchLineEdit->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(mProjectOnLaunchLineEdit, 1, 1, 1, 4);

        label_54 = new QLabel(groupBox_11);
        label_54->setObjectName(QStringLiteral("label_54"));
        sizePolicy3.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_54, 0, 0, 1, 2);


        vboxLayout1->addLayout(gridLayout_4);

        cbxProjectDefaultNew = new QCheckBox(groupBox_11);
        cbxProjectDefaultNew->setObjectName(QStringLiteral("cbxProjectDefaultNew"));

        vboxLayout1->addWidget(cbxProjectDefaultNew);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_22 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_22);

        pbnProjectDefaultSetCurrent = new QPushButton(groupBox_11);
        pbnProjectDefaultSetCurrent->setObjectName(QStringLiteral("pbnProjectDefaultSetCurrent"));

        horizontalLayout_16->addWidget(pbnProjectDefaultSetCurrent);

        pbnProjectDefaultReset = new QPushButton(groupBox_11);
        pbnProjectDefaultReset->setObjectName(QStringLiteral("pbnProjectDefaultReset"));

        horizontalLayout_16->addWidget(pbnProjectDefaultReset);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);


        vboxLayout1->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_31 = new QLabel(groupBox_11);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_15->addWidget(label_31);

        leTemplateFolder = new QLineEdit(groupBox_11);
        leTemplateFolder->setObjectName(QStringLiteral("leTemplateFolder"));
        leTemplateFolder->setEnabled(false);

        horizontalLayout_15->addWidget(leTemplateFolder);

        pbnTemplateFolderBrowse = new QToolButton(groupBox_11);
        pbnTemplateFolderBrowse->setObjectName(QStringLiteral("pbnTemplateFolderBrowse"));
        pbnTemplateFolderBrowse->setIcon(icon17);

        horizontalLayout_15->addWidget(pbnTemplateFolderBrowse);

        pbnTemplateFolderReset = new QToolButton(groupBox_11);
        pbnTemplateFolderReset->setObjectName(QStringLiteral("pbnTemplateFolderReset"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnTemplateFolderReset->setIcon(icon18);

        horizontalLayout_15->addWidget(pbnTemplateFolderReset);


        vboxLayout1->addLayout(horizontalLayout_15);

        chbAskToSaveProjectChanges = new QCheckBox(groupBox_11);
        chbAskToSaveProjectChanges->setObjectName(QStringLiteral("chbAskToSaveProjectChanges"));

        vboxLayout1->addWidget(chbAskToSaveProjectChanges);

        mLayerDeleteConfirmationChkBx = new QCheckBox(groupBox_11);
        mLayerDeleteConfirmationChkBx->setObjectName(QStringLiteral("mLayerDeleteConfirmationChkBx"));

        vboxLayout1->addWidget(mLayerDeleteConfirmationChkBx);

        chbWarnOldProjectVersion = new QCheckBox(groupBox_11);
        chbWarnOldProjectVersion->setObjectName(QStringLiteral("chbWarnOldProjectVersion"));

        vboxLayout1->addWidget(chbWarnOldProjectVersion);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_33 = new QLabel(groupBox_11);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_21->addWidget(label_33);

        mEnableMacrosComboBox = new QComboBox(groupBox_11);
        mEnableMacrosComboBox->setObjectName(QStringLiteral("mEnableMacrosComboBox"));
        mEnableMacrosComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_21->addWidget(mEnableMacrosComboBox);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_17);


        vboxLayout1->addLayout(horizontalLayout_21);

        gridLayout_31 = new QGridLayout();
        gridLayout_31->setSpacing(6);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        label_67 = new QLabel(groupBox_11);
        label_67->setObjectName(QStringLiteral("label_67"));

        gridLayout_31->addWidget(label_67, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_31->addItem(horizontalSpacer_12, 0, 2, 1, 1);

        mFileFormatQgzButton = new QRadioButton(groupBox_11);
        mDefaultProjectFileFormatButtonGroup = new QButtonGroup(QgsOptionsBase);
        mDefaultProjectFileFormatButtonGroup->setObjectName(QStringLiteral("mDefaultProjectFileFormatButtonGroup"));
        mDefaultProjectFileFormatButtonGroup->addButton(mFileFormatQgzButton);
        mFileFormatQgzButton->setObjectName(QStringLiteral("mFileFormatQgzButton"));

        gridLayout_31->addWidget(mFileFormatQgzButton, 0, 1, 1, 1);

        mFileFormatQgsButton = new QRadioButton(groupBox_11);
        mDefaultProjectFileFormatButtonGroup->addButton(mFileFormatQgsButton);
        mFileFormatQgsButton->setObjectName(QStringLiteral("mFileFormatQgsButton"));

        gridLayout_31->addWidget(mFileFormatQgsButton, 1, 1, 1, 1);


        vboxLayout1->addLayout(gridLayout_31);


        verticalLayout_28->addWidget(groupBox_11);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_5);

        mOptionsScrollArea_01->setWidget(mOptionsScrollAreaContents_01);

        verticalLayout_3->addWidget(mOptionsScrollArea_01);

        mOptionsStackedWidget->addWidget(mOptionsPageGeneral);
        mOptionsPageSystem = new QWidget();
        mOptionsPageSystem->setObjectName(QStringLiteral("mOptionsPageSystem"));
        verticalLayout_7 = new QVBoxLayout(mOptionsPageSystem);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_03 = new QgsScrollArea(mOptionsPageSystem);
        mOptionsScrollArea_03->setObjectName(QStringLiteral("mOptionsScrollArea_03"));
        mOptionsScrollArea_03->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_03->setWidgetResizable(true);
        mOptionsScrollAreaContents_03 = new QWidget();
        mOptionsScrollAreaContents_03->setObjectName(QStringLiteral("mOptionsScrollAreaContents_03"));
        mOptionsScrollAreaContents_03->setGeometry(QRect(0, 0, 843, 1084));
        verticalLayout_22 = new QVBoxLayout(mOptionsScrollAreaContents_03);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        _6 = new QGridLayout(groupBox_2);
        _6->setSpacing(6);
        _6->setContentsMargins(11, 11, 11, 11);
        _6->setObjectName(QStringLiteral("_6"));
        mSVGLabel = new QLabel(groupBox_2);
        mSVGLabel->setObjectName(QStringLiteral("mSVGLabel"));

        _6->addWidget(mSVGLabel, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem, 0, 1, 1, 1);

        mBtnAddSVGPath = new QToolButton(groupBox_2);
        mBtnAddSVGPath->setObjectName(QStringLiteral("mBtnAddSVGPath"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAddSVGPath->setIcon(icon19);

        _6->addWidget(mBtnAddSVGPath, 0, 2, 1, 1);

        mBtnRemoveSVGPath = new QToolButton(groupBox_2);
        mBtnRemoveSVGPath->setObjectName(QStringLiteral("mBtnRemoveSVGPath"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemoveSVGPath->setIcon(icon20);

        _6->addWidget(mBtnRemoveSVGPath, 0, 3, 1, 1);

        mListSVGPaths = new QListWidget(groupBox_2);
        mListSVGPaths->setObjectName(QStringLiteral("mListSVGPaths"));
        mListSVGPaths->setMinimumSize(QSize(0, 120));

        _6->addWidget(mListSVGPaths, 1, 0, 1, 4);


        verticalLayout_22->addWidget(groupBox_2);

        groupBox_4 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        _3 = new QGridLayout(groupBox_4);
        _3->setSpacing(6);
        _3->setContentsMargins(11, 11, 11, 11);
        _3->setObjectName(QStringLiteral("_3"));
        mSVGLabel_2 = new QLabel(groupBox_4);
        mSVGLabel_2->setObjectName(QStringLiteral("mSVGLabel_2"));

        _3->addWidget(mSVGLabel_2, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1, 0, 1, 1, 1);

        mBtnAddPluginPath = new QToolButton(groupBox_4);
        mBtnAddPluginPath->setObjectName(QStringLiteral("mBtnAddPluginPath"));
        mBtnAddPluginPath->setIcon(icon19);

        _3->addWidget(mBtnAddPluginPath, 0, 2, 1, 1);

        mBtnRemovePluginPath = new QToolButton(groupBox_4);
        mBtnRemovePluginPath->setObjectName(QStringLiteral("mBtnRemovePluginPath"));
        mBtnRemovePluginPath->setIcon(icon20);

        _3->addWidget(mBtnRemovePluginPath, 0, 3, 1, 1);

        mListPluginPaths = new QListWidget(groupBox_4);
        mListPluginPaths->setObjectName(QStringLiteral("mListPluginPaths"));
        mListPluginPaths->setMinimumSize(QSize(0, 120));

        _3->addWidget(mListPluginPaths, 1, 0, 1, 4);


        verticalLayout_22->addWidget(groupBox_4);

        groupBox_29 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_29->setObjectName(QStringLiteral("groupBox_29"));
        _4 = new QGridLayout(groupBox_29);
        _4->setSpacing(6);
        _4->setContentsMargins(11, 11, 11, 11);
        _4->setObjectName(QStringLiteral("_4"));
        mBtnMoveHelpDown = new QToolButton(groupBox_29);
        mBtnMoveHelpDown->setObjectName(QStringLiteral("mBtnMoveHelpDown"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnMoveHelpDown->setIcon(icon21);

        _4->addWidget(mBtnMoveHelpDown, 0, 5, 1, 1);

        mSVGLabel_5 = new QLabel(groupBox_29);
        mSVGLabel_5->setObjectName(QStringLiteral("mSVGLabel_5"));

        _4->addWidget(mSVGLabel_5, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem2, 0, 1, 1, 1);

        mBtnAddHelpPath = new QToolButton(groupBox_29);
        mBtnAddHelpPath->setObjectName(QStringLiteral("mBtnAddHelpPath"));
        mBtnAddHelpPath->setIcon(icon19);

        _4->addWidget(mBtnAddHelpPath, 0, 2, 1, 1);

        mBtnRemoveHelpPath = new QToolButton(groupBox_29);
        mBtnRemoveHelpPath->setObjectName(QStringLiteral("mBtnRemoveHelpPath"));
        mBtnRemoveHelpPath->setIcon(icon20);

        _4->addWidget(mBtnRemoveHelpPath, 0, 3, 1, 1);

        mHelpPathTreeWidget = new QTreeWidget(groupBox_29);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        mHelpPathTreeWidget->setHeaderItem(__qtreewidgetitem);
        mHelpPathTreeWidget->setObjectName(QStringLiteral("mHelpPathTreeWidget"));
        mHelpPathTreeWidget->setMinimumSize(QSize(0, 120));
        mHelpPathTreeWidget->header()->setVisible(false);

        _4->addWidget(mHelpPathTreeWidget, 1, 0, 1, 6);

        mBtnMoveHelpUp = new QToolButton(groupBox_29);
        mBtnMoveHelpUp->setObjectName(QStringLiteral("mBtnMoveHelpUp"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnMoveHelpUp->setIcon(icon22);

        _4->addWidget(mBtnMoveHelpUp, 0, 4, 1, 1);


        verticalLayout_22->addWidget(groupBox_29);

        mQSettingsGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        mQSettingsGrpBx->setObjectName(QStringLiteral("mQSettingsGrpBx"));
        gridLayout_13 = new QGridLayout(mQSettingsGrpBx);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_42, 0, 1, 1, 1);

        mRestoreDefaultWindowStateBtn = new QToolButton(mQSettingsGrpBx);
        mRestoreDefaultWindowStateBtn->setObjectName(QStringLiteral("mRestoreDefaultWindowStateBtn"));
        mRestoreDefaultWindowStateBtn->setIcon(icon18);

        gridLayout_13->addWidget(mRestoreDefaultWindowStateBtn, 0, 2, 1, 1);

        mRestoreDefaultWindowStateLbl = new QLabel(mQSettingsGrpBx);
        mRestoreDefaultWindowStateLbl->setObjectName(QStringLiteral("mRestoreDefaultWindowStateLbl"));

        gridLayout_13->addWidget(mRestoreDefaultWindowStateLbl, 0, 0, 1, 1);


        verticalLayout_22->addWidget(mQSettingsGrpBx);

        mEnvironmentGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        mEnvironmentGrpBx->setObjectName(QStringLiteral("mEnvironmentGrpBx"));
        mEnvironmentGrpBx->setMinimumSize(QSize(0, 0));
        gridLayout_32 = new QGridLayout(mEnvironmentGrpBx);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        mRemoveCustomVarBtn = new QToolButton(mEnvironmentGrpBx);
        mRemoveCustomVarBtn->setObjectName(QStringLiteral("mRemoveCustomVarBtn"));
        sizePolicy2.setHeightForWidth(mRemoveCustomVarBtn->sizePolicy().hasHeightForWidth());
        mRemoveCustomVarBtn->setSizePolicy(sizePolicy2);
        mRemoveCustomVarBtn->setIcon(icon20);

        gridLayout_32->addWidget(mRemoveCustomVarBtn, 1, 3, 1, 1);

        mAddCustomVarBtn = new QToolButton(mEnvironmentGrpBx);
        mAddCustomVarBtn->setObjectName(QStringLiteral("mAddCustomVarBtn"));
        sizePolicy2.setHeightForWidth(mAddCustomVarBtn->sizePolicy().hasHeightForWidth());
        mAddCustomVarBtn->setSizePolicy(sizePolicy2);
        mAddCustomVarBtn->setIcon(icon19);

        gridLayout_32->addWidget(mAddCustomVarBtn, 1, 2, 1, 1);

        mCurrentVariablesGrpBx = new QgsCollapsibleGroupBox(mEnvironmentGrpBx);
        mCurrentVariablesGrpBx->setObjectName(QStringLiteral("mCurrentVariablesGrpBx"));
        mCurrentVariablesGrpBx->setMinimumSize(QSize(0, 0));
        mCurrentVariablesGrpBx->setProperty("collapsed", QVariant(false));
        mCurrentVariablesGrpBx->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_8 = new QVBoxLayout(mCurrentVariablesGrpBx);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        mCurrentVariablesTable = new QTableWidget(mCurrentVariablesGrpBx);
        if (mCurrentVariablesTable->columnCount() < 2)
            mCurrentVariablesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mCurrentVariablesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mCurrentVariablesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mCurrentVariablesTable->setObjectName(QStringLiteral("mCurrentVariablesTable"));
        mCurrentVariablesTable->setMinimumSize(QSize(0, 120));
        mCurrentVariablesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mCurrentVariablesTable->setSortingEnabled(true);
        mCurrentVariablesTable->setWordWrap(false);
        mCurrentVariablesTable->horizontalHeader()->setMinimumSectionSize(100);
        mCurrentVariablesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mCurrentVariablesTable->horizontalHeader()->setStretchLastSection(true);
        mCurrentVariablesTable->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(mCurrentVariablesTable);

        mCurrentVariablesQGISChxBx = new QCheckBox(mCurrentVariablesGrpBx);
        mCurrentVariablesQGISChxBx->setObjectName(QStringLiteral("mCurrentVariablesQGISChxBx"));

        verticalLayout_8->addWidget(mCurrentVariablesQGISChxBx);


        gridLayout_32->addWidget(mCurrentVariablesGrpBx, 4, 0, 1, 4);

        mCustomVariablesChkBx = new QCheckBox(mEnvironmentGrpBx);
        mCustomVariablesChkBx->setObjectName(QStringLiteral("mCustomVariablesChkBx"));

        gridLayout_32->addWidget(mCustomVariablesChkBx, 1, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_32->addItem(horizontalSpacer_14, 1, 1, 1, 1);

        mCustomVariablesTable = new QTableWidget(mEnvironmentGrpBx);
        if (mCustomVariablesTable->columnCount() < 3)
            mCustomVariablesTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        mCustomVariablesTable->setObjectName(QStringLiteral("mCustomVariablesTable"));
        mCustomVariablesTable->setMinimumSize(QSize(0, 120));
        mCustomVariablesTable->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mCustomVariablesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mCustomVariablesTable->setSortingEnabled(true);
        mCustomVariablesTable->setWordWrap(false);
        mCustomVariablesTable->setCornerButtonEnabled(false);
        mCustomVariablesTable->horizontalHeader()->setMinimumSectionSize(4);
        mCustomVariablesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mCustomVariablesTable->horizontalHeader()->setStretchLastSection(true);
        mCustomVariablesTable->verticalHeader()->setVisible(false);

        gridLayout_32->addWidget(mCustomVariablesTable, 3, 0, 1, 4);


        verticalLayout_22->addWidget(mEnvironmentGrpBx);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_11);

        mOptionsScrollArea_03->setWidget(mOptionsScrollAreaContents_03);

        verticalLayout_7->addWidget(mOptionsScrollArea_03);

        mOptionsStackedWidget->addWidget(mOptionsPageSystem);
        mOptionsPageCRS = new QWidget();
        mOptionsPageCRS->setObjectName(QStringLiteral("mOptionsPageCRS"));
        verticalLayout_18 = new QVBoxLayout(mOptionsPageCRS);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_08 = new QgsScrollArea(mOptionsPageCRS);
        mOptionsScrollArea_08->setObjectName(QStringLiteral("mOptionsScrollArea_08"));
        mOptionsScrollArea_08->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_08->setWidgetResizable(true);
        mOptionsScrollAreaContents_08 = new QWidget();
        mOptionsScrollAreaContents_08->setObjectName(QStringLiteral("mOptionsScrollAreaContents_08"));
        mOptionsScrollAreaContents_08->setGeometry(QRect(0, 0, 857, 679));
        gridLayout_15 = new QGridLayout(mOptionsScrollAreaContents_08);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        grpProjectionBehavior = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        grpProjectionBehavior->setObjectName(QStringLiteral("grpProjectionBehavior"));
        gridLayout_14 = new QGridLayout(grpProjectionBehavior);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        leLayerGlobalCrs = new QgsProjectionSelectionWidget(grpProjectionBehavior);
        leLayerGlobalCrs->setObjectName(QStringLiteral("leLayerGlobalCrs"));
        leLayerGlobalCrs->setEnabled(true);
        leLayerGlobalCrs->setFocusPolicy(Qt::StrongFocus);

        gridLayout_14->addWidget(leLayerGlobalCrs, 0, 1, 1, 1);

        label_8 = new QLabel(grpProjectionBehavior);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setWordWrap(true);

        gridLayout_14->addWidget(label_8, 1, 0, 1, 2);

        radUseProjectProjection = new QRadioButton(grpProjectionBehavior);
        radUseProjectProjection->setObjectName(QStringLiteral("radUseProjectProjection"));

        gridLayout_14->addWidget(radUseProjectProjection, 4, 0, 1, 2);

        label_16 = new QLabel(grpProjectionBehavior);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_14->addWidget(label_16, 0, 0, 1, 1);

        radUseGlobalProjection = new QRadioButton(grpProjectionBehavior);
        radUseGlobalProjection->setObjectName(QStringLiteral("radUseGlobalProjection"));

        gridLayout_14->addWidget(radUseGlobalProjection, 5, 0, 1, 2);

        radPromptForProjection = new QRadioButton(grpProjectionBehavior);
        radPromptForProjection->setObjectName(QStringLiteral("radPromptForProjection"));

        gridLayout_14->addWidget(radPromptForProjection, 3, 0, 1, 2);

        radCrsNoAction = new QRadioButton(grpProjectionBehavior);
        radCrsNoAction->setObjectName(QStringLiteral("radCrsNoAction"));

        gridLayout_14->addWidget(radCrsNoAction, 2, 0, 1, 1);

        gridLayout_14->setColumnStretch(1, 1);

        gridLayout_15->addWidget(grpProjectionBehavior, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer, 5, 0, 1, 1);

        grpProjectProjection = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        grpProjectProjection->setObjectName(QStringLiteral("grpProjectProjection"));
        gridLayout_27 = new QGridLayout(grpProjectProjection);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        label_42 = new QLabel(grpProjectProjection);
        label_42->setObjectName(QStringLiteral("label_42"));
        sizePolicy5.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy5);
        label_42->setWordWrap(true);

        gridLayout_27->addWidget(label_42, 0, 0, 1, 2);

        leProjectGlobalCrs = new QgsProjectionSelectionWidget(grpProjectProjection);
        leProjectGlobalCrs->setObjectName(QStringLiteral("leProjectGlobalCrs"));
        leProjectGlobalCrs->setMinimumSize(QSize(0, 5));
        leProjectGlobalCrs->setFocusPolicy(Qt::StrongFocus);

        gridLayout_27->addWidget(leProjectGlobalCrs, 2, 1, 1, 1);

        radProjectUseDefaultCrs = new QRadioButton(grpProjectProjection);
        radProjectUseDefaultCrs->setObjectName(QStringLiteral("radProjectUseDefaultCrs"));

        gridLayout_27->addWidget(radProjectUseDefaultCrs, 2, 0, 1, 1);

        radProjectUseCrsOfFirstLayer = new QRadioButton(grpProjectProjection);
        radProjectUseCrsOfFirstLayer->setObjectName(QStringLiteral("radProjectUseCrsOfFirstLayer"));

        gridLayout_27->addWidget(radProjectUseCrsOfFirstLayer, 1, 0, 1, 2);

        gridLayout_27->setColumnStretch(1, 1);

        gridLayout_15->addWidget(grpProjectProjection, 2, 0, 1, 1);

        mPlanimetricMeasurementsComboBox = new QCheckBox(mOptionsScrollAreaContents_08);
        mPlanimetricMeasurementsComboBox->setObjectName(QStringLiteral("mPlanimetricMeasurementsComboBox"));

        gridLayout_15->addWidget(mPlanimetricMeasurementsComboBox, 4, 0, 1, 1);

        mOptionsScrollArea_08->setWidget(mOptionsScrollAreaContents_08);

        verticalLayout_18->addWidget(mOptionsScrollArea_08);

        mOptionsStackedWidget->addWidget(mOptionsPageCRS);
        mOptionsPageTransformations = new QWidget();
        mOptionsPageTransformations->setObjectName(QStringLiteral("mOptionsPageTransformations"));
        verticalLayout_46 = new QVBoxLayout(mOptionsPageTransformations);
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setContentsMargins(11, 11, 11, 11);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mOptionsPageTransformations);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 857, 679));
        verticalLayout_47 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setContentsMargins(11, 11, 11, 11);
        verticalLayout_47->setObjectName(QStringLiteral("verticalLayout_47"));
        verticalLayout_47->setContentsMargins(0, 0, 0, 0);
        mDefaultDatumTransformGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mDefaultDatumTransformGroupBox->setObjectName(QStringLiteral("mDefaultDatumTransformGroupBox"));
        gridLayout_10 = new QGridLayout(mDefaultDatumTransformGroupBox);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_40 = new QLabel(mDefaultDatumTransformGroupBox);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_10->addWidget(label_40, 2, 0, 1, 1);

        mShowDatumTransformDialogCheckBox = new QCheckBox(mDefaultDatumTransformGroupBox);
        mShowDatumTransformDialogCheckBox->setObjectName(QStringLiteral("mShowDatumTransformDialogCheckBox"));

        gridLayout_10->addWidget(mShowDatumTransformDialogCheckBox, 0, 0, 1, 1);

        line_2 = new QFrame(mDefaultDatumTransformGroupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_2, 1, 0, 1, 1);

        mDefaultDatumTransformTableWidget = new QgsDatumTransformTableWidget(mDefaultDatumTransformGroupBox);
        mDefaultDatumTransformTableWidget->setObjectName(QStringLiteral("mDefaultDatumTransformTableWidget"));

        gridLayout_10->addWidget(mDefaultDatumTransformTableWidget, 3, 0, 1, 1);

        gridLayout_10->setRowStretch(3, 1);

        verticalLayout_47->addWidget(mDefaultDatumTransformGroupBox);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_46->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptionsPageTransformations);
        mOptionsPageDataSources = new QWidget();
        mOptionsPageDataSources->setObjectName(QStringLiteral("mOptionsPageDataSources"));
        verticalLayout_26 = new QVBoxLayout(mOptionsPageDataSources);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_11 = new QgsScrollArea(mOptionsPageDataSources);
        mOptionsScrollArea_11->setObjectName(QStringLiteral("mOptionsScrollArea_11"));
        mOptionsScrollArea_11->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_11->setWidgetResizable(true);
        mOptionsScrollAreaContents_11 = new QWidget();
        mOptionsScrollAreaContents_11->setObjectName(QStringLiteral("mOptionsScrollAreaContents_11"));
        mOptionsScrollAreaContents_11->setGeometry(QRect(0, 0, 843, 804));
        verticalLayout_27 = new QVBoxLayout(mOptionsScrollAreaContents_11);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        groupBox_18 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        gridLayout_19 = new QGridLayout(groupBox_18);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        cbxAttributeTableDocked = new QCheckBox(groupBox_18);
        cbxAttributeTableDocked->setObjectName(QStringLiteral("cbxAttributeTableDocked"));

        gridLayout_19->addWidget(cbxAttributeTableDocked, 0, 0, 1, 2);

        cmbAttrTableBehavior = new QComboBox(groupBox_18);
        cmbAttrTableBehavior->setObjectName(QStringLiteral("cmbAttrTableBehavior"));

        gridLayout_19->addWidget(cmbAttrTableBehavior, 3, 1, 1, 1);

        textLabel1_7 = new QLabel(groupBox_18);
        textLabel1_7->setObjectName(QStringLiteral("textLabel1_7"));
        sizePolicy1.setHeightForWidth(textLabel1_7->sizePolicy().hasHeightForWidth());
        textLabel1_7->setSizePolicy(sizePolicy1);

        gridLayout_19->addWidget(textLabel1_7, 3, 0, 1, 1);

        label_14 = new QLabel(groupBox_18);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_19->addWidget(label_14, 6, 0, 1, 1);

        mAttrTableViewComboBox = new QComboBox(groupBox_18);
        mAttrTableViewComboBox->setObjectName(QStringLiteral("mAttrTableViewComboBox"));

        gridLayout_19->addWidget(mAttrTableViewComboBox, 4, 1, 1, 1);

        leNullValue = new QLineEdit(groupBox_18);
        leNullValue->setObjectName(QStringLiteral("leNullValue"));

        gridLayout_19->addWidget(leNullValue, 6, 1, 1, 1);

        textLabel1_12 = new QLabel(groupBox_18);
        textLabel1_12->setObjectName(QStringLiteral("textLabel1_12"));
        sizePolicy1.setHeightForWidth(textLabel1_12->sizePolicy().hasHeightForWidth());
        textLabel1_12->setSizePolicy(sizePolicy1);

        gridLayout_19->addWidget(textLabel1_12, 5, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        spinBoxAttrTableRowCache = new QgsSpinBox(groupBox_18);
        spinBoxAttrTableRowCache->setObjectName(QStringLiteral("spinBoxAttrTableRowCache"));
        spinBoxAttrTableRowCache->setMinimum(0);
        spinBoxAttrTableRowCache->setMaximum(10000000);
        spinBoxAttrTableRowCache->setSingleStep(1000);
        spinBoxAttrTableRowCache->setValue(10000);

        horizontalLayout_10->addWidget(spinBoxAttrTableRowCache);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        gridLayout_19->addLayout(horizontalLayout_10, 5, 1, 1, 1);

        mComboCopyFeatureFormat = new QComboBox(groupBox_18);
        mComboCopyFeatureFormat->setObjectName(QStringLiteral("mComboCopyFeatureFormat"));

        gridLayout_19->addWidget(mComboCopyFeatureFormat, 2, 1, 1, 1);

        label_46 = new QLabel(groupBox_18);
        label_46->setObjectName(QStringLiteral("label_46"));

        gridLayout_19->addWidget(label_46, 4, 0, 1, 1);

        label_48 = new QLabel(groupBox_18);
        label_48->setObjectName(QStringLiteral("label_48"));

        gridLayout_19->addWidget(label_48, 2, 0, 1, 1);


        verticalLayout_27->addWidget(groupBox_18);

        groupBox_19 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        gridLayout_23 = new QGridLayout(groupBox_19);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        cmbScanItemsInBrowser = new QComboBox(groupBox_19);
        cmbScanItemsInBrowser->setObjectName(QStringLiteral("cmbScanItemsInBrowser"));

        gridLayout_23->addWidget(cmbScanItemsInBrowser, 0, 2, 1, 1);

        cbxEvaluateDefaultValues = new QCheckBox(groupBox_19);
        cbxEvaluateDefaultValues->setObjectName(QStringLiteral("cbxEvaluateDefaultValues"));

        gridLayout_23->addWidget(cbxEvaluateDefaultValues, 6, 0, 1, 4);

        cmbScanZipInBrowser = new QComboBox(groupBox_19);
        cmbScanZipInBrowser->setObjectName(QStringLiteral("cmbScanZipInBrowser"));

        gridLayout_23->addWidget(cmbScanZipInBrowser, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        textLabel1_13 = new QLabel(groupBox_19);
        textLabel1_13->setObjectName(QStringLiteral("textLabel1_13"));
        sizePolicy1.setHeightForWidth(textLabel1_13->sizePolicy().hasHeightForWidth());
        textLabel1_13->setSizePolicy(sizePolicy1);

        gridLayout_23->addWidget(textLabel1_13, 2, 0, 1, 1);

        cmbPromptSublayers = new QComboBox(groupBox_19);
        cmbPromptSublayers->setObjectName(QStringLiteral("cmbPromptSublayers"));

        gridLayout_23->addWidget(cmbPromptSublayers, 2, 2, 1, 1);

        label_30 = new QLabel(groupBox_19);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_23->addWidget(label_30, 0, 0, 1, 1);

        cbxCompileExpressions = new QCheckBox(groupBox_19);
        cbxCompileExpressions->setObjectName(QStringLiteral("cbxCompileExpressions"));

        gridLayout_23->addWidget(cbxCompileExpressions, 5, 0, 1, 4);

        label_29 = new QLabel(groupBox_19);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_23->addWidget(label_29, 1, 0, 1, 1);


        verticalLayout_27->addWidget(groupBox_19);

        groupBox_301 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_301->setObjectName(QStringLiteral("groupBox_301"));
        gridLayout_34 = new QGridLayout(groupBox_301);
        gridLayout_34->setSpacing(6);
        gridLayout_34->setContentsMargins(11, 11, 11, 11);
        gridLayout_34->setObjectName(QStringLiteral("gridLayout_34"));
        label_9 = new QLabel(groupBox_301);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_34->addWidget(label_9, 0, 0, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_19, 0, 1, 1, 1);

        mLocalizedDataPathAddButton = new QToolButton(groupBox_301);
        mLocalizedDataPathAddButton->setObjectName(QStringLiteral("mLocalizedDataPathAddButton"));
        mLocalizedDataPathAddButton->setIcon(icon19);

        gridLayout_34->addWidget(mLocalizedDataPathAddButton, 0, 2, 1, 1);

        mLocalizedDataPathRemoveButton = new QToolButton(groupBox_301);
        mLocalizedDataPathRemoveButton->setObjectName(QStringLiteral("mLocalizedDataPathRemoveButton"));
        mLocalizedDataPathRemoveButton->setIcon(icon20);

        gridLayout_34->addWidget(mLocalizedDataPathRemoveButton, 0, 3, 1, 1);

        mLocalizedDataPathUpButton = new QToolButton(groupBox_301);
        mLocalizedDataPathUpButton->setObjectName(QStringLiteral("mLocalizedDataPathUpButton"));
        mLocalizedDataPathUpButton->setIcon(icon22);

        gridLayout_34->addWidget(mLocalizedDataPathUpButton, 0, 4, 1, 1);

        mLocalizedDataPathDownButton = new QToolButton(groupBox_301);
        mLocalizedDataPathDownButton->setObjectName(QStringLiteral("mLocalizedDataPathDownButton"));
        mLocalizedDataPathDownButton->setIcon(icon21);

        gridLayout_34->addWidget(mLocalizedDataPathDownButton, 0, 5, 1, 1);

        mLocalizedDataPathListWidget = new QListWidget(groupBox_301);
        mLocalizedDataPathListWidget->setObjectName(QStringLiteral("mLocalizedDataPathListWidget"));
        mLocalizedDataPathListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        mLocalizedDataPathListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_34->addWidget(mLocalizedDataPathListWidget, 1, 0, 1, 6);


        verticalLayout_27->addWidget(groupBox_301);

        groupBox_28 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_28->setObjectName(QStringLiteral("groupBox_28"));
        _15 = new QGridLayout(groupBox_28);
        _15->setSpacing(6);
        _15->setContentsMargins(11, 11, 11, 11);
        _15->setObjectName(QStringLiteral("_15"));
        mBtnRemoveHiddenPath = new QToolButton(groupBox_28);
        mBtnRemoveHiddenPath->setObjectName(QStringLiteral("mBtnRemoveHiddenPath"));
        mBtnRemoveHiddenPath->setIcon(icon20);

        _15->addWidget(mBtnRemoveHiddenPath, 0, 2, 1, 1);

        mSVGLabel_4 = new QLabel(groupBox_28);
        mSVGLabel_4->setObjectName(QStringLiteral("mSVGLabel_4"));

        _15->addWidget(mSVGLabel_4, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _15->addItem(spacerItem3, 0, 1, 1, 1);

        mListHiddenBrowserPaths = new QListWidget(groupBox_28);
        mListHiddenBrowserPaths->setObjectName(QStringLiteral("mListHiddenBrowserPaths"));
        mListHiddenBrowserPaths->setMinimumSize(QSize(0, 120));

        _15->addWidget(mListHiddenBrowserPaths, 1, 0, 1, 3);


        verticalLayout_27->addWidget(groupBox_28);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_8);

        mOptionsScrollArea_11->setWidget(mOptionsScrollAreaContents_11);

        verticalLayout_26->addWidget(mOptionsScrollArea_11);

        mOptionsStackedWidget->addWidget(mOptionsPageDataSources);
        mOptionsPageRendering = new QWidget();
        mOptionsPageRendering->setObjectName(QStringLiteral("mOptionsPageRendering"));
        verticalLayout_12 = new QVBoxLayout(mOptionsPageRendering);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_04 = new QgsScrollArea(mOptionsPageRendering);
        mOptionsScrollArea_04->setObjectName(QStringLiteral("mOptionsScrollArea_04"));
        mOptionsScrollArea_04->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_04->setWidgetResizable(true);
        mOptionsScrollAreaContents_04 = new QWidget();
        mOptionsScrollAreaContents_04->setObjectName(QStringLiteral("mOptionsScrollAreaContents_04"));
        mOptionsScrollAreaContents_04->setGeometry(QRect(0, 0, 843, 1198));
        gridLayout_22 = new QGridLayout(mOptionsScrollAreaContents_04);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_9 = new QVBoxLayout(groupBox_5);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        chkAddedVisibility = new QCheckBox(groupBox_5);
        chkAddedVisibility->setObjectName(QStringLiteral("chkAddedVisibility"));

        verticalLayout_9->addWidget(chkAddedVisibility);

        chkUseRenderCaching = new QCheckBox(groupBox_5);
        chkUseRenderCaching->setObjectName(QStringLiteral("chkUseRenderCaching"));

        verticalLayout_9->addWidget(chkUseRenderCaching);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        chkParallelRendering = new QCheckBox(groupBox_5);
        chkParallelRendering->setObjectName(QStringLiteral("chkParallelRendering"));

        horizontalLayout_26->addWidget(chkParallelRendering);

        line_6 = new QFrame(groupBox_5);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_26->addWidget(line_6);

        chkMaxThreads = new QCheckBox(groupBox_5);
        chkMaxThreads->setObjectName(QStringLiteral("chkMaxThreads"));

        horizontalLayout_26->addWidget(chkMaxThreads);

        spinMaxThreads = new QgsSpinBox(groupBox_5);
        spinMaxThreads->setObjectName(QStringLiteral("spinMaxThreads"));

        horizontalLayout_26->addWidget(spinMaxThreads);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_41);


        verticalLayout_9->addLayout(horizontalLayout_26);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QStringLiteral("label_56"));

        horizontalLayout_4->addWidget(label_56);

        spinMapUpdateInterval = new QgsSpinBox(groupBox_5);
        spinMapUpdateInterval->setObjectName(QStringLiteral("spinMapUpdateInterval"));
        spinMapUpdateInterval->setMaximum(999999);
        spinMapUpdateInterval->setSingleStep(50);
        spinMapUpdateInterval->setValue(250);

        horizontalLayout_4->addWidget(spinMapUpdateInterval);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_46);


        verticalLayout_9->addLayout(horizontalLayout_4);

        mSimplifyDrawingGroupBox = new QgsCollapsibleGroupBox(groupBox_5);
        mSimplifyDrawingGroupBox->setObjectName(QStringLiteral("mSimplifyDrawingGroupBox"));
        mSimplifyDrawingGroupBox->setFlat(true);
        mSimplifyDrawingGroupBox->setCheckable(true);
        _14 = new QGridLayout(mSimplifyDrawingGroupBox);
        _14->setSpacing(6);
        _14->setContentsMargins(11, 11, 11, 11);
        _14->setObjectName(QStringLiteral("_14"));
        label_59 = new QLabel(mSimplifyDrawingGroupBox);
        label_59->setObjectName(QStringLiteral("label_59"));

        _14->addWidget(label_59, 0, 1, 1, 4);

        label_65 = new QLabel(mSimplifyDrawingGroupBox);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setMargin(2);

        _14->addWidget(label_65, 1, 1, 1, 1);

        mSimplifyDrawingSpinBox = new QgsDoubleSpinBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingSpinBox->setObjectName(QStringLiteral("mSimplifyDrawingSpinBox"));
        mSimplifyDrawingSpinBox->setDecimals(2);
        mSimplifyDrawingSpinBox->setMinimum(1);
        mSimplifyDrawingSpinBox->setMaximum(5);
        mSimplifyDrawingSpinBox->setSingleStep(0.2);
        mSimplifyDrawingSpinBox->setValue(1);

        _14->addWidget(mSimplifyDrawingSpinBox, 1, 2, 1, 1);

        mSimplifyDrawingPx = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyDrawingPx->setObjectName(QStringLiteral("mSimplifyDrawingPx"));
        mSimplifyDrawingPx->setMargin(2);

        _14->addWidget(mSimplifyDrawingPx, 1, 3, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _14->addItem(horizontalSpacer_40, 1, 4, 1, 1);

        mSimplifyAlgorithmLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmLabel->setObjectName(QStringLiteral("mSimplifyAlgorithmLabel"));
        mSimplifyAlgorithmLabel->setMargin(2);

        _14->addWidget(mSimplifyAlgorithmLabel, 2, 1, 1, 1);

        mSimplifyAlgorithmComboBox = new QComboBox(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmComboBox->setObjectName(QStringLiteral("mSimplifyAlgorithmComboBox"));

        _14->addWidget(mSimplifyAlgorithmComboBox, 2, 2, 1, 1);

        mSimplifyDrawingAtProvider = new QCheckBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingAtProvider->setObjectName(QStringLiteral("mSimplifyDrawingAtProvider"));

        _14->addWidget(mSimplifyDrawingAtProvider, 3, 1, 1, 4);

        mSimplifyMaxScaleLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleLabel->setObjectName(QStringLiteral("mSimplifyMaxScaleLabel"));
        mSimplifyMaxScaleLabel->setMargin(2);

        _14->addWidget(mSimplifyMaxScaleLabel, 4, 1, 1, 1);

        mSimplifyMaximumScaleComboBox = new QgsScaleComboBox(mSimplifyDrawingGroupBox);
        mSimplifyMaximumScaleComboBox->setObjectName(QStringLiteral("mSimplifyMaximumScaleComboBox"));
        sizePolicy4.setHeightForWidth(mSimplifyMaximumScaleComboBox->sizePolicy().hasHeightForWidth());
        mSimplifyMaximumScaleComboBox->setSizePolicy(sizePolicy4);

        _14->addWidget(mSimplifyMaximumScaleComboBox, 4, 2, 1, 1);


        verticalLayout_9->addWidget(mSimplifyDrawingGroupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        labelMagnifier = new QLabel(groupBox_5);
        labelMagnifier->setObjectName(QStringLiteral("labelMagnifier"));

        horizontalLayout_5->addWidget(labelMagnifier);

        doubleSpinBoxMagnifierDefault = new QgsDoubleSpinBox(groupBox_5);
        doubleSpinBoxMagnifierDefault->setObjectName(QStringLiteral("doubleSpinBoxMagnifierDefault"));

        horizontalLayout_5->addWidget(doubleSpinBoxMagnifierDefault);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_5);


        gridLayout_22->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_8 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        _5 = new QVBoxLayout(groupBox_8);
        _5->setSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        _5->setObjectName(QStringLiteral("_5"));
        _5->setContentsMargins(11, 11, 11, 11);
        chkAntiAliasing = new QCheckBox(groupBox_8);
        chkAntiAliasing->setObjectName(QStringLiteral("chkAntiAliasing"));

        _5->addWidget(chkAntiAliasing);


        gridLayout_22->addWidget(groupBox_8, 1, 0, 1, 1);

        mSegmentationGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        mSegmentationGroupBox->setObjectName(QStringLiteral("mSegmentationGroupBox"));
        gridLayout_20 = new QGridLayout(mSegmentationGroupBox);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        mSegmentationToleranceLabel = new QLabel(mSegmentationGroupBox);
        mSegmentationToleranceLabel->setObjectName(QStringLiteral("mSegmentationToleranceLabel"));

        gridLayout_20->addWidget(mSegmentationToleranceLabel, 0, 0, 1, 1);

        mSegmentationToleranceSpinBox = new QgsDoubleSpinBox(mSegmentationGroupBox);
        mSegmentationToleranceSpinBox->setObjectName(QStringLiteral("mSegmentationToleranceSpinBox"));

        gridLayout_20->addWidget(mSegmentationToleranceSpinBox, 0, 1, 1, 1);

        mToleranceTypeLabel = new QLabel(mSegmentationGroupBox);
        mToleranceTypeLabel->setObjectName(QStringLiteral("mToleranceTypeLabel"));

        gridLayout_20->addWidget(mToleranceTypeLabel, 1, 0, 1, 1);

        mToleranceTypeComboBox = new QComboBox(mSegmentationGroupBox);
        mToleranceTypeComboBox->setObjectName(QStringLiteral("mToleranceTypeComboBox"));

        gridLayout_20->addWidget(mToleranceTypeComboBox, 1, 1, 1, 1);


        gridLayout_22->addWidget(mSegmentationGroupBox, 2, 0, 1, 1);

        groupBox_14 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        verticalLayout_10 = new QVBoxLayout(groupBox_14);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        widget = new QWidget(groupBox_14);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_35 = new QGridLayout(widget);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_35->addWidget(label_21, 0, 0, 1, 1);

        horizontalLayoutRGB = new QHBoxLayout();
        horizontalLayoutRGB->setSpacing(6);
        horizontalLayoutRGB->setObjectName(QStringLiteral("horizontalLayoutRGB"));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayoutRGB->addWidget(label_22);

        spnRed = new QgsSpinBox(widget);
        spnRed->setObjectName(QStringLiteral("spnRed"));

        horizontalLayoutRGB->addWidget(spnRed);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayoutRGB->addWidget(label_23);

        spnGreen = new QgsSpinBox(widget);
        spnGreen->setObjectName(QStringLiteral("spnGreen"));

        horizontalLayoutRGB->addWidget(spnGreen);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayoutRGB->addWidget(label_24);

        spnBlue = new QgsSpinBox(widget);
        spnBlue->setObjectName(QStringLiteral("spnBlue"));

        horizontalLayoutRGB->addWidget(spnBlue);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutRGB->addItem(horizontalSpacer_20);


        gridLayout_35->addLayout(horizontalLayoutRGB, 0, 1, 1, 1);

        lbldefaultZoomedInResampling = new QLabel(widget);
        lbldefaultZoomedInResampling->setObjectName(QStringLiteral("lbldefaultZoomedInResampling"));

        gridLayout_35->addWidget(lbldefaultZoomedInResampling, 1, 0, 1, 1);

        mZoomedInResamplingComboBox = new QComboBox(widget);
        mZoomedInResamplingComboBox->setObjectName(QStringLiteral("mZoomedInResamplingComboBox"));

        gridLayout_35->addWidget(mZoomedInResamplingComboBox, 1, 1, 1, 1);

        lbldefaultZoomedOutResampling = new QLabel(widget);
        lbldefaultZoomedOutResampling->setObjectName(QStringLiteral("lbldefaultZoomedOutResampling"));

        gridLayout_35->addWidget(lbldefaultZoomedOutResampling, 2, 0, 1, 1);

        mZoomedOutResamplingComboBox = new QComboBox(widget);
        mZoomedOutResamplingComboBox->setObjectName(QStringLiteral("mZoomedOutResamplingComboBox"));

        gridLayout_35->addWidget(mZoomedOutResamplingComboBox, 2, 1, 1, 1);

        lbldefaultOversampling = new QLabel(widget);
        lbldefaultOversampling->setObjectName(QStringLiteral("lbldefaultOversampling"));

        gridLayout_35->addWidget(lbldefaultOversampling, 3, 0, 1, 1);

        horizontalLayoutOversampling = new QHBoxLayout();
        horizontalLayoutOversampling->setSpacing(6);
        horizontalLayoutOversampling->setObjectName(QStringLiteral("horizontalLayoutOversampling"));
        spnOversampling = new QgsDoubleSpinBox(widget);
        spnOversampling->setObjectName(QStringLiteral("spnOversampling"));

        horizontalLayoutOversampling->addWidget(spnOversampling);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutOversampling->addItem(horizontalSpacer_25);


        gridLayout_35->addLayout(horizontalLayoutOversampling, 3, 1, 1, 1);

        mCbEarlyResampling = new QCheckBox(widget);
        mCbEarlyResampling->setObjectName(QStringLiteral("mCbEarlyResampling"));

        gridLayout_35->addWidget(mCbEarlyResampling, 4, 0, 1, 1);


        verticalLayout_10->addWidget(widget);

        groupBox_17 = new QGroupBox(groupBox_14);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setFlat(true);
        verticalLayout_11 = new QVBoxLayout(groupBox_17);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        gridLayout_33 = new QGridLayout();
        gridLayout_33->setSpacing(6);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        cboxContrastEnhancementLimitsMultiBandSingleByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementLimitsMultiBandSingleByte->setObjectName(QStringLiteral("cboxContrastEnhancementLimitsMultiBandSingleByte"));

        gridLayout_33->addWidget(cboxContrastEnhancementLimitsMultiBandSingleByte, 4, 2, 1, 1);

        label_50 = new QLabel(groupBox_17);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setAlignment(Qt::AlignCenter);

        gridLayout_33->addWidget(label_50, 1, 1, 1, 1);

        cboxContrastEnhancementAlgorithmSingleBand = new QComboBox(groupBox_17);
        cboxContrastEnhancementAlgorithmSingleBand->setObjectName(QStringLiteral("cboxContrastEnhancementAlgorithmSingleBand"));

        gridLayout_33->addWidget(cboxContrastEnhancementAlgorithmSingleBand, 3, 1, 1, 1);

        label_37 = new QLabel(groupBox_17);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_33->addWidget(label_37, 3, 0, 1, 1);

        label_51 = new QLabel(groupBox_17);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_33->addWidget(label_51, 1, 2, 1, 1);

        cboxContrastEnhancementLimitsSingleBand = new QComboBox(groupBox_17);
        cboxContrastEnhancementLimitsSingleBand->setObjectName(QStringLiteral("cboxContrastEnhancementLimitsSingleBand"));

        gridLayout_33->addWidget(cboxContrastEnhancementLimitsSingleBand, 3, 2, 1, 1);

        cboxContrastEnhancementAlgorithmMultiBandSingleByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementAlgorithmMultiBandSingleByte->setObjectName(QStringLiteral("cboxContrastEnhancementAlgorithmMultiBandSingleByte"));

        gridLayout_33->addWidget(cboxContrastEnhancementAlgorithmMultiBandSingleByte, 4, 1, 1, 1);

        label_38 = new QLabel(groupBox_17);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_33->addWidget(label_38, 4, 0, 1, 1);

        label_39 = new QLabel(groupBox_17);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_33->addWidget(label_39, 5, 0, 1, 1);

        cboxContrastEnhancementAlgorithmMultiBandMultiByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementAlgorithmMultiBandMultiByte->setObjectName(QStringLiteral("cboxContrastEnhancementAlgorithmMultiBandMultiByte"));

        gridLayout_33->addWidget(cboxContrastEnhancementAlgorithmMultiBandMultiByte, 5, 1, 1, 1);

        cboxContrastEnhancementLimitsMultiBandMultiByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementLimitsMultiBandMultiByte->setObjectName(QStringLiteral("cboxContrastEnhancementLimitsMultiBandMultiByte"));

        gridLayout_33->addWidget(cboxContrastEnhancementLimitsMultiBandMultiByte, 5, 2, 1, 1);


        verticalLayout_11->addLayout(gridLayout_33);

        widget_4 = new QWidget(groupBox_17);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_23 = new QHBoxLayout(widget_4);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);

        verticalLayout_11->addWidget(widget_4);

        widget_5 = new QWidget(groupBox_17);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_24 = new QHBoxLayout(widget_5);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);

        verticalLayout_11->addWidget(widget_5);

        line = new QFrame(groupBox_17);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line);

        widget_6 = new QWidget(groupBox_17);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_25 = new QHBoxLayout(widget_6);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);

        verticalLayout_11->addWidget(widget_6);

        widget_7 = new QWidget(groupBox_17);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_18 = new QHBoxLayout(widget_7);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(widget_7);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_18->addWidget(label_36);

        mRasterCumulativeCutLowerDoubleSpinBox = new QgsDoubleSpinBox(widget_7);
        mRasterCumulativeCutLowerDoubleSpinBox->setObjectName(QStringLiteral("mRasterCumulativeCutLowerDoubleSpinBox"));
        mRasterCumulativeCutLowerDoubleSpinBox->setDecimals(1);

        horizontalLayout_18->addWidget(mRasterCumulativeCutLowerDoubleSpinBox);

        label_34 = new QLabel(widget_7);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_18->addWidget(label_34);

        mRasterCumulativeCutUpperDoubleSpinBox = new QgsDoubleSpinBox(widget_7);
        mRasterCumulativeCutUpperDoubleSpinBox->setObjectName(QStringLiteral("mRasterCumulativeCutUpperDoubleSpinBox"));
        mRasterCumulativeCutUpperDoubleSpinBox->setDecimals(1);

        horizontalLayout_18->addWidget(mRasterCumulativeCutUpperDoubleSpinBox);

        label_35 = new QLabel(widget_7);
        label_35->setObjectName(QStringLiteral("label_35"));

        horizontalLayout_18->addWidget(label_35);

        horizontalSpacer_18 = new QSpacerItem(123, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);


        verticalLayout_11->addWidget(widget_7);

        widget_2 = new QWidget(groupBox_17);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_20 = new QHBoxLayout(widget_2);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(widget_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_20->addWidget(label_25);

        spnThreeBandStdDev = new QgsDoubleSpinBox(widget_2);
        spnThreeBandStdDev->setObjectName(QStringLiteral("spnThreeBandStdDev"));
        spnThreeBandStdDev->setMaximum(10);
        spnThreeBandStdDev->setSingleStep(0.1);

        horizontalLayout_20->addWidget(spnThreeBandStdDev);

        horizontalSpacer_21 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_21);


        verticalLayout_11->addWidget(widget_2);


        verticalLayout_10->addWidget(groupBox_17);


        gridLayout_22->addWidget(groupBox_14, 3, 0, 1, 1);

        groupBox_22 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        verticalLayout_35 = new QVBoxLayout(groupBox_22);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        label_55 = new QLabel(groupBox_22);
        label_55->setObjectName(QStringLiteral("label_55"));

        verticalLayout_35->addWidget(label_55);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_37 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_37, 0, 0, 1, 1);

        mLogCanvasRefreshChkBx = new QCheckBox(groupBox_22);
        mLogCanvasRefreshChkBx->setObjectName(QStringLiteral("mLogCanvasRefreshChkBx"));

        gridLayout_6->addWidget(mLogCanvasRefreshChkBx, 0, 1, 1, 1);


        verticalLayout_35->addLayout(gridLayout_6);


        gridLayout_22->addWidget(groupBox_22, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_22->addItem(verticalSpacer_6, 5, 0, 1, 1);

        mOptionsScrollArea_04->setWidget(mOptionsScrollAreaContents_04);

        verticalLayout_12->addWidget(mOptionsScrollArea_04);

        mOptionsStackedWidget->addWidget(mOptionsPageRendering);
        mOptionsPageMapCanvas = new QWidget();
        mOptionsPageMapCanvas->setObjectName(QStringLiteral("mOptionsPageMapCanvas"));
        verticalLayout_16 = new QVBoxLayout(mOptionsPageMapCanvas);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_06 = new QgsScrollArea(mOptionsPageMapCanvas);
        mOptionsScrollArea_06->setObjectName(QStringLiteral("mOptionsScrollArea_06"));
        mOptionsScrollArea_06->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_06->setWidgetResizable(true);
        mOptionsScrollAreaContents_06 = new QWidget();
        mOptionsScrollAreaContents_06->setObjectName(QStringLiteral("mOptionsScrollAreaContents_06"));
        mOptionsScrollAreaContents_06->setGeometry(QRect(0, 0, 857, 679));
        verticalLayout_25 = new QVBoxLayout(mOptionsScrollAreaContents_06);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        groupBox_9 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout_7 = new QGridLayout(groupBox_9);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pbnCanvasColor = new QgsColorButton(groupBox_9);
        pbnCanvasColor->setObjectName(QStringLiteral("pbnCanvasColor"));
        sizePolicy1.setHeightForWidth(pbnCanvasColor->sizePolicy().hasHeightForWidth());
        pbnCanvasColor->setSizePolicy(sizePolicy1);
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(pbnCanvasColor, 0, 4, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_28, 0, 6, 1, 1);

        label = new QLabel(groupBox_9);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(label, 0, 3, 1, 1);

        textLabel1_9 = new QLabel(groupBox_9);
        textLabel1_9->setObjectName(QStringLiteral("textLabel1_9"));
        sizePolicy3.setHeightForWidth(textLabel1_9->sizePolicy().hasHeightForWidth());
        textLabel1_9->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(textLabel1_9, 0, 0, 1, 1);

        pbnSelectionColor = new QgsColorButton(groupBox_9);
        pbnSelectionColor->setObjectName(QStringLiteral("pbnSelectionColor"));
        sizePolicy1.setHeightForWidth(pbnSelectionColor->sizePolicy().hasHeightForWidth());
        pbnSelectionColor->setSizePolicy(sizePolicy1);
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(pbnSelectionColor, 0, 1, 1, 1);


        verticalLayout_25->addWidget(groupBox_9);

        mLegendGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        mLegendGrpBx->setObjectName(QStringLiteral("mLegendGrpBx"));
        mLegendGrpBx->setMinimumSize(QSize(0, 0));
        verticalLayout_21 = new QVBoxLayout(mLegendGrpBx);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_15 = new QLabel(mLegendGrpBx);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_8->addWidget(label_15);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        cmbLegendDoubleClickAction = new QComboBox(mLegendGrpBx);
        cmbLegendDoubleClickAction->setObjectName(QStringLiteral("cmbLegendDoubleClickAction"));

        horizontalLayout_8->addWidget(cmbLegendDoubleClickAction);


        verticalLayout_21->addLayout(horizontalLayout_8);

        cbxLegendClassifiers = new QCheckBox(mLegendGrpBx);
        cbxLegendClassifiers->setObjectName(QStringLiteral("cbxLegendClassifiers"));

        verticalLayout_21->addWidget(cbxLegendClassifiers);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_58 = new QLabel(mLegendGrpBx);
        label_58->setObjectName(QStringLiteral("label_58"));

        horizontalLayout_34->addWidget(label_58);

        horizontalSpacer_391 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_391);

        mLegendGraphicResolutionSpinBox = new QgsSpinBox(mLegendGrpBx);
        mLegendGraphicResolutionSpinBox->setObjectName(QStringLiteral("mLegendGraphicResolutionSpinBox"));
        mLegendGraphicResolutionSpinBox->setMinimum(0);
        mLegendGraphicResolutionSpinBox->setMaximum(1000000);

        horizontalLayout_34->addWidget(mLegendGraphicResolutionSpinBox);


        verticalLayout_21->addLayout(horizontalLayout_34);


        verticalLayout_25->addWidget(mLegendGrpBx);

        groupBox_12 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        horizontalLayout_221 = new QHBoxLayout(groupBox_12);
        horizontalLayout_221->setSpacing(6);
        horizontalLayout_221->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_221->setObjectName(QStringLiteral("horizontalLayout_221"));
        textLabel1_16 = new QLabel(groupBox_12);
        textLabel1_16->setObjectName(QStringLiteral("textLabel1_16"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(textLabel1_16->sizePolicy().hasHeightForWidth());
        textLabel1_16->setSizePolicy(sizePolicy6);

        horizontalLayout_221->addWidget(textLabel1_16);

        horizontalSpacer_39 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_221->addItem(horizontalSpacer_39);

        mMapTipsDelaySpinBox = new QgsSpinBox(groupBox_12);
        mMapTipsDelaySpinBox->setObjectName(QStringLiteral("mMapTipsDelaySpinBox"));
        mMapTipsDelaySpinBox->setMinimum(0);
        mMapTipsDelaySpinBox->setMaximum(1000000);

        horizontalLayout_221->addWidget(mMapTipsDelaySpinBox);


        verticalLayout_25->addWidget(groupBox_12);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(spacerItem4);

        mOptionsScrollArea_06->setWidget(mOptionsScrollAreaContents_06);

        verticalLayout_16->addWidget(mOptionsScrollArea_06);

        mOptionsStackedWidget->addWidget(mOptionsPageMapCanvas);
        mOptionsPageMapTools = new QWidget();
        mOptionsPageMapTools->setObjectName(QStringLiteral("mOptionsPageMapTools"));
        verticalLayout_14 = new QVBoxLayout(mOptionsPageMapTools);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_05 = new QgsScrollArea(mOptionsPageMapTools);
        mOptionsScrollArea_05->setObjectName(QStringLiteral("mOptionsScrollArea_05"));
        mOptionsScrollArea_05->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_05->setWidgetResizable(true);
        mOptionsScrollAreaContents_05 = new QWidget();
        mOptionsScrollAreaContents_05->setObjectName(QStringLiteral("mOptionsScrollAreaContents_05"));
        mOptionsScrollAreaContents_05->setGeometry(QRect(0, 0, 843, 709));
        verticalLayout_30 = new QVBoxLayout(mOptionsScrollAreaContents_05);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        mIdentifyGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mIdentifyGroupBox->setObjectName(QStringLiteral("mIdentifyGroupBox"));
        verticalLayout_37 = new QVBoxLayout(mIdentifyGroupBox);
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setContentsMargins(11, 11, 11, 11);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        mIdentifyRadiusHorizontalLayout = new QHBoxLayout();
        mIdentifyRadiusHorizontalLayout->setSpacing(6);
        mIdentifyRadiusHorizontalLayout->setObjectName(QStringLiteral("mIdentifyRadiusHorizontalLayout"));
        textLabel1_3 = new QLabel(mIdentifyGroupBox);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));

        mIdentifyRadiusHorizontalLayout->addWidget(textLabel1_3);

        spinBoxIdentifyValue = new QgsDoubleSpinBox(mIdentifyGroupBox);
        spinBoxIdentifyValue->setObjectName(QStringLiteral("spinBoxIdentifyValue"));
        spinBoxIdentifyValue->setMaximum(100);
        spinBoxIdentifyValue->setSingleStep(1);
        spinBoxIdentifyValue->setValue(2);

        mIdentifyRadiusHorizontalLayout->addWidget(spinBoxIdentifyValue);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mIdentifyRadiusHorizontalLayout->addItem(horizontalSpacer_44);


        verticalLayout_37->addLayout(mIdentifyRadiusHorizontalLayout);

        mIdentifyHighlightHorizontalLayout = new QHBoxLayout();
        mIdentifyHighlightHorizontalLayout->setSpacing(6);
        mIdentifyHighlightHorizontalLayout->setObjectName(QStringLiteral("mIdentifyHighlightHorizontalLayout"));
        mIdentifyHighlighColorLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlighColorLabel->setObjectName(QStringLiteral("mIdentifyHighlighColorLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlighColorLabel);

        mIdentifyHighlightColorButton = new QgsColorButton(mIdentifyGroupBox);
        mIdentifyHighlightColorButton->setObjectName(QStringLiteral("mIdentifyHighlightColorButton"));
        sizePolicy1.setHeightForWidth(mIdentifyHighlightColorButton->sizePolicy().hasHeightForWidth());
        mIdentifyHighlightColorButton->setSizePolicy(sizePolicy1);
        mIdentifyHighlightColorButton->setMinimumSize(QSize(120, 0));
        mIdentifyHighlightColorButton->setMaximumSize(QSize(120, 16777215));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightColorButton);

        mIdentifyHighlightBufferLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlightBufferLabel->setObjectName(QStringLiteral("mIdentifyHighlightBufferLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightBufferLabel);

        mIdentifyHighlightBufferSpinBox = new QgsDoubleSpinBox(mIdentifyGroupBox);
        mIdentifyHighlightBufferSpinBox->setObjectName(QStringLiteral("mIdentifyHighlightBufferSpinBox"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightBufferSpinBox);

        mIdentifyHighlightMinWidthLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlightMinWidthLabel->setObjectName(QStringLiteral("mIdentifyHighlightMinWidthLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightMinWidthLabel);

        mIdentifyHighlightMinWidthSpinBox = new QgsDoubleSpinBox(mIdentifyGroupBox);
        mIdentifyHighlightMinWidthSpinBox->setObjectName(QStringLiteral("mIdentifyHighlightMinWidthSpinBox"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightMinWidthSpinBox);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mIdentifyHighlightHorizontalLayout->addItem(horizontalSpacer_45);


        verticalLayout_37->addLayout(mIdentifyHighlightHorizontalLayout);


        verticalLayout_30->addWidget(mIdentifyGroupBox);

        groupBox_6 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_21 = new QGridLayout(groupBox_6);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        textLabel1_11 = new QLabel(groupBox_6);
        textLabel1_11->setObjectName(QStringLiteral("textLabel1_11"));

        gridLayout_21->addWidget(textLabel1_11, 3, 0, 1, 1);

        mAreaUnitsComboBox = new QComboBox(groupBox_6);
        mAreaUnitsComboBox->setObjectName(QStringLiteral("mAreaUnitsComboBox"));

        gridLayout_21->addWidget(mAreaUnitsComboBox, 4, 1, 1, 3);

        mDistanceUnitsComboBox = new QComboBox(groupBox_6);
        mDistanceUnitsComboBox->setObjectName(QStringLiteral("mDistanceUnitsComboBox"));

        gridLayout_21->addWidget(mDistanceUnitsComboBox, 3, 1, 1, 3);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_21->addWidget(label_13, 2, 0, 1, 1);

        mDecimalPlacesSpinBox = new QgsSpinBox(groupBox_6);
        mDecimalPlacesSpinBox->setObjectName(QStringLiteral("mDecimalPlacesSpinBox"));

        gridLayout_21->addWidget(mDecimalPlacesSpinBox, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_21->addWidget(label_12, 1, 0, 1, 1);

        textLabel1_10 = new QLabel(groupBox_6);
        textLabel1_10->setObjectName(QStringLiteral("textLabel1_10"));

        gridLayout_21->addWidget(textLabel1_10, 0, 0, 1, 1);

        spacerItem5 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(spacerItem5, 0, 2, 1, 2);

        textLabel1_14 = new QLabel(groupBox_6);
        textLabel1_14->setObjectName(QStringLiteral("textLabel1_14"));

        gridLayout_21->addWidget(textLabel1_14, 4, 0, 1, 1);

        mKeepBaseUnitCheckBox = new QCheckBox(groupBox_6);
        mKeepBaseUnitCheckBox->setObjectName(QStringLiteral("mKeepBaseUnitCheckBox"));

        gridLayout_21->addWidget(mKeepBaseUnitCheckBox, 2, 1, 1, 1);

        mAngleUnitsLabel = new QLabel(groupBox_6);
        mAngleUnitsLabel->setObjectName(QStringLiteral("mAngleUnitsLabel"));

        gridLayout_21->addWidget(mAngleUnitsLabel, 5, 0, 1, 1);

        mAngleUnitsComboBox = new QComboBox(groupBox_6);
        mAngleUnitsComboBox->setObjectName(QStringLiteral("mAngleUnitsComboBox"));

        gridLayout_21->addWidget(mAngleUnitsComboBox, 5, 1, 1, 3);

        pbnMeasureColor = new QgsColorButton(groupBox_6);
        pbnMeasureColor->setObjectName(QStringLiteral("pbnMeasureColor"));
        sizePolicy1.setHeightForWidth(pbnMeasureColor->sizePolicy().hasHeightForWidth());
        pbnMeasureColor->setSizePolicy(sizePolicy1);
        pbnMeasureColor->setMinimumSize(QSize(120, 0));
        pbnMeasureColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_21->addWidget(pbnMeasureColor, 0, 1, 1, 1);


        verticalLayout_30->addWidget(groupBox_6);

        mCoordinateDisplayGroup = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mCoordinateDisplayGroup->setObjectName(QStringLiteral("mCoordinateDisplayGroup"));
        sizePolicy5.setHeightForWidth(mCoordinateDisplayGroup->sizePolicy().hasHeightForWidth());
        mCoordinateDisplayGroup->setSizePolicy(sizePolicy5);
        mCoordinateDisplayGroup->setProperty("syncGroup", QVariant(QStringLiteral("projgeneral")));
        gridLayout_30 = new QGridLayout(mCoordinateDisplayGroup);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_10, 0, 3, 1, 1);

        label_69 = new QLabel(mCoordinateDisplayGroup);
        label_69->setObjectName(QStringLiteral("label_69"));

        gridLayout_30->addWidget(label_69, 0, 0, 1, 1);

        mCustomizeBearingFormatButton = new QPushButton(mCoordinateDisplayGroup);
        mCustomizeBearingFormatButton->setObjectName(QStringLiteral("mCustomizeBearingFormatButton"));

        gridLayout_30->addWidget(mCustomizeBearingFormatButton, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_11, 0, 1, 1, 1);

        gridLayout_30->setColumnStretch(2, 3);
        gridLayout_30->setColumnStretch(3, 6);

        verticalLayout_30->addWidget(mCoordinateDisplayGroup);

        groupBox_10 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        _8 = new QGridLayout(groupBox_10);
        _8->setSpacing(6);
        _8->setContentsMargins(11, 11, 11, 11);
        _8->setObjectName(QStringLiteral("_8"));
        label_3 = new QLabel(groupBox_10);
        label_3->setObjectName(QStringLiteral("label_3"));

        _8->addWidget(label_3, 0, 0, 1, 1);

        spinZoomFactor = new QgsSpinBox(groupBox_10);
        spinZoomFactor->setObjectName(QStringLiteral("spinZoomFactor"));
        spinZoomFactor->setMinimum(100);
        spinZoomFactor->setMaximum(999999999);
        spinZoomFactor->setSingleStep(100);
        spinZoomFactor->setValue(200);
        spinZoomFactor->setProperty("showClearButton", QVariant(true));

        _8->addWidget(spinZoomFactor, 0, 1, 1, 1);


        verticalLayout_30->addWidget(groupBox_10);

        groupBox_15 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        gridLayout_26 = new QGridLayout(groupBox_15);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        mListGlobalScales = new QListWidget(groupBox_15);
        mListGlobalScales->setObjectName(QStringLiteral("mListGlobalScales"));

        gridLayout_26->addWidget(mListGlobalScales, 0, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        pbnAddScale = new QToolButton(groupBox_15);
        pbnAddScale->setObjectName(QStringLiteral("pbnAddScale"));
        pbnAddScale->setIcon(icon19);

        verticalLayout_13->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(groupBox_15);
        pbnRemoveScale->setObjectName(QStringLiteral("pbnRemoveScale"));
        pbnRemoveScale->setIcon(icon20);

        verticalLayout_13->addWidget(pbnRemoveScale);

        pbnDefaultScaleValues = new QToolButton(groupBox_15);
        pbnDefaultScaleValues->setObjectName(QStringLiteral("pbnDefaultScaleValues"));
        pbnDefaultScaleValues->setIcon(icon18);

        verticalLayout_13->addWidget(pbnDefaultScaleValues);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        pbnImportScales = new QToolButton(groupBox_15);
        pbnImportScales->setObjectName(QStringLiteral("pbnImportScales"));
        pbnImportScales->setIcon(icon17);

        verticalLayout_13->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(groupBox_15);
        pbnExportScales->setObjectName(QStringLiteral("pbnExportScales"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon23);

        verticalLayout_13->addWidget(pbnExportScales);


        gridLayout_26->addLayout(verticalLayout_13, 0, 1, 1, 1);


        verticalLayout_30->addWidget(groupBox_15);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_3);

        mOptionsScrollArea_05->setWidget(mOptionsScrollAreaContents_05);

        verticalLayout_14->addWidget(mOptionsScrollArea_05);

        mOptionsStackedWidget->addWidget(mOptionsPageMapTools);
        mOptionsPageColors = new QWidget();
        mOptionsPageColors->setObjectName(QStringLiteral("mOptionsPageColors"));
        verticalLayout_38 = new QVBoxLayout(mOptionsPageColors);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptionsPageColors);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 857, 679));
        horizontalLayout_46 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        horizontalLayout_46->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_12, 7, 1, 1, 1);

        mButtonImportColors = new QToolButton(groupBox_7);
        mButtonImportColors->setObjectName(QStringLiteral("mButtonImportColors"));
        mButtonImportColors->setIcon(icon17);

        gridLayout_12->addWidget(mButtonImportColors, 5, 1, 1, 1);

        mTreeCustomColors = new QgsColorSchemeList(groupBox_7);
        mTreeCustomColors->setObjectName(QStringLiteral("mTreeCustomColors"));
        mTreeCustomColors->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(mTreeCustomColors, 1, 0, 8, 1);

        mButtonPasteColors = new QToolButton(groupBox_7);
        mButtonPasteColors->setObjectName(QStringLiteral("mButtonPasteColors"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonPasteColors->setIcon(icon24);

        gridLayout_12->addWidget(mButtonPasteColors, 4, 1, 1, 1);

        mButtonAddColor = new QToolButton(groupBox_7);
        mButtonAddColor->setObjectName(QStringLiteral("mButtonAddColor"));
        mButtonAddColor->setIcon(icon19);

        gridLayout_12->addWidget(mButtonAddColor, 1, 1, 1, 1);

        mButtonRemoveColor = new QToolButton(groupBox_7);
        mButtonRemoveColor->setObjectName(QStringLiteral("mButtonRemoveColor"));
        mButtonRemoveColor->setIcon(icon20);

        gridLayout_12->addWidget(mButtonRemoveColor, 2, 1, 1, 1);

        mButtonCopyColors = new QToolButton(groupBox_7);
        mButtonCopyColors->setObjectName(QStringLiteral("mButtonCopyColors"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopyColors->setIcon(icon25);

        gridLayout_12->addWidget(mButtonCopyColors, 3, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        mColorSchemesComboBox = new QComboBox(groupBox_7);
        mColorSchemesComboBox->setObjectName(QStringLiteral("mColorSchemesComboBox"));

        horizontalLayout_22->addWidget(mColorSchemesComboBox);


        gridLayout_12->addLayout(horizontalLayout_22, 0, 0, 1, 1);

        mButtonExportColors = new QToolButton(groupBox_7);
        mButtonExportColors->setObjectName(QStringLiteral("mButtonExportColors"));
        mButtonExportColors->setIcon(icon23);

        gridLayout_12->addWidget(mButtonExportColors, 6, 1, 1, 1);

        mSchemeToolButton = new QToolButton(groupBox_7);
        mSchemeToolButton->setObjectName(QStringLiteral("mSchemeToolButton"));
        mSchemeToolButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout_12->addWidget(mSchemeToolButton, 0, 1, 1, 1);


        horizontalLayout_46->addWidget(groupBox_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_38->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptionsPageColors);
        mOptionsPageDigitizing = new QWidget();
        mOptionsPageDigitizing->setObjectName(QStringLiteral("mOptionsPageDigitizing"));
        verticalLayout_17 = new QVBoxLayout(mOptionsPageDigitizing);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_07 = new QgsScrollArea(mOptionsPageDigitizing);
        mOptionsScrollArea_07->setObjectName(QStringLiteral("mOptionsScrollArea_07"));
        mOptionsScrollArea_07->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_07->setWidgetResizable(true);
        mOptionsScrollAreaContents_07 = new QWidget();
        mOptionsScrollAreaContents_07->setObjectName(QStringLiteral("mOptionsScrollAreaContents_07"));
        mOptionsScrollAreaContents_07->setGeometry(QRect(0, 0, 843, 956));
        verticalLayout_31 = new QVBoxLayout(mOptionsScrollAreaContents_07);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        mEnterAttributeValuesGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mEnterAttributeValuesGroupBox->setObjectName(QStringLiteral("mEnterAttributeValuesGroupBox"));
        gridLayout_28 = new QGridLayout(mEnterAttributeValuesGroupBox);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        label_19 = new QLabel(mEnterAttributeValuesGroupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_28->addWidget(label_19, 2, 0, 1, 1);

        chkDisableAttributeValuesDlg = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkDisableAttributeValuesDlg->setObjectName(QStringLiteral("chkDisableAttributeValuesDlg"));
        chkDisableAttributeValuesDlg->setTristate(false);

        gridLayout_28->addWidget(chkDisableAttributeValuesDlg, 0, 0, 1, 3);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_32, 2, 1, 1, 1);

        chkReuseLastValues = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkReuseLastValues->setObjectName(QStringLiteral("chkReuseLastValues"));
        chkReuseLastValues->setTristate(false);

        gridLayout_28->addWidget(chkReuseLastValues, 1, 0, 1, 3);

        mDefaultZValueLabel = new QLabel(mEnterAttributeValuesGroupBox);
        mDefaultZValueLabel->setObjectName(QStringLiteral("mDefaultZValueLabel"));

        gridLayout_28->addWidget(mDefaultZValueLabel, 3, 0, 1, 1);

        mDefaultZValueSpinBox = new QgsDoubleSpinBox(mEnterAttributeValuesGroupBox);
        mDefaultZValueSpinBox->setObjectName(QStringLiteral("mDefaultZValueSpinBox"));
        mDefaultZValueSpinBox->setDecimals(3);
        mDefaultZValueSpinBox->setMinimum(-1e+6);
        mDefaultZValueSpinBox->setMaximum(1e+6);
        mDefaultZValueSpinBox->setSingleStep(1);

        gridLayout_28->addWidget(mDefaultZValueSpinBox, 3, 2, 1, 1);

        mValidateGeometries = new QComboBox(mEnterAttributeValuesGroupBox);
        mValidateGeometries->setObjectName(QStringLiteral("mValidateGeometries"));
        sizePolicy4.setHeightForWidth(mValidateGeometries->sizePolicy().hasHeightForWidth());
        mValidateGeometries->setSizePolicy(sizePolicy4);

        gridLayout_28->addWidget(mValidateGeometries, 2, 2, 1, 1);


        verticalLayout_31->addWidget(mEnterAttributeValuesGroupBox);

        mRubberBandGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mRubberBandGroupBox->setObjectName(QStringLiteral("mRubberBandGroupBox"));
        _9 = new QGridLayout(mRubberBandGroupBox);
        _9->setSpacing(6);
        _9->setContentsMargins(11, 11, 11, 11);
        _9->setObjectName(QStringLiteral("_9"));
        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _9->addItem(horizontalSpacer_33, 0, 9, 1, 1);

        mLineWidthTextLabel = new QLabel(mRubberBandGroupBox);
        mLineWidthTextLabel->setObjectName(QStringLiteral("mLineWidthTextLabel"));
        sizePolicy3.setHeightForWidth(mLineWidthTextLabel->sizePolicy().hasHeightForWidth());
        mLineWidthTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mLineWidthTextLabel, 0, 0, 1, 1);

        mLineColorTextLabel = new QLabel(mRubberBandGroupBox);
        mLineColorTextLabel->setObjectName(QStringLiteral("mLineColorTextLabel"));
        sizePolicy3.setHeightForWidth(mLineColorTextLabel->sizePolicy().hasHeightForWidth());
        mLineColorTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mLineColorTextLabel, 0, 2, 1, 1);

        mLineWidthSpinBox = new QgsSpinBox(mRubberBandGroupBox);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));
        mLineWidthSpinBox->setMinimum(1);

        _9->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

        mFillColorToolButton = new QgsColorButton(mRubberBandGroupBox);
        mFillColorToolButton->setObjectName(QStringLiteral("mFillColorToolButton"));
        sizePolicy1.setHeightForWidth(mFillColorToolButton->sizePolicy().hasHeightForWidth());
        mFillColorToolButton->setSizePolicy(sizePolicy1);
        mFillColorToolButton->setMinimumSize(QSize(120, 0));
        mFillColorToolButton->setMaximumSize(QSize(120, 16777215));

        _9->addWidget(mFillColorToolButton, 0, 5, 1, 1);

        mSelectColorTextLabel = new QLabel(mRubberBandGroupBox);
        mSelectColorTextLabel->setObjectName(QStringLiteral("mSelectColorTextLabel"));
        sizePolicy3.setHeightForWidth(mSelectColorTextLabel->sizePolicy().hasHeightForWidth());
        mSelectColorTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mSelectColorTextLabel, 0, 4, 1, 1);

        mLineColorToolButton = new QgsColorButton(mRubberBandGroupBox);
        mLineColorToolButton->setObjectName(QStringLiteral("mLineColorToolButton"));
        sizePolicy1.setHeightForWidth(mLineColorToolButton->sizePolicy().hasHeightForWidth());
        mLineColorToolButton->setSizePolicy(sizePolicy1);
        mLineColorToolButton->setMinimumSize(QSize(120, 0));
        mLineColorToolButton->setMaximumSize(QSize(120, 16777215));

        _9->addWidget(mLineColorToolButton, 0, 3, 1, 1);

        mLineGhostCheckBox = new QCheckBox(mRubberBandGroupBox);
        mLineGhostCheckBox->setObjectName(QStringLiteral("mLineGhostCheckBox"));

        _9->addWidget(mLineGhostCheckBox, 1, 0, 1, 7);


        verticalLayout_31->addWidget(mRubberBandGroupBox);

        mSnappingGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mSnappingGroupBox->setObjectName(QStringLiteral("mSnappingGroupBox"));
        gridLayout_3 = new QGridLayout(mSnappingGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mSnappingEnabledDefault = new QCheckBox(mSnappingGroupBox);
        mSnappingEnabledDefault->setObjectName(QStringLiteral("mSnappingEnabledDefault"));

        gridLayout_3->addWidget(mSnappingEnabledDefault, 0, 0, 1, 4);

        mDefaultSnapModeLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnapModeLabel->setObjectName(QStringLiteral("mDefaultSnapModeLabel"));

        gridLayout_3->addWidget(mDefaultSnapModeLabel, 1, 0, 1, 1);

        spacerItem6 = new QSpacerItem(273, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem6, 1, 1, 1, 1);

        mDefaultSnapModeComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnapModeComboBox->setObjectName(QStringLiteral("mDefaultSnapModeComboBox"));
        sizePolicy4.setHeightForWidth(mDefaultSnapModeComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnapModeComboBox->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(mDefaultSnapModeComboBox, 1, 2, 1, 1);

        mDefaultSnappingToleranceTextLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnappingToleranceTextLabel->setObjectName(QStringLiteral("mDefaultSnappingToleranceTextLabel"));

        gridLayout_3->addWidget(mDefaultSnappingToleranceTextLabel, 2, 0, 1, 1);

        spacerItem7 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem7, 2, 1, 1, 1);

        mDefaultSnappingToleranceSpinBox = new QgsDoubleSpinBox(mSnappingGroupBox);
        mDefaultSnappingToleranceSpinBox->setObjectName(QStringLiteral("mDefaultSnappingToleranceSpinBox"));
        mDefaultSnappingToleranceSpinBox->setDecimals(5);
        mDefaultSnappingToleranceSpinBox->setMaximum(1e+8);

        gridLayout_3->addWidget(mDefaultSnappingToleranceSpinBox, 2, 2, 1, 1);

        mDefaultSnappingToleranceComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnappingToleranceComboBox->setObjectName(QStringLiteral("mDefaultSnappingToleranceComboBox"));
        sizePolicy4.setHeightForWidth(mDefaultSnappingToleranceComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnappingToleranceComboBox->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(mDefaultSnappingToleranceComboBox, 2, 3, 1, 1);

        mVertexSearchRadiusVertexEditLabel = new QLabel(mSnappingGroupBox);
        mVertexSearchRadiusVertexEditLabel->setObjectName(QStringLiteral("mVertexSearchRadiusVertexEditLabel"));

        gridLayout_3->addWidget(mVertexSearchRadiusVertexEditLabel, 3, 0, 1, 1);

        spacerItem8 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem8, 3, 1, 1, 1);

        mSearchRadiusVertexEditSpinBox = new QgsDoubleSpinBox(mSnappingGroupBox);
        mSearchRadiusVertexEditSpinBox->setObjectName(QStringLiteral("mSearchRadiusVertexEditSpinBox"));
        mSearchRadiusVertexEditSpinBox->setDecimals(5);
        mSearchRadiusVertexEditSpinBox->setMaximum(1e+8);

        gridLayout_3->addWidget(mSearchRadiusVertexEditSpinBox, 3, 2, 1, 1);

        mSearchRadiusVertexEditComboBox = new QComboBox(mSnappingGroupBox);
        mSearchRadiusVertexEditComboBox->setObjectName(QStringLiteral("mSearchRadiusVertexEditComboBox"));

        gridLayout_3->addWidget(mSearchRadiusVertexEditComboBox, 3, 3, 1, 1);

        label_49 = new QLabel(mSnappingGroupBox);
        label_49->setObjectName(QStringLiteral("label_49"));

        gridLayout_3->addWidget(label_49, 4, 0, 1, 1);

        mSnappingMainDialogComboBox = new QComboBox(mSnappingGroupBox);
        mSnappingMainDialogComboBox->setObjectName(QStringLiteral("mSnappingMainDialogComboBox"));

        gridLayout_3->addWidget(mSnappingMainDialogComboBox, 4, 2, 1, 1);

        label_2 = new QLabel(mSnappingGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 5, 0, 1, 1);

        mSnappingMarkerColorButton = new QgsColorButton(mSnappingGroupBox);
        mSnappingMarkerColorButton->setObjectName(QStringLiteral("mSnappingMarkerColorButton"));
        mSnappingMarkerColorButton->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(mSnappingMarkerColorButton, 5, 2, 1, 1);

        mSnappingTooltipsCheckbox = new QCheckBox(mSnappingGroupBox);
        mSnappingTooltipsCheckbox->setObjectName(QStringLiteral("mSnappingTooltipsCheckbox"));

        gridLayout_3->addWidget(mSnappingTooltipsCheckbox, 6, 0, 1, 4);

        mEnableSnappingOnInvisibleFeatureCheckbox = new QCheckBox(mSnappingGroupBox);
        mEnableSnappingOnInvisibleFeatureCheckbox->setObjectName(QStringLiteral("mEnableSnappingOnInvisibleFeatureCheckbox"));

        gridLayout_3->addWidget(mEnableSnappingOnInvisibleFeatureCheckbox, 7, 0, 1, 4);


        verticalLayout_31->addWidget(mSnappingGroupBox);

        mVertexMarkerGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mVertexMarkerGroupBox->setObjectName(QStringLiteral("mVertexMarkerGroupBox"));
        _11 = new QGridLayout(mVertexMarkerGroupBox);
        _11->setSpacing(6);
        _11->setContentsMargins(11, 11, 11, 11);
        _11->setObjectName(QStringLiteral("_11"));
        mMarkerStyleLabel = new QLabel(mVertexMarkerGroupBox);
        mMarkerStyleLabel->setObjectName(QStringLiteral("mMarkerStyleLabel"));

        _11->addWidget(mMarkerStyleLabel, 1, 0, 1, 1);

        spacerItem9 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem9, 1, 1, 1, 1);

        mMarkerStyleComboBox = new QComboBox(mVertexMarkerGroupBox);
        mMarkerStyleComboBox->setObjectName(QStringLiteral("mMarkerStyleComboBox"));
        sizePolicy4.setHeightForWidth(mMarkerStyleComboBox->sizePolicy().hasHeightForWidth());
        mMarkerStyleComboBox->setSizePolicy(sizePolicy4);

        _11->addWidget(mMarkerStyleComboBox, 1, 2, 1, 1);

        mMarkerSizeSpinBox = new QgsDoubleSpinBox(mVertexMarkerGroupBox);
        mMarkerSizeSpinBox->setObjectName(QStringLiteral("mMarkerSizeSpinBox"));
        mMarkerSizeSpinBox->setLayoutDirection(Qt::LeftToRight);
        mMarkerSizeSpinBox->setMinimum(0);
        mMarkerSizeSpinBox->setSingleStep(0.01);

        _11->addWidget(mMarkerSizeSpinBox, 2, 2, 1, 1);

        label_6 = new QLabel(mVertexMarkerGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        _11->addWidget(label_6, 2, 0, 1, 1);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem10, 2, 1, 1, 1);

        mMarkersOnlyForSelectedCheckBox = new QCheckBox(mVertexMarkerGroupBox);
        mMarkersOnlyForSelectedCheckBox->setObjectName(QStringLiteral("mMarkersOnlyForSelectedCheckBox"));

        _11->addWidget(mMarkersOnlyForSelectedCheckBox, 0, 0, 1, 3);


        verticalLayout_31->addWidget(mVertexMarkerGroupBox);

        groupBox_21 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        gridLayout = new QGridLayout(groupBox_21);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mOffsetQuadSegSpinBox = new QgsSpinBox(groupBox_21);
        mOffsetQuadSegSpinBox->setObjectName(QStringLiteral("mOffsetQuadSegSpinBox"));

        gridLayout->addWidget(mOffsetQuadSegSpinBox, 1, 2, 1, 1);

        label_28 = new QLabel(groupBox_21);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout->addWidget(label_28, 2, 0, 1, 1);

        label_26 = new QLabel(groupBox_21);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout->addWidget(label_26, 0, 0, 1, 1);

        mOffsetJoinStyleComboBox = new QComboBox(groupBox_21);
        mOffsetJoinStyleComboBox->setObjectName(QStringLiteral("mOffsetJoinStyleComboBox"));
        sizePolicy4.setHeightForWidth(mOffsetJoinStyleComboBox->sizePolicy().hasHeightForWidth());
        mOffsetJoinStyleComboBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mOffsetJoinStyleComboBox, 0, 2, 1, 1);

        label_27 = new QLabel(groupBox_21);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout->addWidget(label_27, 1, 0, 1, 1);

        mCurveOffsetMiterLimitComboBox = new QgsDoubleSpinBox(groupBox_21);
        mCurveOffsetMiterLimitComboBox->setObjectName(QStringLiteral("mCurveOffsetMiterLimitComboBox"));

        gridLayout->addWidget(mCurveOffsetMiterLimitComboBox, 2, 2, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_29, 0, 1, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_30, 1, 1, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_31, 2, 1, 1, 1);


        verticalLayout_31->addWidget(groupBox_21);

        groupBox_30 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        groupBox_30->setObjectName(QStringLiteral("groupBox_30"));
        gridLayout1 = new QGridLayout(groupBox_30);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        mTracingConvertToCurveCheckBox = new QCheckBox(groupBox_30);
        mTracingConvertToCurveCheckBox->setObjectName(QStringLiteral("mTracingConvertToCurveCheckBox"));

        gridLayout1->addWidget(mTracingConvertToCurveCheckBox, 0, 0, 1, 3);


        verticalLayout_31->addWidget(groupBox_30);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_4);

        mOptionsScrollArea_07->setWidget(mOptionsScrollAreaContents_07);

        verticalLayout_17->addWidget(mOptionsScrollArea_07);

        mOptionsStackedWidget->addWidget(mOptionsPageDigitizing);
        mOptionsPageComposer = new QWidget();
        mOptionsPageComposer->setObjectName(QStringLiteral("mOptionsPageComposer"));
        verticalLayout_36 = new QVBoxLayout(mOptionsPageComposer);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_12 = new QgsScrollArea(mOptionsPageComposer);
        mOptionsScrollArea_12->setObjectName(QStringLiteral("mOptionsScrollArea_12"));
        mOptionsScrollArea_12->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_12->setWidgetResizable(true);
        mOptionsScrollAreaContents_12 = new QWidget();
        mOptionsScrollAreaContents_12->setObjectName(QStringLiteral("mOptionsScrollAreaContents_12"));
        mOptionsScrollAreaContents_12->setGeometry(QRect(0, 0, 857, 679));
        verticalLayout_39 = new QVBoxLayout(mOptionsScrollAreaContents_12);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_60 = new QLabel(groupBox_3);
        label_60->setObjectName(QStringLiteral("label_60"));

        horizontalLayout_39->addWidget(label_60);

        mComposerFontComboBox = new QFontComboBox(groupBox_3);
        mComposerFontComboBox->setObjectName(QStringLiteral("mComposerFontComboBox"));

        horizontalLayout_39->addWidget(mComposerFontComboBox);


        gridLayout_8->addLayout(horizontalLayout_39, 1, 0, 1, 1);


        verticalLayout_39->addWidget(groupBox_3);

        groupBox_23 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        gridLayout_9 = new QGridLayout(groupBox_23);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_66 = new QLabel(groupBox_23);
        label_66->setObjectName(QStringLiteral("label_66"));

        gridLayout_9->addWidget(label_66, 0, 0, 1, 1);

        mGridStyleComboBox = new QComboBox(groupBox_23);
        mGridStyleComboBox->setObjectName(QStringLiteral("mGridStyleComboBox"));

        gridLayout_9->addWidget(mGridStyleComboBox, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_23);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_9->addWidget(label_4, 0, 3, 1, 1);

        mGridColorButton = new QgsColorButton(groupBox_23);
        mGridColorButton->setObjectName(QStringLiteral("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_9->addWidget(mGridColorButton, 0, 4, 1, 1);


        verticalLayout_39->addWidget(groupBox_23);

        groupBox_24 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_24->setObjectName(QStringLiteral("groupBox_24"));
        gridLayout_11 = new QGridLayout(groupBox_24);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_61 = new QLabel(groupBox_24);
        label_61->setObjectName(QStringLiteral("label_61"));

        gridLayout_11->addWidget(label_61, 0, 0, 1, 1);

        mGridResolutionSpinBox = new QgsDoubleSpinBox(groupBox_24);
        mGridResolutionSpinBox->setObjectName(QStringLiteral("mGridResolutionSpinBox"));
        mGridResolutionSpinBox->setMinimum(0.5);
        mGridResolutionSpinBox->setMaximum(9999);

        gridLayout_11->addWidget(mGridResolutionSpinBox, 0, 1, 1, 1);

        label_63 = new QLabel(groupBox_24);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setWordWrap(true);

        gridLayout_11->addWidget(label_63, 0, 2, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        mOffsetXSpinBox = new QgsDoubleSpinBox(groupBox_24);
        mOffsetXSpinBox->setObjectName(QStringLiteral("mOffsetXSpinBox"));
        mOffsetXSpinBox->setMaximum(9999);

        horizontalLayout_36->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QgsDoubleSpinBox(groupBox_24);
        mOffsetYSpinBox->setObjectName(QStringLiteral("mOffsetYSpinBox"));

        horizontalLayout_36->addWidget(mOffsetYSpinBox);


        gridLayout_11->addLayout(horizontalLayout_36, 0, 3, 1, 1);

        label_62 = new QLabel(groupBox_24);
        label_62->setObjectName(QStringLiteral("label_62"));

        gridLayout_11->addWidget(label_62, 1, 0, 1, 1);

        mSnapToleranceSpinBox = new QgsSpinBox(groupBox_24);
        mSnapToleranceSpinBox->setObjectName(QStringLiteral("mSnapToleranceSpinBox"));
        mSnapToleranceSpinBox->setMaximum(200);

        gridLayout_11->addWidget(mSnapToleranceSpinBox, 1, 1, 1, 1);


        verticalLayout_39->addWidget(groupBox_24);

        groupBox_27 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_27->setObjectName(QStringLiteral("groupBox_27"));
        _7 = new QGridLayout(groupBox_27);
        _7->setSpacing(6);
        _7->setContentsMargins(11, 11, 11, 11);
        _7->setObjectName(QStringLiteral("_7"));
        mSVGLabel_3 = new QLabel(groupBox_27);
        mSVGLabel_3->setObjectName(QStringLiteral("mSVGLabel_3"));

        _7->addWidget(mSVGLabel_3, 0, 0, 1, 1);

        spacerItem11 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(spacerItem11, 0, 1, 1, 1);

        mBtnAddTemplatePath = new QToolButton(groupBox_27);
        mBtnAddTemplatePath->setObjectName(QStringLiteral("mBtnAddTemplatePath"));
        mBtnAddTemplatePath->setIcon(icon19);

        _7->addWidget(mBtnAddTemplatePath, 0, 2, 1, 1);

        mBtnRemoveTemplatePath = new QToolButton(groupBox_27);
        mBtnRemoveTemplatePath->setObjectName(QStringLiteral("mBtnRemoveTemplatePath"));
        mBtnRemoveTemplatePath->setIcon(icon20);

        _7->addWidget(mBtnRemoveTemplatePath, 0, 3, 1, 1);

        mListComposerTemplatePaths = new QListWidget(groupBox_27);
        mListComposerTemplatePaths->setObjectName(QStringLiteral("mListComposerTemplatePaths"));
        mListComposerTemplatePaths->setMinimumSize(QSize(0, 120));

        _7->addWidget(mListComposerTemplatePaths, 1, 0, 1, 4);


        verticalLayout_39->addWidget(groupBox_27);

        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_39->addItem(verticalSpacer_10);

        mOptionsScrollArea_12->setWidget(mOptionsScrollAreaContents_12);

        verticalLayout_36->addWidget(mOptionsScrollArea_12);

        mOptionsStackedWidget->addWidget(mOptionsPageComposer);
        mOptionsPageGDAL = new QWidget();
        mOptionsPageGDAL->setObjectName(QStringLiteral("mOptionsPageGDAL"));
        verticalLayout_4 = new QVBoxLayout(mOptionsPageGDAL);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_02 = new QgsScrollArea(mOptionsPageGDAL);
        mOptionsScrollArea_02->setObjectName(QStringLiteral("mOptionsScrollArea_02"));
        mOptionsScrollArea_02->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_02->setWidgetResizable(true);
        mOptionsScrollAreaContents_02 = new QWidget();
        mOptionsScrollAreaContents_02->setObjectName(QStringLiteral("mOptionsScrollAreaContents_02"));
        mOptionsScrollAreaContents_02->setGeometry(QRect(0, 0, 857, 679));
        verticalLayout_6 = new QVBoxLayout(mOptionsScrollAreaContents_02);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(mOptionsScrollAreaContents_02);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_24 = new QVBoxLayout(tab_3);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        groupBox_16 = new QGroupBox(tab_3);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        gridLayout_29 = new QGridLayout(groupBox_16);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        cmbEditCreateOptions = new QComboBox(groupBox_16);
        cmbEditCreateOptions->setObjectName(QStringLiteral("cmbEditCreateOptions"));

        gridLayout_29->addWidget(cmbEditCreateOptions, 0, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_15, 0, 3, 1, 1);

        pbnEditPyramidsOptions = new QPushButton(groupBox_16);
        pbnEditPyramidsOptions->setObjectName(QStringLiteral("pbnEditPyramidsOptions"));

        gridLayout_29->addWidget(pbnEditPyramidsOptions, 0, 4, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_16, 0, 5, 1, 1);

        pbnEditCreateOptions = new QPushButton(groupBox_16);
        pbnEditCreateOptions->setObjectName(QStringLiteral("pbnEditCreateOptions"));

        gridLayout_29->addWidget(pbnEditCreateOptions, 0, 2, 1, 1);


        verticalLayout_24->addWidget(groupBox_16);

        groupBox_13 = new QGroupBox(tab_3);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        gridLayout_24 = new QGridLayout(groupBox_13);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setWordWrap(true);

        gridLayout_24->addWidget(label_17, 0, 0, 1, 1);

        lstRasterDrivers = new QTreeWidget(groupBox_13);
        lstRasterDrivers->setObjectName(QStringLiteral("lstRasterDrivers"));
        lstRasterDrivers->setMinimumSize(QSize(0, 141));

        gridLayout_24->addWidget(lstRasterDrivers, 1, 0, 1, 1);


        verticalLayout_24->addWidget(groupBox_13);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_29 = new QVBoxLayout(tab_4);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        groupBox_31 = new QGroupBox(tab_4);
        groupBox_31->setObjectName(QStringLiteral("groupBox_31"));
        gridLayout_36 = new QGridLayout(groupBox_31);
        gridLayout_36->setSpacing(6);
        gridLayout_36->setContentsMargins(11, 11, 11, 11);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        label_68 = new QLabel(groupBox_31);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setWordWrap(true);

        gridLayout_36->addWidget(label_68, 0, 0, 1, 1);

        lstVectorDrivers = new QTreeWidget(groupBox_31);
        lstVectorDrivers->setObjectName(QStringLiteral("lstVectorDrivers"));
        lstVectorDrivers->setMinimumSize(QSize(0, 141));

        gridLayout_36->addWidget(lstVectorDrivers, 1, 0, 1, 1);


        verticalLayout_29->addWidget(groupBox_31);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_6->addWidget(tabWidget);

        mOptionsScrollArea_02->setWidget(mOptionsScrollAreaContents_02);

        verticalLayout_4->addWidget(mOptionsScrollArea_02);

        mOptionsStackedWidget->addWidget(mOptionsPageGDAL);
        mOptionsPageVariables = new QWidget();
        mOptionsPageVariables->setObjectName(QStringLiteral("mOptionsPageVariables"));
        verticalLayout_40 = new QVBoxLayout(mOptionsPageVariables);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        groupBox_25 = new QGroupBox(mOptionsPageVariables);
        groupBox_25->setObjectName(QStringLiteral("groupBox_25"));
        verticalLayout_41 = new QVBoxLayout(groupBox_25);
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setContentsMargins(11, 11, 11, 11);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_25);
        mVariableEditor->setObjectName(QStringLiteral("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QStringLiteral("globalOptions")));

        verticalLayout_41->addWidget(mVariableEditor);


        verticalLayout_40->addWidget(groupBox_25);

        mOptionsStackedWidget->addWidget(mOptionsPageVariables);
        mOptionsPageAuth = new QWidget();
        mOptionsPageAuth->setObjectName(QStringLiteral("mOptionsPageAuth"));
        verticalLayout_45 = new QVBoxLayout(mOptionsPageAuth);
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setContentsMargins(11, 11, 11, 11);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        mAuthConfigsGrpBx = new QgsAuthEditorWidgets(mOptionsPageAuth);
        mAuthConfigsGrpBx->setObjectName(QStringLiteral("mAuthConfigsGrpBx"));

        verticalLayout_45->addWidget(mAuthConfigsGrpBx);

        mOptionsStackedWidget->addWidget(mOptionsPageAuth);
        mOptionsPageNetwork = new QWidget();
        mOptionsPageNetwork->setObjectName(QStringLiteral("mOptionsPageNetwork"));
        verticalLayout_20 = new QVBoxLayout(mOptionsPageNetwork);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_10 = new QgsScrollArea(mOptionsPageNetwork);
        mOptionsScrollArea_10->setObjectName(QStringLiteral("mOptionsScrollArea_10"));
        mOptionsScrollArea_10->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_10->setWidgetResizable(true);
        mOptionsScrollAreaContents_10 = new QWidget();
        mOptionsScrollAreaContents_10->setObjectName(QStringLiteral("mOptionsScrollAreaContents_10"));
        mOptionsScrollAreaContents_10->setGeometry(QRect(0, 0, 843, 699));
        verticalLayout_33 = new QVBoxLayout(mOptionsScrollAreaContents_10);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        groupBox_20 = new QGroupBox(mOptionsScrollAreaContents_10);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        verticalLayout_34 = new QVBoxLayout(groupBox_20);
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setContentsMargins(11, 11, 11, 11);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        mNetworkTimeoutLabel = new QLabel(groupBox_20);
        mNetworkTimeoutLabel->setObjectName(QStringLiteral("mNetworkTimeoutLabel"));

        horizontalLayout_11->addWidget(mNetworkTimeoutLabel);

        mNetworkTimeoutSpinBox = new QgsSpinBox(groupBox_20);
        mNetworkTimeoutSpinBox->setObjectName(QStringLiteral("mNetworkTimeoutSpinBox"));
        mNetworkTimeoutSpinBox->setMaximum(100000000);

        horizontalLayout_11->addWidget(mNetworkTimeoutSpinBox);


        verticalLayout_34->addLayout(horizontalLayout_11);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_45 = new QLabel(groupBox_20);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_40->addWidget(label_45);

        mDefaultCapabilitiesExpirySpinBox = new QgsSpinBox(groupBox_20);
        mDefaultCapabilitiesExpirySpinBox->setObjectName(QStringLiteral("mDefaultCapabilitiesExpirySpinBox"));
        mDefaultCapabilitiesExpirySpinBox->setMaximum(100000000);

        horizontalLayout_40->addWidget(mDefaultCapabilitiesExpirySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_40);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_32 = new QLabel(groupBox_20);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_17->addWidget(label_32);

        mDefaultTileExpirySpinBox = new QgsSpinBox(groupBox_20);
        mDefaultTileExpirySpinBox->setObjectName(QStringLiteral("mDefaultTileExpirySpinBox"));
        mDefaultTileExpirySpinBox->setMaximum(100000000);

        horizontalLayout_17->addWidget(mDefaultTileExpirySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_17);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        label_57 = new QLabel(groupBox_20);
        label_57->setObjectName(QStringLiteral("label_57"));

        horizontalLayout_33->addWidget(label_57);

        mDefaultTileMaxRetrySpinBox = new QgsSpinBox(groupBox_20);
        mDefaultTileMaxRetrySpinBox->setObjectName(QStringLiteral("mDefaultTileMaxRetrySpinBox"));
        mDefaultTileMaxRetrySpinBox->setMaximum(100000000);

        horizontalLayout_33->addWidget(mDefaultTileMaxRetrySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_33);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        lblUserAgent = new QLabel(groupBox_20);
        lblUserAgent->setObjectName(QStringLiteral("lblUserAgent"));

        horizontalLayout_35->addWidget(lblUserAgent);

        leUserAgent = new QLineEdit(groupBox_20);
        leUserAgent->setObjectName(QStringLiteral("leUserAgent"));

        horizontalLayout_35->addWidget(leUserAgent);


        verticalLayout_34->addLayout(horizontalLayout_35);


        verticalLayout_33->addWidget(groupBox_20);

        grpCache = new QGroupBox(mOptionsScrollAreaContents_10);
        grpCache->setObjectName(QStringLiteral("grpCache"));
        verticalLayout_19 = new QVBoxLayout(grpCache);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        tabContentCache = new QTabWidget(grpCache);
        tabContentCache->setObjectName(QStringLiteral("tabContentCache"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        mCacheDirectory = new QLineEdit(tab);
        mCacheDirectory->setObjectName(QStringLiteral("mCacheDirectory"));

        gridLayout_2->addWidget(mCacheDirectory, 0, 1, 1, 1);

        mCacheSize = new QgsSpinBox(tab);
        mCacheSize->setObjectName(QStringLiteral("mCacheSize"));

        gridLayout_2->addWidget(mCacheSize, 4, 1, 1, 1);

        mBrowseCacheDirectory = new QToolButton(tab);
        mBrowseCacheDirectory->setObjectName(QStringLiteral("mBrowseCacheDirectory"));
        mBrowseCacheDirectory->setIcon(icon17);

        gridLayout_2->addWidget(mBrowseCacheDirectory, 0, 2, 1, 1);

        mClearCache = new QToolButton(tab);
        mClearCache->setObjectName(QStringLiteral("mClearCache"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mClearCache->setIcon(icon26);

        gridLayout_2->addWidget(mClearCache, 4, 2, 1, 1);

        tabContentCache->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mAutoClearAccessCache = new QCheckBox(tab_2);
        mAutoClearAccessCache->setObjectName(QStringLiteral("mAutoClearAccessCache"));

        gridLayout_5->addWidget(mAutoClearAccessCache, 0, 0, 1, 1);

        mClearAccessCache = new QPushButton(tab_2);
        mClearAccessCache->setObjectName(QStringLiteral("mClearAccessCache"));

        gridLayout_5->addWidget(mClearAccessCache, 1, 0, 1, 1);

        tabContentCache->addTab(tab_2, QString());

        verticalLayout_19->addWidget(tabContentCache);


        verticalLayout_33->addWidget(grpCache);

        grpProxy = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_10);
        grpProxy->setObjectName(QStringLiteral("grpProxy"));
        grpProxy->setFlat(false);
        grpProxy->setCheckable(true);
        grpProxy->setProperty("collapsed", QVariant(false));
        grpProxy->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_1 = new QGridLayout(grpProxy);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        label_47 = new QLabel(grpProxy);
        label_47->setObjectName(QStringLiteral("label_47"));

        gridLayout_1->addWidget(label_47, 1, 0, 1, 1);

        mRemoveUrlPushButton = new QToolButton(grpProxy);
        mRemoveUrlPushButton->setObjectName(QStringLiteral("mRemoveUrlPushButton"));
        mRemoveUrlPushButton->setIcon(icon20);

        gridLayout_1->addWidget(mRemoveUrlPushButton, 1, 4, 1, 1);

        mAddUrlPushButton = new QToolButton(grpProxy);
        mAddUrlPushButton->setObjectName(QStringLiteral("mAddUrlPushButton"));
        mAddUrlPushButton->setIcon(icon19);

        gridLayout_1->addWidget(mAddUrlPushButton, 1, 3, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        mProxyTypeComboBox = new QComboBox(grpProxy);
        mProxyTypeComboBox->setObjectName(QStringLiteral("mProxyTypeComboBox"));

        gridLayout_17->addWidget(mProxyTypeComboBox, 0, 1, 1, 1);

        mTypeLabel = new QLabel(grpProxy);
        mTypeLabel->setObjectName(QStringLiteral("mTypeLabel"));
        sizePolicy3.setHeightForWidth(mTypeLabel->sizePolicy().hasHeightForWidth());
        mTypeLabel->setSizePolicy(sizePolicy3);

        gridLayout_17->addWidget(mTypeLabel, 0, 0, 1, 1);

        label_41 = new QLabel(grpProxy);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setStyleSheet(QStringLiteral("QLabel {color: rgb(120, 120, 120);}"));

        gridLayout_17->addWidget(label_41, 0, 2, 1, 1);

        frameManualProxy = new QFrame(grpProxy);
        frameManualProxy->setObjectName(QStringLiteral("frameManualProxy"));
        frameManualProxy->setFrameShape(QFrame::NoFrame);
        frameManualProxy->setFrameShadow(QFrame::Raised);
        gridLayout_18 = new QGridLayout(frameManualProxy);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        leProxyPort = new QLineEdit(frameManualProxy);
        leProxyPort->setObjectName(QStringLiteral("leProxyPort"));

        gridLayout_18->addWidget(leProxyPort, 2, 2, 1, 1);

        lblProxyPort = new QLabel(frameManualProxy);
        lblProxyPort->setObjectName(QStringLiteral("lblProxyPort"));

        gridLayout_18->addWidget(lblProxyPort, 2, 1, 1, 1);

        leProxyHost = new QLineEdit(frameManualProxy);
        leProxyHost->setObjectName(QStringLiteral("leProxyHost"));

        gridLayout_18->addWidget(leProxyHost, 1, 2, 1, 1);

        lblProxyHost = new QLabel(frameManualProxy);
        lblProxyHost->setObjectName(QStringLiteral("lblProxyHost"));

        gridLayout_18->addWidget(lblProxyHost, 1, 1, 1, 1);

        mAuthGroupBox = new QGroupBox(frameManualProxy);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        verticalLayout_23 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QStringLiteral("mAuthSettings"));

        verticalLayout_23->addWidget(mAuthSettings);


        gridLayout_18->addWidget(mAuthGroupBox, 3, 1, 1, 2);


        gridLayout_17->addWidget(frameManualProxy, 1, 0, 1, 3);


        gridLayout_1->addLayout(gridLayout_17, 0, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_1->addItem(horizontalSpacer, 1, 1, 1, 2);

        mNoProxyUrlListWidget = new QListWidget(grpProxy);
        mNoProxyUrlListWidget->setObjectName(QStringLiteral("mNoProxyUrlListWidget"));

        gridLayout_1->addWidget(mNoProxyUrlListWidget, 2, 0, 1, 5);


        verticalLayout_33->addWidget(grpProxy);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_33->addItem(verticalSpacer_9);

        mOptionsScrollArea_10->setWidget(mOptionsScrollAreaContents_10);

        verticalLayout_20->addWidget(mOptionsScrollArea_10);

        mOptionsStackedWidget->addWidget(mOptionsPageNetwork);
        mOptionsLocatorSettings = new QWidget();
        mOptionsLocatorSettings->setObjectName(QStringLiteral("mOptionsLocatorSettings"));
        horizontalLayout_6 = new QHBoxLayout(mOptionsLocatorSettings);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mOptionsLocatorGroupBox = new QGroupBox(mOptionsLocatorSettings);
        mOptionsLocatorGroupBox->setObjectName(QStringLiteral("mOptionsLocatorGroupBox"));

        horizontalLayout_6->addWidget(mOptionsLocatorGroupBox);

        mOptionsStackedWidget->addWidget(mOptionsLocatorSettings);
        mOptionsPageAcceleration = new QWidget();
        mOptionsPageAcceleration->setObjectName(QStringLiteral("mOptionsPageAcceleration"));
        mOptionsPageAccelerationLayout = new QVBoxLayout(mOptionsPageAcceleration);
        mOptionsPageAccelerationLayout->setSpacing(6);
        mOptionsPageAccelerationLayout->setContentsMargins(11, 11, 11, 11);
        mOptionsPageAccelerationLayout->setObjectName(QStringLiteral("mOptionsPageAccelerationLayout"));
        mOptionsPageAccelerationLayout->setContentsMargins(0, 0, 0, 0);
        label_53 = new QLabel(mOptionsPageAcceleration);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setWordWrap(true);

        mOptionsPageAccelerationLayout->addWidget(label_53);

        mGPUEnableCheckBox = new QCheckBox(mOptionsPageAcceleration);
        mGPUEnableCheckBox->setObjectName(QStringLiteral("mGPUEnableCheckBox"));

        mOptionsPageAccelerationLayout->addWidget(mGPUEnableCheckBox);

        mOpenClContainerWidget = new QWidget(mOptionsPageAcceleration);
        mOpenClContainerWidget->setObjectName(QStringLiteral("mOpenClContainerWidget"));
        verticalLayout_32 = new QVBoxLayout(mOpenClContainerWidget);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_64 = new QLabel(mOpenClContainerWidget);
        label_64->setObjectName(QStringLiteral("label_64"));

        verticalLayout_32->addWidget(label_64);

        mOpenClDevicesCombo = new QComboBox(mOpenClContainerWidget);
        mOpenClDevicesCombo->setObjectName(QStringLiteral("mOpenClDevicesCombo"));

        verticalLayout_32->addWidget(mOpenClDevicesCombo);

        mGPUInfoTextBrowser = new QTextBrowser(mOpenClContainerWidget);
        mGPUInfoTextBrowser->setObjectName(QStringLiteral("mGPUInfoTextBrowser"));

        verticalLayout_32->addWidget(mGPUInfoTextBrowser);


        mOptionsPageAccelerationLayout->addWidget(mOpenClContainerWidget);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mOptionsPageAccelerationLayout->addItem(verticalSpacer_2);

        mOptionsStackedWidget->addWidget(mOptionsPageAcceleration);

        verticalLayout->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout_5->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsOptionsBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        sizePolicy5.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy5);
        mButtonBoxFrame->setMinimumSize(QSize(0, 0));
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_5->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, mOptionsScrollArea_01);
        QWidget::setTabOrder(mOptionsScrollArea_01, grpLocale);
        QWidget::setTabOrder(grpLocale, cboTranslation);
        QWidget::setTabOrder(cboTranslation, cboGlobalLocale);
        QWidget::setTabOrder(cboGlobalLocale, cbShowGroupSeparator);
        QWidget::setTabOrder(cbShowGroupSeparator, cmbStyle);
        QWidget::setTabOrder(cmbStyle, cmbUITheme);
        QWidget::setTabOrder(cmbUITheme, cmbIconSize);
        QWidget::setTabOrder(cmbIconSize, mFontFamilyRadioQt);
        QWidget::setTabOrder(mFontFamilyRadioQt, mFontFamilyRadioCustom);
        QWidget::setTabOrder(mFontFamilyRadioCustom, mFontFamilyComboBox);
        QWidget::setTabOrder(mFontFamilyComboBox, spinFontSize);
        QWidget::setTabOrder(spinFontSize, mMessageTimeoutSpnBx);
        QWidget::setTabOrder(mMessageTimeoutSpnBx, cbxHideSplash);
        QWidget::setTabOrder(cbxHideSplash, cbxShowNews);
        QWidget::setTabOrder(cbxShowNews, cbxCheckVersion);
        QWidget::setTabOrder(cbxCheckVersion, mNativeColorDialogsChkBx);
        QWidget::setTabOrder(mNativeColorDialogsChkBx, mDataSourceManagerNonModal);
        QWidget::setTabOrder(mDataSourceManagerNonModal, mProjectOnLaunchCmbBx);
        QWidget::setTabOrder(mProjectOnLaunchCmbBx, mProjectOnLaunchLineEdit);
        QWidget::setTabOrder(mProjectOnLaunchLineEdit, mProjectOnLaunchPushBtn);
        QWidget::setTabOrder(mProjectOnLaunchPushBtn, cbxProjectDefaultNew);
        QWidget::setTabOrder(cbxProjectDefaultNew, pbnProjectDefaultSetCurrent);
        QWidget::setTabOrder(pbnProjectDefaultSetCurrent, pbnProjectDefaultReset);
        QWidget::setTabOrder(pbnProjectDefaultReset, pbnTemplateFolderBrowse);
        QWidget::setTabOrder(pbnTemplateFolderBrowse, pbnTemplateFolderReset);
        QWidget::setTabOrder(pbnTemplateFolderReset, leTemplateFolder);
        QWidget::setTabOrder(leTemplateFolder, chbAskToSaveProjectChanges);
        QWidget::setTabOrder(chbAskToSaveProjectChanges, mLayerDeleteConfirmationChkBx);
        QWidget::setTabOrder(mLayerDeleteConfirmationChkBx, chbWarnOldProjectVersion);
        QWidget::setTabOrder(chbWarnOldProjectVersion, mEnableMacrosComboBox);
        QWidget::setTabOrder(mEnableMacrosComboBox, mFileFormatQgzButton);
        QWidget::setTabOrder(mFileFormatQgzButton, mFileFormatQgsButton);
        QWidget::setTabOrder(mFileFormatQgsButton, mOptionsScrollArea_03);
        QWidget::setTabOrder(mOptionsScrollArea_03, mBtnAddSVGPath);
        QWidget::setTabOrder(mBtnAddSVGPath, mBtnRemoveSVGPath);
        QWidget::setTabOrder(mBtnRemoveSVGPath, mListSVGPaths);
        QWidget::setTabOrder(mListSVGPaths, mBtnAddPluginPath);
        QWidget::setTabOrder(mBtnAddPluginPath, mBtnRemovePluginPath);
        QWidget::setTabOrder(mBtnRemovePluginPath, mListPluginPaths);
        QWidget::setTabOrder(mListPluginPaths, mBtnAddHelpPath);
        QWidget::setTabOrder(mBtnAddHelpPath, mBtnRemoveHelpPath);
        QWidget::setTabOrder(mBtnRemoveHelpPath, mBtnMoveHelpUp);
        QWidget::setTabOrder(mBtnMoveHelpUp, mBtnMoveHelpDown);
        QWidget::setTabOrder(mBtnMoveHelpDown, mHelpPathTreeWidget);
        QWidget::setTabOrder(mHelpPathTreeWidget, mRestoreDefaultWindowStateBtn);
        QWidget::setTabOrder(mRestoreDefaultWindowStateBtn, mCustomVariablesChkBx);
        QWidget::setTabOrder(mCustomVariablesChkBx, mAddCustomVarBtn);
        QWidget::setTabOrder(mAddCustomVarBtn, mRemoveCustomVarBtn);
        QWidget::setTabOrder(mRemoveCustomVarBtn, mCustomVariablesTable);
        QWidget::setTabOrder(mCustomVariablesTable, mCurrentVariablesTable);
        QWidget::setTabOrder(mCurrentVariablesTable, mCurrentVariablesQGISChxBx);
        QWidget::setTabOrder(mCurrentVariablesQGISChxBx, mOptionsScrollArea_08);
        QWidget::setTabOrder(mOptionsScrollArea_08, radProjectUseCrsOfFirstLayer);
        QWidget::setTabOrder(radProjectUseCrsOfFirstLayer, radProjectUseDefaultCrs);
        QWidget::setTabOrder(radProjectUseDefaultCrs, leProjectGlobalCrs);
        QWidget::setTabOrder(leProjectGlobalCrs, leLayerGlobalCrs);
        QWidget::setTabOrder(leLayerGlobalCrs, radCrsNoAction);
        QWidget::setTabOrder(radCrsNoAction, radPromptForProjection);
        QWidget::setTabOrder(radPromptForProjection, radUseProjectProjection);
        QWidget::setTabOrder(radUseProjectProjection, radUseGlobalProjection);
        QWidget::setTabOrder(radUseGlobalProjection, mPlanimetricMeasurementsComboBox);
        QWidget::setTabOrder(mPlanimetricMeasurementsComboBox, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mShowDatumTransformDialogCheckBox);
        QWidget::setTabOrder(mShowDatumTransformDialogCheckBox, mOptionsScrollArea_11);
        QWidget::setTabOrder(mOptionsScrollArea_11, cbxAttributeTableDocked);
        QWidget::setTabOrder(cbxAttributeTableDocked, mComboCopyFeatureFormat);
        QWidget::setTabOrder(mComboCopyFeatureFormat, cmbAttrTableBehavior);
        QWidget::setTabOrder(cmbAttrTableBehavior, mAttrTableViewComboBox);
        QWidget::setTabOrder(mAttrTableViewComboBox, spinBoxAttrTableRowCache);
        QWidget::setTabOrder(spinBoxAttrTableRowCache, leNullValue);
        QWidget::setTabOrder(leNullValue, cmbScanItemsInBrowser);
        QWidget::setTabOrder(cmbScanItemsInBrowser, cmbScanZipInBrowser);
        QWidget::setTabOrder(cmbScanZipInBrowser, cmbPromptSublayers);
        QWidget::setTabOrder(cmbPromptSublayers, cbxCompileExpressions);
        QWidget::setTabOrder(cbxCompileExpressions, cbxEvaluateDefaultValues);
        QWidget::setTabOrder(cbxEvaluateDefaultValues, mLocalizedDataPathAddButton);
        QWidget::setTabOrder(mLocalizedDataPathAddButton, mLocalizedDataPathRemoveButton);
        QWidget::setTabOrder(mLocalizedDataPathRemoveButton, mLocalizedDataPathUpButton);
        QWidget::setTabOrder(mLocalizedDataPathUpButton, mLocalizedDataPathDownButton);
        QWidget::setTabOrder(mLocalizedDataPathDownButton, mLocalizedDataPathListWidget);
        QWidget::setTabOrder(mLocalizedDataPathListWidget, mBtnRemoveHiddenPath);
        QWidget::setTabOrder(mBtnRemoveHiddenPath, mListHiddenBrowserPaths);
        QWidget::setTabOrder(mListHiddenBrowserPaths, mOptionsScrollArea_04);
        QWidget::setTabOrder(mOptionsScrollArea_04, chkAddedVisibility);
        QWidget::setTabOrder(chkAddedVisibility, chkUseRenderCaching);
        QWidget::setTabOrder(chkUseRenderCaching, chkParallelRendering);
        QWidget::setTabOrder(chkParallelRendering, chkMaxThreads);
        QWidget::setTabOrder(chkMaxThreads, spinMaxThreads);
        QWidget::setTabOrder(spinMaxThreads, spinMapUpdateInterval);
        QWidget::setTabOrder(spinMapUpdateInterval, mSimplifyDrawingGroupBox);
        QWidget::setTabOrder(mSimplifyDrawingGroupBox, mSimplifyDrawingSpinBox);
        QWidget::setTabOrder(mSimplifyDrawingSpinBox, mSimplifyAlgorithmComboBox);
        QWidget::setTabOrder(mSimplifyAlgorithmComboBox, mSimplifyDrawingAtProvider);
        QWidget::setTabOrder(mSimplifyDrawingAtProvider, mSimplifyMaximumScaleComboBox);
        QWidget::setTabOrder(mSimplifyMaximumScaleComboBox, doubleSpinBoxMagnifierDefault);
        QWidget::setTabOrder(doubleSpinBoxMagnifierDefault, chkAntiAliasing);
        QWidget::setTabOrder(chkAntiAliasing, mSegmentationToleranceSpinBox);
        QWidget::setTabOrder(mSegmentationToleranceSpinBox, mToleranceTypeComboBox);
        QWidget::setTabOrder(mToleranceTypeComboBox, spnRed);
        QWidget::setTabOrder(spnRed, spnGreen);
        QWidget::setTabOrder(spnGreen, spnBlue);
        QWidget::setTabOrder(spnBlue, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, spnOversampling);
        QWidget::setTabOrder(spnOversampling, cboxContrastEnhancementAlgorithmSingleBand);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmSingleBand, cboxContrastEnhancementLimitsSingleBand);
        QWidget::setTabOrder(cboxContrastEnhancementLimitsSingleBand, cboxContrastEnhancementAlgorithmMultiBandSingleByte);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmMultiBandSingleByte, cboxContrastEnhancementLimitsMultiBandSingleByte);
        QWidget::setTabOrder(cboxContrastEnhancementLimitsMultiBandSingleByte, cboxContrastEnhancementAlgorithmMultiBandMultiByte);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmMultiBandMultiByte, cboxContrastEnhancementLimitsMultiBandMultiByte);
        QWidget::setTabOrder(cboxContrastEnhancementLimitsMultiBandMultiByte, mRasterCumulativeCutLowerDoubleSpinBox);
        QWidget::setTabOrder(mRasterCumulativeCutLowerDoubleSpinBox, mRasterCumulativeCutUpperDoubleSpinBox);
        QWidget::setTabOrder(mRasterCumulativeCutUpperDoubleSpinBox, spnThreeBandStdDev);
        QWidget::setTabOrder(spnThreeBandStdDev, mLogCanvasRefreshChkBx);
        QWidget::setTabOrder(mLogCanvasRefreshChkBx, mOptionsScrollArea_06);
        QWidget::setTabOrder(mOptionsScrollArea_06, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cmbLegendDoubleClickAction);
        QWidget::setTabOrder(cmbLegendDoubleClickAction, cbxLegendClassifiers);
        QWidget::setTabOrder(cbxLegendClassifiers, mLegendGraphicResolutionSpinBox);
        QWidget::setTabOrder(mLegendGraphicResolutionSpinBox, mMapTipsDelaySpinBox);
        QWidget::setTabOrder(mMapTipsDelaySpinBox, mOptionsScrollArea_05);
        QWidget::setTabOrder(mOptionsScrollArea_05, spinBoxIdentifyValue);
        QWidget::setTabOrder(spinBoxIdentifyValue, mIdentifyHighlightColorButton);
        QWidget::setTabOrder(mIdentifyHighlightColorButton, mIdentifyHighlightBufferSpinBox);
        QWidget::setTabOrder(mIdentifyHighlightBufferSpinBox, mIdentifyHighlightMinWidthSpinBox);
        QWidget::setTabOrder(mIdentifyHighlightMinWidthSpinBox, pbnMeasureColor);
        QWidget::setTabOrder(pbnMeasureColor, mDecimalPlacesSpinBox);
        QWidget::setTabOrder(mDecimalPlacesSpinBox, mKeepBaseUnitCheckBox);
        QWidget::setTabOrder(mKeepBaseUnitCheckBox, mDistanceUnitsComboBox);
        QWidget::setTabOrder(mDistanceUnitsComboBox, mAreaUnitsComboBox);
        QWidget::setTabOrder(mAreaUnitsComboBox, mAngleUnitsComboBox);
        QWidget::setTabOrder(mAngleUnitsComboBox, mCustomizeBearingFormatButton);
        QWidget::setTabOrder(mCustomizeBearingFormatButton, spinZoomFactor);
        QWidget::setTabOrder(spinZoomFactor, mListGlobalScales);
        QWidget::setTabOrder(mListGlobalScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnDefaultScaleValues);
        QWidget::setTabOrder(pbnDefaultScaleValues, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, scrollArea);
        QWidget::setTabOrder(scrollArea, mColorSchemesComboBox);
        QWidget::setTabOrder(mColorSchemesComboBox, mSchemeToolButton);
        QWidget::setTabOrder(mSchemeToolButton, mTreeCustomColors);
        QWidget::setTabOrder(mTreeCustomColors, mButtonAddColor);
        QWidget::setTabOrder(mButtonAddColor, mButtonRemoveColor);
        QWidget::setTabOrder(mButtonRemoveColor, mButtonCopyColors);
        QWidget::setTabOrder(mButtonCopyColors, mButtonPasteColors);
        QWidget::setTabOrder(mButtonPasteColors, mButtonImportColors);
        QWidget::setTabOrder(mButtonImportColors, mButtonExportColors);
        QWidget::setTabOrder(mButtonExportColors, mOptionsScrollArea_07);
        QWidget::setTabOrder(mOptionsScrollArea_07, chkDisableAttributeValuesDlg);
        QWidget::setTabOrder(chkDisableAttributeValuesDlg, chkReuseLastValues);
        QWidget::setTabOrder(chkReuseLastValues, mValidateGeometries);
        QWidget::setTabOrder(mValidateGeometries, mDefaultZValueSpinBox);
        QWidget::setTabOrder(mDefaultZValueSpinBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineColorToolButton);
        QWidget::setTabOrder(mLineColorToolButton, mFillColorToolButton);
        QWidget::setTabOrder(mFillColorToolButton, mLineGhostCheckBox);
        QWidget::setTabOrder(mLineGhostCheckBox, mSnappingEnabledDefault);
        QWidget::setTabOrder(mSnappingEnabledDefault, mDefaultSnapModeComboBox);
        QWidget::setTabOrder(mDefaultSnapModeComboBox, mDefaultSnappingToleranceSpinBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceSpinBox, mDefaultSnappingToleranceComboBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceComboBox, mSearchRadiusVertexEditSpinBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditSpinBox, mSearchRadiusVertexEditComboBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditComboBox, mSnappingMainDialogComboBox);
        QWidget::setTabOrder(mSnappingMainDialogComboBox, mSnappingMarkerColorButton);
        QWidget::setTabOrder(mSnappingMarkerColorButton, mSnappingTooltipsCheckbox);
        QWidget::setTabOrder(mSnappingTooltipsCheckbox, mEnableSnappingOnInvisibleFeatureCheckbox);
        QWidget::setTabOrder(mEnableSnappingOnInvisibleFeatureCheckbox, mMarkersOnlyForSelectedCheckBox);
        QWidget::setTabOrder(mMarkersOnlyForSelectedCheckBox, mMarkerStyleComboBox);
        QWidget::setTabOrder(mMarkerStyleComboBox, mMarkerSizeSpinBox);
        QWidget::setTabOrder(mMarkerSizeSpinBox, mOffsetJoinStyleComboBox);
        QWidget::setTabOrder(mOffsetJoinStyleComboBox, mOffsetQuadSegSpinBox);
        QWidget::setTabOrder(mOffsetQuadSegSpinBox, mCurveOffsetMiterLimitComboBox);
        QWidget::setTabOrder(mCurveOffsetMiterLimitComboBox, mTracingConvertToCurveCheckBox);
        QWidget::setTabOrder(mTracingConvertToCurveCheckBox, mOptionsScrollArea_12);
        QWidget::setTabOrder(mOptionsScrollArea_12, mComposerFontComboBox);
        QWidget::setTabOrder(mComposerFontComboBox, mGridStyleComboBox);
        QWidget::setTabOrder(mGridStyleComboBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mGridResolutionSpinBox);
        QWidget::setTabOrder(mGridResolutionSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mSnapToleranceSpinBox);
        QWidget::setTabOrder(mSnapToleranceSpinBox, mBtnAddTemplatePath);
        QWidget::setTabOrder(mBtnAddTemplatePath, mBtnRemoveTemplatePath);
        QWidget::setTabOrder(mBtnRemoveTemplatePath, mListComposerTemplatePaths);
        QWidget::setTabOrder(mListComposerTemplatePaths, mOptionsScrollArea_02);
        QWidget::setTabOrder(mOptionsScrollArea_02, tabWidget);
        QWidget::setTabOrder(tabWidget, cmbEditCreateOptions);
        QWidget::setTabOrder(cmbEditCreateOptions, pbnEditCreateOptions);
        QWidget::setTabOrder(pbnEditCreateOptions, pbnEditPyramidsOptions);
        QWidget::setTabOrder(pbnEditPyramidsOptions, lstRasterDrivers);
        QWidget::setTabOrder(lstRasterDrivers, lstVectorDrivers);
        QWidget::setTabOrder(lstVectorDrivers, mAuthConfigsGrpBx);
        QWidget::setTabOrder(mAuthConfigsGrpBx, mOptionsScrollArea_10);
        QWidget::setTabOrder(mOptionsScrollArea_10, mNetworkTimeoutSpinBox);
        QWidget::setTabOrder(mNetworkTimeoutSpinBox, mDefaultCapabilitiesExpirySpinBox);
        QWidget::setTabOrder(mDefaultCapabilitiesExpirySpinBox, mDefaultTileExpirySpinBox);
        QWidget::setTabOrder(mDefaultTileExpirySpinBox, mDefaultTileMaxRetrySpinBox);
        QWidget::setTabOrder(mDefaultTileMaxRetrySpinBox, leUserAgent);
        QWidget::setTabOrder(leUserAgent, tabContentCache);
        QWidget::setTabOrder(tabContentCache, mCacheDirectory);
        QWidget::setTabOrder(mCacheDirectory, mBrowseCacheDirectory);
        QWidget::setTabOrder(mBrowseCacheDirectory, mCacheSize);
        QWidget::setTabOrder(mCacheSize, mClearCache);
        QWidget::setTabOrder(mClearCache, mAutoClearAccessCache);
        QWidget::setTabOrder(mAutoClearAccessCache, mClearAccessCache);
        QWidget::setTabOrder(mClearAccessCache, grpProxy);
        QWidget::setTabOrder(grpProxy, mProxyTypeComboBox);
        QWidget::setTabOrder(mProxyTypeComboBox, leProxyHost);
        QWidget::setTabOrder(leProxyHost, leProxyPort);
        QWidget::setTabOrder(leProxyPort, mAddUrlPushButton);
        QWidget::setTabOrder(mAddUrlPushButton, mRemoveUrlPushButton);
        QWidget::setTabOrder(mRemoveUrlPushButton, mNoProxyUrlListWidget);
        QWidget::setTabOrder(mNoProxyUrlListWidget, mGPUEnableCheckBox);
        QWidget::setTabOrder(mGPUEnableCheckBox, mOpenClDevicesCombo);
        QWidget::setTabOrder(mOpenClDevicesCombo, mGPUInfoTextBrowser);
        QWidget::setTabOrder(mGPUInfoTextBrowser, mCbEarlyResampling);

        retranslateUi(QgsOptionsBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(chkMaxThreads, SIGNAL(toggled(bool)), spinMaxThreads, SLOT(setEnabled(bool)));

        mOptionsStackedWidget->setCurrentIndex(0);
        mEnableMacrosComboBox->setCurrentIndex(-1);
        tabWidget->setCurrentIndex(0);
        tabContentCache->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsOptionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOptionsBase)
    {
        QgsOptionsBase->setWindowTitle(QApplication::translate("QgsOptionsBase", "Options", Q_NULLPTR));
        mActionImportPalette->setText(QApplication::translate("QgsOptionsBase", "Import Palette\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionImportPalette->setToolTip(QApplication::translate("QgsOptionsBase", "Import palette from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionRemovePalette->setText(QApplication::translate("QgsOptionsBase", "Remove Palette", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionRemovePalette->setToolTip(QApplication::translate("QgsOptionsBase", "Remove current palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionNewPalette->setText(QApplication::translate("QgsOptionsBase", "New Palette\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mActionNewPalette->setToolTip(QApplication::translate("QgsOptionsBase", "Create a new palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActionShowInButtons->setText(QApplication::translate("QgsOptionsBase", "Show in Color Buttons", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsOptionsBase", "General", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsOptionsBase", "General", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsOptionsBase", "System", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsOptionsBase", "System", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsOptionsBase", "CRS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsOptionsBase", "CRS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsOptionsBase", "Transformations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsOptionsBase", "Coordinate transformations and operations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsOptionsBase", "Data Sources", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsOptionsBase", "Data sources", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsOptionsBase", "Rendering", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsOptionsBase", "Rendering", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsOptionsBase", "Canvas & Legend", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsOptionsBase", "Canvas and legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsOptionsBase", "Map Tools", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsOptionsBase", "Map tools", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsOptionsBase", "Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem8->setToolTip(QApplication::translate("QgsOptionsBase", "Colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QgsOptionsBase", "Digitizing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem9->setToolTip(QApplication::translate("QgsOptionsBase", "Digitizing", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QgsOptionsBase", "Layouts", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem10->setToolTip(QApplication::translate("QgsOptionsBase", "Print layouts", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem11 = mOptionsListWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("QgsOptionsBase", "GDAL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem11->setToolTip(QApplication::translate("QgsOptionsBase", "GDAL", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem12 = mOptionsListWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("QgsOptionsBase", "Variables", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem12->setToolTip(QApplication::translate("QgsOptionsBase", "Variables", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem13 = mOptionsListWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("QgsOptionsBase", "Authentication", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem13->setToolTip(QApplication::translate("QgsOptionsBase", "Authentication", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem14 = mOptionsListWidget->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("QgsOptionsBase", "Network", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem14->setToolTip(QApplication::translate("QgsOptionsBase", "Network", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem15 = mOptionsListWidget->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("QgsOptionsBase", "Locator", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem15->setToolTip(QApplication::translate("QgsOptionsBase", "Locator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem16 = mOptionsListWidget->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("QgsOptionsBase", "Acceleration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem16->setToolTip(QApplication::translate("QgsOptionsBase", "Configure GPU for processing algorithms", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        grpLocale->setTitle(QApplication::translate("QgsOptionsBase", "Override System &Locale", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Enabling / changing override on locale requires an application restart", Q_NULLPTR));
        label_52->setText(QApplication::translate("QgsOptionsBase", "Locale (numbers, date and currency formats)", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsOptionsBase", "User interface translation", Q_NULLPTR));
        cbShowGroupSeparator->setText(QApplication::translate("QgsOptionsBase", "Show group (thousand) separator", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblSystemLocale->setToolTip(QApplication::translate("QgsOptionsBase", "This locale is used for number representation.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblSystemLocale->setText(QApplication::translate("QgsOptionsBase", "Detected active locale on your system", Q_NULLPTR));
        lblLocaleSample->setText(QApplication::translate("QgsOptionsBase", "Sample text for locale formatting", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsOptionsBase", "Application", Q_NULLPTR));
        label_18->setText(QApplication::translate("QgsOptionsBase", "Style <i>(QGIS restart required)</i>", Q_NULLPTR));
        lblUITheme->setText(QApplication::translate("QgsOptionsBase", "UI theme", Q_NULLPTR));
        textLabel1_5->setText(QApplication::translate("QgsOptionsBase", "Icon size", Q_NULLPTR));
        cmbIconSize->clear();
        cmbIconSize->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "16", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "24", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "32", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "48", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "64", Q_NULLPTR)
        );
        label_43->setText(QApplication::translate("QgsOptionsBase", "Font", Q_NULLPTR));
        mFontFamilyRadioQt->setText(QApplication::translate("QgsOptionsBase", "&Qt default", Q_NULLPTR));
        mFontFamilyRadioCustom->setText(QString());
        label_20->setText(QApplication::translate("QgsOptionsBase", "Size", Q_NULLPTR));
        mMessageTimeoutLabel->setText(QApplication::translate("QgsOptionsBase", "Timeout for timed messages or dialogs", Q_NULLPTR));
        mMessageTimeoutSpnBx->setSuffix(QApplication::translate("QgsOptionsBase", " s", Q_NULLPTR));
        cbxHideSplash->setText(QApplication::translate("QgsOptionsBase", "Hide splash screen at startup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDataSourceManagerNonModal->setToolTip(QApplication::translate("QgsOptionsBase", "A modeless dialog allows you to interact with QGIS main window and dialogs.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDataSourceManagerNonModal->setText(QApplication::translate("QgsOptionsBase", "Modeless data source manager dialog", Q_NULLPTR));
        mNativeColorDialogsChkBx->setText(QApplication::translate("QgsOptionsBase", "Use native color chooser dialogs", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxShowNews->setToolTip(QApplication::translate("QgsOptionsBase", "If checked, QGIS project news is shown on the welcome page on startup", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbxShowNews->setText(QApplication::translate("QgsOptionsBase", "Show QGIS news feed on welcome page", Q_NULLPTR));
        cbxCheckVersion->setText(QApplication::translate("QgsOptionsBase", "Check QGIS version at startup", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("QgsOptionsBase", "Project Files", Q_NULLPTR));
        mProjectOnLaunchCmbBx->clear();
        mProjectOnLaunchCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Welcome Page", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "Most recent", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "Specific", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "New", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        mProjectOnLaunchPushBtn->setToolTip(QApplication::translate("QgsOptionsBase", "Select file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mProjectOnLaunchPushBtn->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mProjectOnLaunchPushBtn->setText(QString());
        label_54->setText(QApplication::translate("QgsOptionsBase", "Open project on launch", Q_NULLPTR));
        cbxProjectDefaultNew->setText(QApplication::translate("QgsOptionsBase", "Create new project from default project", Q_NULLPTR));
        pbnProjectDefaultSetCurrent->setText(QApplication::translate("QgsOptionsBase", "Set Current Project as Default", Q_NULLPTR));
        pbnProjectDefaultReset->setText(QApplication::translate("QgsOptionsBase", "Reset Default", Q_NULLPTR));
        label_31->setText(QApplication::translate("QgsOptionsBase", "Template folder", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnTemplateFolderBrowse->setToolTip(QApplication::translate("QgsOptionsBase", "Select folder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnTemplateFolderBrowse->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbnTemplateFolderReset->setToolTip(QApplication::translate("QgsOptionsBase", "Reset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnTemplateFolderReset->setText(QString());
        chbAskToSaveProjectChanges->setText(QApplication::translate("QgsOptionsBase", "Prompt to save project and data source changes when required", Q_NULLPTR));
        mLayerDeleteConfirmationChkBx->setText(QApplication::translate("QgsOptionsBase", "Prompt for confirmation when a layer is to be removed", Q_NULLPTR));
        chbWarnOldProjectVersion->setText(QApplication::translate("QgsOptionsBase", "Warn when opening a project file saved with an older version of QGIS", Q_NULLPTR));
        label_33->setText(QApplication::translate("QgsOptionsBase", "Enable macros", Q_NULLPTR));
        label_67->setText(QApplication::translate("QgsOptionsBase", "Default project file format", Q_NULLPTR));
        mFileFormatQgzButton->setText(QApplication::translate("QgsOptionsBase", "QGZ Archive file format, embeds auxiliary data", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFileFormatQgsButton->setToolTip(QApplication::translate("QgsOptionsBase", "The auxiliary data will be kept in a separate .qgd data file which must be distributed along with the .qgs project file.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFileFormatQgsButton->setText(QApplication::translate("QgsOptionsBase", "QGS Project saved in a clear text, does not embed auxiliary data", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsOptionsBase", "SVG Paths", Q_NULLPTR));
        mSVGLabel->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for Scalable Vector Graphic (SVG) symbols", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnAddSVGPath->setToolTip(QApplication::translate("QgsOptionsBase", "Add new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnAddSVGPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnRemoveSVGPath->setToolTip(QApplication::translate("QgsOptionsBase", "Remove path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRemoveSVGPath->setText(QString());
        groupBox_4->setTitle(QApplication::translate("QgsOptionsBase", "Plugin Paths", Q_NULLPTR));
        mSVGLabel_2->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for additional C++ plugins libraries", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnAddPluginPath->setToolTip(QApplication::translate("QgsOptionsBase", "Add new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnAddPluginPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnRemovePluginPath->setToolTip(QApplication::translate("QgsOptionsBase", "Remove path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRemovePluginPath->setText(QString());
        groupBox_29->setTitle(QApplication::translate("QgsOptionsBase", "Documentation Paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnMoveHelpDown->setToolTip(QApplication::translate("QgsOptionsBase", "Lower selected path priority", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnMoveHelpDown->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
        mSVGLabel_5->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for QGIS help", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnAddHelpPath->setToolTip(QApplication::translate("QgsOptionsBase", "Add new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnAddHelpPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnRemoveHelpPath->setToolTip(QApplication::translate("QgsOptionsBase", "Remove path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRemoveHelpPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnMoveHelpUp->setToolTip(QApplication::translate("QgsOptionsBase", "Raise selected path priority", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnMoveHelpUp->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
        mQSettingsGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRestoreDefaultWindowStateBtn->setToolTip(QApplication::translate("QgsOptionsBase", "Reset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRestoreDefaultWindowStateBtn->setText(QString());
        mRestoreDefaultWindowStateLbl->setText(QApplication::translate("QgsOptionsBase", "Reset user interface to default settings (restart required)", Q_NULLPTR));
        mEnvironmentGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Environment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRemoveCustomVarBtn->setToolTip(QApplication::translate("QgsOptionsBase", "Remove variable", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveCustomVarBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddCustomVarBtn->setToolTip(QApplication::translate("QgsOptionsBase", "Add new variable", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddCustomVarBtn->setText(QString());
        mCurrentVariablesGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Current environment variables (read-only - bold indicates modified at startup)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mCurrentVariablesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsOptionsBase", "Variable", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mCurrentVariablesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsOptionsBase", "Value", Q_NULLPTR));
        mCurrentVariablesQGISChxBx->setText(QApplication::translate("QgsOptionsBase", "Show only QGIS-specific variables", Q_NULLPTR));
        mCustomVariablesChkBx->setText(QApplication::translate("QgsOptionsBase", "Use custom variables (restart required - include separators)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mCustomVariablesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsOptionsBase", "Apply", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mCustomVariablesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsOptionsBase", "Variable", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mCustomVariablesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsOptionsBase", "Value", Q_NULLPTR));
        grpProjectionBehavior->setTitle(QApplication::translate("QgsOptionsBase", "CRS for Layers", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsOptionsBase", "When a new layer is created, or when a layer is loaded that has no CRS", Q_NULLPTR));
        radUseProjectProjection->setText(QApplication::translate("QgsOptionsBase", "Use pro&ject CRS", Q_NULLPTR));
        label_16->setText(QApplication::translate("QgsOptionsBase", "Default CRS for layers", Q_NULLPTR));
        radUseGlobalProjection->setText(QApplication::translate("QgsOptionsBase", "&Use default layer CRS", Q_NULLPTR));
        radPromptForProjection->setText(QApplication::translate("QgsOptionsBase", "Pro&mpt for CRS", Q_NULLPTR));
        radCrsNoAction->setText(QApplication::translate("QgsOptionsBase", "Leave as an unknown CRS (take no action)", Q_NULLPTR));
        grpProjectProjection->setTitle(QApplication::translate("QgsOptionsBase", "CRS for Projects", Q_NULLPTR));
        label_42->setText(QApplication::translate("QgsOptionsBase", "When a new project is created", Q_NULLPTR));
        radProjectUseDefaultCrs->setText(QApplication::translate("QgsOptionsBase", "&Use a default CRS", Q_NULLPTR));
        radProjectUseCrsOfFirstLayer->setText(QApplication::translate("QgsOptionsBase", "Use CRS from first layer added", Q_NULLPTR));
        mPlanimetricMeasurementsComboBox->setText(QApplication::translate("QgsOptionsBase", "Planimetric measurements", Q_NULLPTR));
        mDefaultDatumTransformGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Default Datum Transformations", Q_NULLPTR));
        label_40->setText(QApplication::translate("QgsOptionsBase", "Enter default datum transformations which will be used in any newly created project", Q_NULLPTR));
        mShowDatumTransformDialogCheckBox->setText(QApplication::translate("QgsOptionsBase", "Ask for datum transformation if several are available", Q_NULLPTR));
        groupBox_18->setTitle(QApplication::translate("QgsOptionsBase", "Feature Attributes and Table", Q_NULLPTR));
        cbxAttributeTableDocked->setText(QApplication::translate("QgsOptionsBase", "Open new attribute tables as docked windows", Q_NULLPTR));
        cmbAttrTableBehavior->clear();
        cmbAttrTableBehavior->insertItems(0, QStringList()
         << QString()
        );
        textLabel1_7->setText(QApplication::translate("QgsOptionsBase", "Attribute table behavior", Q_NULLPTR));
        label_14->setText(QApplication::translate("QgsOptionsBase", "Representation for NULL values", Q_NULLPTR));
        textLabel1_12->setText(QApplication::translate("QgsOptionsBase", "Attribute table row cache", Q_NULLPTR));
        label_46->setText(QApplication::translate("QgsOptionsBase", "Default view", Q_NULLPTR));
        label_48->setText(QApplication::translate("QgsOptionsBase", "Copy features as", Q_NULLPTR));
        groupBox_19->setTitle(QApplication::translate("QgsOptionsBase", "Data Source Handling", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxEvaluateDefaultValues->setToolTip(QApplication::translate("QgsOptionsBase", "<html><head/><body><p>When digitizing a new feature, default values are retrieved from the database. With this option turned on, the default values will be evaluated at the time of digitizing. With this option turned off, the default values will be evaluated at the time of saving.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbxEvaluateDefaultValues->setText(QApplication::translate("QgsOptionsBase", "Evaluate default values", Q_NULLPTR));
        textLabel1_13->setText(QApplication::translate("QgsOptionsBase", "Prompt for sublayers when opening", Q_NULLPTR));
        cmbPromptSublayers->clear();
        cmbPromptSublayers->insertItems(0, QStringList()
         << QString()
        );
        label_30->setText(QApplication::translate("QgsOptionsBase", "Scan for valid items in the browser dock", Q_NULLPTR));
        cbxCompileExpressions->setText(QApplication::translate("QgsOptionsBase", "Execute expressions on server-side if possible", Q_NULLPTR));
        label_29->setText(QApplication::translate("QgsOptionsBase", "Scan for contents of compressed files (.zip) in browser dock", Q_NULLPTR));
        groupBox_301->setTitle(QApplication::translate("QgsOptionsBase", "Localized Data Paths", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsOptionsBase", "Localized data paths for basemaps, logos, etc. (in order of preference) ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLocalizedDataPathAddButton->setToolTip(QApplication::translate("QgsOptionsBase", "Add localized data path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLocalizedDataPathAddButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mLocalizedDataPathRemoveButton->setToolTip(QApplication::translate("QgsOptionsBase", "Remove localized data path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLocalizedDataPathRemoveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mLocalizedDataPathUpButton->setToolTip(QApplication::translate("QgsOptionsBase", "Raise selected localized data path priority", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLocalizedDataPathUpButton->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLocalizedDataPathDownButton->setToolTip(QApplication::translate("QgsOptionsBase", "Lower selected localized data path priority", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLocalizedDataPathDownButton->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
        groupBox_28->setTitle(QApplication::translate("QgsOptionsBase", "Hidden Browser Paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnRemoveHiddenPath->setToolTip(QApplication::translate("QgsOptionsBase", "Remove path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRemoveHiddenPath->setText(QString());
        mSVGLabel_4->setText(QApplication::translate("QgsOptionsBase", "Paths hidden from browser panel", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsOptionsBase", "Rendering Behavior", Q_NULLPTR));
        chkAddedVisibility->setText(QApplication::translate("QgsOptionsBase", "By default new la&yers added to the map should be displayed", Q_NULLPTR));
        chkUseRenderCaching->setText(QApplication::translate("QgsOptionsBase", "Use render caching where possible to speed up redraws", Q_NULLPTR));
        chkParallelRendering->setText(QApplication::translate("QgsOptionsBase", "Render layers in parallel using many CPU cores", Q_NULLPTR));
        chkMaxThreads->setText(QApplication::translate("QgsOptionsBase", "Max cores to use", Q_NULLPTR));
        label_56->setText(QApplication::translate("QgsOptionsBase", "Map update interval", Q_NULLPTR));
        spinMapUpdateInterval->setSuffix(QApplication::translate("QgsOptionsBase", " ms", Q_NULLPTR));
        mSimplifyDrawingGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Enable feature si&mplification by default for newly added layers", Q_NULLPTR));
        label_59->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Feature simplification may speed up rendering but can result in rendering inconsistencies", Q_NULLPTR));
        label_65->setText(QApplication::translate("QgsOptionsBase", "Simplification threshold (higher values result in more simplification)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSimplifyDrawingSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Higher values result in more simplification", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSimplifyDrawingPx->setText(QApplication::translate("QgsOptionsBase", "pixels", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSimplifyAlgorithmLabel->setToolTip(QApplication::translate("QgsOptionsBase", "This algorithm is only applied to simplify on local side", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSimplifyAlgorithmLabel->setText(QApplication::translate("QgsOptionsBase", "Simplification algorithm", Q_NULLPTR));
        mSimplifyDrawingAtProvider->setText(QApplication::translate("QgsOptionsBase", "Simplify on provider side if possible", Q_NULLPTR));
        mSimplifyMaxScaleLabel->setText(QApplication::translate("QgsOptionsBase", "Maximum scale at which the layer should be simplified (1:1 always simplifies)", Q_NULLPTR));
        labelMagnifier->setText(QApplication::translate("QgsOptionsBase", "Magnification level", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("QgsOptionsBase", "Rendering Quality", Q_NULLPTR));
        chkAntiAliasing->setText(QApplication::translate("QgsOptionsBase", "Make lines appear less jagged at the expense of some drawing performance", Q_NULLPTR));
        mSegmentationGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Curve Segmentation", Q_NULLPTR));
        mSegmentationToleranceLabel->setText(QApplication::translate("QgsOptionsBase", "Segmentation tolerance", Q_NULLPTR));
        mToleranceTypeLabel->setText(QApplication::translate("QgsOptionsBase", "Tolerance type", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("QgsOptionsBase", "Rasters", Q_NULLPTR));
        label_21->setText(QApplication::translate("QgsOptionsBase", "RGB band selection", Q_NULLPTR));
        label_22->setText(QApplication::translate("QgsOptionsBase", "Red band", Q_NULLPTR));
        label_23->setText(QApplication::translate("QgsOptionsBase", "Green band", Q_NULLPTR));
        label_24->setText(QApplication::translate("QgsOptionsBase", "Blue band", Q_NULLPTR));
        lbldefaultZoomedInResampling->setText(QApplication::translate("QgsOptionsBase", "Zoomed in resampling", Q_NULLPTR));
        lbldefaultZoomedOutResampling->setText(QApplication::translate("QgsOptionsBase", "Zoomed out resampling", Q_NULLPTR));
        lbldefaultOversampling->setText(QApplication::translate("QgsOptionsBase", "Oversampling", Q_NULLPTR));
        mCbEarlyResampling->setText(QApplication::translate("QgsOptionsBase", "Early resampling", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("QgsOptionsBase", "Contrast enhancement", Q_NULLPTR));
        label_50->setText(QApplication::translate("QgsOptionsBase", "Algorithm", Q_NULLPTR));
        label_37->setText(QApplication::translate("QgsOptionsBase", "Single band gray", Q_NULLPTR));
        label_51->setText(QApplication::translate("QgsOptionsBase", "Limits (minimum/maximum)", Q_NULLPTR));
        label_38->setText(QApplication::translate("QgsOptionsBase", "Multi band color (byte / band) ", Q_NULLPTR));
        label_39->setText(QApplication::translate("QgsOptionsBase", "Multi band color (> byte / band) ", Q_NULLPTR));
        label_36->setText(QApplication::translate("QgsOptionsBase", "Cumulative pixel count cut limits", Q_NULLPTR));
        label_34->setText(QApplication::translate("QgsOptionsBase", "-", Q_NULLPTR));
        label_35->setText(QApplication::translate("QgsOptionsBase", "%", Q_NULLPTR));
        label_25->setText(QApplication::translate("QgsOptionsBase", "Standard deviation multiplier", Q_NULLPTR));
        groupBox_22->setTitle(QApplication::translate("QgsOptionsBase", "Debugging", Q_NULLPTR));
        label_55->setText(QApplication::translate("QgsOptionsBase", "Show these events in the Log Message panel (under Rendering tab)", Q_NULLPTR));
        mLogCanvasRefreshChkBx->setText(QApplication::translate("QgsOptionsBase", "Map canvas refresh", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("QgsOptionsBase", "Default Map Appearance (overridden by project properties)", Q_NULLPTR));
        pbnCanvasColor->setText(QString());
        label->setText(QApplication::translate("QgsOptionsBase", "Background color", Q_NULLPTR));
        textLabel1_9->setText(QApplication::translate("QgsOptionsBase", "Selection color", Q_NULLPTR));
        pbnSelectionColor->setText(QString());
        mLegendGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Layer Legend", Q_NULLPTR));
        label_15->setText(QApplication::translate("QgsOptionsBase", "Double-click action in legend", Q_NULLPTR));
        cmbLegendDoubleClickAction->clear();
        cmbLegendDoubleClickAction->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Open layer properties", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "Open attribute table", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "Open layer styling dock", Q_NULLPTR)
        );
        cbxLegendClassifiers->setText(QApplication::translate("QgsOptionsBase", "Display classification attribute in layer titles", Q_NULLPTR));
        label_58->setText(QApplication::translate("QgsOptionsBase", "WMS getLegendGraphic Resolution", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLegendGraphicResolutionSpinBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mLegendGraphicResolutionSpinBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_12->setTitle(QApplication::translate("QgsOptionsBase", "Map Tips", Q_NULLPTR));
        textLabel1_16->setText(QApplication::translate("QgsOptionsBase", "Delay (ms)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMapTipsDelaySpinBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mMapTipsDelaySpinBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mIdentifyGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Identify", Q_NULLPTR));
        textLabel1_3->setText(QApplication::translate("QgsOptionsBase", "Search radius for identifying features and displaying map tips", Q_NULLPTR));
        spinBoxIdentifyValue->setSuffix(QApplication::translate("QgsOptionsBase", " mm", Q_NULLPTR));
        mIdentifyHighlighColorLabel->setText(QApplication::translate("QgsOptionsBase", "Highlight color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightColorButton->setToolTip(QApplication::translate("QgsOptionsBase", "<html><head/><body><p>The color used to highlight identified feature. The alpha channel is only used for polygons fill, lines and outlines are fully opaque.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightColorButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightBufferLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightBufferLabel->setText(QApplication::translate("QgsOptionsBase", "Buffer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightBufferSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Lines / outlines buffer in millimeters.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightBufferSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " mm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthLabel->setText(QApplication::translate("QgsOptionsBase", "Minimum width", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Minimum line / stroke width in millimeters.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " mm", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("QgsOptionsBase", "Measure Tool", Q_NULLPTR));
        textLabel1_11->setText(QApplication::translate("QgsOptionsBase", "Preferred distance units", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("QgsOptionsBase", "If unchecked large numbers will be converted from m. to km. and from ft. to miles", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("QgsOptionsBase", "Keep base unit", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsOptionsBase", "Decimal places", Q_NULLPTR));
        textLabel1_10->setText(QApplication::translate("QgsOptionsBase", "Rubberband color", Q_NULLPTR));
        textLabel1_14->setText(QApplication::translate("QgsOptionsBase", "Preferred area units", Q_NULLPTR));
        mKeepBaseUnitCheckBox->setText(QString());
        mAngleUnitsLabel->setText(QApplication::translate("QgsOptionsBase", "Preferred angle units", Q_NULLPTR));
        pbnMeasureColor->setText(QString());
        mCoordinateDisplayGroup->setTitle(QApplication::translate("QgsOptionsBase", "Coordinate and Bearing Display", Q_NULLPTR));
        label_69->setText(QApplication::translate("QgsOptionsBase", "Default bearing format for new projects", Q_NULLPTR));
        mCustomizeBearingFormatButton->setText(QApplication::translate("QgsOptionsBase", "Customize\342\200\246", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("QgsOptionsBase", "Zooming", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsOptionsBase", "Zoom factor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spinZoomFactor->setToolTip(QApplication::translate("QgsOptionsBase", "Specifies the change in zoom level with each move of the mouse wheel.\n"
"The bigger the number, the faster zooming with the mouse wheel will be.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spinZoomFactor->setSuffix(QApplication::translate("QgsOptionsBase", "%", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("QgsOptionsBase", "Predefined Scales", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAddScale->setToolTip(QApplication::translate("QgsOptionsBase", "Add predefined scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAddScale->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnRemoveScale->setToolTip(QApplication::translate("QgsOptionsBase", "Remove selected scale", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnRemoveScale->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnDefaultScaleValues->setToolTip(QApplication::translate("QgsOptionsBase", "Reset to default scales", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnDefaultScaleValues->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnImportScales->setToolTip(QApplication::translate("QgsOptionsBase", "Import from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnImportScales->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnExportScales->setToolTip(QApplication::translate("QgsOptionsBase", "Export to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnExportScales->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("QgsOptionsBase", "Color Schemes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonImportColors->setToolTip(QApplication::translate("QgsOptionsBase", "Import colors from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonImportColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonPasteColors->setToolTip(QApplication::translate("QgsOptionsBase", "Paste colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonPasteColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonAddColor->setToolTip(QApplication::translate("QgsOptionsBase", "Add color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAddColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonRemoveColor->setToolTip(QApplication::translate("QgsOptionsBase", "Remove color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemoveColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonCopyColors->setToolTip(QApplication::translate("QgsOptionsBase", "Copy colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonCopyColors->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonExportColors->setToolTip(QApplication::translate("QgsOptionsBase", "Export colors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonExportColors->setText(QString());
        mSchemeToolButton->setText(QApplication::translate("QgsOptionsBase", "\342\200\246", Q_NULLPTR));
        mEnterAttributeValuesGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Feature Creation", Q_NULLPTR));
        label_19->setText(QApplication::translate("QgsOptionsBase", "Validate geometries", Q_NULLPTR));
        chkDisableAttributeValuesDlg->setText(QApplication::translate("QgsOptionsBase", "Suppress attribute form pop-up after feature creation", Q_NULLPTR));
        chkReuseLastValues->setText(QApplication::translate("QgsOptionsBase", "Reuse last entered attribute values", Q_NULLPTR));
        mDefaultZValueLabel->setText(QApplication::translate("QgsOptionsBase", "Default Z value", Q_NULLPTR));
        mRubberBandGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Rubberband", Q_NULLPTR));
        mLineWidthTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line width", Q_NULLPTR));
        mLineColorTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLineWidthSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Line width in pixels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFillColorToolButton->setText(QString());
        mSelectColorTextLabel->setText(QApplication::translate("QgsOptionsBase", "Fill color", Q_NULLPTR));
        mLineColorToolButton->setText(QString());
        mLineGhostCheckBox->setText(QApplication::translate("QgsOptionsBase", "Don't update rubber band during vertex editing", Q_NULLPTR));
        mSnappingGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Snapping", Q_NULLPTR));
        mSnappingEnabledDefault->setText(QApplication::translate("QgsOptionsBase", "Enable snapping by default", Q_NULLPTR));
        mDefaultSnapModeLabel->setText(QApplication::translate("QgsOptionsBase", "Default snap mode", Q_NULLPTR));
        mDefaultSnappingToleranceTextLabel->setText(QApplication::translate("QgsOptionsBase", "Default snapping tolerance", Q_NULLPTR));
        mDefaultSnappingToleranceComboBox->clear();
        mDefaultSnappingToleranceComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "map units", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "pixels", Q_NULLPTR)
        );
        mVertexSearchRadiusVertexEditLabel->setText(QApplication::translate("QgsOptionsBase", "Search radius for vertex edits", Q_NULLPTR));
        mSearchRadiusVertexEditComboBox->clear();
        mSearchRadiusVertexEditComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "map units", Q_NULLPTR)
         << QApplication::translate("QgsOptionsBase", "pixels", Q_NULLPTR)
        );
        label_49->setText(QApplication::translate("QgsOptionsBase", "Display main dialog as (restart required)", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsOptionsBase", "Snapping marker color", Q_NULLPTR));
        mSnappingTooltipsCheckbox->setText(QApplication::translate("QgsOptionsBase", "Show snapping tooltips", Q_NULLPTR));
        mEnableSnappingOnInvisibleFeatureCheckbox->setText(QApplication::translate("QgsOptionsBase", "Enable snapping on invisible features (not shown on the map canvas)", Q_NULLPTR));
        mVertexMarkerGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Vertex Markers", Q_NULLPTR));
        mMarkerStyleLabel->setText(QApplication::translate("QgsOptionsBase", "Marker style", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsOptionsBase", "Marker size (in millimeter)", Q_NULLPTR));
        mMarkersOnlyForSelectedCheckBox->setText(QApplication::translate("QgsOptionsBase", "Show markers only for selected features", Q_NULLPTR));
        groupBox_21->setTitle(QApplication::translate("QgsOptionsBase", "Curve Offset Tool", Q_NULLPTR));
        label_28->setText(QApplication::translate("QgsOptionsBase", "Miter limit", Q_NULLPTR));
        label_26->setText(QApplication::translate("QgsOptionsBase", "Join style", Q_NULLPTR));
        label_27->setText(QApplication::translate("QgsOptionsBase", "Quadrant segments", Q_NULLPTR));
        groupBox_30->setTitle(QApplication::translate("QgsOptionsBase", "Tracing", Q_NULLPTR));
        mTracingConvertToCurveCheckBox->setText(QApplication::translate("QgsOptionsBase", "Convert tracing to curve (this feature is experimental)", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsOptionsBase", "Layout Defaults", Q_NULLPTR));
        label_60->setText(QApplication::translate("QgsOptionsBase", "Default font", Q_NULLPTR));
        groupBox_23->setTitle(QApplication::translate("QgsOptionsBase", "Grid Appearance", Q_NULLPTR));
        label_66->setText(QApplication::translate("QgsOptionsBase", "Grid style", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsOptionsBase", "Grid color", Q_NULLPTR));
        mGridColorButton->setText(QString());
        groupBox_24->setTitle(QApplication::translate("QgsOptionsBase", "Grid and Guide Defaults", Q_NULLPTR));
        label_61->setText(QApplication::translate("QgsOptionsBase", "Grid spacing", Q_NULLPTR));
        mGridResolutionSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " mm", Q_NULLPTR));
        label_63->setText(QApplication::translate("QgsOptionsBase", "Grid offset", Q_NULLPTR));
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsOptionsBase", "x: ", Q_NULLPTR));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsOptionsBase", "y: ", Q_NULLPTR));
        mOffsetYSpinBox->setSuffix(QString());
        label_62->setText(QApplication::translate("QgsOptionsBase", "Snap tolerance", Q_NULLPTR));
        mSnapToleranceSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " px", Q_NULLPTR));
        groupBox_27->setTitle(QApplication::translate("QgsOptionsBase", "Layout Paths", Q_NULLPTR));
        mSVGLabel_3->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for extra print templates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBtnAddTemplatePath->setToolTip(QApplication::translate("QgsOptionsBase", "Add new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnAddTemplatePath->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnRemoveTemplatePath->setToolTip(QApplication::translate("QgsOptionsBase", "Remove path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBtnRemoveTemplatePath->setText(QString());
        groupBox_16->setTitle(QApplication::translate("QgsOptionsBase", "Raster Driver Options", Q_NULLPTR));
        pbnEditPyramidsOptions->setText(QApplication::translate("QgsOptionsBase", "Edit Pyramids Options", Q_NULLPTR));
        pbnEditCreateOptions->setText(QApplication::translate("QgsOptionsBase", "Edit Create Options", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("QgsOptionsBase", "Raster Drivers", Q_NULLPTR));
        label_17->setText(QApplication::translate("QgsOptionsBase", "In some cases more than one GDAL driver can be used to load the same raster format. Use the list below to specify which to use.", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = lstRasterDrivers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsOptionsBase", "Description", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsOptionsBase", "Flags", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsOptionsBase", "Extension", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsOptionsBase", "Name", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QgsOptionsBase", "Raster Drivers", Q_NULLPTR));
        groupBox_31->setTitle(QApplication::translate("QgsOptionsBase", "Vector Drivers", Q_NULLPTR));
        label_68->setText(QApplication::translate("QgsOptionsBase", "In some cases more than one GDAL driver can be used to load the same vector format. Use the list below to specify which to use.", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = lstVectorDrivers->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("QgsOptionsBase", "Description", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsOptionsBase", "Flags", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsOptionsBase", "Extension", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsOptionsBase", "Name", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("QgsOptionsBase", "Vector Drivers", Q_NULLPTR));
        groupBox_25->setTitle(QApplication::translate("QgsOptionsBase", "Expression Variables", Q_NULLPTR));
        groupBox_20->setTitle(QApplication::translate("QgsOptionsBase", "General", Q_NULLPTR));
        mNetworkTimeoutLabel->setText(QApplication::translate("QgsOptionsBase", "Timeout for network requests (ms)", Q_NULLPTR));
        label_45->setText(QApplication::translate("QgsOptionsBase", "Default expiration period for WMS capabilities (hours)", Q_NULLPTR));
        label_32->setText(QApplication::translate("QgsOptionsBase", "Default expiration period for WMS-C/WMTS tiles (hours)", Q_NULLPTR));
        label_57->setText(QApplication::translate("QgsOptionsBase", "Max retry in case of tile or feature request errors", Q_NULLPTR));
        lblUserAgent->setText(QApplication::translate("QgsOptionsBase", "User-Agent", Q_NULLPTR));
        grpCache->setTitle(QApplication::translate("QgsOptionsBase", "Cache Settings", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsOptionsBase", "Size [KiB]", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsOptionsBase", "Directory", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mBrowseCacheDirectory->setToolTip(QApplication::translate("QgsOptionsBase", "Select folder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBrowseCacheDirectory->setText(QString());
#ifndef QT_NO_TOOLTIP
        mClearCache->setToolTip(QApplication::translate("QgsOptionsBase", "Clear cache", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mClearCache->setText(QString());
        tabContentCache->setTabText(tabContentCache->indexOf(tab), QApplication::translate("QgsOptionsBase", "Content", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAutoClearAccessCache->setToolTip(QApplication::translate("QgsOptionsBase", "<html><head/><body><p>The connection cache stores all authentication connections data even when the connection fails.<br/>If you make any change to the authentication configurations or to the certification authorities, you should clear the authentication cache or<br/>restart QGIS. <br/>When this option is checked, the authentication cache will be automatically cleared every time an SSL error occurs and you choose to abort the connection.<br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAutoClearAccessCache->setText(QApplication::translate("QgsOptionsBase", "Automatically clear the connection authentication cache on SSL errors (recommended)", Q_NULLPTR));
        mClearAccessCache->setText(QApplication::translate("QgsOptionsBase", "Clear authentication connection cache", Q_NULLPTR));
        tabContentCache->setTabText(tabContentCache->indexOf(tab_2), QApplication::translate("QgsOptionsBase", "Authentication", Q_NULLPTR));
        grpProxy->setTitle(QApplication::translate("QgsOptionsBase", "Use Pro&xy for Web Access", Q_NULLPTR));
        label_47->setText(QApplication::translate("QgsOptionsBase", "No proxy for (URLs starting with)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRemoveUrlPushButton->setToolTip(QApplication::translate("QgsOptionsBase", "Remove selected URL", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveUrlPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddUrlPushButton->setToolTip(QApplication::translate("QgsOptionsBase", "Add URL to exclude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddUrlPushButton->setText(QString());
        mTypeLabel->setText(QApplication::translate("QgsOptionsBase", "Proxy type", Q_NULLPTR));
        label_41->setText(QApplication::translate("QgsOptionsBase", "Default uses system's proxy", Q_NULLPTR));
        lblProxyPort->setText(QApplication::translate("QgsOptionsBase", "Port", Q_NULLPTR));
        lblProxyHost->setText(QApplication::translate("QgsOptionsBase", "Host", Q_NULLPTR));
        mAuthGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Authentication", Q_NULLPTR));
        mOptionsLocatorGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Locator Filters", Q_NULLPTR));
        label_53->setText(QApplication::translate("QgsOptionsBase", "<html><head/><body><p>Some of the internal C++ processing core algorithms and renderers can take advantage of an OpenCL compatible device to increase the performances.<br/><span style=\" font-weight:600;\">QGIS OpenCL support is highly experimental and can crash QGIS because of bugs in the underlying libraries, enable at your own risk!</span></p></body></html>", Q_NULLPTR));
        mGPUEnableCheckBox->setText(QApplication::translate("QgsOptionsBase", "Enable OpenCL acceleration", Q_NULLPTR));
        label_64->setText(QApplication::translate("QgsOptionsBase", "The following OpenCL devices were found on this system (changing the default device requires QGIS to be restarted).", Q_NULLPTR));
        mGPUInfoTextBrowser->setHtml(QApplication::translate("QgsOptionsBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Fira Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsOptionsBase: public Ui_QgsOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOPTIONSBASE_H
