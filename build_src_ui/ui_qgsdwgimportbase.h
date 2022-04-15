/********************************************************************************
** Form generated from reading UI file 'qgsdwgimportbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDWGIMPORTBASE_H
#define UI_QGSDWGIMPORTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include "qgsfilewidget.h"
#include "qgsmessagebar.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDwgImportBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout_2;
    QTableWidget *mLayers;
    QLineEdit *leLayerGroup;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbMergeLayers;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDeselectAll;
    QPushButton *pbSelectAll;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leDrawing;
    QPushButton *pbImportDrawing;
    QPushButton *pbBrowseDrawing;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QgsFileWidget *mDatabaseFileWidget;
    QPushButton *pbLoadDatabase;
    QLabel *lblMessage;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbExpandInserts;
    QCheckBox *cbUseCurves;
    QgsMessageBar *bar;

    void setupUi(QDialog *QgsDwgImportBase)
    {
        if (QgsDwgImportBase->objectName().isEmpty())
            QgsDwgImportBase->setObjectName(QStringLiteral("QgsDwgImportBase"));
        QgsDwgImportBase->resize(497, 415);
        gridLayout = new QGridLayout(QgsDwgImportBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsDwgImportBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);

        mGroupBox = new QGroupBox(QgsDwgImportBase);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        mGroupBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(mGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mLayers = new QTableWidget(mGroupBox);
        if (mLayers->columnCount() < 2)
            mLayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mLayers->setObjectName(QStringLiteral("mLayers"));
        mLayers->setAlternatingRowColors(true);
        mLayers->setSortingEnabled(true);

        gridLayout_2->addWidget(mLayers, 1, 0, 1, 3);

        leLayerGroup = new QLineEdit(mGroupBox);
        leLayerGroup->setObjectName(QStringLiteral("leLayerGroup"));

        gridLayout_2->addWidget(leLayerGroup, 0, 2, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbMergeLayers = new QCheckBox(mGroupBox);
        cbMergeLayers->setObjectName(QStringLiteral("cbMergeLayers"));

        horizontalLayout_3->addWidget(cbMergeLayers);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbDeselectAll = new QPushButton(mGroupBox);
        pbDeselectAll->setObjectName(QStringLiteral("pbDeselectAll"));

        horizontalLayout_3->addWidget(pbDeselectAll);

        pbSelectAll = new QPushButton(mGroupBox);
        pbSelectAll->setObjectName(QStringLiteral("pbSelectAll"));

        horizontalLayout_3->addWidget(pbSelectAll);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 3);


        gridLayout->addWidget(mGroupBox, 3, 0, 1, 2);

        groupBox = new QGroupBox(QgsDwgImportBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        leDrawing = new QLineEdit(groupBox);
        leDrawing->setObjectName(QStringLiteral("leDrawing"));
        leDrawing->setReadOnly(true);

        horizontalLayout_2->addWidget(leDrawing);

        pbImportDrawing = new QPushButton(groupBox);
        pbImportDrawing->setObjectName(QStringLiteral("pbImportDrawing"));

        horizontalLayout_2->addWidget(pbImportDrawing);

        pbBrowseDrawing = new QPushButton(groupBox);
        pbBrowseDrawing->setObjectName(QStringLiteral("pbBrowseDrawing"));

        horizontalLayout_2->addWidget(pbBrowseDrawing);


        gridLayout_4->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mDatabaseFileWidget = new QgsFileWidget(groupBox);
        mDatabaseFileWidget->setObjectName(QStringLiteral("mDatabaseFileWidget"));
        mDatabaseFileWidget->setFilter(QStringLiteral("*.gpkg;;*.GPKG"));

        horizontalLayout->addWidget(mDatabaseFileWidget);

        pbLoadDatabase = new QPushButton(groupBox);
        pbLoadDatabase->setObjectName(QStringLiteral("pbLoadDatabase"));

        horizontalLayout->addWidget(pbLoadDatabase);


        gridLayout_4->addLayout(horizontalLayout, 0, 1, 1, 1);

        lblMessage = new QLabel(groupBox);
        lblMessage->setObjectName(QStringLiteral("lblMessage"));
        lblMessage->setText(QStringLiteral("TextLabel"));

        gridLayout_4->addWidget(lblMessage, 5, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cbExpandInserts = new QCheckBox(groupBox);
        cbExpandInserts->setObjectName(QStringLiteral("cbExpandInserts"));

        horizontalLayout_4->addWidget(cbExpandInserts);

        cbUseCurves = new QCheckBox(groupBox);
        cbUseCurves->setObjectName(QStringLiteral("cbUseCurves"));

        horizontalLayout_4->addWidget(cbUseCurves);


        gridLayout_4->addLayout(horizontalLayout_4, 7, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        bar = new QgsMessageBar(QgsDwgImportBase);
        bar->setObjectName(QStringLiteral("bar"));

        gridLayout->addWidget(bar, 0, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(leLayerGroup);
        label_2->setBuddy(leDrawing);
        label_4->setBuddy(mCrsSelector);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(pbLoadDatabase, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, leDrawing);
        QWidget::setTabOrder(leDrawing, pbImportDrawing);
        QWidget::setTabOrder(pbImportDrawing, pbBrowseDrawing);
        QWidget::setTabOrder(pbBrowseDrawing, cbExpandInserts);
        QWidget::setTabOrder(cbExpandInserts, cbUseCurves);
        QWidget::setTabOrder(cbUseCurves, leLayerGroup);
        QWidget::setTabOrder(leLayerGroup, mLayers);
        QWidget::setTabOrder(mLayers, cbMergeLayers);
        QWidget::setTabOrder(cbMergeLayers, pbDeselectAll);
        QWidget::setTabOrder(pbDeselectAll, pbSelectAll);

        retranslateUi(QgsDwgImportBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDwgImportBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDwgImportBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDwgImportBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDwgImportBase)
    {
        QgsDwgImportBase->setWindowTitle(QApplication::translate("QgsDwgImportBase", "DWG/DXF Import", Q_NULLPTR));
        mGroupBox->setTitle(QApplication::translate("QgsDwgImportBase", "Layers to Import into Project", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsDwgImportBase", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsDwgImportBase", "Visible", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsDwgImportBase", "Group name", Q_NULLPTR));
        cbMergeLayers->setText(QApplication::translate("QgsDwgImportBase", "Merge layers", Q_NULLPTR));
        pbDeselectAll->setText(QApplication::translate("QgsDwgImportBase", "Deselect All", Q_NULLPTR));
        pbSelectAll->setText(QApplication::translate("QgsDwgImportBase", "Select All", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsDwgImportBase", "Import Drawing into GeoPackage", Q_NULLPTR));
        pbImportDrawing->setText(QApplication::translate("QgsDwgImportBase", "Reload", Q_NULLPTR));
        pbBrowseDrawing->setText(QApplication::translate("QgsDwgImportBase", "Import", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsDwgImportBase", "Source drawing", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDwgImportBase", "Target package", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsDwgImportBase", "CRS", Q_NULLPTR));
        mDatabaseFileWidget->setDialogTitle(QApplication::translate("QgsDwgImportBase", "Select GeoPackage Database", Q_NULLPTR));
        pbLoadDatabase->setText(QApplication::translate("QgsDwgImportBase", "Load layers", Q_NULLPTR));
        cbExpandInserts->setText(QApplication::translate("QgsDwgImportBase", "Expand block references", Q_NULLPTR));
        cbUseCurves->setText(QApplication::translate("QgsDwgImportBase", "Use curves", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDwgImportBase: public Ui_QgsDwgImportBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDWGIMPORTBASE_H
