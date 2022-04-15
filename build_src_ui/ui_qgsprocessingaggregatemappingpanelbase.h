/********************************************************************************
** Form generated from reading UI file 'qgsprocessingaggregatemappingpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGAGGREGATEMAPPINGPANELBASE_H
#define UI_QGSPROCESSINGAGGREGATEMAPPINGPANELBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmaplayercombobox.h"
#include "qgsprocessingaggregatewidgets.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingAggregateMapPanelBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QgsAggregateMappingWidget *mFieldsView;
    QVBoxLayout *buttonLayout;
    QToolButton *mAddButton;
    QToolButton *mDeleteButton;
    QToolButton *mUpButton;
    QToolButton *mDownButton;
    QToolButton *mResetButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *loadFromLayerLayout;
    QLabel *loadFromLayerLabel;
    QgsMapLayerComboBox *mLayerCombo;
    QPushButton *mLoadLayerFieldsButton;

    void setupUi(QWidget *QgsProcessingAggregateMapPanelBase)
    {
        if (QgsProcessingAggregateMapPanelBase->objectName().isEmpty())
            QgsProcessingAggregateMapPanelBase->setObjectName(QStringLiteral("QgsProcessingAggregateMapPanelBase"));
        QgsProcessingAggregateMapPanelBase->resize(590, 552);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsProcessingAggregateMapPanelBase->sizePolicy().hasHeightForWidth());
        QgsProcessingAggregateMapPanelBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsProcessingAggregateMapPanelBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFieldsView = new QgsAggregateMappingWidget(QgsProcessingAggregateMapPanelBase);
        mFieldsView->setObjectName(QStringLiteral("mFieldsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFieldsView->sizePolicy().hasHeightForWidth());
        mFieldsView->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFieldsView);

        buttonLayout = new QVBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        mAddButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mAddButton->setObjectName(QStringLiteral("mAddButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon);

        buttonLayout->addWidget(mAddButton);

        mDeleteButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mDeleteButton->setObjectName(QStringLiteral("mDeleteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon1);

        buttonLayout->addWidget(mDeleteButton);

        mUpButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mUpButton->setObjectName(QStringLiteral("mUpButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUpButton->setIcon(icon2);

        buttonLayout->addWidget(mUpButton);

        mDownButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mDownButton->setObjectName(QStringLiteral("mDownButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDownButton->setIcon(icon3);

        buttonLayout->addWidget(mDownButton);

        mResetButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mResetButton->setObjectName(QStringLiteral("mResetButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mIconClearText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetButton->setIcon(icon4);

        buttonLayout->addWidget(mResetButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        buttonLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(buttonLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        loadFromLayerLayout = new QHBoxLayout();
        loadFromLayerLayout->setObjectName(QStringLiteral("loadFromLayerLayout"));
        loadFromLayerLabel = new QLabel(QgsProcessingAggregateMapPanelBase);
        loadFromLayerLabel->setObjectName(QStringLiteral("loadFromLayerLabel"));

        loadFromLayerLayout->addWidget(loadFromLayerLabel);

        mLayerCombo = new QgsMapLayerComboBox(QgsProcessingAggregateMapPanelBase);
        mLayerCombo->setObjectName(QStringLiteral("mLayerCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLayerCombo->sizePolicy().hasHeightForWidth());
        mLayerCombo->setSizePolicy(sizePolicy2);

        loadFromLayerLayout->addWidget(mLayerCombo);

        mLoadLayerFieldsButton = new QPushButton(QgsProcessingAggregateMapPanelBase);
        mLoadLayerFieldsButton->setObjectName(QStringLiteral("mLoadLayerFieldsButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLoadLayerFieldsButton->sizePolicy().hasHeightForWidth());
        mLoadLayerFieldsButton->setSizePolicy(sizePolicy3);

        loadFromLayerLayout->addWidget(mLoadLayerFieldsButton);


        verticalLayout_2->addLayout(loadFromLayerLayout);


        retranslateUi(QgsProcessingAggregateMapPanelBase);

        QMetaObject::connectSlotsByName(QgsProcessingAggregateMapPanelBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingAggregateMapPanelBase)
    {
        QgsProcessingAggregateMapPanelBase->setWindowTitle(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Fields", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddButton->setToolTip(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Add new field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddButton->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDeleteButton->setToolTip(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Delete selected field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDeleteButton->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mUpButton->setToolTip(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Move selected field up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUpButton->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDownButton->setToolTip(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Move selected field down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDownButton->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "down", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mResetButton->setToolTip(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Reset all fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mResetButton->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "reset", Q_NULLPTR));
        loadFromLayerLabel->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Load fields from template layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLoadLayerFieldsButton->setToolTip(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Load fields from selected template layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLoadLayerFieldsButton->setText(QApplication::translate("QgsProcessingAggregateMapPanelBase", "Load Fields", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingAggregateMapPanelBase: public Ui_QgsProcessingAggregateMapPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGAGGREGATEMAPPINGPANELBASE_H
