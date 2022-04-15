/********************************************************************************
** Form generated from reading UI file 'qgspastetransformationsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPASTETRANSFORMATIONSBASE_H
#define UI_QGSPASTETRANSFORMATIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsPasteTransformationsBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1_2;
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QComboBox *destinationLayerComboBox;
    QLabel *textLabel4;
    QComboBox *sourceLayerComboBox;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPasteTransformationsBase)
    {
        if (QgsPasteTransformationsBase->objectName().isEmpty())
            QgsPasteTransformationsBase->setObjectName(QStringLiteral("QgsPasteTransformationsBase"));
        QgsPasteTransformationsBase->resize(564, 426);
        QgsPasteTransformationsBase->setMouseTracking(true);
        QgsPasteTransformationsBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(QgsPasteTransformationsBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        textLabel1_2 = new QLabel(QgsPasteTransformationsBase);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(textLabel1_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel3 = new QLabel(QgsPasteTransformationsBase);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

        destinationLayerComboBox = new QComboBox(QgsPasteTransformationsBase);
        destinationLayerComboBox->setObjectName(QStringLiteral("destinationLayerComboBox"));

        gridLayout->addWidget(destinationLayerComboBox, 1, 1, 1, 1);

        textLabel4 = new QLabel(QgsPasteTransformationsBase);
        textLabel4->setObjectName(QStringLiteral("textLabel4"));
        sizePolicy1.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
        textLabel4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel4, 0, 1, 1, 1);

        sourceLayerComboBox = new QComboBox(QgsPasteTransformationsBase);
        sourceLayerComboBox->setObjectName(QStringLiteral("sourceLayerComboBox"));

        gridLayout->addWidget(sourceLayerComboBox, 1, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem = new QSpacerItem(20, 251, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(QgsPasteTransformationsBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        textLabel3->setBuddy(sourceLayerComboBox);
        textLabel4->setBuddy(destinationLayerComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(sourceLayerComboBox, destinationLayerComboBox);

        retranslateUi(QgsPasteTransformationsBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPasteTransformationsBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPasteTransformationsBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsPasteTransformationsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPasteTransformationsBase)
    {
        QgsPasteTransformationsBase->setWindowTitle(QApplication::translate("QgsPasteTransformationsBase", "Paste Transformations", Q_NULLPTR));
        textLabel1_2->setText(QApplication::translate("QgsPasteTransformationsBase", "<b>Note: This function is not useful yet!</b>", Q_NULLPTR));
        textLabel3->setText(QApplication::translate("QgsPasteTransformationsBase", "Source", Q_NULLPTR));
        textLabel4->setText(QApplication::translate("QgsPasteTransformationsBase", "Destination", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsPasteTransformationsBase: public Ui_QgsPasteTransformationsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPASTETRANSFORMATIONSBASE_H
