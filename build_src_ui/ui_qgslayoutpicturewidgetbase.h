/********************************************************************************
** Form generated from reading UI file 'qgslayoutpicturewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTPICTUREWIDGETBASE_H
#define UI_QGSLAYOUTPICTUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgslayoutitemcombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutPictureWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QRadioButton *mRadioSVG;
    QRadioButton *mRadioRaster;
    QFrame *mRasterFrame;
    QHBoxLayout *horizontalLayout_3;
    QgsImageSourceLineEdit *mImageSourceLineEdit;
    QFrame *mRasterDDBtnFrame;
    QVBoxLayout *verticalLayout;
    QgsPropertyOverrideButton *mSourceDDBtn;
    QFrame *mSVGFrame;
    QGridLayout *gridLayout_4;
    QgsSvgSourceLineEdit *mSvgSourceLineEdit;
    QFrame *mSvgDDBtnFrame;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QTreeView *viewGroups;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListView *viewImages;
    QgsCollapsibleGroupBoxBasic *mSVGParamsGroupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QLabel *mStrokeColorLabel;
    QgsColorButton *mFillColorButton;
    QLabel *mStrokeWidthLabel;
    QgsColorButton *mStrokeColorButton;
    QLabel *label_6;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QgsCollapsibleGroupBoxBasic *mPreviewGroupBox;
    QGridLayout *gridLayout;
    QComboBox *mResizeModeComboBox;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *mAnchorPointComboBox;
    QgsCollapsibleGroupBoxBasic *mRotationGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *mNorthTypeComboBox;
    QLabel *label_7;
    QCheckBox *mRotationFromComposerMapCheckBox;
    QgsLayoutItemComboBox *mComposerMapComboBox;
    QgsDoubleSpinBox *mPictureRotationSpinBox;
    QLabel *label_8;
    QgsDoubleSpinBox *mPictureRotationOffsetSpinBox;

    void setupUi(QWidget *QgsLayoutPictureWidgetBase)
    {
        if (QgsLayoutPictureWidgetBase->objectName().isEmpty())
            QgsLayoutPictureWidgetBase->setObjectName(QStringLiteral("QgsLayoutPictureWidgetBase"));
        QgsLayoutPictureWidgetBase->resize(536, 500);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutPictureWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutPictureWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutPictureWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutPictureWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutPictureWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -4, 520, 881));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mRadioSVG = new QRadioButton(scrollAreaWidgetContents);
        mRadioSVG->setObjectName(QStringLiteral("mRadioSVG"));
        mRadioSVG->setChecked(true);

        mainLayout->addWidget(mRadioSVG);

        mRadioRaster = new QRadioButton(scrollAreaWidgetContents);
        mRadioRaster->setObjectName(QStringLiteral("mRadioRaster"));

        mainLayout->addWidget(mRadioRaster);

        mRasterFrame = new QFrame(scrollAreaWidgetContents);
        mRasterFrame->setObjectName(QStringLiteral("mRasterFrame"));
        mRasterFrame->setFrameShape(QFrame::NoFrame);
        mRasterFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(mRasterFrame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mImageSourceLineEdit = new QgsImageSourceLineEdit(mRasterFrame);
        mImageSourceLineEdit->setObjectName(QStringLiteral("mImageSourceLineEdit"));
        mImageSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mImageSourceLineEdit);

        mRasterDDBtnFrame = new QFrame(mRasterFrame);
        mRasterDDBtnFrame->setObjectName(QStringLiteral("mRasterDDBtnFrame"));
        mRasterDDBtnFrame->setFrameShape(QFrame::NoFrame);
        mRasterDDBtnFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(mRasterDDBtnFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mSourceDDBtn = new QgsPropertyOverrideButton(mRasterDDBtnFrame);
        mSourceDDBtn->setObjectName(QStringLiteral("mSourceDDBtn"));

        verticalLayout->addWidget(mSourceDDBtn);


        horizontalLayout_3->addWidget(mRasterDDBtnFrame);

        horizontalLayout_3->setStretch(0, 1);

        mainLayout->addWidget(mRasterFrame);

        mSVGFrame = new QFrame(scrollAreaWidgetContents);
        mSVGFrame->setObjectName(QStringLiteral("mSVGFrame"));
        mSVGFrame->setFrameShape(QFrame::NoFrame);
        mSVGFrame->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(mSVGFrame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mSvgSourceLineEdit = new QgsSvgSourceLineEdit(mSVGFrame);
        mSvgSourceLineEdit->setObjectName(QStringLiteral("mSvgSourceLineEdit"));
        mSvgSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mSvgSourceLineEdit, 1, 0, 1, 1);

        mSvgDDBtnFrame = new QFrame(mSVGFrame);
        mSvgDDBtnFrame->setObjectName(QStringLiteral("mSvgDDBtnFrame"));
        mSvgDDBtnFrame->setFrameShape(QFrame::NoFrame);
        mSvgDDBtnFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(mSvgDDBtnFrame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        gridLayout_4->addWidget(mSvgDDBtnFrame, 1, 1, 1, 1);

        splitter = new QSplitter(mSVGFrame);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        viewGroups = new QTreeView(layoutWidget);
        viewGroups->setObjectName(QStringLiteral("viewGroups"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(viewGroups->sizePolicy().hasHeightForWidth());
        viewGroups->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(viewGroups);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        viewImages = new QListView(layoutWidget1);
        viewImages->setObjectName(QStringLiteral("viewImages"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(5);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(viewImages->sizePolicy().hasHeightForWidth());
        viewImages->setSizePolicy(sizePolicy3);
        viewImages->setMinimumSize(QSize(0, 250));
        viewImages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewImages->setIconSize(QSize(32, 32));
        viewImages->setMovement(QListView::Static);
        viewImages->setResizeMode(QListView::Adjust);
        viewImages->setLayoutMode(QListView::Batched);
        viewImages->setSpacing(2);
        viewImages->setGridSize(QSize(36, 36));
        viewImages->setViewMode(QListView::IconMode);
        viewImages->setUniformItemSizes(true);
        viewImages->setWordWrap(true);

        verticalLayout_4->addWidget(viewImages);

        splitter->addWidget(layoutWidget1);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 2);

        gridLayout_4->setColumnStretch(0, 1);

        mainLayout->addWidget(mSVGFrame);

        mSVGParamsGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSVGParamsGroupBox->setObjectName(QStringLiteral("mSVGParamsGroupBox"));
        gridLayout_3 = new QGridLayout(mSVGParamsGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        mStrokeWidthSpinBox = new QgsDoubleSpinBox(mSVGParamsGroupBox);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy4);
        mStrokeWidthSpinBox->setDecimals(2);
        mStrokeWidthSpinBox->setMaximum(9999);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setValue(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mStrokeWidthSpinBox, 2, 1, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(mSVGParamsGroupBox);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_3->addWidget(mFillColorDDBtn, 0, 3, 1, 1);

        mStrokeColorLabel = new QLabel(mSVGParamsGroupBox);
        mStrokeColorLabel->setObjectName(QStringLiteral("mStrokeColorLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mStrokeColorLabel->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(mStrokeColorLabel, 1, 0, 1, 1);

        mFillColorButton = new QgsColorButton(mSVGParamsGroupBox);
        mFillColorButton->setObjectName(QStringLiteral("mFillColorButton"));
        mFillColorButton->setMinimumSize(QSize(120, 0));
        mFillColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(mFillColorButton, 0, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(mSVGParamsGroupBox);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_3->addWidget(mStrokeWidthLabel, 2, 0, 1, 1);

        mStrokeColorButton = new QgsColorButton(mSVGParamsGroupBox);
        mStrokeColorButton->setObjectName(QStringLiteral("mStrokeColorButton"));
        mStrokeColorButton->setMinimumSize(QSize(120, 0));
        mStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(mStrokeColorButton, 1, 1, 1, 1);

        label_6 = new QLabel(mSVGParamsGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(mSVGParamsGroupBox);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_3->addWidget(mStrokeColorDDBtn, 1, 3, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(mSVGParamsGroupBox);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_3->addWidget(mStrokeWidthDDBtn, 2, 3, 1, 1);


        mainLayout->addWidget(mSVGParamsGroupBox);

        mPreviewGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mPreviewGroupBox->setObjectName(QStringLiteral("mPreviewGroupBox"));
        mPreviewGroupBox->setFocusPolicy(Qt::StrongFocus);
        mPreviewGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mPreviewGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mPreviewGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mResizeModeComboBox = new QComboBox(mPreviewGroupBox);
        mResizeModeComboBox->setObjectName(QStringLiteral("mResizeModeComboBox"));

        gridLayout->addWidget(mResizeModeComboBox, 1, 0, 1, 1);

        label_5 = new QLabel(mPreviewGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(mPreviewGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        mAnchorPointComboBox = new QComboBox(mPreviewGroupBox);
        mAnchorPointComboBox->setObjectName(QStringLiteral("mAnchorPointComboBox"));

        gridLayout->addWidget(mAnchorPointComboBox, 3, 0, 1, 1);


        mainLayout->addWidget(mPreviewGroupBox);

        mRotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mRotationGroupBox->setObjectName(QStringLiteral("mRotationGroupBox"));
        mRotationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mRotationGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mRotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mRotationGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mNorthTypeComboBox = new QComboBox(mRotationGroupBox);
        mNorthTypeComboBox->setObjectName(QStringLiteral("mNorthTypeComboBox"));

        gridLayout_2->addWidget(mNorthTypeComboBox, 2, 1, 1, 1);

        label_7 = new QLabel(mRotationGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        mRotationFromComposerMapCheckBox = new QCheckBox(mRotationGroupBox);
        mRotationFromComposerMapCheckBox->setObjectName(QStringLiteral("mRotationFromComposerMapCheckBox"));

        gridLayout_2->addWidget(mRotationFromComposerMapCheckBox, 1, 0, 1, 1);

        mComposerMapComboBox = new QgsLayoutItemComboBox(mRotationGroupBox);
        mComposerMapComboBox->setObjectName(QStringLiteral("mComposerMapComboBox"));

        gridLayout_2->addWidget(mComposerMapComboBox, 1, 1, 1, 1);

        mPictureRotationSpinBox = new QgsDoubleSpinBox(mRotationGroupBox);
        mPictureRotationSpinBox->setObjectName(QStringLiteral("mPictureRotationSpinBox"));
        mPictureRotationSpinBox->setWrapping(true);
        mPictureRotationSpinBox->setMinimum(-360);
        mPictureRotationSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mPictureRotationSpinBox, 0, 0, 1, 2);

        label_8 = new QLabel(mRotationGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        mPictureRotationOffsetSpinBox = new QgsDoubleSpinBox(mRotationGroupBox);
        mPictureRotationOffsetSpinBox->setObjectName(QStringLiteral("mPictureRotationOffsetSpinBox"));
        mPictureRotationOffsetSpinBox->setWrapping(true);
        mPictureRotationOffsetSpinBox->setMinimum(-360);
        mPictureRotationOffsetSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mPictureRotationOffsetSpinBox, 3, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        mainLayout->addWidget(mRotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mRadioSVG);
        QWidget::setTabOrder(mRadioSVG, mRadioRaster);
        QWidget::setTabOrder(mRadioRaster, mImageSourceLineEdit);
        QWidget::setTabOrder(mImageSourceLineEdit, viewGroups);
        QWidget::setTabOrder(viewGroups, viewImages);
        QWidget::setTabOrder(viewImages, mSvgSourceLineEdit);
        QWidget::setTabOrder(mSvgSourceLineEdit, mFillColorButton);
        QWidget::setTabOrder(mFillColorButton, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, mStrokeColorButton);
        QWidget::setTabOrder(mStrokeColorButton, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, mPreviewGroupBox);
        QWidget::setTabOrder(mPreviewGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAnchorPointComboBox);
        QWidget::setTabOrder(mAnchorPointComboBox, mRotationGroupBox);
        QWidget::setTabOrder(mRotationGroupBox, mPictureRotationSpinBox);
        QWidget::setTabOrder(mPictureRotationSpinBox, mRotationFromComposerMapCheckBox);
        QWidget::setTabOrder(mRotationFromComposerMapCheckBox, mComposerMapComboBox);
        QWidget::setTabOrder(mComposerMapComboBox, mNorthTypeComboBox);
        QWidget::setTabOrder(mNorthTypeComboBox, mPictureRotationOffsetSpinBox);

        retranslateUi(QgsLayoutPictureWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutPictureWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutPictureWidgetBase)
    {
        QgsLayoutPictureWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Picture Options", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Picture", Q_NULLPTR));
        mRadioSVG->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "SVG image", Q_NULLPTR));
        mRadioRaster->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Raster image", Q_NULLPTR));
        mSourceDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "SVG Groups", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "SVG Image", Q_NULLPTR));
        mSVGParamsGroupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "SVG Parameters", Q_NULLPTR));
        mStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutPictureWidgetBase", " mm", Q_NULLPTR));
        mFillColorDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mStrokeColorLabel->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Stroke color", Q_NULLPTR));
        mFillColorButton->setText(QString());
        mStrokeWidthLabel->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Stroke width", Q_NULLPTR));
        mStrokeColorButton->setText(QString());
        label_6->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Fill color", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mPreviewGroupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Size and Placement", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Placement", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Resize mode", Q_NULLPTR));
        mRotationGroupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Image Rotation", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "North alignment", Q_NULLPTR));
        mRotationFromComposerMapCheckBox->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Sync with map", Q_NULLPTR));
        mPictureRotationSpinBox->setSuffix(QApplication::translate("QgsLayoutPictureWidgetBase", " \302\260", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Offset", Q_NULLPTR));
        mPictureRotationOffsetSpinBox->setSuffix(QApplication::translate("QgsLayoutPictureWidgetBase", " \302\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutPictureWidgetBase: public Ui_QgsLayoutPictureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTPICTUREWIDGETBASE_H
