/********************************************************************************
** Form generated from reading UI file 'qgspropertyassistantwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROPERTYASSISTANTWIDGETBASE_H
#define UI_QGSPROPERTYASSISTANTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgscurveeditorwidget.h>
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyAssistantBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QWidget *mOutputWidget;
    QGridLayout *gridLayout;
    QFrame *mLegendVerticalFrame;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *label_2;
    QgsDoubleSpinBox *minValueSpinBox;
    QgsDoubleSpinBox *maxValueSpinBox;
    QLabel *label_3;
    QPushButton *computeValuesButton;
    QgsFieldExpressionWidget *mExpressionWidget;
    QTreeView *mLegendPreview;
    QgsCollapsibleGroupBoxBasic *mTransformCurveCheckBox;
    QVBoxLayout *verticalLayout_2;
    QgsCurveEditorWidget *mCurveEditor;

    void setupUi(QgsPanelWidget *PropertyAssistantBase)
    {
        if (PropertyAssistantBase->objectName().isEmpty())
            PropertyAssistantBase->setObjectName(QStringLiteral("PropertyAssistantBase"));
        PropertyAssistantBase->resize(525, 426);
        gridLayout_2 = new QGridLayout(PropertyAssistantBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(PropertyAssistantBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mOutputWidget = new QWidget(groupBox_2);
        mOutputWidget->setObjectName(QStringLiteral("mOutputWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOutputWidget->sizePolicy().hasHeightForWidth());
        mOutputWidget->setSizePolicy(sizePolicy);
        mOutputWidget->setMinimumSize(QSize(0, 20));
        gridLayout = new QGridLayout(mOutputWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(mOutputWidget);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 1);

        mLegendVerticalFrame = new QFrame(PropertyAssistantBase);
        mLegendVerticalFrame->setObjectName(QStringLiteral("mLegendVerticalFrame"));
        mLegendVerticalFrame->setFrameShape(QFrame::NoFrame);
        mLegendVerticalFrame->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(mLegendVerticalFrame, 3, 0, 1, 1);

        groupBox = new QGroupBox(PropertyAssistantBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        minValueSpinBox = new QgsDoubleSpinBox(groupBox);
        minValueSpinBox->setObjectName(QStringLiteral("minValueSpinBox"));
        minValueSpinBox->setDecimals(6);
        minValueSpinBox->setMinimum(-1e+14);
        minValueSpinBox->setMaximum(1e+14);

        gridLayout_3->addWidget(minValueSpinBox, 1, 1, 1, 1);

        maxValueSpinBox = new QgsDoubleSpinBox(groupBox);
        maxValueSpinBox->setObjectName(QStringLiteral("maxValueSpinBox"));
        maxValueSpinBox->setDecimals(6);
        maxValueSpinBox->setMinimum(-1e+14);
        maxValueSpinBox->setMaximum(1e+14);

        gridLayout_3->addWidget(maxValueSpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        computeValuesButton = new QPushButton(groupBox);
        computeValuesButton->setObjectName(QStringLiteral("computeValuesButton"));
        computeValuesButton->setMinimumSize(QSize(24, 24));
        computeValuesButton->setMaximumSize(QSize(24, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::On);
        computeValuesButton->setIcon(icon);

        gridLayout_3->addWidget(computeValuesButton, 1, 2, 2, 1);

        mExpressionWidget = new QgsFieldExpressionWidget(groupBox);
        mExpressionWidget->setObjectName(QStringLiteral("mExpressionWidget"));
        mExpressionWidget->setMaximumSize(QSize(500, 16777215));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mExpressionWidget, 0, 1, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        mLegendPreview = new QTreeView(PropertyAssistantBase);
        mLegendPreview->setObjectName(QStringLiteral("mLegendPreview"));
        mLegendPreview->setMinimumSize(QSize(200, 0));

        gridLayout_2->addWidget(mLegendPreview, 0, 1, 3, 1);

        mTransformCurveCheckBox = new QgsCollapsibleGroupBoxBasic(PropertyAssistantBase);
        mTransformCurveCheckBox->setObjectName(QStringLiteral("mTransformCurveCheckBox"));
        mTransformCurveCheckBox->setCheckable(true);
        mTransformCurveCheckBox->setChecked(false);
        mTransformCurveCheckBox->setProperty("collapsed", QVariant(true));
        mTransformCurveCheckBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        verticalLayout_2 = new QVBoxLayout(mTransformCurveCheckBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mCurveEditor = new QgsCurveEditorWidget(mTransformCurveCheckBox);
        mCurveEditor->setObjectName(QStringLiteral("mCurveEditor"));
        mCurveEditor->setMinimumSize(QSize(0, 100));
        mCurveEditor->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_2->addWidget(mCurveEditor);


        gridLayout_2->addWidget(mTransformCurveCheckBox, 1, 0, 1, 1);

        QWidget::setTabOrder(mExpressionWidget, minValueSpinBox);
        QWidget::setTabOrder(minValueSpinBox, maxValueSpinBox);
        QWidget::setTabOrder(maxValueSpinBox, computeValuesButton);

        retranslateUi(PropertyAssistantBase);

        QMetaObject::connectSlotsByName(PropertyAssistantBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *PropertyAssistantBase)
    {
        groupBox_2->setTitle(QApplication::translate("PropertyAssistantBase", "Output", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PropertyAssistantBase", "Input", Q_NULLPTR));
        label_4->setText(QApplication::translate("PropertyAssistantBase", "to", Q_NULLPTR));
        label_2->setText(QApplication::translate("PropertyAssistantBase", "Source", Q_NULLPTR));
        label_3->setText(QApplication::translate("PropertyAssistantBase", "Values from", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        computeValuesButton->setToolTip(QApplication::translate("PropertyAssistantBase", "Fetch value range from layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTransformCurveCheckBox->setTitle(QApplication::translate("PropertyAssistantBase", "Apply transform curve", Q_NULLPTR));
        Q_UNUSED(PropertyAssistantBase);
    } // retranslateUi

};

namespace Ui {
    class PropertyAssistantBase: public Ui_PropertyAssistantBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROPERTYASSISTANTWIDGETBASE_H
