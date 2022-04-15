/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERPROPERTIESBASE_H
#define UI_QGSVECTORLAYERPROPERTIESBASE_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorhtml.h"
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsfilterlineedit.h"
#include "qgslayertreeembeddedconfigwidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalecombobox.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgsvariableeditorwidget.h"
#include "qgsvectorlayerlegendwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout_26;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *teMetadataViewer;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_9;
    QgsCollapsibleGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_260;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *mLayerOrigNameLineEdit;
    QLabel *label_2;
    QLineEdit *txtDisplayName;
    QFrame *mDataSourceEncodingFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cboProviderEncoding;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_7;
    QFrame *line_2;
    QgsCollapsibleGroupBox *mGeomGroupBox;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pbnIndex;
    QPushButton *pbnUpdateExtents;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_3;
    QgsCollapsibleGroupBox *mSubsetGroupBox;
    QGridLayout *gridLayout_4;
    QPushButton *pbnQueryBuilder;
    QSpacerItem *spacerItem;
    QgsCodeEditorSQL *txtSubsetSQL;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_11;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_18;
    QStackedWidget *widgetStackRenderers;
    QWidget *mOptsPage_Labels;
    QVBoxLayout *verticalLayout_12;
    QFrame *labelingFrame;
    QWidget *mOptsPage_Masks;
    QVBoxLayout *verticalLayout_122;
    QFrame *mMaskingFrame;
    QWidget *mOptsPage_Diagrams;
    QVBoxLayout *verticalLayout_10;
    QFrame *mDiagramFrame;
    QWidget *mOptsPage_SourceFields;
    QVBoxLayout *verticalLayout_29;
    QFrame *mSourceFieldsFrame;
    QWidget *mOptsPage_AttributesForm;
    QVBoxLayout *verticalLayout;
    QFrame *mAttributesFormFrame;
    QWidget *mOptsPage_Joins;
    QVBoxLayout *verticalLayout_17;
    QgsScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_23;
    QTreeWidget *mJoinTreeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mButtonAddJoin;
    QPushButton *mButtonRemoveJoin;
    QPushButton *mButtonEditJoin;
    QSpacerItem *horizontalSpacer;
    QWidget *mOptsPage_AuxiliaryStorage;
    QVBoxLayout *verticalLayout_15;
    QWidget *mAuxiliaryStorageScrollArea;
    QGridLayout *gridLayout_2000;
    QgsCollapsibleGroupBox *mAuxiliaryStorageInformationGrpBox;
    QGridLayout *gridLayout_11;
    QLineEdit *mAuxiliaryStorageFeaturesLineEdit;
    QLabel *mAuxiliaryStorageFieldsLabel;
    QLabel *mAuxiliaryStorageFeaturesLabel;
    QLineEdit *mAuxiliaryStorageFieldsLineEdit;
    QLabel *mAuxiliaryStorageKeyLabel;
    QLineEdit *mAuxiliaryStorageKeyLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mAuxiliaryStorageActions;
    QSpacerItem *horizontalSpacer_8;
    QgsCollapsibleGroupBox *mAuxiliaryStorageFieldsGrpBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mAuxiliaryStorageFieldsAddBtn;
    QPushButton *mAuxiliaryStorageFieldsDeleteBtn;
    QSpacerItem *horizontalSpacer_7;
    QTreeWidget *mAuxiliaryStorageFieldsTree;
    QLabel *label_1;
    QWidget *mOptsPage_Actions;
    QVBoxLayout *verticalLayout_16;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_21;
    QFrame *actionOptionsFrame;
    QWidget *mOptsPage_Display;
    QVBoxLayout *verticalLayout_25;
    QWidget *scrollArea_10;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_22;
    QGridLayout *gridLayout_50;
    QgsFieldExpressionWidget *mDisplayExpressionWidget;
    QLabel *labelDisplayNameInfo;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QPushButton *mInsertExpressionButton;
    QgsCodeEditorHTML *mMapTipWidget;
    QgsFieldExpressionWidget *mMapTipExpressionFieldWidget;
    QLabel *labelMapTipInfo;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_19;
    QgsScrollArea *scrollArea_19;
    QWidget *scrollAreaWidgetContents_19;
    QVBoxLayout *verticalLayout_32;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_6;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *mSimplifyDrawingGroupBox;
    QGridLayout *_12;
    QLabel *label_59;
    QLabel *label_56;
    QgsDoubleSpinBox *mSimplifyDrawingSpinBox;
    QLabel *mSimplifyDrawingPx;
    QSpacerItem *horizontalSpacer_40;
    QLabel *mSimplifyAlgorithmLabel;
    QComboBox *mSimplifyAlgorithmComboBox;
    QCheckBox *mSimplifyDrawingAtProvider;
    QLabel *mSimplifyMaxScaleLabel;
    QgsScaleComboBox *mSimplifyMaximumScaleComboBox;
    QCheckBox *mForceRasterCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mRefreshLayerCheckBox;
    QgsDoubleSpinBox *mRefreshLayerIntervalSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *mRefreshLayerNotificationCheckBox;
    QFrame *mNotificationFrame;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *mNotificationMessageCheckBox;
    QLineEdit *mNotifyMessagValueLineEdit;
    QSpacerItem *verticalSpacer_2;
    QWidget *mOptsPage_Temporal;
    QVBoxLayout *verticalLayout_20;
    QFrame *temporalFrame;
    QWidget *mOptsPage_Variables;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_9;
    QgsVariableEditorWidget *mVariableEditor;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_27;
    QFrame *metadataFrame;
    QWidget *mOptsPage_DataDependencies;
    QVBoxLayout *verticalLayout_30;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_24;
    QLabel *label1;
    QTreeView *mLayersDependenciesTreeView;
    QLabel *label_4;
    QWidget *mOptsPage_Legend;
    QVBoxLayout *verticalLayout_8;
    QgsVectorLayerLegendWidget *mLegendWidget;
    QgsCollapsibleGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_22;
    QgsLayerTreeEmbeddedConfigWidget *mLegendConfigEmbeddedWidget;
    QWidget *mOptsPage_Server;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_13;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLabel *mLayerTitleLabel;
    QLineEdit *mLayerKeywordListLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLabel *mLayerKeywordListLabel;
    QLabel *mLayerShortNameLabel;
    QLineEdit *mLayerShortNameLineEdit;
    QLineEdit *mLayerTitleLineEdit;
    QLabel *mLayerAbstractLabel;
    QPlainTextEdit *mLayerAbstractTextEdit;
    QLabel *mLayerDataUrlLabel;
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
    QSpacerItem *horizontalSpacer_5;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;
    QgsCollapsibleGroupBox *mWmsDimensionsGrpBx;
    QVBoxLayout *verticalLayout_33;
    QTreeWidget *mWmsDimensionsTreeWidget;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *mButtonAddWmsDimension;
    QPushButton *mButtonEditWmsDimension;
    QPushButton *mButtonRemoveWmsDimension;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout_btnbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        if (QgsVectorLayerPropertiesBase->objectName().isEmpty())
            QgsVectorLayerPropertiesBase->setObjectName(QStringLiteral("QgsVectorLayerPropertiesBase"));
        QgsVectorLayerPropertiesBase->resize(825, 730);
        QgsVectorLayerPropertiesBase->setMinimumSize(QSize(825, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/qgis-icon-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsVectorLayerPropertiesBase->setWindowIcon(icon);
        verticalLayout_26 = new QVBoxLayout(QgsVectorLayerPropertiesBase);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        mOptionsSplitter = new QSplitter(QgsVectorLayerPropertiesBase);
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/labels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/labelmask.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/propertyicons/diagram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mSourceFields.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/mActionFormView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/propertyicons/join.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mIconAuxiliaryStorage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/propertyicons/display.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem11->setIcon(icon12);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem12->setIcon(icon13);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem13->setIcon(icon14);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem14->setIcon(icon15);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem15->setIcon(icon16);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/themes/default/dependencies.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem16->setIcon(icon17);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem17->setIcon(icon18);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/themes/default/propertyicons/overlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem18->setIcon(icon19);
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
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(mOptsPage_Information);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        teMetadataViewer = new QTextBrowser(frame);
        teMetadataViewer->setObjectName(QStringLiteral("teMetadataViewer"));
        teMetadataViewer->setFrameShape(QFrame::NoFrame);

        verticalLayout_7->addWidget(teMetadataViewer);


        verticalLayout_5->addWidget(frame);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QStringLiteral("mOptsPage_Source"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QgsScrollArea(mOptsPage_Source);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 644, 664));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_60 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_60->setObjectName(QStringLiteral("groupBox_60"));
        verticalLayout_260 = new QVBoxLayout(groupBox_60);
        verticalLayout_260->setObjectName(QStringLiteral("verticalLayout_260"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_6 = new QLabel(groupBox_60);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_13->addWidget(label_6);

        mLayerOrigNameLineEdit = new QLineEdit(groupBox_60);
        mLayerOrigNameLineEdit->setObjectName(QStringLiteral("mLayerOrigNameLineEdit"));

        horizontalLayout_13->addWidget(mLayerOrigNameLineEdit);

        label_2 = new QLabel(groupBox_60);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_13->addWidget(label_2);

        txtDisplayName = new QLineEdit(groupBox_60);
        txtDisplayName->setObjectName(QStringLiteral("txtDisplayName"));
        txtDisplayName->setEnabled(true);
        txtDisplayName->setStyleSheet(QLatin1String("color: #505050;\n"
"background-color: #F0F0F0;\n"
"border: 1px solid #B0B0B0;\n"
"border-radius: 2px;"));
        txtDisplayName->setReadOnly(true);

        horizontalLayout_13->addWidget(txtDisplayName);


        verticalLayout_260->addLayout(horizontalLayout_13);

        mDataSourceEncodingFrame = new QFrame(groupBox_60);
        mDataSourceEncodingFrame->setObjectName(QStringLiteral("mDataSourceEncodingFrame"));
        mDataSourceEncodingFrame->setFrameShape(QFrame::NoFrame);
        mDataSourceEncodingFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(mDataSourceEncodingFrame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(mDataSourceEncodingFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_3);

        cboProviderEncoding = new QComboBox(mDataSourceEncodingFrame);
        cboProviderEncoding->setObjectName(QStringLiteral("cboProviderEncoding"));

        horizontalLayout_4->addWidget(cboProviderEncoding);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_260->addWidget(mDataSourceEncodingFrame);


        verticalLayout_9->addWidget(groupBox_60);

        mCrsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
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

        label_7 = new QLabel(mCrsGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setTextFormat(Qt::RichText);
        label_7->setWordWrap(true);

        verticalLayout_28->addWidget(label_7);

        line_2 = new QFrame(mCrsGroupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);


        verticalLayout_9->addWidget(mCrsGroupBox);

        mGeomGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mGeomGroupBox->setObjectName(QStringLiteral("mGeomGroupBox"));
        mGeomGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGeomGroupBox->setCheckable(false);
        mGeomGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("vectorgeneral")));
        verticalLayout_31 = new QVBoxLayout(mGeomGroupBox);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pbnIndex = new QPushButton(mGeomGroupBox);
        pbnIndex->setObjectName(QStringLiteral("pbnIndex"));

        horizontalLayout_11->addWidget(pbnIndex);

        pbnUpdateExtents = new QPushButton(mGeomGroupBox);
        pbnUpdateExtents->setObjectName(QStringLiteral("pbnUpdateExtents"));

        horizontalLayout_11->addWidget(pbnUpdateExtents);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_31->addLayout(horizontalLayout_11);

        line_3 = new QFrame(mGeomGroupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_31->addWidget(line_3);


        verticalLayout_9->addWidget(mGeomGroupBox);

        mSubsetGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mSubsetGroupBox->setObjectName(QStringLiteral("mSubsetGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(3);
        sizePolicy3.setHeightForWidth(mSubsetGroupBox->sizePolicy().hasHeightForWidth());
        mSubsetGroupBox->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(mSubsetGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pbnQueryBuilder = new QPushButton(mSubsetGroupBox);
        pbnQueryBuilder->setObjectName(QStringLiteral("pbnQueryBuilder"));

        gridLayout_4->addWidget(pbnQueryBuilder, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem, 1, 0, 1, 1);

        txtSubsetSQL = new QgsCodeEditorSQL(mSubsetGroupBox);
        txtSubsetSQL->setObjectName(QStringLiteral("txtSubsetSQL"));

        gridLayout_4->addWidget(txtSubsetSQL, 0, 0, 1, 2);


        verticalLayout_9->addWidget(mSubsetGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_6->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QStringLiteral("mOptsPage_Style"));
        verticalLayout_11 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mOptsPage_Style);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_18 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        widgetStackRenderers = new QStackedWidget(scrollAreaWidgetContents_3);
        widgetStackRenderers->setObjectName(QStringLiteral("widgetStackRenderers"));
        sizePolicy1.setHeightForWidth(widgetStackRenderers->sizePolicy().hasHeightForWidth());
        widgetStackRenderers->setSizePolicy(sizePolicy1);
        widgetStackRenderers->setFrameShape(QFrame::NoFrame);
        widgetStackRenderers->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(widgetStackRenderers);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_11->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Labels = new QWidget();
        mOptsPage_Labels->setObjectName(QStringLiteral("mOptsPage_Labels"));
        verticalLayout_12 = new QVBoxLayout(mOptsPage_Labels);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelingFrame = new QFrame(mOptsPage_Labels);
        labelingFrame->setObjectName(QStringLiteral("labelingFrame"));
        sizePolicy1.setHeightForWidth(labelingFrame->sizePolicy().hasHeightForWidth());
        labelingFrame->setSizePolicy(sizePolicy1);
        labelingFrame->setFrameShape(QFrame::NoFrame);
        labelingFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_12->addWidget(labelingFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Labels);
        mOptsPage_Masks = new QWidget();
        mOptsPage_Masks->setObjectName(QStringLiteral("mOptsPage_Masks"));
        verticalLayout_122 = new QVBoxLayout(mOptsPage_Masks);
        verticalLayout_122->setObjectName(QStringLiteral("verticalLayout_122"));
        verticalLayout_122->setContentsMargins(0, 0, 0, 0);
        mMaskingFrame = new QFrame(mOptsPage_Masks);
        mMaskingFrame->setObjectName(QStringLiteral("mMaskingFrame"));
        sizePolicy1.setHeightForWidth(mMaskingFrame->sizePolicy().hasHeightForWidth());
        mMaskingFrame->setSizePolicy(sizePolicy1);
        mMaskingFrame->setFrameShape(QFrame::NoFrame);
        mMaskingFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_122->addWidget(mMaskingFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Masks);
        mOptsPage_Diagrams = new QWidget();
        mOptsPage_Diagrams->setObjectName(QStringLiteral("mOptsPage_Diagrams"));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_Diagrams);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        mDiagramFrame = new QFrame(mOptsPage_Diagrams);
        mDiagramFrame->setObjectName(QStringLiteral("mDiagramFrame"));
        sizePolicy1.setHeightForWidth(mDiagramFrame->sizePolicy().hasHeightForWidth());
        mDiagramFrame->setSizePolicy(sizePolicy1);
        mDiagramFrame->setFrameShape(QFrame::NoFrame);
        mDiagramFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_10->addWidget(mDiagramFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Diagrams);
        mOptsPage_SourceFields = new QWidget();
        mOptsPage_SourceFields->setObjectName(QStringLiteral("mOptsPage_SourceFields"));
        verticalLayout_29 = new QVBoxLayout(mOptsPage_SourceFields);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        mSourceFieldsFrame = new QFrame(mOptsPage_SourceFields);
        mSourceFieldsFrame->setObjectName(QStringLiteral("mSourceFieldsFrame"));
        mSourceFieldsFrame->setFrameShape(QFrame::NoFrame);
        mSourceFieldsFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_29->addWidget(mSourceFieldsFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_SourceFields);
        mOptsPage_AttributesForm = new QWidget();
        mOptsPage_AttributesForm->setObjectName(QStringLiteral("mOptsPage_AttributesForm"));
        verticalLayout = new QVBoxLayout(mOptsPage_AttributesForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mAttributesFormFrame = new QFrame(mOptsPage_AttributesForm);
        mAttributesFormFrame->setObjectName(QStringLiteral("mAttributesFormFrame"));
        mAttributesFormFrame->setFrameShape(QFrame::NoFrame);
        mAttributesFormFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(mAttributesFormFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_AttributesForm);
        mOptsPage_Joins = new QWidget();
        mOptsPage_Joins->setObjectName(QStringLiteral("mOptsPage_Joins"));
        verticalLayout_17 = new QVBoxLayout(mOptsPage_Joins);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QgsScrollArea(mOptsPage_Joins);
        scrollArea_7->setObjectName(QStringLiteral("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 199, 119));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        mJoinTreeWidget = new QTreeWidget(scrollAreaWidgetContents_7);
        mJoinTreeWidget->setObjectName(QStringLiteral("mJoinTreeWidget"));
        mJoinTreeWidget->setAlternatingRowColors(true);
        mJoinTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        mJoinTreeWidget->setColumnCount(2);

        verticalLayout_23->addWidget(mJoinTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mButtonAddJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonAddJoin->setObjectName(QStringLiteral("mButtonAddJoin"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddJoin->setIcon(icon20);

        horizontalLayout->addWidget(mButtonAddJoin);

        mButtonRemoveJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonRemoveJoin->setObjectName(QStringLiteral("mButtonRemoveJoin"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveJoin->setIcon(icon21);

        horizontalLayout->addWidget(mButtonRemoveJoin);

        mButtonEditJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonEditJoin->setObjectName(QStringLiteral("mButtonEditJoin"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/images/themes/default/mActionToggleEditing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonEditJoin->setIcon(icon22);

        horizontalLayout->addWidget(mButtonEditJoin);

        horizontalSpacer = new QSpacerItem(0, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_23->addLayout(horizontalLayout);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_17->addWidget(scrollArea_7);

        mOptionsStackedWidget->addWidget(mOptsPage_Joins);
        mOptsPage_AuxiliaryStorage = new QWidget();
        mOptsPage_AuxiliaryStorage->setObjectName(QStringLiteral("mOptsPage_AuxiliaryStorage"));
        verticalLayout_15 = new QVBoxLayout(mOptsPage_AuxiliaryStorage);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        mAuxiliaryStorageScrollArea = new QWidget(mOptsPage_AuxiliaryStorage);
        mAuxiliaryStorageScrollArea->setObjectName(QStringLiteral("mAuxiliaryStorageScrollArea"));
        gridLayout_2000 = new QGridLayout(mAuxiliaryStorageScrollArea);
        gridLayout_2000->setObjectName(QStringLiteral("gridLayout_2000"));
        gridLayout_2000->setContentsMargins(0, 0, 0, 0);
        mAuxiliaryStorageInformationGrpBox = new QgsCollapsibleGroupBox(mAuxiliaryStorageScrollArea);
        mAuxiliaryStorageInformationGrpBox->setObjectName(QStringLiteral("mAuxiliaryStorageInformationGrpBox"));
        mAuxiliaryStorageInformationGrpBox->setFlat(false);
        mAuxiliaryStorageInformationGrpBox->setCheckable(false);
        mAuxiliaryStorageInformationGrpBox->setProperty("syncGroup", QVariant(QStringLiteral("vectormeta")));
        gridLayout_11 = new QGridLayout(mAuxiliaryStorageInformationGrpBox);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);
        mAuxiliaryStorageFeaturesLineEdit = new QLineEdit(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFeaturesLineEdit->setObjectName(QStringLiteral("mAuxiliaryStorageFeaturesLineEdit"));
        mAuxiliaryStorageFeaturesLineEdit->setEnabled(false);
        mAuxiliaryStorageFeaturesLineEdit->setReadOnly(true);

        gridLayout_11->addWidget(mAuxiliaryStorageFeaturesLineEdit, 2, 1, 1, 1);

        mAuxiliaryStorageFieldsLabel = new QLabel(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFieldsLabel->setObjectName(QStringLiteral("mAuxiliaryStorageFieldsLabel"));

        gridLayout_11->addWidget(mAuxiliaryStorageFieldsLabel, 3, 0, 1, 1);

        mAuxiliaryStorageFeaturesLabel = new QLabel(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFeaturesLabel->setObjectName(QStringLiteral("mAuxiliaryStorageFeaturesLabel"));

        gridLayout_11->addWidget(mAuxiliaryStorageFeaturesLabel, 2, 0, 1, 1);

        mAuxiliaryStorageFieldsLineEdit = new QLineEdit(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFieldsLineEdit->setObjectName(QStringLiteral("mAuxiliaryStorageFieldsLineEdit"));
        mAuxiliaryStorageFieldsLineEdit->setEnabled(false);
        mAuxiliaryStorageFieldsLineEdit->setReadOnly(true);

        gridLayout_11->addWidget(mAuxiliaryStorageFieldsLineEdit, 3, 1, 1, 1);

        mAuxiliaryStorageKeyLabel = new QLabel(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageKeyLabel->setObjectName(QStringLiteral("mAuxiliaryStorageKeyLabel"));

        gridLayout_11->addWidget(mAuxiliaryStorageKeyLabel, 1, 0, 1, 1);

        mAuxiliaryStorageKeyLineEdit = new QLineEdit(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageKeyLineEdit->setObjectName(QStringLiteral("mAuxiliaryStorageKeyLineEdit"));
        mAuxiliaryStorageKeyLineEdit->setEnabled(false);
        mAuxiliaryStorageKeyLineEdit->setReadOnly(true);

        gridLayout_11->addWidget(mAuxiliaryStorageKeyLineEdit, 1, 1, 1, 1);


        gridLayout_2000->addWidget(mAuxiliaryStorageInformationGrpBox, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        mAuxiliaryStorageActions = new QPushButton(mAuxiliaryStorageScrollArea);
        mAuxiliaryStorageActions->setObjectName(QStringLiteral("mAuxiliaryStorageActions"));

        horizontalLayout_6->addWidget(mAuxiliaryStorageActions);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_2000->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        mAuxiliaryStorageFieldsGrpBox = new QgsCollapsibleGroupBox(mAuxiliaryStorageScrollArea);
        mAuxiliaryStorageFieldsGrpBox->setObjectName(QStringLiteral("mAuxiliaryStorageFieldsGrpBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mAuxiliaryStorageFieldsGrpBox->sizePolicy().hasHeightForWidth());
        mAuxiliaryStorageFieldsGrpBox->setSizePolicy(sizePolicy4);
        gridLayout_3 = new QGridLayout(mAuxiliaryStorageFieldsGrpBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        mAuxiliaryStorageFieldsAddBtn = new QPushButton(mAuxiliaryStorageFieldsGrpBox);
        mAuxiliaryStorageFieldsAddBtn->setObjectName(QStringLiteral("mAuxiliaryStorageFieldsAddBtn"));
        mAuxiliaryStorageFieldsAddBtn->setIcon(icon20);

        horizontalLayout_5->addWidget(mAuxiliaryStorageFieldsAddBtn);

        mAuxiliaryStorageFieldsDeleteBtn = new QPushButton(mAuxiliaryStorageFieldsGrpBox);
        mAuxiliaryStorageFieldsDeleteBtn->setObjectName(QStringLiteral("mAuxiliaryStorageFieldsDeleteBtn"));
        mAuxiliaryStorageFieldsDeleteBtn->setIcon(icon21);

        horizontalLayout_5->addWidget(mAuxiliaryStorageFieldsDeleteBtn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 0, 3, 1);

        mAuxiliaryStorageFieldsTree = new QTreeWidget(mAuxiliaryStorageFieldsGrpBox);
        mAuxiliaryStorageFieldsTree->setObjectName(QStringLiteral("mAuxiliaryStorageFieldsTree"));

        gridLayout_3->addWidget(mAuxiliaryStorageFieldsTree, 0, 0, 1, 1);


        gridLayout_2000->addWidget(mAuxiliaryStorageFieldsGrpBox, 2, 0, 1, 1);

        label_1 = new QLabel(mAuxiliaryStorageScrollArea);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setWordWrap(true);

        gridLayout_2000->addWidget(label_1, 0, 0, 1, 1);


        verticalLayout_15->addWidget(mAuxiliaryStorageScrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_AuxiliaryStorage);
        mOptsPage_Actions = new QWidget();
        mOptsPage_Actions->setObjectName(QStringLiteral("mOptsPage_Actions"));
        verticalLayout_16 = new QVBoxLayout(mOptsPage_Actions);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mOptsPage_Actions);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        actionOptionsFrame = new QFrame(scrollAreaWidgetContents_6);
        actionOptionsFrame->setObjectName(QStringLiteral("actionOptionsFrame"));
        sizePolicy1.setHeightForWidth(actionOptionsFrame->sizePolicy().hasHeightForWidth());
        actionOptionsFrame->setSizePolicy(sizePolicy1);
        actionOptionsFrame->setFrameShape(QFrame::NoFrame);
        actionOptionsFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_21->addWidget(actionOptionsFrame);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_16->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Actions);
        mOptsPage_Display = new QWidget();
        mOptsPage_Display->setObjectName(QStringLiteral("mOptsPage_Display"));
        verticalLayout_25 = new QVBoxLayout(mOptsPage_Display);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        scrollArea_10 = new QWidget(mOptsPage_Display);
        scrollArea_10->setObjectName(QStringLiteral("scrollArea_10"));
        scrollArea_10->setProperty("widgetResizable", QVariant(true));
        gridLayout_10 = new QGridLayout(scrollArea_10);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        groupBox_22 = new QGroupBox(scrollArea_10);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_22->sizePolicy().hasHeightForWidth());
        groupBox_22->setSizePolicy(sizePolicy5);
        gridLayout_50 = new QGridLayout(groupBox_22);
        gridLayout_50->setObjectName(QStringLiteral("gridLayout_50"));
        mDisplayExpressionWidget = new QgsFieldExpressionWidget(groupBox_22);
        mDisplayExpressionWidget->setObjectName(QStringLiteral("mDisplayExpressionWidget"));
        mDisplayExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_50->addWidget(mDisplayExpressionWidget, 0, 0, 1, 1);

        labelDisplayNameInfo = new QLabel(groupBox_22);
        labelDisplayNameInfo->setObjectName(QStringLiteral("labelDisplayNameInfo"));
        labelDisplayNameInfo->setWordWrap(true);

        gridLayout_50->addWidget(labelDisplayNameInfo, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_22, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollArea_10);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy6);
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        mInsertExpressionButton = new QPushButton(groupBox_2);
        mInsertExpressionButton->setObjectName(QStringLiteral("mInsertExpressionButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mInsertExpressionButton->sizePolicy().hasHeightForWidth());
        mInsertExpressionButton->setSizePolicy(sizePolicy7);

        gridLayout_8->addWidget(mInsertExpressionButton, 1, 2, 1, 1);

        mMapTipWidget = new QgsCodeEditorHTML(groupBox_2);
        mMapTipWidget->setObjectName(QStringLiteral("mMapTipWidget"));
        sizePolicy6.setHeightForWidth(mMapTipWidget->sizePolicy().hasHeightForWidth());
        mMapTipWidget->setSizePolicy(sizePolicy6);
        mMapTipWidget->setMinimumSize(QSize(0, 100));

        gridLayout_8->addWidget(mMapTipWidget, 0, 0, 1, 3);

        mMapTipExpressionFieldWidget = new QgsFieldExpressionWidget(groupBox_2);
        mMapTipExpressionFieldWidget->setObjectName(QStringLiteral("mMapTipExpressionFieldWidget"));
        mMapTipExpressionFieldWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_8->addWidget(mMapTipExpressionFieldWidget, 1, 0, 1, 2);

        labelMapTipInfo = new QLabel(groupBox_2);
        labelMapTipInfo->setObjectName(QStringLiteral("labelMapTipInfo"));
        labelMapTipInfo->setWordWrap(true);

        gridLayout_8->addWidget(labelMapTipInfo, 3, 0, 1, 3);


        gridLayout_10->addWidget(groupBox_2, 1, 0, 1, 1);


        verticalLayout_25->addWidget(scrollArea_10);

        mOptionsStackedWidget->addWidget(mOptsPage_Display);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QStringLiteral("mOptsPage_Rendering"));
        verticalLayout_19 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        scrollArea_19 = new QgsScrollArea(mOptsPage_Rendering);
        scrollArea_19->setObjectName(QStringLiteral("scrollArea_19"));
        scrollArea_19->setFrameShape(QFrame::NoFrame);
        scrollArea_19->setWidgetResizable(true);
        scrollAreaWidgetContents_19 = new QWidget();
        scrollAreaWidgetContents_19->setObjectName(QStringLiteral("scrollAreaWidgetContents_19"));
        scrollAreaWidgetContents_19->setGeometry(QRect(0, 0, 652, 368));
        verticalLayout_32 = new QVBoxLayout(scrollAreaWidgetContents_19);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_19);
        mScaleVisibilityGroupBox->setObjectName(QStringLiteral("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_6 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QStringLiteral("mScaleRangeWidget"));
        mScaleRangeWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        verticalLayout_32->addWidget(mScaleVisibilityGroupBox);

        mSimplifyDrawingGroupBox = new QGroupBox(scrollAreaWidgetContents_19);
        mSimplifyDrawingGroupBox->setObjectName(QStringLiteral("mSimplifyDrawingGroupBox"));
        mSimplifyDrawingGroupBox->setCheckable(true);
        _12 = new QGridLayout(mSimplifyDrawingGroupBox);
        _12->setObjectName(QStringLiteral("_12"));
        label_59 = new QLabel(mSimplifyDrawingGroupBox);
        label_59->setObjectName(QStringLiteral("label_59"));

        _12->addWidget(label_59, 0, 1, 1, 4);

        label_56 = new QLabel(mSimplifyDrawingGroupBox);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setMargin(2);

        _12->addWidget(label_56, 1, 1, 1, 1);

        mSimplifyDrawingSpinBox = new QgsDoubleSpinBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingSpinBox->setObjectName(QStringLiteral("mSimplifyDrawingSpinBox"));
        mSimplifyDrawingSpinBox->setDecimals(2);
        mSimplifyDrawingSpinBox->setMinimum(1);
        mSimplifyDrawingSpinBox->setMaximum(30);
        mSimplifyDrawingSpinBox->setSingleStep(0.2);
        mSimplifyDrawingSpinBox->setValue(1);

        _12->addWidget(mSimplifyDrawingSpinBox, 1, 2, 1, 1);

        mSimplifyDrawingPx = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyDrawingPx->setObjectName(QStringLiteral("mSimplifyDrawingPx"));
        mSimplifyDrawingPx->setMargin(2);

        _12->addWidget(mSimplifyDrawingPx, 1, 3, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _12->addItem(horizontalSpacer_40, 1, 4, 1, 1);

        mSimplifyAlgorithmLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmLabel->setObjectName(QStringLiteral("mSimplifyAlgorithmLabel"));
        mSimplifyAlgorithmLabel->setMargin(2);

        _12->addWidget(mSimplifyAlgorithmLabel, 2, 1, 1, 1);

        mSimplifyAlgorithmComboBox = new QComboBox(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmComboBox->setObjectName(QStringLiteral("mSimplifyAlgorithmComboBox"));

        _12->addWidget(mSimplifyAlgorithmComboBox, 2, 2, 1, 1);

        mSimplifyDrawingAtProvider = new QCheckBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingAtProvider->setObjectName(QStringLiteral("mSimplifyDrawingAtProvider"));

        _12->addWidget(mSimplifyDrawingAtProvider, 3, 1, 1, 4);

        mSimplifyMaxScaleLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleLabel->setObjectName(QStringLiteral("mSimplifyMaxScaleLabel"));
        mSimplifyMaxScaleLabel->setMargin(2);

        _12->addWidget(mSimplifyMaxScaleLabel, 4, 1, 1, 1);

        mSimplifyMaximumScaleComboBox = new QgsScaleComboBox(mSimplifyDrawingGroupBox);
        mSimplifyMaximumScaleComboBox->setObjectName(QStringLiteral("mSimplifyMaximumScaleComboBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mSimplifyMaximumScaleComboBox->sizePolicy().hasHeightForWidth());
        mSimplifyMaximumScaleComboBox->setSizePolicy(sizePolicy8);

        _12->addWidget(mSimplifyMaximumScaleComboBox, 4, 2, 1, 1);


        verticalLayout_32->addWidget(mSimplifyDrawingGroupBox);

        mForceRasterCheckBox = new QCheckBox(scrollAreaWidgetContents_19);
        mForceRasterCheckBox->setObjectName(QStringLiteral("mForceRasterCheckBox"));

        verticalLayout_32->addWidget(mForceRasterCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mRefreshLayerCheckBox = new QCheckBox(scrollAreaWidgetContents_19);
        mRefreshLayerCheckBox->setObjectName(QStringLiteral("mRefreshLayerCheckBox"));

        horizontalLayout_3->addWidget(mRefreshLayerCheckBox);

        mRefreshLayerIntervalSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_19);
        mRefreshLayerIntervalSpinBox->setObjectName(QStringLiteral("mRefreshLayerIntervalSpinBox"));
        mRefreshLayerIntervalSpinBox->setDecimals(2);
        mRefreshLayerIntervalSpinBox->setMinimum(0);
        mRefreshLayerIntervalSpinBox->setMaximum(1e+20);
        mRefreshLayerIntervalSpinBox->setSingleStep(5);
        mRefreshLayerIntervalSpinBox->setValue(10);

        horizontalLayout_3->addWidget(mRefreshLayerIntervalSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_32->addLayout(horizontalLayout_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        mRefreshLayerNotificationCheckBox = new QCheckBox(scrollAreaWidgetContents_19);
        mRefreshLayerNotificationCheckBox->setObjectName(QStringLiteral("mRefreshLayerNotificationCheckBox"));
        mRefreshLayerNotificationCheckBox->setChecked(true);

        horizontalLayout_14->addWidget(mRefreshLayerNotificationCheckBox);

        mNotificationFrame = new QFrame(scrollAreaWidgetContents_19);
        mNotificationFrame->setObjectName(QStringLiteral("mNotificationFrame"));
        mNotificationFrame->setEnabled(true);
        mNotificationFrame->setFrameShape(QFrame::NoFrame);
        mNotificationFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_1 = new QHBoxLayout(mNotificationFrame);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, -1, 0);
        mNotificationMessageCheckBox = new QCheckBox(mNotificationFrame);
        mNotificationMessageCheckBox->setObjectName(QStringLiteral("mNotificationMessageCheckBox"));
        mNotificationMessageCheckBox->setEnabled(true);

        horizontalLayout_1->addWidget(mNotificationMessageCheckBox);

        mNotifyMessagValueLineEdit = new QLineEdit(mNotificationFrame);
        mNotifyMessagValueLineEdit->setObjectName(QStringLiteral("mNotifyMessagValueLineEdit"));
        mNotifyMessagValueLineEdit->setEnabled(false);

        horizontalLayout_1->addWidget(mNotifyMessagValueLineEdit);


        horizontalLayout_14->addWidget(mNotificationFrame);


        verticalLayout_32->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_2);

        scrollArea_19->setWidget(scrollAreaWidgetContents_19);

        verticalLayout_19->addWidget(scrollArea_19);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Temporal = new QWidget();
        mOptsPage_Temporal->setObjectName(QStringLiteral("mOptsPage_Temporal"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Temporal);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        temporalFrame = new QFrame(mOptsPage_Temporal);
        temporalFrame->setObjectName(QStringLiteral("temporalFrame"));
        temporalFrame->setMinimumSize(QSize(100, 450));
        temporalFrame->setStyleSheet(QStringLiteral(""));
        temporalFrame->setFrameShape(QFrame::NoFrame);
        temporalFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_20->addWidget(temporalFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Temporal);
        mOptsPage_Variables = new QWidget();
        mOptsPage_Variables->setObjectName(QStringLiteral("mOptsPage_Variables"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Variables);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(mOptsPage_Variables);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_4);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_4);
        mVariableEditor->setObjectName(QStringLiteral("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QStringLiteral("projectProperties")));

        horizontalLayout_9->addWidget(mVariableEditor);


        verticalLayout_4->addWidget(groupBox_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Variables);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QStringLiteral("mOptsPage_Metadata"));
        verticalLayout_27 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QStringLiteral("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_27->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        mOptsPage_DataDependencies = new QWidget();
        mOptsPage_DataDependencies->setObjectName(QStringLiteral("mOptsPage_DataDependencies"));
        verticalLayout_30 = new QVBoxLayout(mOptsPage_DataDependencies);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(mOptsPage_DataDependencies);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_24 = new QVBoxLayout(groupBox_5);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        label1 = new QLabel(groupBox_5);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setWordWrap(true);

        verticalLayout_24->addWidget(label1);

        mLayersDependenciesTreeView = new QTreeView(groupBox_5);
        mLayersDependenciesTreeView->setObjectName(QStringLiteral("mLayersDependenciesTreeView"));
        mLayersDependenciesTreeView->setEnabled(true);

        verticalLayout_24->addWidget(mLayersDependenciesTreeView);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_24->addWidget(label_4);


        verticalLayout_30->addWidget(groupBox_5);

        mOptionsStackedWidget->addWidget(mOptsPage_DataDependencies);
        mOptsPage_Legend = new QWidget();
        mOptsPage_Legend->setObjectName(QStringLiteral("mOptsPage_Legend"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Legend);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        mLegendWidget = new QgsVectorLayerLegendWidget(mOptsPage_Legend);
        mLegendWidget->setObjectName(QStringLiteral("mLegendWidget"));

        verticalLayout_8->addWidget(mLegendWidget);

        groupBox_3 = new QgsCollapsibleGroupBox(mOptsPage_Legend);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_22 = new QVBoxLayout(groupBox_3);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        mLegendConfigEmbeddedWidget = new QgsLayerTreeEmbeddedConfigWidget(groupBox_3);
        mLegendConfigEmbeddedWidget->setObjectName(QStringLiteral("mLegendConfigEmbeddedWidget"));

        verticalLayout_22->addWidget(mLegendConfigEmbeddedWidget);


        verticalLayout_8->addWidget(groupBox_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Legend);
        mOptsPage_Server = new QWidget();
        mOptsPage_Server->setObjectName(QStringLiteral("mOptsPage_Server"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Server);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptsPage_Server);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 644, 808));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mMetaDescriptionGrpBx->setObjectName(QStringLiteral("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setProperty("syncGroup", QVariant(QStringLiteral("vectormeta")));
        gridLayout_5 = new QGridLayout(mMetaDescriptionGrpBx);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mLayerTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerTitleLabel->setObjectName(QStringLiteral("mLayerTitleLabel"));

        gridLayout_5->addWidget(mLayerTitleLabel, 1, 0, 1, 1);

        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QStringLiteral("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 5, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QStringLiteral("mLayerDataUrlLineEdit"));

        horizontalLayout_7->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QStringLiteral("mLayerDataUrlFormatLabel"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->insertItems(0, QStringList()
         << QStringLiteral("text/html")
         << QStringLiteral("text/plain")
         << QStringLiteral("application/pdf")
        );
        mLayerDataUrlFormatComboBox->setObjectName(QStringLiteral("mLayerDataUrlFormatComboBox"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_7, 6, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QStringLiteral("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 5, 0, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QStringLiteral("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QStringLiteral("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);

        mLayerTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerTitleLineEdit->setObjectName(QStringLiteral("mLayerTitleLineEdit"));

        gridLayout_5->addWidget(mLayerTitleLineEdit, 1, 1, 1, 1);

        mLayerAbstractLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerAbstractLabel->setObjectName(QStringLiteral("mLayerAbstractLabel"));

        gridLayout_5->addWidget(mLayerAbstractLabel, 3, 0, 1, 1);

        mLayerAbstractTextEdit = new QPlainTextEdit(mMetaDescriptionGrpBx);
        mLayerAbstractTextEdit->setObjectName(QStringLiteral("mLayerAbstractTextEdit"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy9);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 150));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 3, 1, 1, 1);

        mLayerDataUrlLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlLabel->setObjectName(QStringLiteral("mLayerDataUrlLabel"));

        gridLayout_5->addWidget(mLayerDataUrlLabel, 6, 0, 1, 1);


        verticalLayout_13->addWidget(mMetaDescriptionGrpBx);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
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


        verticalLayout_13->addWidget(mMetaAttributionGrpBx);

        mMetaMetaUrlGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
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

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        gridLayout_9->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        verticalLayout_13->addWidget(mMetaMetaUrlGrpBx);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mMetaLegendGrpBx->setObjectName(QStringLiteral("mMetaLegendGrpBx"));
        gridLayout_2 = new QGridLayout(mMetaLegendGrpBx);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mLayerLegendUrlLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlLabel->setObjectName(QStringLiteral("mLayerLegendUrlLabel"));

        horizontalLayout_2->addWidget(mLayerLegendUrlLabel);

        mLayerLegendUrlLineEdit = new QLineEdit(mMetaLegendGrpBx);
        mLayerLegendUrlLineEdit->setObjectName(QStringLiteral("mLayerLegendUrlLineEdit"));

        horizontalLayout_2->addWidget(mLayerLegendUrlLineEdit);

        mLayerLegendUrlFormatLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlFormatLabel->setObjectName(QStringLiteral("mLayerLegendUrlFormatLabel"));

        horizontalLayout_2->addWidget(mLayerLegendUrlFormatLabel);

        mLayerLegendUrlFormatComboBox = new QComboBox(mMetaLegendGrpBx);
        mLayerLegendUrlFormatComboBox->setObjectName(QStringLiteral("mLayerLegendUrlFormatComboBox"));
        mLayerLegendUrlFormatComboBox->setMinimumSize(QSize(137, 0));

        horizontalLayout_2->addWidget(mLayerLegendUrlFormatComboBox);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout_13->addWidget(mMetaLegendGrpBx);

        mWmsDimensionsGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mWmsDimensionsGrpBx->setObjectName(QStringLiteral("mWmsDimensionsGrpBx"));
        verticalLayout_33 = new QVBoxLayout(mWmsDimensionsGrpBx);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        mWmsDimensionsTreeWidget = new QTreeWidget(mWmsDimensionsGrpBx);
        mWmsDimensionsTreeWidget->setObjectName(QStringLiteral("mWmsDimensionsTreeWidget"));

        verticalLayout_33->addWidget(mWmsDimensionsTreeWidget);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        mButtonAddWmsDimension = new QPushButton(mWmsDimensionsGrpBx);
        mButtonAddWmsDimension->setObjectName(QStringLiteral("mButtonAddWmsDimension"));
        mButtonAddWmsDimension->setIcon(icon20);

        horizontalLayout_12->addWidget(mButtonAddWmsDimension);

        mButtonEditWmsDimension = new QPushButton(mWmsDimensionsGrpBx);
        mButtonEditWmsDimension->setObjectName(QStringLiteral("mButtonEditWmsDimension"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonEditWmsDimension->setIcon(icon23);

        horizontalLayout_12->addWidget(mButtonEditWmsDimension);

        mButtonRemoveWmsDimension = new QPushButton(mWmsDimensionsGrpBx);
        mButtonRemoveWmsDimension->setObjectName(QStringLiteral("mButtonRemoveWmsDimension"));
        mButtonRemoveWmsDimension->setIcon(icon21);

        horizontalLayout_12->addWidget(mButtonRemoveWmsDimension);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);


        verticalLayout_33->addLayout(horizontalLayout_12);


        verticalLayout_13->addWidget(mWmsDimensionsGrpBx);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Server);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout_26->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsVectorLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy10);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout_btnbox = new QGridLayout(mButtonBoxFrame);
        gridLayout_btnbox->setObjectName(QStringLiteral("gridLayout_btnbox"));
        gridLayout_btnbox->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_btnbox->addWidget(buttonBox, 2, 1, 1, 4);


        verticalLayout_26->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, teMetadataViewer);
        QWidget::setTabOrder(teMetadataViewer, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mLayerOrigNameLineEdit);
        QWidget::setTabOrder(mLayerOrigNameLineEdit, txtDisplayName);
        QWidget::setTabOrder(txtDisplayName, cboProviderEncoding);
        QWidget::setTabOrder(cboProviderEncoding, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, pbnIndex);
        QWidget::setTabOrder(pbnIndex, pbnUpdateExtents);
        QWidget::setTabOrder(pbnUpdateExtents, txtSubsetSQL);
        QWidget::setTabOrder(txtSubsetSQL, pbnQueryBuilder);
        QWidget::setTabOrder(pbnQueryBuilder, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mJoinTreeWidget);
        QWidget::setTabOrder(mJoinTreeWidget, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mButtonAddJoin);
        QWidget::setTabOrder(mButtonAddJoin, mButtonRemoveJoin);
        QWidget::setTabOrder(mButtonRemoveJoin, mButtonEditJoin);
        QWidget::setTabOrder(mButtonEditJoin, mAuxiliaryStorageKeyLineEdit);
        QWidget::setTabOrder(mAuxiliaryStorageKeyLineEdit, mAuxiliaryStorageFeaturesLineEdit);
        QWidget::setTabOrder(mAuxiliaryStorageFeaturesLineEdit, mAuxiliaryStorageFieldsLineEdit);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsLineEdit, mAuxiliaryStorageFieldsTree);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsTree, mAuxiliaryStorageFieldsAddBtn);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsAddBtn, mAuxiliaryStorageFieldsDeleteBtn);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsDeleteBtn, mAuxiliaryStorageActions);
        QWidget::setTabOrder(mAuxiliaryStorageActions, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, mDisplayExpressionWidget);
        QWidget::setTabOrder(mDisplayExpressionWidget, mMapTipExpressionFieldWidget);
        QWidget::setTabOrder(mMapTipExpressionFieldWidget, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, scrollArea_19);
        QWidget::setTabOrder(scrollArea_19, mScaleRangeWidget);
        QWidget::setTabOrder(mScaleRangeWidget, mSimplifyDrawingGroupBox);
        QWidget::setTabOrder(mSimplifyDrawingGroupBox, mSimplifyDrawingSpinBox);
        QWidget::setTabOrder(mSimplifyDrawingSpinBox, mSimplifyAlgorithmComboBox);
        QWidget::setTabOrder(mSimplifyAlgorithmComboBox, mSimplifyDrawingAtProvider);
        QWidget::setTabOrder(mSimplifyDrawingAtProvider, mSimplifyMaximumScaleComboBox);
        QWidget::setTabOrder(mSimplifyMaximumScaleComboBox, mForceRasterCheckBox);
        QWidget::setTabOrder(mForceRasterCheckBox, mRefreshLayerCheckBox);
        QWidget::setTabOrder(mRefreshLayerCheckBox, mRefreshLayerIntervalSpinBox);
        QWidget::setTabOrder(mRefreshLayerIntervalSpinBox, mRefreshLayerNotificationCheckBox);
        QWidget::setTabOrder(mRefreshLayerNotificationCheckBox, mNotificationMessageCheckBox);
        QWidget::setTabOrder(mNotificationMessageCheckBox, mNotifyMessagValueLineEdit);
        QWidget::setTabOrder(mNotifyMessagValueLineEdit, mLayersDependenciesTreeView);
        QWidget::setTabOrder(mLayersDependenciesTreeView, scrollArea);
        QWidget::setTabOrder(scrollArea, mLayerShortNameLineEdit);
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

        retranslateUi(QgsVectorLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(mRefreshLayerNotificationCheckBox, SIGNAL(toggled(bool)), mNotificationFrame, SLOT(setEnabled(bool)));
        QObject::connect(mNotificationMessageCheckBox, SIGNAL(toggled(bool)), mNotifyMessagValueLineEdit, SLOT(setEnabled(bool)));

        mOptionsStackedWidget->setCurrentIndex(0);
        widgetStackRenderers->setCurrentIndex(-1);
        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        QgsVectorLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer Properties", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "General information", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Source", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Symbology", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Control feature symbology", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Labels", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Control feature labeling", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Masks", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Control selective masking of symbols and labels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Fields", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Manage fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attributes Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Manage custom forms and field editor configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Joins", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem8->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Manage joins to other layers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Auxiliary Storage", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem9->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Manage additional per-project fields associated with the layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Actions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem10->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Manage automated actions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem11 = mOptionsListWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem11->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Display", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem12 = mOptionsListWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Rendering", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem12->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Rendering", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem13 = mOptionsListWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Temporal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem13->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Temporal Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem14 = mOptionsListWidget->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Variables", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem14->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Variables", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem15 = mOptionsListWidget->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem15->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer metadata", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem16 = mOptionsListWidget->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Dependencies", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem16->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Set dependent layers for automatic update", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem17 = mOptionsListWidget->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Legend", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem17->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Manage the layer's legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem18 = mOptionsListWidget->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "QGIS Server", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem18->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Edit QGIS Server settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox_60->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Settings", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer name", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "displayed as", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Data source encoding", Q_NULLPTR));
        mCrsGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of features. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p><p>The Processing \342\200\234<span style=\" font-style:italic;\">Reproject Layer</span>\342\200\235 tool should be used to reproject features and permanently change a data source's CRS.</p></body></html>", Q_NULLPTR));
        mGeomGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Geometry ", Q_NULLPTR));
        pbnIndex->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Create Spatial Index", Q_NULLPTR));
        pbnUpdateExtents->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Update Extents", Q_NULLPTR));
        mSubsetGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Provider Feature Filter", Q_NULLPTR));
        pbnQueryBuilder->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Query Builder", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mJoinTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsVectorLayerPropertiesBase", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsVectorLayerPropertiesBase", "Setting", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonAddJoin->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Add new join", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAddJoin->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonRemoveJoin->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Remove selected join", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemoveJoin->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonEditJoin->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Edit selected join", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonEditJoin->setText(QString());
        mAuxiliaryStorageInformationGrpBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Information", Q_NULLPTR));
        mAuxiliaryStorageFieldsLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Fields", Q_NULLPTR));
        mAuxiliaryStorageFeaturesLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Features", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAuxiliaryStorageFieldsLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAuxiliaryStorageFieldsLineEdit->setInputMask(QString());
        mAuxiliaryStorageFieldsLineEdit->setText(QString());
        mAuxiliaryStorageFieldsLineEdit->setPlaceholderText(QString());
        mAuxiliaryStorageKeyLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Key", Q_NULLPTR));
        mAuxiliaryStorageActions->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Auxiliary Layer", Q_NULLPTR));
        mAuxiliaryStorageFieldsGrpBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Fields", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAuxiliaryStorageFieldsAddBtn->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Add new field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAuxiliaryStorageFieldsAddBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAuxiliaryStorageFieldsDeleteBtn->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Remove selected field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAuxiliaryStorageFieldsDeleteBtn->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = mAuxiliaryStorageFieldsTree->headerItem();
        ___qtreewidgetitem1->setText(4, QApplication::translate("QgsVectorLayerPropertiesBase", "Full Name", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("QgsVectorLayerPropertiesBase", "Type", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsVectorLayerPropertiesBase", "Name", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsVectorLayerPropertiesBase", "Property", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsVectorLayerPropertiesBase", "Target", Q_NULLPTR));
        label_1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Auxiliary storage tables can contain additional data that should only belong to the project file. For instance, specific location or rotation for labels. Auxiliary data are saved in qgd files. New fields can be added from any data-defined widget when needed. Be aware that this information will NOT be saved in the data source but only in the project file.", Q_NULLPTR));
        groupBox_22->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Display Name", Q_NULLPTR));
        labelDisplayNameInfo->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "The feature display name is used in identify results, locator searches and the attribute table's dual view list.", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "HTML Map Tip", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mInsertExpressionButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Inserts the selected field or expression into the map tip", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mInsertExpressionButton->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Insert", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMapTipExpressionFieldWidget->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The valid attribute names for this layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelMapTipInfo->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "The HTML map tips are shown when moving mouse over features of the currently selected layer when the 'Show Map Tips' action is toggled on. If no HTML code is set, the feature display name is used.", Q_NULLPTR));
        mScaleVisibilityGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Scale Dependen&t Visibility", Q_NULLPTR));
        mSimplifyDrawingGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplify &Geometry", Q_NULLPTR));
        label_59->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "<b>Note:</b> Feature simplification may speed up rendering but can result in rendering inconsistencies", Q_NULLPTR));
        label_56->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplification threshold (higher values result in more simplification)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSimplifyDrawingSpinBox->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Higher values result in more simplification", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSimplifyDrawingPx->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "pixels", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSimplifyAlgorithmLabel->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "This algorithm only is applied to simplify on local side", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSimplifyAlgorithmLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplification algorithm", Q_NULLPTR));
        mSimplifyDrawingAtProvider->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplify on provider side if possible", Q_NULLPTR));
        mSimplifyMaxScaleLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum scale at which the layer should be simplified (1:1 always simplifies)", Q_NULLPTR));
        mForceRasterCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Force layer to render as a raster (may result in smaller export file sizes)", Q_NULLPTR));
        mRefreshLayerCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Refresh layer at interval (seconds)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRefreshLayerIntervalSpinBox->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Lower values result in more data refreshing. Canvas updates are deferred in order to avoid refreshing multiple times if more than one layer has an auto update interval set.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mRefreshLayerNotificationCheckBox->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>Some data providers can notify QGIS (e.g. PostgreSQL) with a message. If this is the case for this layer's data provider, notification will refresh the layer. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRefreshLayerNotificationCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Refresh layer on notification", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNotificationMessageCheckBox->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>Check if only a specific message must refresh the layer (i.e. not all data source notifications)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNotificationMessageCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Only if message is", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNotifyMessagValueLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>Notification message that will refresh the layer.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Variables", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Data Dependencies", Q_NULLPTR));
        label1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Features in this layer may be updated when the layers selected below are changed", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Selected dependent layers should include any layers which may externally alter the data in this layer. For instance, layers with database triggers or custom PyQGIS scripting which alter this layer should be selected. Correctly specifying dependent layers allows QGIS to invalidate caches for this layer when the dependent layers are altered.", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Embedded Widgets in Legend", Q_NULLPTR));
        mMetaDescriptionGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Description", Q_NULLPTR));
        mLayerTitleLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "A URL of the data presentation.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "A URL of the data presentation.", Q_NULLPTR));
        mLayerDataUrlFormatLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Format", Q_NULLPTR));
        mLayerKeywordListLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Keyword list", Q_NULLPTR));
        mLayerShortNameLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Short name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setInputMask(QString());
        mLayerShortNameLineEdit->setText(QString());
        mLayerShortNameLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerTitleLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerTitleLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", Q_NULLPTR));
        mLayerAbstractLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Abstract", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerAbstractTextEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The abstract is a descriptive narrative providing more information about the layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDataUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "DataUrl", Q_NULLPTR));
        mMetaAttributionGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution", Q_NULLPTR));
        mLayerAttributionLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's title indicates the provider of the data layer.", Q_NULLPTR));
        mLayerAttributionUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", Q_NULLPTR));
        mMetaMetaUrlGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "MetadataUrl", Q_NULLPTR));
        mLayerMetadataUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The URL of the metadata document.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "The URL of the metadata document.", Q_NULLPTR));
        mLayerMetadataUrlTypeLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Type", Q_NULLPTR));
        mLayerMetadataUrlFormatLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Format", Q_NULLPTR));
        mMetaLegendGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "LegendUrl", Q_NULLPTR));
        mLayerLegendUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Url", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "A URL of the legend image.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "A URL of the legend image.", Q_NULLPTR));
        mLayerLegendUrlFormatLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Format", Q_NULLPTR));
        mLayerLegendUrlFormatComboBox->clear();
        mLayerLegendUrlFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsVectorLayerPropertiesBase", "image/png", Q_NULLPTR)
         << QApplication::translate("QgsVectorLayerPropertiesBase", "image/jpeg", Q_NULLPTR)
        );
        mWmsDimensionsGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Dimensions", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = mWmsDimensionsTreeWidget->headerItem();
        ___qtreewidgetitem2->setText(1, QApplication::translate("QgsVectorLayerPropertiesBase", "Value", Q_NULLPTR));
        ___qtreewidgetitem2->setText(0, QApplication::translate("QgsVectorLayerPropertiesBase", "Setting", Q_NULLPTR));
        mButtonAddWmsDimension->setText(QString());
        mButtonEditWmsDimension->setText(QString());
        mButtonRemoveWmsDimension->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerPropertiesBase: public Ui_QgsVectorLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERPROPERTIESBASE_H
