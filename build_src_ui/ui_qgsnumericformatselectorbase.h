/********************************************************************************
** Form generated from reading UI file 'qgsnumericformatselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNUMERICFORMATSELECTORBASE_H
#define UI_QGSNUMERICFORMATSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNumericFormatSelectorBase
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mCategoryCombo;
    QGroupBox *mSampleGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSampleLabel;

    void setupUi(QgsPanelWidget *QgsNumericFormatSelectorBase)
    {
        if (QgsNumericFormatSelectorBase->objectName().isEmpty())
            QgsNumericFormatSelectorBase->setObjectName(QStringLiteral("QgsNumericFormatSelectorBase"));
        QgsNumericFormatSelectorBase->resize(335, 439);
        QgsNumericFormatSelectorBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsNumericFormatSelectorBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        stackedWidget = new QStackedWidget(QgsNumericFormatSelectorBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QStringLiteral("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QgsNumericFormatSelectorBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mCategoryCombo = new QComboBox(QgsNumericFormatSelectorBase);
        mCategoryCombo->setObjectName(QStringLiteral("mCategoryCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCategoryCombo->sizePolicy().hasHeightForWidth());
        mCategoryCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCategoryCombo);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        mSampleGroupBox = new QGroupBox(QgsNumericFormatSelectorBase);
        mSampleGroupBox->setObjectName(QStringLiteral("mSampleGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(mSampleGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mSampleLabel = new QLabel(mSampleGroupBox);
        mSampleLabel->setObjectName(QStringLiteral("mSampleLabel"));

        horizontalLayout_2->addWidget(mSampleLabel);


        gridLayout->addWidget(mSampleGroupBox, 3, 0, 1, 1);


        retranslateUi(QgsNumericFormatSelectorBase);

        QMetaObject::connectSlotsByName(QgsNumericFormatSelectorBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsNumericFormatSelectorBase)
    {
        label_2->setText(QApplication::translate("QgsNumericFormatSelectorBase", "This format doesn't have any editable properties", Q_NULLPTR));
        label->setText(QApplication::translate("QgsNumericFormatSelectorBase", "Category", Q_NULLPTR));
        mSampleGroupBox->setTitle(QApplication::translate("QgsNumericFormatSelectorBase", "Sample", Q_NULLPTR));
        mSampleLabel->setText(QString());
        Q_UNUSED(QgsNumericFormatSelectorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNumericFormatSelectorBase: public Ui_QgsNumericFormatSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNUMERICFORMATSELECTORBASE_H
