/********************************************************************************
** Form generated from reading UI file 'qgsdiagrampropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDIAGRAMPROPERTIESBASE_H
#define UI_QGSDIAGRAMPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "effects/qgseffectstackpropertieswidget.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsfontbutton.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDiagramPropertiesBase
{
public:
    QVBoxLayout *verticalLayout_8;
    QFrame *frameShowDiagrams;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mDiagramTypeComboBox;
    QToolButton *mEngineSettingsButton;
    QFrame *mDiagramFrame;
    QGridLayout *gridLayout_6;
    QSplitter *mDiagramOptionsSplitter;
    QFrame *mDiagramOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *mDiagramOptionsListWidget;
    QFrame *mDiagramOptionGroupsFrame;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *mDiagramStackedWidget;
    QWidget *mDiagramPage_Attributes;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *availAttributesLayout;
    QLabel *label;
    QTreeWidget *mAttributesTreeWidget;
    QVBoxLayout *attributeButtonLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *mAddAttributeExpression;
    QPushButton *mAddCategoryPushButton;
    QPushButton *mRemoveCategoryPushButton;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *assignedAttributesLayout;
    QLabel *Assigened;
    QTreeWidget *mDiagramAttributesTreeWidget;
    QWidget *mDiagramPage_Rendering;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_39;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mFormatGrpBox;
    QGridLayout *gridLayout_7;
    QLabel *mBarSpacingLabel;
    QLabel *mBackgroundColorLabel;
    QgsColorButton *mBackgroundColorButton;
    QgsPropertyOverrideButton *mStartAngleDDBtn;
    QLabel *mPenColorLabel;
    QgsOpacityWidget *mOpacityWidget;
    QLabel *mAngleOffsetLabel;
    QComboBox *mAngleOffsetComboBox;
    QgsColorButton *mDiagramPenColorButton;
    QComboBox *mAngleDirectionComboBox;
    QgsDoubleSpinBox *mBarWidthSpinBox;
    QgsFontButton *mDiagramFontButton;
    QgsPropertyOverrideButton *mLineColorDDBtn;
    QgsPropertyOverrideButton *mLineWidthDDBtn;
    QgsUnitSelectionWidget *mDiagramLineUnitComboBox;
    QgsDoubleSpinBox *mBarSpacingSpinBox;
    QLabel *mAngleDirectionLabel;
    QLabel *mBarWidthLabel;
    QLabel *mPenWidthLabel;
    QLabel *mOpacityLabel;
    QgsUnitSelectionWidget *mBarSpacingUnitComboBox;
    QgsDoubleSpinBox *mPenWidthSpinBox;
    QgsPropertyOverrideButton *mBackgroundColorDDBtn;
    QgsEffectStackCompactWidget *mPaintEffectWidget;
    QgsCollapsibleGroupBox *mShowAxisGroupBox;
    QGridLayout *gridLayout_5;
    QgsSymbolButton *mAxisLineStyleButton;
    QLabel *label_2;
    QgsCollapsibleGroupBox *mVisiblityGrpBox;
    QGridLayout *gridLayout_3;
    QgsPropertyOverrideButton *mZOrderDDBtn;
    QgsDoubleSpinBox *mZIndexSpinBox;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mShowDiagramLabel;
    QgsPropertyOverrideButton *mShowDiagramDDBtn;
    QFrame *line_4;
    QLabel *mAlwaysShowLabel;
    QgsPropertyOverrideButton *mAlwaysShowDDBtn;
    QSpacerItem *horizontalSpacer_23;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_15;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QCheckBox *mShowAllCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *mDiagramPage_Size;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_40;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_11;
    QLabel *mDiagramUnitsLabel;
    QRadioButton *mFixedSizeRadio;
    QgsDoubleSpinBox *mDiagramSizeSpinBox;
    QgsUnitSelectionWidget *mDiagramUnitComboBox;
    QSpacerItem *verticalSpacer_3;
    QFrame *mLinearScaleFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLinearlyScalingLabel;
    QGridLayout *gridLayout;
    QLabel *mSizeLabel;
    QLabel *mScaleDependencyLabel;
    QComboBox *mScaleDependencyComboBox;
    QFrame *mFrameIncreaseSize;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mIncreaseSmallDiagramsCheck;
    QLabel *mIncreaseMinimumSizeLabel;
    QgsDoubleSpinBox *mIncreaseMinimumSizeSpinBox;
    QPushButton *mFindMaximumValueButton;
    QgsFieldExpressionWidget *mSizeFieldExpressionWidget;
    QLabel *mSizeAttributeLabel;
    QLabel *label_4;
    QgsDoubleSpinBox *mMaxValueSpinBox;
    QgsDoubleSpinBox *mSizeSpinBox;
    QRadioButton *mAttributeBasedScalingRadio;
    QWidget *mDiagramPage_Placement;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_41;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_12;
    QgsCollapsibleGroupBox *mCoordinatesGrpBox;
    QHBoxLayout *horizontalLayout_22;
    QLabel *mCoordXLabel;
    QgsPropertyOverrideButton *mCoordXDDBtn;
    QLabel *mCoordYLabel;
    QgsPropertyOverrideButton *mCoordYDDBtn;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_4;
    QFrame *mLinePlacementFrame;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_20;
    QCheckBox *chkLineAbove;
    QCheckBox *chkLineBelow;
    QCheckBox *chkLineOn;
    QCheckBox *chkLineOrientationDependent;
    QgsCollapsibleGroupBox *mPriorityGrpBox;
    QHBoxLayout *horizontalLayout_92;
    QLabel *mPriorityLowLabel;
    QSlider *mPrioritySlider;
    QLabel *mPriorityHighLabel;
    QgsPropertyOverrideButton *mPriorityDDBtn;
    QgsCollapsibleGroupBox *mObstaclesGrpBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QgsPropertyOverrideButton *mIsObstacleDDBtn;
    QSpacerItem *horizontalSpacer;
    QFrame *mPlacementFrame;
    QGridLayout *gridLayout_4;
    QLabel *mDiagramDistanceLabel;
    QHBoxLayout *horizontalLayout_14;
    QgsDoubleSpinBox *mDiagramDistanceSpinBox;
    QgsPropertyOverrideButton *mDistanceDDBtn;
    QStackedWidget *stackedPlacement;
    QWidget *pagePoint;
    QGridLayout *gridLayout_13;
    QRadioButton *radAroundPoint;
    QRadioButton *radOverPoint;
    QSpacerItem *horizontalSpacer_25;
    QWidget *pageLine;
    QGridLayout *gridLayout_14;
    QRadioButton *radOverLine;
    QRadioButton *radAroundLine;
    QSpacerItem *horizontalSpacer_15;
    QWidget *pagePolygon;
    QGridLayout *gridLayout_18;
    QRadioButton *radInsidePolygon;
    QRadioButton *radAroundCentroid;
    QSpacerItem *horizontalSpacer_26;
    QRadioButton *radOverCentroid;
    QRadioButton *radPolygonPerimeter;
    QWidget *mDiagramPage_Options;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_42;
    QgsScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_3;
    QFrame *mBarOptionsFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QRadioButton *mOrientationUpButton;
    QRadioButton *mOrientationDownButton;
    QRadioButton *mOrientationRightButton;
    QRadioButton *mOrientationLeftButton;
    QFrame *mTextOptionsFrame;
    QGridLayout *gridLayout_21;
    QLabel *mLabelPlacementLabel;
    QComboBox *mLabelPlacementComboBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QWidget *mDiagramPage_Legend;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_71;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *mCheckBoxAttributeLegend;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mButtonSizeLegendSettings;
    QSpacerItem *horizontalSpacer_111;
    QSpacerItem *verticalSpacer_7;
    QButtonGroup *mOrientationButtonGroup;

    void setupUi(QWidget *QgsDiagramPropertiesBase)
    {
        if (QgsDiagramPropertiesBase->objectName().isEmpty())
            QgsDiagramPropertiesBase->setObjectName(QStringLiteral("QgsDiagramPropertiesBase"));
        QgsDiagramPropertiesBase->resize(688, 491);
        verticalLayout_8 = new QVBoxLayout(QgsDiagramPropertiesBase);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        frameShowDiagrams = new QFrame(QgsDiagramPropertiesBase);
        frameShowDiagrams->setObjectName(QStringLiteral("frameShowDiagrams"));
        horizontalLayout_4 = new QHBoxLayout(frameShowDiagrams);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mDiagramTypeComboBox = new QComboBox(frameShowDiagrams);
        mDiagramTypeComboBox->setObjectName(QStringLiteral("mDiagramTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDiagramTypeComboBox->sizePolicy().hasHeightForWidth());
        mDiagramTypeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(mDiagramTypeComboBox);

        mEngineSettingsButton = new QToolButton(frameShowDiagrams);
        mEngineSettingsButton->setObjectName(QStringLiteral("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon);

        horizontalLayout_4->addWidget(mEngineSettingsButton);


        verticalLayout_8->addWidget(frameShowDiagrams);

        mDiagramFrame = new QFrame(QgsDiagramPropertiesBase);
        mDiagramFrame->setObjectName(QStringLiteral("mDiagramFrame"));
        mDiagramFrame->setFrameShape(QFrame::NoFrame);
        mDiagramFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(mDiagramFrame);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mDiagramOptionsSplitter = new QSplitter(mDiagramFrame);
        mDiagramOptionsSplitter->setObjectName(QStringLiteral("mDiagramOptionsSplitter"));
        mDiagramOptionsSplitter->setOrientation(Qt::Horizontal);
        mDiagramOptionsSplitter->setChildrenCollapsible(false);
        mDiagramOptionsListFrame = new QFrame(mDiagramOptionsSplitter);
        mDiagramOptionsListFrame->setObjectName(QStringLiteral("mDiagramOptionsListFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDiagramOptionsListFrame->sizePolicy().hasHeightForWidth());
        mDiagramOptionsListFrame->setSizePolicy(sizePolicy1);
        mDiagramOptionsListFrame->setMinimumSize(QSize(32, 0));
        mDiagramOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mDiagramOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(mDiagramOptionsListFrame);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        mDiagramOptionsListWidget = new QListWidget(mDiagramOptionsListFrame);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/render.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/transparency.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/labelplacement.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon6);
        mDiagramOptionsListWidget->setObjectName(QStringLiteral("mDiagramOptionsListWidget"));
        mDiagramOptionsListWidget->setMinimumSize(QSize(32, 0));
        mDiagramOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        mDiagramOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(mDiagramOptionsListWidget);

        mDiagramOptionsSplitter->addWidget(mDiagramOptionsListFrame);
        mDiagramOptionGroupsFrame = new QFrame(mDiagramOptionsSplitter);
        mDiagramOptionGroupsFrame->setObjectName(QStringLiteral("mDiagramOptionGroupsFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDiagramOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        mDiagramOptionGroupsFrame->setSizePolicy(sizePolicy2);
        mDiagramOptionGroupsFrame->setFrameShape(QFrame::NoFrame);
        mDiagramOptionGroupsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(mDiagramOptionGroupsFrame);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 0, 0, 6);
        mDiagramStackedWidget = new QStackedWidget(mDiagramOptionGroupsFrame);
        mDiagramStackedWidget->setObjectName(QStringLiteral("mDiagramStackedWidget"));
        mDiagramPage_Attributes = new QWidget();
        mDiagramPage_Attributes->setObjectName(QStringLiteral("mDiagramPage_Attributes"));
        verticalLayout_9 = new QVBoxLayout(mDiagramPage_Attributes);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(mDiagramPage_Attributes);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_9->addWidget(label_6);

        scrollArea = new QgsScrollArea(mDiagramPage_Attributes);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 642, 421));
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 6, 6);
        availAttributesLayout = new QVBoxLayout();
        availAttributesLayout->setObjectName(QStringLiteral("availAttributesLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        availAttributesLayout->addWidget(label);

        mAttributesTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("Attribute"));
        mAttributesTreeWidget->setHeaderItem(__qtreewidgetitem);
        mAttributesTreeWidget->setObjectName(QStringLiteral("mAttributesTreeWidget"));
        mAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mAttributesTreeWidget->setIndentation(0);
        mAttributesTreeWidget->setRootIsDecorated(false);
        mAttributesTreeWidget->setItemsExpandable(false);
        mAttributesTreeWidget->setExpandsOnDoubleClick(false);
        mAttributesTreeWidget->setColumnCount(1);

        availAttributesLayout->addWidget(mAttributesTreeWidget);


        horizontalLayout_6->addLayout(availAttributesLayout);

        attributeButtonLayout = new QVBoxLayout();
        attributeButtonLayout->setObjectName(QStringLiteral("attributeButtonLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer);

        mAddAttributeExpression = new QPushButton(scrollAreaWidgetContents);
        mAddAttributeExpression->setObjectName(QStringLiteral("mAddAttributeExpression"));
        mAddAttributeExpression->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeExpression->setIcon(icon7);

        attributeButtonLayout->addWidget(mAddAttributeExpression);

        mAddCategoryPushButton = new QPushButton(scrollAreaWidgetContents);
        mAddCategoryPushButton->setObjectName(QStringLiteral("mAddCategoryPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAddCategoryPushButton->sizePolicy().hasHeightForWidth());
        mAddCategoryPushButton->setSizePolicy(sizePolicy3);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCategoryPushButton->setIcon(icon8);

        attributeButtonLayout->addWidget(mAddCategoryPushButton);

        mRemoveCategoryPushButton = new QPushButton(scrollAreaWidgetContents);
        mRemoveCategoryPushButton->setObjectName(QStringLiteral("mRemoveCategoryPushButton"));
        sizePolicy3.setHeightForWidth(mRemoveCategoryPushButton->sizePolicy().hasHeightForWidth());
        mRemoveCategoryPushButton->setSizePolicy(sizePolicy3);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveCategoryPushButton->setIcon(icon9);

        attributeButtonLayout->addWidget(mRemoveCategoryPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer_5);


        horizontalLayout_6->addLayout(attributeButtonLayout);

        assignedAttributesLayout = new QVBoxLayout();
        assignedAttributesLayout->setObjectName(QStringLiteral("assignedAttributesLayout"));
        Assigened = new QLabel(scrollAreaWidgetContents);
        Assigened->setObjectName(QStringLiteral("Assigened"));

        assignedAttributesLayout->addWidget(Assigened);

        mDiagramAttributesTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        mDiagramAttributesTreeWidget->setObjectName(QStringLiteral("mDiagramAttributesTreeWidget"));
        mDiagramAttributesTreeWidget->setDragEnabled(true);
        mDiagramAttributesTreeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        mDiagramAttributesTreeWidget->setDefaultDropAction(Qt::TargetMoveAction);
        mDiagramAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mDiagramAttributesTreeWidget->setIndentation(0);
        mDiagramAttributesTreeWidget->setRootIsDecorated(false);
        mDiagramAttributesTreeWidget->setItemsExpandable(false);
        mDiagramAttributesTreeWidget->setColumnCount(3);

        assignedAttributesLayout->addWidget(mDiagramAttributesTreeWidget);


        horizontalLayout_6->addLayout(assignedAttributesLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_9->addWidget(scrollArea);

        mDiagramStackedWidget->addWidget(mDiagramPage_Attributes);
        mDiagramPage_Rendering = new QWidget();
        mDiagramPage_Rendering->setObjectName(QStringLiteral("mDiagramPage_Rendering"));
        verticalLayout_13 = new QVBoxLayout(mDiagramPage_Rendering);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(mDiagramPage_Rendering);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setStyleSheet(QStringLiteral("text-decoration: underline;"));

        verticalLayout_13->addWidget(label_39);

        scrollArea_4 = new QgsScrollArea(mDiagramPage_Rendering);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 630, 535));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 6, 0);
        mFormatGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mFormatGrpBox->setObjectName(QStringLiteral("mFormatGrpBox"));
        mFormatGrpBox->setProperty("syncGroup", QVariant(QStringLiteral("labelrenderinggroup")));
        gridLayout_7 = new QGridLayout(mFormatGrpBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        mBarSpacingLabel = new QLabel(mFormatGrpBox);
        mBarSpacingLabel->setObjectName(QStringLiteral("mBarSpacingLabel"));

        gridLayout_7->addWidget(mBarSpacingLabel, 2, 0, 1, 1);

        mBackgroundColorLabel = new QLabel(mFormatGrpBox);
        mBackgroundColorLabel->setObjectName(QStringLiteral("mBackgroundColorLabel"));

        gridLayout_7->addWidget(mBackgroundColorLabel, 3, 0, 1, 1);

        mBackgroundColorButton = new QgsColorButton(mFormatGrpBox);
        mBackgroundColorButton->setObjectName(QStringLiteral("mBackgroundColorButton"));
        sizePolicy.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy);
        mBackgroundColorButton->setMinimumSize(QSize(0, 0));
        mBackgroundColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(mBackgroundColorButton, 3, 1, 1, 2);

        mStartAngleDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mStartAngleDDBtn->setObjectName(QStringLiteral("mStartAngleDDBtn"));

        gridLayout_7->addWidget(mStartAngleDDBtn, 6, 3, 1, 1);

        mPenColorLabel = new QLabel(mFormatGrpBox);
        mPenColorLabel->setObjectName(QStringLiteral("mPenColorLabel"));

        gridLayout_7->addWidget(mPenColorLabel, 4, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mFormatGrpBox);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mOpacityWidget->sizePolicy().hasHeightForWidth());
        mOpacityWidget->setSizePolicy(sizePolicy4);
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 0, 1, 1, 3);

        mAngleOffsetLabel = new QLabel(mFormatGrpBox);
        mAngleOffsetLabel->setObjectName(QStringLiteral("mAngleOffsetLabel"));

        gridLayout_7->addWidget(mAngleOffsetLabel, 6, 0, 1, 1);

        mAngleOffsetComboBox = new QComboBox(mFormatGrpBox);
        mAngleOffsetComboBox->setObjectName(QStringLiteral("mAngleOffsetComboBox"));
        sizePolicy.setHeightForWidth(mAngleOffsetComboBox->sizePolicy().hasHeightForWidth());
        mAngleOffsetComboBox->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mAngleOffsetComboBox, 6, 1, 1, 2);

        mDiagramPenColorButton = new QgsColorButton(mFormatGrpBox);
        mDiagramPenColorButton->setObjectName(QStringLiteral("mDiagramPenColorButton"));
        sizePolicy.setHeightForWidth(mDiagramPenColorButton->sizePolicy().hasHeightForWidth());
        mDiagramPenColorButton->setSizePolicy(sizePolicy);
        mDiagramPenColorButton->setMinimumSize(QSize(120, 0));
        mDiagramPenColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(mDiagramPenColorButton, 4, 1, 1, 2);

        mAngleDirectionComboBox = new QComboBox(mFormatGrpBox);
        mAngleDirectionComboBox->setObjectName(QStringLiteral("mAngleDirectionComboBox"));
        sizePolicy.setHeightForWidth(mAngleDirectionComboBox->sizePolicy().hasHeightForWidth());
        mAngleDirectionComboBox->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mAngleDirectionComboBox, 7, 1, 1, 3);

        mBarWidthSpinBox = new QgsDoubleSpinBox(mFormatGrpBox);
        mBarWidthSpinBox->setObjectName(QStringLiteral("mBarWidthSpinBox"));
        mBarWidthSpinBox->setDecimals(5);
        mBarWidthSpinBox->setMinimum(0.01);
        mBarWidthSpinBox->setMaximum(100000);
        mBarWidthSpinBox->setSingleStep(0.2);
        mBarWidthSpinBox->setValue(0.01);

        gridLayout_7->addWidget(mBarWidthSpinBox, 1, 1, 1, 3);

        mDiagramFontButton = new QgsFontButton(mFormatGrpBox);
        mDiagramFontButton->setObjectName(QStringLiteral("mDiagramFontButton"));
        sizePolicy.setHeightForWidth(mDiagramFontButton->sizePolicy().hasHeightForWidth());
        mDiagramFontButton->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mDiagramFontButton, 9, 0, 1, 4);

        mLineColorDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mLineColorDDBtn->setObjectName(QStringLiteral("mLineColorDDBtn"));

        gridLayout_7->addWidget(mLineColorDDBtn, 4, 3, 1, 1);

        mLineWidthDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mLineWidthDDBtn->setObjectName(QStringLiteral("mLineWidthDDBtn"));

        gridLayout_7->addWidget(mLineWidthDDBtn, 5, 3, 1, 1);

        mDiagramLineUnitComboBox = new QgsUnitSelectionWidget(mFormatGrpBox);
        mDiagramLineUnitComboBox->setObjectName(QStringLiteral("mDiagramLineUnitComboBox"));
        mDiagramLineUnitComboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mDiagramLineUnitComboBox, 5, 2, 1, 1);

        mBarSpacingSpinBox = new QgsDoubleSpinBox(mFormatGrpBox);
        mBarSpacingSpinBox->setObjectName(QStringLiteral("mBarSpacingSpinBox"));
        mBarSpacingSpinBox->setDecimals(5);
        mBarSpacingSpinBox->setMinimum(0);
        mBarSpacingSpinBox->setMaximum(100000);
        mBarSpacingSpinBox->setSingleStep(0.2);
        mBarSpacingSpinBox->setValue(5);

        gridLayout_7->addWidget(mBarSpacingSpinBox, 2, 1, 1, 1);

        mAngleDirectionLabel = new QLabel(mFormatGrpBox);
        mAngleDirectionLabel->setObjectName(QStringLiteral("mAngleDirectionLabel"));

        gridLayout_7->addWidget(mAngleDirectionLabel, 7, 0, 1, 1);

        mBarWidthLabel = new QLabel(mFormatGrpBox);
        mBarWidthLabel->setObjectName(QStringLiteral("mBarWidthLabel"));

        gridLayout_7->addWidget(mBarWidthLabel, 1, 0, 1, 1);

        mPenWidthLabel = new QLabel(mFormatGrpBox);
        mPenWidthLabel->setObjectName(QStringLiteral("mPenWidthLabel"));

        gridLayout_7->addWidget(mPenWidthLabel, 5, 0, 1, 1);

        mOpacityLabel = new QLabel(mFormatGrpBox);
        mOpacityLabel->setObjectName(QStringLiteral("mOpacityLabel"));
        mOpacityLabel->setMinimumSize(QSize(130, 0));

        gridLayout_7->addWidget(mOpacityLabel, 0, 0, 1, 1);

        mBarSpacingUnitComboBox = new QgsUnitSelectionWidget(mFormatGrpBox);
        mBarSpacingUnitComboBox->setObjectName(QStringLiteral("mBarSpacingUnitComboBox"));
        mBarSpacingUnitComboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mBarSpacingUnitComboBox, 2, 2, 1, 2);

        mPenWidthSpinBox = new QgsDoubleSpinBox(mFormatGrpBox);
        mPenWidthSpinBox->setObjectName(QStringLiteral("mPenWidthSpinBox"));
        sizePolicy.setHeightForWidth(mPenWidthSpinBox->sizePolicy().hasHeightForWidth());
        mPenWidthSpinBox->setSizePolicy(sizePolicy);
        mPenWidthSpinBox->setDecimals(5);
        mPenWidthSpinBox->setMaximum(100000);
        mPenWidthSpinBox->setSingleStep(0.2);

        gridLayout_7->addWidget(mPenWidthSpinBox, 5, 1, 1, 1);

        mBackgroundColorDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mBackgroundColorDDBtn->setObjectName(QStringLiteral("mBackgroundColorDDBtn"));

        gridLayout_7->addWidget(mBackgroundColorDDBtn, 3, 3, 1, 1);

        mPaintEffectWidget = new QgsEffectStackCompactWidget(mFormatGrpBox);
        mPaintEffectWidget->setObjectName(QStringLiteral("mPaintEffectWidget"));
        mPaintEffectWidget->setMinimumSize(QSize(0, 10));

        gridLayout_7->addWidget(mPaintEffectWidget, 10, 0, 1, 4);


        verticalLayout->addWidget(mFormatGrpBox);

        mShowAxisGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mShowAxisGroupBox->setObjectName(QStringLiteral("mShowAxisGroupBox"));
        mShowAxisGroupBox->setCheckable(true);
        gridLayout_5 = new QGridLayout(mShowAxisGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mAxisLineStyleButton = new QgsSymbolButton(mShowAxisGroupBox);
        mAxisLineStyleButton->setObjectName(QStringLiteral("mAxisLineStyleButton"));
        sizePolicy.setHeightForWidth(mAxisLineStyleButton->sizePolicy().hasHeightForWidth());
        mAxisLineStyleButton->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(mAxisLineStyleButton, 0, 2, 1, 1);

        label_2 = new QLabel(mShowAxisGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(mShowAxisGroupBox);

        mVisiblityGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mVisiblityGrpBox->setObjectName(QStringLiteral("mVisiblityGrpBox"));
        mVisiblityGrpBox->setProperty("syncGroup", QVariant(QStringLiteral("labelrenderinggroup")));
        gridLayout_3 = new QGridLayout(mVisiblityGrpBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mZOrderDDBtn = new QgsPropertyOverrideButton(mVisiblityGrpBox);
        mZOrderDDBtn->setObjectName(QStringLiteral("mZOrderDDBtn"));

        gridLayout_3->addWidget(mZOrderDDBtn, 0, 2, 1, 1);

        mZIndexSpinBox = new QgsDoubleSpinBox(mVisiblityGrpBox);
        mZIndexSpinBox->setObjectName(QStringLiteral("mZIndexSpinBox"));
        sizePolicy.setHeightForWidth(mZIndexSpinBox->sizePolicy().hasHeightForWidth());
        mZIndexSpinBox->setSizePolicy(sizePolicy);
        mZIndexSpinBox->setMinimum(-1e+7);
        mZIndexSpinBox->setMaximum(1e+7);

        gridLayout_3->addWidget(mZIndexSpinBox, 0, 1, 1, 1);

        label_16 = new QLabel(mVisiblityGrpBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mShowDiagramLabel = new QLabel(mVisiblityGrpBox);
        mShowDiagramLabel->setObjectName(QStringLiteral("mShowDiagramLabel"));
        mShowDiagramLabel->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mShowDiagramLabel->sizePolicy().hasHeightForWidth());
        mShowDiagramLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_9->addWidget(mShowDiagramLabel);

        mShowDiagramDDBtn = new QgsPropertyOverrideButton(mVisiblityGrpBox);
        mShowDiagramDDBtn->setObjectName(QStringLiteral("mShowDiagramDDBtn"));

        horizontalLayout_9->addWidget(mShowDiagramDDBtn);

        line_4 = new QFrame(mVisiblityGrpBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_4);

        mAlwaysShowLabel = new QLabel(mVisiblityGrpBox);
        mAlwaysShowLabel->setObjectName(QStringLiteral("mAlwaysShowLabel"));
        sizePolicy5.setHeightForWidth(mAlwaysShowLabel->sizePolicy().hasHeightForWidth());
        mAlwaysShowLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_9->addWidget(mAlwaysShowLabel);

        mAlwaysShowDDBtn = new QgsPropertyOverrideButton(mVisiblityGrpBox);
        mAlwaysShowDDBtn->setObjectName(QStringLiteral("mAlwaysShowDDBtn"));

        horizontalLayout_9->addWidget(mAlwaysShowDDBtn);

        horizontalSpacer_23 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_23);


        gridLayout_3->addLayout(horizontalLayout_9, 2, 0, 1, 3);

        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(mVisiblityGrpBox);
        mScaleVisibilityGroupBox->setObjectName(QStringLiteral("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_15 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(9, 9, -1, -1);
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QStringLiteral("mScaleRangeWidget"));

        gridLayout_15->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(mScaleVisibilityGroupBox, 3, 0, 1, 3);

        mShowAllCheckBox = new QCheckBox(mVisiblityGrpBox);
        mShowAllCheckBox->setObjectName(QStringLiteral("mShowAllCheckBox"));
        mShowAllCheckBox->setChecked(true);

        gridLayout_3->addWidget(mShowAllCheckBox, 1, 0, 1, 3);


        verticalLayout->addWidget(mVisiblityGrpBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_13->addWidget(scrollArea_4);

        mDiagramStackedWidget->addWidget(mDiagramPage_Rendering);
        mDiagramPage_Size = new QWidget();
        mDiagramPage_Size->setObjectName(QStringLiteral("mDiagramPage_Size"));
        verticalLayout_6 = new QVBoxLayout(mDiagramPage_Size);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(mDiagramPage_Size);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setStyleSheet(QStringLiteral("text-decoration: underline;"));

        verticalLayout_6->addWidget(label_40);

        scrollArea_5 = new QgsScrollArea(mDiagramPage_Size);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 642, 421));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 6, 0);
        mDiagramUnitsLabel = new QLabel(scrollAreaWidgetContents_6);
        mDiagramUnitsLabel->setObjectName(QStringLiteral("mDiagramUnitsLabel"));

        gridLayout_11->addWidget(mDiagramUnitsLabel, 0, 0, 1, 1);

        mFixedSizeRadio = new QRadioButton(scrollAreaWidgetContents_6);
        mFixedSizeRadio->setObjectName(QStringLiteral("mFixedSizeRadio"));

        gridLayout_11->addWidget(mFixedSizeRadio, 1, 0, 1, 1);

        mDiagramSizeSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_6);
        mDiagramSizeSpinBox->setObjectName(QStringLiteral("mDiagramSizeSpinBox"));
        mDiagramSizeSpinBox->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mDiagramSizeSpinBox->sizePolicy().hasHeightForWidth());
        mDiagramSizeSpinBox->setSizePolicy(sizePolicy6);
        mDiagramSizeSpinBox->setDecimals(6);
        mDiagramSizeSpinBox->setMaximum(1e+7);
        mDiagramSizeSpinBox->setSingleStep(0.2);

        gridLayout_11->addWidget(mDiagramSizeSpinBox, 1, 1, 1, 1);

        mDiagramUnitComboBox = new QgsUnitSelectionWidget(scrollAreaWidgetContents_6);
        mDiagramUnitComboBox->setObjectName(QStringLiteral("mDiagramUnitComboBox"));
        mDiagramUnitComboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(mDiagramUnitComboBox, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 4, 0, 1, 1);

        mLinearScaleFrame = new QFrame(scrollAreaWidgetContents_6);
        mLinearScaleFrame->setObjectName(QStringLiteral("mLinearScaleFrame"));
        mLinearScaleFrame->setFrameShape(QFrame::NoFrame);
        mLinearScaleFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(mLinearScaleFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 0, 0);
        mLinearlyScalingLabel = new QLabel(mLinearScaleFrame);
        mLinearlyScalingLabel->setObjectName(QStringLiteral("mLinearlyScalingLabel"));
        mLinearlyScalingLabel->setWordWrap(true);

        verticalLayout_2->addWidget(mLinearlyScalingLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mSizeLabel = new QLabel(mLinearScaleFrame);
        mSizeLabel->setObjectName(QStringLiteral("mSizeLabel"));

        gridLayout->addWidget(mSizeLabel, 3, 0, 1, 1);

        mScaleDependencyLabel = new QLabel(mLinearScaleFrame);
        mScaleDependencyLabel->setObjectName(QStringLiteral("mScaleDependencyLabel"));

        gridLayout->addWidget(mScaleDependencyLabel, 3, 3, 1, 1);

        mScaleDependencyComboBox = new QComboBox(mLinearScaleFrame);
        mScaleDependencyComboBox->setObjectName(QStringLiteral("mScaleDependencyComboBox"));

        gridLayout->addWidget(mScaleDependencyComboBox, 3, 4, 1, 1);

        mFrameIncreaseSize = new QFrame(mLinearScaleFrame);
        mFrameIncreaseSize->setObjectName(QStringLiteral("mFrameIncreaseSize"));
        mFrameIncreaseSize->setFrameShape(QFrame::NoFrame);
        mFrameIncreaseSize->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mFrameIncreaseSize);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mIncreaseSmallDiagramsCheck = new QCheckBox(mFrameIncreaseSize);
        mIncreaseSmallDiagramsCheck->setObjectName(QStringLiteral("mIncreaseSmallDiagramsCheck"));

        horizontalLayout->addWidget(mIncreaseSmallDiagramsCheck);

        mIncreaseMinimumSizeLabel = new QLabel(mFrameIncreaseSize);
        mIncreaseMinimumSizeLabel->setObjectName(QStringLiteral("mIncreaseMinimumSizeLabel"));

        horizontalLayout->addWidget(mIncreaseMinimumSizeLabel);

        mIncreaseMinimumSizeSpinBox = new QgsDoubleSpinBox(mFrameIncreaseSize);
        mIncreaseMinimumSizeSpinBox->setObjectName(QStringLiteral("mIncreaseMinimumSizeSpinBox"));
        sizePolicy.setHeightForWidth(mIncreaseMinimumSizeSpinBox->sizePolicy().hasHeightForWidth());
        mIncreaseMinimumSizeSpinBox->setSizePolicy(sizePolicy);
        mIncreaseMinimumSizeSpinBox->setDecimals(6);
        mIncreaseMinimumSizeSpinBox->setMaximum(100000);
        mIncreaseMinimumSizeSpinBox->setSingleStep(0.2);

        horizontalLayout->addWidget(mIncreaseMinimumSizeSpinBox);


        gridLayout->addWidget(mFrameIncreaseSize, 4, 0, 1, 5);

        mFindMaximumValueButton = new QPushButton(mLinearScaleFrame);
        mFindMaximumValueButton->setObjectName(QStringLiteral("mFindMaximumValueButton"));

        gridLayout->addWidget(mFindMaximumValueButton, 2, 4, 1, 1);

        mSizeFieldExpressionWidget = new QgsFieldExpressionWidget(mLinearScaleFrame);
        mSizeFieldExpressionWidget->setObjectName(QStringLiteral("mSizeFieldExpressionWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mSizeFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mSizeFieldExpressionWidget->setSizePolicy(sizePolicy7);
        mSizeFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mSizeFieldExpressionWidget, 0, 1, 2, 4);

        mSizeAttributeLabel = new QLabel(mLinearScaleFrame);
        mSizeAttributeLabel->setObjectName(QStringLiteral("mSizeAttributeLabel"));

        gridLayout->addWidget(mSizeAttributeLabel, 0, 0, 2, 1);

        label_4 = new QLabel(mLinearScaleFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mMaxValueSpinBox = new QgsDoubleSpinBox(mLinearScaleFrame);
        mMaxValueSpinBox->setObjectName(QStringLiteral("mMaxValueSpinBox"));
        mMaxValueSpinBox->setDecimals(6);
        mMaxValueSpinBox->setMinimum(-1e+8);
        mMaxValueSpinBox->setMaximum(1e+8);

        gridLayout->addWidget(mMaxValueSpinBox, 2, 1, 1, 3);

        mSizeSpinBox = new QgsDoubleSpinBox(mLinearScaleFrame);
        mSizeSpinBox->setObjectName(QStringLiteral("mSizeSpinBox"));
        mSizeSpinBox->setDecimals(6);
        mSizeSpinBox->setMaximum(1e+7);
        mSizeSpinBox->setSingleStep(0.2);
        mSizeSpinBox->setValue(5);

        gridLayout->addWidget(mSizeSpinBox, 3, 1, 1, 2);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_11->addWidget(mLinearScaleFrame, 3, 0, 1, 2);

        mAttributeBasedScalingRadio = new QRadioButton(scrollAreaWidgetContents_6);
        mAttributeBasedScalingRadio->setObjectName(QStringLiteral("mAttributeBasedScalingRadio"));

        gridLayout_11->addWidget(mAttributeBasedScalingRadio, 2, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_6->addWidget(scrollArea_5);

        mDiagramStackedWidget->addWidget(mDiagramPage_Size);
        mDiagramPage_Placement = new QWidget();
        mDiagramPage_Placement->setObjectName(QStringLiteral("mDiagramPage_Placement"));
        verticalLayout_7 = new QVBoxLayout(mDiagramPage_Placement);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(mDiagramPage_Placement);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setStyleSheet(QStringLiteral("text-decoration: underline;"));

        verticalLayout_7->addWidget(label_41);

        scrollArea_6 = new QgsScrollArea(mDiagramPage_Placement);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 642, 421));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        mCoordinatesGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_7);
        mCoordinatesGrpBox->setObjectName(QStringLiteral("mCoordinatesGrpBox"));
        horizontalLayout_22 = new QHBoxLayout(mCoordinatesGrpBox);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        mCoordXLabel = new QLabel(mCoordinatesGrpBox);
        mCoordXLabel->setObjectName(QStringLiteral("mCoordXLabel"));
        sizePolicy5.setHeightForWidth(mCoordXLabel->sizePolicy().hasHeightForWidth());
        mCoordXLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_22->addWidget(mCoordXLabel);

        mCoordXDDBtn = new QgsPropertyOverrideButton(mCoordinatesGrpBox);
        mCoordXDDBtn->setObjectName(QStringLiteral("mCoordXDDBtn"));

        horizontalLayout_22->addWidget(mCoordXDDBtn);

        mCoordYLabel = new QLabel(mCoordinatesGrpBox);
        mCoordYLabel->setObjectName(QStringLiteral("mCoordYLabel"));
        sizePolicy5.setHeightForWidth(mCoordYLabel->sizePolicy().hasHeightForWidth());
        mCoordYLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_22->addWidget(mCoordYLabel);

        mCoordYDDBtn = new QgsPropertyOverrideButton(mCoordinatesGrpBox);
        mCoordYDDBtn->setObjectName(QStringLiteral("mCoordYDDBtn"));

        horizontalLayout_22->addWidget(mCoordYDDBtn);

        horizontalSpacer_22 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_22);


        gridLayout_12->addWidget(mCoordinatesGrpBox, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 9, 0, 1, 1);

        mLinePlacementFrame = new QFrame(scrollAreaWidgetContents_7);
        mLinePlacementFrame->setObjectName(QStringLiteral("mLinePlacementFrame"));
        mLinePlacementFrame->setFrameShape(QFrame::NoFrame);
        mLinePlacementFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(mLinePlacementFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        chkLineAbove = new QCheckBox(mLinePlacementFrame);
        chkLineAbove->setObjectName(QStringLiteral("chkLineAbove"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(chkLineAbove->sizePolicy().hasHeightForWidth());
        chkLineAbove->setSizePolicy(sizePolicy8);
        chkLineAbove->setChecked(true);

        gridLayout_20->addWidget(chkLineAbove, 0, 1, 1, 1);

        chkLineBelow = new QCheckBox(mLinePlacementFrame);
        chkLineBelow->setObjectName(QStringLiteral("chkLineBelow"));

        gridLayout_20->addWidget(chkLineBelow, 0, 3, 1, 1);

        chkLineOn = new QCheckBox(mLinePlacementFrame);
        chkLineOn->setObjectName(QStringLiteral("chkLineOn"));
        sizePolicy8.setHeightForWidth(chkLineOn->sizePolicy().hasHeightForWidth());
        chkLineOn->setSizePolicy(sizePolicy8);

        gridLayout_20->addWidget(chkLineOn, 0, 2, 1, 1);

        chkLineOrientationDependent = new QCheckBox(mLinePlacementFrame);
        chkLineOrientationDependent->setObjectName(QStringLiteral("chkLineOrientationDependent"));

        gridLayout_20->addWidget(chkLineOrientationDependent, 1, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout_20, 0, 0, 1, 3);


        gridLayout_12->addWidget(mLinePlacementFrame, 3, 0, 1, 1);

        mPriorityGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_7);
        mPriorityGrpBox->setObjectName(QStringLiteral("mPriorityGrpBox"));
        mPriorityGrpBox->setProperty("syncGroup", QVariant(QStringLiteral("labelplacementgroup")));
        horizontalLayout_92 = new QHBoxLayout(mPriorityGrpBox);
        horizontalLayout_92->setObjectName(QStringLiteral("horizontalLayout_92"));
        horizontalLayout_92->setContentsMargins(8, -1, 8, -1);
        mPriorityLowLabel = new QLabel(mPriorityGrpBox);
        mPriorityLowLabel->setObjectName(QStringLiteral("mPriorityLowLabel"));

        horizontalLayout_92->addWidget(mPriorityLowLabel);

        mPrioritySlider = new QSlider(mPriorityGrpBox);
        mPrioritySlider->setObjectName(QStringLiteral("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setInvertedAppearance(false);
        mPrioritySlider->setInvertedControls(false);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        horizontalLayout_92->addWidget(mPrioritySlider);

        mPriorityHighLabel = new QLabel(mPriorityGrpBox);
        mPriorityHighLabel->setObjectName(QStringLiteral("mPriorityHighLabel"));

        horizontalLayout_92->addWidget(mPriorityHighLabel);

        mPriorityDDBtn = new QgsPropertyOverrideButton(mPriorityGrpBox);
        mPriorityDDBtn->setObjectName(QStringLiteral("mPriorityDDBtn"));

        horizontalLayout_92->addWidget(mPriorityDDBtn);


        gridLayout_12->addWidget(mPriorityGrpBox, 7, 0, 1, 1);

        mObstaclesGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_7);
        mObstaclesGrpBox->setObjectName(QStringLiteral("mObstaclesGrpBox"));
        mObstaclesGrpBox->setProperty("syncGroup", QVariant(QStringLiteral("labelplacementgroup")));
        horizontalLayout_12 = new QHBoxLayout(mObstaclesGrpBox);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(8, -1, 8, -1);
        label_8 = new QLabel(mObstaclesGrpBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_12->addWidget(label_8);

        mIsObstacleDDBtn = new QgsPropertyOverrideButton(mObstaclesGrpBox);
        mIsObstacleDDBtn->setObjectName(QStringLiteral("mIsObstacleDDBtn"));

        horizontalLayout_12->addWidget(mIsObstacleDDBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);


        gridLayout_12->addWidget(mObstaclesGrpBox, 8, 0, 1, 1);

        mPlacementFrame = new QFrame(scrollAreaWidgetContents_7);
        mPlacementFrame->setObjectName(QStringLiteral("mPlacementFrame"));
        mPlacementFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_4 = new QGridLayout(mPlacementFrame);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mDiagramDistanceLabel = new QLabel(mPlacementFrame);
        mDiagramDistanceLabel->setObjectName(QStringLiteral("mDiagramDistanceLabel"));

        gridLayout_4->addWidget(mDiagramDistanceLabel, 2, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        mDiagramDistanceSpinBox = new QgsDoubleSpinBox(mPlacementFrame);
        mDiagramDistanceSpinBox->setObjectName(QStringLiteral("mDiagramDistanceSpinBox"));
        sizePolicy.setHeightForWidth(mDiagramDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mDiagramDistanceSpinBox->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(mDiagramDistanceSpinBox);

        mDistanceDDBtn = new QgsPropertyOverrideButton(mPlacementFrame);
        mDistanceDDBtn->setObjectName(QStringLiteral("mDistanceDDBtn"));

        horizontalLayout_14->addWidget(mDistanceDDBtn);


        gridLayout_4->addLayout(horizontalLayout_14, 2, 1, 1, 1);


        gridLayout_12->addWidget(mPlacementFrame, 2, 0, 1, 1);

        stackedPlacement = new QStackedWidget(scrollAreaWidgetContents_7);
        stackedPlacement->setObjectName(QStringLiteral("stackedPlacement"));
        sizePolicy.setHeightForWidth(stackedPlacement->sizePolicy().hasHeightForWidth());
        stackedPlacement->setSizePolicy(sizePolicy);
        stackedPlacement->setFrameShape(QFrame::NoFrame);
        stackedPlacement->setFrameShadow(QFrame::Sunken);
        pagePoint = new QWidget();
        pagePoint->setObjectName(QStringLiteral("pagePoint"));
        gridLayout_13 = new QGridLayout(pagePoint);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        radAroundPoint = new QRadioButton(pagePoint);
        radAroundPoint->setObjectName(QStringLiteral("radAroundPoint"));
        radAroundPoint->setChecked(true);

        gridLayout_13->addWidget(radAroundPoint, 0, 0, 1, 1);

        radOverPoint = new QRadioButton(pagePoint);
        radOverPoint->setObjectName(QStringLiteral("radOverPoint"));

        gridLayout_13->addWidget(radOverPoint, 0, 1, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_25, 0, 2, 1, 1);

        stackedPlacement->addWidget(pagePoint);
        pageLine = new QWidget();
        pageLine->setObjectName(QStringLiteral("pageLine"));
        gridLayout_14 = new QGridLayout(pageLine);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        radOverLine = new QRadioButton(pageLine);
        radOverLine->setObjectName(QStringLiteral("radOverLine"));
        sizePolicy8.setHeightForWidth(radOverLine->sizePolicy().hasHeightForWidth());
        radOverLine->setSizePolicy(sizePolicy8);

        gridLayout_14->addWidget(radOverLine, 0, 1, 1, 1);

        radAroundLine = new QRadioButton(pageLine);
        radAroundLine->setObjectName(QStringLiteral("radAroundLine"));
        sizePolicy8.setHeightForWidth(radAroundLine->sizePolicy().hasHeightForWidth());
        radAroundLine->setSizePolicy(sizePolicy8);
        radAroundLine->setChecked(true);

        gridLayout_14->addWidget(radAroundLine, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_15, 0, 2, 1, 1);

        stackedPlacement->addWidget(pageLine);
        pagePolygon = new QWidget();
        pagePolygon->setObjectName(QStringLiteral("pagePolygon"));
        gridLayout_18 = new QGridLayout(pagePolygon);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        radInsidePolygon = new QRadioButton(pagePolygon);
        radInsidePolygon->setObjectName(QStringLiteral("radInsidePolygon"));

        gridLayout_18->addWidget(radInsidePolygon, 0, 2, 1, 1);

        radAroundCentroid = new QRadioButton(pagePolygon);
        radAroundCentroid->setObjectName(QStringLiteral("radAroundCentroid"));
        sizePolicy8.setHeightForWidth(radAroundCentroid->sizePolicy().hasHeightForWidth());
        radAroundCentroid->setSizePolicy(sizePolicy8);
        radAroundCentroid->setChecked(true);

        gridLayout_18->addWidget(radAroundCentroid, 0, 0, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_26, 0, 4, 1, 1);

        radOverCentroid = new QRadioButton(pagePolygon);
        radOverCentroid->setObjectName(QStringLiteral("radOverCentroid"));
        sizePolicy8.setHeightForWidth(radOverCentroid->sizePolicy().hasHeightForWidth());
        radOverCentroid->setSizePolicy(sizePolicy8);
        radOverCentroid->setChecked(false);

        gridLayout_18->addWidget(radOverCentroid, 1, 0, 1, 1);

        radPolygonPerimeter = new QRadioButton(pagePolygon);
        radPolygonPerimeter->setObjectName(QStringLiteral("radPolygonPerimeter"));
        sizePolicy6.setHeightForWidth(radPolygonPerimeter->sizePolicy().hasHeightForWidth());
        radPolygonPerimeter->setSizePolicy(sizePolicy6);

        gridLayout_18->addWidget(radPolygonPerimeter, 1, 2, 1, 1);

        stackedPlacement->addWidget(pagePolygon);

        gridLayout_12->addWidget(stackedPlacement, 1, 0, 1, 1);

        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_7->addWidget(scrollArea_6);

        mDiagramStackedWidget->addWidget(mDiagramPage_Placement);
        mDiagramPage_Options = new QWidget();
        mDiagramPage_Options->setObjectName(QStringLiteral("mDiagramPage_Options"));
        verticalLayout_10 = new QVBoxLayout(mDiagramPage_Options);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(mDiagramPage_Options);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setStyleSheet(QStringLiteral("text-decoration: underline;"));

        verticalLayout_10->addWidget(label_42);

        scrollArea_7 = new QgsScrollArea(mDiagramPage_Options);
        scrollArea_7->setObjectName(QStringLiteral("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QStringLiteral("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 642, 421));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mBarOptionsFrame = new QFrame(scrollAreaWidgetContents_8);
        mBarOptionsFrame->setObjectName(QStringLiteral("mBarOptionsFrame"));
        mBarOptionsFrame->setFrameShape(QFrame::NoFrame);
        mBarOptionsFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(mBarOptionsFrame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(mBarOptionsFrame);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        mOrientationUpButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup = new QButtonGroup(QgsDiagramPropertiesBase);
        mOrientationButtonGroup->setObjectName(QStringLiteral("mOrientationButtonGroup"));
        mOrientationButtonGroup->addButton(mOrientationUpButton);
        mOrientationUpButton->setObjectName(QStringLiteral("mOrientationUpButton"));
        mOrientationUpButton->setChecked(true);

        verticalLayout_4->addWidget(mOrientationUpButton);

        mOrientationDownButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationDownButton);
        mOrientationDownButton->setObjectName(QStringLiteral("mOrientationDownButton"));

        verticalLayout_4->addWidget(mOrientationDownButton);

        mOrientationRightButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationRightButton);
        mOrientationRightButton->setObjectName(QStringLiteral("mOrientationRightButton"));

        verticalLayout_4->addWidget(mOrientationRightButton);

        mOrientationLeftButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationLeftButton);
        mOrientationLeftButton->setObjectName(QStringLiteral("mOrientationLeftButton"));

        verticalLayout_4->addWidget(mOrientationLeftButton);


        verticalLayout_3->addWidget(mBarOptionsFrame);

        mTextOptionsFrame = new QFrame(scrollAreaWidgetContents_8);
        mTextOptionsFrame->setObjectName(QStringLiteral("mTextOptionsFrame"));
        mTextOptionsFrame->setFrameShape(QFrame::NoFrame);
        mTextOptionsFrame->setFrameShadow(QFrame::Plain);
        gridLayout_21 = new QGridLayout(mTextOptionsFrame);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        mLabelPlacementLabel = new QLabel(mTextOptionsFrame);
        mLabelPlacementLabel->setObjectName(QStringLiteral("mLabelPlacementLabel"));
        mLabelPlacementLabel->setVisible(false);
#ifndef QT_NO_TOOLTIP
        mLabelPlacementLabel->setToolTip(0u);
#endif // QT_NO_TOOLTIP

        gridLayout_21->addWidget(mLabelPlacementLabel, 0, 0, 1, 1);

        mLabelPlacementComboBox = new QComboBox(mTextOptionsFrame);
        mLabelPlacementComboBox->setObjectName(QStringLiteral("mLabelPlacementComboBox"));
        sizePolicy4.setHeightForWidth(mLabelPlacementComboBox->sizePolicy().hasHeightForWidth());
        mLabelPlacementComboBox->setSizePolicy(sizePolicy4);
        mLabelPlacementComboBox->setMinimumSize(QSize(20, 0));
        mLabelPlacementComboBox->setMaximumSize(QSize(200, 16777215));
        mLabelPlacementComboBox->setVisible(false);

        gridLayout_21->addWidget(mLabelPlacementComboBox, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_3->addWidget(mTextOptionsFrame);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        scrollArea_7->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_10->addWidget(scrollArea_7);

        mDiagramStackedWidget->addWidget(mDiagramPage_Options);
        mDiagramPage_Legend = new QWidget();
        mDiagramPage_Legend->setObjectName(QStringLiteral("mDiagramPage_Legend"));
        verticalLayout_11 = new QVBoxLayout(mDiagramPage_Legend);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_71 = new QLabel(mDiagramPage_Legend);
        label_71->setObjectName(QStringLiteral("label_71"));

        verticalLayout_11->addWidget(label_71);

        scrollArea_2 = new QgsScrollArea(mDiagramPage_Legend);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 341, 81));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        mCheckBoxAttributeLegend = new QCheckBox(scrollAreaWidgetContents_2);
        mCheckBoxAttributeLegend->setObjectName(QStringLiteral("mCheckBoxAttributeLegend"));
        mCheckBoxAttributeLegend->setChecked(true);

        verticalLayout_12->addWidget(mCheckBoxAttributeLegend);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mButtonSizeLegendSettings = new QPushButton(scrollAreaWidgetContents_2);
        mButtonSizeLegendSettings->setObjectName(QStringLiteral("mButtonSizeLegendSettings"));

        horizontalLayout_5->addWidget(mButtonSizeLegendSettings);

        horizontalSpacer_111 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_111);


        verticalLayout_12->addLayout(horizontalLayout_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_11->addWidget(scrollArea_2);

        mDiagramStackedWidget->addWidget(mDiagramPage_Legend);

        verticalLayout_5->addWidget(mDiagramStackedWidget);

        mDiagramOptionsSplitter->addWidget(mDiagramOptionGroupsFrame);

        gridLayout_6->addWidget(mDiagramOptionsSplitter, 0, 1, 1, 1);


        verticalLayout_8->addWidget(mDiagramFrame);

        verticalLayout_8->setStretch(1, 1);
        QWidget::setTabOrder(mDiagramTypeComboBox, mEngineSettingsButton);
        QWidget::setTabOrder(mEngineSettingsButton, mDiagramOptionsListWidget);
        QWidget::setTabOrder(mDiagramOptionsListWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, mAttributesTreeWidget);
        QWidget::setTabOrder(mAttributesTreeWidget, mAddAttributeExpression);
        QWidget::setTabOrder(mAddAttributeExpression, mAddCategoryPushButton);
        QWidget::setTabOrder(mAddCategoryPushButton, mRemoveCategoryPushButton);
        QWidget::setTabOrder(mRemoveCategoryPushButton, mDiagramAttributesTreeWidget);
        QWidget::setTabOrder(mDiagramAttributesTreeWidget, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBarWidthSpinBox);
        QWidget::setTabOrder(mBarWidthSpinBox, mBarSpacingSpinBox);
        QWidget::setTabOrder(mBarSpacingSpinBox, mBarSpacingUnitComboBox);
        QWidget::setTabOrder(mBarSpacingUnitComboBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mBackgroundColorDDBtn);
        QWidget::setTabOrder(mBackgroundColorDDBtn, mDiagramPenColorButton);
        QWidget::setTabOrder(mDiagramPenColorButton, mLineColorDDBtn);
        QWidget::setTabOrder(mLineColorDDBtn, mPenWidthSpinBox);
        QWidget::setTabOrder(mPenWidthSpinBox, mDiagramLineUnitComboBox);
        QWidget::setTabOrder(mDiagramLineUnitComboBox, mLineWidthDDBtn);
        QWidget::setTabOrder(mLineWidthDDBtn, mAngleOffsetComboBox);
        QWidget::setTabOrder(mAngleOffsetComboBox, mStartAngleDDBtn);
        QWidget::setTabOrder(mStartAngleDDBtn, mAngleDirectionComboBox);
        QWidget::setTabOrder(mAngleDirectionComboBox, mDiagramFontButton);
        QWidget::setTabOrder(mDiagramFontButton, mShowAxisGroupBox);
        QWidget::setTabOrder(mShowAxisGroupBox, mAxisLineStyleButton);
        QWidget::setTabOrder(mAxisLineStyleButton, mZIndexSpinBox);
        QWidget::setTabOrder(mZIndexSpinBox, mZOrderDDBtn);
        QWidget::setTabOrder(mZOrderDDBtn, mShowAllCheckBox);
        QWidget::setTabOrder(mShowAllCheckBox, mShowDiagramDDBtn);
        QWidget::setTabOrder(mShowDiagramDDBtn, mAlwaysShowDDBtn);
        QWidget::setTabOrder(mAlwaysShowDDBtn, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, mDiagramUnitComboBox);
        QWidget::setTabOrder(mDiagramUnitComboBox, mFixedSizeRadio);
        QWidget::setTabOrder(mFixedSizeRadio, mDiagramSizeSpinBox);
        QWidget::setTabOrder(mDiagramSizeSpinBox, mAttributeBasedScalingRadio);
        QWidget::setTabOrder(mAttributeBasedScalingRadio, mMaxValueSpinBox);
        QWidget::setTabOrder(mMaxValueSpinBox, mFindMaximumValueButton);
        QWidget::setTabOrder(mFindMaximumValueButton, mSizeSpinBox);
        QWidget::setTabOrder(mSizeSpinBox, mScaleDependencyComboBox);
        QWidget::setTabOrder(mScaleDependencyComboBox, mIncreaseSmallDiagramsCheck);
        QWidget::setTabOrder(mIncreaseSmallDiagramsCheck, mIncreaseMinimumSizeSpinBox);
        QWidget::setTabOrder(mIncreaseMinimumSizeSpinBox, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, radAroundPoint);
        QWidget::setTabOrder(radAroundPoint, radOverPoint);
        QWidget::setTabOrder(radOverPoint, radAroundLine);
        QWidget::setTabOrder(radAroundLine, radOverLine);
        QWidget::setTabOrder(radOverLine, radAroundCentroid);
        QWidget::setTabOrder(radAroundCentroid, radInsidePolygon);
        QWidget::setTabOrder(radInsidePolygon, radOverCentroid);
        QWidget::setTabOrder(radOverCentroid, radPolygonPerimeter);
        QWidget::setTabOrder(radPolygonPerimeter, mDiagramDistanceSpinBox);
        QWidget::setTabOrder(mDiagramDistanceSpinBox, mDistanceDDBtn);
        QWidget::setTabOrder(mDistanceDDBtn, chkLineAbove);
        QWidget::setTabOrder(chkLineAbove, chkLineOn);
        QWidget::setTabOrder(chkLineOn, chkLineBelow);
        QWidget::setTabOrder(chkLineBelow, chkLineOrientationDependent);
        QWidget::setTabOrder(chkLineOrientationDependent, mCoordXDDBtn);
        QWidget::setTabOrder(mCoordXDDBtn, mCoordYDDBtn);
        QWidget::setTabOrder(mCoordYDDBtn, mPrioritySlider);
        QWidget::setTabOrder(mPrioritySlider, mPriorityDDBtn);
        QWidget::setTabOrder(mPriorityDDBtn, mIsObstacleDDBtn);
        QWidget::setTabOrder(mIsObstacleDDBtn, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mOrientationUpButton);
        QWidget::setTabOrder(mOrientationUpButton, mOrientationDownButton);
        QWidget::setTabOrder(mOrientationDownButton, mOrientationRightButton);
        QWidget::setTabOrder(mOrientationRightButton, mOrientationLeftButton);
        QWidget::setTabOrder(mOrientationLeftButton, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mCheckBoxAttributeLegend);
        QWidget::setTabOrder(mCheckBoxAttributeLegend, mButtonSizeLegendSettings);

        retranslateUi(QgsDiagramPropertiesBase);
        QObject::connect(mDiagramOptionsListWidget, SIGNAL(currentRowChanged(int)), mDiagramStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(mFixedSizeRadio, SIGNAL(toggled(bool)), mDiagramSizeSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(mAttributeBasedScalingRadio, SIGNAL(toggled(bool)), mLinearScaleFrame, SLOT(setEnabled(bool)));
        QObject::connect(mIncreaseSmallDiagramsCheck, SIGNAL(toggled(bool)), mIncreaseMinimumSizeSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(mIncreaseSmallDiagramsCheck, SIGNAL(toggled(bool)), mIncreaseMinimumSizeLabel, SLOT(setEnabled(bool)));

        mDiagramStackedWidget->setCurrentIndex(0);
        stackedPlacement->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDiagramPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDiagramPropertiesBase)
    {
#ifndef QT_NO_TOOLTIP
        mEngineSettingsButton->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Automated placement settings (apply to all layers)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP

        const bool __sortingEnabled = mDiagramOptionsListWidget->isSortingEnabled();
        mDiagramOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mDiagramOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attributes", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = mDiagramOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsDiagramPropertiesBase", "Rendering", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Rendering", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mDiagramOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = mDiagramOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsDiagramPropertiesBase", "Placement", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Placement", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mDiagramOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsDiagramPropertiesBase", "Options", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = mDiagramOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsDiagramPropertiesBase", "Legend", Q_NULLPTR));
        mDiagramOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_6->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attributes", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDiagramPropertiesBase", "Available attributes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddAttributeExpression->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Add expression", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mAddCategoryPushButton->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Add selected attributes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddCategoryPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveCategoryPushButton->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Remove selected attributes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveCategoryPushButton->setText(QString());
        Assigened->setText(QApplication::translate("QgsDiagramPropertiesBase", "Assigned attributes", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mDiagramAttributesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsDiagramPropertiesBase", "Legend", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDiagramPropertiesBase", "Color", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDiagramPropertiesBase", "Attribute", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDiagramAttributesTreeWidget->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Drag and drop to reorder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_39->setText(QApplication::translate("QgsDiagramPropertiesBase", "Rendering", Q_NULLPTR));
        mFormatGrpBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Format", Q_NULLPTR));
        mBarSpacingLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar spacing", Q_NULLPTR));
        mBackgroundColorLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Background color", Q_NULLPTR));
        mBackgroundColorButton->setText(QString());
        mStartAngleDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mPenColorLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line color", Q_NULLPTR));
        mAngleOffsetLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Start angle", Q_NULLPTR));
        mDiagramPenColorButton->setText(QString());
        mDiagramFontButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Font", Q_NULLPTR));
        mLineColorDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mLineWidthDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mAngleDirectionLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Direction", Q_NULLPTR));
        mBarWidthLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar width", Q_NULLPTR));
        mPenWidthLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line width", Q_NULLPTR));
        mOpacityLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Opacity", Q_NULLPTR));
        mBackgroundColorDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mShowAxisGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Show Axis", Q_NULLPTR));
        mAxisLineStyleButton->setText(QString());
        label_2->setText(QApplication::translate("QgsDiagramPropertiesBase", "Axis line symbol", Q_NULLPTR));
        mVisiblityGrpBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Visibility", Q_NULLPTR));
        mZOrderDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mZIndexSpinBox->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Controls how diagrams are drawn on top of each other. Diagrams with a higher z-index are drawn above diagrams and labels with a lower z-index.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("QgsDiagramPropertiesBase", "Diagram z-index", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mShowDiagramLabel->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Controls whether specific diagrams should be shown", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mShowDiagramLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Show diagram", Q_NULLPTR));
        mShowDiagramDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAlwaysShowLabel->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Controls whether specific diagrams should always be rendered, even when they overlap other diagrams or map labels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAlwaysShowLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Always show", Q_NULLPTR));
        mAlwaysShowDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mScaleVisibilityGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Scale dependent visibility", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mShowAllCheckBox->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Always show all diagrams, even when they overlap with each other or other map labels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mShowAllCheckBox->setText(QApplication::translate("QgsDiagramPropertiesBase", "Show all diagrams", Q_NULLPTR));
        label_40->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", Q_NULLPTR));
        mDiagramUnitsLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size units", Q_NULLPTR));
        mFixedSizeRadio->setText(QApplication::translate("QgsDiagramPropertiesBase", "Fixed size", Q_NULLPTR));
        mLinearlyScalingLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scale linearly between 0 and the following attribute value / diagram size", Q_NULLPTR));
        mSizeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", Q_NULLPTR));
        mScaleDependencyLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scale", Q_NULLPTR));
        mIncreaseSmallDiagramsCheck->setText(QApplication::translate("QgsDiagramPropertiesBase", "Increase size of small diagrams", Q_NULLPTR));
        mIncreaseMinimumSizeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Minimum size", Q_NULLPTR));
        mFindMaximumValueButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Find", Q_NULLPTR));
        mSizeAttributeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attribute", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsDiagramPropertiesBase", "Maximum value", Q_NULLPTR));
        mAttributeBasedScalingRadio->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scaled size", Q_NULLPTR));
        label_41->setText(QApplication::translate("QgsDiagramPropertiesBase", "Placement", Q_NULLPTR));
        mCoordinatesGrpBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Coordinates", Q_NULLPTR));
        mCoordXLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "X", Q_NULLPTR));
        mCoordXDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mCoordYLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Y", Q_NULLPTR));
        mCoordYDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        chkLineAbove->setText(QApplication::translate("QgsDiagramPropertiesBase", "Above line", Q_NULLPTR));
        chkLineBelow->setText(QApplication::translate("QgsDiagramPropertiesBase", "Below line", Q_NULLPTR));
        chkLineOn->setText(QApplication::translate("QgsDiagramPropertiesBase", "On line", Q_NULLPTR));
        chkLineOrientationDependent->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line orientation dependent position", Q_NULLPTR));
        mPriorityGrpBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Priority", Q_NULLPTR));
        mPriorityLowLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Low", Q_NULLPTR));
        mPriorityHighLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "High", Q_NULLPTR));
        mPriorityDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mObstaclesGrpBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Obstacles", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsDiagramPropertiesBase", "Discourage diagrams and labels from covering features", Q_NULLPTR));
        mIsObstacleDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
        mDiagramDistanceLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Distance", Q_NULLPTR));
        mDistanceDDBtn->setText(QApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radAroundPoint->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Labels are placed in an equal radius circle around point features.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radAroundPoint->setText(QApplication::translate("QgsDiagramPropertiesBase", "Around point", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radOverPoint->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Labels are placed at a fixed offset from the point.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radOverPoint->setText(QApplication::translate("QgsDiagramPropertiesBase", "Over point", Q_NULLPTR));
        radOverLine->setText(QApplication::translate("QgsDiagramPropertiesBase", "Over Line", Q_NULLPTR));
        radAroundLine->setText(QApplication::translate("QgsDiagramPropertiesBase", "Around Line", Q_NULLPTR));
        radInsidePolygon->setText(QApplication::translate("QgsDiagramPropertiesBase", "Inside Polygon", Q_NULLPTR));
        radAroundCentroid->setText(QApplication::translate("QgsDiagramPropertiesBase", "Around Centroid", Q_NULLPTR));
        radOverCentroid->setText(QApplication::translate("QgsDiagramPropertiesBase", "Over Centroid", Q_NULLPTR));
        radPolygonPerimeter->setText(QApplication::translate("QgsDiagramPropertiesBase", "Using Perimeter", Q_NULLPTR));
        label_42->setText(QApplication::translate("QgsDiagramPropertiesBase", "Options", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar Orientation", Q_NULLPTR));
        mOrientationUpButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Up", Q_NULLPTR));
        mOrientationDownButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Down", Q_NULLPTR));
        mOrientationRightButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Right", Q_NULLPTR));
        mOrientationLeftButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Left", Q_NULLPTR));
        mLabelPlacementLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Label placement", Q_NULLPTR));
        label_71->setText(QApplication::translate("QgsDiagramPropertiesBase", "Legend", Q_NULLPTR));
        mCheckBoxAttributeLegend->setText(QApplication::translate("QgsDiagramPropertiesBase", "Show legend entries for diagram attributes", Q_NULLPTR));
        mButtonSizeLegendSettings->setText(QApplication::translate("QgsDiagramPropertiesBase", "Legend Entries for Diagram Size\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsDiagramPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDiagramPropertiesBase: public Ui_QgsDiagramPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDIAGRAMPROPERTIESBASE_H
