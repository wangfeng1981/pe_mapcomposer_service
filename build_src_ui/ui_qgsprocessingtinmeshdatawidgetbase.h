/********************************************************************************
** Form generated from reading UI file 'qgsprocessingtinmeshdatawidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGTINMESHDATAWIDGETBASE_H
#define UI_QGSPROCESSINGTINMESHDATAWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingTinInputLayersWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mButtonAdd;
    QToolButton *mButtonRemove;
    QgsFieldComboBox *mComboFields;
    QgsMapLayerComboBox *mComboLayers;
    QLabel *label_2;
    QCheckBox *mCheckBoxUseZCoordinate;
    QLabel *label_3;
    QTableView *mTableView;

    void setupUi(QWidget *QgsProcessingTinInputLayersWidgetBase)
    {
        if (QgsProcessingTinInputLayersWidgetBase->objectName().isEmpty())
            QgsProcessingTinInputLayersWidgetBase->setObjectName(QStringLiteral("QgsProcessingTinInputLayersWidgetBase"));
        QgsProcessingTinInputLayersWidgetBase->resize(527, 300);
        QgsProcessingTinInputLayersWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsProcessingTinInputLayersWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mButtonAdd = new QToolButton(QgsProcessingTinInputLayersWidgetBase);
        mButtonAdd->setObjectName(QStringLiteral("mButtonAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAdd->setIcon(icon);

        horizontalLayout->addWidget(mButtonAdd);

        mButtonRemove = new QToolButton(QgsProcessingTinInputLayersWidgetBase);
        mButtonRemove->setObjectName(QStringLiteral("mButtonRemove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemove->setIcon(icon1);

        horizontalLayout->addWidget(mButtonRemove);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        mComboFields = new QgsFieldComboBox(QgsProcessingTinInputLayersWidgetBase);
        mComboFields->setObjectName(QStringLiteral("mComboFields"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mComboFields->sizePolicy().hasHeightForWidth());
        mComboFields->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mComboFields, 1, 1, 1, 1);

        mComboLayers = new QgsMapLayerComboBox(QgsProcessingTinInputLayersWidgetBase);
        mComboLayers->setObjectName(QStringLiteral("mComboLayers"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mComboLayers->sizePolicy().hasHeightForWidth());
        mComboLayers->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mComboLayers, 0, 1, 1, 1);

        label_2 = new QLabel(QgsProcessingTinInputLayersWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mCheckBoxUseZCoordinate = new QCheckBox(QgsProcessingTinInputLayersWidgetBase);
        mCheckBoxUseZCoordinate->setObjectName(QStringLiteral("mCheckBoxUseZCoordinate"));

        gridLayout->addWidget(mCheckBoxUseZCoordinate, 2, 0, 1, 2);

        label_3 = new QLabel(QgsProcessingTinInputLayersWidgetBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mTableView = new QTableView(QgsProcessingTinInputLayersWidgetBase);
        mTableView->setObjectName(QStringLiteral("mTableView"));
        mTableView->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::SelectedClicked);
        mTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        mTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mTableView->horizontalHeader()->setCascadingSectionResizes(true);
        mTableView->horizontalHeader()->setHighlightSections(false);
        mTableView->horizontalHeader()->setStretchLastSection(true);
        mTableView->verticalHeader()->setVisible(false);
        mTableView->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(mTableView, 4, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(mComboLayers);
        label_3->setBuddy(mComboFields);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsProcessingTinInputLayersWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingTinInputLayersWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingTinInputLayersWidgetBase)
    {
        mButtonAdd->setText(QApplication::translate("QgsProcessingTinInputLayersWidgetBase", "\342\200\246", Q_NULLPTR));
        mButtonRemove->setText(QApplication::translate("QgsProcessingTinInputLayersWidgetBase", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsProcessingTinInputLayersWidgetBase", "Vector Layer", Q_NULLPTR));
        mCheckBoxUseZCoordinate->setText(QApplication::translate("QgsProcessingTinInputLayersWidgetBase", "Use Z-coordinate for Value on Vertex", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsProcessingTinInputLayersWidgetBase", "Value on Vertex", Q_NULLPTR));
        Q_UNUSED(QgsProcessingTinInputLayersWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingTinInputLayersWidgetBase: public Ui_QgsProcessingTinInputLayersWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGTINMESHDATAWIDGETBASE_H
