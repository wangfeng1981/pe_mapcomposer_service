/********************************************************************************
** Form generated from reading UI file 'qgslabelengineconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELENGINECONFIGDIALOG_H
#define UI_QGSLABELENGINECONFIGDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelEngineConfigWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *spinCandLine;
    QLabel *label_3;
    QLabel *label_4;
    QgsDoubleSpinBox *spinCandPolygon;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *chkShowCandidates;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QgsColorButton *mUnplacedColorButton;
    QCheckBox *chkShowAllLabels;
    QLabel *label_5;
    QCheckBox *chkShowUnplaced;
    QCheckBox *chkShowPartialsLabels;
    QLabel *label_7;
    QComboBox *mPlacementVersionComboBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QgsPanelWidget *QgsLabelEngineConfigWidgetBase)
    {
        if (QgsLabelEngineConfigWidgetBase->objectName().isEmpty())
            QgsLabelEngineConfigWidgetBase->setObjectName(QStringLiteral("QgsLabelEngineConfigWidgetBase"));
        QgsLabelEngineConfigWidgetBase->resize(437, 426);
        verticalLayout = new QVBoxLayout(QgsLabelEngineConfigWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(QgsLabelEngineConfigWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinCandLine = new QgsDoubleSpinBox(groupBox);
        spinCandLine->setObjectName(QStringLiteral("spinCandLine"));
        spinCandLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandLine->setDecimals(1);
        spinCandLine->setMaximum(1000);
        spinCandLine->setSingleStep(1);

        gridLayout->addWidget(spinCandLine, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        spinCandPolygon = new QgsDoubleSpinBox(groupBox);
        spinCandPolygon->setObjectName(QStringLiteral("spinCandPolygon"));
        spinCandPolygon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandPolygon->setDecimals(1);
        spinCandPolygon->setMaximum(1000);
        spinCandPolygon->setSingleStep(1);

        gridLayout->addWidget(spinCandPolygon, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 3);

        horizontalLayout_2->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mTextRenderFormatComboBox = new QComboBox(QgsLabelEngineConfigWidgetBase);
        mTextRenderFormatComboBox->setObjectName(QStringLiteral("mTextRenderFormatComboBox"));

        gridLayout_2->addWidget(mTextRenderFormatComboBox, 0, 1, 1, 2);

        chkShowCandidates = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowCandidates->setObjectName(QStringLiteral("chkShowCandidates"));

        gridLayout_2->addWidget(chkShowCandidates, 5, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(40, -1, -1, -1);
        label_6 = new QLabel(QgsLabelEngineConfigWidgetBase);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        mUnplacedColorButton = new QgsColorButton(QgsLabelEngineConfigWidgetBase);
        mUnplacedColorButton->setObjectName(QStringLiteral("mUnplacedColorButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mUnplacedColorButton->sizePolicy().hasHeightForWidth());
        mUnplacedColorButton->setSizePolicy(sizePolicy2);
        mUnplacedColorButton->setMinimumSize(QSize(120, 0));
        mUnplacedColorButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(mUnplacedColorButton);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 3);

        chkShowAllLabels = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowAllLabels->setObjectName(QStringLiteral("chkShowAllLabels"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(chkShowAllLabels->sizePolicy().hasHeightForWidth());
        chkShowAllLabels->setSizePolicy(sizePolicy3);
        chkShowAllLabels->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(chkShowAllLabels, 2, 0, 1, 3);

        label_5 = new QLabel(QgsLabelEngineConfigWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        chkShowUnplaced = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowUnplaced->setObjectName(QStringLiteral("chkShowUnplaced"));

        gridLayout_2->addWidget(chkShowUnplaced, 3, 0, 1, 3);

        chkShowPartialsLabels = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowPartialsLabels->setObjectName(QStringLiteral("chkShowPartialsLabels"));

        gridLayout_2->addWidget(chkShowPartialsLabels, 1, 0, 1, 3);

        label_7 = new QLabel(QgsLabelEngineConfigWidgetBase);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        mPlacementVersionComboBox = new QComboBox(QgsLabelEngineConfigWidgetBase);
        mPlacementVersionComboBox->setObjectName(QStringLiteral("mPlacementVersionComboBox"));

        gridLayout_2->addWidget(mPlacementVersionComboBox, 6, 1, 1, 2);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        QWidget::setTabOrder(spinCandLine, spinCandPolygon);
        QWidget::setTabOrder(spinCandPolygon, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, chkShowPartialsLabels);
        QWidget::setTabOrder(chkShowPartialsLabels, chkShowAllLabels);
        QWidget::setTabOrder(chkShowAllLabels, chkShowUnplaced);
        QWidget::setTabOrder(chkShowUnplaced, mUnplacedColorButton);
        QWidget::setTabOrder(mUnplacedColorButton, chkShowCandidates);

        retranslateUi(QgsLabelEngineConfigWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelEngineConfigWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelEngineConfigWidgetBase)
    {
        QgsLabelEngineConfigWidgetBase->setWindowTitle(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Automated Placement Engine", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Number of Candidates", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Line (per cm)", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Polygon (per cm\302\262)", Q_NULLPTR));
        chkShowCandidates->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Show candidates (for debugging)", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Color for unplaced labels", Q_NULLPTR));
        mUnplacedColorButton->setText(QString());
        chkShowAllLabels->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Show all labels for all layers (i.e. including colliding objects)", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Text rendering", Q_NULLPTR));
        chkShowUnplaced->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Show unplaced labels", Q_NULLPTR));
        chkShowPartialsLabels->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Allow truncated labels on edges of map", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLabelEngineConfigWidgetBase", "Project labeling version", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelEngineConfigWidgetBase: public Ui_QgsLabelEngineConfigWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELENGINECONFIGDIALOG_H
