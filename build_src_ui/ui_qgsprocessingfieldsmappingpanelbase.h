/********************************************************************************
** Form generated from reading UI file 'qgsprocessingfieldsmappingpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGFIELDSMAPPINGPANELBASE_H
#define UI_QGSPROCESSINGFIELDSMAPPINGPANELBASE_H

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
#include "qgsfieldmappingwidget.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingFieldMapPanelBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QgsFieldMappingWidget *mFieldsView;
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

    void setupUi(QWidget *QgsProcessingFieldMapPanelBase)
    {
        if (QgsProcessingFieldMapPanelBase->objectName().isEmpty())
            QgsProcessingFieldMapPanelBase->setObjectName(QStringLiteral("QgsProcessingFieldMapPanelBase"));
        QgsProcessingFieldMapPanelBase->resize(590, 552);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsProcessingFieldMapPanelBase->sizePolicy().hasHeightForWidth());
        QgsProcessingFieldMapPanelBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsProcessingFieldMapPanelBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFieldsView = new QgsFieldMappingWidget(QgsProcessingFieldMapPanelBase);
        mFieldsView->setObjectName(QStringLiteral("mFieldsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFieldsView->sizePolicy().hasHeightForWidth());
        mFieldsView->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFieldsView);

        buttonLayout = new QVBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        mAddButton = new QToolButton(QgsProcessingFieldMapPanelBase);
        mAddButton->setObjectName(QStringLiteral("mAddButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon);

        buttonLayout->addWidget(mAddButton);

        mDeleteButton = new QToolButton(QgsProcessingFieldMapPanelBase);
        mDeleteButton->setObjectName(QStringLiteral("mDeleteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon1);

        buttonLayout->addWidget(mDeleteButton);

        mUpButton = new QToolButton(QgsProcessingFieldMapPanelBase);
        mUpButton->setObjectName(QStringLiteral("mUpButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUpButton->setIcon(icon2);

        buttonLayout->addWidget(mUpButton);

        mDownButton = new QToolButton(QgsProcessingFieldMapPanelBase);
        mDownButton->setObjectName(QStringLiteral("mDownButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDownButton->setIcon(icon3);

        buttonLayout->addWidget(mDownButton);

        mResetButton = new QToolButton(QgsProcessingFieldMapPanelBase);
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
        loadFromLayerLabel = new QLabel(QgsProcessingFieldMapPanelBase);
        loadFromLayerLabel->setObjectName(QStringLiteral("loadFromLayerLabel"));

        loadFromLayerLayout->addWidget(loadFromLayerLabel);

        mLayerCombo = new QgsMapLayerComboBox(QgsProcessingFieldMapPanelBase);
        mLayerCombo->setObjectName(QStringLiteral("mLayerCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLayerCombo->sizePolicy().hasHeightForWidth());
        mLayerCombo->setSizePolicy(sizePolicy2);

        loadFromLayerLayout->addWidget(mLayerCombo);

        mLoadLayerFieldsButton = new QPushButton(QgsProcessingFieldMapPanelBase);
        mLoadLayerFieldsButton->setObjectName(QStringLiteral("mLoadLayerFieldsButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLoadLayerFieldsButton->sizePolicy().hasHeightForWidth());
        mLoadLayerFieldsButton->setSizePolicy(sizePolicy3);

        loadFromLayerLayout->addWidget(mLoadLayerFieldsButton);


        verticalLayout_2->addLayout(loadFromLayerLayout);


        retranslateUi(QgsProcessingFieldMapPanelBase);

        QMetaObject::connectSlotsByName(QgsProcessingFieldMapPanelBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingFieldMapPanelBase)
    {
        QgsProcessingFieldMapPanelBase->setWindowTitle(QApplication::translate("QgsProcessingFieldMapPanelBase", "Fields", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddButton->setToolTip(QApplication::translate("QgsProcessingFieldMapPanelBase", "Add new field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddButton->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDeleteButton->setToolTip(QApplication::translate("QgsProcessingFieldMapPanelBase", "Delete selected field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDeleteButton->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mUpButton->setToolTip(QApplication::translate("QgsProcessingFieldMapPanelBase", "Move selected field up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUpButton->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDownButton->setToolTip(QApplication::translate("QgsProcessingFieldMapPanelBase", "Move selected field down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDownButton->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "down", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mResetButton->setToolTip(QApplication::translate("QgsProcessingFieldMapPanelBase", "Reset all fields", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mResetButton->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "reset", Q_NULLPTR));
        loadFromLayerLabel->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "Load fields from template layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLoadLayerFieldsButton->setToolTip(QApplication::translate("QgsProcessingFieldMapPanelBase", "Load fields from selected template layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLoadLayerFieldsButton->setText(QApplication::translate("QgsProcessingFieldMapPanelBase", "Load Fields", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingFieldMapPanelBase: public Ui_QgsProcessingFieldMapPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGFIELDSMAPPINGPANELBASE_H
