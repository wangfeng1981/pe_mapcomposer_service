/********************************************************************************
** Form generated from reading UI file 'qgslayoutatlaswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTATLASWIDGETBASE_H
#define UI_QGSLAYOUTATLASWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgsmaplayercombobox.h>
#include "qgsfieldexpressionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutAtlasWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *verticalFrame;
    QGridLayout *gridLayout;
    QCheckBox *mUseAtlasCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mConfigurationGroup;
    QGridLayout *gridLayout_2;
    QToolButton *mAtlasSortFeatureDirectionButton;
    QgsFieldExpressionWidget *mAtlasSortExpressionWidget;
    QCheckBox *mAtlasFeatureFilterCheckBox;
    QToolButton *mAtlasFeatureFilterButton;
    QCheckBox *mAtlasHideCoverageCheckBox;
    QLabel *mHorizontalAlignementLabel;
    QLabel *label;
    QLineEdit *mAtlasFeatureFilterEdit;
    QgsMapLayerComboBox *mAtlasCoverageLayerComboBox;
    QgsFieldExpressionWidget *mPageNameWidget;
    QCheckBox *mAtlasSortFeatureCheckBox;
    QgsCollapsibleGroupBoxBasic *mOutputGroup;
    QGridLayout *gridLayout_3;
    QToolButton *mAtlasFilenameExpressionButton;
    QLineEdit *mAtlasFilenamePatternEdit;
    QCheckBox *mAtlasSingleFileCheckBox;
    QComboBox *mAtlasFileFormat;
    QLabel *mFileFormatLabel;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutAtlasWidgetBase)
    {
        if (QgsLayoutAtlasWidgetBase->objectName().isEmpty())
            QgsLayoutAtlasWidgetBase->setObjectName(QStringLiteral("QgsLayoutAtlasWidgetBase"));
        QgsLayoutAtlasWidgetBase->resize(435, 359);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutAtlasWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutAtlasWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutAtlasWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalFrame = new QFrame(QgsLayoutAtlasWidgetBase);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(verticalFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mUseAtlasCheckBox = new QCheckBox(verticalFrame);
        mUseAtlasCheckBox->setObjectName(QStringLiteral("mUseAtlasCheckBox"));

        gridLayout->addWidget(mUseAtlasCheckBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        scrollArea = new QgsScrollArea(verticalFrame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFocusPolicy(Qt::WheelFocus);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setEnabled(true);
        scrollAreaWidgetContents->setGeometry(QRect(-122, -223, 525, 673));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(-1, -1, -1, 0);
        mConfigurationGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mConfigurationGroup->setObjectName(QStringLiteral("mConfigurationGroup"));
        mConfigurationGroup->setEnabled(false);
        mConfigurationGroup->setFocusPolicy(Qt::StrongFocus);
        mConfigurationGroup->setCheckable(false);
        mConfigurationGroup->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mConfigurationGroup->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mConfigurationGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mAtlasSortFeatureDirectionButton = new QToolButton(mConfigurationGroup);
        mAtlasSortFeatureDirectionButton->setObjectName(QStringLiteral("mAtlasSortFeatureDirectionButton"));
        mAtlasSortFeatureDirectionButton->setArrowType(Qt::UpArrow);

        gridLayout_2->addWidget(mAtlasSortFeatureDirectionButton, 4, 2, 1, 1);

        mAtlasSortExpressionWidget = new QgsFieldExpressionWidget(mConfigurationGroup);
        mAtlasSortExpressionWidget->setObjectName(QStringLiteral("mAtlasSortExpressionWidget"));

        gridLayout_2->addWidget(mAtlasSortExpressionWidget, 4, 1, 1, 1);

        mAtlasFeatureFilterCheckBox = new QCheckBox(mConfigurationGroup);
        mAtlasFeatureFilterCheckBox->setObjectName(QStringLiteral("mAtlasFeatureFilterCheckBox"));

        gridLayout_2->addWidget(mAtlasFeatureFilterCheckBox, 3, 0, 1, 1);

        mAtlasFeatureFilterButton = new QToolButton(mConfigurationGroup);
        mAtlasFeatureFilterButton->setObjectName(QStringLiteral("mAtlasFeatureFilterButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAtlasFeatureFilterButton->setIcon(icon);

        gridLayout_2->addWidget(mAtlasFeatureFilterButton, 3, 2, 1, 1);

        mAtlasHideCoverageCheckBox = new QCheckBox(mConfigurationGroup);
        mAtlasHideCoverageCheckBox->setObjectName(QStringLiteral("mAtlasHideCoverageCheckBox"));

        gridLayout_2->addWidget(mAtlasHideCoverageCheckBox, 1, 0, 1, 3);

        mHorizontalAlignementLabel = new QLabel(mConfigurationGroup);
        mHorizontalAlignementLabel->setObjectName(QStringLiteral("mHorizontalAlignementLabel"));

        gridLayout_2->addWidget(mHorizontalAlignementLabel, 0, 0, 1, 1);

        label = new QLabel(mConfigurationGroup);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        mAtlasFeatureFilterEdit = new QLineEdit(mConfigurationGroup);
        mAtlasFeatureFilterEdit->setObjectName(QStringLiteral("mAtlasFeatureFilterEdit"));

        gridLayout_2->addWidget(mAtlasFeatureFilterEdit, 3, 1, 1, 1);

        mAtlasCoverageLayerComboBox = new QgsMapLayerComboBox(mConfigurationGroup);
        mAtlasCoverageLayerComboBox->setObjectName(QStringLiteral("mAtlasCoverageLayerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAtlasCoverageLayerComboBox->sizePolicy().hasHeightForWidth());
        mAtlasCoverageLayerComboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mAtlasCoverageLayerComboBox, 0, 1, 1, 2);

        mPageNameWidget = new QgsFieldExpressionWidget(mConfigurationGroup);
        mPageNameWidget->setObjectName(QStringLiteral("mPageNameWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPageNameWidget->sizePolicy().hasHeightForWidth());
        mPageNameWidget->setSizePolicy(sizePolicy2);
        mPageNameWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mPageNameWidget, 2, 1, 1, 2);

        mAtlasSortFeatureCheckBox = new QCheckBox(mConfigurationGroup);
        mAtlasSortFeatureCheckBox->setObjectName(QStringLiteral("mAtlasSortFeatureCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAtlasSortFeatureCheckBox->sizePolicy().hasHeightForWidth());
        mAtlasSortFeatureCheckBox->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mAtlasSortFeatureCheckBox, 4, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        mainLayout->addWidget(mConfigurationGroup);

        mOutputGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mOutputGroup->setObjectName(QStringLiteral("mOutputGroup"));
        mOutputGroup->setEnabled(false);
        mOutputGroup->setFocusPolicy(Qt::StrongFocus);
        mOutputGroup->setCheckable(false);
        mOutputGroup->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mOutputGroup->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mOutputGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mAtlasFilenameExpressionButton = new QToolButton(mOutputGroup);
        mAtlasFilenameExpressionButton->setObjectName(QStringLiteral("mAtlasFilenameExpressionButton"));
        mAtlasFilenameExpressionButton->setIcon(icon);

        gridLayout_3->addWidget(mAtlasFilenameExpressionButton, 1, 2, 1, 1);

        mAtlasFilenamePatternEdit = new QLineEdit(mOutputGroup);
        mAtlasFilenamePatternEdit->setObjectName(QStringLiteral("mAtlasFilenamePatternEdit"));

        gridLayout_3->addWidget(mAtlasFilenamePatternEdit, 1, 0, 1, 2);

        mAtlasSingleFileCheckBox = new QCheckBox(mOutputGroup);
        mAtlasSingleFileCheckBox->setObjectName(QStringLiteral("mAtlasSingleFileCheckBox"));

        gridLayout_3->addWidget(mAtlasSingleFileCheckBox, 2, 0, 1, 3);

        mAtlasFileFormat = new QComboBox(mOutputGroup);
        mAtlasFileFormat->setObjectName(QStringLiteral("mAtlasFileFormat"));

        gridLayout_3->addWidget(mAtlasFileFormat, 3, 1, 1, 2);

        mFileFormatLabel = new QLabel(mOutputGroup);
        mFileFormatLabel->setObjectName(QStringLiteral("mFileFormatLabel"));

        gridLayout_3->addWidget(mFileFormatLabel, 3, 0, 1, 1);

        label_4 = new QLabel(mOutputGroup);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 3);

        gridLayout_3->setColumnStretch(1, 1);

        mainLayout->addWidget(mOutputGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);


        verticalLayout->addWidget(verticalFrame);

        QWidget::setTabOrder(mUseAtlasCheckBox, mConfigurationGroup);
        QWidget::setTabOrder(mConfigurationGroup, mAtlasCoverageLayerComboBox);
        QWidget::setTabOrder(mAtlasCoverageLayerComboBox, mAtlasHideCoverageCheckBox);
        QWidget::setTabOrder(mAtlasHideCoverageCheckBox, mAtlasFeatureFilterCheckBox);
        QWidget::setTabOrder(mAtlasFeatureFilterCheckBox, mAtlasFeatureFilterEdit);
        QWidget::setTabOrder(mAtlasFeatureFilterEdit, mAtlasFeatureFilterButton);
        QWidget::setTabOrder(mAtlasFeatureFilterButton, mAtlasSortFeatureCheckBox);
        QWidget::setTabOrder(mAtlasSortFeatureCheckBox, mAtlasSortExpressionWidget);
        QWidget::setTabOrder(mAtlasSortExpressionWidget, mAtlasSortFeatureDirectionButton);
        QWidget::setTabOrder(mAtlasSortFeatureDirectionButton, mOutputGroup);
        QWidget::setTabOrder(mOutputGroup, mAtlasFilenamePatternEdit);
        QWidget::setTabOrder(mAtlasFilenamePatternEdit, mAtlasFilenameExpressionButton);
        QWidget::setTabOrder(mAtlasFilenameExpressionButton, mAtlasSingleFileCheckBox);
        QWidget::setTabOrder(mAtlasSingleFileCheckBox, scrollArea);

        retranslateUi(QgsLayoutAtlasWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutAtlasWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutAtlasWidgetBase)
    {
        QgsLayoutAtlasWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutAtlasWidgetBase", "Atlas Generation", Q_NULLPTR));
        mUseAtlasCheckBox->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Generate an atlas", Q_NULLPTR));
        mConfigurationGroup->setTitle(QApplication::translate("QgsLayoutAtlasWidgetBase", "Configuration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAtlasSortFeatureDirectionButton->setToolTip(QApplication::translate("QgsLayoutAtlasWidgetBase", "Sort direction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAtlasSortFeatureDirectionButton->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "\342\200\246", Q_NULLPTR));
        mAtlasFeatureFilterCheckBox->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Filter with", Q_NULLPTR));
        mAtlasFeatureFilterButton->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "\342\200\246", Q_NULLPTR));
        mAtlasHideCoverageCheckBox->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Hidden coverage layer", Q_NULLPTR));
        mHorizontalAlignementLabel->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Coverage layer", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Page name", Q_NULLPTR));
        mAtlasSortFeatureCheckBox->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Sort by", Q_NULLPTR));
        mOutputGroup->setTitle(QApplication::translate("QgsLayoutAtlasWidgetBase", "Output", Q_NULLPTR));
        mAtlasFilenameExpressionButton->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "\342\200\246", Q_NULLPTR));
        mAtlasSingleFileCheckBox->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Single file export when possible", Q_NULLPTR));
        mFileFormatLabel->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Image export format", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutAtlasWidgetBase", "Output filename expression", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutAtlasWidgetBase: public Ui_QgsLayoutAtlasWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTATLASWIDGETBASE_H
