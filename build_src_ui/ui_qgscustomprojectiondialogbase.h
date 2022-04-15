/********************************************************************************
** Form generated from reading UI file 'qgscustomprojectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
#define UI_QGSCUSTOMPROJECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCustomProjectionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGridLayout *gridLayout_4;
    QPushButton *mButtonValidate;
    QPushButton *pbnCopyCRS;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *teParameters;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *leNameList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbnAdd;
    QPushButton *pbnRemove;
    QSpacerItem *verticalSpacer;
    QLineEdit *leName;
    QLabel *label_4;
    QComboBox *mFormatComboBox;
    QLabel *label_5;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *textLabel2_2_2;
    QLabel *label_2;
    QLabel *textLabel1_3;
    QLabel *textLabel2_3;
    QLabel *textLabel2_2;
    QLineEdit *northWGS84;
    QLabel *projectedX;
    QLineEdit *eastWGS84;
    QLabel *projectedY;
    QPushButton *pbnCalculate;

    void setupUi(QDialog *QgsCustomProjectionDialogBase)
    {
        if (QgsCustomProjectionDialogBase->objectName().isEmpty())
            QgsCustomProjectionDialogBase->setObjectName(QStringLiteral("QgsCustomProjectionDialogBase"));
        QgsCustomProjectionDialogBase->resize(542, 650);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsCustomProjectionDialogBase->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(QgsCustomProjectionDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsCustomProjectionDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsCustomProjectionDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 536, 615));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 1, 3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mButtonValidate = new QPushButton(groupBox);
        mButtonValidate->setObjectName(QStringLiteral("mButtonValidate"));

        gridLayout_4->addWidget(mButtonValidate, 0, 2, 1, 1);

        pbnCopyCRS = new QPushButton(groupBox);
        pbnCopyCRS->setObjectName(QStringLiteral("pbnCopyCRS"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnCopyCRS->setIcon(icon1);

        gridLayout_4->addWidget(pbnCopyCRS, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 2, 1, 1);

        teParameters = new QPlainTextEdit(groupBox);
        teParameters->setObjectName(QStringLiteral("teParameters"));

        gridLayout_4->addWidget(teParameters, 0, 0, 2, 1);


        gridLayout_3->addLayout(gridLayout_4, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leNameList = new QTreeWidget(groupBox);
        leNameList->setObjectName(QStringLiteral("leNameList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leNameList->sizePolicy().hasHeightForWidth());
        leNameList->setSizePolicy(sizePolicy);
        leNameList->setAlternatingRowColors(true);
        leNameList->setSortingEnabled(false);
        leNameList->header()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(leNameList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pbnAdd = new QPushButton(groupBox);
        pbnAdd->setObjectName(QStringLiteral("pbnAdd"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAdd->setIcon(icon2);

        verticalLayout_2->addWidget(pbnAdd);

        pbnRemove = new QPushButton(groupBox);
        pbnRemove->setObjectName(QStringLiteral("pbnRemove"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemove->setIcon(icon3);

        verticalLayout_2->addWidget(pbnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 3);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QStringLiteral("leName"));

        gridLayout_3->addWidget(leName, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        mFormatComboBox = new QComboBox(groupBox);
        mFormatComboBox->setObjectName(QStringLiteral("mFormatComboBox"));

        gridLayout_3->addWidget(mFormatComboBox, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        gridLayout_3->setRowStretch(1, 3);
        gridLayout_3->setRowStretch(3, 1);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setProperty("collapsed", QVariant(true));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        textLabel2_2_2 = new QLabel(groupBox_2);
        textLabel2_2_2->setObjectName(QStringLiteral("textLabel2_2_2"));

        gridLayout1->addWidget(textLabel2_2_2, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout1->addWidget(label_2, 0, 0, 1, 3);

        textLabel1_3 = new QLabel(groupBox_2);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));

        gridLayout1->addWidget(textLabel1_3, 1, 1, 1, 1);

        textLabel2_3 = new QLabel(groupBox_2);
        textLabel2_3->setObjectName(QStringLiteral("textLabel2_3"));

        gridLayout1->addWidget(textLabel2_3, 1, 2, 1, 1);

        textLabel2_2 = new QLabel(groupBox_2);
        textLabel2_2->setObjectName(QStringLiteral("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 2, 0, 1, 1);

        northWGS84 = new QLineEdit(groupBox_2);
        northWGS84->setObjectName(QStringLiteral("northWGS84"));
        northWGS84->setEnabled(true);

        gridLayout1->addWidget(northWGS84, 2, 1, 1, 1);

        projectedX = new QLabel(groupBox_2);
        projectedX->setObjectName(QStringLiteral("projectedX"));
        projectedX->setEnabled(true);
        projectedX->setFrameShape(QFrame::Box);

        gridLayout1->addWidget(projectedX, 2, 2, 1, 1);

        eastWGS84 = new QLineEdit(groupBox_2);
        eastWGS84->setObjectName(QStringLiteral("eastWGS84"));

        gridLayout1->addWidget(eastWGS84, 3, 1, 1, 1);

        projectedY = new QLabel(groupBox_2);
        projectedY->setObjectName(QStringLiteral("projectedY"));
        projectedY->setEnabled(true);
        projectedY->setFrameShape(QFrame::Box);
        projectedY->setMargin(1);

        gridLayout1->addWidget(projectedY, 3, 2, 1, 1);

        pbnCalculate = new QPushButton(groupBox_2);
        pbnCalculate->setObjectName(QStringLiteral("pbnCalculate"));

        gridLayout1->addWidget(pbnCalculate, 4, 0, 1, 3);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel2_2_2->setBuddy(eastWGS84);
        textLabel2_2->setBuddy(northWGS84);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(leNameList, pbnAdd);
        QWidget::setTabOrder(pbnAdd, pbnRemove);
        QWidget::setTabOrder(pbnRemove, leName);
        QWidget::setTabOrder(leName, mFormatComboBox);
        QWidget::setTabOrder(mFormatComboBox, teParameters);
        QWidget::setTabOrder(teParameters, pbnCopyCRS);
        QWidget::setTabOrder(pbnCopyCRS, mButtonValidate);
        QWidget::setTabOrder(mButtonValidate, northWGS84);
        QWidget::setTabOrder(northWGS84, eastWGS84);
        QWidget::setTabOrder(eastWGS84, pbnCalculate);

        retranslateUi(QgsCustomProjectionDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsCustomProjectionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsCustomProjectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCustomProjectionDialogBase)
    {
        QgsCustomProjectionDialogBase->setWindowTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Custom Coordinate Reference System Definition", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Define", Q_NULLPTR));
        label->setText(QApplication::translate("QgsCustomProjectionDialogBase", "You can define your own custom Coordinate Reference System (CRS) here. The definition must conform to a WKT or Proj string format for specifying a CRS.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonValidate->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Validate the current CRS definition and test whether it is an acceptable projection definition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonValidate->setText(QApplication::translate("QgsCustomProjectionDialogBase", "&Validate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnCopyCRS->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Copy parameters from existing CRS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnCopyCRS->setText(QString());
        label_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = leNameList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsCustomProjectionDialogBase", "ID", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsCustomProjectionDialogBase", "Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbnAdd->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Add new CRS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnAdd->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbnRemove->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Remove CRS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbnRemove->setText(QString());
        label_4->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Format", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Test", Q_NULLPTR));
        textLabel2_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "East", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Use the text boxes below to test the CRS definition you are creating. Enter a coordinate where both the lat/long and the transformed result are known (for example by reading off a map). Then press the calculate button to see if the CRS definition you are creating is accurate.", Q_NULLPTR));
        textLabel1_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Geographic / WGS84", Q_NULLPTR));
        textLabel2_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Destination CRS        ", Q_NULLPTR));
        textLabel2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "North", Q_NULLPTR));
        projectedX->setText(QString());
        projectedY->setText(QString());
        pbnCalculate->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Calculate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomProjectionDialogBase: public Ui_QgsCustomProjectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
