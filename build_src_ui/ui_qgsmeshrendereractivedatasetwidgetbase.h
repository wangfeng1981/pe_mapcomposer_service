/********************************************************************************
** Form generated from reading UI file 'qgsmeshrendereractivedatasetwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H
#define UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsmeshdatasetgrouptreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererActiveDatasetWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMeshActiveDatasetGroupTreeView *mDatasetGroupTreeView;
    QLabel *label_2;
    QgsCollapsibleGroupBox *mActiveDatasetMetadataGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *mActiveDatasetMetadata;

    void setupUi(QWidget *QgsMeshRendererActiveDatasetWidgetBase)
    {
        if (QgsMeshRendererActiveDatasetWidgetBase->objectName().isEmpty())
            QgsMeshRendererActiveDatasetWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererActiveDatasetWidgetBase"));
        QgsMeshRendererActiveDatasetWidgetBase->setEnabled(true);
        QgsMeshRendererActiveDatasetWidgetBase->resize(343, 337);
        QgsMeshRendererActiveDatasetWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsMeshRendererActiveDatasetWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mDatasetGroupTreeView = new QgsMeshActiveDatasetGroupTreeView(QgsMeshRendererActiveDatasetWidgetBase);
        mDatasetGroupTreeView->setObjectName(QStringLiteral("mDatasetGroupTreeView"));
        mDatasetGroupTreeView->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(mDatasetGroupTreeView);

        label_2 = new QLabel(QgsMeshRendererActiveDatasetWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        mActiveDatasetMetadataGroup = new QgsCollapsibleGroupBox(QgsMeshRendererActiveDatasetWidgetBase);
        mActiveDatasetMetadataGroup->setObjectName(QStringLiteral("mActiveDatasetMetadataGroup"));
        verticalLayout_2 = new QVBoxLayout(mActiveDatasetMetadataGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mActiveDatasetMetadata = new QLabel(mActiveDatasetMetadataGroup);
        mActiveDatasetMetadata->setObjectName(QStringLiteral("mActiveDatasetMetadata"));
        mActiveDatasetMetadata->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(mActiveDatasetMetadata);


        verticalLayout->addWidget(mActiveDatasetMetadataGroup);


        retranslateUi(QgsMeshRendererActiveDatasetWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererActiveDatasetWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererActiveDatasetWidgetBase)
    {
        label_2->setText(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Dataset in selected group(s)", Q_NULLPTR));
        mActiveDatasetMetadataGroup->setTitle(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Dataset group Metadata", Q_NULLPTR));
        mActiveDatasetMetadata->setText(QString());
        Q_UNUSED(QgsMeshRendererActiveDatasetWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererActiveDatasetWidgetBase: public Ui_QgsMeshRendererActiveDatasetWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H
