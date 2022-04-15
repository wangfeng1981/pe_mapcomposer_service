/********************************************************************************
** Form generated from reading UI file 'qgscodeditorsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCODEDITORSETTINGS_H
#define UI_QGSCODEDITORSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorcss.h"
#include "qgscodeeditorexpression.h"
#include "qgscodeeditorhtml.h"
#include "qgscodeeditorjs.h"
#include "qgscodeeditorpython.h"
#include "qgscodeeditorsql.h"
#include "qgscolorbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCodeEditorSettingsBase
{
public:
    QVBoxLayout *verticalLayout_6;
    QSplitter *mSplitter;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *mListLanguage;
    QStackedWidget *mPreviewStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QgsCodeEditorPython *mPythonPreview;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QgsCodeEditorExpression *mExpressionPreview;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QgsCodeEditorSQL *mSQLPreview;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QgsCodeEditorHTML *mHtmlPreview;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_4;
    QgsCodeEditorCSS *mCssPreview;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_5;
    QgsCodeEditorJavascript *mJsPreview;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *mOverrideFontGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFontComboBox *mFontComboBox;
    QLabel *label_3;
    QgsSpinBox *mSizeSpin;
    QGroupBox *groupBoxFontColor;
    QGridLayout *gridLayout_8;
    QgsColorButton *mColorMarginForeground;
    QLabel *label_19;
    QgsColorButton *mColorBraceForeground;
    QgsColorButton *mColorBraceBackground;
    QgsColorButton *mColorError;
    QgsColorButton *mColorQuotedOperator;
    QgsColorButton *mColorSelectionBackground;
    QgsColorButton *mColorFunction;
    QLabel *label_18;
    QgsColorButton *mColorComment;
    QgsColorButton *mColorQuotedIdentifier;
    QLabel *label_50;
    QgsColorButton *mColorCursor;
    QLabel *label_20;
    QgsColorButton *mColorSelectionForeground;
    QgsColorButton *mColorIdentifier;
    QLabel *label_25;
    QgsColorButton *mColorSingleQuote;
    QLabel *label_16;
    QgsColorButton *mColorTag;
    QgsColorButton *mColorBackground;
    QLabel *label_43;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_73;
    QgsColorButton *mColorNumber;
    QgsColorButton *mColorDecorator;
    QgsColorButton *mColorOperator;
    QgsColorButton *mColorFoldIconHalo;
    QgsColorButton *mColorFoldIcon;
    QgsColorButton *mColorKeyword;
    QLabel *label_32;
    QComboBox *mColorSchemeComboBox;
    QLabel *label_2;
    QLabel *label_26;
    QLabel *label_51;
    QLabel *label_30;
    QgsColorButton *mColorUnknownTag;
    QLabel *label_28;
    QLabel *label_14;
    QgsColorButton *mColorClass;
    QLabel *label_13;
    QgsColorButton *mColorTripleDoubleQuote;
    QLabel *label_15;
    QgsColorButton *mColorTripleSingleQuote;
    QLabel *label_27;
    QLabel *label_33;
    QLabel *label_52;
    QLabel *label_42;
    QLabel *label_29;
    QgsColorButton *mColorCommentBlock;
    QgsColorButton *mColorDoubleQuote;
    QLabel *label_17;
    QLabel *label_24;
    QgsColorButton *mColorDefault;
    QLabel *label_31;
    QgsColorButton *mColorMarginBackground;
    QLabel *label_60;
    QLabel *label_55;
    QLabel *label_23;
    QLabel *label_22;
    QgsColorButton *mColorCaretLine;
    QLabel *label_39;
    QgsColorButton *mColorFold;
    QLabel *label_40;
    QgsColorButton *mColorEdge;
    QLabel *label_38;
    QgsColorButton *mColorIndentation;
    QLabel *label_21;
    QgsColorButton *mColorCommentLine;
    QLabel *label_34;
    QgsColorButton *mColorErrorBackground;

    void setupUi(QWidget *QgsCodeEditorSettingsBase)
    {
        if (QgsCodeEditorSettingsBase->objectName().isEmpty())
            QgsCodeEditorSettingsBase->setObjectName(QStringLiteral("QgsCodeEditorSettingsBase"));
        QgsCodeEditorSettingsBase->setProperty("modal", QVariant(false));
        QgsCodeEditorSettingsBase->resize(677, 827);
        verticalLayout_6 = new QVBoxLayout(QgsCodeEditorSettingsBase);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mSplitter = new QSplitter(QgsCodeEditorSettingsBase);
        mSplitter->setObjectName(QStringLiteral("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(mSplitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mListLanguage = new QListWidget(groupBox);
        mListLanguage->setObjectName(QStringLiteral("mListLanguage"));

        horizontalLayout->addWidget(mListLanguage);

        mPreviewStackedWidget = new QStackedWidget(groupBox);
        mPreviewStackedWidget->setObjectName(QStringLiteral("mPreviewStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mPythonPreview = new QgsCodeEditorPython(page);
        mPythonPreview->setObjectName(QStringLiteral("mPythonPreview"));
        mPythonPreview->setMinimumSize(QSize(0, 100));

        horizontalLayout_3->addWidget(mPythonPreview);

        mPreviewStackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mExpressionPreview = new QgsCodeEditorExpression(page_3);
        mExpressionPreview->setObjectName(QStringLiteral("mExpressionPreview"));
        mExpressionPreview->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(mExpressionPreview);

        mPreviewStackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSQLPreview = new QgsCodeEditorSQL(page_2);
        mSQLPreview->setObjectName(QStringLiteral("mSQLPreview"));
        mSQLPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(mSQLPreview);

        mPreviewStackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mHtmlPreview = new QgsCodeEditorHTML(page_4);
        mHtmlPreview->setObjectName(QStringLiteral("mHtmlPreview"));
        mHtmlPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_3->addWidget(mHtmlPreview);

        mPreviewStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_4 = new QVBoxLayout(page_5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mCssPreview = new QgsCodeEditorCSS(page_5);
        mCssPreview->setObjectName(QStringLiteral("mCssPreview"));
        mCssPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_4->addWidget(mCssPreview);

        mPreviewStackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_5 = new QVBoxLayout(page_6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mJsPreview = new QgsCodeEditorJavascript(page_6);
        mJsPreview->setObjectName(QStringLiteral("mJsPreview"));
        mJsPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_5->addWidget(mJsPreview);

        mPreviewStackedWidget->addWidget(page_6);

        horizontalLayout->addWidget(mPreviewStackedWidget);

        horizontalLayout->setStretch(1, 1);
        mSplitter->addWidget(groupBox);
        scrollArea = new QScrollArea(mSplitter);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 663, 549));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mOverrideFontGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mOverrideFontGroupBox->setObjectName(QStringLiteral("mOverrideFontGroupBox"));
        mOverrideFontGroupBox->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(mOverrideFontGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(mOverrideFontGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        mFontComboBox = new QFontComboBox(mOverrideFontGroupBox);
        mFontComboBox->setObjectName(QStringLiteral("mFontComboBox"));
        mFontComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(mFontComboBox);

        label_3 = new QLabel(mOverrideFontGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mSizeSpin = new QgsSpinBox(mOverrideFontGroupBox);
        mSizeSpin->setObjectName(QStringLiteral("mSizeSpin"));
        mSizeSpin->setMinimum(6);
        mSizeSpin->setMaximum(99);
        mSizeSpin->setValue(10);

        horizontalLayout_2->addWidget(mSizeSpin);

        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(3, 1);

        gridLayout->addWidget(mOverrideFontGroupBox, 0, 0, 1, 1);

        groupBoxFontColor = new QGroupBox(scrollAreaWidgetContents);
        groupBoxFontColor->setObjectName(QStringLiteral("groupBoxFontColor"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxFontColor->sizePolicy().hasHeightForWidth());
        groupBoxFontColor->setSizePolicy(sizePolicy);
        groupBoxFontColor->setProperty("collapsed", QVariant(false));
        groupBoxFontColor->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_8 = new QGridLayout(groupBoxFontColor);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        mColorMarginForeground = new QgsColorButton(groupBoxFontColor);
        mColorMarginForeground->setObjectName(QStringLiteral("mColorMarginForeground"));

        gridLayout_8->addWidget(mColorMarginForeground, 9, 3, 1, 1);

        label_19 = new QLabel(groupBoxFontColor);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_8->addWidget(label_19, 6, 0, 1, 1);

        mColorBraceForeground = new QgsColorButton(groupBoxFontColor);
        mColorBraceForeground->setObjectName(QStringLiteral("mColorBraceForeground"));

        gridLayout_8->addWidget(mColorBraceForeground, 11, 3, 1, 1);

        mColorBraceBackground = new QgsColorButton(groupBoxFontColor);
        mColorBraceBackground->setObjectName(QStringLiteral("mColorBraceBackground"));

        gridLayout_8->addWidget(mColorBraceBackground, 11, 1, 1, 1);

        mColorError = new QgsColorButton(groupBoxFontColor);
        mColorError->setObjectName(QStringLiteral("mColorError"));

        gridLayout_8->addWidget(mColorError, 5, 5, 1, 1);

        mColorQuotedOperator = new QgsColorButton(groupBoxFontColor);
        mColorQuotedOperator->setObjectName(QStringLiteral("mColorQuotedOperator"));

        gridLayout_8->addWidget(mColorQuotedOperator, 3, 3, 1, 1);

        mColorSelectionBackground = new QgsColorButton(groupBoxFontColor);
        mColorSelectionBackground->setObjectName(QStringLiteral("mColorSelectionBackground"));

        gridLayout_8->addWidget(mColorSelectionBackground, 10, 1, 1, 1);

        mColorFunction = new QgsColorButton(groupBoxFontColor);
        mColorFunction->setObjectName(QStringLiteral("mColorFunction"));

        gridLayout_8->addWidget(mColorFunction, 2, 1, 1, 1);

        label_18 = new QLabel(groupBoxFontColor);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_8->addWidget(label_18, 4, 4, 1, 1);

        mColorComment = new QgsColorButton(groupBoxFontColor);
        mColorComment->setObjectName(QStringLiteral("mColorComment"));

        gridLayout_8->addWidget(mColorComment, 6, 1, 1, 1);

        mColorQuotedIdentifier = new QgsColorButton(groupBoxFontColor);
        mColorQuotedIdentifier->setObjectName(QStringLiteral("mColorQuotedIdentifier"));

        gridLayout_8->addWidget(mColorQuotedIdentifier, 4, 3, 1, 1);

        label_50 = new QLabel(groupBoxFontColor);
        label_50->setObjectName(QStringLiteral("label_50"));

        gridLayout_8->addWidget(label_50, 11, 0, 1, 1);

        mColorCursor = new QgsColorButton(groupBoxFontColor);
        mColorCursor->setObjectName(QStringLiteral("mColorCursor"));

        gridLayout_8->addWidget(mColorCursor, 1, 5, 1, 1);

        label_20 = new QLabel(groupBoxFontColor);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_8->addWidget(label_20, 6, 2, 1, 1);

        mColorSelectionForeground = new QgsColorButton(groupBoxFontColor);
        mColorSelectionForeground->setObjectName(QStringLiteral("mColorSelectionForeground"));

        gridLayout_8->addWidget(mColorSelectionForeground, 10, 3, 1, 1);

        mColorIdentifier = new QgsColorButton(groupBoxFontColor);
        mColorIdentifier->setObjectName(QStringLiteral("mColorIdentifier"));

        gridLayout_8->addWidget(mColorIdentifier, 4, 1, 1, 1);

        label_25 = new QLabel(groupBoxFontColor);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_8->addWidget(label_25, 3, 2, 1, 1);

        mColorSingleQuote = new QgsColorButton(groupBoxFontColor);
        mColorSingleQuote->setObjectName(QStringLiteral("mColorSingleQuote"));

        gridLayout_8->addWidget(mColorSingleQuote, 7, 1, 1, 1);

        label_16 = new QLabel(groupBoxFontColor);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_8->addWidget(label_16, 1, 0, 1, 1);

        mColorTag = new QgsColorButton(groupBoxFontColor);
        mColorTag->setObjectName(QStringLiteral("mColorTag"));

        gridLayout_8->addWidget(mColorTag, 5, 1, 1, 1);

        mColorBackground = new QgsColorButton(groupBoxFontColor);
        mColorBackground->setObjectName(QStringLiteral("mColorBackground"));

        gridLayout_8->addWidget(mColorBackground, 1, 3, 1, 1);

        label_43 = new QLabel(groupBoxFontColor);
        label_43->setObjectName(QStringLiteral("label_43"));

        gridLayout_8->addWidget(label_43, 9, 2, 1, 1);

        label_48 = new QLabel(groupBoxFontColor);
        label_48->setObjectName(QStringLiteral("label_48"));

        gridLayout_8->addWidget(label_48, 10, 0, 1, 1);

        label_49 = new QLabel(groupBoxFontColor);
        label_49->setObjectName(QStringLiteral("label_49"));

        gridLayout_8->addWidget(label_49, 10, 2, 1, 1);

        label_73 = new QLabel(groupBoxFontColor);
        label_73->setObjectName(QStringLiteral("label_73"));

        gridLayout_8->addWidget(label_73, 5, 2, 1, 1);

        mColorNumber = new QgsColorButton(groupBoxFontColor);
        mColorNumber->setObjectName(QStringLiteral("mColorNumber"));

        gridLayout_8->addWidget(mColorNumber, 3, 5, 1, 1);

        mColorDecorator = new QgsColorButton(groupBoxFontColor);
        mColorDecorator->setObjectName(QStringLiteral("mColorDecorator"));

        gridLayout_8->addWidget(mColorDecorator, 4, 5, 1, 1);

        mColorOperator = new QgsColorButton(groupBoxFontColor);
        mColorOperator->setObjectName(QStringLiteral("mColorOperator"));

        gridLayout_8->addWidget(mColorOperator, 3, 1, 1, 1);

        mColorFoldIconHalo = new QgsColorButton(groupBoxFontColor);
        mColorFoldIconHalo->setObjectName(QStringLiteral("mColorFoldIconHalo"));

        gridLayout_8->addWidget(mColorFoldIconHalo, 12, 3, 1, 1);

        mColorFoldIcon = new QgsColorButton(groupBoxFontColor);
        mColorFoldIcon->setObjectName(QStringLiteral("mColorFoldIcon"));

        gridLayout_8->addWidget(mColorFoldIcon, 12, 1, 1, 1);

        mColorKeyword = new QgsColorButton(groupBoxFontColor);
        mColorKeyword->setObjectName(QStringLiteral("mColorKeyword"));

        gridLayout_8->addWidget(mColorKeyword, 2, 3, 1, 1);

        label_32 = new QLabel(groupBoxFontColor);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_8->addWidget(label_32, 4, 2, 1, 1);

        mColorSchemeComboBox = new QComboBox(groupBoxFontColor);
        mColorSchemeComboBox->setObjectName(QStringLiteral("mColorSchemeComboBox"));

        gridLayout_8->addWidget(mColorSchemeComboBox, 0, 1, 1, 5);

        label_2 = new QLabel(groupBoxFontColor);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);

        label_26 = new QLabel(groupBoxFontColor);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_8->addWidget(label_26, 2, 4, 1, 1);

        label_51 = new QLabel(groupBoxFontColor);
        label_51->setObjectName(QStringLiteral("label_51"));

        gridLayout_8->addWidget(label_51, 12, 0, 1, 1);

        label_30 = new QLabel(groupBoxFontColor);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_8->addWidget(label_30, 8, 2, 1, 1);

        mColorUnknownTag = new QgsColorButton(groupBoxFontColor);
        mColorUnknownTag->setObjectName(QStringLiteral("mColorUnknownTag"));

        gridLayout_8->addWidget(mColorUnknownTag, 5, 3, 1, 1);

        label_28 = new QLabel(groupBoxFontColor);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_8->addWidget(label_28, 7, 0, 1, 1);

        label_14 = new QLabel(groupBoxFontColor);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 5, 4, 1, 1);

        mColorClass = new QgsColorButton(groupBoxFontColor);
        mColorClass->setObjectName(QStringLiteral("mColorClass"));

        gridLayout_8->addWidget(mColorClass, 2, 5, 1, 1);

        label_13 = new QLabel(groupBoxFontColor);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_8->addWidget(label_13, 2, 0, 1, 1);

        mColorTripleDoubleQuote = new QgsColorButton(groupBoxFontColor);
        mColorTripleDoubleQuote->setObjectName(QStringLiteral("mColorTripleDoubleQuote"));

        gridLayout_8->addWidget(mColorTripleDoubleQuote, 8, 3, 1, 1);

        label_15 = new QLabel(groupBoxFontColor);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_8->addWidget(label_15, 1, 2, 1, 1);

        mColorTripleSingleQuote = new QgsColorButton(groupBoxFontColor);
        mColorTripleSingleQuote->setObjectName(QStringLiteral("mColorTripleSingleQuote"));

        gridLayout_8->addWidget(mColorTripleSingleQuote, 8, 1, 1, 1);

        label_27 = new QLabel(groupBoxFontColor);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_8->addWidget(label_27, 4, 0, 1, 1);

        label_33 = new QLabel(groupBoxFontColor);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_8->addWidget(label_33, 5, 0, 1, 1);

        label_52 = new QLabel(groupBoxFontColor);
        label_52->setObjectName(QStringLiteral("label_52"));

        gridLayout_8->addWidget(label_52, 12, 2, 1, 1);

        label_42 = new QLabel(groupBoxFontColor);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayout_8->addWidget(label_42, 9, 0, 1, 1);

        label_29 = new QLabel(groupBoxFontColor);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_8->addWidget(label_29, 8, 0, 1, 1);

        mColorCommentBlock = new QgsColorButton(groupBoxFontColor);
        mColorCommentBlock->setObjectName(QStringLiteral("mColorCommentBlock"));

        gridLayout_8->addWidget(mColorCommentBlock, 6, 3, 1, 1);

        mColorDoubleQuote = new QgsColorButton(groupBoxFontColor);
        mColorDoubleQuote->setObjectName(QStringLiteral("mColorDoubleQuote"));

        gridLayout_8->addWidget(mColorDoubleQuote, 7, 3, 1, 1);

        label_17 = new QLabel(groupBoxFontColor);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_8->addWidget(label_17, 2, 2, 1, 1);

        label_24 = new QLabel(groupBoxFontColor);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_8->addWidget(label_24, 1, 4, 1, 1);

        mColorDefault = new QgsColorButton(groupBoxFontColor);
        mColorDefault->setObjectName(QStringLiteral("mColorDefault"));

        gridLayout_8->addWidget(mColorDefault, 1, 1, 1, 1);

        label_31 = new QLabel(groupBoxFontColor);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_8->addWidget(label_31, 7, 2, 1, 1);

        mColorMarginBackground = new QgsColorButton(groupBoxFontColor);
        mColorMarginBackground->setObjectName(QStringLiteral("mColorMarginBackground"));

        gridLayout_8->addWidget(mColorMarginBackground, 9, 1, 1, 1);

        label_60 = new QLabel(groupBoxFontColor);
        label_60->setObjectName(QStringLiteral("label_60"));

        gridLayout_8->addWidget(label_60, 11, 2, 1, 1);

        label_55 = new QLabel(groupBoxFontColor);
        label_55->setObjectName(QStringLiteral("label_55"));

        gridLayout_8->addWidget(label_55, 3, 4, 1, 1);

        label_23 = new QLabel(groupBoxFontColor);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_8->addWidget(label_23, 3, 0, 1, 1);

        label_22 = new QLabel(groupBoxFontColor);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_8->addWidget(label_22, 11, 4, 1, 1);

        mColorCaretLine = new QgsColorButton(groupBoxFontColor);
        mColorCaretLine->setObjectName(QStringLiteral("mColorCaretLine"));

        gridLayout_8->addWidget(mColorCaretLine, 11, 5, 1, 1);

        label_39 = new QLabel(groupBoxFontColor);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_8->addWidget(label_39, 10, 4, 1, 1);

        mColorFold = new QgsColorButton(groupBoxFontColor);
        mColorFold->setObjectName(QStringLiteral("mColorFold"));

        gridLayout_8->addWidget(mColorFold, 10, 5, 1, 1);

        label_40 = new QLabel(groupBoxFontColor);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_8->addWidget(label_40, 9, 4, 1, 1);

        mColorEdge = new QgsColorButton(groupBoxFontColor);
        mColorEdge->setObjectName(QStringLiteral("mColorEdge"));

        gridLayout_8->addWidget(mColorEdge, 9, 5, 1, 1);

        label_38 = new QLabel(groupBoxFontColor);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_8->addWidget(label_38, 8, 4, 1, 1);

        mColorIndentation = new QgsColorButton(groupBoxFontColor);
        mColorIndentation->setObjectName(QStringLiteral("mColorIndentation"));

        gridLayout_8->addWidget(mColorIndentation, 8, 5, 1, 1);

        label_21 = new QLabel(groupBoxFontColor);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_8->addWidget(label_21, 7, 4, 1, 1);

        mColorCommentLine = new QgsColorButton(groupBoxFontColor);
        mColorCommentLine->setObjectName(QStringLiteral("mColorCommentLine"));

        gridLayout_8->addWidget(mColorCommentLine, 7, 5, 1, 1);

        label_34 = new QLabel(groupBoxFontColor);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_8->addWidget(label_34, 6, 4, 1, 1);

        mColorErrorBackground = new QgsColorButton(groupBoxFontColor);
        mColorErrorBackground->setObjectName(QStringLiteral("mColorErrorBackground"));

        gridLayout_8->addWidget(mColorErrorBackground, 6, 5, 1, 1);


        gridLayout->addWidget(groupBoxFontColor, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        mSplitter->addWidget(scrollArea);

        verticalLayout_6->addWidget(mSplitter);

        QWidget::setTabOrder(scrollArea, mOverrideFontGroupBox);
        QWidget::setTabOrder(mOverrideFontGroupBox, mFontComboBox);
        QWidget::setTabOrder(mFontComboBox, mSizeSpin);
        QWidget::setTabOrder(mSizeSpin, mColorSchemeComboBox);
        QWidget::setTabOrder(mColorSchemeComboBox, mColorDefault);
        QWidget::setTabOrder(mColorDefault, mColorBackground);
        QWidget::setTabOrder(mColorBackground, mColorCursor);
        QWidget::setTabOrder(mColorCursor, mColorFunction);
        QWidget::setTabOrder(mColorFunction, mColorKeyword);
        QWidget::setTabOrder(mColorKeyword, mColorClass);
        QWidget::setTabOrder(mColorClass, mColorOperator);
        QWidget::setTabOrder(mColorOperator, mColorQuotedOperator);
        QWidget::setTabOrder(mColorQuotedOperator, mColorNumber);
        QWidget::setTabOrder(mColorNumber, mColorIdentifier);
        QWidget::setTabOrder(mColorIdentifier, mColorQuotedIdentifier);
        QWidget::setTabOrder(mColorQuotedIdentifier, mColorDecorator);
        QWidget::setTabOrder(mColorDecorator, mColorTag);
        QWidget::setTabOrder(mColorTag, mColorUnknownTag);
        QWidget::setTabOrder(mColorUnknownTag, mColorError);
        QWidget::setTabOrder(mColorError, mColorComment);
        QWidget::setTabOrder(mColorComment, mColorCommentBlock);
        QWidget::setTabOrder(mColorCommentBlock, mColorErrorBackground);
        QWidget::setTabOrder(mColorErrorBackground, mColorSingleQuote);
        QWidget::setTabOrder(mColorSingleQuote, mColorDoubleQuote);
        QWidget::setTabOrder(mColorDoubleQuote, mColorCommentLine);
        QWidget::setTabOrder(mColorCommentLine, mColorTripleSingleQuote);
        QWidget::setTabOrder(mColorTripleSingleQuote, mColorTripleDoubleQuote);
        QWidget::setTabOrder(mColorTripleDoubleQuote, mColorIndentation);
        QWidget::setTabOrder(mColorIndentation, mColorMarginBackground);
        QWidget::setTabOrder(mColorMarginBackground, mColorMarginForeground);
        QWidget::setTabOrder(mColorMarginForeground, mColorEdge);
        QWidget::setTabOrder(mColorEdge, mColorSelectionBackground);
        QWidget::setTabOrder(mColorSelectionBackground, mColorSelectionForeground);
        QWidget::setTabOrder(mColorSelectionForeground, mColorFold);
        QWidget::setTabOrder(mColorFold, mColorBraceBackground);
        QWidget::setTabOrder(mColorBraceBackground, mColorBraceForeground);
        QWidget::setTabOrder(mColorBraceForeground, mColorCaretLine);
        QWidget::setTabOrder(mColorCaretLine, mColorFoldIcon);
        QWidget::setTabOrder(mColorFoldIcon, mColorFoldIconHalo);
        QWidget::setTabOrder(mColorFoldIconHalo, mListLanguage);

        retranslateUi(QgsCodeEditorSettingsBase);

        mPreviewStackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(QgsCodeEditorSettingsBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCodeEditorSettingsBase)
    {
        groupBox->setTitle(QApplication::translate("QgsCodeEditorSettingsBase", "Preview", Q_NULLPTR));
        mOverrideFontGroupBox->setTitle(QApplication::translate("QgsCodeEditorSettingsBase", "Override Code Editor Font", Q_NULLPTR));
        label->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Font", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Size", Q_NULLPTR));
        groupBoxFontColor->setTitle(QApplication::translate("QgsCodeEditorSettingsBase", "Colors", Q_NULLPTR));
        mColorMarginForeground->setText(QString());
        label_19->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Comment", Q_NULLPTR));
        mColorBraceForeground->setText(QString());
        mColorBraceBackground->setText(QString());
        mColorError->setText(QString());
        mColorQuotedOperator->setText(QString());
        mColorSelectionBackground->setText(QString());
        mColorFunction->setText(QString());
        label_18->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Decorator", Q_NULLPTR));
        mColorComment->setText(QString());
        mColorQuotedIdentifier->setText(QString());
        label_50->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Brace background", Q_NULLPTR));
        mColorCursor->setText(QString());
        label_20->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Comment block", Q_NULLPTR));
        mColorSelectionForeground->setText(QString());
        mColorIdentifier->setText(QString());
        label_25->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Quoted operator", Q_NULLPTR));
        mColorSingleQuote->setText(QString());
        label_16->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Default", Q_NULLPTR));
        mColorTag->setText(QString());
        mColorBackground->setText(QString());
        label_43->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Margin foreground", Q_NULLPTR));
        label_48->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Selection background", Q_NULLPTR));
        label_49->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Selection foreground", Q_NULLPTR));
        label_73->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Unknown tag", Q_NULLPTR));
        mColorNumber->setText(QString());
        mColorDecorator->setText(QString());
        mColorOperator->setText(QString());
        mColorFoldIconHalo->setText(QString());
        mColorFoldIcon->setText(QString());
        mColorKeyword->setText(QString());
        label_32->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Quoted identifier", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Color scheme", Q_NULLPTR));
        label_26->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Class name", Q_NULLPTR));
        label_51->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Fold icon", Q_NULLPTR));
        label_30->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Triple double quote", Q_NULLPTR));
        mColorUnknownTag->setText(QString());
        label_28->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Single quote", Q_NULLPTR));
        label_14->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Error", Q_NULLPTR));
        mColorClass->setText(QString());
        label_13->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Function", Q_NULLPTR));
        mColorTripleDoubleQuote->setText(QString());
        label_15->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Background", Q_NULLPTR));
        mColorTripleSingleQuote->setText(QString());
        label_27->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Identifier", Q_NULLPTR));
        label_33->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Tag", Q_NULLPTR));
        label_52->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Fold icon halo", Q_NULLPTR));
        label_42->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Margin background", Q_NULLPTR));
        label_29->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Triple single quote", Q_NULLPTR));
        mColorCommentBlock->setText(QString());
        mColorDoubleQuote->setText(QString());
        label_17->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Keyword", Q_NULLPTR));
        label_24->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Cursor", Q_NULLPTR));
        mColorDefault->setText(QString());
        label_31->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Double quote", Q_NULLPTR));
        mColorMarginBackground->setText(QString());
        label_60->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Brace foreground", Q_NULLPTR));
        label_55->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Number", Q_NULLPTR));
        label_23->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Operator", Q_NULLPTR));
        label_22->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Caretline", Q_NULLPTR));
        mColorCaretLine->setText(QString());
        label_39->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Fold guide", Q_NULLPTR));
        mColorFold->setText(QString());
        label_40->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Edge guide", Q_NULLPTR));
        mColorEdge->setText(QString());
        label_38->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Indentation guide", Q_NULLPTR));
        mColorIndentation->setText(QString());
        label_21->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Comment line", Q_NULLPTR));
        mColorCommentLine->setText(QString());
        label_34->setText(QApplication::translate("QgsCodeEditorSettingsBase", "Error background", Q_NULLPTR));
        mColorErrorBackground->setText(QString());
        Q_UNUSED(QgsCodeEditorSettingsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCodeEditorSettingsBase: public Ui_QgsCodeEditorSettingsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCODEDITORSETTINGS_H
