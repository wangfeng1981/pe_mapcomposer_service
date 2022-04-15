/********************************************************************************
** Form generated from reading UI file 'qgsmeshlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHLAYERPROPERTIESBASE_H
#define UI_QGSMESHLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfilterlineedit.h"
#include "qgsmeshdatasetgrouptreewidget.h"
#include "qgsmeshstaticdatasetwidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshLayerPropertiesBase
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
    QTextBrowser *mInformationTextBrowser;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QgsCollapsibleGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_260;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QLineEdit *mLayerOrigNameLineEd;
    QLabel *label_13;
    QLineEdit *leDisplayName;
    QFrame *mDataSourceEncodingFrame;
    QHBoxLayout *horizontalLayout_4;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_11;
    QFrame *line_2;
    QgsMeshDatasetGroupTreeWidget *mDatasetGroupTreeWidget;
    QCheckBox *mTemporalStaticDatasetCheckBox;
    QgsCollapsibleGroupBoxBasic *mStaticDatasetGroupBox;
    QVBoxLayout *verticalLayout_7;
    QgsMeshStaticDatasetWidget *mStaticDatasetWidget;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *mOptsPage_StyleContent;
    QVBoxLayout *verticalLayout_10;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_5;
    QgsCollapsibleGroupBox *mSimplifyMeshGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_2;
    QgsSpinBox *mSimplifyMeshResolutionSpinBox;
    QgsDoubleSpinBox *mSimplifyReductionFactorSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Temporal;
    QGridLayout *gridLayout_3;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *mTemporalProviderTimeUnitComboBox;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QDateTimeEdit *mTemporalDateTimeReference;
    QPushButton *mTemporalReloadButton;
    QLabel *label_6;
    QDateTimeEdit *mTemporalDateTimeStart;
    QLabel *label_4;
    QDateTimeEdit *mTemporalDateTimeEnd;
    QLabel *label_10;
    QComboBox *mComboBoxTemporalDatasetMatchingMethod;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMeshLayerPropertiesBase)
    {
        if (QgsMeshLayerPropertiesBase->objectName().isEmpty())
            QgsMeshLayerPropertiesBase->setObjectName(QStringLiteral("QgsMeshLayerPropertiesBase"));
        QgsMeshLayerPropertiesBase->resize(815, 557);
        QgsMeshLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsMeshLayerPropertiesBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        mOptionsSplitter = new QSplitter(QgsMeshLayerPropertiesBase);
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
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
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
        mOptionsStackedWidget->setFrameShadow(QFrame::Plain);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QStringLiteral("mOptsPage_Information"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mInformationTextBrowser = new QTextBrowser(mOptsPage_Information);
        mInformationTextBrowser->setObjectName(QStringLiteral("mInformationTextBrowser"));

        verticalLayout_20->addWidget(mInformationTextBrowser);

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
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 661, 506));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_60 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        groupBox_60->setObjectName(QStringLiteral("groupBox_60"));
        verticalLayout_260 = new QVBoxLayout(groupBox_60);
        verticalLayout_260->setObjectName(QStringLiteral("verticalLayout_260"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_7 = new QLabel(groupBox_60);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_13->addWidget(label_7);

        mLayerOrigNameLineEd = new QLineEdit(groupBox_60);
        mLayerOrigNameLineEd->setObjectName(QStringLiteral("mLayerOrigNameLineEd"));

        horizontalLayout_13->addWidget(mLayerOrigNameLineEd);

        label_13 = new QLabel(groupBox_60);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        leDisplayName = new QLineEdit(groupBox_60);
        leDisplayName->setObjectName(QStringLiteral("leDisplayName"));
        leDisplayName->setEnabled(true);
        leDisplayName->setStyleSheet(QLatin1String("color: #505050;\n"
"background-color: #F0F0F0;\n"
"border: 1px solid #B0B0B0;\n"
"border-radius: 2px;"));
        leDisplayName->setReadOnly(true);

        horizontalLayout_13->addWidget(leDisplayName);


        verticalLayout_260->addLayout(horizontalLayout_13);

        mDataSourceEncodingFrame = new QFrame(groupBox_60);
        mDataSourceEncodingFrame->setObjectName(QStringLiteral("mDataSourceEncodingFrame"));
        mDataSourceEncodingFrame->setFrameShape(QFrame::NoFrame);
        mDataSourceEncodingFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(mDataSourceEncodingFrame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_260->addWidget(mDataSourceEncodingFrame);


        verticalLayout_4->addWidget(groupBox_60);

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

        label_11 = new QLabel(mCrsGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setTextFormat(Qt::RichText);
        label_11->setWordWrap(true);

        verticalLayout_28->addWidget(label_11);

        line_2 = new QFrame(mCrsGroupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);


        verticalLayout_4->addWidget(mCrsGroupBox);

        mDatasetGroupTreeWidget = new QgsMeshDatasetGroupTreeWidget(scrollAreaWidgetContents_3);
        mDatasetGroupTreeWidget->setObjectName(QStringLiteral("mDatasetGroupTreeWidget"));

        verticalLayout_4->addWidget(mDatasetGroupTreeWidget);

        mTemporalStaticDatasetCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        mTemporalStaticDatasetCheckBox->setObjectName(QStringLiteral("mTemporalStaticDatasetCheckBox"));

        verticalLayout_4->addWidget(mTemporalStaticDatasetCheckBox);

        mStaticDatasetGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents_3);
        mStaticDatasetGroupBox->setObjectName(QStringLiteral("mStaticDatasetGroupBox"));
        verticalLayout_7 = new QVBoxLayout(mStaticDatasetGroupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        mStaticDatasetWidget = new QgsMeshStaticDatasetWidget(mStaticDatasetGroupBox);
        mStaticDatasetWidget->setObjectName(QStringLiteral("mStaticDatasetWidget"));
        mStaticDatasetWidget->setMinimumSize(QSize(0, 0));

        verticalLayout_7->addWidget(mStaticDatasetWidget);


        verticalLayout_4->addWidget(mStaticDatasetGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

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
        mOptsPage_StyleContent = new QWidget();
        mOptsPage_StyleContent->setObjectName(QStringLiteral("mOptsPage_StyleContent"));
        mOptsPage_StyleContent->setGeometry(QRect(0, 0, 661, 506));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_StyleContent);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(mOptsPage_StyleContent);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QStringLiteral("mOptsPage_Rendering"));
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mSimplifyMeshGroupBox = new QgsCollapsibleGroupBox(mOptsPage_Rendering);
        mSimplifyMeshGroupBox->setObjectName(QStringLiteral("mSimplifyMeshGroupBox"));
        mSimplifyMeshGroupBox->setCheckable(true);
        mSimplifyMeshGroupBox->setChecked(true);
        gridLayout_2 = new QGridLayout(mSimplifyMeshGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(mSimplifyMeshGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_2 = new QLabel(mSimplifyMeshGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mSimplifyMeshResolutionSpinBox = new QgsSpinBox(mSimplifyMeshGroupBox);
        mSimplifyMeshResolutionSpinBox->setObjectName(QStringLiteral("mSimplifyMeshResolutionSpinBox"));
        mSimplifyMeshResolutionSpinBox->setMinimum(1);
        mSimplifyMeshResolutionSpinBox->setMaximum(200);
        mSimplifyMeshResolutionSpinBox->setValue(5);

        gridLayout_2->addWidget(mSimplifyMeshResolutionSpinBox, 1, 2, 1, 1);

        mSimplifyReductionFactorSpinBox = new QgsDoubleSpinBox(mSimplifyMeshGroupBox);
        mSimplifyReductionFactorSpinBox->setObjectName(QStringLiteral("mSimplifyReductionFactorSpinBox"));
        mSimplifyReductionFactorSpinBox->setDecimals(1);
        mSimplifyReductionFactorSpinBox->setMinimum(1.1);
        mSimplifyReductionFactorSpinBox->setMaximum(1e+6);
        mSimplifyReductionFactorSpinBox->setValue(10);

        gridLayout_2->addWidget(mSimplifyReductionFactorSpinBox, 0, 2, 1, 1);


        verticalLayout_5->addWidget(mSimplifyMeshGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Temporal = new QWidget();
        mOptsPage_Temporal->setObjectName(QStringLiteral("mOptsPage_Temporal"));
        gridLayout_3 = new QGridLayout(mOptsPage_Temporal);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QgsCollapsibleGroupBox(mOptsPage_Temporal);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        mTemporalProviderTimeUnitComboBox = new QComboBox(groupBox_2);
        mTemporalProviderTimeUnitComboBox->setObjectName(QStringLiteral("mTemporalProviderTimeUnitComboBox"));

        gridLayout_5->addWidget(mTemporalProviderTimeUnitComboBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 2, 1, 2);

        groupBox = new QgsCollapsibleGroupBox(mOptsPage_Temporal);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        mTemporalDateTimeReference = new QDateTimeEdit(groupBox);
        mTemporalDateTimeReference->setObjectName(QStringLiteral("mTemporalDateTimeReference"));
        mTemporalDateTimeReference->setCalendarPopup(true);
        mTemporalDateTimeReference->setTimeSpec(Qt::UTC);

        gridLayout_4->addWidget(mTemporalDateTimeReference, 0, 1, 1, 1);

        mTemporalReloadButton = new QPushButton(groupBox);
        mTemporalReloadButton->setObjectName(QStringLiteral("mTemporalReloadButton"));
        mTemporalReloadButton->setMaximumSize(QSize(24, 24));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTemporalReloadButton->setIcon(icon5);

        gridLayout_4->addWidget(mTemporalReloadButton, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        mTemporalDateTimeStart = new QDateTimeEdit(groupBox);
        mTemporalDateTimeStart->setObjectName(QStringLiteral("mTemporalDateTimeStart"));
        mTemporalDateTimeStart->setEnabled(false);
        mTemporalDateTimeStart->setReadOnly(true);
        mTemporalDateTimeStart->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(mTemporalDateTimeStart, 1, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        mTemporalDateTimeEnd = new QDateTimeEdit(groupBox);
        mTemporalDateTimeEnd->setObjectName(QStringLiteral("mTemporalDateTimeEnd"));
        mTemporalDateTimeEnd->setEnabled(false);
        mTemporalDateTimeEnd->setWrapping(false);
        mTemporalDateTimeEnd->setFrame(true);
        mTemporalDateTimeEnd->setReadOnly(true);
        mTemporalDateTimeEnd->setButtonSymbols(QAbstractSpinBox::NoButtons);
        mTemporalDateTimeEnd->setAccelerated(false);
        mTemporalDateTimeEnd->setProperty("showGroupSeparator", QVariant(false));
        mTemporalDateTimeEnd->setTimeSpec(Qt::UTC);

        gridLayout_4->addWidget(mTemporalDateTimeEnd, 2, 1, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 3, 0, 1, 1);

        mComboBoxTemporalDatasetMatchingMethod = new QComboBox(groupBox);
        mComboBoxTemporalDatasetMatchingMethod->setObjectName(QStringLiteral("mComboBoxTemporalDatasetMatchingMethod"));

        gridLayout_4->addWidget(mComboBoxTemporalDatasetMatchingMethod, 3, 1, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 2, 1, 1);

        mOptionsStackedWidget->addWidget(mOptsPage_Temporal);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsMeshLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
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
        QWidget::setTabOrder(mOptionsListWidget, mInformationTextBrowser);
        QWidget::setTabOrder(mInformationTextBrowser, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);

        retranslateUi(QgsMeshLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMeshLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshLayerPropertiesBase)
    {
        QgsMeshLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Raster Layer Properties", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Information", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Source", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Symbology", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Symbology", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Rendering", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Temporal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Temporal Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox_60->setTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Settings", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Layer name", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "displayed as", Q_NULLPTR));
        mCrsGroupBox->setTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of the mesh. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTemporalStaticDatasetCheckBox->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Static dataset even if the temporal navigation is on", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTemporalStaticDatasetCheckBox->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Always treat as a static dataset, regardless of temporal properties", Q_NULLPTR));
        mStaticDatasetGroupBox->setTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Static Dataset", Q_NULLPTR));
        mSimplifyMeshGroupBox->setTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Simplify Mesh", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Reduction factor", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Maximal mesh resolution", Q_NULLPTR));
        mSimplifyMeshResolutionSpinBox->setSuffix(QApplication::translate("QgsMeshLayerPropertiesBase", " pixels/triangle", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Provider Time Settings", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Time unit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTemporalProviderTimeUnitComboBox->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Default time unit of mesh data provider is hour, change to override the time unit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Layer Temporal Settings", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Reference time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTemporalDateTimeReference->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Reference time used to render mesh dataset when using temporal range or temporal animation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mTemporalReloadButton->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Reload from provider", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTemporalReloadButton->setText(QString());
        label_6->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Start time", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "End time", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Dataset matching method", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mComboBoxTemporalDatasetMatchingMethod->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Method for selection of temporal mesh dataset from a range time", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsMeshLayerPropertiesBase: public Ui_QgsMeshLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHLAYERPROPERTIESBASE_H
