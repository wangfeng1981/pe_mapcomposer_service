/********************************************************************************
** Form generated from reading UI file 'qgsreportwidgetfieldgroupsectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSREPORTWIDGETFIELDGROUPSECTIONBASE_H
#define UI_QGSREPORTWIDGETFIELDGROUPSECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsReportWidgetFieldGroupSectionBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *mButtonEditHeader;
    QCheckBox *mSortAscendingCheckBox;
    QLabel *label_2;
    QPushButton *mButtonEditFooter;
    QCheckBox *mCheckShowFooter;
    QgsFieldComboBox *mFieldComboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mCheckHeaderAlwaysVisible;
    QgsMapLayerComboBox *mLayerComboBox;
    QCheckBox *mCheckShowHeader;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mCheckShowBody;
    QPushButton *mButtonEditBody;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mCheckFooterAlwaysVisible;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsReportWidgetFieldGroupSectionBase)
    {
        if (QgsReportWidgetFieldGroupSectionBase->objectName().isEmpty())
            QgsReportWidgetFieldGroupSectionBase->setObjectName(QStringLiteral("QgsReportWidgetFieldGroupSectionBase"));
        QgsReportWidgetFieldGroupSectionBase->resize(277, 415);
        verticalLayout = new QVBoxLayout(QgsReportWidgetFieldGroupSectionBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mButtonEditHeader = new QPushButton(QgsReportWidgetFieldGroupSectionBase);
        mButtonEditHeader->setObjectName(QStringLiteral("mButtonEditHeader"));

        gridLayout->addWidget(mButtonEditHeader, 0, 1, 1, 1);

        mSortAscendingCheckBox = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mSortAscendingCheckBox->setObjectName(QStringLiteral("mSortAscendingCheckBox"));

        gridLayout->addWidget(mSortAscendingCheckBox, 4, 1, 1, 2);

        label_2 = new QLabel(QgsReportWidgetFieldGroupSectionBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mButtonEditFooter = new QPushButton(QgsReportWidgetFieldGroupSectionBase);
        mButtonEditFooter->setObjectName(QStringLiteral("mButtonEditFooter"));

        gridLayout->addWidget(mButtonEditFooter, 6, 1, 1, 1);

        mCheckShowFooter = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckShowFooter->setObjectName(QStringLiteral("mCheckShowFooter"));

        gridLayout->addWidget(mCheckShowFooter, 6, 0, 1, 1);

        mFieldComboBox = new QgsFieldComboBox(QgsReportWidgetFieldGroupSectionBase);
        mFieldComboBox->setObjectName(QStringLiteral("mFieldComboBox"));

        gridLayout->addWidget(mFieldComboBox, 3, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCheckHeaderAlwaysVisible = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckHeaderAlwaysVisible->setObjectName(QStringLiteral("mCheckHeaderAlwaysVisible"));

        horizontalLayout->addWidget(mCheckHeaderAlwaysVisible);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        mLayerComboBox = new QgsMapLayerComboBox(QgsReportWidgetFieldGroupSectionBase);
        mLayerComboBox->setObjectName(QStringLiteral("mLayerComboBox"));

        gridLayout->addWidget(mLayerComboBox, 2, 1, 1, 2);

        mCheckShowHeader = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckShowHeader->setObjectName(QStringLiteral("mCheckShowHeader"));

        gridLayout->addWidget(mCheckShowHeader, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        mCheckShowBody = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckShowBody->setObjectName(QStringLiteral("mCheckShowBody"));

        gridLayout->addWidget(mCheckShowBody, 5, 0, 1, 1);

        mButtonEditBody = new QPushButton(QgsReportWidgetFieldGroupSectionBase);
        mButtonEditBody->setObjectName(QStringLiteral("mButtonEditBody"));

        gridLayout->addWidget(mButtonEditBody, 5, 1, 1, 1);

        label_3 = new QLabel(QgsReportWidgetFieldGroupSectionBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        mCheckFooterAlwaysVisible = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckFooterAlwaysVisible->setObjectName(QStringLiteral("mCheckFooterAlwaysVisible"));

        horizontalLayout_2->addWidget(mCheckFooterAlwaysVisible);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCheckShowHeader, mButtonEditHeader);
        QWidget::setTabOrder(mButtonEditHeader, mCheckHeaderAlwaysVisible);
        QWidget::setTabOrder(mCheckHeaderAlwaysVisible, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mFieldComboBox);
        QWidget::setTabOrder(mFieldComboBox, mSortAscendingCheckBox);
        QWidget::setTabOrder(mSortAscendingCheckBox, mCheckShowBody);
        QWidget::setTabOrder(mCheckShowBody, mButtonEditBody);
        QWidget::setTabOrder(mButtonEditBody, mCheckShowFooter);
        QWidget::setTabOrder(mCheckShowFooter, mButtonEditFooter);
        QWidget::setTabOrder(mButtonEditFooter, mCheckFooterAlwaysVisible);

        retranslateUi(QgsReportWidgetFieldGroupSectionBase);

        QMetaObject::connectSlotsByName(QgsReportWidgetFieldGroupSectionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsReportWidgetFieldGroupSectionBase)
    {
        QgsReportWidgetFieldGroupSectionBase->setWindowTitle(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Layout Manager", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonEditHeader->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit the field group header layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonEditHeader->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSortAscendingCheckBox->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Sort features ascendingly by field value", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSortAscendingCheckBox->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Sort ascending", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonEditFooter->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit the field group footer layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonEditFooter->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckShowFooter->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include a footer layout after the last matching feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckShowFooter->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include footer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFieldComboBox->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Source field to iterate over", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mCheckHeaderAlwaysVisible->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "If unchecked, the header will only be shown when at least one matching feature is found", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckHeaderAlwaysVisible->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Show header when no matching\n"
"features are found", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerComboBox->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Source layer to iterate over", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mCheckShowHeader->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include a header layout before the first matching feature", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckShowHeader->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include header", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckShowBody->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include a separate layout for every matching feature found", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckShowBody->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include body", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonEditBody->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit the field group body layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonEditBody->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckFooterAlwaysVisible->setToolTip(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "If unchecked, the footer will only be shown when at least one matching feature is found", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckFooterAlwaysVisible->setText(QApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Show footer when no matching\n"
"features are found", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsReportWidgetFieldGroupSectionBase: public Ui_QgsReportWidgetFieldGroupSectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSREPORTWIDGETFIELDGROUPSECTIONBASE_H
