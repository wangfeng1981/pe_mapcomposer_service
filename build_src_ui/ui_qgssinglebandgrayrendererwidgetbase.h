/********************************************************************************
** Form generated from reading UI file 'qgssinglebandgrayrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H
#define UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "raster/qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSingleBandGrayRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *mMinLineEdit;
    QLabel *mGrayBandLabel;
    QLineEdit *mMaxLineEdit;
    QgsRasterBandComboBox *mGrayBandComboBox;
    QLabel *mContrastEnhancementLabel;
    QComboBox *mContrastEnhancementComboBox;
    QLabel *label;
    QComboBox *mGradientComboBox;
    QLabel *mMinLabel;
    QLabel *mMaxLabel;
    QWidget *mMinMaxContainerWidget;

    void setupUi(QWidget *QgsSingleBandGrayRendererWidgetBase)
    {
        if (QgsSingleBandGrayRendererWidgetBase->objectName().isEmpty())
            QgsSingleBandGrayRendererWidgetBase->setObjectName(QStringLiteral("QgsSingleBandGrayRendererWidgetBase"));
        QgsSingleBandGrayRendererWidgetBase->resize(395, 409);
        QgsSingleBandGrayRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsSingleBandGrayRendererWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mMinLineEdit = new QLineEdit(QgsSingleBandGrayRendererWidgetBase);
        mMinLineEdit->setObjectName(QStringLiteral("mMinLineEdit"));

        gridLayout->addWidget(mMinLineEdit, 2, 2, 1, 1);

        mGrayBandLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mGrayBandLabel->setObjectName(QStringLiteral("mGrayBandLabel"));

        gridLayout->addWidget(mGrayBandLabel, 0, 0, 1, 1);

        mMaxLineEdit = new QLineEdit(QgsSingleBandGrayRendererWidgetBase);
        mMaxLineEdit->setObjectName(QStringLiteral("mMaxLineEdit"));

        gridLayout->addWidget(mMaxLineEdit, 2, 4, 1, 1);

        mGrayBandComboBox = new QgsRasterBandComboBox(QgsSingleBandGrayRendererWidgetBase);
        mGrayBandComboBox->setObjectName(QStringLiteral("mGrayBandComboBox"));

        gridLayout->addWidget(mGrayBandComboBox, 0, 1, 1, 4);

        mContrastEnhancementLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mContrastEnhancementLabel->setObjectName(QStringLiteral("mContrastEnhancementLabel"));

        gridLayout->addWidget(mContrastEnhancementLabel, 3, 0, 1, 1);

        mContrastEnhancementComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mContrastEnhancementComboBox->setObjectName(QStringLiteral("mContrastEnhancementComboBox"));

        gridLayout->addWidget(mContrastEnhancementComboBox, 3, 1, 1, 4);

        label = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mGradientComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mGradientComboBox->setObjectName(QStringLiteral("mGradientComboBox"));

        gridLayout->addWidget(mGradientComboBox, 1, 1, 1, 4);

        mMinLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mMinLabel->setObjectName(QStringLiteral("mMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMinLabel->sizePolicy().hasHeightForWidth());
        mMinLabel->setSizePolicy(sizePolicy);
        mMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mMinLabel, 2, 1, 1, 1);

        mMaxLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mMaxLabel->setObjectName(QStringLiteral("mMaxLabel"));
        sizePolicy.setHeightForWidth(mMaxLabel->sizePolicy().hasHeightForWidth());
        mMaxLabel->setSizePolicy(sizePolicy);
        mMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mMaxLabel, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        mMinMaxContainerWidget = new QWidget(QgsSingleBandGrayRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QStringLiteral("mMinMaxContainerWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mMinMaxContainerWidget->sizePolicy().hasHeightForWidth());
        mMinMaxContainerWidget->setSizePolicy(sizePolicy1);
        mMinMaxContainerWidget->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(mMinMaxContainerWidget);

        QWidget::setTabOrder(mGrayBandComboBox, mGradientComboBox);
        QWidget::setTabOrder(mGradientComboBox, mMinLineEdit);
        QWidget::setTabOrder(mMinLineEdit, mMaxLineEdit);
        QWidget::setTabOrder(mMaxLineEdit, mContrastEnhancementComboBox);

        retranslateUi(QgsSingleBandGrayRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsSingleBandGrayRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSingleBandGrayRendererWidgetBase)
    {
        mGrayBandLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Gray band", Q_NULLPTR));
        mContrastEnhancementLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Contrast\n"
"enhancement", Q_NULLPTR));
        label->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Color gradient", Q_NULLPTR));
        mMinLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Min", Q_NULLPTR));
        mMaxLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Max", Q_NULLPTR));
        Q_UNUSED(QgsSingleBandGrayRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSingleBandGrayRendererWidgetBase: public Ui_QgsSingleBandGrayRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H
