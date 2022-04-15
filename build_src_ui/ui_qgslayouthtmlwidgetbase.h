/********************************************************************************
** Form generated from reading UI file 'qgslayouthtmlwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTHTMLWIDGETBASE_H
#define UI_QGSLAYOUTHTMLWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutHtmlWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *mEvaluateExpressionsCheckbox;
    QPushButton *mReloadPushButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mUrlLineEdit;
    QToolButton *mFileToolButton;
    QgsPropertyOverrideButton *mUrlDDBtn;
    QRadioButton *mRadioManualSource;
    QVBoxLayout *htmlEditorLayout;
    QRadioButton *mRadioUrlSource;
    QPushButton *mInsertExpressionButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout;
    QComboBox *mResizeModeComboBox;
    QCheckBox *mEmptyFrameCheckBox;
    QPushButton *mAddFramePushButton;
    QLabel *mResizeModeLabel;
    QCheckBox *mHideEmptyBgCheckBox;
    QgsCollapsibleGroupBoxBasic *mUseSmartBreaksCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *mLabelMaxDistance;
    QgsDoubleSpinBox *mMaxDistanceSpinBox;
    QgsCollapsibleGroupBoxBasic *mUserStylesheetCheckBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *stylesheetEditorLayout;
    QPushButton *mReloadPushButton2;

    void setupUi(QWidget *QgsLayoutHtmlWidgetBase)
    {
        if (QgsLayoutHtmlWidgetBase->objectName().isEmpty())
            QgsLayoutHtmlWidgetBase->setObjectName(QStringLiteral("QgsLayoutHtmlWidgetBase"));
        QgsLayoutHtmlWidgetBase->resize(409, 383);
        verticalLayout = new QVBoxLayout(QgsLayoutHtmlWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutHtmlWidgetBase);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutHtmlWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 393, 585));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mEvaluateExpressionsCheckbox = new QCheckBox(groupBox);
        mEvaluateExpressionsCheckbox->setObjectName(QStringLiteral("mEvaluateExpressionsCheckbox"));

        gridLayout_2->addWidget(mEvaluateExpressionsCheckbox, 5, 0, 1, 2);

        mReloadPushButton = new QPushButton(groupBox);
        mReloadPushButton->setObjectName(QStringLiteral("mReloadPushButton"));

        gridLayout_2->addWidget(mReloadPushButton, 6, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mUrlLineEdit = new QLineEdit(groupBox);
        mUrlLineEdit->setObjectName(QStringLiteral("mUrlLineEdit"));

        horizontalLayout->addWidget(mUrlLineEdit);

        mFileToolButton = new QToolButton(groupBox);
        mFileToolButton->setObjectName(QStringLiteral("mFileToolButton"));

        horizontalLayout->addWidget(mFileToolButton);

        mUrlDDBtn = new QgsPropertyOverrideButton(groupBox);
        mUrlDDBtn->setObjectName(QStringLiteral("mUrlDDBtn"));

        horizontalLayout->addWidget(mUrlDDBtn);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        mRadioManualSource = new QRadioButton(groupBox);
        mRadioManualSource->setObjectName(QStringLiteral("mRadioManualSource"));

        gridLayout_2->addWidget(mRadioManualSource, 2, 0, 1, 2);

        htmlEditorLayout = new QVBoxLayout();
        htmlEditorLayout->setObjectName(QStringLiteral("htmlEditorLayout"));

        gridLayout_2->addLayout(htmlEditorLayout, 3, 0, 1, 2);

        mRadioUrlSource = new QRadioButton(groupBox);
        mRadioUrlSource->setObjectName(QStringLiteral("mRadioUrlSource"));

        gridLayout_2->addWidget(mRadioUrlSource, 0, 0, 1, 1);

        mInsertExpressionButton = new QPushButton(groupBox);
        mInsertExpressionButton->setObjectName(QStringLiteral("mInsertExpressionButton"));

        gridLayout_2->addWidget(mInsertExpressionButton, 4, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QStringLiteral("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        frameGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        gridLayout = new QGridLayout(frameGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QStringLiteral("mResizeModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QStringLiteral("mEmptyFrameCheckBox"));

        gridLayout->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QStringLiteral("mAddFramePushButton"));

        gridLayout->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QStringLiteral("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QStringLiteral("mHideEmptyBgCheckBox"));

        gridLayout->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        mUseSmartBreaksCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mUseSmartBreaksCheckBox->setObjectName(QStringLiteral("mUseSmartBreaksCheckBox"));
        mUseSmartBreaksCheckBox->setCheckable(true);
        mUseSmartBreaksCheckBox->setChecked(false);
        mUseSmartBreaksCheckBox->setProperty("collapsed", QVariant(false));
        mUseSmartBreaksCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        gridLayout_3 = new QGridLayout(mUseSmartBreaksCheckBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mLabelMaxDistance = new QLabel(mUseSmartBreaksCheckBox);
        mLabelMaxDistance->setObjectName(QStringLiteral("mLabelMaxDistance"));

        gridLayout_3->addWidget(mLabelMaxDistance, 0, 0, 1, 1);

        mMaxDistanceSpinBox = new QgsDoubleSpinBox(mUseSmartBreaksCheckBox);
        mMaxDistanceSpinBox->setObjectName(QStringLiteral("mMaxDistanceSpinBox"));
        mMaxDistanceSpinBox->setDecimals(1);
        mMaxDistanceSpinBox->setMaximum(1000);
        mMaxDistanceSpinBox->setSingleStep(1);
        mMaxDistanceSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mMaxDistanceSpinBox, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        mainLayout->addWidget(mUseSmartBreaksCheckBox);

        mUserStylesheetCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mUserStylesheetCheckBox->setObjectName(QStringLiteral("mUserStylesheetCheckBox"));
        mUserStylesheetCheckBox->setCheckable(true);
        mUserStylesheetCheckBox->setChecked(false);
        mUserStylesheetCheckBox->setProperty("collapsed", QVariant(true));
        mUserStylesheetCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        verticalLayout_2 = new QVBoxLayout(mUserStylesheetCheckBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stylesheetEditorLayout = new QVBoxLayout();
        stylesheetEditorLayout->setObjectName(QStringLiteral("stylesheetEditorLayout"));

        verticalLayout_2->addLayout(stylesheetEditorLayout);

        mReloadPushButton2 = new QPushButton(mUserStylesheetCheckBox);
        mReloadPushButton2->setObjectName(QStringLiteral("mReloadPushButton2"));

        verticalLayout_2->addWidget(mReloadPushButton2);


        mainLayout->addWidget(mUserStylesheetCheckBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mRadioUrlSource);
        QWidget::setTabOrder(mRadioUrlSource, mUrlLineEdit);
        QWidget::setTabOrder(mUrlLineEdit, mFileToolButton);
        QWidget::setTabOrder(mFileToolButton, mUrlDDBtn);
        QWidget::setTabOrder(mUrlDDBtn, mRadioManualSource);
        QWidget::setTabOrder(mRadioManualSource, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mEvaluateExpressionsCheckbox);
        QWidget::setTabOrder(mEvaluateExpressionsCheckbox, mReloadPushButton);
        QWidget::setTabOrder(mReloadPushButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);
        QWidget::setTabOrder(mHideEmptyBgCheckBox, mUseSmartBreaksCheckBox);
        QWidget::setTabOrder(mUseSmartBreaksCheckBox, mMaxDistanceSpinBox);
        QWidget::setTabOrder(mMaxDistanceSpinBox, mUserStylesheetCheckBox);
        QWidget::setTabOrder(mUserStylesheetCheckBox, mReloadPushButton2);

        retranslateUi(QgsLayoutHtmlWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutHtmlWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutHtmlWidgetBase)
    {
        QgsLayoutHtmlWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutHtmlWidgetBase", "HTML Frame", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "HTML frame", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutHtmlWidgetBase", "HTML Source", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEvaluateExpressionsCheckbox->setToolTip(QApplication::translate("QgsLayoutHtmlWidgetBase", "If checked, expressions inside [% %] tags will be evaluated prior to rendering the HTML", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mEvaluateExpressionsCheckbox->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Evaluate QGIS expressions in HTML source", Q_NULLPTR));
        mReloadPushButton->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Refresh HTML", Q_NULLPTR));
        mFileToolButton->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "\342\200\246", Q_NULLPTR));
        mUrlDDBtn->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "\342\200\246", Q_NULLPTR));
        mRadioManualSource->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Source", Q_NULLPTR));
        mRadioUrlSource->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "URL", Q_NULLPTR));
        mInsertExpressionButton->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Insert or Edit an Expression\342\200\246", Q_NULLPTR));
        frameGroupBox->setTitle(QApplication::translate("QgsLayoutHtmlWidgetBase", "Frames", Q_NULLPTR));
        mEmptyFrameCheckBox->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Don't export page if frame is empty", Q_NULLPTR));
        mAddFramePushButton->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Add Frame", Q_NULLPTR));
        mResizeModeLabel->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Resize mode", Q_NULLPTR));
        mHideEmptyBgCheckBox->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Don't draw background if frame is empty", Q_NULLPTR));
        mUseSmartBreaksCheckBox->setTitle(QApplication::translate("QgsLayoutHtmlWidgetBase", "Use Smart Page Breaks", Q_NULLPTR));
        mLabelMaxDistance->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Maximum distance", Q_NULLPTR));
        mMaxDistanceSpinBox->setSuffix(QApplication::translate("QgsLayoutHtmlWidgetBase", " mm", Q_NULLPTR));
        mUserStylesheetCheckBox->setTitle(QApplication::translate("QgsLayoutHtmlWidgetBase", "User Stylesheet", Q_NULLPTR));
        mReloadPushButton2->setText(QApplication::translate("QgsLayoutHtmlWidgetBase", "Update HTML", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutHtmlWidgetBase: public Ui_QgsLayoutHtmlWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTHTMLWIDGETBASE_H
