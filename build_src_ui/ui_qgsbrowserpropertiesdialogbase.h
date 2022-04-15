/********************************************************************************
** Form generated from reading UI file 'qgsbrowserpropertiesdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERPROPERTIESDIALOGBASE_H
#define UI_QGSBROWSERPROPERTIESDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserPropertiesDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *mLayout;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsBrowserPropertiesDialogBase)
    {
        if (QgsBrowserPropertiesDialogBase->objectName().isEmpty())
            QgsBrowserPropertiesDialogBase->setObjectName(QStringLiteral("QgsBrowserPropertiesDialogBase"));
        QgsBrowserPropertiesDialogBase->resize(800, 424);
        QgsBrowserPropertiesDialogBase->setWindowTitle(QStringLiteral("Dialog"));
        QgsBrowserPropertiesDialogBase->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(QgsBrowserPropertiesDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mLayout = new QVBoxLayout();
        mLayout->setObjectName(QStringLiteral("mLayout"));

        verticalLayout->addLayout(mLayout);

        mButtonBox = new QDialogButtonBox(QgsBrowserPropertiesDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsBrowserPropertiesDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsBrowserPropertiesDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsBrowserPropertiesDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsBrowserPropertiesDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsBrowserPropertiesDialogBase)
    {
        Q_UNUSED(QgsBrowserPropertiesDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserPropertiesDialogBase: public Ui_QgsBrowserPropertiesDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERPROPERTIESDIALOGBASE_H
