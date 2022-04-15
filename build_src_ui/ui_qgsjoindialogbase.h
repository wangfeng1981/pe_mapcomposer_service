/********************************************************************************
** Form generated from reading UI file 'qgsjoindialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSJOINDIALOGBASE_H
#define UI_QGSJOINDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include "qgscollapsiblegroupbox.h"
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsJoinDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mJoinLayerLabel;
    QgsMapLayerComboBox *mJoinLayerComboBox;
    QLabel *mJoinFieldLabel;
    QgsFieldComboBox *mJoinFieldComboBox;
    QLabel *mTargetFieldLabel;
    QgsFieldComboBox *mTargetFieldComboBox;
    QgsCollapsibleGroupBox *mUseJoinFieldsSubset;
    QGridLayout *gridLayout_21;
    QListView *mJoinFieldsSubsetView;
    QgsCollapsibleGroupBox *mUseCustomPrefix;
    QGridLayout *gridLayout_3;
    QLineEdit *mCustomPrefix;
    QSpacerItem *verticalSpacer;
    QCheckBox *mCacheInMemoryCheckBox;
    QCheckBox *mCreateIndexCheckBox;
    QDialogButtonBox *buttonBox;
    QCheckBox *mDynamicFormCheckBox;
    QgsCollapsibleGroupBox *mEditableJoinLayer;
    QGridLayout *gridLayout_2;
    QCheckBox *mUpsertOnEditCheckBox;
    QCheckBox *mDeleteCascadeCheckBox;

    void setupUi(QDialog *QgsJoinDialogBase)
    {
        if (QgsJoinDialogBase->objectName().isEmpty())
            QgsJoinDialogBase->setObjectName(QStringLiteral("QgsJoinDialogBase"));
        QgsJoinDialogBase->resize(505, 576);
        gridLayout = new QGridLayout(QgsJoinDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mJoinLayerLabel = new QLabel(QgsJoinDialogBase);
        mJoinLayerLabel->setObjectName(QStringLiteral("mJoinLayerLabel"));

        gridLayout->addWidget(mJoinLayerLabel, 0, 0, 1, 1);

        mJoinLayerComboBox = new QgsMapLayerComboBox(QgsJoinDialogBase);
        mJoinLayerComboBox->setObjectName(QStringLiteral("mJoinLayerComboBox"));

        gridLayout->addWidget(mJoinLayerComboBox, 0, 1, 1, 1);

        mJoinFieldLabel = new QLabel(QgsJoinDialogBase);
        mJoinFieldLabel->setObjectName(QStringLiteral("mJoinFieldLabel"));

        gridLayout->addWidget(mJoinFieldLabel, 1, 0, 1, 1);

        mJoinFieldComboBox = new QgsFieldComboBox(QgsJoinDialogBase);
        mJoinFieldComboBox->setObjectName(QStringLiteral("mJoinFieldComboBox"));

        gridLayout->addWidget(mJoinFieldComboBox, 1, 1, 1, 1);

        mTargetFieldLabel = new QLabel(QgsJoinDialogBase);
        mTargetFieldLabel->setObjectName(QStringLiteral("mTargetFieldLabel"));

        gridLayout->addWidget(mTargetFieldLabel, 2, 0, 1, 1);

        mTargetFieldComboBox = new QgsFieldComboBox(QgsJoinDialogBase);
        mTargetFieldComboBox->setObjectName(QStringLiteral("mTargetFieldComboBox"));

        gridLayout->addWidget(mTargetFieldComboBox, 2, 1, 1, 1);

        mUseJoinFieldsSubset = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mUseJoinFieldsSubset->setObjectName(QStringLiteral("mUseJoinFieldsSubset"));
        mUseJoinFieldsSubset->setCheckable(true);
        mUseJoinFieldsSubset->setChecked(false);
        mUseJoinFieldsSubset->setProperty("collapsed", QVariant(true));
        gridLayout_21 = new QGridLayout(mUseJoinFieldsSubset);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        mJoinFieldsSubsetView = new QListView(mUseJoinFieldsSubset);
        mJoinFieldsSubsetView->setObjectName(QStringLiteral("mJoinFieldsSubsetView"));

        gridLayout_21->addWidget(mJoinFieldsSubsetView, 0, 0, 1, 1);


        gridLayout->addWidget(mUseJoinFieldsSubset, 8, 0, 1, 2);

        mUseCustomPrefix = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mUseCustomPrefix->setObjectName(QStringLiteral("mUseCustomPrefix"));
        mUseCustomPrefix->setCheckable(true);
        mUseCustomPrefix->setChecked(false);
        mUseCustomPrefix->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mUseCustomPrefix);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mCustomPrefix = new QLineEdit(mUseCustomPrefix);
        mCustomPrefix->setObjectName(QStringLiteral("mCustomPrefix"));

        gridLayout_3->addWidget(mCustomPrefix, 0, 0, 1, 1);


        gridLayout->addWidget(mUseCustomPrefix, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        mCacheInMemoryCheckBox = new QCheckBox(QgsJoinDialogBase);
        mCacheInMemoryCheckBox->setObjectName(QStringLiteral("mCacheInMemoryCheckBox"));

        gridLayout->addWidget(mCacheInMemoryCheckBox, 3, 0, 1, 2);

        mCreateIndexCheckBox = new QCheckBox(QgsJoinDialogBase);
        mCreateIndexCheckBox->setObjectName(QStringLiteral("mCreateIndexCheckBox"));

        gridLayout->addWidget(mCreateIndexCheckBox, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsJoinDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 11, 0, 1, 2);

        mDynamicFormCheckBox = new QCheckBox(QgsJoinDialogBase);
        mDynamicFormCheckBox->setObjectName(QStringLiteral("mDynamicFormCheckBox"));

        gridLayout->addWidget(mDynamicFormCheckBox, 6, 0, 1, 2);

        mEditableJoinLayer = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mEditableJoinLayer->setObjectName(QStringLiteral("mEditableJoinLayer"));
        mEditableJoinLayer->setCheckable(true);
        mEditableJoinLayer->setChecked(false);
        mEditableJoinLayer->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(mEditableJoinLayer);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mUpsertOnEditCheckBox = new QCheckBox(mEditableJoinLayer);
        mUpsertOnEditCheckBox->setObjectName(QStringLiteral("mUpsertOnEditCheckBox"));

        gridLayout_2->addWidget(mUpsertOnEditCheckBox, 0, 0, 1, 1);

        mDeleteCascadeCheckBox = new QCheckBox(mEditableJoinLayer);
        mDeleteCascadeCheckBox->setObjectName(QStringLiteral("mDeleteCascadeCheckBox"));

        gridLayout_2->addWidget(mDeleteCascadeCheckBox, 1, 0, 1, 1);


        gridLayout->addWidget(mEditableJoinLayer, 7, 0, 1, 2);

        QWidget::setTabOrder(mJoinLayerComboBox, mJoinFieldComboBox);
        QWidget::setTabOrder(mJoinFieldComboBox, mTargetFieldComboBox);
        QWidget::setTabOrder(mTargetFieldComboBox, mCacheInMemoryCheckBox);
        QWidget::setTabOrder(mCacheInMemoryCheckBox, mCreateIndexCheckBox);
        QWidget::setTabOrder(mCreateIndexCheckBox, mUseJoinFieldsSubset);
        QWidget::setTabOrder(mUseJoinFieldsSubset, mJoinFieldsSubsetView);
        QWidget::setTabOrder(mJoinFieldsSubsetView, mUseCustomPrefix);
        QWidget::setTabOrder(mUseCustomPrefix, mCustomPrefix);

        retranslateUi(QgsJoinDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsJoinDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsJoinDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsJoinDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsJoinDialogBase)
    {
        QgsJoinDialogBase->setWindowTitle(QApplication::translate("QgsJoinDialogBase", "Add Vector Join", Q_NULLPTR));
        mJoinLayerLabel->setText(QApplication::translate("QgsJoinDialogBase", "Join layer", Q_NULLPTR));
        mJoinFieldLabel->setText(QApplication::translate("QgsJoinDialogBase", "Join field", Q_NULLPTR));
        mTargetFieldLabel->setText(QApplication::translate("QgsJoinDialogBase", "Target field", Q_NULLPTR));
        mUseJoinFieldsSubset->setTitle(QApplication::translate("QgsJoinDialogBase", "&Joined fields", Q_NULLPTR));
        mUseCustomPrefix->setTitle(QApplication::translate("QgsJoinDialogBase", "Custom field &name prefix", Q_NULLPTR));
        mCacheInMemoryCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Cache join layer in memory", Q_NULLPTR));
        mCreateIndexCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Create attribute index on join field", Q_NULLPTR));
        mDynamicFormCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Dynamic form", Q_NULLPTR));
        mEditableJoinLayer->setTitle(QApplication::translate("QgsJoinDialogBase", "Edi&table join layer", Q_NULLPTR));
        mUpsertOnEditCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Upsert on edit", Q_NULLPTR));
        mDeleteCascadeCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Delete cascade", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsJoinDialogBase: public Ui_QgsJoinDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSJOINDIALOGBASE_H
