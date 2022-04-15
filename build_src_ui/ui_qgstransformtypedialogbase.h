/********************************************************************************
** Form generated from reading UI file 'qgstransformtypedialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTRANSFORMTYPEDIALOGBASE_H
#define UI_QGSTRANSFORMTYPEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsTransformOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cbxTransformType;
    QCheckBox *cbGenerateWorldFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsTransformOptionsDialog)
    {
        if (QgsTransformOptionsDialog->objectName().isEmpty())
            QgsTransformOptionsDialog->setObjectName(QStringLiteral("QgsTransformOptionsDialog"));
        QgsTransformOptionsDialog->resize(222, 113);
        QgsTransformOptionsDialog->setWindowTitle(QStringLiteral("Dialog"));
        verticalLayout = new QVBoxLayout(QgsTransformOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QgsTransformOptionsDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        cbxTransformType = new QComboBox(QgsTransformOptionsDialog);
        cbxTransformType->setObjectName(QStringLiteral("cbxTransformType"));

        verticalLayout->addWidget(cbxTransformType);

        cbGenerateWorldFile = new QCheckBox(QgsTransformOptionsDialog);
        cbGenerateWorldFile->setObjectName(QStringLiteral("cbGenerateWorldFile"));

        verticalLayout->addWidget(cbGenerateWorldFile);

        buttonBox = new QDialogButtonBox(QgsTransformOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsTransformOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsTransformOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsTransformOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsTransformOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsTransformOptionsDialog)
    {
        label->setText(QApplication::translate("QgsTransformOptionsDialog", "Transformation type", Q_NULLPTR));
        cbxTransformType->clear();
        cbxTransformType->insertItems(0, QStringList()
         << QApplication::translate("QgsTransformOptionsDialog", "Linear", Q_NULLPTR)
         << QApplication::translate("QgsTransformOptionsDialog", "Polynomial 1", Q_NULLPTR)
         << QApplication::translate("QgsTransformOptionsDialog", "Polynomial 2", Q_NULLPTR)
         << QApplication::translate("QgsTransformOptionsDialog", "Polynomial 3", Q_NULLPTR)
         << QApplication::translate("QgsTransformOptionsDialog", "Thin plate spline (TPS)", Q_NULLPTR)
        );
        cbGenerateWorldFile->setText(QApplication::translate("QgsTransformOptionsDialog", "Generate ESRI world file (.tfw)", Q_NULLPTR));
        Q_UNUSED(QgsTransformOptionsDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsTransformOptionsDialog: public Ui_QgsTransformOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTRANSFORMTYPEDIALOGBASE_H
