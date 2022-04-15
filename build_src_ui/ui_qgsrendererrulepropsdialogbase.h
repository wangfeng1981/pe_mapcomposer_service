/********************************************************************************
** Form generated from reading UI file 'qgsrendererrulepropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERRULEPROPSDIALOGBASE_H
#define UI_QGSRENDERERRULEPROPSDIALOGBASE_H

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

QT_BEGIN_NAMESPACE

class Ui_QgsRendererRulePropsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *editLabel;
    QLabel *label_4;
    QLineEdit *editDescription;
    QFrame *filterFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QRadioButton *mElseRadio;
    QLabel *label_1;
    QRadioButton *mFilterRadio;
    QLabel *label;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *groupSymbol;

    void setupUi(QWidget *QgsRendererRulePropsWidget)
    {
        if (QgsRendererRulePropsWidget->objectName().isEmpty())
            QgsRendererRulePropsWidget->setObjectName(QStringLiteral("QgsRendererRulePropsWidget"));
        QgsRendererRulePropsWidget->resize(443, 315);
        QgsRendererRulePropsWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsRendererRulePropsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        editLabel = new QLineEdit(QgsRendererRulePropsWidget);
        editLabel->setObjectName(QStringLiteral("editLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editLabel);

        label_4 = new QLabel(QgsRendererRulePropsWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        editDescription = new QLineEdit(QgsRendererRulePropsWidget);
        editDescription->setObjectName(QStringLiteral("editDescription"));

        formLayout->setWidget(6, QFormLayout::FieldRole, editDescription);

        filterFrame = new QFrame(QgsRendererRulePropsWidget);
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


        formLayout->setWidget(3, QFormLayout::FieldRole, filterFrame);

        mElseRadio = new QRadioButton(QgsRendererRulePropsWidget);
        mElseRadio->setObjectName(QStringLiteral("mElseRadio"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mElseRadio);

        label_1 = new QLabel(QgsRendererRulePropsWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        mFilterRadio = new QRadioButton(QgsRendererRulePropsWidget);
        mFilterRadio->setObjectName(QStringLiteral("mFilterRadio"));
        mFilterRadio->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, mFilterRadio);

        label = new QLabel(QgsRendererRulePropsWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label);


        verticalLayout->addLayout(formLayout);

        groupScale = new QGroupBox(QgsRendererRulePropsWidget);
        groupScale->setObjectName(QStringLiteral("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mScaleRangeWidget = new QgsScaleRangeWidget(groupScale);
        mScaleRangeWidget->setObjectName(QStringLiteral("mScaleRangeWidget"));

        horizontalLayout_2->addWidget(mScaleRangeWidget);


        verticalLayout->addWidget(groupScale);

        groupSymbol = new QGroupBox(QgsRendererRulePropsWidget);
        groupSymbol->setObjectName(QStringLiteral("groupSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSymbol->sizePolicy().hasHeightForWidth());
        groupSymbol->setSizePolicy(sizePolicy1);
        groupSymbol->setCheckable(true);

        verticalLayout->addWidget(groupSymbol);

        QWidget::setTabOrder(editLabel, mFilterRadio);
        QWidget::setTabOrder(mFilterRadio, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, mElseRadio);
        QWidget::setTabOrder(mElseRadio, editDescription);
        QWidget::setTabOrder(editDescription, groupScale);
        QWidget::setTabOrder(groupScale, groupSymbol);

        retranslateUi(QgsRendererRulePropsWidget);
        QObject::connect(mFilterRadio, SIGNAL(toggled(bool)), filterFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QgsRendererRulePropsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererRulePropsWidget)
    {
        label_4->setText(QApplication::translate("QgsRendererRulePropsWidget", "Description", Q_NULLPTR));
        btnTestFilter->setText(QApplication::translate("QgsRendererRulePropsWidget", "Test", Q_NULLPTR));
        mElseRadio->setText(QApplication::translate("QgsRendererRulePropsWidget", "Else", Q_NULLPTR));
        label_1->setText(QApplication::translate("QgsRendererRulePropsWidget", "Label", Q_NULLPTR));
        mFilterRadio->setText(QApplication::translate("QgsRendererRulePropsWidget", "Filter", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRendererRulePropsWidget", "Catch-all for other features", Q_NULLPTR));
        groupScale->setTitle(QApplication::translate("QgsRendererRulePropsWidget", "Scale range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupSymbol->setTitle(QApplication::translate("QgsRendererRulePropsWidget", "Symbol", Q_NULLPTR));
        Q_UNUSED(QgsRendererRulePropsWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsRendererRulePropsWidget: public Ui_QgsRendererRulePropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERRULEPROPSDIALOGBASE_H
