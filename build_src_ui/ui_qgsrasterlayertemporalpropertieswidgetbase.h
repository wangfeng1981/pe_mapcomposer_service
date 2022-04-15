/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayertemporalpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERTEMPORALPROPERTIESWIDGETBASE_H
#define UI_QGSRASTERLAYERTEMPORALPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdatetimeedit.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerTemporalPropertiesWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *mTemporalGroupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *mModeFixedRangeRadio;
    QFrame *mFixedTimeRangeFrame;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QgsDateTimeEdit *mEndTemporalDateTimeEdit;
    QgsDateTimeEdit *mStartTemporalDateTimeEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QRadioButton *mModeAutomaticRadio;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRasterLayerTemporalPropertiesWidgetBase)
    {
        if (QgsRasterLayerTemporalPropertiesWidgetBase->objectName().isEmpty())
            QgsRasterLayerTemporalPropertiesWidgetBase->setObjectName(QStringLiteral("QgsRasterLayerTemporalPropertiesWidgetBase"));
        QgsRasterLayerTemporalPropertiesWidgetBase->resize(611, 413);
        QgsRasterLayerTemporalPropertiesWidgetBase->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout_5 = new QHBoxLayout(QgsRasterLayerTemporalPropertiesWidgetBase);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsRasterLayerTemporalPropertiesWidgetBase);
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
        mModeFixedRangeRadio = new QRadioButton(mTemporalGroupBox);
        mModeFixedRangeRadio->setObjectName(QStringLiteral("mModeFixedRangeRadio"));
        mModeFixedRangeRadio->setChecked(false);

        gridLayout_3->addWidget(mModeFixedRangeRadio, 2, 0, 1, 2);

        mFixedTimeRangeFrame = new QFrame(mTemporalGroupBox);
        mFixedTimeRangeFrame->setObjectName(QStringLiteral("mFixedTimeRangeFrame"));
        mFixedTimeRangeFrame->setEnabled(false);
        mFixedTimeRangeFrame->setFrameShape(QFrame::NoFrame);
        mFixedTimeRangeFrame->setFrameShadow(QFrame::Raised);
        mFixedTimeRangeFrame->setLineWidth(0);
        gridLayout_2 = new QGridLayout(mFixedTimeRangeFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_2 = new QLabel(mFixedTimeRangeFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        mEndTemporalDateTimeEdit = new QgsDateTimeEdit(mFixedTimeRangeFrame);
        mEndTemporalDateTimeEdit->setObjectName(QStringLiteral("mEndTemporalDateTimeEdit"));
        mEndTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_2->addWidget(mEndTemporalDateTimeEdit, 1, 1, 1, 2);

        mStartTemporalDateTimeEdit = new QgsDateTimeEdit(mFixedTimeRangeFrame);
        mStartTemporalDateTimeEdit->setObjectName(QStringLiteral("mStartTemporalDateTimeEdit"));
        mStartTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_2->addWidget(mStartTemporalDateTimeEdit, 0, 1, 1, 2);

        label_4 = new QLabel(mFixedTimeRangeFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(3, 2);

        gridLayout_3->addWidget(mFixedTimeRangeFrame, 3, 0, 1, 2);

        mModeAutomaticRadio = new QRadioButton(mTemporalGroupBox);
        mModeAutomaticRadio->setObjectName(QStringLiteral("mModeAutomaticRadio"));
        mModeAutomaticRadio->setChecked(true);

        gridLayout_3->addWidget(mModeAutomaticRadio, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 1, 1, 1);


        gridLayout->addWidget(mTemporalGroupBox, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mModeFixedRangeRadio);
        QWidget::setTabOrder(mModeFixedRangeRadio, mStartTemporalDateTimeEdit);
        QWidget::setTabOrder(mStartTemporalDateTimeEdit, mEndTemporalDateTimeEdit);
        QWidget::setTabOrder(mEndTemporalDateTimeEdit, mTemporalGroupBox);

        retranslateUi(QgsRasterLayerTemporalPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterLayerTemporalPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterLayerTemporalPropertiesWidgetBase)
    {
        mTemporalGroupBox->setTitle(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Temporal", Q_NULLPTR));
        mModeFixedRangeRadio->setText(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Fixed time range (only show this layer if animation time is within this range)", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Start date", Q_NULLPTR));
        mEndTemporalDateTimeEdit->setDisplayFormat(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mStartTemporalDateTimeEdit->setDisplayFormat(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "End date", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mModeAutomaticRadio->setToolTip(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Delegates temporal handling to the data provider", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mModeAutomaticRadio->setText(QApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Automatic", Q_NULLPTR));
        Q_UNUSED(QgsRasterLayerTemporalPropertiesWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerTemporalPropertiesWidgetBase: public Ui_QgsRasterLayerTemporalPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERTEMPORALPROPERTIESWIDGETBASE_H
