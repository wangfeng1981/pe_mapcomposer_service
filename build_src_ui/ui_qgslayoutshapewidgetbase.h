/********************************************************************************
** Form generated from reading UI file 'qgslayoutshapewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTSHAPEWIDGETBASE_H
#define UI_QGSLAYOUTSHAPEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutShapeWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mCornerRadiusSpinBox;
    QgsLayoutUnitsComboBox *mRadiusUnitsComboBox;
    QLabel *label;
    QgsSymbolButton *mShapeStyleButton;
    QComboBox *mShapeComboBox;

    void setupUi(QWidget *QgsLayoutShapeWidgetBase)
    {
        if (QgsLayoutShapeWidgetBase->objectName().isEmpty())
            QgsLayoutShapeWidgetBase->setObjectName(QStringLiteral("QgsLayoutShapeWidgetBase"));
        QgsLayoutShapeWidgetBase->resize(308, 189);
        QgsLayoutShapeWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsLayoutShapeWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutShapeWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutShapeWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 306, 163));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mCornerRadiusSpinBox = new QgsDoubleSpinBox(groupBox);
        mCornerRadiusSpinBox->setObjectName(QStringLiteral("mCornerRadiusSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCornerRadiusSpinBox->sizePolicy().hasHeightForWidth());
        mCornerRadiusSpinBox->setSizePolicy(sizePolicy1);
        mCornerRadiusSpinBox->setMaximum(999);

        horizontalLayout->addWidget(mCornerRadiusSpinBox);

        mRadiusUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mRadiusUnitsComboBox->setObjectName(QStringLiteral("mRadiusUnitsComboBox"));

        horizontalLayout->addWidget(mRadiusUnitsComboBox);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mShapeStyleButton = new QgsSymbolButton(groupBox);
        mShapeStyleButton->setObjectName(QStringLiteral("mShapeStyleButton"));
        sizePolicy1.setHeightForWidth(mShapeStyleButton->sizePolicy().hasHeightForWidth());
        mShapeStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mShapeStyleButton, 2, 1, 1, 1);

        mShapeComboBox = new QComboBox(groupBox);
        mShapeComboBox->setObjectName(QStringLiteral("mShapeComboBox"));

        gridLayout->addWidget(mShapeComboBox, 0, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(groupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mShapeComboBox);
        QWidget::setTabOrder(mShapeComboBox, mCornerRadiusSpinBox);
        QWidget::setTabOrder(mCornerRadiusSpinBox, mRadiusUnitsComboBox);
        QWidget::setTabOrder(mRadiusUnitsComboBox, mShapeStyleButton);

        retranslateUi(QgsLayoutShapeWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutShapeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutShapeWidgetBase)
    {
        label_2->setText(QApplication::translate("QgsLayoutShapeWidgetBase", "Shape", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutShapeWidgetBase", "Main Properties", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutShapeWidgetBase", "Corner radius", Q_NULLPTR));
        mCornerRadiusSpinBox->setSuffix(QString());
        label->setText(QApplication::translate("QgsLayoutShapeWidgetBase", "Style", Q_NULLPTR));
        mShapeStyleButton->setText(QApplication::translate("QgsLayoutShapeWidgetBase", "Change\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsLayoutShapeWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutShapeWidgetBase: public Ui_QgsLayoutShapeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTSHAPEWIDGETBASE_H
