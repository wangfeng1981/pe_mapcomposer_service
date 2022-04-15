/********************************************************************************
** Form generated from reading UI file 'qgspointclusterrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLUSTERRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLUSTERRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointClusterRendererWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QComboBox *mRendererComboBox;
    QLabel *mDistanceToleranceLabel;
    QPushButton *mRendererSettingsButton;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mDistanceSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QSpacerItem *verticalSpacer;
    QLabel *mRendererLabel;
    QLabel *mCenterSymbolLabel;
    QgsSymbolButton *mCenterSymbolToolButton;

    void setupUi(QWidget *QgsPointClusterRendererWidgetBase)
    {
        if (QgsPointClusterRendererWidgetBase->objectName().isEmpty())
            QgsPointClusterRendererWidgetBase->setObjectName(QStringLiteral("QgsPointClusterRendererWidgetBase"));
        QgsPointClusterRendererWidgetBase->resize(381, 492);
        QgsPointClusterRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_3 = new QGridLayout(QgsPointClusterRendererWidgetBase);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mRendererComboBox = new QComboBox(QgsPointClusterRendererWidgetBase);
        mRendererComboBox->setObjectName(QStringLiteral("mRendererComboBox"));

        gridLayout_3->addWidget(mRendererComboBox, 2, 1, 1, 1);

        mDistanceToleranceLabel = new QLabel(QgsPointClusterRendererWidgetBase);
        mDistanceToleranceLabel->setObjectName(QStringLiteral("mDistanceToleranceLabel"));

        gridLayout_3->addWidget(mDistanceToleranceLabel, 6, 0, 1, 1);

        mRendererSettingsButton = new QPushButton(QgsPointClusterRendererWidgetBase);
        mRendererSettingsButton->setObjectName(QStringLiteral("mRendererSettingsButton"));

        gridLayout_3->addWidget(mRendererSettingsButton, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mDistanceSpinBox = new QgsDoubleSpinBox(QgsPointClusterRendererWidgetBase);
        mDistanceSpinBox->setObjectName(QStringLiteral("mDistanceSpinBox"));
        mDistanceSpinBox->setDecimals(7);
        mDistanceSpinBox->setMaximum(1e+9);

        horizontalLayout->addWidget(mDistanceSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(QgsPointClusterRendererWidgetBase);
        mDistanceUnitWidget->setObjectName(QStringLiteral("mDistanceUnitWidget"));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mDistanceUnitWidget);


        gridLayout_3->addLayout(horizontalLayout, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 7, 0, 1, 1);

        mRendererLabel = new QLabel(QgsPointClusterRendererWidgetBase);
        mRendererLabel->setObjectName(QStringLiteral("mRendererLabel"));

        gridLayout_3->addWidget(mRendererLabel, 2, 0, 1, 1);

        mCenterSymbolLabel = new QLabel(QgsPointClusterRendererWidgetBase);
        mCenterSymbolLabel->setObjectName(QStringLiteral("mCenterSymbolLabel"));

        gridLayout_3->addWidget(mCenterSymbolLabel, 0, 0, 1, 1);

        mCenterSymbolToolButton = new QgsSymbolButton(QgsPointClusterRendererWidgetBase);
        mCenterSymbolToolButton->setObjectName(QStringLiteral("mCenterSymbolToolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCenterSymbolToolButton->sizePolicy().hasHeightForWidth());
        mCenterSymbolToolButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mCenterSymbolToolButton, 0, 1, 1, 1);

        QWidget::setTabOrder(mCenterSymbolToolButton, mRendererComboBox);
        QWidget::setTabOrder(mRendererComboBox, mRendererSettingsButton);
        QWidget::setTabOrder(mRendererSettingsButton, mDistanceSpinBox);
        QWidget::setTabOrder(mDistanceSpinBox, mDistanceUnitWidget);

        retranslateUi(QgsPointClusterRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointClusterRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointClusterRendererWidgetBase)
    {
        mDistanceToleranceLabel->setText(QApplication::translate("QgsPointClusterRendererWidgetBase", "Distance", Q_NULLPTR));
        mRendererSettingsButton->setText(QApplication::translate("QgsPointClusterRendererWidgetBase", "Renderer Settings\342\200\246", Q_NULLPTR));
        mRendererLabel->setText(QApplication::translate("QgsPointClusterRendererWidgetBase", "Renderer", Q_NULLPTR));
        mCenterSymbolLabel->setText(QApplication::translate("QgsPointClusterRendererWidgetBase", "Cluster symbol", Q_NULLPTR));
        mCenterSymbolToolButton->setText(QString());
        Q_UNUSED(QgsPointClusterRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPointClusterRendererWidgetBase: public Ui_QgsPointClusterRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLUSTERRENDERERWIDGETBASE_H
