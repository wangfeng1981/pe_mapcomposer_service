/********************************************************************************
** Form generated from reading UI file 'qgslayoutmanualtablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMANUALTABLEWIDGETBASE_H
#define UI_QGSLAYOUTMANUALTABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutManualTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *mSetContentsButton;
    QgsCollapsibleGroupBoxBasic *groupBox_6;
    QGridLayout *gridLayout_6;
    QPushButton *mAdvancedCustomizationButton;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *mHeaderModeComboBox;
    QLabel *mMarginLabel;
    QComboBox *mWrapBehaviorComboBox;
    QgsDoubleSpinBox *mMarginSpinBox;
    QLabel *label_10;
    QLabel *label_12;
    QCheckBox *mDrawEmptyCheckBox;
    QLabel *label_7;
    QgsCollapsibleGroupBoxBasic *mShowGridGroupCheckBox;
    QGridLayout *gridLayout_7;
    QLabel *mGridStrokeWidthLabel;
    QgsDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButton *mGridColorButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mDrawHorizontalGrid;
    QCheckBox *mDrawVerticalGrid;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QComboBox *mHeaderHAlignmentComboBox;
    QLabel *label_5;
    QgsFontButton *mHeaderFontToolButton;
    QLabel *label_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *lblContentsFont;
    QgsFontButton *mContentFontToolButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mResizeModeLabel;
    QComboBox *mResizeModeComboBox;
    QPushButton *mAddFramePushButton;
    QCheckBox *mEmptyFrameCheckBox;
    QCheckBox *mHideEmptyBgCheckBox;

    void setupUi(QWidget *QgsLayoutManualTableWidgetBase)
    {
        if (QgsLayoutManualTableWidgetBase->objectName().isEmpty())
            QgsLayoutManualTableWidgetBase->setObjectName(QStringLiteral("QgsLayoutManualTableWidgetBase"));
        QgsLayoutManualTableWidgetBase->resize(410, 815);
        verticalLayout = new QVBoxLayout(QgsLayoutManualTableWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutManualTableWidgetBase);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutManualTableWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 394, 914));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mSetContentsButton = new QPushButton(groupBox);
        mSetContentsButton->setObjectName(QStringLiteral("mSetContentsButton"));

        gridLayout_4->addWidget(mSetContentsButton, 3, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        groupBox_6 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFocusPolicy(Qt::StrongFocus);
        groupBox_6->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_6->setProperty("collapsed", QVariant(false));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mAdvancedCustomizationButton = new QPushButton(groupBox_6);
        mAdvancedCustomizationButton->setObjectName(QStringLiteral("mAdvancedCustomizationButton"));

        gridLayout_6->addWidget(mAdvancedCustomizationButton, 5, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButton(groupBox_6);
        mBackgroundColorButton->setObjectName(QStringLiteral("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        mHeaderModeComboBox = new QComboBox(groupBox_6);
        mHeaderModeComboBox->setObjectName(QStringLiteral("mHeaderModeComboBox"));

        gridLayout_6->addWidget(mHeaderModeComboBox, 3, 1, 1, 1);

        mMarginLabel = new QLabel(groupBox_6);
        mMarginLabel->setObjectName(QStringLiteral("mMarginLabel"));
        mMarginLabel->setWordWrap(true);

        gridLayout_6->addWidget(mMarginLabel, 2, 0, 1, 1);

        mWrapBehaviorComboBox = new QComboBox(groupBox_6);
        mWrapBehaviorComboBox->setObjectName(QStringLiteral("mWrapBehaviorComboBox"));

        gridLayout_6->addWidget(mWrapBehaviorComboBox, 6, 1, 1, 1);

        mMarginSpinBox = new QgsDoubleSpinBox(groupBox_6);
        mMarginSpinBox->setObjectName(QStringLiteral("mMarginSpinBox"));
        mMarginSpinBox->setSingleStep(0.1);
        mMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mMarginSpinBox, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 4, 0, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 6, 0, 1, 1);

        mDrawEmptyCheckBox = new QCheckBox(groupBox_6);
        mDrawEmptyCheckBox->setObjectName(QStringLiteral("mDrawEmptyCheckBox"));

        gridLayout_6->addWidget(mDrawEmptyCheckBox, 1, 0, 1, 2);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);


        mainLayout->addWidget(groupBox_6);

        mShowGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mShowGridGroupCheckBox->setObjectName(QStringLiteral("mShowGridGroupCheckBox"));
        mShowGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mShowGridGroupCheckBox->setCheckable(true);
        mShowGridGroupCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mShowGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(mShowGridGroupCheckBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        mGridStrokeWidthLabel = new QLabel(mShowGridGroupCheckBox);
        mGridStrokeWidthLabel->setObjectName(QStringLiteral("mGridStrokeWidthLabel"));
        mGridStrokeWidthLabel->setWordWrap(true);

        gridLayout_7->addWidget(mGridStrokeWidthLabel, 0, 0, 1, 1);

        mGridStrokeWidthSpinBox = new QgsDoubleSpinBox(mShowGridGroupCheckBox);
        mGridStrokeWidthSpinBox->setObjectName(QStringLiteral("mGridStrokeWidthSpinBox"));
        mGridStrokeWidthSpinBox->setSingleStep(0.1);
        mGridStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mGridStrokeWidthSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(mShowGridGroupCheckBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mGridColorButton = new QgsColorButton(mShowGridGroupCheckBox);
        mGridColorButton->setObjectName(QStringLiteral("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mGridColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        mDrawHorizontalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawHorizontalGrid->setObjectName(QStringLiteral("mDrawHorizontalGrid"));

        gridLayout_7->addWidget(mDrawHorizontalGrid, 2, 0, 1, 2);

        mDrawVerticalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawVerticalGrid->setObjectName(QStringLiteral("mDrawVerticalGrid"));

        gridLayout_7->addWidget(mDrawVerticalGrid, 3, 0, 1, 2);


        mainLayout->addWidget(mShowGridGroupCheckBox);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mHeaderHAlignmentComboBox = new QComboBox(groupBox_3);
        mHeaderHAlignmentComboBox->setObjectName(QStringLiteral("mHeaderHAlignmentComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mHeaderHAlignmentComboBox->sizePolicy().hasHeightForWidth());
        mHeaderHAlignmentComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderHAlignmentComboBox, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mHeaderFontToolButton = new QgsFontButton(groupBox_3);
        mHeaderFontToolButton->setObjectName(QStringLiteral("mHeaderFontToolButton"));
        sizePolicy1.setHeightForWidth(mHeaderFontToolButton->sizePolicy().hasHeightForWidth());
        mHeaderFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderFontToolButton, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblContentsFont = new QLabel(groupBox_5);
        lblContentsFont->setObjectName(QStringLiteral("lblContentsFont"));

        gridLayout_2->addWidget(lblContentsFont, 0, 0, 1, 1);

        mContentFontToolButton = new QgsFontButton(groupBox_5);
        mContentFontToolButton->setObjectName(QStringLiteral("mContentFontToolButton"));
        sizePolicy1.setHeightForWidth(mContentFontToolButton->sizePolicy().hasHeightForWidth());
        mContentFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mContentFontToolButton, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);


        mainLayout->addWidget(groupBox_4);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QStringLiteral("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(frameGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QStringLiteral("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QStringLiteral("mResizeModeComboBox"));
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QStringLiteral("mAddFramePushButton"));

        gridLayout_3->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QStringLiteral("mEmptyFrameCheckBox"));

        gridLayout_3->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QStringLiteral("mHideEmptyBgCheckBox"));

        gridLayout_3->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mMarginLabel->setBuddy(mMarginSpinBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mSetContentsButton);
        QWidget::setTabOrder(mSetContentsButton, groupBox_6);
        QWidget::setTabOrder(groupBox_6, mDrawEmptyCheckBox);
        QWidget::setTabOrder(mDrawEmptyCheckBox, mMarginSpinBox);
        QWidget::setTabOrder(mMarginSpinBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mAdvancedCustomizationButton);
        QWidget::setTabOrder(mAdvancedCustomizationButton, mWrapBehaviorComboBox);
        QWidget::setTabOrder(mWrapBehaviorComboBox, mShowGridGroupCheckBox);
        QWidget::setTabOrder(mShowGridGroupCheckBox, mGridStrokeWidthSpinBox);
        QWidget::setTabOrder(mGridStrokeWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mDrawHorizontalGrid);
        QWidget::setTabOrder(mDrawHorizontalGrid, mDrawVerticalGrid);
        QWidget::setTabOrder(mDrawVerticalGrid, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);

        retranslateUi(QgsLayoutManualTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutManualTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutManualTableWidgetBase)
    {
        QgsLayoutManualTableWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Attribute Table", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Table", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Main Properties", Q_NULLPTR));
        mSetContentsButton->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Edit Table\342\200\246", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Appearance", Q_NULLPTR));
        mAdvancedCustomizationButton->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Advanced Customization\342\200\246", Q_NULLPTR));
        mBackgroundColorButton->setText(QString());
        mMarginLabel->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Cell margins", Q_NULLPTR));
        mMarginSpinBox->setSuffix(QApplication::translate("QgsLayoutManualTableWidgetBase", " mm", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Background color", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Oversized text", Q_NULLPTR));
        mDrawEmptyCheckBox->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Show empty rows", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Display header", Q_NULLPTR));
        mShowGridGroupCheckBox->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Show Grid", Q_NULLPTR));
        mGridStrokeWidthLabel->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Line width", Q_NULLPTR));
        mGridStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutManualTableWidgetBase", " mm", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Color", Q_NULLPTR));
        mGridColorButton->setText(QString());
        mDrawHorizontalGrid->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Draw horizontal lines", Q_NULLPTR));
        mDrawVerticalGrid->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Draw vertical lines", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Fonts and Text Styling", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Table Heading", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Font", Q_NULLPTR));
        mHeaderFontToolButton->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Heading Font", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Alignment", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Table Contents", Q_NULLPTR));
        lblContentsFont->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Font", Q_NULLPTR));
        mContentFontToolButton->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Contents Font", Q_NULLPTR));
        frameGroupBox->setTitle(QApplication::translate("QgsLayoutManualTableWidgetBase", "Frames", Q_NULLPTR));
        mResizeModeLabel->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Resize mode", Q_NULLPTR));
        mAddFramePushButton->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Add Frame", Q_NULLPTR));
        mEmptyFrameCheckBox->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Don't export page if frame is empty", Q_NULLPTR));
        mHideEmptyBgCheckBox->setText(QApplication::translate("QgsLayoutManualTableWidgetBase", "Don't draw background if frame is empty", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutManualTableWidgetBase: public Ui_QgsLayoutManualTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMANUALTABLEWIDGETBASE_H
