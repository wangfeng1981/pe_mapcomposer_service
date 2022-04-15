/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayertemporalpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERTEMPORALPROPERTIESWIDGETBASE_H
#define UI_QGSVECTORLAYERTEMPORALPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdatetimeedit.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerTemporalPropertiesWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *mTemporalGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mModeComboBox;
    QLabel *label;
    QStackedWidget *mStackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QgsDateTimeEdit *mStartTemporalDateTimeEdit;
    QgsDateTimeEdit *mEndTemporalDateTimeEdit;
    QLabel *label_5;
    QLabel *label_14;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QComboBox *mFixedDurationUnitsComboBox;
    QLabel *label_11;
    QLabel *label_2;
    QgsFieldComboBox *mSingleFieldComboBox;
    QSpacerItem *verticalSpacer;
    QgsDoubleSpinBox *mFixedDurationSpinBox;
    QLabel *label_13;
    QLabel *label_28;
    QCheckBox *mAccumulateCheckBox;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QgsFieldComboBox *mEndFieldComboBox;
    QgsFieldComboBox *mStartFieldComboBox;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_29;
    QWidget *page_5;
    QGridLayout *gridLayout_7;
    QgsFieldComboBox *mDurationFieldComboBox;
    QLabel *label_8;
    QLabel *label_12;
    QgsFieldComboBox *mDurationStartFieldComboBox;
    QComboBox *mDurationUnitsComboBox;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_30;
    QWidget *page_11;
    QGridLayout *gridLayout_12;
    QLabel *label_33;
    QLabel *label_31;
    QLabel *label_32;
    QSpacerItem *verticalSpacer_11;
    QgsFieldExpressionWidget *mStartExpressionWidget;
    QgsFieldExpressionWidget *mEndExpressionWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QFrame *mFixedTimeRangeFrame;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *QgsVectorLayerTemporalPropertiesWidgetBase)
    {
        if (QgsVectorLayerTemporalPropertiesWidgetBase->objectName().isEmpty())
            QgsVectorLayerTemporalPropertiesWidgetBase->setObjectName(QStringLiteral("QgsVectorLayerTemporalPropertiesWidgetBase"));
        QgsVectorLayerTemporalPropertiesWidgetBase->resize(611, 413);
        QgsVectorLayerTemporalPropertiesWidgetBase->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout_5 = new QHBoxLayout(QgsVectorLayerTemporalPropertiesWidgetBase);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsVectorLayerTemporalPropertiesWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 611, 413));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTemporalGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mTemporalGroupBox->setObjectName(QStringLiteral("mTemporalGroupBox"));
        mTemporalGroupBox->setEnabled(true);
        mTemporalGroupBox->setStyleSheet(QLatin1String("QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}\n"
"background: white;QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsi"
                        "bleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position:"
                        " top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1"
                        "px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}"));
        mTemporalGroupBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(mTemporalGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mModeComboBox = new QComboBox(mTemporalGroupBox);
        mModeComboBox->setObjectName(QStringLiteral("mModeComboBox"));

        gridLayout_3->addWidget(mModeComboBox, 0, 1, 1, 1);

        label = new QLabel(mTemporalGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(mTemporalGroupBox);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 3, 0, 1, 1);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        mStartTemporalDateTimeEdit = new QgsDateTimeEdit(page_3);
        mStartTemporalDateTimeEdit->setObjectName(QStringLiteral("mStartTemporalDateTimeEdit"));
        mStartTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_6->addWidget(mStartTemporalDateTimeEdit, 1, 1, 1, 1);

        mEndTemporalDateTimeEdit = new QgsDateTimeEdit(page_3);
        mEndTemporalDateTimeEdit->setObjectName(QStringLiteral("mEndTemporalDateTimeEdit"));
        mEndTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_6->addWidget(mEndTemporalDateTimeEdit, 2, 1, 1, 1);

        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 2, 0, 1, 1);

        label_14 = new QLabel(page_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setWordWrap(true);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 2);

        mStackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mFixedDurationUnitsComboBox = new QComboBox(page);
        mFixedDurationUnitsComboBox->setObjectName(QStringLiteral("mFixedDurationUnitsComboBox"));

        gridLayout_4->addWidget(mFixedDurationUnitsComboBox, 2, 2, 1, 1);

        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        mSingleFieldComboBox = new QgsFieldComboBox(page);
        mSingleFieldComboBox->setObjectName(QStringLiteral("mSingleFieldComboBox"));

        gridLayout_4->addWidget(mSingleFieldComboBox, 1, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 1);

        mFixedDurationSpinBox = new QgsDoubleSpinBox(page);
        mFixedDurationSpinBox->setObjectName(QStringLiteral("mFixedDurationSpinBox"));
        mFixedDurationSpinBox->setMaximum(1e+10);

        gridLayout_4->addWidget(mFixedDurationSpinBox, 2, 1, 1, 1);

        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setWordWrap(true);

        gridLayout_4->addWidget(label_13, 3, 0, 1, 3);

        label_28 = new QLabel(page);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setWordWrap(true);

        gridLayout_4->addWidget(label_28, 0, 0, 1, 3);

        mAccumulateCheckBox = new QCheckBox(page);
        mAccumulateCheckBox->setObjectName(QStringLiteral("mAccumulateCheckBox"));

        gridLayout_4->addWidget(mAccumulateCheckBox, 4, 0, 1, 3);

        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mEndFieldComboBox = new QgsFieldComboBox(page_2);
        mEndFieldComboBox->setObjectName(QStringLiteral("mEndFieldComboBox"));

        gridLayout_5->addWidget(mEndFieldComboBox, 2, 1, 1, 1);

        mStartFieldComboBox = new QgsFieldComboBox(page_2);
        mStartFieldComboBox->setObjectName(QStringLiteral("mStartFieldComboBox"));

        gridLayout_5->addWidget(mStartFieldComboBox, 1, 1, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 0, 1, 1);

        label_29 = new QLabel(page_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setWordWrap(true);

        gridLayout_5->addWidget(label_29, 0, 0, 1, 2);

        mStackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_7 = new QGridLayout(page_5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        mDurationFieldComboBox = new QgsFieldComboBox(page_5);
        mDurationFieldComboBox->setObjectName(QStringLiteral("mDurationFieldComboBox"));

        gridLayout_7->addWidget(mDurationFieldComboBox, 2, 1, 1, 1);

        label_8 = new QLabel(page_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_7->addWidget(label_8, 1, 0, 1, 1);

        label_12 = new QLabel(page_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setWordWrap(true);

        gridLayout_7->addWidget(label_12, 4, 0, 1, 2);

        mDurationStartFieldComboBox = new QgsFieldComboBox(page_5);
        mDurationStartFieldComboBox->setObjectName(QStringLiteral("mDurationStartFieldComboBox"));

        gridLayout_7->addWidget(mDurationStartFieldComboBox, 1, 1, 1, 1);

        mDurationUnitsComboBox = new QComboBox(page_5);
        mDurationUnitsComboBox->setObjectName(QStringLiteral("mDurationUnitsComboBox"));

        gridLayout_7->addWidget(mDurationUnitsComboBox, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_5, 5, 0, 1, 1);

        label_9 = new QLabel(page_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_7->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(page_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_7->addWidget(label_10, 3, 0, 1, 1);

        label_30 = new QLabel(page_5);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setWordWrap(true);

        gridLayout_7->addWidget(label_30, 0, 0, 1, 2);

        mStackedWidget->addWidget(page_5);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        gridLayout_12 = new QGridLayout(page_11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_33 = new QLabel(page_11);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setWordWrap(true);

        gridLayout_12->addWidget(label_33, 0, 0, 1, 2);

        label_31 = new QLabel(page_11);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_12->addWidget(label_31, 2, 0, 1, 1);

        label_32 = new QLabel(page_11);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_12->addWidget(label_32, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_11, 3, 0, 1, 1);

        mStartExpressionWidget = new QgsFieldExpressionWidget(page_11);
        mStartExpressionWidget->setObjectName(QStringLiteral("mStartExpressionWidget"));

        gridLayout_12->addWidget(mStartExpressionWidget, 1, 1, 1, 1);

        mEndExpressionWidget = new QgsFieldExpressionWidget(page_11);
        mEndExpressionWidget->setObjectName(QStringLiteral("mEndExpressionWidget"));

        gridLayout_12->addWidget(mEndExpressionWidget, 2, 1, 1, 1);

        gridLayout_12->setColumnStretch(1, 1);
        mStackedWidget->addWidget(page_11);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout = new QVBoxLayout(page_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        verticalLayout->addWidget(label_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        mStackedWidget->addWidget(page_4);

        gridLayout_3->addWidget(mStackedWidget, 1, 0, 1, 2);

        mFixedTimeRangeFrame = new QFrame(mTemporalGroupBox);
        mFixedTimeRangeFrame->setObjectName(QStringLiteral("mFixedTimeRangeFrame"));
        mFixedTimeRangeFrame->setEnabled(false);
        mFixedTimeRangeFrame->setFrameShape(QFrame::NoFrame);
        mFixedTimeRangeFrame->setFrameShadow(QFrame::Raised);
        mFixedTimeRangeFrame->setLineWidth(0);
        gridLayout_2 = new QGridLayout(mFixedTimeRangeFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);

        gridLayout_3->addWidget(mFixedTimeRangeFrame, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout->addWidget(mTemporalGroupBox, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mTemporalGroupBox);
        QWidget::setTabOrder(mTemporalGroupBox, mModeComboBox);
        QWidget::setTabOrder(mModeComboBox, mStartTemporalDateTimeEdit);
        QWidget::setTabOrder(mStartTemporalDateTimeEdit, mEndTemporalDateTimeEdit);
        QWidget::setTabOrder(mEndTemporalDateTimeEdit, mSingleFieldComboBox);
        QWidget::setTabOrder(mSingleFieldComboBox, mFixedDurationSpinBox);
        QWidget::setTabOrder(mFixedDurationSpinBox, mFixedDurationUnitsComboBox);
        QWidget::setTabOrder(mFixedDurationUnitsComboBox, mAccumulateCheckBox);
        QWidget::setTabOrder(mAccumulateCheckBox, mStartFieldComboBox);
        QWidget::setTabOrder(mStartFieldComboBox, mEndFieldComboBox);
        QWidget::setTabOrder(mEndFieldComboBox, mDurationStartFieldComboBox);
        QWidget::setTabOrder(mDurationStartFieldComboBox, mDurationFieldComboBox);
        QWidget::setTabOrder(mDurationFieldComboBox, mDurationUnitsComboBox);

        retranslateUi(QgsVectorLayerTemporalPropertiesWidgetBase);

        mStackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(QgsVectorLayerTemporalPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorLayerTemporalPropertiesWidgetBase)
    {
        mTemporalGroupBox->setTitle(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Temporal", Q_NULLPTR));
        label->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Configuration", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start date", Q_NULLPTR));
        mStartTemporalDateTimeEdit->setDisplayFormat(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mEndTemporalDateTimeEdit->setDisplayFormat(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "End date", Q_NULLPTR));
        label_14->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b><i>All</i> features from the layer will be rendered whenever the map's temporal range overlaps the range defined below.</b></p>", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Event duration", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Field", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p>Event durations in <i>Months</i> assume a fixed 30-day month length, and durations in <i>Years</i>, <i>Decades</i> or <i>Centuries</i> assume a 365.25-day year length.</p>", Q_NULLPTR));
        label_28->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b>Individual features from the layer will be rendered if the field's value falls within the map's temporal range.</b></p>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAccumulateCheckBox->setToolTip(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "If checked, then features will be shown whenever their defined temporal value falls within or before the map's temporal range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAccumulateCheckBox->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Accumulate features over time", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start field", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "End field", Q_NULLPTR));
        label_29->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b>Individual features from the layer will be rendered if the range specified by the <i>Start</i> and <i>End</i> fields overlaps the map's temporal range.</b></p>\n"
"<p>If the <i>Start</i> field choice is empty, then features will be treated as having no start date. Similarly if the <i>End</i> field choice is empty, then features will be treated as having no end date.</p>", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start field", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p>Event durations in <i>Months</i> assume a fixed 30-day month length, and durations in <i>Years</i>, <i>Decades</i> or <i>Centuries</i> assume a 365.25-day year length.</p>", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Event duration field", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Event duration units", Q_NULLPTR));
        label_30->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b>Individual features from the layer will be rendered if the temporal range defined by the <i>Start</i> and <i>Event Duration</i> fields overlaps the map's temporal range.</b></p>", Q_NULLPTR));
        label_33->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b>Individual features from the layer will be rendered if the range specified by the <i>Start</i> and <i>End</i> expressions overlaps the map's temporal range.</b></p>\n"
"<p>If the <i>Start</i> expression choice is empty, then features will be treated as having no start date. Similarly if the <i>End</i> expression choice is empty, then features will be treated as having no end date.</p>\n"
"<p>The <i>Start</i> and <i>End</i> expressions must return date or datetime values.</p>", Q_NULLPTR));
        label_31->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "End expression", Q_NULLPTR));
        label_32->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start expression", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b>The layer will automatically be redrawn whenever the temporal range is changed, but no time based filtering will be applied to the features.<b></p><p>This configuration is useful when the layer has symbology settings which vary based on the temporal range. For instance, when it is using time-dependent rule-based renderer expressions or data-defined symbology expressions.</p>", Q_NULLPTR));
        Q_UNUSED(QgsVectorLayerTemporalPropertiesWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerTemporalPropertiesWidgetBase: public Ui_QgsVectorLayerTemporalPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERTEMPORALPROPERTIESWIDGETBASE_H
