/********************************************************************************
** Form generated from reading UI file 'qgssmartgroupeditordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSMARTGROUPEDITORDIALOGBASE_H
#define UI_QGSSMARTGROUPEDITORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QgsSmartGroupEditorDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *mNameLineEdit;
    QLabel *label_2;
    QComboBox *mAndOrCombo;
    QPushButton *mAddConditionBtn;
    QGroupBox *mConditionsBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSmartGroupEditorDialogBase)
    {
        if (QgsSmartGroupEditorDialogBase->objectName().isEmpty())
            QgsSmartGroupEditorDialogBase->setObjectName(QStringLiteral("QgsSmartGroupEditorDialogBase"));
        QgsSmartGroupEditorDialogBase->resize(500, 141);
        gridLayout = new QGridLayout(QgsSmartGroupEditorDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QgsSmartGroupEditorDialogBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mNameLineEdit = new QLineEdit(QgsSmartGroupEditorDialogBase);
        mNameLineEdit->setObjectName(QStringLiteral("mNameLineEdit"));

        gridLayout->addWidget(mNameLineEdit, 0, 1, 1, 2);

        label_2 = new QLabel(QgsSmartGroupEditorDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mAndOrCombo = new QComboBox(QgsSmartGroupEditorDialogBase);
        mAndOrCombo->setObjectName(QStringLiteral("mAndOrCombo"));

        gridLayout->addWidget(mAndOrCombo, 1, 1, 1, 1);

        mAddConditionBtn = new QPushButton(QgsSmartGroupEditorDialogBase);
        mAddConditionBtn->setObjectName(QStringLiteral("mAddConditionBtn"));

        gridLayout->addWidget(mAddConditionBtn, 1, 2, 1, 1);

        mConditionsBox = new QGroupBox(QgsSmartGroupEditorDialogBase);
        mConditionsBox->setObjectName(QStringLiteral("mConditionsBox"));

        gridLayout->addWidget(mConditionsBox, 2, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsSmartGroupEditorDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 2);


        retranslateUi(QgsSmartGroupEditorDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSmartGroupEditorDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSmartGroupEditorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSmartGroupEditorDialogBase)
    {
        QgsSmartGroupEditorDialogBase->setWindowTitle(QApplication::translate("QgsSmartGroupEditorDialogBase", "Smart Group Editor", Q_NULLPTR));
        label->setText(QApplication::translate("QgsSmartGroupEditorDialogBase", "Smart group name", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsSmartGroupEditorDialogBase", "Condition matches", Q_NULLPTR));
        mAddConditionBtn->setText(QApplication::translate("QgsSmartGroupEditorDialogBase", "Add Condition", Q_NULLPTR));
        mConditionsBox->setTitle(QApplication::translate("QgsSmartGroupEditorDialogBase", "Conditions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsSmartGroupEditorDialogBase: public Ui_QgsSmartGroupEditorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSMARTGROUPEDITORDIALOGBASE_H
