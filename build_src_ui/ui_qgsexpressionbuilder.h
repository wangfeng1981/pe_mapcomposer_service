/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDER_H
#define UI_QGSEXPRESSIONBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorexpression.h"
#include "qgscodeeditorpython.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsexpressionpreviewwidget.h"
#include "qgsexpressiontreeview.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout;
    QFrame *frame1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *btnClearEditor;
    QToolButton *btnSaveExpression;
    QToolButton *btnEditExpression;
    QToolButton *btnRemoveExpression;
    QToolButton *btnImportExpressions;
    QToolButton *btnExportExpressions;
    QSpacerItem *horizontalSpacer_3;
    QgsCodeEditorExpression *txtExpressionString;
    QFrame *mOperatorsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEqualPushButton;
    QPushButton *btnPlusPushButton;
    QPushButton *btnMinusPushButton;
    QPushButton *btnDividePushButton;
    QPushButton *btnMultiplyPushButton;
    QPushButton *btnExpButton;
    QPushButton *btnConcatButton;
    QPushButton *btnOpenBracketPushButton;
    QPushButton *btnCloseBracketPushButton;
    QPushButton *btnNewLinePushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QFrame *mExpectedOutputFrame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *lblExpected;
    QgsExpressionPreviewWidget *mExpressionPreviewWidget;
    QFrame *mOperationListGroup;
    QGridLayout *gridLayout_6;
    QSplitter *functionsplit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_9;
    QgsExpressionTreeView *mExpressionTreeView;
    QPushButton *mShowHelpButton;
    QgsFilterLineEdit *txtSearchEdit;
    QWidget *mHelpAndValuesWidget;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *txtHelpText;
    QFrame *mValueGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnLoadAll;
    QPushButton *btnLoadSample;
    QgsFilterLineEdit *txtSearchEditValues;
    QListView *mValuesListView;
    QCheckBox *cbxValuesInUse;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *editorSplit;
    QWidget *widget3;
    QGridLayout *gridLayout_7;
    QListWidget *cmbFileNames;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnNewFile;
    QPushButton *btnRemoveFile;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QgsCodeEditorPython *txtPython;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblAutoSave;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnRun;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QgsCodeEditorPython *mFunctionBuilderHelp;

    void setupUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        if (QgsExpressionBuilderWidgetBase->objectName().isEmpty())
            QgsExpressionBuilderWidgetBase->setObjectName(QStringLiteral("QgsExpressionBuilderWidgetBase"));
        QgsExpressionBuilderWidgetBase->resize(989, 519);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExpressionBuilderWidgetBase->sizePolicy().hasHeightForWidth());
        QgsExpressionBuilderWidgetBase->setSizePolicy(sizePolicy);
        QgsExpressionBuilderWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(QgsExpressionBuilderWidgetBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QgsExpressionBuilderWidgetBase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(tab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(4);
        splitter->setChildrenCollapsible(false);
        layoutWidget_1 = new QWidget(splitter);
        layoutWidget_1->setObjectName(QStringLiteral("layoutWidget_1"));
        verticalLayout = new QVBoxLayout(layoutWidget_1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame1 = new QFrame(layoutWidget_1);
        frame1->setObjectName(QStringLiteral("frame1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy1);
        frame1->setMinimumSize(QSize(0, 0));
        frame1->setMaximumSize(QSize(16777215, 16777215));
        frame1->setBaseSize(QSize(0, 0));
        verticalLayout_6 = new QVBoxLayout(frame1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        frame_2 = new QFrame(frame1);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(1);
        horizontalLayout_11 = new QHBoxLayout(frame_2);
        horizontalLayout_11->setSpacing(2);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        btnClearEditor = new QToolButton(frame_2);
        btnClearEditor->setObjectName(QStringLiteral("btnClearEditor"));
        btnClearEditor->setEnabled(false);

        horizontalLayout_11->addWidget(btnClearEditor);

        btnSaveExpression = new QToolButton(frame_2);
        btnSaveExpression->setObjectName(QStringLiteral("btnSaveExpression"));
        btnSaveExpression->setEnabled(false);

        horizontalLayout_11->addWidget(btnSaveExpression);

        btnEditExpression = new QToolButton(frame_2);
        btnEditExpression->setObjectName(QStringLiteral("btnEditExpression"));
        btnEditExpression->setEnabled(false);

        horizontalLayout_11->addWidget(btnEditExpression);

        btnRemoveExpression = new QToolButton(frame_2);
        btnRemoveExpression->setObjectName(QStringLiteral("btnRemoveExpression"));
        btnRemoveExpression->setEnabled(false);

        horizontalLayout_11->addWidget(btnRemoveExpression);

        btnImportExpressions = new QToolButton(frame_2);
        btnImportExpressions->setObjectName(QStringLiteral("btnImportExpressions"));

        horizontalLayout_11->addWidget(btnImportExpressions);

        btnExportExpressions = new QToolButton(frame_2);
        btnExportExpressions->setObjectName(QStringLiteral("btnExportExpressions"));

        horizontalLayout_11->addWidget(btnExportExpressions);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);


        horizontalLayout_10->addWidget(frame_2);


        verticalLayout_6->addLayout(horizontalLayout_10);

        txtExpressionString = new QgsCodeEditorExpression(frame1);
        txtExpressionString->setObjectName(QStringLiteral("txtExpressionString"));

        verticalLayout_6->addWidget(txtExpressionString);

        mOperatorsGroupBox = new QFrame(frame1);
        mOperatorsGroupBox->setObjectName(QStringLiteral("mOperatorsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOperatorsGroupBox->sizePolicy().hasHeightForWidth());
        mOperatorsGroupBox->setSizePolicy(sizePolicy2);
        mOperatorsGroupBox->setMinimumSize(QSize(27, 0));
        mOperatorsGroupBox->setMaximumSize(QSize(300, 16777215));
        mOperatorsGroupBox->setSizeIncrement(QSize(20, 0));
        mOperatorsGroupBox->setBaseSize(QSize(7, 0));
        mOperatorsGroupBox->setLayoutDirection(Qt::LeftToRight);
        mOperatorsGroupBox->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(mOperatorsGroupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEqualPushButton = new QPushButton(mOperatorsGroupBox);
        btnEqualPushButton->setObjectName(QStringLiteral("btnEqualPushButton"));

        horizontalLayout_2->addWidget(btnEqualPushButton);

        btnPlusPushButton = new QPushButton(mOperatorsGroupBox);
        btnPlusPushButton->setObjectName(QStringLiteral("btnPlusPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnPlusPushButton->sizePolicy().hasHeightForWidth());
        btnPlusPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(btnPlusPushButton);

        btnMinusPushButton = new QPushButton(mOperatorsGroupBox);
        btnMinusPushButton->setObjectName(QStringLiteral("btnMinusPushButton"));

        horizontalLayout_2->addWidget(btnMinusPushButton);

        btnDividePushButton = new QPushButton(mOperatorsGroupBox);
        btnDividePushButton->setObjectName(QStringLiteral("btnDividePushButton"));

        horizontalLayout_2->addWidget(btnDividePushButton);

        btnMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        btnMultiplyPushButton->setObjectName(QStringLiteral("btnMultiplyPushButton"));

        horizontalLayout_2->addWidget(btnMultiplyPushButton);

        btnExpButton = new QPushButton(mOperatorsGroupBox);
        btnExpButton->setObjectName(QStringLiteral("btnExpButton"));

        horizontalLayout_2->addWidget(btnExpButton);

        btnConcatButton = new QPushButton(mOperatorsGroupBox);
        btnConcatButton->setObjectName(QStringLiteral("btnConcatButton"));

        horizontalLayout_2->addWidget(btnConcatButton);

        btnOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnOpenBracketPushButton->setObjectName(QStringLiteral("btnOpenBracketPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnOpenBracketPushButton->sizePolicy().hasHeightForWidth());
        btnOpenBracketPushButton->setSizePolicy(sizePolicy4);
        btnOpenBracketPushButton->setMinimumSize(QSize(0, 10));

        horizontalLayout_2->addWidget(btnOpenBracketPushButton);

        btnCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnCloseBracketPushButton->setObjectName(QStringLiteral("btnCloseBracketPushButton"));

        horizontalLayout_2->addWidget(btnCloseBracketPushButton);

        btnNewLinePushButton = new QPushButton(mOperatorsGroupBox);
        btnNewLinePushButton->setObjectName(QStringLiteral("btnNewLinePushButton"));

        horizontalLayout_2->addWidget(btnNewLinePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_6->addWidget(mOperatorsGroupBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 3, -1, -1);
        mExpectedOutputFrame = new QFrame(frame1);
        mExpectedOutputFrame->setObjectName(QStringLiteral("mExpectedOutputFrame"));
        horizontalLayout_7 = new QHBoxLayout(mExpectedOutputFrame);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(mExpectedOutputFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(label_3);

        lblExpected = new QLabel(mExpectedOutputFrame);
        lblExpected->setObjectName(QStringLiteral("lblExpected"));
        lblExpected->setWordWrap(true);
        lblExpected->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(lblExpected);


        gridLayout->addWidget(mExpectedOutputFrame, 0, 0, 1, 1);

        mExpressionPreviewWidget = new QgsExpressionPreviewWidget(frame1);
        mExpressionPreviewWidget->setObjectName(QStringLiteral("mExpressionPreviewWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mExpressionPreviewWidget->sizePolicy().hasHeightForWidth());
        mExpressionPreviewWidget->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(mExpressionPreviewWidget, 1, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        verticalLayout_6->setStretch(1, 1);

        verticalLayout->addWidget(frame1);

        splitter->addWidget(layoutWidget_1);
        mOperationListGroup = new QFrame(splitter);
        mOperationListGroup->setObjectName(QStringLiteral("mOperationListGroup"));
        gridLayout_6 = new QGridLayout(mOperationListGroup);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        functionsplit = new QSplitter(mOperationListGroup);
        functionsplit->setObjectName(QStringLiteral("functionsplit"));
        functionsplit->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(functionsplit);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        gridLayout_9 = new QGridLayout(layoutWidget1);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        mExpressionTreeView = new QgsExpressionTreeView(layoutWidget1);
        mExpressionTreeView->setObjectName(QStringLiteral("mExpressionTreeView"));
        mExpressionTreeView->setFrameShape(QFrame::StyledPanel);
        mExpressionTreeView->setFrameShadow(QFrame::Sunken);
        mExpressionTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mExpressionTreeView->setUniformRowHeights(false);
        mExpressionTreeView->setSortingEnabled(false);
        mExpressionTreeView->setAnimated(true);
        mExpressionTreeView->header()->setVisible(false);

        gridLayout_9->addWidget(mExpressionTreeView, 1, 0, 1, 2);

        mShowHelpButton = new QPushButton(layoutWidget1);
        mShowHelpButton->setObjectName(QStringLiteral("mShowHelpButton"));

        gridLayout_9->addWidget(mShowHelpButton, 0, 1, 1, 1);

        txtSearchEdit = new QgsFilterLineEdit(layoutWidget1);
        txtSearchEdit->setObjectName(QStringLiteral("txtSearchEdit"));
        txtSearchEdit->setEnabled(true);

        gridLayout_9->addWidget(txtSearchEdit, 0, 0, 1, 1);

        functionsplit->addWidget(layoutWidget1);
        mHelpAndValuesWidget = new QWidget(functionsplit);
        mHelpAndValuesWidget->setObjectName(QStringLiteral("mHelpAndValuesWidget"));
        mHelpAndValuesWidget->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(mHelpAndValuesWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 0, 0, 0);
        txtHelpText = new QTextBrowser(mHelpAndValuesWidget);
        txtHelpText->setObjectName(QStringLiteral("txtHelpText"));
        txtHelpText->setReadOnly(true);

        verticalLayout_2->addWidget(txtHelpText);

        mValueGroupBox = new QFrame(mHelpAndValuesWidget);
        mValueGroupBox->setObjectName(QStringLiteral("mValueGroupBox"));
        gridLayout_5 = new QGridLayout(mValueGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 10, 0, 0);
        label_4 = new QLabel(mValueGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy7);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        btnLoadAll = new QPushButton(mValueGroupBox);
        btnLoadAll->setObjectName(QStringLiteral("btnLoadAll"));

        horizontalLayout_8->addWidget(btnLoadAll);

        btnLoadSample = new QPushButton(mValueGroupBox);
        btnLoadSample->setObjectName(QStringLiteral("btnLoadSample"));

        horizontalLayout_8->addWidget(btnLoadSample);


        gridLayout_5->addLayout(horizontalLayout_8, 1, 0, 1, 2);

        txtSearchEditValues = new QgsFilterLineEdit(mValueGroupBox);
        txtSearchEditValues->setObjectName(QStringLiteral("txtSearchEditValues"));
        txtSearchEditValues->setEnabled(true);

        gridLayout_5->addWidget(txtSearchEditValues, 0, 1, 1, 1);

        mValuesListView = new QListView(mValueGroupBox);
        mValuesListView->setObjectName(QStringLiteral("mValuesListView"));
        mValuesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_5->addWidget(mValuesListView, 3, 0, 1, 2);

        cbxValuesInUse = new QCheckBox(mValueGroupBox);
        cbxValuesInUse->setObjectName(QStringLiteral("cbxValuesInUse"));

        gridLayout_5->addWidget(cbxValuesInUse, 2, 0, 1, 2);


        verticalLayout_2->addWidget(mValueGroupBox);

        functionsplit->addWidget(mHelpAndValuesWidget);

        gridLayout_6->addWidget(functionsplit, 0, 0, 1, 1);

        splitter->addWidget(mOperationListGroup);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        editorSplit = new QSplitter(tab_2);
        editorSplit->setObjectName(QStringLiteral("editorSplit"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(editorSplit->sizePolicy().hasHeightForWidth());
        editorSplit->setSizePolicy(sizePolicy8);
        editorSplit->setLineWidth(0);
        editorSplit->setMidLineWidth(0);
        editorSplit->setOrientation(Qt::Horizontal);
        editorSplit->setOpaqueResize(true);
        editorSplit->setHandleWidth(4);
        editorSplit->setChildrenCollapsible(false);
        widget3 = new QWidget(editorSplit);
        widget3->setObjectName(QStringLiteral("widget3"));
        sizePolicy7.setHeightForWidth(widget3->sizePolicy().hasHeightForWidth());
        widget3->setSizePolicy(sizePolicy7);
        gridLayout_7 = new QGridLayout(widget3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        cmbFileNames = new QListWidget(widget3);
        cmbFileNames->setObjectName(QStringLiteral("cmbFileNames"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(cmbFileNames->sizePolicy().hasHeightForWidth());
        cmbFileNames->setSizePolicy(sizePolicy9);
        cmbFileNames->setMinimumSize(QSize(0, 0));
        cmbFileNames->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_7->addWidget(cmbFileNames, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        btnNewFile = new QPushButton(widget3);
        btnNewFile->setObjectName(QStringLiteral("btnNewFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewFile->setIcon(icon);

        horizontalLayout_6->addWidget(btnNewFile);

        btnRemoveFile = new QPushButton(widget3);
        btnRemoveFile->setObjectName(QStringLiteral("btnRemoveFile"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveFile->setIcon(icon1);

        horizontalLayout_6->addWidget(btnRemoveFile);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout_7->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        editorSplit->addWidget(widget3);
        widget = new QWidget(editorSplit);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy10);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, -1, 1);
        txtPython = new QgsCodeEditorPython(widget);
        txtPython->setObjectName(QStringLiteral("txtPython"));

        verticalLayout_3->addWidget(txtPython);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        lblAutoSave = new QLabel(widget);
        lblAutoSave->setObjectName(QStringLiteral("lblAutoSave"));

        horizontalLayout_5->addWidget(lblAutoSave);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnRun = new QPushButton(widget);
        btnRun->setObjectName(QStringLiteral("btnRun"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRun->setIcon(icon2);

        horizontalLayout_5->addWidget(btnRun);


        verticalLayout_3->addLayout(horizontalLayout_5);

        groupBox = new QgsCollapsibleGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mFunctionBuilderHelp = new QgsCodeEditorPython(groupBox);
        mFunctionBuilderHelp->setObjectName(QStringLiteral("mFunctionBuilderHelp"));

        gridLayout_4->addWidget(mFunctionBuilderHelp, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        editorSplit->addWidget(widget);

        horizontalLayout_3->addWidget(editorSplit);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsExpressionBuilderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        btnClearEditor->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Clear the expression editor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnClearEditor->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSaveExpression->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Add current expression to user expressions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSaveExpression->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEditExpression->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Edit selected expression from user expressions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditExpression->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRemoveExpression->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Remove selected expression from user expressions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveExpression->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnImportExpressions->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Import User Expressions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnImportExpressions->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Import", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExportExpressions->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Export User Expressions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnExportExpressions->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Export", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEqualPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Equal operator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEqualPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "=", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnPlusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Addition operator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPlusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnMinusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Subtraction operator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnMinusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDividePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Division operator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDividePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "/", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnMultiplyPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Multiplication operator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnMultiplyPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "*", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExpButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Power operator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnExpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "^", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConcatButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "String Concatenation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConcatButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "||", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnOpenBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Open Bracket ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnOpenBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "(", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnCloseBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Close Bracket ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCloseBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", ")", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNewLinePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "New Line", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNewLinePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "'\\n'", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Expected format:", Q_NULLPTR));
        lblExpected->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Help text", Q_NULLPTR));
        mShowHelpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Show Help", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Values", Q_NULLPTR));
        btnLoadAll->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "All Unique", Q_NULLPTR));
        btnLoadSample->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "10 Samples", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxValuesInUse->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Only show values used in this layer and not all the possible values you could choose.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbxValuesInUse->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Only show values in use", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsExpressionBuilderWidgetBase", "Expression", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNewFile->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Create a new function file based on the template file.\n"
"\n"
"Change the name of the script and save to allow QGIS to auto load on startup.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNewFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveFile->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "<html><head/><body><p>Remove selected functions file.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveFile->setText(QString());
        lblAutoSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRun->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Run the current editor text in QGIS (also saves current script).\n"
"\n"
"Use this when testing your functions.\n"
"\n"
"Saved scripts are auto loaded on QGIS startup.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRun->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Save and Load Functions", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Help", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsExpressionBuilderWidgetBase", "Function Editor", Q_NULLPTR));
        Q_UNUSED(QgsExpressionBuilderWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderWidgetBase: public Ui_QgsExpressionBuilderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDER_H
