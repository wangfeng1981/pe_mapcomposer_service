/********************************************************************************
** Form generated from reading UI file 'qgstemporalcontrollerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEMPORALCONTROLLERWIDGETBASE_H
#define UI_QGSTEMPORALCONTROLLERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTemporalControllerWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *mNavigationOff;
    QToolButton *mNavigationFixedRange;
    QToolButton *mNavigationAnimated;
    QLabel *mCurrentRangeLabel;
    QToolButton *mSettings;
    QStackedWidget *mNavigationModeStackedWidget;
    QWidget *p1;
    QVBoxLayout *verticalLayoutP1;
    QWidget *p2;
    QVBoxLayout *verticalLayoutP2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mFixedRangeRangeLabel;
    QDateTimeEdit *mFixedRangeStartDateTime;
    QLabel *mFixedRangeRangeToLabel;
    QDateTimeEdit *mFixedRangeEndDateTime;
    QToolButton *mFixedRangeSetRangeButton;
    QSpacerItem *horizontalSpacer2;
    QSpacerItem *verticalSpacer2;
    QWidget *p3;
    QVBoxLayout *verticalLayoutP3;
    QHBoxLayout *horizontalLayout1;
    QPushButton *mRewindButton;
    QPushButton *mPreviousButton;
    QPushButton *mBackButton;
    QPushButton *mStopButton;
    QPushButton *mForwardButton;
    QPushButton *mNextButton;
    QPushButton *mFastForwardButton;
    QSlider *mSlider;
    QCheckBox *mLoopingCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mRangeLabel;
    QDateTimeEdit *mStartDateTime;
    QLabel *mRangeToLabel;
    QDateTimeEdit *mEndDateTime;
    QToolButton *mSetRangeButton;
    QLabel *mStepLabel;
    QgsDoubleSpinBox *mStepSpinBox;
    QComboBox *mTimeStepsComboBox;
    QToolButton *mExportAnimationButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsTemporalControllerWidgetBase)
    {
        if (QgsTemporalControllerWidgetBase->objectName().isEmpty())
            QgsTemporalControllerWidgetBase->setObjectName(QStringLiteral("QgsTemporalControllerWidgetBase"));
        QgsTemporalControllerWidgetBase->resize(747, 131);
        verticalLayout = new QVBoxLayout(QgsTemporalControllerWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mNavigationOff = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationOff->setObjectName(QStringLiteral("mNavigationOff"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mTemporalNavigationOff.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationOff->setIcon(icon);
        mNavigationOff->setCheckable(true);
        mNavigationOff->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationOff);

        mNavigationFixedRange = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationFixedRange->setObjectName(QStringLiteral("mNavigationFixedRange"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mTemporalNavigationFixedRange.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationFixedRange->setIcon(icon1);
        mNavigationFixedRange->setCheckable(true);
        mNavigationFixedRange->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationFixedRange);

        mNavigationAnimated = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationAnimated->setObjectName(QStringLiteral("mNavigationAnimated"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mTemporalNavigationAnimated.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationAnimated->setIcon(icon2);
        mNavigationAnimated->setCheckable(true);
        mNavigationAnimated->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationAnimated);

        mCurrentRangeLabel = new QLabel(QgsTemporalControllerWidgetBase);
        mCurrentRangeLabel->setObjectName(QStringLiteral("mCurrentRangeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCurrentRangeLabel->sizePolicy().hasHeightForWidth());
        mCurrentRangeLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCurrentRangeLabel);

        mSettings = new QToolButton(QgsTemporalControllerWidgetBase);
        mSettings->setObjectName(QStringLiteral("mSettings"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSettings->setIcon(icon3);
        mSettings->setAutoRaise(true);

        horizontalLayout->addWidget(mSettings);


        verticalLayout->addLayout(horizontalLayout);

        mNavigationModeStackedWidget = new QStackedWidget(QgsTemporalControllerWidgetBase);
        mNavigationModeStackedWidget->setObjectName(QStringLiteral("mNavigationModeStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNavigationModeStackedWidget->sizePolicy().hasHeightForWidth());
        mNavigationModeStackedWidget->setSizePolicy(sizePolicy1);
        p1 = new QWidget();
        p1->setObjectName(QStringLiteral("p1"));
        verticalLayoutP1 = new QVBoxLayout(p1);
        verticalLayoutP1->setSpacing(2);
        verticalLayoutP1->setObjectName(QStringLiteral("verticalLayoutP1"));
        verticalLayoutP1->setContentsMargins(0, 0, 0, 0);
        mNavigationModeStackedWidget->addWidget(p1);
        p2 = new QWidget();
        p2->setObjectName(QStringLiteral("p2"));
        verticalLayoutP2 = new QVBoxLayout(p2);
        verticalLayoutP2->setSpacing(2);
        verticalLayoutP2->setObjectName(QStringLiteral("verticalLayoutP2"));
        verticalLayoutP2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mFixedRangeRangeLabel = new QLabel(p2);
        mFixedRangeRangeLabel->setObjectName(QStringLiteral("mFixedRangeRangeLabel"));

        horizontalLayout_5->addWidget(mFixedRangeRangeLabel);

        mFixedRangeStartDateTime = new QDateTimeEdit(p2);
        mFixedRangeStartDateTime->setObjectName(QStringLiteral("mFixedRangeStartDateTime"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFixedRangeStartDateTime->sizePolicy().hasHeightForWidth());
        mFixedRangeStartDateTime->setSizePolicy(sizePolicy2);
        mFixedRangeStartDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_5->addWidget(mFixedRangeStartDateTime);

        mFixedRangeRangeToLabel = new QLabel(p2);
        mFixedRangeRangeToLabel->setObjectName(QStringLiteral("mFixedRangeRangeToLabel"));

        horizontalLayout_5->addWidget(mFixedRangeRangeToLabel);

        mFixedRangeEndDateTime = new QDateTimeEdit(p2);
        mFixedRangeEndDateTime->setObjectName(QStringLiteral("mFixedRangeEndDateTime"));
        sizePolicy2.setHeightForWidth(mFixedRangeEndDateTime->sizePolicy().hasHeightForWidth());
        mFixedRangeEndDateTime->setSizePolicy(sizePolicy2);
        mFixedRangeEndDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_5->addWidget(mFixedRangeEndDateTime);

        mFixedRangeSetRangeButton = new QToolButton(p2);
        mFixedRangeSetRangeButton->setObjectName(QStringLiteral("mFixedRangeSetRangeButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFixedRangeSetRangeButton->setIcon(icon4);
        mFixedRangeSetRangeButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(mFixedRangeSetRangeButton);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer2);


        verticalLayoutP2->addLayout(horizontalLayout_5);

        verticalSpacer2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutP2->addItem(verticalSpacer2);

        mNavigationModeStackedWidget->addWidget(p2);
        p3 = new QWidget();
        p3->setObjectName(QStringLiteral("p3"));
        verticalLayoutP3 = new QVBoxLayout(p3);
        verticalLayoutP3->setSpacing(2);
        verticalLayoutP3->setObjectName(QStringLiteral("verticalLayoutP3"));
        verticalLayoutP3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setSpacing(2);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        mRewindButton = new QPushButton(p3);
        mRewindButton->setObjectName(QStringLiteral("mRewindButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/rewindToStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRewindButton->setIcon(icon5);

        horizontalLayout1->addWidget(mRewindButton);

        mPreviousButton = new QPushButton(p3);
        mPreviousButton->setObjectName(QStringLiteral("mPreviousButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPreviousButton->setIcon(icon6);

        horizontalLayout1->addWidget(mPreviousButton);

        mBackButton = new QPushButton(p3);
        mBackButton->setObjectName(QStringLiteral("mBackButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/back.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBackButton->setIcon(icon7);
        mBackButton->setCheckable(true);

        horizontalLayout1->addWidget(mBackButton);

        mStopButton = new QPushButton(p3);
        mStopButton->setObjectName(QStringLiteral("mStopButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStopButton->setIcon(icon8);
        mStopButton->setCheckable(true);

        horizontalLayout1->addWidget(mStopButton);

        mForwardButton = new QPushButton(p3);
        mForwardButton->setObjectName(QStringLiteral("mForwardButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/forward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mForwardButton->setIcon(icon9);
        mForwardButton->setCheckable(true);

        horizontalLayout1->addWidget(mForwardButton);

        mNextButton = new QPushButton(p3);
        mNextButton->setObjectName(QStringLiteral("mNextButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNextButton->setIcon(icon10);

        horizontalLayout1->addWidget(mNextButton);

        mFastForwardButton = new QPushButton(p3);
        mFastForwardButton->setObjectName(QStringLiteral("mFastForwardButton"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/temporal_navigation/skipToEnd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFastForwardButton->setIcon(icon11);

        horizontalLayout1->addWidget(mFastForwardButton);

        mSlider = new QSlider(p3);
        mSlider->setObjectName(QStringLiteral("mSlider"));
        mSlider->setOrientation(Qt::Horizontal);
        mSlider->setInvertedAppearance(false);
        mSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout1->addWidget(mSlider);

        mLoopingCheckBox = new QCheckBox(p3);
        mLoopingCheckBox->setObjectName(QStringLiteral("mLoopingCheckBox"));

        horizontalLayout1->addWidget(mLoopingCheckBox);


        verticalLayoutP3->addLayout(horizontalLayout1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mRangeLabel = new QLabel(p3);
        mRangeLabel->setObjectName(QStringLiteral("mRangeLabel"));

        horizontalLayout_6->addWidget(mRangeLabel);

        mStartDateTime = new QDateTimeEdit(p3);
        mStartDateTime->setObjectName(QStringLiteral("mStartDateTime"));
        sizePolicy2.setHeightForWidth(mStartDateTime->sizePolicy().hasHeightForWidth());
        mStartDateTime->setSizePolicy(sizePolicy2);
        mStartDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_6->addWidget(mStartDateTime);

        mRangeToLabel = new QLabel(p3);
        mRangeToLabel->setObjectName(QStringLiteral("mRangeToLabel"));

        horizontalLayout_6->addWidget(mRangeToLabel);

        mEndDateTime = new QDateTimeEdit(p3);
        mEndDateTime->setObjectName(QStringLiteral("mEndDateTime"));
        sizePolicy2.setHeightForWidth(mEndDateTime->sizePolicy().hasHeightForWidth());
        mEndDateTime->setSizePolicy(sizePolicy2);
        mEndDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_6->addWidget(mEndDateTime);

        mSetRangeButton = new QToolButton(p3);
        mSetRangeButton->setObjectName(QStringLiteral("mSetRangeButton"));
        mSetRangeButton->setIcon(icon4);
        mSetRangeButton->setAutoRaise(true);

        horizontalLayout_6->addWidget(mSetRangeButton);

        mStepLabel = new QLabel(p3);
        mStepLabel->setObjectName(QStringLiteral("mStepLabel"));

        horizontalLayout_6->addWidget(mStepLabel);

        mStepSpinBox = new QgsDoubleSpinBox(p3);
        mStepSpinBox->setObjectName(QStringLiteral("mStepSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mStepSpinBox->sizePolicy().hasHeightForWidth());
        mStepSpinBox->setSizePolicy(sizePolicy3);
        mStepSpinBox->setMaximumSize(QSize(130, 16777215));
        mStepSpinBox->setDecimals(3);

        horizontalLayout_6->addWidget(mStepSpinBox);

        mTimeStepsComboBox = new QComboBox(p3);
        mTimeStepsComboBox->setObjectName(QStringLiteral("mTimeStepsComboBox"));
        mTimeStepsComboBox->setEditable(false);

        horizontalLayout_6->addWidget(mTimeStepsComboBox);

        mExportAnimationButton = new QToolButton(p3);
        mExportAnimationButton->setObjectName(QStringLiteral("mExportAnimationButton"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExportAnimationButton->setIcon(icon12);
        mExportAnimationButton->setAutoRaise(true);

        horizontalLayout_6->addWidget(mExportAnimationButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayoutP3->addLayout(horizontalLayout_6);

        mNavigationModeStackedWidget->addWidget(p3);

        verticalLayout->addWidget(mNavigationModeStackedWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsTemporalControllerWidgetBase);

        mNavigationModeStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTemporalControllerWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsTemporalControllerWidgetBase)
    {
        QgsTemporalControllerWidgetBase->setWindowTitle(QApplication::translate("QgsTemporalControllerWidgetBase", "QgsDockWidget", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mNavigationOff->setToolTip(QApplication::translate("QgsTemporalControllerWidgetBase", "Turn off temporal navigation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNavigationOff->setText(QString());
#ifndef QT_NO_TOOLTIP
        mNavigationFixedRange->setToolTip(QApplication::translate("QgsTemporalControllerWidgetBase", "Fixed range temporal navigation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNavigationFixedRange->setText(QString());
#ifndef QT_NO_TOOLTIP
        mNavigationAnimated->setToolTip(QApplication::translate("QgsTemporalControllerWidgetBase", "Animated temporal navigation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mNavigationAnimated->setText(QString());
        mCurrentRangeLabel->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "Temporal navigation disabled", Q_NULLPTR));
        mSettings->setText(QString());
        mFixedRangeRangeLabel->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "Range", Q_NULLPTR));
        mFixedRangeStartDateTime->setDisplayFormat(QApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mFixedRangeRangeToLabel->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "to ", Q_NULLPTR));
        mFixedRangeEndDateTime->setDisplayFormat(QApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mFixedRangeSetRangeButton->setText(QString());
        mRewindButton->setText(QString());
        mPreviousButton->setText(QString());
        mBackButton->setText(QString());
        mStopButton->setText(QString());
        mForwardButton->setText(QString());
        mNextButton->setText(QString());
        mFastForwardButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mLoopingCheckBox->setToolTip(QApplication::translate("QgsTemporalControllerWidgetBase", "Automatically reset and repeat the animation endlessly", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLoopingCheckBox->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "Loop", Q_NULLPTR));
        mRangeLabel->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "Range", Q_NULLPTR));
        mStartDateTime->setDisplayFormat(QApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mRangeToLabel->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "to ", Q_NULLPTR));
        mEndDateTime->setDisplayFormat(QApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mSetRangeButton->setText(QString());
        mStepLabel->setText(QApplication::translate("QgsTemporalControllerWidgetBase", "Step", Q_NULLPTR));
        mTimeStepsComboBox->setCurrentText(QString());
#ifndef QT_NO_TOOLTIP
        mExportAnimationButton->setToolTip(QApplication::translate("QgsTemporalControllerWidgetBase", "Export Animation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mExportAnimationButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsTemporalControllerWidgetBase: public Ui_QgsTemporalControllerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEMPORALCONTROLLERWIDGETBASE_H
