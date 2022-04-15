/********************************************************************************
** Form generated from reading UI file 'qgshandlebadlayersbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHANDLEBADLAYERSBASE_H
#define UI_QGSHANDLEBADLAYERSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsHandleBadLayersBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mLayerList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsHandleBadLayersBase)
    {
        if (QgsHandleBadLayersBase->objectName().isEmpty())
            QgsHandleBadLayersBase->setObjectName(QStringLiteral("QgsHandleBadLayersBase"));
        QgsHandleBadLayersBase->resize(834, 505);
        verticalLayout = new QVBoxLayout(QgsHandleBadLayersBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mLayerList = new QTableWidget(QgsHandleBadLayersBase);
        mLayerList->setObjectName(QStringLiteral("mLayerList"));
        mLayerList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(mLayerList);

        buttonBox = new QDialogButtonBox(QgsHandleBadLayersBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Ignore);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsHandleBadLayersBase);

        QMetaObject::connectSlotsByName(QgsHandleBadLayersBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHandleBadLayersBase)
    {
        QgsHandleBadLayersBase->setWindowTitle(QApplication::translate("QgsHandleBadLayersBase", "Handle Unavailable Layers", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsHandleBadLayersBase: public Ui_QgsHandleBadLayersBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHANDLEBADLAYERSBASE_H
