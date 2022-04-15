/********************************************************************************
** Form generated from reading UI file 'qgsdatetimeeditconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATETIMEEDITCONFIG_H
#define UI_QGSDATETIMEEDITCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDateTimeEditConfig
{
public:
    QGridLayout *gridLayout;
    QgsScrollArea *mHelpScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QLabel *mHelpLabel;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QComboBox *mFieldFormatComboBox;
    QLineEdit *mFieldFormatEdit;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFieldHelpToolButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *mDisplayFormatEdit;
    QComboBox *mDisplayFormatComboBox;
    QToolButton *mDisplayHelpToolButton;
    QCheckBox *mCalendarPopupCheckBox;
    QCheckBox *mAllowNullCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateTimeEdit *mDemoDateTimeEdit;

    void setupUi(QWidget *QgsDateTimeEditConfig)
    {
        if (QgsDateTimeEditConfig->objectName().isEmpty())
            QgsDateTimeEditConfig->setObjectName(QStringLiteral("QgsDateTimeEditConfig"));
        QgsDateTimeEditConfig->resize(504, 390);
        QgsDateTimeEditConfig->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsDateTimeEditConfig);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mHelpScrollArea = new QgsScrollArea(QgsDateTimeEditConfig);
        mHelpScrollArea->setObjectName(QStringLiteral("mHelpScrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHelpScrollArea->sizePolicy().hasHeightForWidth());
        mHelpScrollArea->setSizePolicy(sizePolicy);
        mHelpScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 478, 971));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mHelpLabel = new QLabel(scrollAreaWidgetContents);
        mHelpLabel->setObjectName(QStringLiteral("mHelpLabel"));
        mHelpLabel->setScaledContents(true);
        mHelpLabel->setWordWrap(true);

        gridLayout_5->addWidget(mHelpLabel, 0, 0, 1, 1);

        mHelpScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(mHelpScrollArea, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        line = new QFrame(QgsDateTimeEditConfig);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsDateTimeEditConfig);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mFieldFormatComboBox = new QComboBox(groupBox_2);
        mFieldFormatComboBox->setObjectName(QStringLiteral("mFieldFormatComboBox"));
        mFieldFormatComboBox->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(mFieldFormatComboBox, 0, 0, 1, 1);

        mFieldFormatEdit = new QLineEdit(groupBox_2);
        mFieldFormatEdit->setObjectName(QStringLiteral("mFieldFormatEdit"));
        mFieldFormatEdit->setEnabled(true);

        gridLayout_3->addWidget(mFieldFormatEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);

        mFieldHelpToolButton = new QToolButton(groupBox_2);
        mFieldHelpToolButton->setObjectName(QStringLiteral("mFieldHelpToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionHelpContents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldHelpToolButton->setIcon(icon);
        mFieldHelpToolButton->setCheckable(true);
        mFieldHelpToolButton->setChecked(false);

        gridLayout_3->addWidget(mFieldHelpToolButton, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(QgsDateTimeEditConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        mDisplayFormatEdit = new QLineEdit(groupBox);
        mDisplayFormatEdit->setObjectName(QStringLiteral("mDisplayFormatEdit"));
        mDisplayFormatEdit->setEnabled(false);

        gridLayout_2->addWidget(mDisplayFormatEdit, 0, 1, 1, 1);

        mDisplayFormatComboBox = new QComboBox(groupBox);
        mDisplayFormatComboBox->setObjectName(QStringLiteral("mDisplayFormatComboBox"));
        mDisplayFormatComboBox->setMinimumSize(QSize(120, 0));
        mDisplayFormatComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(mDisplayFormatComboBox, 0, 0, 1, 1);

        mDisplayHelpToolButton = new QToolButton(groupBox);
        mDisplayHelpToolButton->setObjectName(QStringLiteral("mDisplayHelpToolButton"));
        mDisplayHelpToolButton->setIcon(icon);
        mDisplayHelpToolButton->setCheckable(true);
        mDisplayHelpToolButton->setChecked(false);

        gridLayout_2->addWidget(mDisplayHelpToolButton, 0, 2, 1, 1);

        mCalendarPopupCheckBox = new QCheckBox(groupBox);
        mCalendarPopupCheckBox->setObjectName(QStringLiteral("mCalendarPopupCheckBox"));
        mCalendarPopupCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(mCalendarPopupCheckBox, 1, 0, 1, 2);

        mAllowNullCheckBox = new QCheckBox(groupBox);
        mAllowNullCheckBox->setObjectName(QStringLiteral("mAllowNullCheckBox"));

        gridLayout_2->addWidget(mAllowNullCheckBox, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(QgsDateTimeEditConfig);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        mDemoDateTimeEdit = new QDateTimeEdit(QgsDateTimeEditConfig);
        mDemoDateTimeEdit->setObjectName(QStringLiteral("mDemoDateTimeEdit"));
        mDemoDateTimeEdit->setEnabled(false);
        mDemoDateTimeEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_3->addWidget(mDemoDateTimeEdit);


        gridLayout->addLayout(horizontalLayout_3, 9, 0, 1, 1);

        QWidget::setTabOrder(mFieldFormatComboBox, mFieldFormatEdit);
        QWidget::setTabOrder(mFieldFormatEdit, mFieldHelpToolButton);
        QWidget::setTabOrder(mFieldHelpToolButton, mDisplayFormatComboBox);
        QWidget::setTabOrder(mDisplayFormatComboBox, mDisplayFormatEdit);
        QWidget::setTabOrder(mDisplayFormatEdit, mDisplayHelpToolButton);
        QWidget::setTabOrder(mDisplayHelpToolButton, mCalendarPopupCheckBox);
        QWidget::setTabOrder(mCalendarPopupCheckBox, mAllowNullCheckBox);
        QWidget::setTabOrder(mAllowNullCheckBox, mHelpScrollArea);

        retranslateUi(QgsDateTimeEditConfig);

        QMetaObject::connectSlotsByName(QgsDateTimeEditConfig);
    } // setupUi

    void retranslateUi(QWidget *QgsDateTimeEditConfig)
    {
        mHelpLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("QgsDateTimeEditConfig", "Field Format", Q_NULLPTR));
        mFieldHelpToolButton->setText(QApplication::translate("QgsDateTimeEditConfig", "\342\200\246", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsDateTimeEditConfig", "Widget Display", Q_NULLPTR));
        mDisplayFormatComboBox->clear();
        mDisplayFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsDateTimeEditConfig", "Default", Q_NULLPTR)
         << QApplication::translate("QgsDateTimeEditConfig", "Custom", Q_NULLPTR)
        );
        mDisplayHelpToolButton->setText(QApplication::translate("QgsDateTimeEditConfig", "\342\200\246", Q_NULLPTR));
        mCalendarPopupCheckBox->setText(QApplication::translate("QgsDateTimeEditConfig", "Calendar popup", Q_NULLPTR));
        mAllowNullCheckBox->setText(QApplication::translate("QgsDateTimeEditConfig", "Allow NULL values", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDateTimeEditConfig", "Preview", Q_NULLPTR));
        Q_UNUSED(QgsDateTimeEditConfig);
    } // retranslateUi

};

namespace Ui {
    class QgsDateTimeEditConfig: public Ui_QgsDateTimeEditConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATETIMEEDITCONFIG_H
