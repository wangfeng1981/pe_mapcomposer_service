/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayersavestyledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERSAVESTYLEDIALOG_H
#define UI_QGSVECTORLAYERSAVESTYLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerSaveStyleDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mModeLabel;
    QWidget *mSaveToDbWidget;
    QGridLayout *gridLayout_3;
    QLabel *nameLabel;
    QLineEdit *mDbStyleNameEdit;
    QLabel *descriptionLabel;
    QPlainTextEdit *mDbStyleDescriptionEdit;
    QLabel *mUILabel;
    QCheckBox *mDbStyleUseAsDefault;
    QgsFileWidget *mDbStyleUIFileWidget;
    QComboBox *mStyleTypeComboBox;
    QWidget *mSaveToFileWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label;
    QListView *mStyleCategoriesListView;
    QgsFileWidget *mFileWidget;
    QDialogButtonBox *buttonBox;
    QListWidget *mStylesWidget;
    QLabel *mStylesWidgetLabel;

    void setupUi(QDialog *QgsVectorLayerSaveStyleDialog)
    {
        if (QgsVectorLayerSaveStyleDialog->objectName().isEmpty())
            QgsVectorLayerSaveStyleDialog->setObjectName(QStringLiteral("QgsVectorLayerSaveStyleDialog"));
        QgsVectorLayerSaveStyleDialog->resize(491, 535);
        gridLayout = new QGridLayout(QgsVectorLayerSaveStyleDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mModeLabel = new QLabel(QgsVectorLayerSaveStyleDialog);
        mModeLabel->setObjectName(QStringLiteral("mModeLabel"));

        gridLayout->addWidget(mModeLabel, 0, 0, 1, 1);

        mSaveToDbWidget = new QWidget(QgsVectorLayerSaveStyleDialog);
        mSaveToDbWidget->setObjectName(QStringLiteral("mSaveToDbWidget"));
        gridLayout_3 = new QGridLayout(mSaveToDbWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(mSaveToDbWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout_3->addWidget(nameLabel, 0, 0, 1, 1);

        mDbStyleNameEdit = new QLineEdit(mSaveToDbWidget);
        mDbStyleNameEdit->setObjectName(QStringLiteral("mDbStyleNameEdit"));

        gridLayout_3->addWidget(mDbStyleNameEdit, 0, 1, 1, 1);

        descriptionLabel = new QLabel(mSaveToDbWidget);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout_3->addWidget(descriptionLabel, 1, 0, 1, 1);

        mDbStyleDescriptionEdit = new QPlainTextEdit(mSaveToDbWidget);
        mDbStyleDescriptionEdit->setObjectName(QStringLiteral("mDbStyleDescriptionEdit"));

        gridLayout_3->addWidget(mDbStyleDescriptionEdit, 1, 1, 1, 1);

        mUILabel = new QLabel(mSaveToDbWidget);
        mUILabel->setObjectName(QStringLiteral("mUILabel"));

        gridLayout_3->addWidget(mUILabel, 2, 0, 1, 1);

        mDbStyleUseAsDefault = new QCheckBox(mSaveToDbWidget);
        mDbStyleUseAsDefault->setObjectName(QStringLiteral("mDbStyleUseAsDefault"));

        gridLayout_3->addWidget(mDbStyleUseAsDefault, 3, 1, 1, 1);

        mDbStyleUIFileWidget = new QgsFileWidget(mSaveToDbWidget);
        mDbStyleUIFileWidget->setObjectName(QStringLiteral("mDbStyleUIFileWidget"));

        gridLayout_3->addWidget(mDbStyleUIFileWidget, 2, 1, 1, 1);


        gridLayout->addWidget(mSaveToDbWidget, 3, 0, 1, 2);

        mStyleTypeComboBox = new QComboBox(QgsVectorLayerSaveStyleDialog);
        mStyleTypeComboBox->setObjectName(QStringLiteral("mStyleTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStyleTypeComboBox->sizePolicy().hasHeightForWidth());
        mStyleTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mStyleTypeComboBox, 0, 1, 1, 1);

        mSaveToFileWidget = new QWidget(QgsVectorLayerSaveStyleDialog);
        mSaveToFileWidget->setObjectName(QStringLiteral("mSaveToFileWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSaveToFileWidget->sizePolicy().hasHeightForWidth());
        mSaveToFileWidget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(mSaveToFileWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(mSaveToFileWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(mSaveToFileWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mStyleCategoriesListView = new QListView(mSaveToFileWidget);
        mStyleCategoriesListView->setObjectName(QStringLiteral("mStyleCategoriesListView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStyleCategoriesListView->sizePolicy().hasHeightForWidth());
        mStyleCategoriesListView->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mStyleCategoriesListView, 2, 1, 1, 1);

        mFileWidget = new QgsFileWidget(mSaveToFileWidget);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        gridLayout_2->addWidget(mFileWidget, 0, 1, 1, 1);


        gridLayout->addWidget(mSaveToFileWidget, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsVectorLayerSaveStyleDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        mStylesWidget = new QListWidget(QgsVectorLayerSaveStyleDialog);
        mStylesWidget->setObjectName(QStringLiteral("mStylesWidget"));

        gridLayout->addWidget(mStylesWidget, 1, 1, 1, 1);

        mStylesWidgetLabel = new QLabel(QgsVectorLayerSaveStyleDialog);
        mStylesWidgetLabel->setObjectName(QStringLiteral("mStylesWidgetLabel"));

        gridLayout->addWidget(mStylesWidgetLabel, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(mDbStyleNameEdit);
        mUILabel->setBuddy(mDbStyleNameEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mStyleTypeComboBox, mStylesWidget);
        QWidget::setTabOrder(mStylesWidget, mStyleCategoriesListView);
        QWidget::setTabOrder(mStyleCategoriesListView, mDbStyleNameEdit);
        QWidget::setTabOrder(mDbStyleNameEdit, mDbStyleDescriptionEdit);
        QWidget::setTabOrder(mDbStyleDescriptionEdit, mDbStyleUseAsDefault);

        retranslateUi(QgsVectorLayerSaveStyleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorLayerSaveStyleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorLayerSaveStyleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorLayerSaveStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerSaveStyleDialog)
    {
        QgsVectorLayerSaveStyleDialog->setWindowTitle(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Save Layer Style", Q_NULLPTR));
        mModeLabel->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Save style", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Style name", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Description", Q_NULLPTR));
        mUILabel->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "UI", Q_NULLPTR));
        mDbStyleUseAsDefault->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Use as default style for this layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDbStyleUIFileWidget->setToolTip(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Optionally pick an input form for attribute editing (QT Designer UI format), it will be stored in the database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Categories", Q_NULLPTR));
        label->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "File", Q_NULLPTR));
        mStylesWidgetLabel->setText(QApplication::translate("QgsVectorLayerSaveStyleDialog", "Styles", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerSaveStyleDialog: public Ui_QgsVectorLayerSaveStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERSAVESTYLEDIALOG_H
