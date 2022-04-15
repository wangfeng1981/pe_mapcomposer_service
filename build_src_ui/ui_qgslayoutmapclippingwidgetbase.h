/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapclippingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPCLIPPINGWIDGETBASE_H
#define UI_QGSLAYOUTMAPCLIPPINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgslayoutitemcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapClippingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mClipToAtlasCheckBox;
    QGridLayout *gridLayout;
    QTreeView *mLayersTreeView;
    QComboBox *mAtlasClippingTypeComboBox;
    QLabel *label;
    QLabel *mClipToAtlasLabel;
    QRadioButton *mRadioClipSelectedLayers;
    QRadioButton *mRadioClipAllLayers;
    QCheckBox *mForceLabelsInsideCheckBox;
    QgsCollapsibleGroupBox *mClipToItemCheckBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *mClipToItemLabel;
    QComboBox *mItemClippingTypeComboBox;
    QCheckBox *mForceLabelsInsideItemCheckBox;
    QgsLayoutItemComboBox *mClipItemComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutMapClippingWidgetBase)
    {
        if (QgsLayoutMapClippingWidgetBase->objectName().isEmpty())
            QgsLayoutMapClippingWidgetBase->setObjectName(QStringLiteral("QgsLayoutMapClippingWidgetBase"));
        QgsLayoutMapClippingWidgetBase->resize(318, 619);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapClippingWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapClippingWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutMapClippingWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mClipToAtlasCheckBox = new QgsCollapsibleGroupBox(QgsLayoutMapClippingWidgetBase);
        mClipToAtlasCheckBox->setObjectName(QStringLiteral("mClipToAtlasCheckBox"));
        mClipToAtlasCheckBox->setCheckable(true);
        gridLayout = new QGridLayout(mClipToAtlasCheckBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLayersTreeView = new QTreeView(mClipToAtlasCheckBox);
        mLayersTreeView->setObjectName(QStringLiteral("mLayersTreeView"));
        mLayersTreeView->setHeaderHidden(true);
        mLayersTreeView->header()->setDefaultSectionSize(26);

        gridLayout->addWidget(mLayersTreeView, 8, 0, 1, 1);

        mAtlasClippingTypeComboBox = new QComboBox(mClipToAtlasCheckBox);
        mAtlasClippingTypeComboBox->setObjectName(QStringLiteral("mAtlasClippingTypeComboBox"));

        gridLayout->addWidget(mAtlasClippingTypeComboBox, 2, 0, 1, 1);

        label = new QLabel(mClipToAtlasCheckBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mClipToAtlasLabel = new QLabel(mClipToAtlasCheckBox);
        mClipToAtlasLabel->setObjectName(QStringLiteral("mClipToAtlasLabel"));
        mClipToAtlasLabel->setWordWrap(true);

        gridLayout->addWidget(mClipToAtlasLabel, 0, 0, 1, 1);

        mRadioClipSelectedLayers = new QRadioButton(mClipToAtlasCheckBox);
        mRadioClipSelectedLayers->setObjectName(QStringLiteral("mRadioClipSelectedLayers"));

        gridLayout->addWidget(mRadioClipSelectedLayers, 5, 0, 1, 1);

        mRadioClipAllLayers = new QRadioButton(mClipToAtlasCheckBox);
        mRadioClipAllLayers->setObjectName(QStringLiteral("mRadioClipAllLayers"));

        gridLayout->addWidget(mRadioClipAllLayers, 4, 0, 1, 1);

        mForceLabelsInsideCheckBox = new QCheckBox(mClipToAtlasCheckBox);
        mForceLabelsInsideCheckBox->setObjectName(QStringLiteral("mForceLabelsInsideCheckBox"));

        gridLayout->addWidget(mForceLabelsInsideCheckBox, 3, 0, 1, 1);


        verticalLayout->addWidget(mClipToAtlasCheckBox);

        mClipToItemCheckBox = new QgsCollapsibleGroupBox(QgsLayoutMapClippingWidgetBase);
        mClipToItemCheckBox->setObjectName(QStringLiteral("mClipToItemCheckBox"));
        mClipToItemCheckBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mClipToItemCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(mClipToItemCheckBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        mClipToItemLabel = new QLabel(mClipToItemCheckBox);
        mClipToItemLabel->setObjectName(QStringLiteral("mClipToItemLabel"));
        mClipToItemLabel->setWordWrap(true);

        gridLayout_2->addWidget(mClipToItemLabel, 0, 0, 1, 1);

        mItemClippingTypeComboBox = new QComboBox(mClipToItemCheckBox);
        mItemClippingTypeComboBox->setObjectName(QStringLiteral("mItemClippingTypeComboBox"));

        gridLayout_2->addWidget(mItemClippingTypeComboBox, 3, 0, 1, 1);

        mForceLabelsInsideItemCheckBox = new QCheckBox(mClipToItemCheckBox);
        mForceLabelsInsideItemCheckBox->setObjectName(QStringLiteral("mForceLabelsInsideItemCheckBox"));

        gridLayout_2->addWidget(mForceLabelsInsideItemCheckBox, 4, 0, 1, 1);

        mClipItemComboBox = new QgsLayoutItemComboBox(mClipToItemCheckBox);
        mClipItemComboBox->setObjectName(QStringLiteral("mClipItemComboBox"));

        gridLayout_2->addWidget(mClipItemComboBox, 1, 0, 1, 1);


        verticalLayout->addWidget(mClipToItemCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsLayoutMapClippingWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapClippingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapClippingWidgetBase)
    {
        QgsLayoutMapClippingWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Map Options", Q_NULLPTR));
        mClipToAtlasCheckBox->setTitle(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip to atlas feature", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "The clipping mode determines how features from vector layers will be clipped.", Q_NULLPTR));
        mClipToAtlasLabel->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "<b>When enabled, map layers will be automatically clipped to the boundary of the current atlas feature.</b>", Q_NULLPTR));
        mRadioClipSelectedLayers->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip selected layers:", Q_NULLPTR));
        mRadioClipAllLayers->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip all layers", Q_NULLPTR));
        mForceLabelsInsideCheckBox->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Force labels inside atlas feature", Q_NULLPTR));
        mClipToItemCheckBox->setTitle(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip to item", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "The clipping mode determines how features from vector layers will be clipped.", Q_NULLPTR));
        mClipToItemLabel->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "<b>When enabled, the map will be automatically clipped to the selected shape.</b>", Q_NULLPTR));
        mForceLabelsInsideItemCheckBox->setText(QApplication::translate("QgsLayoutMapClippingWidgetBase", "Force labels inside clipping shape", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapClippingWidgetBase: public Ui_QgsLayoutMapClippingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPCLIPPINGWIDGETBASE_H
