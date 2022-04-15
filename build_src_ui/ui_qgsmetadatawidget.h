/********************************************************************************
** Form generated from reading UI file 'qgsmetadatawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMETADATAWIDGET_H
#define UI_QGSMETADATAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdatetimeedit.h"
#include "qgsextentgroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMetadataWidgetBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tabIdentificationDialog;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *mIdLabel;
    QLabel *label_27;
    QLineEdit *lineEditParentId;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditIdentifier;
    QPushButton *btnAutoSource;
    QLabel *label_2;
    QLineEdit *lineEditTitle;
    QLabel *label_7;
    QComboBox *comboType;
    QFrame *mAuthorFrame;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QDateTimeEdit *mCreationDateTimeEdit;
    QLineEdit *mLineEditAuthor;
    QLabel *label_11;
    QLabel *label_4;
    QComboBox *comboLanguage;
    QLabel *label_6;
    QTextEdit *textEditAbstract;
    QFrame *encodingFrame;
    QVBoxLayout *verticalLayout_13;
    QFrame *mEncodingFrame;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboEncoding;
    QPushButton *btnAutoEncoding;
    QWidget *tabCategoriesDialog;
    QVBoxLayout *verticalLayout_14;
    QLabel *mLabelCategories;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_23;
    QListView *listDefaultCategories;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnAddDefaultCategory;
    QPushButton *btnNewCategory;
    QPushButton *btnRemoveCategory;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_22;
    QListView *listCategories;
    QWidget *tabKeywordsDialog;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelKeywords;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnAddVocabulary;
    QPushButton *btnRemoveVocabulary;
    QTableWidget *tabKeywords;
    QWidget *tabAccessDialog;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *lineEditFees;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddLicence;
    QPushButton *btnRemoveLicence;
    QTableWidget *tabLicenses;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnAddRight;
    QPushButton *btnRemoveRight;
    QListView *listRights;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnAddConstraint;
    QPushButton *btnRemoveConstraint;
    QTableView *tabConstraints;
    QWidget *tabExtentDialog;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblCurrentCrs;
    QPushButton *btnSetCrsFromLayer;
    QPushButton *btnSetCrsFromProvider;
    QLabel *lblCurrentCrsStatus;
    QgsExtentGroupBox *spatialExtentSelector;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_32;
    QgsSpinBox *spinBoxZMaximum;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_31;
    QgsSpinBox *spinBoxZMinimum;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_33;
    QgsDateTimeEdit *dateTimeFrom;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_34;
    QgsDateTimeEdit *dateTimeTo;
    QSpacerItem *verticalSpacer;
    QWidget *tabContactsDialog;
    QVBoxLayout *verticalLayout_10;
    QLabel *mLabelContact;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *panelDetails;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditContactPosition;
    QLineEdit *lineEditContactName;
    QLabel *label_15;
    QLabel *label_14;
    QLineEdit *lineEditContactOrganization;
    QLabel *label_10;
    QLineEdit *lineEditContactVoice;
    QLineEdit *lineEditContactFax;
    QLabel *label_20;
    QLabel *label_12;
    QComboBox *comboContactRole;
    QLineEdit *lineEditContactEmail;
    QLabel *label_19;
    QLabel *label_21;
    QTableWidget *tabAddresses;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btnAddAddress;
    QPushButton *btnRemoveAddress;
    QWidget *tabLinksDialog;
    QVBoxLayout *verticalLayout_5;
    QLabel *mLabelLinks;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddLink;
    QPushButton *btnRemoveLink;
    QTableView *tabLinks;
    QWidget *tab;
    QVBoxLayout *verticalLayout_17;
    QLabel *mLabelHistory;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnAddHistory;
    QPushButton *btnRemoveHistory;
    QListView *listHistory;
    QWidget *tabValidationDialog;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_28;
    QTextBrowser *resultsCheckMetadata;

    void setupUi(QWidget *QgsMetadataWidgetBase)
    {
        if (QgsMetadataWidgetBase->objectName().isEmpty())
            QgsMetadataWidgetBase->setObjectName(QStringLiteral("QgsMetadataWidgetBase"));
        QgsMetadataWidgetBase->resize(804, 668);
        QgsMetadataWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_4 = new QVBoxLayout(QgsMetadataWidgetBase);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QgsMetadataWidgetBase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabIdentificationDialog = new QWidget();
        tabIdentificationDialog->setObjectName(QStringLiteral("tabIdentificationDialog"));
        verticalLayout = new QVBoxLayout(tabIdentificationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tabIdentificationDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 786, 721));
        verticalLayout_15 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        mIdLabel = new QLabel(scrollAreaWidgetContents_2);
        mIdLabel->setObjectName(QStringLiteral("mIdLabel"));
        mIdLabel->setText(QStringLiteral("Label text set in qgsmetadatawidget.cpp"));
        mIdLabel->setWordWrap(true);

        verticalLayout_15->addWidget(mIdLabel);

        label_27 = new QLabel(scrollAreaWidgetContents_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_15->addWidget(label_27);

        lineEditParentId = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditParentId->setObjectName(QStringLiteral("lineEditParentId"));

        verticalLayout_15->addWidget(lineEditParentId);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_15->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditIdentifier = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditIdentifier->setObjectName(QStringLiteral("lineEditIdentifier"));

        horizontalLayout->addWidget(lineEditIdentifier);

        btnAutoSource = new QPushButton(scrollAreaWidgetContents_2);
        btnAutoSource->setObjectName(QStringLiteral("btnAutoSource"));

        horizontalLayout->addWidget(btnAutoSource);


        verticalLayout_15->addLayout(horizontalLayout);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_15->addWidget(label_2);

        lineEditTitle = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditTitle->sizePolicy().hasHeightForWidth());
        lineEditTitle->setSizePolicy(sizePolicy);

        verticalLayout_15->addWidget(lineEditTitle);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_15->addWidget(label_7);

        comboType = new QComboBox(scrollAreaWidgetContents_2);
        comboType->setObjectName(QStringLiteral("comboType"));
        comboType->setEnabled(true);
        comboType->setEditable(true);

        verticalLayout_15->addWidget(comboType);

        mAuthorFrame = new QFrame(scrollAreaWidgetContents_2);
        mAuthorFrame->setObjectName(QStringLiteral("mAuthorFrame"));
        mAuthorFrame->setFrameShape(QFrame::NoFrame);
        mAuthorFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mAuthorFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(mAuthorFrame);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 1);

        mCreationDateTimeEdit = new QDateTimeEdit(mAuthorFrame);
        mCreationDateTimeEdit->setObjectName(QStringLiteral("mCreationDateTimeEdit"));
        mCreationDateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(mCreationDateTimeEdit, 2, 1, 1, 1);

        mLineEditAuthor = new QLineEdit(mAuthorFrame);
        mLineEditAuthor->setObjectName(QStringLiteral("mLineEditAuthor"));
        sizePolicy.setHeightForWidth(mLineEditAuthor->sizePolicy().hasHeightForWidth());
        mLineEditAuthor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLineEditAuthor, 1, 0, 1, 2);

        label_11 = new QLabel(mAuthorFrame);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(mAuthorFrame);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_15->addWidget(label_4);

        comboLanguage = new QComboBox(scrollAreaWidgetContents_2);
        comboLanguage->setObjectName(QStringLiteral("comboLanguage"));
        comboLanguage->setEnabled(true);
        comboLanguage->setEditable(true);

        verticalLayout_15->addWidget(comboLanguage);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_15->addWidget(label_6);

        textEditAbstract = new QTextEdit(scrollAreaWidgetContents_2);
        textEditAbstract->setObjectName(QStringLiteral("textEditAbstract"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEditAbstract->sizePolicy().hasHeightForWidth());
        textEditAbstract->setSizePolicy(sizePolicy1);

        verticalLayout_15->addWidget(textEditAbstract);

        encodingFrame = new QFrame(scrollAreaWidgetContents_2);
        encodingFrame->setObjectName(QStringLiteral("encodingFrame"));
        encodingFrame->setEnabled(true);
        encodingFrame->setFrameShape(QFrame::NoFrame);
        encodingFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(encodingFrame);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        mEncodingFrame = new QFrame(encodingFrame);
        mEncodingFrame->setObjectName(QStringLiteral("mEncodingFrame"));
        mEncodingFrame->setFrameShape(QFrame::NoFrame);
        mEncodingFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(mEncodingFrame);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(mEncodingFrame);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_18->addWidget(label_24);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        comboEncoding = new QComboBox(mEncodingFrame);
        comboEncoding->setObjectName(QStringLiteral("comboEncoding"));
        sizePolicy.setHeightForWidth(comboEncoding->sizePolicy().hasHeightForWidth());
        comboEncoding->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(comboEncoding);

        btnAutoEncoding = new QPushButton(mEncodingFrame);
        btnAutoEncoding->setObjectName(QStringLiteral("btnAutoEncoding"));

        horizontalLayout_8->addWidget(btnAutoEncoding);


        verticalLayout_18->addLayout(horizontalLayout_8);


        verticalLayout_13->addWidget(mEncodingFrame);


        verticalLayout_15->addWidget(encodingFrame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        tabWidget->addTab(tabIdentificationDialog, QString());
        tabCategoriesDialog = new QWidget();
        tabCategoriesDialog->setObjectName(QStringLiteral("tabCategoriesDialog"));
        verticalLayout_14 = new QVBoxLayout(tabCategoriesDialog);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        mLabelCategories = new QLabel(tabCategoriesDialog);
        mLabelCategories->setObjectName(QStringLiteral("mLabelCategories"));
        mLabelCategories->setText(QStringLiteral("Label text set in qgsmetadatawidget.cpp"));

        verticalLayout_14->addWidget(mLabelCategories);

        frame = new QFrame(tabCategoriesDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_23 = new QLabel(frame);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_11->addWidget(label_23);

        listDefaultCategories = new QListView(frame);
        listDefaultCategories->setObjectName(QStringLiteral("listDefaultCategories"));
        listDefaultCategories->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listDefaultCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_11->addWidget(listDefaultCategories);


        horizontalLayout_4->addLayout(verticalLayout_11);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        btnAddDefaultCategory = new QPushButton(frame);
        btnAddDefaultCategory->setObjectName(QStringLiteral("btnAddDefaultCategory"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddDefaultCategory->sizePolicy().hasHeightForWidth());
        btnAddDefaultCategory->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddDefaultCategory->setIcon(icon);

        verticalLayout_6->addWidget(btnAddDefaultCategory);

        btnNewCategory = new QPushButton(frame);
        btnNewCategory->setObjectName(QStringLiteral("btnNewCategory"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewCategory->setIcon(icon1);

        verticalLayout_6->addWidget(btnNewCategory);

        btnRemoveCategory = new QPushButton(frame);
        btnRemoveCategory->setObjectName(QStringLiteral("btnRemoveCategory"));
        sizePolicy2.setHeightForWidth(btnRemoveCategory->sizePolicy().hasHeightForWidth());
        btnRemoveCategory->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveCategory->setIcon(icon2);

        verticalLayout_6->addWidget(btnRemoveCategory);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_22 = new QLabel(frame);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_12->addWidget(label_22);

        listCategories = new QListView(frame);
        listCategories->setObjectName(QStringLiteral("listCategories"));
        listCategories->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_12->addWidget(listCategories);


        horizontalLayout_4->addLayout(verticalLayout_12);


        verticalLayout_14->addWidget(frame);

        tabWidget->addTab(tabCategoriesDialog, QString());
        tabKeywordsDialog = new QWidget();
        tabKeywordsDialog->setObjectName(QStringLiteral("tabKeywordsDialog"));
        verticalLayout_2 = new QVBoxLayout(tabKeywordsDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelKeywords = new QLabel(tabKeywordsDialog);
        labelKeywords->setObjectName(QStringLiteral("labelKeywords"));
        labelKeywords->setText(QStringLiteral("<html><head/><body><p>Label text set in qgsmetadatawidget.cpp</p></body></html>"));
        labelKeywords->setWordWrap(true);
        labelKeywords->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(labelKeywords);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        btnAddVocabulary = new QPushButton(tabKeywordsDialog);
        btnAddVocabulary->setObjectName(QStringLiteral("btnAddVocabulary"));
        btnAddVocabulary->setIcon(icon1);
        btnAddVocabulary->setAutoDefault(false);

        horizontalLayout_5->addWidget(btnAddVocabulary);

        btnRemoveVocabulary = new QPushButton(tabKeywordsDialog);
        btnRemoveVocabulary->setObjectName(QStringLiteral("btnRemoveVocabulary"));
        btnRemoveVocabulary->setIcon(icon2);
        btnRemoveVocabulary->setAutoDefault(false);

        horizontalLayout_5->addWidget(btnRemoveVocabulary);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tabKeywords = new QTableWidget(tabKeywordsDialog);
        if (tabKeywords->columnCount() < 2)
            tabKeywords->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabKeywords->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabKeywords->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabKeywords->setObjectName(QStringLiteral("tabKeywords"));
        tabKeywords->setAlternatingRowColors(true);
        tabKeywords->setSelectionMode(QAbstractItemView::SingleSelection);
        tabKeywords->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabKeywords->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tabKeywords);

        tabWidget->addTab(tabKeywordsDialog, QString());
        tabAccessDialog = new QWidget();
        tabAccessDialog->setObjectName(QStringLiteral("tabAccessDialog"));
        verticalLayout_3 = new QVBoxLayout(tabAccessDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(tabAccessDialog);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 800, 637));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_5 = new QLabel(scrollAreaWidgetContents_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_16->addWidget(label_5);

        label = new QLabel(scrollAreaWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_16->addWidget(label);

        lineEditFees = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditFees->setObjectName(QStringLiteral("lineEditFees"));

        verticalLayout_16->addWidget(lineEditFees);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(scrollAreaWidgetContents_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btnAddLicence = new QPushButton(scrollAreaWidgetContents_3);
        btnAddLicence->setObjectName(QStringLiteral("btnAddLicence"));
        btnAddLicence->setIcon(icon1);

        horizontalLayout_6->addWidget(btnAddLicence);

        btnRemoveLicence = new QPushButton(scrollAreaWidgetContents_3);
        btnRemoveLicence->setObjectName(QStringLiteral("btnRemoveLicence"));
        btnRemoveLicence->setIcon(icon2);

        horizontalLayout_6->addWidget(btnRemoveLicence);


        verticalLayout_16->addLayout(horizontalLayout_6);

        tabLicenses = new QTableWidget(scrollAreaWidgetContents_3);
        if (tabLicenses->columnCount() < 1)
            tabLicenses->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabLicenses->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        tabLicenses->setObjectName(QStringLiteral("tabLicenses"));
        tabLicenses->setSelectionMode(QAbstractItemView::SingleSelection);
        tabLicenses->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabLicenses->horizontalHeader()->setVisible(false);
        tabLicenses->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_16->addWidget(tabLicenses);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_26 = new QLabel(scrollAreaWidgetContents_3);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_9->addWidget(label_26);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        btnAddRight = new QPushButton(scrollAreaWidgetContents_3);
        btnAddRight->setObjectName(QStringLiteral("btnAddRight"));
        btnAddRight->setIcon(icon1);

        horizontalLayout_9->addWidget(btnAddRight);

        btnRemoveRight = new QPushButton(scrollAreaWidgetContents_3);
        btnRemoveRight->setObjectName(QStringLiteral("btnRemoveRight"));
        btnRemoveRight->setIcon(icon2);

        horizontalLayout_9->addWidget(btnRemoveRight);


        verticalLayout_16->addLayout(horizontalLayout_9);

        listRights = new QListView(scrollAreaWidgetContents_3);
        listRights->setObjectName(QStringLiteral("listRights"));

        verticalLayout_16->addWidget(listRights);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_29 = new QLabel(scrollAreaWidgetContents_3);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_11->addWidget(label_29);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        btnAddConstraint = new QPushButton(scrollAreaWidgetContents_3);
        btnAddConstraint->setObjectName(QStringLiteral("btnAddConstraint"));
        btnAddConstraint->setIcon(icon1);

        horizontalLayout_11->addWidget(btnAddConstraint);

        btnRemoveConstraint = new QPushButton(scrollAreaWidgetContents_3);
        btnRemoveConstraint->setObjectName(QStringLiteral("btnRemoveConstraint"));
        btnRemoveConstraint->setIcon(icon2);

        horizontalLayout_11->addWidget(btnRemoveConstraint);


        verticalLayout_16->addLayout(horizontalLayout_11);

        tabConstraints = new QTableView(scrollAreaWidgetContents_3);
        tabConstraints->setObjectName(QStringLiteral("tabConstraints"));
        tabConstraints->setSelectionMode(QAbstractItemView::SingleSelection);
        tabConstraints->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabConstraints->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_16->addWidget(tabConstraints);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_2);

        tabWidget->addTab(tabAccessDialog, QString());
        tabExtentDialog = new QWidget();
        tabExtentDialog->setObjectName(QStringLiteral("tabExtentDialog"));
        verticalLayout_9 = new QVBoxLayout(tabExtentDialog);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(tabExtentDialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_9->addWidget(label_9);

        groupBox = new QgsCollapsibleGroupBox(tabExtentDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblCurrentCrs = new QLabel(groupBox);
        lblCurrentCrs->setObjectName(QStringLiteral("lblCurrentCrs"));
        lblCurrentCrs->setText(QStringLiteral("CRS label set in cpp code"));

        horizontalLayout_7->addWidget(lblCurrentCrs);

        btnSetCrsFromLayer = new QPushButton(groupBox);
        btnSetCrsFromLayer->setObjectName(QStringLiteral("btnSetCrsFromLayer"));
        sizePolicy2.setHeightForWidth(btnSetCrsFromLayer->sizePolicy().hasHeightForWidth());
        btnSetCrsFromLayer->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(btnSetCrsFromLayer);

        btnSetCrsFromProvider = new QPushButton(groupBox);
        btnSetCrsFromProvider->setObjectName(QStringLiteral("btnSetCrsFromProvider"));
        sizePolicy2.setHeightForWidth(btnSetCrsFromProvider->sizePolicy().hasHeightForWidth());
        btnSetCrsFromProvider->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(btnSetCrsFromProvider);


        verticalLayout_8->addLayout(horizontalLayout_7);

        lblCurrentCrsStatus = new QLabel(groupBox);
        lblCurrentCrsStatus->setObjectName(QStringLiteral("lblCurrentCrsStatus"));
        lblCurrentCrsStatus->setText(QStringLiteral("CRS status set in cpp code"));

        verticalLayout_8->addWidget(lblCurrentCrsStatus);


        verticalLayout_9->addWidget(groupBox);

        spatialExtentSelector = new QgsExtentGroupBox(tabExtentDialog);
        spatialExtentSelector->setObjectName(QStringLiteral("spatialExtentSelector"));

        verticalLayout_9->addWidget(spatialExtentSelector);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_32 = new QLabel(tabExtentDialog);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_14->addWidget(label_32);

        spinBoxZMaximum = new QgsSpinBox(tabExtentDialog);
        spinBoxZMaximum->setObjectName(QStringLiteral("spinBoxZMaximum"));

        horizontalLayout_14->addWidget(spinBoxZMaximum);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_31 = new QLabel(tabExtentDialog);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_13->addWidget(label_31);

        spinBoxZMinimum = new QgsSpinBox(tabExtentDialog);
        spinBoxZMinimum->setObjectName(QStringLiteral("spinBoxZMinimum"));

        horizontalLayout_13->addWidget(spinBoxZMinimum);


        verticalLayout_9->addLayout(horizontalLayout_13);

        label_35 = new QLabel(tabExtentDialog);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_9->addWidget(label_35);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_33 = new QLabel(tabExtentDialog);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_15->addWidget(label_33);

        dateTimeFrom = new QgsDateTimeEdit(tabExtentDialog);
        dateTimeFrom->setObjectName(QStringLiteral("dateTimeFrom"));

        horizontalLayout_15->addWidget(dateTimeFrom);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_34 = new QLabel(tabExtentDialog);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_16->addWidget(label_34);

        dateTimeTo = new QgsDateTimeEdit(tabExtentDialog);
        dateTimeTo->setObjectName(QStringLiteral("dateTimeTo"));

        horizontalLayout_16->addWidget(dateTimeTo);


        verticalLayout_9->addLayout(horizontalLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        tabWidget->addTab(tabExtentDialog, QString());
        tabContactsDialog = new QWidget();
        tabContactsDialog->setObjectName(QStringLiteral("tabContactsDialog"));
        verticalLayout_10 = new QVBoxLayout(tabContactsDialog);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        mLabelContact = new QLabel(tabContactsDialog);
        mLabelContact->setObjectName(QStringLiteral("mLabelContact"));
        mLabelContact->setText(QStringLiteral("Label text set in qgsmetadatawidget.cpp"));

        verticalLayout_10->addWidget(mLabelContact);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        panelDetails = new QScrollArea(tabContactsDialog);
        panelDetails->setObjectName(QStringLiteral("panelDetails"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(panelDetails->sizePolicy().hasHeightForWidth());
        panelDetails->setSizePolicy(sizePolicy3);
        panelDetails->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 778, 592));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditContactPosition = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactPosition->setObjectName(QStringLiteral("lineEditContactPosition"));

        gridLayout_2->addWidget(lineEditContactPosition, 3, 2, 1, 2);

        lineEditContactName = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactName->setObjectName(QStringLiteral("lineEditContactName"));

        gridLayout_2->addWidget(lineEditContactName, 0, 2, 1, 2);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        lineEditContactOrganization = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactOrganization->setObjectName(QStringLiteral("lineEditContactOrganization"));

        gridLayout_2->addWidget(lineEditContactOrganization, 2, 2, 1, 2);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        lineEditContactVoice = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactVoice->setObjectName(QStringLiteral("lineEditContactVoice"));

        gridLayout_2->addWidget(lineEditContactVoice, 5, 2, 1, 2);

        lineEditContactFax = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactFax->setObjectName(QStringLiteral("lineEditContactFax"));

        gridLayout_2->addWidget(lineEditContactFax, 6, 2, 1, 2);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 6, 0, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        comboContactRole = new QComboBox(scrollAreaWidgetContents);
        comboContactRole->addItem(QString());
        comboContactRole->addItem(QStringLiteral("custodian"));
        comboContactRole->addItem(QStringLiteral("distributor"));
        comboContactRole->addItem(QStringLiteral("owner"));
        comboContactRole->setObjectName(QStringLiteral("comboContactRole"));
        comboContactRole->setEditable(true);

        gridLayout_2->addWidget(comboContactRole, 1, 2, 1, 2);

        lineEditContactEmail = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactEmail->setObjectName(QStringLiteral("lineEditContactEmail"));

        gridLayout_2->addWidget(lineEditContactEmail, 4, 2, 1, 2);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 5, 0, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_2->addWidget(label_21, 7, 0, 1, 1);

        tabAddresses = new QTableWidget(scrollAreaWidgetContents);
        if (tabAddresses->columnCount() < 6)
            tabAddresses->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        tabAddresses->setObjectName(QStringLiteral("tabAddresses"));
        tabAddresses->setSelectionMode(QAbstractItemView::SingleSelection);
        tabAddresses->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabAddresses->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tabAddresses, 8, 0, 1, 4);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        btnAddAddress = new QPushButton(scrollAreaWidgetContents);
        btnAddAddress->setObjectName(QStringLiteral("btnAddAddress"));
        btnAddAddress->setIcon(icon1);

        horizontalLayout_10->addWidget(btnAddAddress);

        btnRemoveAddress = new QPushButton(scrollAreaWidgetContents);
        btnRemoveAddress->setObjectName(QStringLiteral("btnRemoveAddress"));
        btnRemoveAddress->setIcon(icon2);

        horizontalLayout_10->addWidget(btnRemoveAddress);


        gridLayout_2->addLayout(horizontalLayout_10, 7, 3, 1, 1);

        panelDetails->setWidget(scrollAreaWidgetContents);

        horizontalLayout_3->addWidget(panelDetails);


        verticalLayout_10->addLayout(horizontalLayout_3);

        tabWidget->addTab(tabContactsDialog, QString());
        tabLinksDialog = new QWidget();
        tabLinksDialog->setObjectName(QStringLiteral("tabLinksDialog"));
        verticalLayout_5 = new QVBoxLayout(tabLinksDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mLabelLinks = new QLabel(tabLinksDialog);
        mLabelLinks->setObjectName(QStringLiteral("mLabelLinks"));
        mLabelLinks->setText(QStringLiteral("Label text set in qgsmetadatawidget.cpp"));

        verticalLayout_5->addWidget(mLabelLinks);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnAddLink = new QPushButton(tabLinksDialog);
        btnAddLink->setObjectName(QStringLiteral("btnAddLink"));
        btnAddLink->setIcon(icon1);

        horizontalLayout_2->addWidget(btnAddLink);

        btnRemoveLink = new QPushButton(tabLinksDialog);
        btnRemoveLink->setObjectName(QStringLiteral("btnRemoveLink"));
        btnRemoveLink->setIcon(icon2);

        horizontalLayout_2->addWidget(btnRemoveLink);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tabLinks = new QTableView(tabLinksDialog);
        tabLinks->setObjectName(QStringLiteral("tabLinks"));
        tabLinks->setAlternatingRowColors(true);
        tabLinks->setSelectionMode(QAbstractItemView::SingleSelection);
        tabLinks->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabLinks->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(tabLinks);

        tabWidget->addTab(tabLinksDialog, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_17 = new QVBoxLayout(tab);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        mLabelHistory = new QLabel(tab);
        mLabelHistory->setObjectName(QStringLiteral("mLabelHistory"));
        mLabelHistory->setText(QStringLiteral("Label text set in qgsmetadatawidget.cpp"));
        mLabelHistory->setWordWrap(true);

        verticalLayout_17->addWidget(mLabelHistory);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        btnAddHistory = new QPushButton(tab);
        btnAddHistory->setObjectName(QStringLiteral("btnAddHistory"));
        btnAddHistory->setIcon(icon1);
        btnAddHistory->setAutoDefault(false);

        horizontalLayout_12->addWidget(btnAddHistory);

        btnRemoveHistory = new QPushButton(tab);
        btnRemoveHistory->setObjectName(QStringLiteral("btnRemoveHistory"));
        btnRemoveHistory->setIcon(icon2);
        btnRemoveHistory->setAutoDefault(false);

        horizontalLayout_12->addWidget(btnRemoveHistory);


        verticalLayout_17->addLayout(horizontalLayout_12);

        listHistory = new QListView(tab);
        listHistory->setObjectName(QStringLiteral("listHistory"));

        verticalLayout_17->addWidget(listHistory);

        tabWidget->addTab(tab, QString());
        tabValidationDialog = new QWidget();
        tabValidationDialog->setObjectName(QStringLiteral("tabValidationDialog"));
        verticalLayout_7 = new QVBoxLayout(tabValidationDialog);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_28 = new QLabel(tabValidationDialog);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_7->addWidget(label_28);

        resultsCheckMetadata = new QTextBrowser(tabValidationDialog);
        resultsCheckMetadata->setObjectName(QStringLiteral("resultsCheckMetadata"));

        verticalLayout_7->addWidget(resultsCheckMetadata);

        tabWidget->addTab(tabValidationDialog, QString());

        verticalLayout_4->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, lineEditParentId);
        QWidget::setTabOrder(lineEditParentId, comboEncoding);
        QWidget::setTabOrder(comboEncoding, lineEditIdentifier);
        QWidget::setTabOrder(lineEditIdentifier, btnAutoSource);
        QWidget::setTabOrder(btnAutoSource, lineEditTitle);
        QWidget::setTabOrder(lineEditTitle, comboType);
        QWidget::setTabOrder(comboType, mLineEditAuthor);
        QWidget::setTabOrder(mLineEditAuthor, mCreationDateTimeEdit);
        QWidget::setTabOrder(mCreationDateTimeEdit, comboLanguage);
        QWidget::setTabOrder(comboLanguage, textEditAbstract);
        QWidget::setTabOrder(textEditAbstract, btnAutoEncoding);
        QWidget::setTabOrder(btnAutoEncoding, listDefaultCategories);
        QWidget::setTabOrder(listDefaultCategories, btnAddDefaultCategory);
        QWidget::setTabOrder(btnAddDefaultCategory, btnNewCategory);
        QWidget::setTabOrder(btnNewCategory, btnRemoveCategory);
        QWidget::setTabOrder(btnRemoveCategory, listCategories);
        QWidget::setTabOrder(listCategories, btnAddVocabulary);
        QWidget::setTabOrder(btnAddVocabulary, btnRemoveVocabulary);
        QWidget::setTabOrder(btnRemoveVocabulary, tabKeywords);
        QWidget::setTabOrder(tabKeywords, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, lineEditFees);
        QWidget::setTabOrder(lineEditFees, btnAddLicence);
        QWidget::setTabOrder(btnAddLicence, btnRemoveLicence);
        QWidget::setTabOrder(btnRemoveLicence, tabLicenses);
        QWidget::setTabOrder(tabLicenses, btnAddRight);
        QWidget::setTabOrder(btnAddRight, btnRemoveRight);
        QWidget::setTabOrder(btnRemoveRight, listRights);
        QWidget::setTabOrder(listRights, btnAddConstraint);
        QWidget::setTabOrder(btnAddConstraint, btnRemoveConstraint);
        QWidget::setTabOrder(btnRemoveConstraint, tabConstraints);
        QWidget::setTabOrder(tabConstraints, btnSetCrsFromLayer);
        QWidget::setTabOrder(btnSetCrsFromLayer, btnSetCrsFromProvider);
        QWidget::setTabOrder(btnSetCrsFromProvider, spinBoxZMaximum);
        QWidget::setTabOrder(spinBoxZMaximum, spinBoxZMinimum);
        QWidget::setTabOrder(spinBoxZMinimum, dateTimeFrom);
        QWidget::setTabOrder(dateTimeFrom, dateTimeTo);
        QWidget::setTabOrder(dateTimeTo, panelDetails);
        QWidget::setTabOrder(panelDetails, lineEditContactName);
        QWidget::setTabOrder(lineEditContactName, comboContactRole);
        QWidget::setTabOrder(comboContactRole, lineEditContactOrganization);
        QWidget::setTabOrder(lineEditContactOrganization, lineEditContactPosition);
        QWidget::setTabOrder(lineEditContactPosition, lineEditContactEmail);
        QWidget::setTabOrder(lineEditContactEmail, lineEditContactVoice);
        QWidget::setTabOrder(lineEditContactVoice, lineEditContactFax);
        QWidget::setTabOrder(lineEditContactFax, btnAddAddress);
        QWidget::setTabOrder(btnAddAddress, btnRemoveAddress);
        QWidget::setTabOrder(btnRemoveAddress, tabAddresses);
        QWidget::setTabOrder(tabAddresses, btnAddLink);
        QWidget::setTabOrder(btnAddLink, btnRemoveLink);
        QWidget::setTabOrder(btnRemoveLink, tabLinks);
        QWidget::setTabOrder(tabLinks, btnAddHistory);
        QWidget::setTabOrder(btnAddHistory, btnRemoveHistory);
        QWidget::setTabOrder(btnRemoveHistory, listHistory);
        QWidget::setTabOrder(listHistory, resultsCheckMetadata);

        retranslateUi(QgsMetadataWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMetadataWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMetadataWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        label_27->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the parent resource that this resource is a part (child) of.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_27->setText(QApplication::translate("QgsMetadataWidgetBase", "Parent identifier", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditParentId->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the parent resource that this resource is a part (child) of.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the resource.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsMetadataWidgetBase", "Identifier", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditIdentifier->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the resource.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAutoSource->setText(QApplication::translate("QgsMetadataWidgetBase", "Set from Layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsMetadataWidgetBase", "Title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditTitle->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "While a formal vocabulary is not imposed, it is advised to use the ISO 19115 MD_ScopeCode values. E.g. 'dataset' or 'series'. If unsure about which type to select, use 'dataset'.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("QgsMetadataWidgetBase", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        comboType->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "While a formal vocabulary is not imposed, it is advised to use the ISO 19115 MD_ScopeCode values. E.g. 'dataset' or 'series'. If unsure about which type to select, use 'dataset'.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("QgsMetadataWidgetBase", "Creation date", Q_NULLPTR));
        mCreationDateTimeEdit->setDisplayFormat(QApplication::translate("QgsMetadataWidgetBase", "yyyy-MM-dd HH:mm:ss", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLineEditAuthor->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("QgsMetadataWidgetBase", "Author", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Usually the returned string will follow either the ISO 639.2 or ISO 3166 specifications, e.g. 'ENG' or 'SPA', however this is not a hard requirement and the caller must account for non compliant values.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("QgsMetadataWidgetBase", "Language", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        comboLanguage->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Usually the returned string will follow either the ISO 639.2 or ISO 3166 specifications, e.g. 'ENG' or 'SPA', however this is not a hard requirement and the caller must account for non compliant values.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Free-form description of the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("QgsMetadataWidgetBase", "Abstract", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        textEditAbstract->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Free-form description of the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_24->setText(QApplication::translate("QgsMetadataWidgetBase", "Encoding", Q_NULLPTR));
        btnAutoEncoding->setText(QApplication::translate("QgsMetadataWidgetBase", "Set from Layer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabIdentificationDialog), QApplication::translate("QgsMetadataWidgetBase", "Identification", Q_NULLPTR));
        label_23->setText(QApplication::translate("QgsMetadataWidgetBase", "ISO categories", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        listDefaultCategories->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Categories chosen will be added as a new entry in the keywords tab.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnAddDefaultCategory->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add selected ISO categories to metadata", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddDefaultCategory->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnNewCategory->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add a new custom category to the metadata", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNewCategory->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveCategory->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Remove selected categories from metadata", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveCategory->setText(QString());
        label_22->setText(QApplication::translate("QgsMetadataWidgetBase", "Chosen categories", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        listCategories->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Categories chosen will be added as a new entry in the keywords tab.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabCategoriesDialog), QApplication::translate("QgsMetadataWidgetBase", "Categories", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddVocabulary->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Adds a list of descriptive keywords for a specified vocabulary.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveVocabulary->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Removes a specified vocabulary.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = tabKeywords->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsMetadataWidgetBase", "Concept", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tabKeywords->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsMetadataWidgetBase", "Keywords", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabKeywords->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A set of descriptive keywords associated with the resource for a specified concept.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabKeywordsDialog), QApplication::translate("QgsMetadataWidgetBase", "Keywords", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsMetadataWidgetBase", "The fees, licences and rights for this dataset.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Any fees associated with using the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QgsMetadataWidgetBase", "Fees", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditFees->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Any fees associated with using the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A list of licenses associated with the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("QgsMetadataWidgetBase", "Licenses", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddLicence->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add license", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveLicence->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Remove license", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem2 = tabLicenses->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsMetadataWidgetBase", "Label", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabLicenses->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "A list of licenses associated with the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_26->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "List of attribution or copyright strings associated with the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_26->setText(QApplication::translate("QgsMetadataWidgetBase", "Rights (attribution or copyright)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddRight->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveRight->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Remove Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        listRights->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "List of attribution or copyright strings associated with the resource", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_29->setText(QApplication::translate("QgsMetadataWidgetBase", "Constraints", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddConstraint->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveConstraint->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Remove Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabAccessDialog), QApplication::translate("QgsMetadataWidgetBase", "Access", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsMetadataWidgetBase", "Coordinate Reference System and spatial extent for this dataset.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "The coordinate reference system described by the layer's metadata", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("QgsMetadataWidgetBase", "Coordinate Reference System", Q_NULLPTR));
        btnSetCrsFromLayer->setText(QApplication::translate("QgsMetadataWidgetBase", "Set CRS from Layer", Q_NULLPTR));
        btnSetCrsFromProvider->setText(QApplication::translate("QgsMetadataWidgetBase", "Set CRS from Provider", Q_NULLPTR));
        spatialExtentSelector->setTitle(QString());
        label_32->setText(QApplication::translate("QgsMetadataWidgetBase", "Z maximum", Q_NULLPTR));
        label_31->setText(QApplication::translate("QgsMetadataWidgetBase", "Z minimum", Q_NULLPTR));
        label_35->setText(QApplication::translate("QgsMetadataWidgetBase", "Temporal extent for this dataset.", Q_NULLPTR));
        label_33->setText(QApplication::translate("QgsMetadataWidgetBase", "From", Q_NULLPTR));
        label_34->setText(QApplication::translate("QgsMetadataWidgetBase", "To", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabExtentDialog), QApplication::translate("QgsMetadataWidgetBase", "Extent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditContactPosition->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Position/title of contact", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditContactName->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Name of contact", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_15->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Role of contact", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("QgsMetadataWidgetBase", "Role", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Position/title of contact", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("QgsMetadataWidgetBase", "Position", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditContactOrganization->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Organization contact belongs to/represents", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Name of contact", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("QgsMetadataWidgetBase", "Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditContactVoice->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Phone number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditContactFax->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Fax number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_20->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Fax number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("QgsMetadataWidgetBase", "Fax", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Organization contact belongs to/represents", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("QgsMetadataWidgetBase", "Organization", Q_NULLPTR));
        comboContactRole->setItemText(0, QString());

#ifndef QT_NO_TOOLTIP
        comboContactRole->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Role of contact", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditContactEmail->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Electronic mail address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_19->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Phone number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_19->setText(QApplication::translate("QgsMetadataWidgetBase", "Voice", Q_NULLPTR));
        label_21->setText(QApplication::translate("QgsMetadataWidgetBase", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tabAddresses->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsMetadataWidgetBase", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem3->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Type of address, e.g 'postal'", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem4 = tabAddresses->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsMetadataWidgetBase", "Address", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem4->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Free-form physical address component", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem5 = tabAddresses->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsMetadataWidgetBase", "Postal Code", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem5->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Postal (or ZIP) code", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem6 = tabAddresses->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsMetadataWidgetBase", "City", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem6->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "City or locality name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem7 = tabAddresses->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsMetadataWidgetBase", "Administrative Area", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem7->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Administrative area (state, province/territory, etc.)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem8 = tabAddresses->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("QgsMetadataWidgetBase", "Country", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem8->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Free-form country", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_18->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Electronic mail address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_18->setText(QApplication::translate("QgsMetadataWidgetBase", "Email", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddAddress->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveAddress->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Remove Address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabContactsDialog), QApplication::translate("QgsMetadataWidgetBase", "Contact", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLabelLinks->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "a list of online resources associated with the resource.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnAddLink->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Add link", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveLink->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Remove link", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tabLinks->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "a list of online resources associated with the resource.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabLinksDialog), QApplication::translate("QgsMetadataWidgetBase", "Links", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddHistory->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Adds a list of descriptive keywords for a specified vocabulary.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveHistory->setToolTip(QApplication::translate("QgsMetadataWidgetBase", "Removes a specified vocabulary.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsMetadataWidgetBase", "History", Q_NULLPTR));
        label_28->setText(QApplication::translate("QgsMetadataWidgetBase", "Validation is not enforced, but it's recommended to resolve any validation issues listed here.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabValidationDialog), QApplication::translate("QgsMetadataWidgetBase", "Validation", Q_NULLPTR));
        Q_UNUSED(QgsMetadataWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMetadataWidgetBase: public Ui_QgsMetadataWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMETADATAWIDGET_H
