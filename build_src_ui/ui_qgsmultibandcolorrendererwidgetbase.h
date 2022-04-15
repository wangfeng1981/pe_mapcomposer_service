/********************************************************************************
** Form generated from reading UI file 'qgsmultibandcolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H
#define UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H

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

class Ui_QgsMultiBandColorRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mContrastEnhancementAlgorithmLabel;
    QLabel *mRedBandLabel;
    QComboBox *mContrastEnhancementAlgorithmComboBox;
    QLabel *mRedMinLabel;
    QLabel *mRedMaxLabel;
    QLineEdit *mRedMinLineEdit;
    QgsRasterBandComboBox *mRedBandComboBox;
    QLabel *mBlueMinLabel;
    QLabel *mBlueMaxLabel;
    QgsRasterBandComboBox *mGreenBandComboBox;
    QLabel *mGreenMinLabel;
    QLabel *mGreenMaxLabel;
    QgsRasterBandComboBox *mBlueBandComboBox;
    QLineEdit *mRedMaxLineEdit;
    QLineEdit *mGreenMinLineEdit;
    QLabel *mBlueBandLabel;
    QLineEdit *mBlueMinLineEdit;
    QLineEdit *mBlueMaxLineEdit;
    QLabel *mGreenBandLabel;
    QLineEdit *mGreenMaxLineEdit;
    QWidget *mMinMaxContainerWidget;

    void setupUi(QWidget *QgsMultiBandColorRendererWidgetBase)
    {
        if (QgsMultiBandColorRendererWidgetBase->objectName().isEmpty())
            QgsMultiBandColorRendererWidgetBase->setObjectName(QStringLiteral("QgsMultiBandColorRendererWidgetBase"));
        QgsMultiBandColorRendererWidgetBase->resize(350, 321);
        QgsMultiBandColorRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsMultiBandColorRendererWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mContrastEnhancementAlgorithmLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mContrastEnhancementAlgorithmLabel->setObjectName(QStringLiteral("mContrastEnhancementAlgorithmLabel"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmLabel, 6, 0, 1, 1);

        mRedBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedBandLabel->setObjectName(QStringLiteral("mRedBandLabel"));

        gridLayout->addWidget(mRedBandLabel, 0, 0, 1, 1);

        mContrastEnhancementAlgorithmComboBox = new QComboBox(QgsMultiBandColorRendererWidgetBase);
        mContrastEnhancementAlgorithmComboBox->setObjectName(QStringLiteral("mContrastEnhancementAlgorithmComboBox"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmComboBox, 6, 1, 1, 4);

        mRedMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedMinLabel->setObjectName(QStringLiteral("mRedMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRedMinLabel->sizePolicy().hasHeightForWidth());
        mRedMinLabel->setSizePolicy(sizePolicy);
        mRedMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMinLabel, 1, 1, 1, 1);

        mRedMaxLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedMaxLabel->setObjectName(QStringLiteral("mRedMaxLabel"));
        sizePolicy.setHeightForWidth(mRedMaxLabel->sizePolicy().hasHeightForWidth());
        mRedMaxLabel->setSizePolicy(sizePolicy);
        mRedMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMaxLabel, 1, 3, 1, 1);

        mRedMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mRedMinLineEdit->setObjectName(QStringLiteral("mRedMinLineEdit"));
        mRedMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMinLineEdit, 1, 2, 1, 1);

        mRedBandComboBox = new QgsRasterBandComboBox(QgsMultiBandColorRendererWidgetBase);
        mRedBandComboBox->setObjectName(QStringLiteral("mRedBandComboBox"));

        gridLayout->addWidget(mRedBandComboBox, 0, 1, 1, 4);

        mBlueMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueMinLabel->setObjectName(QStringLiteral("mBlueMinLabel"));
        sizePolicy.setHeightForWidth(mBlueMinLabel->sizePolicy().hasHeightForWidth());
        mBlueMinLabel->setSizePolicy(sizePolicy);
        mBlueMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMinLabel, 5, 1, 1, 1);

        mBlueMaxLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueMaxLabel->setObjectName(QStringLiteral("mBlueMaxLabel"));
        sizePolicy.setHeightForWidth(mBlueMaxLabel->sizePolicy().hasHeightForWidth());
        mBlueMaxLabel->setSizePolicy(sizePolicy);
        mBlueMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMaxLabel, 5, 3, 1, 1);

        mGreenBandComboBox = new QgsRasterBandComboBox(QgsMultiBandColorRendererWidgetBase);
        mGreenBandComboBox->setObjectName(QStringLiteral("mGreenBandComboBox"));

        gridLayout->addWidget(mGreenBandComboBox, 2, 1, 1, 4);

        mGreenMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenMinLabel->setObjectName(QStringLiteral("mGreenMinLabel"));
        sizePolicy.setHeightForWidth(mGreenMinLabel->sizePolicy().hasHeightForWidth());
        mGreenMinLabel->setSizePolicy(sizePolicy);
        mGreenMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMinLabel, 3, 1, 1, 1);

        mGreenMaxLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenMaxLabel->setObjectName(QStringLiteral("mGreenMaxLabel"));
        sizePolicy.setHeightForWidth(mGreenMaxLabel->sizePolicy().hasHeightForWidth());
        mGreenMaxLabel->setSizePolicy(sizePolicy);
        mGreenMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMaxLabel, 3, 3, 1, 1);

        mBlueBandComboBox = new QgsRasterBandComboBox(QgsMultiBandColorRendererWidgetBase);
        mBlueBandComboBox->setObjectName(QStringLiteral("mBlueBandComboBox"));

        gridLayout->addWidget(mBlueBandComboBox, 4, 1, 1, 4);

        mRedMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mRedMaxLineEdit->setObjectName(QStringLiteral("mRedMaxLineEdit"));
        mRedMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMaxLineEdit, 1, 4, 1, 1);

        mGreenMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mGreenMinLineEdit->setObjectName(QStringLiteral("mGreenMinLineEdit"));
        mGreenMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMinLineEdit, 3, 2, 1, 1);

        mBlueBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueBandLabel->setObjectName(QStringLiteral("mBlueBandLabel"));
        sizePolicy.setHeightForWidth(mBlueBandLabel->sizePolicy().hasHeightForWidth());
        mBlueBandLabel->setSizePolicy(sizePolicy);
        mBlueBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueBandLabel, 4, 0, 1, 1);

        mBlueMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mBlueMinLineEdit->setObjectName(QStringLiteral("mBlueMinLineEdit"));
        mBlueMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMinLineEdit, 5, 2, 1, 1);

        mBlueMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mBlueMaxLineEdit->setObjectName(QStringLiteral("mBlueMaxLineEdit"));
        mBlueMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMaxLineEdit, 5, 4, 1, 1);

        mGreenBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenBandLabel->setObjectName(QStringLiteral("mGreenBandLabel"));
        sizePolicy.setHeightForWidth(mGreenBandLabel->sizePolicy().hasHeightForWidth());
        mGreenBandLabel->setSizePolicy(sizePolicy);
        mGreenBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenBandLabel, 2, 0, 1, 1);

        mGreenMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mGreenMaxLineEdit->setObjectName(QStringLiteral("mGreenMaxLineEdit"));
        mGreenMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMaxLineEdit, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        mMinMaxContainerWidget = new QWidget(QgsMultiBandColorRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QStringLiteral("mMinMaxContainerWidget"));

        verticalLayout->addWidget(mMinMaxContainerWidget);

        QWidget::setTabOrder(mRedBandComboBox, mRedMinLineEdit);
        QWidget::setTabOrder(mRedMinLineEdit, mRedMaxLineEdit);
        QWidget::setTabOrder(mRedMaxLineEdit, mGreenBandComboBox);
        QWidget::setTabOrder(mGreenBandComboBox, mGreenMinLineEdit);
        QWidget::setTabOrder(mGreenMinLineEdit, mGreenMaxLineEdit);
        QWidget::setTabOrder(mGreenMaxLineEdit, mBlueBandComboBox);
        QWidget::setTabOrder(mBlueBandComboBox, mBlueMinLineEdit);
        QWidget::setTabOrder(mBlueMinLineEdit, mBlueMaxLineEdit);
        QWidget::setTabOrder(mBlueMaxLineEdit, mContrastEnhancementAlgorithmComboBox);

        retranslateUi(QgsMultiBandColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsMultiBandColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMultiBandColorRendererWidgetBase)
    {
        mContrastEnhancementAlgorithmLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Contrast\n"
"enhancement", Q_NULLPTR));
        mRedBandLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Red band", Q_NULLPTR));
        mRedMinLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min", Q_NULLPTR));
        mRedMaxLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Max", Q_NULLPTR));
        mBlueMinLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min", Q_NULLPTR));
        mBlueMaxLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Max", Q_NULLPTR));
        mGreenMinLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min", Q_NULLPTR));
        mGreenMaxLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Max", Q_NULLPTR));
        mBlueBandLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Blue band", Q_NULLPTR));
        mGreenBandLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Green band", Q_NULLPTR));
        Q_UNUSED(QgsMultiBandColorRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMultiBandColorRendererWidgetBase: public Ui_QgsMultiBandColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H
