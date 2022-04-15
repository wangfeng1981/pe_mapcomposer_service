/********************************************************************************
** Form generated from reading UI file 'qgssinglebandpseudocolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H
#define UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "raster/qgscolorrampshaderwidget.h"
#include "raster/qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSingleBandPseudoColorRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *mMinLineEdit;
    QLabel *mMinLabel;
    QLabel *mBandLabel;
    QLabel *mMaxLabel;
    QLineEdit *mMaxLineEdit;
    QgsRasterBandComboBox *mBandComboBox;
    QWidget *mMinMaxContainerWidget;
    QgsColorRampShaderWidget *mColorRampShaderWidget;

    void setupUi(QWidget *QgsSingleBandPseudoColorRendererWidgetBase)
    {
        if (QgsSingleBandPseudoColorRendererWidgetBase->objectName().isEmpty())
            QgsSingleBandPseudoColorRendererWidgetBase->setObjectName(QStringLiteral("QgsSingleBandPseudoColorRendererWidgetBase"));
        QgsSingleBandPseudoColorRendererWidgetBase->resize(396, 605);
        QgsSingleBandPseudoColorRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsSingleBandPseudoColorRendererWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mMinLineEdit = new QLineEdit(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinLineEdit->setObjectName(QStringLiteral("mMinLineEdit"));

        gridLayout_2->addWidget(mMinLineEdit, 1, 1, 1, 1);

        mMinLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinLabel->setObjectName(QStringLiteral("mMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMinLabel->sizePolicy().hasHeightForWidth());
        mMinLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mMinLabel, 1, 0, 1, 1);

        mBandLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mBandLabel->setObjectName(QStringLiteral("mBandLabel"));

        gridLayout_2->addWidget(mBandLabel, 0, 0, 1, 1);

        mMaxLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mMaxLabel->setObjectName(QStringLiteral("mMaxLabel"));
        sizePolicy.setHeightForWidth(mMaxLabel->sizePolicy().hasHeightForWidth());
        mMaxLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mMaxLabel, 1, 2, 1, 1);

        mMaxLineEdit = new QLineEdit(QgsSingleBandPseudoColorRendererWidgetBase);
        mMaxLineEdit->setObjectName(QStringLiteral("mMaxLineEdit"));

        gridLayout_2->addWidget(mMaxLineEdit, 1, 3, 1, 1);

        mBandComboBox = new QgsRasterBandComboBox(QgsSingleBandPseudoColorRendererWidgetBase);
        mBandComboBox->setObjectName(QStringLiteral("mBandComboBox"));

        gridLayout_2->addWidget(mBandComboBox, 0, 1, 1, 3);


        verticalLayout->addLayout(gridLayout_2);

        mMinMaxContainerWidget = new QWidget(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QStringLiteral("mMinMaxContainerWidget"));

        verticalLayout->addWidget(mMinMaxContainerWidget);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(QgsSingleBandPseudoColorRendererWidgetBase);
        mColorRampShaderWidget->setObjectName(QStringLiteral("mColorRampShaderWidget"));

        verticalLayout->addWidget(mColorRampShaderWidget);

        QWidget::setTabOrder(mBandComboBox, mMinLineEdit);
        QWidget::setTabOrder(mMinLineEdit, mMaxLineEdit);

        retranslateUi(QgsSingleBandPseudoColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsSingleBandPseudoColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSingleBandPseudoColorRendererWidgetBase)
    {
        mMinLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Min", Q_NULLPTR));
        mBandLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Band", Q_NULLPTR));
        mMaxLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Max", Q_NULLPTR));
        Q_UNUSED(QgsSingleBandPseudoColorRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSingleBandPseudoColorRendererWidgetBase: public Ui_QgsSingleBandPseudoColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H
