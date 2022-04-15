/********************************************************************************
** Form generated from reading UI file 'qgslegendpatchshapewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLEGENDPATCHSHAPEWIDGETBASE_H
#define UI_QGSLEGENDPATCHSHAPEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include "qgspanelwidget.h"
#include "qgsstyleitemslistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLegendPatchShapeWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QPlainTextEdit *mShapeEdit;
    QCheckBox *mPreserveRatioCheckBox;
    QgsStyleItemsListWidget *mStyleItemsListWidget;

    void setupUi(QgsPanelWidget *QgsLegendPatchShapeWidgetBase)
    {
        if (QgsLegendPatchShapeWidgetBase->objectName().isEmpty())
            QgsLegendPatchShapeWidgetBase->setObjectName(QStringLiteral("QgsLegendPatchShapeWidgetBase"));
        QgsLegendPatchShapeWidgetBase->resize(386, 619);
        QgsLegendPatchShapeWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_4 = new QGridLayout(QgsLegendPatchShapeWidgetBase);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(QgsLegendPatchShapeWidgetBase);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(QgsLegendPatchShapeWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mShapeEdit = new QPlainTextEdit(QgsLegendPatchShapeWidgetBase);
        mShapeEdit->setObjectName(QStringLiteral("mShapeEdit"));

        gridLayout->addWidget(mShapeEdit, 0, 1, 1, 1);

        mPreserveRatioCheckBox = new QCheckBox(QgsLegendPatchShapeWidgetBase);
        mPreserveRatioCheckBox->setObjectName(QStringLiteral("mPreserveRatioCheckBox"));

        gridLayout->addWidget(mPreserveRatioCheckBox, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        mStyleItemsListWidget = new QgsStyleItemsListWidget(QgsLegendPatchShapeWidgetBase);
        mStyleItemsListWidget->setObjectName(QStringLiteral("mStyleItemsListWidget"));

        gridLayout_4->addWidget(mStyleItemsListWidget, 2, 0, 1, 1);

        gridLayout_4->setRowStretch(2, 1);

        retranslateUi(QgsLegendPatchShapeWidgetBase);

        QMetaObject::connectSlotsByName(QgsLegendPatchShapeWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLegendPatchShapeWidgetBase)
    {
        label_5->setText(QApplication::translate("QgsLegendPatchShapeWidgetBase", "Shape", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mShapeEdit->setToolTip(QApplication::translate("QgsLegendPatchShapeWidgetBase", "Patch shape geometry, as a WKT string", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mPreserveRatioCheckBox->setText(QApplication::translate("QgsLegendPatchShapeWidgetBase", "Preserve aspect ratio", Q_NULLPTR));
        Q_UNUSED(QgsLegendPatchShapeWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLegendPatchShapeWidgetBase: public Ui_QgsLegendPatchShapeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLEGENDPATCHSHAPEWIDGETBASE_H
