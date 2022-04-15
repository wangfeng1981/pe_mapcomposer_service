/********************************************************************************
** Form generated from reading UI file 'qgsprocessingfeaturesourceoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGFEATURESOURCEOPTIONSBASE_H
#define UI_QGSPROCESSINGFEATURESOURCEOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingFeatureSourceOptionsBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QComboBox *mComboInvalidFeatureFiltering;
    QgsSpinBox *mFeatureLimitSpinBox;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsProcessingFeatureSourceOptionsBase)
    {
        if (QgsProcessingFeatureSourceOptionsBase->objectName().isEmpty())
            QgsProcessingFeatureSourceOptionsBase->setObjectName(QStringLiteral("QgsProcessingFeatureSourceOptionsBase"));
        QgsProcessingFeatureSourceOptionsBase->resize(448, 197);
        QgsProcessingFeatureSourceOptionsBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsProcessingFeatureSourceOptionsBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsProcessingFeatureSourceOptionsBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 197));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        mComboInvalidFeatureFiltering = new QComboBox(scrollAreaWidgetContents);
        mComboInvalidFeatureFiltering->setObjectName(QStringLiteral("mComboInvalidFeatureFiltering"));

        gridLayout->addWidget(mComboInvalidFeatureFiltering, 1, 1, 1, 1);

        mFeatureLimitSpinBox = new QgsSpinBox(scrollAreaWidgetContents);
        mFeatureLimitSpinBox->setObjectName(QStringLiteral("mFeatureLimitSpinBox"));
        mFeatureLimitSpinBox->setMaximum(999999999);

        gridLayout->addWidget(mFeatureLimitSpinBox, 2, 1, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QgsProcessingFeatureSourceOptionsBase);

        QMetaObject::connectSlotsByName(QgsProcessingFeatureSourceOptionsBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingFeatureSourceOptionsBase)
    {
        label->setText(QApplication::translate("QgsProcessingFeatureSourceOptionsBase", "Invalid feature filtering", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mComboInvalidFeatureFiltering->setToolTip(QApplication::translate("QgsProcessingFeatureSourceOptionsBase", "If set, allows the default method for handling features with invalid geometries to be overridden", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mFeatureLimitSpinBox->setToolTip(QApplication::translate("QgsProcessingFeatureSourceOptionsBase", "If set, limits the maximum number of features which will be processed from this source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsProcessingFeatureSourceOptionsBase", "Limit features processed", Q_NULLPTR));
        Q_UNUSED(QgsProcessingFeatureSourceOptionsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingFeatureSourceOptionsBase: public Ui_QgsProcessingFeatureSourceOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGFEATURESOURCEOPTIONSBASE_H
