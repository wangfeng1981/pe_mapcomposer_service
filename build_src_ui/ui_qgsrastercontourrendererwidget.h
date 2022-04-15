/********************************************************************************
** Form generated from reading UI file 'qgsrastercontourrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERCONTOURRENDERERWIDGET_H
#define UI_QGSRASTERCONTOURRENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgssymbolbutton.h"
#include "raster/qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterContourRendererWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mGrayBandLabel;
    QgsRasterBandComboBox *mInputBandComboBox;
    QLabel *label;
    QgsDoubleSpinBox *mContourIntervalSpinBox;
    QLabel *label_2;
    QgsSymbolButton *mContourSymbolButton;
    QLabel *label_3;
    QgsDoubleSpinBox *mIndexContourIntervalSpinBox;
    QLabel *label_4;
    QgsSymbolButton *mIndexContourSymbolButton;
    QLabel *label_5;
    QgsDoubleSpinBox *mDownscaleSpinBox;

    void setupUi(QWidget *QgsRasterContourRendererWidget)
    {
        if (QgsRasterContourRendererWidget->objectName().isEmpty())
            QgsRasterContourRendererWidget->setObjectName(QStringLiteral("QgsRasterContourRendererWidget"));
        QgsRasterContourRendererWidget->resize(487, 394);
        QgsRasterContourRendererWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsRasterContourRendererWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mGrayBandLabel = new QLabel(QgsRasterContourRendererWidget);
        mGrayBandLabel->setObjectName(QStringLiteral("mGrayBandLabel"));

        gridLayout->addWidget(mGrayBandLabel, 0, 0, 1, 1);

        mInputBandComboBox = new QgsRasterBandComboBox(QgsRasterContourRendererWidget);
        mInputBandComboBox->setObjectName(QStringLiteral("mInputBandComboBox"));

        gridLayout->addWidget(mInputBandComboBox, 0, 1, 1, 1);

        label = new QLabel(QgsRasterContourRendererWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mContourIntervalSpinBox = new QgsDoubleSpinBox(QgsRasterContourRendererWidget);
        mContourIntervalSpinBox->setObjectName(QStringLiteral("mContourIntervalSpinBox"));
        mContourIntervalSpinBox->setDecimals(1);
        mContourIntervalSpinBox->setMinimum(0.1);
        mContourIntervalSpinBox->setMaximum(999999);
        mContourIntervalSpinBox->setValue(100);

        gridLayout->addWidget(mContourIntervalSpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(QgsRasterContourRendererWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mContourSymbolButton = new QgsSymbolButton(QgsRasterContourRendererWidget);
        mContourSymbolButton->setObjectName(QStringLiteral("mContourSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mContourSymbolButton->sizePolicy().hasHeightForWidth());
        mContourSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mContourSymbolButton, 2, 1, 1, 1);

        label_3 = new QLabel(QgsRasterContourRendererWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        mIndexContourIntervalSpinBox = new QgsDoubleSpinBox(QgsRasterContourRendererWidget);
        mIndexContourIntervalSpinBox->setObjectName(QStringLiteral("mIndexContourIntervalSpinBox"));
        mIndexContourIntervalSpinBox->setDecimals(1);
        mIndexContourIntervalSpinBox->setMaximum(999999);
        mIndexContourIntervalSpinBox->setValue(500);

        gridLayout->addWidget(mIndexContourIntervalSpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(QgsRasterContourRendererWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        mIndexContourSymbolButton = new QgsSymbolButton(QgsRasterContourRendererWidget);
        mIndexContourSymbolButton->setObjectName(QStringLiteral("mIndexContourSymbolButton"));
        sizePolicy.setHeightForWidth(mIndexContourSymbolButton->sizePolicy().hasHeightForWidth());
        mIndexContourSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mIndexContourSymbolButton, 4, 1, 1, 1);

        label_5 = new QLabel(QgsRasterContourRendererWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        mDownscaleSpinBox = new QgsDoubleSpinBox(QgsRasterContourRendererWidget);
        mDownscaleSpinBox->setObjectName(QStringLiteral("mDownscaleSpinBox"));
        mDownscaleSpinBox->setDecimals(1);
        mDownscaleSpinBox->setMinimum(1);
        mDownscaleSpinBox->setValue(4);

        gridLayout->addWidget(mDownscaleSpinBox, 5, 1, 1, 1);

        QWidget::setTabOrder(mInputBandComboBox, mContourIntervalSpinBox);
        QWidget::setTabOrder(mContourIntervalSpinBox, mContourSymbolButton);
        QWidget::setTabOrder(mContourSymbolButton, mIndexContourIntervalSpinBox);
        QWidget::setTabOrder(mIndexContourIntervalSpinBox, mIndexContourSymbolButton);
        QWidget::setTabOrder(mIndexContourSymbolButton, mDownscaleSpinBox);

        retranslateUi(QgsRasterContourRendererWidget);

        QMetaObject::connectSlotsByName(QgsRasterContourRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterContourRendererWidget)
    {
        mGrayBandLabel->setText(QApplication::translate("QgsRasterContourRendererWidget", "Input band", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRasterContourRendererWidget", "Contour Interval", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRasterContourRendererWidget", "Contour Symbol", Q_NULLPTR));
        mContourSymbolButton->setText(QString());
        label_3->setText(QApplication::translate("QgsRasterContourRendererWidget", "Index Contour Interval", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsRasterContourRendererWidget", "Index Contour Symbol", Q_NULLPTR));
        mIndexContourSymbolButton->setText(QString());
        label_5->setText(QApplication::translate("QgsRasterContourRendererWidget", "Input Downscaling", Q_NULLPTR));
        Q_UNUSED(QgsRasterContourRendererWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterContourRendererWidget: public Ui_QgsRasterContourRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERCONTOURRENDERERWIDGET_H
