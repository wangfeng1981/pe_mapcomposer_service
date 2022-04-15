/********************************************************************************
** Form generated from reading UI file 'qgscoordinateoperationwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOORDINATEOPERATIONWIDGETBASE_H
#define UI_QGSCOORDINATEOPERATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgscoordinateboundspreviewmapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCoordinateOperationWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *mInstallGridButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mLabelSrcDescription;
    QLabel *mLabelDstDescription;
    QgsCoordinateBoundsPreviewMapWidget *mAreaCanvas;
    QTableWidget *mCoordinateOperationTableWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mHideDeprecatedCheckBox;
    QCheckBox *mShowSupersededCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mAllowFallbackCheckBox;
    QCheckBox *mMakeDefaultCheckBox;

    void setupUi(QWidget *QgsCoordinateOperationWidgetBase)
    {
        if (QgsCoordinateOperationWidgetBase->objectName().isEmpty())
            QgsCoordinateOperationWidgetBase->setObjectName(QStringLiteral("QgsCoordinateOperationWidgetBase"));
        QgsCoordinateOperationWidgetBase->resize(651, 433);
        gridLayout = new QGridLayout(QgsCoordinateOperationWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        mInstallGridButton = new QPushButton(QgsCoordinateOperationWidgetBase);
        mInstallGridButton->setObjectName(QStringLiteral("mInstallGridButton"));

        gridLayout_2->addWidget(mInstallGridButton, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        mLabelSrcDescription = new QLabel(QgsCoordinateOperationWidgetBase);
        mLabelSrcDescription->setObjectName(QStringLiteral("mLabelSrcDescription"));
        mLabelSrcDescription->setCursor(QCursor(Qt::IBeamCursor));
        mLabelSrcDescription->setText(QStringLiteral("Description"));
        mLabelSrcDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelSrcDescription->setWordWrap(true);
        mLabelSrcDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(mLabelSrcDescription, 0, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout_2);

        mLabelDstDescription = new QLabel(QgsCoordinateOperationWidgetBase);
        mLabelDstDescription->setObjectName(QStringLiteral("mLabelDstDescription"));
        mLabelDstDescription->setCursor(QCursor(Qt::IBeamCursor));
        mLabelDstDescription->setText(QStringLiteral("Description"));
        mLabelDstDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelDstDescription->setWordWrap(true);
        mLabelDstDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(mLabelDstDescription);

        mAreaCanvas = new QgsCoordinateBoundsPreviewMapWidget(QgsCoordinateOperationWidgetBase);
        mAreaCanvas->setObjectName(QStringLiteral("mAreaCanvas"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAreaCanvas->sizePolicy().hasHeightForWidth());
        mAreaCanvas->setSizePolicy(sizePolicy);
        mAreaCanvas->setMinimumSize(QSize(230, 117));
        mAreaCanvas->setMaximumSize(QSize(16777214, 16777215));

        horizontalLayout_2->addWidget(mAreaCanvas);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        mCoordinateOperationTableWidget = new QTableWidget(QgsCoordinateOperationWidgetBase);
        mCoordinateOperationTableWidget->setObjectName(QStringLiteral("mCoordinateOperationTableWidget"));
        mCoordinateOperationTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mCoordinateOperationTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(mCoordinateOperationTableWidget, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mHideDeprecatedCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mHideDeprecatedCheckBox->setObjectName(QStringLiteral("mHideDeprecatedCheckBox"));

        horizontalLayout->addWidget(mHideDeprecatedCheckBox);

        mShowSupersededCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mShowSupersededCheckBox->setObjectName(QStringLiteral("mShowSupersededCheckBox"));

        horizontalLayout->addWidget(mShowSupersededCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mAllowFallbackCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mAllowFallbackCheckBox->setObjectName(QStringLiteral("mAllowFallbackCheckBox"));
        mAllowFallbackCheckBox->setChecked(true);

        horizontalLayout->addWidget(mAllowFallbackCheckBox);

        mMakeDefaultCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mMakeDefaultCheckBox->setObjectName(QStringLiteral("mMakeDefaultCheckBox"));

        horizontalLayout->addWidget(mMakeDefaultCheckBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        QWidget::setTabOrder(mCoordinateOperationTableWidget, mHideDeprecatedCheckBox);
        QWidget::setTabOrder(mHideDeprecatedCheckBox, mMakeDefaultCheckBox);

        retranslateUi(QgsCoordinateOperationWidgetBase);

        QMetaObject::connectSlotsByName(QgsCoordinateOperationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCoordinateOperationWidgetBase)
    {
        QgsCoordinateOperationWidgetBase->setWindowTitle(QApplication::translate("QgsCoordinateOperationWidgetBase", "Select Datum Transformations", Q_NULLPTR));
        mInstallGridButton->setText(QApplication::translate("QgsCoordinateOperationWidgetBase", "Install Grid\342\200\246", Q_NULLPTR));
        mHideDeprecatedCheckBox->setText(QApplication::translate("QgsCoordinateOperationWidgetBase", "Hide deprecated transformations", Q_NULLPTR));
        mShowSupersededCheckBox->setText(QApplication::translate("QgsCoordinateOperationWidgetBase", "Show superseded transforms", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAllowFallbackCheckBox->setToolTip(QApplication::translate("QgsCoordinateOperationWidgetBase", "Sets whether \"ballpark\" fallback transformations can be\n"
"used in the case that the specified coordinate operation fails\n"
"(such as when coordinates from outside a required grid shift\n"
"file are transformed).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAllowFallbackCheckBox->setText(QApplication::translate("QgsCoordinateOperationWidgetBase", "Allow fallback transforms if preferred operation fails", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMakeDefaultCheckBox->setToolTip(QApplication::translate("QgsCoordinateOperationWidgetBase", "If checked, the selected transformation will become the default choice in all new projects", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMakeDefaultCheckBox->setText(QApplication::translate("QgsCoordinateOperationWidgetBase", "Make default", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCoordinateOperationWidgetBase: public Ui_QgsCoordinateOperationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOORDINATEOPERATIONWIDGETBASE_H
