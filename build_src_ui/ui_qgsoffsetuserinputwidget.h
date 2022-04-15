/********************************************************************************
** Form generated from reading UI file 'qgsoffsetuserinputwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOFFSETUSERINPUTWIDGET_H
#define UI_QGSOFFSETUSERINPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOffsetUserInputBase
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mOffsetSpinBox;
    QLabel *label;
    QToolButton *mShowAdvancedButton;
    QWidget *mAdvancedConfigWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *mJoinStyleComboBox;
    QLabel *label_3;
    QgsSpinBox *mQuadrantSpinBox;
    QLabel *label_4;
    QgsDoubleSpinBox *mMiterLimitSpinBox;
    QLabel *mCapStyleLabel;
    QComboBox *mCapStyleComboBox;

    void setupUi(QWidget *QgsOffsetUserInputBase)
    {
        if (QgsOffsetUserInputBase->objectName().isEmpty())
            QgsOffsetUserInputBase->setObjectName(QStringLiteral("QgsOffsetUserInputBase"));
        QgsOffsetUserInputBase->resize(430, 142);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOffsetUserInputBase->sizePolicy().hasHeightForWidth());
        QgsOffsetUserInputBase->setSizePolicy(sizePolicy);
        QgsOffsetUserInputBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsOffsetUserInputBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mOffsetSpinBox = new QgsDoubleSpinBox(QgsOffsetUserInputBase);
        mOffsetSpinBox->setObjectName(QStringLiteral("mOffsetSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOffsetSpinBox->sizePolicy().hasHeightForWidth());
        mOffsetSpinBox->setSizePolicy(sizePolicy1);
        mOffsetSpinBox->setMinimum(-1e+7);
        mOffsetSpinBox->setMaximum(1e+6);

        gridLayout->addWidget(mOffsetSpinBox, 1, 2, 1, 1);

        label = new QLabel(QgsOffsetUserInputBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        mShowAdvancedButton = new QToolButton(QgsOffsetUserInputBase);
        mShowAdvancedButton->setObjectName(QStringLiteral("mShowAdvancedButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mShowAdvancedButton->setIcon(icon);
        mShowAdvancedButton->setCheckable(true);
        mShowAdvancedButton->setChecked(true);
        mShowAdvancedButton->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(mShowAdvancedButton, 1, 0, 1, 1);

        mAdvancedConfigWidget = new QWidget(QgsOffsetUserInputBase);
        mAdvancedConfigWidget->setObjectName(QStringLiteral("mAdvancedConfigWidget"));
        gridLayout_2 = new QGridLayout(mAdvancedConfigWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mAdvancedConfigWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        mJoinStyleComboBox = new QComboBox(mAdvancedConfigWidget);
        mJoinStyleComboBox->setObjectName(QStringLiteral("mJoinStyleComboBox"));

        gridLayout_2->addWidget(mJoinStyleComboBox, 0, 1, 1, 1);

        label_3 = new QLabel(mAdvancedConfigWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        mQuadrantSpinBox = new QgsSpinBox(mAdvancedConfigWidget);
        mQuadrantSpinBox->setObjectName(QStringLiteral("mQuadrantSpinBox"));
        mQuadrantSpinBox->setMinimum(1);

        gridLayout_2->addWidget(mQuadrantSpinBox, 0, 3, 1, 1);

        label_4 = new QLabel(mAdvancedConfigWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        mMiterLimitSpinBox = new QgsDoubleSpinBox(mAdvancedConfigWidget);
        mMiterLimitSpinBox->setObjectName(QStringLiteral("mMiterLimitSpinBox"));
        mMiterLimitSpinBox->setMinimum(1);

        gridLayout_2->addWidget(mMiterLimitSpinBox, 1, 1, 1, 1);

        mCapStyleLabel = new QLabel(mAdvancedConfigWidget);
        mCapStyleLabel->setObjectName(QStringLiteral("mCapStyleLabel"));
        mCapStyleLabel->setWordWrap(true);

        gridLayout_2->addWidget(mCapStyleLabel, 1, 2, 1, 1);

        mCapStyleComboBox = new QComboBox(mAdvancedConfigWidget);
        mCapStyleComboBox->setObjectName(QStringLiteral("mCapStyleComboBox"));

        gridLayout_2->addWidget(mCapStyleComboBox, 1, 3, 1, 1);


        gridLayout->addWidget(mAdvancedConfigWidget, 0, 0, 1, 3);


        retranslateUi(QgsOffsetUserInputBase);

        QMetaObject::connectSlotsByName(QgsOffsetUserInputBase);
    } // setupUi

    void retranslateUi(QWidget *QgsOffsetUserInputBase)
    {
        label->setText(QApplication::translate("QgsOffsetUserInputBase", "Offset", Q_NULLPTR));
        mShowAdvancedButton->setText(QApplication::translate("QgsOffsetUserInputBase", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsOffsetUserInputBase", "Join style", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsOffsetUserInputBase", "Quadrant segments", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsOffsetUserInputBase", "Miter limit", Q_NULLPTR));
        mCapStyleLabel->setText(QApplication::translate("QgsOffsetUserInputBase", "Cap style", Q_NULLPTR));
        Q_UNUSED(QgsOffsetUserInputBase);
    } // retranslateUi

};

namespace Ui {
    class QgsOffsetUserInputBase: public Ui_QgsOffsetUserInputBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOFFSETUSERINPUTWIDGET_H
