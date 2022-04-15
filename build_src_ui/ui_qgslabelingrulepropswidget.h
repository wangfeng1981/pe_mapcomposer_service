/********************************************************************************
** Form generated from reading UI file 'qgslabelingrulepropswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGRULEPROPSWIDGET_H
#define UI_QGSLABELINGRULEPROPSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingRulePropsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *editDescription;
    QRadioButton *mFilterRadio;
    QRadioButton *mElseRadio;
    QLabel *label;
    QFrame *filterFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *groupSettings;

    void setupUi(QWidget *QgsLabelingRulePropsWidget)
    {
        if (QgsLabelingRulePropsWidget->objectName().isEmpty())
            QgsLabelingRulePropsWidget->setObjectName(QStringLiteral("QgsLabelingRulePropsWidget"));
        QgsLabelingRulePropsWidget->resize(579, 336);
        verticalLayout = new QVBoxLayout(QgsLabelingRulePropsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLabelingRulePropsWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 579, 336));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_1 = new QLabel(scrollAreaWidgetContents);
        label_1->setObjectName(QStringLiteral("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        editDescription = new QLineEdit(scrollAreaWidgetContents);
        editDescription->setObjectName(QStringLiteral("editDescription"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editDescription);

        mFilterRadio = new QRadioButton(scrollAreaWidgetContents);
        mFilterRadio->setObjectName(QStringLiteral("mFilterRadio"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mFilterRadio);

        mElseRadio = new QRadioButton(scrollAreaWidgetContents);
        mElseRadio->setObjectName(QStringLiteral("mElseRadio"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mElseRadio);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label);

        filterFrame = new QFrame(scrollAreaWidgetContents);
        filterFrame->setObjectName(QStringLiteral("filterFrame"));
        horizontalLayout = new QHBoxLayout(filterFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        editFilter = new QLineEdit(filterFrame);
        editFilter->setObjectName(QStringLiteral("editFilter"));

        horizontalLayout->addWidget(editFilter);

        btnExpressionBuilder = new QPushButton(filterFrame);
        btnExpressionBuilder->setObjectName(QStringLiteral("btnExpressionBuilder"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnExpressionBuilder->sizePolicy().hasHeightForWidth());
        btnExpressionBuilder->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnExpressionBuilder->setIcon(icon);

        horizontalLayout->addWidget(btnExpressionBuilder);

        btnTestFilter = new QPushButton(filterFrame);
        btnTestFilter->setObjectName(QStringLiteral("btnTestFilter"));

        horizontalLayout->addWidget(btnTestFilter);


        formLayout->setWidget(1, QFormLayout::FieldRole, filterFrame);


        verticalLayout_2->addLayout(formLayout);

        groupScale = new QGroupBox(scrollAreaWidgetContents);
        groupScale->setObjectName(QStringLiteral("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mScaleRangeWidget = new QgsScaleRangeWidget(groupScale);
        mScaleRangeWidget->setObjectName(QStringLiteral("mScaleRangeWidget"));

        horizontalLayout_2->addWidget(mScaleRangeWidget);


        verticalLayout_2->addWidget(groupScale);

        groupSettings = new QGroupBox(scrollAreaWidgetContents);
        groupSettings->setObjectName(QStringLiteral("groupSettings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSettings->sizePolicy().hasHeightForWidth());
        groupSettings->setSizePolicy(sizePolicy1);
        groupSettings->setCheckable(true);

        verticalLayout_2->addWidget(groupSettings);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, editDescription);
        QWidget::setTabOrder(editDescription, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, groupScale);
        QWidget::setTabOrder(groupScale, groupSettings);

        retranslateUi(QgsLabelingRulePropsWidget);

        QMetaObject::connectSlotsByName(QgsLabelingRulePropsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingRulePropsWidget)
    {
        QgsLabelingRulePropsWidget->setWindowTitle(QApplication::translate("QgsLabelingRulePropsWidget", "Rule Properties", Q_NULLPTR));
        label_1->setText(QApplication::translate("QgsLabelingRulePropsWidget", "Description", Q_NULLPTR));
        mFilterRadio->setText(QApplication::translate("QgsLabelingRulePropsWidget", "Filter", Q_NULLPTR));
        mElseRadio->setText(QApplication::translate("QgsLabelingRulePropsWidget", "Else", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLabelingRulePropsWidget", "Catch-all for other features", Q_NULLPTR));
        btnTestFilter->setText(QApplication::translate("QgsLabelingRulePropsWidget", "Test", Q_NULLPTR));
        groupScale->setTitle(QApplication::translate("QgsLabelingRulePropsWidget", "Scale Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupSettings->setTitle(QApplication::translate("QgsLabelingRulePropsWidget", "Labels", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingRulePropsWidget: public Ui_QgsLabelingRulePropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGRULEPROPSWIDGET_H
