/********************************************************************************
** Form generated from reading UI file 'qgspluginmanagerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPLUGINMANAGERBASE_H
#define UI_QGSPLUGINMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsfilterlineedit.h"
#include "qgsscrollarea.h"
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPluginManagerBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_5;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *vlayoutRightColumn;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *pagePlugins;
    QVBoxLayout *verticalLayout_8;
    QgsFilterLineEdit *leFilter;
    QSplitter *mPluginsDetailsSplitter;
    QWidget *layoutWidget_pluginList;
    QVBoxLayout *verticalLayout_4;
    QListView *vwPlugins;
    QWidget *layoutWidget_pluginDetails;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_12;
    QgsWebView *wvDetails;
    QGridLayout *gridLayout;
    QSlider *voteSlider;
    QPushButton *voteSubmit;
    QLabel *voteLabel;
    QLabel *voteRating;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *buttonUpgradeAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonUninstall;
    QPushButton *buttonInstall;
    QPushButton *buttonInstallExperimental;
    QWidget *pageInstallFromZip;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelInstallFromZip;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QgsFileWidget *mZipFileWidget;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonInstallFromZip;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageSettings;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelNoPython;
    QFrame *frameSettings;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *ckbCheckUpdates;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboInterval;
    QLabel *lblCheckUpdates;
    QgsCollapsibleGroupBox *ckbExperimental;
    QVBoxLayout *verticalLayout_9;
    QLabel *lblExperimental;
    QgsCollapsibleGroupBox *ckbDeprecated;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblDeprecated;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_13;
    QTreeWidget *treeRepositories;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonRefreshRepos;
    QSpacerItem *spacer_3;
    QPushButton *buttonAddRep;
    QPushButton *buttonEditRep;
    QPushButton *buttonDeleteRep;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPluginManagerBase)
    {
        if (QgsPluginManagerBase->objectName().isEmpty())
            QgsPluginManagerBase->setObjectName(QStringLiteral("QgsPluginManagerBase"));
        QgsPluginManagerBase->resize(875, 471);
        QgsPluginManagerBase->setMinimumSize(QSize(790, 0));
        QgsPluginManagerBase->setModal(true);
        verticalLayout = new QVBoxLayout(QgsPluginManagerBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsPluginManagerBase);
        mOptionsSplitter->setObjectName(QStringLiteral("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setOpaqueResize(true);
        mOptionsSplitter->setHandleWidth(7);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsListFrame->sizePolicy().hasHeightForWidth());
        mOptionsListFrame->setSizePolicy(sizePolicy);
        mOptionsListFrame->setMaximumSize(QSize(400, 16777215));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugins.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugin-installed.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugin-upgrade.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugin-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        __qlistwidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugin-incompatible.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        __qlistwidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/propertyicons/plugin-install_from_zip.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        __qlistwidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsListWidget->sizePolicy().hasHeightForWidth());
        mOptionsListWidget->setSizePolicy(sizePolicy1);
        mOptionsListWidget->setMinimumSize(QSize(140, 0));
        mOptionsListWidget->setMaximumSize(QSize(200, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_5->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QStringLiteral("mOptionsFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy2);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Plain);
        mOptionsFrame->setLineWidth(0);
        vlayoutRightColumn = new QVBoxLayout(mOptionsFrame);
        vlayoutRightColumn->setSpacing(6);
        vlayoutRightColumn->setContentsMargins(0, 0, 0, 0);
        vlayoutRightColumn->setObjectName(QStringLiteral("vlayoutRightColumn"));
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setLineWidth(0);
        pagePlugins = new QWidget();
        pagePlugins->setObjectName(QStringLiteral("pagePlugins"));
        verticalLayout_8 = new QVBoxLayout(pagePlugins);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 0, 0, 0);
        leFilter = new QgsFilterLineEdit(pagePlugins);
        leFilter->setObjectName(QStringLiteral("leFilter"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leFilter->sizePolicy().hasHeightForWidth());
        leFilter->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(leFilter);

        mPluginsDetailsSplitter = new QSplitter(pagePlugins);
        mPluginsDetailsSplitter->setObjectName(QStringLiteral("mPluginsDetailsSplitter"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mPluginsDetailsSplitter->sizePolicy().hasHeightForWidth());
        mPluginsDetailsSplitter->setSizePolicy(sizePolicy4);
        mPluginsDetailsSplitter->setOrientation(Qt::Horizontal);
        mPluginsDetailsSplitter->setChildrenCollapsible(false);
        layoutWidget_pluginList = new QWidget(mPluginsDetailsSplitter);
        layoutWidget_pluginList->setObjectName(QStringLiteral("layoutWidget_pluginList"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(layoutWidget_pluginList->sizePolicy().hasHeightForWidth());
        layoutWidget_pluginList->setSizePolicy(sizePolicy5);
        verticalLayout_4 = new QVBoxLayout(layoutWidget_pluginList);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        vwPlugins = new QListView(layoutWidget_pluginList);
        vwPlugins->setObjectName(QStringLiteral("vwPlugins"));
        sizePolicy5.setHeightForWidth(vwPlugins->sizePolicy().hasHeightForWidth());
        vwPlugins->setSizePolicy(sizePolicy5);
        vwPlugins->setMinimumSize(QSize(200, 0));
        vwPlugins->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vwPlugins->setProperty("showDropIndicator", QVariant(false));
        vwPlugins->setAlternatingRowColors(true);
        vwPlugins->setSelectionMode(QAbstractItemView::SingleSelection);
        vwPlugins->setSelectionBehavior(QAbstractItemView::SelectItems);
        vwPlugins->setResizeMode(QListView::Adjust);
        vwPlugins->setWordWrap(false);

        verticalLayout_4->addWidget(vwPlugins);

        mPluginsDetailsSplitter->addWidget(layoutWidget_pluginList);
        layoutWidget_pluginDetails = new QWidget(mPluginsDetailsSplitter);
        layoutWidget_pluginDetails->setObjectName(QStringLiteral("layoutWidget_pluginDetails"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(layoutWidget_pluginDetails->sizePolicy().hasHeightForWidth());
        layoutWidget_pluginDetails->setSizePolicy(sizePolicy6);
        verticalLayout_7 = new QVBoxLayout(layoutWidget_pluginDetails);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget_pluginDetails);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_12 = new QVBoxLayout(frame);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        wvDetails = new QgsWebView(frame);
        wvDetails->setObjectName(QStringLiteral("wvDetails"));
        sizePolicy1.setHeightForWidth(wvDetails->sizePolicy().hasHeightForWidth());
        wvDetails->setSizePolicy(sizePolicy1);
        wvDetails->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));

        verticalLayout_12->addWidget(wvDetails);


        verticalLayout_7->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        voteSlider = new QSlider(layoutWidget_pluginDetails);
        voteSlider->setObjectName(QStringLiteral("voteSlider"));
        voteSlider->setFocusPolicy(Qt::ClickFocus);
        voteSlider->setMinimum(1);
        voteSlider->setMaximum(5);
        voteSlider->setPageStep(1);
        voteSlider->setOrientation(Qt::Horizontal);
        voteSlider->setTickPosition(QSlider::TicksAbove);
        voteSlider->setTickInterval(1);

        gridLayout->addWidget(voteSlider, 1, 1, 1, 1);

        voteSubmit = new QPushButton(layoutWidget_pluginDetails);
        voteSubmit->setObjectName(QStringLiteral("voteSubmit"));
        voteSubmit->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(voteSubmit, 1, 2, 1, 1);

        voteLabel = new QLabel(layoutWidget_pluginDetails);
        voteLabel->setObjectName(QStringLiteral("voteLabel"));

        gridLayout->addWidget(voteLabel, 1, 0, 1, 1);

        voteRating = new QLabel(layoutWidget_pluginDetails);
        voteRating->setObjectName(QStringLiteral("voteRating"));
        voteRating->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(voteRating, 0, 0, 1, 3);


        verticalLayout_7->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        buttonUpgradeAll = new QPushButton(layoutWidget_pluginDetails);
        buttonUpgradeAll->setObjectName(QStringLiteral("buttonUpgradeAll"));
        buttonUpgradeAll->setEnabled(false);
        buttonUpgradeAll->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_6->addWidget(buttonUpgradeAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        buttonUninstall = new QPushButton(layoutWidget_pluginDetails);
        buttonUninstall->setObjectName(QStringLiteral("buttonUninstall"));
        buttonUninstall->setEnabled(false);
        buttonUninstall->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_6->addWidget(buttonUninstall);

        buttonInstall = new QPushButton(layoutWidget_pluginDetails);
        buttonInstall->setObjectName(QStringLiteral("buttonInstall"));
        buttonInstall->setEnabled(false);
        buttonInstall->setMinimumSize(QSize(160, 0));

        horizontalLayout_6->addWidget(buttonInstall);

        buttonInstallExperimental = new QPushButton(layoutWidget_pluginDetails);
        buttonInstallExperimental->setObjectName(QStringLiteral("buttonInstallExperimental"));
        buttonInstallExperimental->setEnabled(false);
        buttonInstallExperimental->setMinimumSize(QSize(160, 0));
        buttonInstallExperimental->setStyleSheet(QStringLiteral("background-color: #EEEEBB"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/pluginExperimental.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonInstallExperimental->setIcon(icon8);

        horizontalLayout_6->addWidget(buttonInstallExperimental);


        verticalLayout_7->addLayout(horizontalLayout_6);

        mPluginsDetailsSplitter->addWidget(layoutWidget_pluginDetails);

        verticalLayout_8->addWidget(mPluginsDetailsSplitter);

        mOptionsStackedWidget->addWidget(pagePlugins);
        pageInstallFromZip = new QWidget();
        pageInstallFromZip->setObjectName(QStringLiteral("pageInstallFromZip"));
        verticalLayout_14 = new QVBoxLayout(pageInstallFromZip);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_2);

        labelInstallFromZip = new QLabel(pageInstallFromZip);
        labelInstallFromZip->setObjectName(QStringLiteral("labelInstallFromZip"));
        sizePolicy.setHeightForWidth(labelInstallFromZip->sizePolicy().hasHeightForWidth());
        labelInstallFromZip->setSizePolicy(sizePolicy);
        labelInstallFromZip->setTextFormat(Qt::AutoText);
        labelInstallFromZip->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelInstallFromZip->setWordWrap(true);
        labelInstallFromZip->setMargin(20);

        verticalLayout_14->addWidget(labelInstallFromZip);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(pageInstallFromZip);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        mZipFileWidget = new QgsFileWidget(pageInstallFromZip);
        mZipFileWidget->setObjectName(QStringLiteral("mZipFileWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mZipFileWidget->sizePolicy().hasHeightForWidth());
        mZipFileWidget->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(mZipFileWidget);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_14->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        buttonInstallFromZip = new QPushButton(pageInstallFromZip);
        buttonInstallFromZip->setObjectName(QStringLiteral("buttonInstallFromZip"));
        buttonInstallFromZip->setEnabled(false);
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(buttonInstallFromZip->sizePolicy().hasHeightForWidth());
        buttonInstallFromZip->setSizePolicy(sizePolicy8);
        buttonInstallFromZip->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(buttonInstallFromZip);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_14->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        mOptionsStackedWidget->addWidget(pageInstallFromZip);
        pageSettings = new QWidget();
        pageSettings->setObjectName(QStringLiteral("pageSettings"));
        verticalLayout_2 = new QVBoxLayout(pageSettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 0, 0);
        labelNoPython = new QLabel(pageSettings);
        labelNoPython->setObjectName(QStringLiteral("labelNoPython"));
        sizePolicy.setHeightForWidth(labelNoPython->sizePolicy().hasHeightForWidth());
        labelNoPython->setSizePolicy(sizePolicy);
        labelNoPython->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelNoPython->setWordWrap(true);
        labelNoPython->setMargin(20);
        labelNoPython->setIndent(0);

        verticalLayout_2->addWidget(labelNoPython);

        frameSettings = new QFrame(pageSettings);
        frameSettings->setObjectName(QStringLiteral("frameSettings"));
        sizePolicy4.setHeightForWidth(frameSettings->sizePolicy().hasHeightForWidth());
        frameSettings->setSizePolicy(sizePolicy4);
        frameSettings->setFrameShape(QFrame::NoFrame);
        frameSettings->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameSettings);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QgsScrollArea(frameSettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 460, 613));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        ckbCheckUpdates = new QGroupBox(scrollAreaWidgetContents);
        ckbCheckUpdates->setObjectName(QStringLiteral("ckbCheckUpdates"));
        ckbCheckUpdates->setEnabled(true);
        sizePolicy.setHeightForWidth(ckbCheckUpdates->sizePolicy().hasHeightForWidth());
        ckbCheckUpdates->setSizePolicy(sizePolicy);
        ckbCheckUpdates->setCheckable(true);
        ckbCheckUpdates->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(ckbCheckUpdates);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(6, -1, -1, -1);
        comboInterval = new QComboBox(ckbCheckUpdates);
        comboInterval->setObjectName(QStringLiteral("comboInterval"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(comboInterval->sizePolicy().hasHeightForWidth());
        comboInterval->setSizePolicy(sizePolicy9);

        verticalLayout_6->addWidget(comboInterval);

        lblCheckUpdates = new QLabel(ckbCheckUpdates);
        lblCheckUpdates->setObjectName(QStringLiteral("lblCheckUpdates"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(lblCheckUpdates->sizePolicy().hasHeightForWidth());
        lblCheckUpdates->setSizePolicy(sizePolicy10);
        lblCheckUpdates->setMinimumSize(QSize(0, 0));
        lblCheckUpdates->setWordWrap(true);

        verticalLayout_6->addWidget(lblCheckUpdates);


        verticalLayout_10->addWidget(ckbCheckUpdates);

        ckbExperimental = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        ckbExperimental->setObjectName(QStringLiteral("ckbExperimental"));
        ckbExperimental->setCheckable(true);
        ckbExperimental->setChecked(false);
        ckbExperimental->setProperty("collapsed", QVariant(false));
        ckbExperimental->setProperty("saveCheckedState", QVariant(true));
        ckbExperimental->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_9 = new QVBoxLayout(ckbExperimental);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        lblExperimental = new QLabel(ckbExperimental);
        lblExperimental->setObjectName(QStringLiteral("lblExperimental"));
        sizePolicy10.setHeightForWidth(lblExperimental->sizePolicy().hasHeightForWidth());
        lblExperimental->setSizePolicy(sizePolicy10);
        lblExperimental->setMinimumSize(QSize(0, 0));
        lblExperimental->setTextFormat(Qt::RichText);
        lblExperimental->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblExperimental->setWordWrap(true);

        verticalLayout_9->addWidget(lblExperimental);


        verticalLayout_10->addWidget(ckbExperimental);

        ckbDeprecated = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        ckbDeprecated->setObjectName(QStringLiteral("ckbDeprecated"));
        ckbDeprecated->setCheckable(true);
        ckbDeprecated->setChecked(false);
        ckbDeprecated->setProperty("collapsed", QVariant(false));
        ckbDeprecated->setProperty("saveCheckedState", QVariant(true));
        ckbDeprecated->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_11 = new QVBoxLayout(ckbDeprecated);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        lblDeprecated = new QLabel(ckbDeprecated);
        lblDeprecated->setObjectName(QStringLiteral("lblDeprecated"));
        sizePolicy10.setHeightForWidth(lblDeprecated->sizePolicy().hasHeightForWidth());
        lblDeprecated->setSizePolicy(sizePolicy10);
        lblDeprecated->setMinimumSize(QSize(0, 0));
        lblDeprecated->setTextFormat(Qt::RichText);
        lblDeprecated->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeprecated->setWordWrap(true);

        verticalLayout_11->addWidget(lblDeprecated);


        verticalLayout_10->addWidget(ckbDeprecated);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout_13 = new QVBoxLayout(groupBox);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        treeRepositories = new QTreeWidget(groupBox);
        treeRepositories->setObjectName(QStringLiteral("treeRepositories"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(treeRepositories->sizePolicy().hasHeightForWidth());
        treeRepositories->setSizePolicy(sizePolicy11);
        treeRepositories->setMinimumSize(QSize(0, 30));
        treeRepositories->setMaximumSize(QSize(16777215, 150));
        treeRepositories->setRootIsDecorated(false);
        treeRepositories->setItemsExpandable(false);

        verticalLayout_13->addWidget(treeRepositories);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonRefreshRepos = new QPushButton(groupBox);
        buttonRefreshRepos->setObjectName(QStringLiteral("buttonRefreshRepos"));

        horizontalLayout->addWidget(buttonRefreshRepos);

        spacer_3 = new QSpacerItem(316, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_3);

        buttonAddRep = new QPushButton(groupBox);
        buttonAddRep->setObjectName(QStringLiteral("buttonAddRep"));

        horizontalLayout->addWidget(buttonAddRep);

        buttonEditRep = new QPushButton(groupBox);
        buttonEditRep->setObjectName(QStringLiteral("buttonEditRep"));
        QSizePolicy sizePolicy12(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(buttonEditRep->sizePolicy().hasHeightForWidth());
        buttonEditRep->setSizePolicy(sizePolicy12);

        horizontalLayout->addWidget(buttonEditRep);

        buttonDeleteRep = new QPushButton(groupBox);
        buttonDeleteRep->setObjectName(QStringLiteral("buttonDeleteRep"));

        horizontalLayout->addWidget(buttonDeleteRep);


        verticalLayout_13->addLayout(horizontalLayout);


        verticalLayout_10->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_2->addWidget(frameSettings);

        mOptionsStackedWidget->addWidget(pageSettings);

        vlayoutRightColumn->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        buttonBox = new QDialogButtonBox(QgsPluginManagerBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mOptionsListWidget, leFilter);
        QWidget::setTabOrder(leFilter, vwPlugins);
        QWidget::setTabOrder(vwPlugins, wvDetails);
        QWidget::setTabOrder(wvDetails, buttonUpgradeAll);
        QWidget::setTabOrder(buttonUpgradeAll, buttonUninstall);
        QWidget::setTabOrder(buttonUninstall, buttonInstall);
        QWidget::setTabOrder(buttonInstall, buttonBox);

        retranslateUi(QgsPluginManagerBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPluginManagerBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPluginManagerBase, SLOT(reject()));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsPluginManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPluginManagerBase)
    {
        QgsPluginManagerBase->setWindowTitle(QApplication::translate("QgsPluginManagerBase", "Plugin Manager", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsPluginManagerBase", "All", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsPluginManagerBase", "Installed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsPluginManagerBase", "Installed plugins", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsPluginManagerBase", "Not installed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsPluginManagerBase", "Not installed plugins available for download", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsPluginManagerBase", "Upgradeable", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsPluginManagerBase", "Installed plugins with more recent version available for download", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsPluginManagerBase", "New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsPluginManagerBase", "Not installed plugins seen for the first time", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsPluginManagerBase", "Invalid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsPluginManagerBase", "Broken and incompatible installed plugins", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsPluginManagerBase", "Install from ZIP", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsPluginManagerBase", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsPluginManagerBase", "Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        voteSubmit->setText(QApplication::translate("QgsPluginManagerBase", "Vote!", Q_NULLPTR));
        voteLabel->setText(QApplication::translate("QgsPluginManagerBase", "Your Vote", Q_NULLPTR));
        voteRating->setText(QApplication::translate("QgsPluginManagerBase", "Current vote", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonUpgradeAll->setToolTip(QApplication::translate("QgsPluginManagerBase", "Upgrade all upgradeable plugins", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonUpgradeAll->setText(QApplication::translate("QgsPluginManagerBase", "Upgrade All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonUninstall->setToolTip(QApplication::translate("QgsPluginManagerBase", "Uninstall the selected plugin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonUninstall->setText(QApplication::translate("QgsPluginManagerBase", "Uninstall Plugin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonInstall->setToolTip(QApplication::translate("QgsPluginManagerBase", "Install, reinstall or upgrade the selected plugin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonInstall->setText(QApplication::translate("QgsPluginManagerBase", "Reinstall Plugin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonInstallExperimental->setToolTip(QApplication::translate("QgsPluginManagerBase", "Install, reinstall or upgrade the experimental version of selected plugin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonInstallExperimental->setText(QApplication::translate("QgsPluginManagerBase", "Reinstall Experimental", Q_NULLPTR));
        labelInstallFromZip->setText(QApplication::translate("QgsPluginManagerBase", "<html><head/><body><p>If you are provided with a zip package containing a plugin to install, please select the file below and click the <span style=\" font-style:italic;\">Install plugin</span> button.</p><p>Please note for most users this function is not applicable, as the preferable way is to install plugins from a repository.</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("QgsPluginManagerBase", "ZIP file:", Q_NULLPTR));
        buttonInstallFromZip->setText(QApplication::translate("QgsPluginManagerBase", "Install Plugin", Q_NULLPTR));
        labelNoPython->setText(QApplication::translate("QgsPluginManagerBase", "The settings on this tab are only applicable for Python Plugins. No Python support detected, thus no settings available.", Q_NULLPTR));
        ckbCheckUpdates->setTitle(QApplication::translate("QgsPluginManagerBase", "Check for updates on startup", Q_NULLPTR));
        comboInterval->clear();
        comboInterval->insertItems(0, QStringList()
         << QApplication::translate("QgsPluginManagerBase", "every time QGIS starts", Q_NULLPTR)
         << QApplication::translate("QgsPluginManagerBase", "once a day", Q_NULLPTR)
         << QApplication::translate("QgsPluginManagerBase", "every 3 days", Q_NULLPTR)
         << QApplication::translate("QgsPluginManagerBase", "every week", Q_NULLPTR)
         << QApplication::translate("QgsPluginManagerBase", "every 2 weeks", Q_NULLPTR)
         << QApplication::translate("QgsPluginManagerBase", "every month", Q_NULLPTR)
        );
        lblCheckUpdates->setText(QApplication::translate("QgsPluginManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note:</span> If this function is enabled, QGIS will inform you whenever a new plugin or plugin update is available. Otherwise, fetching repositories will be performed during opening of the Plugin Manager window.</p></body></html>", Q_NULLPTR));
        ckbExperimental->setTitle(QApplication::translate("QgsPluginManagerBase", "Show also experimental plugins", Q_NULLPTR));
        lblExperimental->setText(QApplication::translate("QgsPluginManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note:</span> Experimental plugins are generally unsuitable for production use. These plugins are in early stages of development, and should be considered 'incomplete' or 'proof of concept' tools. QGIS does not recommend installing these plugins unless you intend to use them for testing purposes.</p></body></html>", Q_NULLPTR));
        ckbDeprecated->setTitle(QApplication::translate("QgsPluginManagerBase", "Show also deprecated plugins", Q_NULLPTR));
        lblDeprecated->setText(QApplication::translate("QgsPluginManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600;\">Note:</span><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\"> Deprecated plugins are generally unsuitable for production use. These plugins are unmaintained, and should be considered 'obsolete' tools. QGIS does not recommend installing these plugins unless you still need it and there are no other alternatives available.</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsPluginManagerBase", "Plugin Repositories", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeRepositories->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsPluginManagerBase", "URL", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsPluginManagerBase", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsPluginManagerBase", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonRefreshRepos->setToolTip(QApplication::translate("QgsPluginManagerBase", "Reload repository contents\n"
"(useful when you uploaded a plugin there)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonRefreshRepos->setText(QApplication::translate("QgsPluginManagerBase", "Reload Repository", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonAddRep->setToolTip(QApplication::translate("QgsPluginManagerBase", "Configure an additional plugin repository", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonAddRep->setWhatsThis(QApplication::translate("QgsPluginManagerBase", "Add a new plugin repository", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        buttonAddRep->setText(QApplication::translate("QgsPluginManagerBase", "Add\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonEditRep->setToolTip(QApplication::translate("QgsPluginManagerBase", "Edit the selected repository", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonEditRep->setWhatsThis(QApplication::translate("QgsPluginManagerBase", "Edit the selected repository", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        buttonEditRep->setText(QApplication::translate("QgsPluginManagerBase", "Edit\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonDeleteRep->setToolTip(QApplication::translate("QgsPluginManagerBase", "Remove the selected repository", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonDeleteRep->setWhatsThis(QApplication::translate("QgsPluginManagerBase", "Remove the selected repository", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        buttonDeleteRep->setText(QApplication::translate("QgsPluginManagerBase", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsPluginManagerBase: public Ui_QgsPluginManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPLUGINMANAGERBASE_H
