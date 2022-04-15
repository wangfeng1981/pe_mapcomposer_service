/********************************************************************************
** Form generated from reading UI file 'qgslayoutmaplabelingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPLABELINGWIDGETBASE_H
#define UI_QGSLAYOUTMAPLABELINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapLabelingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *qgsCollapsibleGroupBoxBasic;
    QGridLayout *gridLayout_6;
    QLabel *label_10;
    QgsLayoutUnitsComboBox *mLabelBoundaryUnitsCombo;
    QgsDoubleSpinBox *mLabelBoundarySpinBox;
    QLabel *label_8;
    QgsPropertyOverrideButton *mLabelMarginDDBtn;
    QCheckBox *mShowPartialLabelsCheckBox;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QListView *mBlockingItemsListView;
    QCheckBox *mShowUnplacedCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutMapLabelingWidgetBase)
    {
        if (QgsLayoutMapLabelingWidgetBase->objectName().isEmpty())
            QgsLayoutMapLabelingWidgetBase->setObjectName(QStringLiteral("QgsLayoutMapLabelingWidgetBase"));
        QgsLayoutMapLabelingWidgetBase->resize(211, 408);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapLabelingWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapLabelingWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutMapLabelingWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        qgsCollapsibleGroupBoxBasic = new QgsCollapsibleGroupBoxBasic(QgsLayoutMapLabelingWidgetBase);
        qgsCollapsibleGroupBoxBasic->setObjectName(QStringLiteral("qgsCollapsibleGroupBoxBasic"));
        gridLayout_6 = new QGridLayout(qgsCollapsibleGroupBoxBasic);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_10 = new QLabel(qgsCollapsibleGroupBoxBasic);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setScaledContents(false);
        label_10->setWordWrap(true);

        gridLayout_6->addWidget(label_10, 1, 0, 1, 4);

        mLabelBoundaryUnitsCombo = new QgsLayoutUnitsComboBox(qgsCollapsibleGroupBoxBasic);
        mLabelBoundaryUnitsCombo->setObjectName(QStringLiteral("mLabelBoundaryUnitsCombo"));

        gridLayout_6->addWidget(mLabelBoundaryUnitsCombo, 2, 2, 1, 1);

        mLabelBoundarySpinBox = new QgsDoubleSpinBox(qgsCollapsibleGroupBoxBasic);
        mLabelBoundarySpinBox->setObjectName(QStringLiteral("mLabelBoundarySpinBox"));
        mLabelBoundarySpinBox->setMinimum(0);
        mLabelBoundarySpinBox->setMaximum(9999);
        mLabelBoundarySpinBox->setValue(0);
        mLabelBoundarySpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mLabelBoundarySpinBox, 2, 0, 1, 2);

        label_8 = new QLabel(qgsCollapsibleGroupBoxBasic);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 4);

        mLabelMarginDDBtn = new QgsPropertyOverrideButton(qgsCollapsibleGroupBoxBasic);
        mLabelMarginDDBtn->setObjectName(QStringLiteral("mLabelMarginDDBtn"));

        gridLayout_6->addWidget(mLabelMarginDDBtn, 2, 3, 1, 1);

        mShowPartialLabelsCheckBox = new QCheckBox(qgsCollapsibleGroupBoxBasic);
        mShowPartialLabelsCheckBox->setObjectName(QStringLiteral("mShowPartialLabelsCheckBox"));

        gridLayout_6->addWidget(mShowPartialLabelsCheckBox, 3, 0, 1, 4);


        verticalLayout->addWidget(qgsCollapsibleGroupBoxBasic);

        groupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutMapLabelingWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        verticalLayout_2->addWidget(label_9);

        mBlockingItemsListView = new QListView(groupBox);
        mBlockingItemsListView->setObjectName(QStringLiteral("mBlockingItemsListView"));

        verticalLayout_2->addWidget(mBlockingItemsListView);


        verticalLayout->addWidget(groupBox);

        mShowUnplacedCheckBox = new QCheckBox(QgsLayoutMapLabelingWidgetBase);
        mShowUnplacedCheckBox->setObjectName(QStringLiteral("mShowUnplacedCheckBox"));

        verticalLayout->addWidget(mShowUnplacedCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsLayoutMapLabelingWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapLabelingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapLabelingWidgetBase)
    {
        QgsLayoutMapLabelingWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "Map Options", Q_NULLPTR));
        qgsCollapsibleGroupBoxBasic->setTitle(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "Placement", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "No labels will be placed within this distance of the map\342\200\231s edges, or from any label-blocking items which are checked below.", Q_NULLPTR));
        mLabelBoundarySpinBox->setPrefix(QString());
        label_8->setText(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "<b>Margin from map edges</b>", Q_NULLPTR));
        mLabelMarginDDBtn->setText(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "\342\200\246", Q_NULLPTR));
        mShowPartialLabelsCheckBox->setText(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "Allow truncated labels on edges of map", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "Label Blocking Items", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "Avoid placing labels under these items", Q_NULLPTR));
        mShowUnplacedCheckBox->setText(QApplication::translate("QgsLayoutMapLabelingWidgetBase", "Show unplaced labels", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapLabelingWidgetBase: public Ui_QgsLayoutMapLabelingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPLABELINGWIDGETBASE_H
