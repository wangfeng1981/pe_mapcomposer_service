/********************************************************************************
** Form generated from reading UI file 'qgsstyleexportimportdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEEXPORTIMPORTDIALOGBASE_H
#define UI_QGSSTYLEEXPORTIMPORTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStyleExportImportDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *mSymbolTags;
    QCheckBox *mIgnoreXMLTags;
    QLabel *tagHintLabel;
    QLabel *fromLabel;
    QLabel *mLocationLabel;
    QCheckBox *mFavorite;
    QComboBox *importTypeCombo;
    QLabel *tagLabel;
    QStackedWidget *mLocationStackedEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QgsFileWidget *mImportFileWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mUrlLineEdit;
    QPushButton *mButtonFetch;
    QLabel *label;
    QListView *listItems;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleExportImportDialogBase)
    {
        if (QgsStyleExportImportDialogBase->objectName().isEmpty())
            QgsStyleExportImportDialogBase->setObjectName(QStringLiteral("QgsStyleExportImportDialogBase"));
        QgsStyleExportImportDialogBase->resize(413, 379);
        gridLayout_2 = new QGridLayout(QgsStyleExportImportDialogBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mSymbolTags = new QLineEdit(QgsStyleExportImportDialogBase);
        mSymbolTags->setObjectName(QStringLiteral("mSymbolTags"));

        gridLayout->addWidget(mSymbolTags, 4, 1, 1, 2);

        mIgnoreXMLTags = new QCheckBox(QgsStyleExportImportDialogBase);
        mIgnoreXMLTags->setObjectName(QStringLiteral("mIgnoreXMLTags"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mIgnoreXMLTags->sizePolicy().hasHeightForWidth());
        mIgnoreXMLTags->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mIgnoreXMLTags, 3, 0, 1, 3);

        tagHintLabel = new QLabel(QgsStyleExportImportDialogBase);
        tagHintLabel->setObjectName(QStringLiteral("tagHintLabel"));

        gridLayout->addWidget(tagHintLabel, 5, 1, 1, 2);

        fromLabel = new QLabel(QgsStyleExportImportDialogBase);
        fromLabel->setObjectName(QStringLiteral("fromLabel"));

        gridLayout->addWidget(fromLabel, 0, 0, 1, 1);

        mLocationLabel = new QLabel(QgsStyleExportImportDialogBase);
        mLocationLabel->setObjectName(QStringLiteral("mLocationLabel"));

        gridLayout->addWidget(mLocationLabel, 1, 0, 1, 1);

        mFavorite = new QCheckBox(QgsStyleExportImportDialogBase);
        mFavorite->setObjectName(QStringLiteral("mFavorite"));
        sizePolicy.setHeightForWidth(mFavorite->sizePolicy().hasHeightForWidth());
        mFavorite->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFavorite, 2, 0, 1, 3);

        importTypeCombo = new QComboBox(QgsStyleExportImportDialogBase);
        importTypeCombo->setObjectName(QStringLiteral("importTypeCombo"));

        gridLayout->addWidget(importTypeCombo, 0, 1, 1, 2);

        tagLabel = new QLabel(QgsStyleExportImportDialogBase);
        tagLabel->setObjectName(QStringLiteral("tagLabel"));

        gridLayout->addWidget(tagLabel, 4, 0, 1, 1);

        mLocationStackedEdit = new QStackedWidget(QgsStyleExportImportDialogBase);
        mLocationStackedEdit->setObjectName(QStringLiteral("mLocationStackedEdit"));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mImportFileWidget = new QgsFileWidget(widget);
        mImportFileWidget->setObjectName(QStringLiteral("mImportFileWidget"));

        horizontalLayout_2->addWidget(mImportFileWidget);

        mLocationStackedEdit->addWidget(widget);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mUrlLineEdit = new QLineEdit(page);
        mUrlLineEdit->setObjectName(QStringLiteral("mUrlLineEdit"));

        horizontalLayout->addWidget(mUrlLineEdit);

        mButtonFetch = new QPushButton(page);
        mButtonFetch->setObjectName(QStringLiteral("mButtonFetch"));

        horizontalLayout->addWidget(mButtonFetch);

        horizontalLayout->setStretch(0, 1);
        mLocationStackedEdit->addWidget(page);

        gridLayout->addWidget(mLocationStackedEdit, 1, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        label = new QLabel(QgsStyleExportImportDialogBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        listItems = new QListView(QgsStyleExportImportDialogBase);
        listItems->setObjectName(QStringLiteral("listItems"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy1);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listItems->setIconSize(QSize(77, 70));
        listItems->setTextElideMode(Qt::ElideNone);
        listItems->setFlow(QListView::LeftToRight);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setViewMode(QListView::IconMode);
        listItems->setWordWrap(true);

        gridLayout_2->addWidget(listItems, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsStyleExportImportDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        QWidget::setTabOrder(importTypeCombo, mFavorite);
        QWidget::setTabOrder(mFavorite, mIgnoreXMLTags);
        QWidget::setTabOrder(mIgnoreXMLTags, mSymbolTags);
        QWidget::setTabOrder(mSymbolTags, listItems);

        retranslateUi(QgsStyleExportImportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStyleExportImportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleExportImportDialogBase, SLOT(reject()));

        mLocationStackedEdit->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsStyleExportImportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleExportImportDialogBase)
    {
        QgsStyleExportImportDialogBase->setWindowTitle(QApplication::translate("QgsStyleExportImportDialogBase", "Styles Import/Export", Q_NULLPTR));
        mIgnoreXMLTags->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Do not import embedded tags", Q_NULLPTR));
        tagHintLabel->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Tip: separate multiple tags with commas", Q_NULLPTR));
        fromLabel->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Import from", Q_NULLPTR));
        mLocationLabel->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Location", Q_NULLPTR));
        mFavorite->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Add to favorites", Q_NULLPTR));
        tagLabel->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Additional tag(s)", Q_NULLPTR));
        mButtonFetch->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Fetch Items", Q_NULLPTR));
        label->setText(QApplication::translate("QgsStyleExportImportDialogBase", "Select items to export", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleExportImportDialogBase: public Ui_QgsStyleExportImportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEEXPORTIMPORTDIALOGBASE_H
