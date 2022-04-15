/********************************************************************************
** Form generated from reading UI file 'qgsunitselectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUNITSELECTIONWIDGET_H
#define UI_QGSUNITSELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUnitSelectionWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *mUnitCombo;
    QToolButton *mMapScaleButton;

    void setupUi(QWidget *QgsUnitSelectionWidget)
    {
        if (QgsUnitSelectionWidget->objectName().isEmpty())
            QgsUnitSelectionWidget->setObjectName(QStringLiteral("QgsUnitSelectionWidget"));
        QgsUnitSelectionWidget->resize(109, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsUnitSelectionWidget->sizePolicy().hasHeightForWidth());
        QgsUnitSelectionWidget->setSizePolicy(sizePolicy);
        QgsUnitSelectionWidget->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout = new QHBoxLayout(QgsUnitSelectionWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mUnitCombo = new QComboBox(QgsUnitSelectionWidget);
        mUnitCombo->setObjectName(QStringLiteral("mUnitCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mUnitCombo->sizePolicy().hasHeightForWidth());
        mUnitCombo->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mUnitCombo);

        mMapScaleButton = new QToolButton(QgsUnitSelectionWidget);
        mMapScaleButton->setObjectName(QStringLiteral("mMapScaleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMapScaleButton->sizePolicy().hasHeightForWidth());
        mMapScaleButton->setSizePolicy(sizePolicy2);
        mMapScaleButton->setStyleSheet(QStringLiteral("QPushButton {margin: 0s; }"));
        mMapScaleButton->setText(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMapScaleButton->setIcon(icon);
        mMapScaleButton->setAutoRaise(true);

        horizontalLayout->addWidget(mMapScaleButton);


        retranslateUi(QgsUnitSelectionWidget);

        QMetaObject::connectSlotsByName(QgsUnitSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsUnitSelectionWidget)
    {
        Q_UNUSED(QgsUnitSelectionWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsUnitSelectionWidget: public Ui_QgsUnitSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUNITSELECTIONWIDGET_H
