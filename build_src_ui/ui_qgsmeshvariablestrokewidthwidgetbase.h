/********************************************************************************
** Form generated from reading UI file 'qgsmeshvariablestrokewidthwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHVARIABLESTROKEWIDTHWIDGETBASE_H
#define UI_QGSMESHVARIABLESTROKEWIDTHWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshVariableStrokeWidthWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsDoubleSpinBox *mWidthMinimumSpinBox;
    QLineEdit *mValueMinimumLineEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *mValueMaximumLineEdit;
    QPushButton *mDefaultMinMaxButton;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_5;
    QLabel *label_4;
    QgsDoubleSpinBox *mWidthMaximumSpinBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mIgnoreOutOfRangecheckBox;
    QCheckBox *mUseAbsoluteValueCheckBox;

    void setupUi(QWidget *QgsMeshVariableStrokeWidthWidget)
    {
        if (QgsMeshVariableStrokeWidthWidget->objectName().isEmpty())
            QgsMeshVariableStrokeWidthWidget->setObjectName(QStringLiteral("QgsMeshVariableStrokeWidthWidget"));
        QgsMeshVariableStrokeWidthWidget->resize(340, 220);
        QgsMeshVariableStrokeWidthWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsMeshVariableStrokeWidthWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mWidthMinimumSpinBox = new QgsDoubleSpinBox(QgsMeshVariableStrokeWidthWidget);
        mWidthMinimumSpinBox->setObjectName(QStringLiteral("mWidthMinimumSpinBox"));
        mWidthMinimumSpinBox->setValue(1);

        gridLayout->addWidget(mWidthMinimumSpinBox, 7, 1, 1, 1);

        mValueMinimumLineEdit = new QLineEdit(QgsMeshVariableStrokeWidthWidget);
        mValueMinimumLineEdit->setObjectName(QStringLiteral("mValueMinimumLineEdit"));

        gridLayout->addWidget(mValueMinimumLineEdit, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        mValueMaximumLineEdit = new QLineEdit(QgsMeshVariableStrokeWidthWidget);
        mValueMaximumLineEdit->setObjectName(QStringLiteral("mValueMaximumLineEdit"));

        gridLayout->addWidget(mValueMaximumLineEdit, 2, 1, 1, 1);

        mDefaultMinMaxButton = new QPushButton(QgsMeshVariableStrokeWidthWidget);
        mDefaultMinMaxButton->setObjectName(QStringLiteral("mDefaultMinMaxButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDefaultMinMaxButton->sizePolicy().hasHeightForWidth());
        mDefaultMinMaxButton->setSizePolicy(sizePolicy);
        mDefaultMinMaxButton->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDefaultMinMaxButton->setIcon(icon);

        gridLayout->addWidget(mDefaultMinMaxButton, 1, 2, 2, 1);

        label = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        label_2 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 8, 0, 1, 1);

        line = new QFrame(QgsMeshVariableStrokeWidthWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 10));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 0, 1, 3);

        label_5 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        mWidthMaximumSpinBox = new QgsDoubleSpinBox(QgsMeshVariableStrokeWidthWidget);
        mWidthMaximumSpinBox->setObjectName(QStringLiteral("mWidthMaximumSpinBox"));
        mWidthMaximumSpinBox->setValue(5);

        gridLayout->addWidget(mWidthMaximumSpinBox, 8, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        mIgnoreOutOfRangecheckBox = new QCheckBox(QgsMeshVariableStrokeWidthWidget);
        mIgnoreOutOfRangecheckBox->setObjectName(QStringLiteral("mIgnoreOutOfRangecheckBox"));

        horizontalLayout->addWidget(mIgnoreOutOfRangecheckBox);

        mUseAbsoluteValueCheckBox = new QCheckBox(QgsMeshVariableStrokeWidthWidget);
        mUseAbsoluteValueCheckBox->setObjectName(QStringLiteral("mUseAbsoluteValueCheckBox"));

        horizontalLayout->addWidget(mUseAbsoluteValueCheckBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);

        QWidget::setTabOrder(mValueMinimumLineEdit, mValueMaximumLineEdit);
        QWidget::setTabOrder(mValueMaximumLineEdit, mDefaultMinMaxButton);
        QWidget::setTabOrder(mDefaultMinMaxButton, mWidthMinimumSpinBox);
        QWidget::setTabOrder(mWidthMinimumSpinBox, mWidthMaximumSpinBox);

        retranslateUi(QgsMeshVariableStrokeWidthWidget);

        QMetaObject::connectSlotsByName(QgsMeshVariableStrokeWidthWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshVariableStrokeWidthWidget)
    {
        label_3->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Input Values", Q_NULLPTR));
        mDefaultMinMaxButton->setText(QString());
        label->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Min Width", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Max Width", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Max Value", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Min Value", Q_NULLPTR));
        mIgnoreOutOfRangecheckBox->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Ignore Out of Range Values", Q_NULLPTR));
        mUseAbsoluteValueCheckBox->setText(QApplication::translate("QgsMeshVariableStrokeWidthWidget", "Use Absolute Value", Q_NULLPTR));
        Q_UNUSED(QgsMeshVariableStrokeWidthWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshVariableStrokeWidthWidget: public Ui_QgsMeshVariableStrokeWidthWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHVARIABLESTROKEWIDTHWIDGETBASE_H
