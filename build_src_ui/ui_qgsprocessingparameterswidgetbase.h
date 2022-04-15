/********************************************************************************
** Form generated from reading UI file 'qgsprocessingparameterswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGPARAMETERSWIDGETBASE_H
#define UI_QGSPROCESSINGPARAMETERSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingParametersWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mScrollAreaLayout;
    QgsCollapsibleGroupBox *grpAdvanced;
    QVBoxLayout *mAdvancedGroupLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsProcessingParametersWidgetBase)
    {
        if (QgsProcessingParametersWidgetBase->objectName().isEmpty())
            QgsProcessingParametersWidgetBase->setObjectName(QStringLiteral("QgsProcessingParametersWidgetBase"));
        QgsProcessingParametersWidgetBase->resize(400, 90);
        QgsProcessingParametersWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsProcessingParametersWidgetBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsProcessingParametersWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 400, 90));
        mScrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mScrollAreaLayout->setObjectName(QStringLiteral("mScrollAreaLayout"));
        mScrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        grpAdvanced = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        grpAdvanced->setObjectName(QStringLiteral("grpAdvanced"));
        grpAdvanced->setProperty("collapsed", QVariant(true));
        mAdvancedGroupLayout = new QVBoxLayout(grpAdvanced);
        mAdvancedGroupLayout->setObjectName(QStringLiteral("mAdvancedGroupLayout"));

        mScrollAreaLayout->addWidget(grpAdvanced);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mScrollAreaLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QgsProcessingParametersWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingParametersWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingParametersWidgetBase)
    {
        grpAdvanced->setTitle(QApplication::translate("QgsProcessingParametersWidgetBase", "Advanced Parameters", Q_NULLPTR));
        Q_UNUSED(QgsProcessingParametersWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingParametersWidgetBase: public Ui_QgsProcessingParametersWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGPARAMETERSWIDGETBASE_H
