/********************************************************************************
** Form generated from reading UI file 'qgsmapunitscalewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPUNITSCALEWIDGETBASE_H
#define UI_QGSMAPUNITSCALEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgsscalewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapUnitScaleWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QgsScaleWidget *mComboBoxMinScale;
    QLabel *label;
    QCheckBox *mCheckBoxMinScale;
    QgsScaleWidget *mComboBoxMaxScale;
    QCheckBox *mCheckBoxMaxScale;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *mCheckBoxMinSize;
    QCheckBox *mCheckBoxMaxSize;
    QgsDoubleSpinBox *mSpinBoxMinSize;
    QgsDoubleSpinBox *mSpinBoxMaxSize;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsMapUnitScaleWidgetBase)
    {
        if (QgsMapUnitScaleWidgetBase->objectName().isEmpty())
            QgsMapUnitScaleWidgetBase->setObjectName(QStringLiteral("QgsMapUnitScaleWidgetBase"));
        QgsMapUnitScaleWidgetBase->resize(285, 233);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsMapUnitScaleWidgetBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMapUnitScaleWidgetBase);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(QgsMapUnitScaleWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mComboBoxMinScale = new QgsScaleWidget(groupBox);
        mComboBoxMinScale->setObjectName(QStringLiteral("mComboBoxMinScale"));
        mComboBoxMinScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mComboBoxMinScale, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        mCheckBoxMinScale = new QCheckBox(groupBox);
        mCheckBoxMinScale->setObjectName(QStringLiteral("mCheckBoxMinScale"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCheckBoxMinScale->sizePolicy().hasHeightForWidth());
        mCheckBoxMinScale->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mCheckBoxMinScale, 1, 0, 1, 1);

        mComboBoxMaxScale = new QgsScaleWidget(groupBox);
        mComboBoxMaxScale->setObjectName(QStringLiteral("mComboBoxMaxScale"));
        mComboBoxMaxScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mComboBoxMaxScale, 3, 1, 1, 1);

        mCheckBoxMaxScale = new QCheckBox(groupBox);
        mCheckBoxMaxScale->setObjectName(QStringLiteral("mCheckBoxMaxScale"));
        sizePolicy.setHeightForWidth(mCheckBoxMaxScale->sizePolicy().hasHeightForWidth());
        mCheckBoxMaxScale->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mCheckBoxMaxScale, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsMapUnitScaleWidgetBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mCheckBoxMinSize = new QCheckBox(groupBox_2);
        mCheckBoxMinSize->setObjectName(QStringLiteral("mCheckBoxMinSize"));
        sizePolicy.setHeightForWidth(mCheckBoxMinSize->sizePolicy().hasHeightForWidth());
        mCheckBoxMinSize->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mCheckBoxMinSize, 1, 0, 1, 1);

        mCheckBoxMaxSize = new QCheckBox(groupBox_2);
        mCheckBoxMaxSize->setObjectName(QStringLiteral("mCheckBoxMaxSize"));
        sizePolicy.setHeightForWidth(mCheckBoxMaxSize->sizePolicy().hasHeightForWidth());
        mCheckBoxMaxSize->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mCheckBoxMaxSize, 2, 0, 1, 1);

        mSpinBoxMinSize = new QgsDoubleSpinBox(groupBox_2);
        mSpinBoxMinSize->setObjectName(QStringLiteral("mSpinBoxMinSize"));
        mSpinBoxMinSize->setMaximum(1e+7);

        gridLayout_3->addWidget(mSpinBoxMinSize, 1, 1, 1, 1);

        mSpinBoxMaxSize = new QgsDoubleSpinBox(groupBox_2);
        mSpinBoxMaxSize->setObjectName(QStringLiteral("mSpinBoxMaxSize"));
        mSpinBoxMaxSize->setMaximum(999999);

        gridLayout_3->addWidget(mSpinBoxMaxSize, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 2);

        QWidget::setTabOrder(mCheckBoxMinScale, mComboBoxMinScale);
        QWidget::setTabOrder(mComboBoxMinScale, mCheckBoxMaxScale);
        QWidget::setTabOrder(mCheckBoxMaxScale, mComboBoxMaxScale);
        QWidget::setTabOrder(mComboBoxMaxScale, mCheckBoxMinSize);
        QWidget::setTabOrder(mCheckBoxMinSize, mSpinBoxMinSize);
        QWidget::setTabOrder(mSpinBoxMinSize, mCheckBoxMaxSize);
        QWidget::setTabOrder(mCheckBoxMaxSize, mSpinBoxMaxSize);

        retranslateUi(QgsMapUnitScaleWidgetBase);

        QMetaObject::connectSlotsByName(QgsMapUnitScaleWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsMapUnitScaleWidgetBase)
    {
        QgsMapUnitScaleWidgetBase->setWindowTitle(QApplication::translate("QgsMapUnitScaleWidgetBase", "Adjust Scaling Range", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMapUnitScaleWidgetBase", "Scale Range", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMapUnitScaleWidgetBase", "Scale only within the following map unit scale range", Q_NULLPTR));
        mCheckBoxMinScale->setText(QApplication::translate("QgsMapUnitScaleWidgetBase", "Minimum scale", Q_NULLPTR));
        mCheckBoxMaxScale->setText(QApplication::translate("QgsMapUnitScaleWidgetBase", "Maximum scale", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsMapUnitScaleWidgetBase", "Size Range", Q_NULLPTR));
        mCheckBoxMinSize->setText(QApplication::translate("QgsMapUnitScaleWidgetBase", "Minimum size", Q_NULLPTR));
        mCheckBoxMaxSize->setText(QApplication::translate("QgsMapUnitScaleWidgetBase", "Maximum size", Q_NULLPTR));
        mSpinBoxMinSize->setSuffix(QApplication::translate("QgsMapUnitScaleWidgetBase", " mm", Q_NULLPTR));
        mSpinBoxMaxSize->setSuffix(QApplication::translate("QgsMapUnitScaleWidgetBase", " mm", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMapUnitScaleWidgetBase", "Scale only within the following size range", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMapUnitScaleWidgetBase: public Ui_QgsMapUnitScaleWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPUNITSCALEWIDGETBASE_H
