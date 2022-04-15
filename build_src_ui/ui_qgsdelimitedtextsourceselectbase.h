/********************************************************************************
** Form generated from reading UI file 'qgsdelimitedtextsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H
#define UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDelimitedTextSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabelFileName;
    QgsFileWidget *mFileWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *textLabelLayerName;
    QLineEdit *txtLayerName;
    QLabel *lblEncoding;
    QComboBox *cmbEncoding;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QgsCollapsibleGroupBox *fileFormatGroupBox;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_3;
    QRadioButton *delimiterChars;
    QRadioButton *delimiterCSV;
    QRadioButton *delimiterRegexp;
    QStackedWidget *swFileFormat;
    QWidget *swpCSVOptions;
    QVBoxLayout *verticalLayout_7;
    QWidget *swpDelimOptions;
    QVBoxLayout *verticalLayout_11;
    QFrame *frameDelimiterCharacters;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *layoutDelimChars;
    QCheckBox *cbxDelimSemicolon;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDelimOther;
    QLineEdit *txtDelimiterOther;
    QCheckBox *cbxDelimTab;
    QCheckBox *cbxDelimColon;
    QCheckBox *cbxDelimComma;
    QCheckBox *cbxDelimSpace;
    QHBoxLayout *horizontalLayout;
    QLabel *labelQuote;
    QLineEdit *txtQuoteChars;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelEscape;
    QLineEdit *txtEscapeChars;
    QWidget *swpRegexpOptions;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *txtDelimiterRegexp;
    QLabel *lblRegexpError;
    QgsCollapsibleGroupBox *recordOptionsGroupBox;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QgsSpinBox *rowCounter;
    QCheckBox *cbxUseHeader;
    QCheckBox *cbxTrimFields;
    QCheckBox *cbxPointIsComma;
    QCheckBox *cbxSkipEmptyFields;
    QCheckBox *cbxDetectTypes;
    QgsCollapsibleGroupBox *geometryDefinitionGroupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *swGeomType;
    QWidget *swpGeomXY;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_5;
    QLabel *textLabelY;
    QLabel *textLabelZ;
    QLabel *textLabelX;
    QComboBox *cmbYField;
    QCheckBox *cbxXyDms;
    QComboBox *cmbZField;
    QLabel *textLabelM;
    QComboBox *cmbMField;
    QComboBox *cmbXField;
    QWidget *swpGeomWKT;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cmbGeometryType;
    QLabel *label_5;
    QComboBox *cmbWktField;
    QWidget *swpGeomNone;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabelCrs;
    QgsProjectionSelectionWidget *crsGeometry;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *geomTypeXY;
    QRadioButton *geomTypeWKT;
    QRadioButton *geomTypeNone;
    QgsCollapsibleGroupBox *layerSettingsGroupBox;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout_6;
    QCheckBox *cbxSpatialIndex;
    QCheckBox *cbxSubsetIndex;
    QCheckBox *cbxWatchFile;
    QGroupBox *sampleDataGroupBox;
    QVBoxLayout *verticalLayout_15;
    QTableWidget *tblSample;
    QSpacerItem *verticalSpacer;
    QLabel *lblStatus;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDelimitedTextSourceSelectBase)
    {
        if (QgsDelimitedTextSourceSelectBase->objectName().isEmpty())
            QgsDelimitedTextSourceSelectBase->setObjectName(QStringLiteral("QgsDelimitedTextSourceSelectBase"));
        QgsDelimitedTextSourceSelectBase->resize(730, 643);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsDelimitedTextSourceSelectBase->sizePolicy().hasHeightForWidth());
        QgsDelimitedTextSourceSelectBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsDelimitedTextSourceSelectBase->setWindowIcon(icon);
        verticalLayout_17 = new QVBoxLayout(QgsDelimitedTextSourceSelectBase);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        widget_3 = new QWidget(QgsDelimitedTextSourceSelectBase);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        textLabelFileName = new QLabel(widget_3);
        textLabelFileName->setObjectName(QStringLiteral("textLabelFileName"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabelFileName->sizePolicy().hasHeightForWidth());
        textLabelFileName->setSizePolicy(sizePolicy2);
        textLabelFileName->setIndent(0);

        horizontalLayout_5->addWidget(textLabelFileName);

        mFileWidget = new QgsFileWidget(widget_3);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        horizontalLayout_5->addWidget(mFileWidget);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        textLabelLayerName = new QLabel(widget_3);
        textLabelLayerName->setObjectName(QStringLiteral("textLabelLayerName"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabelLayerName->sizePolicy().hasHeightForWidth());
        textLabelLayerName->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(textLabelLayerName);

        txtLayerName = new QLineEdit(widget_3);
        txtLayerName->setObjectName(QStringLiteral("txtLayerName"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(txtLayerName->sizePolicy().hasHeightForWidth());
        txtLayerName->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(txtLayerName);

        lblEncoding = new QLabel(widget_3);
        lblEncoding->setObjectName(QStringLiteral("lblEncoding"));

        horizontalLayout_6->addWidget(lblEncoding);

        cmbEncoding = new QComboBox(widget_3);
        cmbEncoding->setObjectName(QStringLiteral("cmbEncoding"));
        cmbEncoding->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout_6->addWidget(cmbEncoding);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_17->addWidget(widget_3);

        scrollArea = new QScrollArea(QgsDelimitedTextSourceSelectBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy5);
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 696, 648));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy6);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        fileFormatGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        fileFormatGroupBox->setObjectName(QStringLiteral("fileFormatGroupBox"));
        sizePolicy1.setHeightForWidth(fileFormatGroupBox->sizePolicy().hasHeightForWidth());
        fileFormatGroupBox->setSizePolicy(sizePolicy1);
        fileFormatGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(fileFormatGroupBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        delimiterChars = new QRadioButton(fileFormatGroupBox);
        delimiterChars->setObjectName(QStringLiteral("delimiterChars"));
        sizePolicy2.setHeightForWidth(delimiterChars->sizePolicy().hasHeightForWidth());
        delimiterChars->setSizePolicy(sizePolicy2);
        delimiterChars->setChecked(false);

        gridLayout_3->addWidget(delimiterChars, 2, 0, 1, 1);

        delimiterCSV = new QRadioButton(fileFormatGroupBox);
        delimiterCSV->setObjectName(QStringLiteral("delimiterCSV"));
        sizePolicy2.setHeightForWidth(delimiterCSV->sizePolicy().hasHeightForWidth());
        delimiterCSV->setSizePolicy(sizePolicy2);
        delimiterCSV->setChecked(true);

        gridLayout_3->addWidget(delimiterCSV, 0, 0, 1, 1);

        delimiterRegexp = new QRadioButton(fileFormatGroupBox);
        delimiterRegexp->setObjectName(QStringLiteral("delimiterRegexp"));
        sizePolicy2.setHeightForWidth(delimiterRegexp->sizePolicy().hasHeightForWidth());
        delimiterRegexp->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(delimiterRegexp, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 0, 1, 1);

        swFileFormat = new QStackedWidget(fileFormatGroupBox);
        swFileFormat->setObjectName(QStringLiteral("swFileFormat"));
        swpCSVOptions = new QWidget();
        swpCSVOptions->setObjectName(QStringLiteral("swpCSVOptions"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(swpCSVOptions->sizePolicy().hasHeightForWidth());
        swpCSVOptions->setSizePolicy(sizePolicy7);
        verticalLayout_7 = new QVBoxLayout(swpCSVOptions);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        swFileFormat->addWidget(swpCSVOptions);
        swpDelimOptions = new QWidget();
        swpDelimOptions->setObjectName(QStringLiteral("swpDelimOptions"));
        verticalLayout_11 = new QVBoxLayout(swpDelimOptions);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        frameDelimiterCharacters = new QFrame(swpDelimOptions);
        frameDelimiterCharacters->setObjectName(QStringLiteral("frameDelimiterCharacters"));
        sizePolicy6.setHeightForWidth(frameDelimiterCharacters->sizePolicy().hasHeightForWidth());
        frameDelimiterCharacters->setSizePolicy(sizePolicy6);
        frameDelimiterCharacters->setFrameShape(QFrame::StyledPanel);
        frameDelimiterCharacters->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameDelimiterCharacters);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        layoutDelimChars = new QGridLayout();
        layoutDelimChars->setSpacing(6);
        layoutDelimChars->setObjectName(QStringLiteral("layoutDelimChars"));
        cbxDelimSemicolon = new QCheckBox(frameDelimiterCharacters);
        cbxDelimSemicolon->setObjectName(QStringLiteral("cbxDelimSemicolon"));

        layoutDelimChars->addWidget(cbxDelimSemicolon, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelDelimOther = new QLabel(frameDelimiterCharacters);
        labelDelimOther->setObjectName(QStringLiteral("labelDelimOther"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(labelDelimOther->sizePolicy().hasHeightForWidth());
        labelDelimOther->setSizePolicy(sizePolicy8);
        labelDelimOther->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelDelimOther);

        txtDelimiterOther = new QLineEdit(frameDelimiterCharacters);
        txtDelimiterOther->setObjectName(QStringLiteral("txtDelimiterOther"));
        txtDelimiterOther->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(txtDelimiterOther->sizePolicy().hasHeightForWidth());
        txtDelimiterOther->setSizePolicy(sizePolicy9);
        txtDelimiterOther->setMaximumSize(QSize(32767, 32767));
        txtDelimiterOther->setMaxLength(10);

        horizontalLayout_3->addWidget(txtDelimiterOther);


        layoutDelimChars->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        cbxDelimTab = new QCheckBox(frameDelimiterCharacters);
        cbxDelimTab->setObjectName(QStringLiteral("cbxDelimTab"));
        cbxDelimTab->setChecked(true);

        layoutDelimChars->addWidget(cbxDelimTab, 0, 0, 1, 1);

        cbxDelimColon = new QCheckBox(frameDelimiterCharacters);
        cbxDelimColon->setObjectName(QStringLiteral("cbxDelimColon"));

        layoutDelimChars->addWidget(cbxDelimColon, 0, 1, 1, 1);

        cbxDelimComma = new QCheckBox(frameDelimiterCharacters);
        cbxDelimComma->setObjectName(QStringLiteral("cbxDelimComma"));

        layoutDelimChars->addWidget(cbxDelimComma, 1, 1, 1, 1);

        cbxDelimSpace = new QCheckBox(frameDelimiterCharacters);
        cbxDelimSpace->setObjectName(QStringLiteral("cbxDelimSpace"));
        cbxDelimSpace->setChecked(false);

        layoutDelimChars->addWidget(cbxDelimSpace, 0, 2, 1, 1);


        verticalLayout_3->addLayout(layoutDelimChars);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelQuote = new QLabel(frameDelimiterCharacters);
        labelQuote->setObjectName(QStringLiteral("labelQuote"));
        sizePolicy8.setHeightForWidth(labelQuote->sizePolicy().hasHeightForWidth());
        labelQuote->setSizePolicy(sizePolicy8);
        labelQuote->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelQuote);

        txtQuoteChars = new QLineEdit(frameDelimiterCharacters);
        txtQuoteChars->setObjectName(QStringLiteral("txtQuoteChars"));
        sizePolicy1.setHeightForWidth(txtQuoteChars->sizePolicy().hasHeightForWidth());
        txtQuoteChars->setSizePolicy(sizePolicy1);
        txtQuoteChars->setMaxLength(10);

        horizontalLayout->addWidget(txtQuoteChars);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelEscape = new QLabel(frameDelimiterCharacters);
        labelEscape->setObjectName(QStringLiteral("labelEscape"));
        sizePolicy8.setHeightForWidth(labelEscape->sizePolicy().hasHeightForWidth());
        labelEscape->setSizePolicy(sizePolicy8);
        labelEscape->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelEscape);

        txtEscapeChars = new QLineEdit(frameDelimiterCharacters);
        txtEscapeChars->setObjectName(QStringLiteral("txtEscapeChars"));
        sizePolicy1.setHeightForWidth(txtEscapeChars->sizePolicy().hasHeightForWidth());
        txtEscapeChars->setSizePolicy(sizePolicy1);
        txtEscapeChars->setMaxLength(10);

        horizontalLayout->addWidget(txtEscapeChars);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_11->addWidget(frameDelimiterCharacters);

        swFileFormat->addWidget(swpDelimOptions);
        swpRegexpOptions = new QWidget();
        swpRegexpOptions->setObjectName(QStringLiteral("swpRegexpOptions"));
        verticalLayout_12 = new QVBoxLayout(swpRegexpOptions);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        frame = new QFrame(swpRegexpOptions);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        txtDelimiterRegexp = new QLineEdit(frame);
        txtDelimiterRegexp->setObjectName(QStringLiteral("txtDelimiterRegexp"));
        txtDelimiterRegexp->setEnabled(true);
        sizePolicy2.setHeightForWidth(txtDelimiterRegexp->sizePolicy().hasHeightForWidth());
        txtDelimiterRegexp->setSizePolicy(sizePolicy2);
        txtDelimiterRegexp->setMaximumSize(QSize(32767, 32767));

        verticalLayout_2->addWidget(txtDelimiterRegexp);

        lblRegexpError = new QLabel(frame);
        lblRegexpError->setObjectName(QStringLiteral("lblRegexpError"));
        lblRegexpError->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(lblRegexpError);


        verticalLayout_12->addWidget(frame);

        swFileFormat->addWidget(swpRegexpOptions);

        gridLayout_8->addWidget(swFileFormat, 0, 1, 1, 1);


        verticalLayout_4->addWidget(fileFormatGroupBox);

        recordOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        recordOptionsGroupBox->setObjectName(QStringLiteral("recordOptionsGroupBox"));
        sizePolicy1.setHeightForWidth(recordOptionsGroupBox->sizePolicy().hasHeightForWidth());
        recordOptionsGroupBox->setSizePolicy(sizePolicy1);
        recordOptionsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_7 = new QGridLayout(recordOptionsGroupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 9, -1);
        label_4 = new QLabel(recordOptionsGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_4);

        rowCounter = new QgsSpinBox(recordOptionsGroupBox);
        rowCounter->setObjectName(QStringLiteral("rowCounter"));
        rowCounter->setMinimumSize(QSize(0, 0));
        rowCounter->setMaximumSize(QSize(16777215, 16777215));
        rowCounter->setWrapping(false);
        rowCounter->setMaximum(9999);
        rowCounter->setValue(0);

        horizontalLayout_4->addWidget(rowCounter);


        gridLayout_7->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        cbxUseHeader = new QCheckBox(recordOptionsGroupBox);
        cbxUseHeader->setObjectName(QStringLiteral("cbxUseHeader"));
        cbxUseHeader->setChecked(true);

        gridLayout_7->addWidget(cbxUseHeader, 1, 0, 1, 1);

        cbxTrimFields = new QCheckBox(recordOptionsGroupBox);
        cbxTrimFields->setObjectName(QStringLiteral("cbxTrimFields"));

        gridLayout_7->addWidget(cbxTrimFields, 1, 1, 1, 1);

        cbxPointIsComma = new QCheckBox(recordOptionsGroupBox);
        cbxPointIsComma->setObjectName(QStringLiteral("cbxPointIsComma"));
        cbxPointIsComma->setEnabled(true);

        gridLayout_7->addWidget(cbxPointIsComma, 0, 1, 1, 1);

        cbxSkipEmptyFields = new QCheckBox(recordOptionsGroupBox);
        cbxSkipEmptyFields->setObjectName(QStringLiteral("cbxSkipEmptyFields"));

        gridLayout_7->addWidget(cbxSkipEmptyFields, 2, 1, 1, 1);

        cbxDetectTypes = new QCheckBox(recordOptionsGroupBox);
        cbxDetectTypes->setObjectName(QStringLiteral("cbxDetectTypes"));
        cbxDetectTypes->setChecked(true);

        gridLayout_7->addWidget(cbxDetectTypes, 2, 0, 1, 1);


        verticalLayout_4->addWidget(recordOptionsGroupBox);

        geometryDefinitionGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        geometryDefinitionGroupBox->setObjectName(QStringLiteral("geometryDefinitionGroupBox"));
        sizePolicy6.setHeightForWidth(geometryDefinitionGroupBox->sizePolicy().hasHeightForWidth());
        geometryDefinitionGroupBox->setSizePolicy(sizePolicy6);
        geometryDefinitionGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout = new QGridLayout(geometryDefinitionGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        swGeomType = new QStackedWidget(geometryDefinitionGroupBox);
        swGeomType->setObjectName(QStringLiteral("swGeomType"));
        swpGeomXY = new QWidget();
        swpGeomXY->setObjectName(QStringLiteral("swpGeomXY"));
        sizePolicy6.setHeightForWidth(swpGeomXY->sizePolicy().hasHeightForWidth());
        swpGeomXY->setSizePolicy(sizePolicy6);
        verticalLayout_8 = new QVBoxLayout(swpGeomXY);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textLabelY = new QLabel(swpGeomXY);
        textLabelY->setObjectName(QStringLiteral("textLabelY"));
        textLabelY->setEnabled(true);
        sizePolicy6.setHeightForWidth(textLabelY->sizePolicy().hasHeightForWidth());
        textLabelY->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(textLabelY, 1, 0, 1, 1);

        textLabelZ = new QLabel(swpGeomXY);
        textLabelZ->setObjectName(QStringLiteral("textLabelZ"));
        textLabelZ->setEnabled(true);
        sizePolicy6.setHeightForWidth(textLabelZ->sizePolicy().hasHeightForWidth());
        textLabelZ->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(textLabelZ, 0, 2, 1, 1);

        textLabelX = new QLabel(swpGeomXY);
        textLabelX->setObjectName(QStringLiteral("textLabelX"));
        textLabelX->setEnabled(true);
        textLabelX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(textLabelX, 0, 0, 1, 1);

        cmbYField = new QComboBox(swpGeomXY);
        cmbYField->setObjectName(QStringLiteral("cmbYField"));
        cmbYField->setEnabled(true);
        sizePolicy4.setHeightForWidth(cmbYField->sizePolicy().hasHeightForWidth());
        cmbYField->setSizePolicy(sizePolicy4);
        cmbYField->setMinimumSize(QSize(120, 0));
        cmbYField->setEditable(false);

        gridLayout_5->addWidget(cmbYField, 1, 1, 1, 1);

        cbxXyDms = new QCheckBox(swpGeomXY);
        cbxXyDms->setObjectName(QStringLiteral("cbxXyDms"));

        gridLayout_5->addWidget(cbxXyDms, 2, 1, 1, 3);

        cmbZField = new QComboBox(swpGeomXY);
        cmbZField->setObjectName(QStringLiteral("cmbZField"));
        cmbZField->setEnabled(true);
        sizePolicy4.setHeightForWidth(cmbZField->sizePolicy().hasHeightForWidth());
        cmbZField->setSizePolicy(sizePolicy4);
        cmbZField->setMinimumSize(QSize(120, 0));
        cmbZField->setEditable(false);

        gridLayout_5->addWidget(cmbZField, 0, 3, 1, 1);

        textLabelM = new QLabel(swpGeomXY);
        textLabelM->setObjectName(QStringLiteral("textLabelM"));
        textLabelM->setEnabled(true);
        sizePolicy6.setHeightForWidth(textLabelM->sizePolicy().hasHeightForWidth());
        textLabelM->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(textLabelM, 1, 2, 1, 1);

        cmbMField = new QComboBox(swpGeomXY);
        cmbMField->setObjectName(QStringLiteral("cmbMField"));
        cmbMField->setEnabled(true);
        sizePolicy4.setHeightForWidth(cmbMField->sizePolicy().hasHeightForWidth());
        cmbMField->setSizePolicy(sizePolicy4);
        cmbMField->setMinimumSize(QSize(120, 0));
        cmbMField->setEditable(false);

        gridLayout_5->addWidget(cmbMField, 1, 3, 1, 1);

        cmbXField = new QComboBox(swpGeomXY);
        cmbXField->setObjectName(QStringLiteral("cmbXField"));
        cmbXField->setEnabled(true);
        sizePolicy4.setHeightForWidth(cmbXField->sizePolicy().hasHeightForWidth());
        cmbXField->setSizePolicy(sizePolicy4);
        cmbXField->setMinimumSize(QSize(120, 0));
        cmbXField->setEditable(false);

        gridLayout_5->addWidget(cmbXField, 0, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_5);

        swGeomType->addWidget(swpGeomXY);
        swpGeomWKT = new QWidget();
        swpGeomWKT->setObjectName(QStringLiteral("swpGeomWKT"));
        sizePolicy6.setHeightForWidth(swpGeomWKT->sizePolicy().hasHeightForWidth());
        swpGeomWKT->setSizePolicy(sizePolicy6);
        verticalLayout_6 = new QVBoxLayout(swpGeomWKT);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(swpGeomWKT);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        cmbGeometryType = new QComboBox(swpGeomWKT);
        cmbGeometryType->setObjectName(QStringLiteral("cmbGeometryType"));
        cmbGeometryType->setEnabled(true);

        gridLayout_2->addWidget(cmbGeometryType, 1, 1, 1, 1);

        label_5 = new QLabel(swpGeomWKT);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        cmbWktField = new QComboBox(swpGeomWKT);
        cmbWktField->setObjectName(QStringLiteral("cmbWktField"));
        cmbWktField->setEnabled(true);
        sizePolicy4.setHeightForWidth(cmbWktField->sizePolicy().hasHeightForWidth());
        cmbWktField->setSizePolicy(sizePolicy4);
        cmbWktField->setMinimumSize(QSize(120, 0));
        cmbWktField->setEditable(false);

        gridLayout_2->addWidget(cmbWktField, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);

        swGeomType->addWidget(swpGeomWKT);
        swpGeomNone = new QWidget();
        swpGeomNone->setObjectName(QStringLiteral("swpGeomNone"));
        QSizePolicy sizePolicy10(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(swpGeomNone->sizePolicy().hasHeightForWidth());
        swpGeomNone->setSizePolicy(sizePolicy10);
        swGeomType->addWidget(swpGeomNone);

        verticalLayout_5->addWidget(swGeomType);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabelCrs = new QLabel(geometryDefinitionGroupBox);
        textLabelCrs->setObjectName(QStringLiteral("textLabelCrs"));
        QSizePolicy sizePolicy11(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(textLabelCrs->sizePolicy().hasHeightForWidth());
        textLabelCrs->setSizePolicy(sizePolicy11);

        horizontalLayout_2->addWidget(textLabelCrs);

        crsGeometry = new QgsProjectionSelectionWidget(geometryDefinitionGroupBox);
        crsGeometry->setObjectName(QStringLiteral("crsGeometry"));

        horizontalLayout_2->addWidget(crsGeometry);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(-1, 0, -1, -1);
        geomTypeXY = new QRadioButton(geometryDefinitionGroupBox);
        geomTypeXY->setObjectName(QStringLiteral("geomTypeXY"));
        geomTypeXY->setEnabled(true);
        geomTypeXY->setChecked(true);

        verticalLayout_16->addWidget(geomTypeXY);

        geomTypeWKT = new QRadioButton(geometryDefinitionGroupBox);
        geomTypeWKT->setObjectName(QStringLiteral("geomTypeWKT"));
        geomTypeWKT->setEnabled(true);

        verticalLayout_16->addWidget(geomTypeWKT);

        geomTypeNone = new QRadioButton(geometryDefinitionGroupBox);
        geomTypeNone->setObjectName(QStringLiteral("geomTypeNone"));

        verticalLayout_16->addWidget(geomTypeNone);


        gridLayout->addLayout(verticalLayout_16, 0, 0, 1, 1);


        verticalLayout_4->addWidget(geometryDefinitionGroupBox);

        layerSettingsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        layerSettingsGroupBox->setObjectName(QStringLiteral("layerSettingsGroupBox"));
        sizePolicy1.setHeightForWidth(layerSettingsGroupBox->sizePolicy().hasHeightForWidth());
        layerSettingsGroupBox->setSizePolicy(sizePolicy1);
        layerSettingsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout_14 = new QVBoxLayout(layerSettingsGroupBox);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 0, -1, -1);
        cbxSpatialIndex = new QCheckBox(layerSettingsGroupBox);
        cbxSpatialIndex->setObjectName(QStringLiteral("cbxSpatialIndex"));

        gridLayout_6->addWidget(cbxSpatialIndex, 0, 0, 1, 1);

        cbxSubsetIndex = new QCheckBox(layerSettingsGroupBox);
        cbxSubsetIndex->setObjectName(QStringLiteral("cbxSubsetIndex"));

        gridLayout_6->addWidget(cbxSubsetIndex, 0, 1, 1, 1);

        cbxWatchFile = new QCheckBox(layerSettingsGroupBox);
        cbxWatchFile->setObjectName(QStringLiteral("cbxWatchFile"));

        gridLayout_6->addWidget(cbxWatchFile, 0, 2, 1, 1);


        verticalLayout_14->addLayout(gridLayout_6);


        verticalLayout_4->addWidget(layerSettingsGroupBox);

        sampleDataGroupBox = new QGroupBox(scrollAreaWidgetContents);
        sampleDataGroupBox->setObjectName(QStringLiteral("sampleDataGroupBox"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(sampleDataGroupBox->sizePolicy().hasHeightForWidth());
        sampleDataGroupBox->setSizePolicy(sizePolicy12);
        sampleDataGroupBox->setProperty("collapsed", QVariant(false));
        verticalLayout_15 = new QVBoxLayout(sampleDataGroupBox);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        tblSample = new QTableWidget(sampleDataGroupBox);
        tblSample->setObjectName(QStringLiteral("tblSample"));
        QSizePolicy sizePolicy13(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(tblSample->sizePolicy().hasHeightForWidth());
        tblSample->setSizePolicy(sizePolicy13);
        tblSample->setLineWidth(1);

        verticalLayout_15->addWidget(tblSample);


        verticalLayout_4->addWidget(sampleDataGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_17->addWidget(scrollArea);

        lblStatus = new QLabel(QgsDelimitedTextSourceSelectBase);
        lblStatus->setObjectName(QStringLiteral("lblStatus"));
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);

        verticalLayout_17->addWidget(lblStatus);

        buttonBox = new QDialogButtonBox(QgsDelimitedTextSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout_17->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelDelimOther->setBuddy(txtDelimiterOther);
        labelQuote->setBuddy(txtQuoteChars);
        labelEscape->setBuddy(txtEscapeChars);
        label_4->setBuddy(rowCounter);
        textLabelY->setBuddy(cmbYField);
        textLabelZ->setBuddy(cmbZField);
        textLabelX->setBuddy(cmbXField);
        textLabelM->setBuddy(cmbMField);
        textLabelCrs->setBuddy(crsGeometry);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtLayerName, cmbEncoding);
        QWidget::setTabOrder(cmbEncoding, scrollArea);
        QWidget::setTabOrder(scrollArea, fileFormatGroupBox);
        QWidget::setTabOrder(fileFormatGroupBox, delimiterCSV);
        QWidget::setTabOrder(delimiterCSV, delimiterRegexp);
        QWidget::setTabOrder(delimiterRegexp, delimiterChars);
        QWidget::setTabOrder(delimiterChars, cbxDelimTab);
        QWidget::setTabOrder(cbxDelimTab, cbxDelimColon);
        QWidget::setTabOrder(cbxDelimColon, cbxDelimSpace);
        QWidget::setTabOrder(cbxDelimSpace, cbxDelimSemicolon);
        QWidget::setTabOrder(cbxDelimSemicolon, cbxDelimComma);
        QWidget::setTabOrder(cbxDelimComma, txtDelimiterOther);
        QWidget::setTabOrder(txtDelimiterOther, txtQuoteChars);
        QWidget::setTabOrder(txtQuoteChars, txtEscapeChars);
        QWidget::setTabOrder(txtEscapeChars, txtDelimiterRegexp);
        QWidget::setTabOrder(txtDelimiterRegexp, recordOptionsGroupBox);
        QWidget::setTabOrder(recordOptionsGroupBox, rowCounter);
        QWidget::setTabOrder(rowCounter, cbxUseHeader);
        QWidget::setTabOrder(cbxUseHeader, cbxDetectTypes);
        QWidget::setTabOrder(cbxDetectTypes, cbxPointIsComma);
        QWidget::setTabOrder(cbxPointIsComma, cbxTrimFields);
        QWidget::setTabOrder(cbxTrimFields, cbxSkipEmptyFields);
        QWidget::setTabOrder(cbxSkipEmptyFields, geometryDefinitionGroupBox);
        QWidget::setTabOrder(geometryDefinitionGroupBox, geomTypeXY);
        QWidget::setTabOrder(geomTypeXY, geomTypeWKT);
        QWidget::setTabOrder(geomTypeWKT, geomTypeNone);
        QWidget::setTabOrder(geomTypeNone, cmbXField);
        QWidget::setTabOrder(cmbXField, cmbYField);
        QWidget::setTabOrder(cmbYField, cmbZField);
        QWidget::setTabOrder(cmbZField, cmbMField);
        QWidget::setTabOrder(cmbMField, cbxXyDms);
        QWidget::setTabOrder(cbxXyDms, cmbWktField);
        QWidget::setTabOrder(cmbWktField, cmbGeometryType);
        QWidget::setTabOrder(cmbGeometryType, crsGeometry);
        QWidget::setTabOrder(crsGeometry, layerSettingsGroupBox);
        QWidget::setTabOrder(layerSettingsGroupBox, cbxSpatialIndex);
        QWidget::setTabOrder(cbxSpatialIndex, cbxSubsetIndex);
        QWidget::setTabOrder(cbxSubsetIndex, cbxWatchFile);
        QWidget::setTabOrder(cbxWatchFile, tblSample);

        retranslateUi(QgsDelimitedTextSourceSelectBase);
        QObject::connect(geomTypeNone, SIGNAL(toggled(bool)), cbxSpatialIndex, SLOT(setDisabled(bool)));

        swFileFormat->setCurrentIndex(1);
        swGeomType->setCurrentIndex(0);
        cmbGeometryType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDelimitedTextSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelimitedTextSourceSelectBase)
    {
        QgsDelimitedTextSourceSelectBase->setWindowTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Create a Layer from a Delimited Text File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        QgsDelimitedTextSourceSelectBase->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        QgsDelimitedTextSourceSelectBase->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        QgsDelimitedTextSourceSelectBase->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        textLabelFileName->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "File name", Q_NULLPTR));
        textLabelLayerName->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Layer name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtLayerName->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name to display in the map legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        txtLayerName->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name displayed in the map legend", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lblEncoding->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Encoding", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cmbEncoding->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbEncoding->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbEncoding->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fileFormatGroupBox->setTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "File Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        delimiterChars->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        delimiterChars->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        delimiterChars->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        delimiterChars->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Custom delimiters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        delimiterCSV->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        delimiterCSV->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        delimiterCSV->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        delimiterCSV->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "CSV (comma separated values)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        delimiterRegexp->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        delimiterRegexp->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        delimiterRegexp->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        delimiterRegexp->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression delimiter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxDelimSemicolon->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimSemicolon->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimSemicolon->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxDelimSemicolon->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon", Q_NULLPTR));
        labelDelimOther->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Others", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtDelimiterOther->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtDelimiterOther->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtDelimiterOther->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cbxDelimTab->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimTab->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimTab->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxDelimTab->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxDelimColon->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimColon->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimColon->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxDelimColon->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxDelimComma->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimComma->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimComma->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxDelimComma->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxDelimSpace->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimSpace->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimSpace->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxDelimSpace->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space", Q_NULLPTR));
        labelQuote->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Quote", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtQuoteChars->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtQuoteChars->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtQuoteChars->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        txtQuoteChars->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "\"", Q_NULLPTR));
        labelEscape->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Escape", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtEscapeChars->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtEscapeChars->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtEscapeChars->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        txtEscapeChars->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "\"", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Expression", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtDelimiterRegexp->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtDelimiterRegexp->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtDelimiterRegexp->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lblRegexpError->setText(QString());
        recordOptionsGroupBox->setTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Record and Fields Options", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number of header lines to discard", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rowCounter->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rowCounter->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        rowCounter->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cbxUseHeader->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxUseHeader->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxUseHeader->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxUseHeader->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "First record has field names", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxTrimFields->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxTrimFields->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxTrimFields->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxTrimFields->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim fields", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxPointIsComma->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxPointIsComma->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxPointIsComma->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxPointIsComma->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Decimal separator is comma", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxSkipEmptyFields->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxSkipEmptyFields->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxSkipEmptyFields->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxSkipEmptyFields->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields", Q_NULLPTR));
        cbxDetectTypes->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Detect field types", Q_NULLPTR));
        geometryDefinitionGroupBox->setTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry Definition", Q_NULLPTR));
        textLabelY->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Y field", Q_NULLPTR));
        textLabelZ->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Z field", Q_NULLPTR));
        textLabelX->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cmbYField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbYField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbYField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cbxXyDms->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxXyDms->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxXyDms->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxXyDms->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "DMS coordinates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cmbZField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing z values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbZField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing z values", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbZField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing z values", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        textLabelM->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "M field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cmbMField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing m values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbMField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing m values", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbMField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing m values", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbXField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbXField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbXField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry type", Q_NULLPTR));
        cmbGeometryType->clear();
        cmbGeometryType->insertItems(0, QStringList()
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Detect", Q_NULLPTR)
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Point", Q_NULLPTR)
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Line", Q_NULLPTR)
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Polygon", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cmbWktField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbWktField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbWktField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        textLabelCrs->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry CRS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        geomTypeXY->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        geomTypeXY->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        geomTypeXY->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        geomTypeXY->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Point coordinates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        geomTypeWKT->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        geomTypeWKT->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        geomTypeWKT->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        geomTypeWKT->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Well known text (WKT)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        geomTypeNone->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        geomTypeNone->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        geomTypeNone->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        geomTypeNone->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "No geometry (attribute only table)", Q_NULLPTR));
        layerSettingsGroupBox->setTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Layer Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxSpatialIndex->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxSpatialIndex->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxSpatialIndex->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxSpatialIndex->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use spatial index", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxSubsetIndex->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxSubsetIndex->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxSubsetIndex->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxSubsetIndex->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use subset index", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbxWatchFile->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxWatchFile->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxWatchFile->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbxWatchFile->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch file", Q_NULLPTR));
        sampleDataGroupBox->setTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Sample Data", Q_NULLPTR));
        lblStatus->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Sample data", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDelimitedTextSourceSelectBase: public Ui_QgsDelimitedTextSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H
