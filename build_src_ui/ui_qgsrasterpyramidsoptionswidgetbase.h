/********************************************************************************
** Form generated from reading UI file 'qgsrasterpyramidsoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERPYRAMIDSOPTIONSWIDGETBASE_H
#define UI_QGSRASTERPYRAMIDSOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsrasterformatsaveoptionswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterPyramidsOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lePyramidsLevels;
    QHBoxLayout *layoutPyramidsLevels;
    QComboBox *cbxPyramidsFormat;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *textLabel4_2;
    QComboBox *cboResamplingMethod;
    QCheckBox *cbxPyramidsLevelsCustom;
    QFrame *line;
    QgsRasterFormatSaveOptionsWidget *mSaveOptionsWidget;
    QLabel *label_2;

    void setupUi(QWidget *QgsRasterPyramidsOptionsWidgetBase)
    {
        if (QgsRasterPyramidsOptionsWidgetBase->objectName().isEmpty())
            QgsRasterPyramidsOptionsWidgetBase->setObjectName(QStringLiteral("QgsRasterPyramidsOptionsWidgetBase"));
        QgsRasterPyramidsOptionsWidgetBase->resize(388, 166);
        QgsRasterPyramidsOptionsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsRasterPyramidsOptionsWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        lePyramidsLevels = new QLineEdit(QgsRasterPyramidsOptionsWidgetBase);
        lePyramidsLevels->setObjectName(QStringLiteral("lePyramidsLevels"));

        gridLayout->addWidget(lePyramidsLevels, 4, 2, 1, 1);

        layoutPyramidsLevels = new QHBoxLayout();
        layoutPyramidsLevels->setObjectName(QStringLiteral("layoutPyramidsLevels"));

        gridLayout->addLayout(layoutPyramidsLevels, 3, 2, 1, 1);

        cbxPyramidsFormat = new QComboBox(QgsRasterPyramidsOptionsWidgetBase);
        cbxPyramidsFormat->setObjectName(QStringLiteral("cbxPyramidsFormat"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxPyramidsFormat->sizePolicy().hasHeightForWidth());
        cbxPyramidsFormat->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbxPyramidsFormat, 1, 2, 1, 1);

        label_5 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 8, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        textLabel4_2 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        textLabel4_2->setObjectName(QStringLiteral("textLabel4_2"));

        gridLayout->addWidget(textLabel4_2, 2, 0, 1, 1);

        cboResamplingMethod = new QComboBox(QgsRasterPyramidsOptionsWidgetBase);
        cboResamplingMethod->setObjectName(QStringLiteral("cboResamplingMethod"));

        gridLayout->addWidget(cboResamplingMethod, 2, 2, 1, 1);

        cbxPyramidsLevelsCustom = new QCheckBox(QgsRasterPyramidsOptionsWidgetBase);
        cbxPyramidsLevelsCustom->setObjectName(QStringLiteral("cbxPyramidsLevelsCustom"));

        gridLayout->addWidget(cbxPyramidsLevelsCustom, 4, 0, 1, 1);

        line = new QFrame(QgsRasterPyramidsOptionsWidgetBase);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 0, 1, 3);

        mSaveOptionsWidget = new QgsRasterFormatSaveOptionsWidget(QgsRasterPyramidsOptionsWidgetBase);
        mSaveOptionsWidget->setObjectName(QStringLiteral("mSaveOptionsWidget"));

        gridLayout->addWidget(mSaveOptionsWidget, 9, 0, 1, 3);

        label_2 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        QWidget::setTabOrder(cbxPyramidsFormat, cboResamplingMethod);
        QWidget::setTabOrder(cboResamplingMethod, cbxPyramidsLevelsCustom);
        QWidget::setTabOrder(cbxPyramidsLevelsCustom, lePyramidsLevels);

        retranslateUi(QgsRasterPyramidsOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterPyramidsOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterPyramidsOptionsWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        lePyramidsLevels->setToolTip(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Insert positive integer values separated by spaces", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbxPyramidsFormat->clear();
        cbxPyramidsFormat->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "External (GTiff .ovr)", Q_NULLPTR)
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Internal (if possible)", Q_NULLPTR)
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "External (Erdas Imagine .aux)", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Levels", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Create Options", Q_NULLPTR));
        textLabel4_2->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Resampling method", Q_NULLPTR));
        cboResamplingMethod->clear();
        cboResamplingMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Average", Q_NULLPTR)
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Nearest Neighbour", Q_NULLPTR)
        );
        cbxPyramidsLevelsCustom->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Custom levels", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Overview format", Q_NULLPTR));
        Q_UNUSED(QgsRasterPyramidsOptionsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterPyramidsOptionsWidgetBase: public Ui_QgsRasterPyramidsOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERPYRAMIDSOPTIONSWIDGETBASE_H
