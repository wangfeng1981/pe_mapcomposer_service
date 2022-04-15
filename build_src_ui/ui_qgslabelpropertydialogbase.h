/********************************************************************************
** Form generated from reading UI file 'qgslabelpropertydialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELPROPERTYDIALOGBASE_H
#define UI_QGSLABELPROPERTYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsscalewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelPropertyDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLabelTextLabel;
    QLineEdit *mLabelTextLineEdit;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mLabelPropertiesLayout;
    QgsCollapsibleGroupBox *mDisplayGroupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QgsScaleWidget *mMinScaleWidget;
    QgsScaleWidget *mMaxScaleWidget;
    QCheckBox *mShowLabelChkbx;
    QCheckBox *mAlwaysShowChkbx;
    QgsCollapsibleGroupBox *mFontGroupBox;
    QGridLayout *gridLayout;
    QFontComboBox *mFontFamilyCmbBx;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *mFontSizeLabel;
    QgsDoubleSpinBox *mFontSizeSpinBox;
    QgsColorButton *mFontColorButton;
    QHBoxLayout *horizontalLayout_22;
    QLabel *mMultiLineAlignLabel;
    QComboBox *mMultiLineAlignComboBox;
    QComboBox *mFontStyleCmbBx;
    QgsCollapsibleGroupBox *mBufferGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mBufferSizeLabel;
    QgsDoubleSpinBox *mBufferSizeSpinBox;
    QgsColorButton *mBufferColorButton;
    QCheckBox *mBufferDrawChkbx;
    QCheckBox *mShowCalloutChkbx;
    QgsCollapsibleGroupBox *mPositionGroupBlox;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mLabelDistanceSpinBox;
    QgsDoubleSpinBox *mXCoordSpinBox;
    QComboBox *mValiComboBox;
    QLabel *mLabelDistanceLabel;
    QgsDoubleSpinBox *mYCoordSpinBox;
    QComboBox *mHaliComboBox;
    QLabel *mValiLabel;
    QLabel *mXCoordLabel;
    QLabel *mYCoordLabel;
    QLabel *mRotationLabel;
    QLabel *mHaliLabel;
    QgsDoubleSpinBox *mRotationSpinBox;
    QCheckBox *mLabelAllPartsCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelPropertyDialogBase)
    {
        if (QgsLabelPropertyDialogBase->objectName().isEmpty())
            QgsLabelPropertyDialogBase->setObjectName(QStringLiteral("QgsLabelPropertyDialogBase"));
        QgsLabelPropertyDialogBase->resize(451, 703);
        verticalLayout_2 = new QVBoxLayout(QgsLabelPropertyDialogBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mLabelTextLabel = new QLabel(QgsLabelPropertyDialogBase);
        mLabelTextLabel->setObjectName(QStringLiteral("mLabelTextLabel"));

        horizontalLayout_3->addWidget(mLabelTextLabel);

        mLabelTextLineEdit = new QLineEdit(QgsLabelPropertyDialogBase);
        mLabelTextLineEdit->setObjectName(QStringLiteral("mLabelTextLineEdit"));

        horizontalLayout_3->addWidget(mLabelTextLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        scrollArea = new QgsScrollArea(QgsLabelPropertyDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -108, 419, 731));
        mLabelPropertiesLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mLabelPropertiesLayout->setObjectName(QStringLiteral("mLabelPropertiesLayout"));
        mLabelPropertiesLayout->setContentsMargins(0, 0, 0, 0);
        mDisplayGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDisplayGroupBox->setObjectName(QStringLiteral("mDisplayGroupBox"));
        gridLayout_5 = new QGridLayout(mDisplayGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(mDisplayGroupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label);

        mMinScaleWidget = new QgsScaleWidget(mDisplayGroupBox);
        mMinScaleWidget->setObjectName(QStringLiteral("mMinScaleWidget"));
        mMinScaleWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mMinScaleWidget);

        mMaxScaleWidget = new QgsScaleWidget(mDisplayGroupBox);
        mMaxScaleWidget->setObjectName(QStringLiteral("mMaxScaleWidget"));
        mMaxScaleWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mMaxScaleWidget);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        mShowLabelChkbx = new QCheckBox(mDisplayGroupBox);
        mShowLabelChkbx->setObjectName(QStringLiteral("mShowLabelChkbx"));

        gridLayout_5->addWidget(mShowLabelChkbx, 0, 0, 1, 1);

        mAlwaysShowChkbx = new QCheckBox(mDisplayGroupBox);
        mAlwaysShowChkbx->setObjectName(QStringLiteral("mAlwaysShowChkbx"));

        gridLayout_5->addWidget(mAlwaysShowChkbx, 3, 0, 1, 1);


        mLabelPropertiesLayout->addWidget(mDisplayGroupBox);

        mFontGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mFontGroupBox->setObjectName(QStringLiteral("mFontGroupBox"));
        gridLayout = new QGridLayout(mFontGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mFontFamilyCmbBx = new QFontComboBox(mFontGroupBox);
        mFontFamilyCmbBx->setObjectName(QStringLiteral("mFontFamilyCmbBx"));

        gridLayout->addWidget(mFontFamilyCmbBx, 0, 0, 1, 3);

        label_3 = new QLabel(mFontGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mFontUnderlineBtn = new QToolButton(mFontGroupBox);
        mFontUnderlineBtn->setObjectName(QStringLiteral("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        font.setUnderline(true);
        mFontUnderlineBtn->setFont(font);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(mFontGroupBox);
        mFontStrikethroughBtn->setObjectName(QStringLiteral("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font1);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontStrikethroughBtn);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mFontBoldBtn = new QToolButton(mFontGroupBox);
        mFontBoldBtn->setObjectName(QStringLiteral("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(false);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        mFontBoldBtn->setFont(font2);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(mFontGroupBox);
        mFontItalicBtn->setObjectName(QStringLiteral("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(false);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setItalic(true);
        mFontItalicBtn->setFont(font3);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontItalicBtn);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFontSizeLabel = new QLabel(mFontGroupBox);
        mFontSizeLabel->setObjectName(QStringLiteral("mFontSizeLabel"));
        sizePolicy.setHeightForWidth(mFontSizeLabel->sizePolicy().hasHeightForWidth());
        mFontSizeLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFontSizeLabel);

        mFontSizeSpinBox = new QgsDoubleSpinBox(mFontGroupBox);
        mFontSizeSpinBox->setObjectName(QStringLiteral("mFontSizeSpinBox"));
        mFontSizeSpinBox->setMinimum(0);
        mFontSizeSpinBox->setMaximum(999999);
        mFontSizeSpinBox->setValue(0);
        mFontSizeSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout->addWidget(mFontSizeSpinBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        mFontColorButton = new QgsColorButton(mFontGroupBox);
        mFontColorButton->setObjectName(QStringLiteral("mFontColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFontColorButton->sizePolicy().hasHeightForWidth());
        mFontColorButton->setSizePolicy(sizePolicy1);
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mFontColorButton, 3, 2, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        mMultiLineAlignLabel = new QLabel(mFontGroupBox);
        mMultiLineAlignLabel->setObjectName(QStringLiteral("mMultiLineAlignLabel"));
        sizePolicy.setHeightForWidth(mMultiLineAlignLabel->sizePolicy().hasHeightForWidth());
        mMultiLineAlignLabel->setSizePolicy(sizePolicy);

        horizontalLayout_22->addWidget(mMultiLineAlignLabel);

        mMultiLineAlignComboBox = new QComboBox(mFontGroupBox);
        mMultiLineAlignComboBox->setObjectName(QStringLiteral("mMultiLineAlignComboBox"));

        horizontalLayout_22->addWidget(mMultiLineAlignComboBox);


        gridLayout->addLayout(horizontalLayout_22, 4, 0, 1, 3);

        mFontStyleCmbBx = new QComboBox(mFontGroupBox);
        mFontStyleCmbBx->setObjectName(QStringLiteral("mFontStyleCmbBx"));

        gridLayout->addWidget(mFontStyleCmbBx, 1, 1, 1, 2);


        mLabelPropertiesLayout->addWidget(mFontGroupBox);

        mBufferGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mBufferGroupBox->setObjectName(QStringLiteral("mBufferGroupBox"));
        mBufferGroupBox->setCheckable(false);
        mBufferGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(mBufferGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mBufferSizeLabel = new QLabel(mBufferGroupBox);
        mBufferSizeLabel->setObjectName(QStringLiteral("mBufferSizeLabel"));
        sizePolicy.setHeightForWidth(mBufferSizeLabel->sizePolicy().hasHeightForWidth());
        mBufferSizeLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mBufferSizeLabel);

        mBufferSizeSpinBox = new QgsDoubleSpinBox(mBufferGroupBox);
        mBufferSizeSpinBox->setObjectName(QStringLiteral("mBufferSizeSpinBox"));
        mBufferSizeSpinBox->setMinimum(-1);
        mBufferSizeSpinBox->setMaximum(999999);
        mBufferSizeSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mBufferSizeSpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        mBufferColorButton = new QgsColorButton(mBufferGroupBox);
        mBufferColorButton->setObjectName(QStringLiteral("mBufferColorButton"));
        sizePolicy1.setHeightForWidth(mBufferColorButton->sizePolicy().hasHeightForWidth());
        mBufferColorButton->setSizePolicy(sizePolicy1);
        mBufferColorButton->setMinimumSize(QSize(120, 0));
        mBufferColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mBufferColorButton, 1, 1, 1, 1);

        mBufferDrawChkbx = new QCheckBox(mBufferGroupBox);
        mBufferDrawChkbx->setObjectName(QStringLiteral("mBufferDrawChkbx"));

        gridLayout_2->addWidget(mBufferDrawChkbx, 0, 0, 1, 1);


        mLabelPropertiesLayout->addWidget(mBufferGroupBox);

        mShowCalloutChkbx = new QCheckBox(scrollAreaWidgetContents);
        mShowCalloutChkbx->setObjectName(QStringLiteral("mShowCalloutChkbx"));
        mShowCalloutChkbx->setChecked(true);

        mLabelPropertiesLayout->addWidget(mShowCalloutChkbx);

        mPositionGroupBlox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPositionGroupBlox->setObjectName(QStringLiteral("mPositionGroupBlox"));
        gridLayout_3 = new QGridLayout(mPositionGroupBlox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mLabelDistanceSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mLabelDistanceSpinBox->setObjectName(QStringLiteral("mLabelDistanceSpinBox"));
        mLabelDistanceSpinBox->setMinimum(-1);
        mLabelDistanceSpinBox->setMaximum(999999);
        mLabelDistanceSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mLabelDistanceSpinBox, 0, 1, 1, 1);

        mXCoordSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mXCoordSpinBox->setObjectName(QStringLiteral("mXCoordSpinBox"));
        mXCoordSpinBox->setMinimum(-1e+9);
        mXCoordSpinBox->setMaximum(1e+9);
        mXCoordSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mXCoordSpinBox, 1, 1, 1, 1);

        mValiComboBox = new QComboBox(mPositionGroupBlox);
        mValiComboBox->setObjectName(QStringLiteral("mValiComboBox"));

        gridLayout_3->addWidget(mValiComboBox, 4, 1, 1, 1);

        mLabelDistanceLabel = new QLabel(mPositionGroupBlox);
        mLabelDistanceLabel->setObjectName(QStringLiteral("mLabelDistanceLabel"));
        sizePolicy.setHeightForWidth(mLabelDistanceLabel->sizePolicy().hasHeightForWidth());
        mLabelDistanceLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mLabelDistanceLabel, 0, 0, 1, 1);

        mYCoordSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mYCoordSpinBox->setObjectName(QStringLiteral("mYCoordSpinBox"));
        mYCoordSpinBox->setMinimum(-1e+9);
        mYCoordSpinBox->setMaximum(1e+9);
        mYCoordSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mYCoordSpinBox, 2, 1, 1, 1);

        mHaliComboBox = new QComboBox(mPositionGroupBlox);
        mHaliComboBox->setObjectName(QStringLiteral("mHaliComboBox"));

        gridLayout_3->addWidget(mHaliComboBox, 3, 1, 1, 1);

        mValiLabel = new QLabel(mPositionGroupBlox);
        mValiLabel->setObjectName(QStringLiteral("mValiLabel"));
        sizePolicy.setHeightForWidth(mValiLabel->sizePolicy().hasHeightForWidth());
        mValiLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mValiLabel, 4, 0, 1, 1);

        mXCoordLabel = new QLabel(mPositionGroupBlox);
        mXCoordLabel->setObjectName(QStringLiteral("mXCoordLabel"));
        sizePolicy.setHeightForWidth(mXCoordLabel->sizePolicy().hasHeightForWidth());
        mXCoordLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mXCoordLabel, 1, 0, 1, 1);

        mYCoordLabel = new QLabel(mPositionGroupBlox);
        mYCoordLabel->setObjectName(QStringLiteral("mYCoordLabel"));
        sizePolicy.setHeightForWidth(mYCoordLabel->sizePolicy().hasHeightForWidth());
        mYCoordLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mYCoordLabel, 2, 0, 1, 1);

        mRotationLabel = new QLabel(mPositionGroupBlox);
        mRotationLabel->setObjectName(QStringLiteral("mRotationLabel"));
        sizePolicy.setHeightForWidth(mRotationLabel->sizePolicy().hasHeightForWidth());
        mRotationLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mRotationLabel, 5, 0, 1, 1);

        mHaliLabel = new QLabel(mPositionGroupBlox);
        mHaliLabel->setObjectName(QStringLiteral("mHaliLabel"));
        sizePolicy.setHeightForWidth(mHaliLabel->sizePolicy().hasHeightForWidth());
        mHaliLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mHaliLabel, 3, 0, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mRotationSpinBox->setObjectName(QStringLiteral("mRotationSpinBox"));
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360);
        mRotationSpinBox->setMaximum(360);
        mRotationSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mRotationSpinBox, 5, 1, 1, 1);

        mLabelAllPartsCheckBox = new QCheckBox(mPositionGroupBlox);
        mLabelAllPartsCheckBox->setObjectName(QStringLiteral("mLabelAllPartsCheckBox"));
        mLabelAllPartsCheckBox->setChecked(false);

        gridLayout_3->addWidget(mLabelAllPartsCheckBox, 6, 0, 1, 2);


        mLabelPropertiesLayout->addWidget(mPositionGroupBlox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLabelPropertiesLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(QgsLabelPropertyDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(mLabelTextLineEdit, scrollArea);
        QWidget::setTabOrder(scrollArea, mShowLabelChkbx);
        QWidget::setTabOrder(mShowLabelChkbx, mMinScaleWidget);
        QWidget::setTabOrder(mMinScaleWidget, mMaxScaleWidget);
        QWidget::setTabOrder(mMaxScaleWidget, mAlwaysShowChkbx);
        QWidget::setTabOrder(mAlwaysShowChkbx, mFontFamilyCmbBx);
        QWidget::setTabOrder(mFontFamilyCmbBx, mFontStyleCmbBx);
        QWidget::setTabOrder(mFontStyleCmbBx, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontBoldBtn);
        QWidget::setTabOrder(mFontBoldBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mBufferSizeSpinBox);
        QWidget::setTabOrder(mBufferSizeSpinBox, mBufferColorButton);
        QWidget::setTabOrder(mBufferColorButton, mLabelDistanceSpinBox);
        QWidget::setTabOrder(mLabelDistanceSpinBox, mXCoordSpinBox);
        QWidget::setTabOrder(mXCoordSpinBox, mYCoordSpinBox);
        QWidget::setTabOrder(mYCoordSpinBox, mHaliComboBox);
        QWidget::setTabOrder(mHaliComboBox, mValiComboBox);
        QWidget::setTabOrder(mValiComboBox, mRotationSpinBox);

        retranslateUi(QgsLabelPropertyDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLabelPropertyDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLabelPropertyDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLabelPropertyDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelPropertyDialogBase)
    {
        QgsLabelPropertyDialogBase->setWindowTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Label Properties", Q_NULLPTR));
        mLabelTextLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Text", Q_NULLPTR));
        mDisplayGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Display", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Scale-based", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMinScaleWidget->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Minimum scale, i.e. most \"zoomed out\".", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mMaxScaleWidget->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Minimum scale, i.e. most \"zoomed out\".", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mShowLabelChkbx->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Show label", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAlwaysShowChkbx->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Ignores priority and permits collisions/overlaps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAlwaysShowChkbx->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Always show (exceptions above)", Q_NULLPTR));
        mFontGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Font", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Style", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontUnderlineBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Underlined text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontUnderlineBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "U", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontStrikethroughBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Strikeout text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontStrikethroughBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "S", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontBoldBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Bold text\n"
"(data defined only, overrides Style)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontBoldBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontItalicBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Italic text\n"
"(data defined only, overrides Style)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontItalicBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "I", Q_NULLPTR));
        mFontSizeLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Size", Q_NULLPTR));
        mFontSizeSpinBox->setSpecialValueText(QApplication::translate("QgsLabelPropertyDialogBase", "Default", Q_NULLPTR));
        mFontColorButton->setText(QString());
        mMultiLineAlignLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Multiline alignment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontStyleCmbBx->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Available typeface styles", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mBufferGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Buffer", Q_NULLPTR));
        mBufferSizeLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Size", Q_NULLPTR));
        mBufferColorButton->setText(QString());
        mBufferDrawChkbx->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Draw text buffer", Q_NULLPTR));
        mShowCalloutChkbx->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Show callout", Q_NULLPTR));
        mPositionGroupBlox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Position", Q_NULLPTR));
        mLabelDistanceSpinBox->setSpecialValueText(QApplication::translate("QgsLabelPropertyDialogBase", "Default", Q_NULLPTR));
        mXCoordSpinBox->setSpecialValueText(QApplication::translate("QgsLabelPropertyDialogBase", "Default", Q_NULLPTR));
        mLabelDistanceLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Label distance", Q_NULLPTR));
        mYCoordSpinBox->setSpecialValueText(QApplication::translate("QgsLabelPropertyDialogBase", "Default", Q_NULLPTR));
        mValiLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Vertical alignment", Q_NULLPTR));
        mXCoordLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "X Coordinate", Q_NULLPTR));
        mYCoordLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Y Coordinate", Q_NULLPTR));
        mRotationLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Rotation", Q_NULLPTR));
        mHaliLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Horizontal alignment", Q_NULLPTR));
        mRotationSpinBox->setSpecialValueText(QApplication::translate("QgsLabelPropertyDialogBase", "Default", Q_NULLPTR));
        mRotationSpinBox->setSuffix(QApplication::translate("QgsLabelPropertyDialogBase", "\313\232", Q_NULLPTR));
        mLabelAllPartsCheckBox->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Label every part of feature", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelPropertyDialogBase: public Ui_QgsLabelPropertyDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELPROPERTYDIALOGBASE_H
