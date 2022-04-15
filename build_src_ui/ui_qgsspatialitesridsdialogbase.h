/********************************************************************************
** Form generated from reading UI file 'qgsspatialitesridsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSPATIALITESRIDSDIALOGBASE_H
#define UI_QGSSPATIALITESRIDSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSpatialiteSridsDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *twSrids;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leSearch;
    QPushButton *pbnFilter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonSrid;
    QRadioButton *radioButtonName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSpatialiteSridsDialogBase)
    {
        if (QgsSpatialiteSridsDialogBase->objectName().isEmpty())
            QgsSpatialiteSridsDialogBase->setObjectName(QStringLiteral("QgsSpatialiteSridsDialogBase"));
        QgsSpatialiteSridsDialogBase->resize(601, 332);
        gridLayout_2 = new QGridLayout(QgsSpatialiteSridsDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        twSrids = new QTreeWidget(QgsSpatialiteSridsDialogBase);
        twSrids->setObjectName(QStringLiteral("twSrids"));
        twSrids->setRootIsDecorated(false);
        twSrids->setSortingEnabled(true);
        twSrids->setColumnCount(3);

        gridLayout_2->addWidget(twSrids, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QgsSpatialiteSridsDialogBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leSearch = new QLineEdit(QgsSpatialiteSridsDialogBase);
        leSearch->setObjectName(QStringLiteral("leSearch"));

        horizontalLayout->addWidget(leSearch);

        pbnFilter = new QPushButton(QgsSpatialiteSridsDialogBase);
        pbnFilter->setObjectName(QStringLiteral("pbnFilter"));

        horizontalLayout->addWidget(pbnFilter);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsSpatialiteSridsDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(160, 26));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButtonSrid = new QRadioButton(groupBox);
        radioButtonSrid->setObjectName(QStringLiteral("radioButtonSrid"));
        radioButtonSrid->setChecked(false);

        gridLayout->addWidget(radioButtonSrid, 0, 0, 1, 1);

        radioButtonName = new QRadioButton(groupBox);
        radioButtonName->setObjectName(QStringLiteral("radioButtonName"));
        radioButtonName->setChecked(true);

        gridLayout->addWidget(radioButtonName, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSpatialiteSridsDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(twSrids, leSearch);
        QWidget::setTabOrder(leSearch, pbnFilter);
        QWidget::setTabOrder(pbnFilter, radioButtonSrid);
        QWidget::setTabOrder(radioButtonSrid, radioButtonName);
        QWidget::setTabOrder(radioButtonName, buttonBox);

        retranslateUi(QgsSpatialiteSridsDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSpatialiteSridsDialogBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), QgsSpatialiteSridsDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsSpatialiteSridsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSpatialiteSridsDialogBase)
    {
        QgsSpatialiteSridsDialogBase->setWindowTitle(QApplication::translate("QgsSpatialiteSridsDialogBase", "Select a SpatiaLite Spatial Reference System", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = twSrids->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsSpatialiteSridsDialogBase", "Reference Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsSpatialiteSridsDialogBase", "Authority", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsSpatialiteSridsDialogBase", "SRID", Q_NULLPTR));
        label->setText(QApplication::translate("QgsSpatialiteSridsDialogBase", "Search", Q_NULLPTR));
        pbnFilter->setText(QApplication::translate("QgsSpatialiteSridsDialogBase", "Filter", Q_NULLPTR));
        radioButtonSrid->setText(QApplication::translate("QgsSpatialiteSridsDialogBase", "SRID", Q_NULLPTR));
        radioButtonName->setText(QApplication::translate("QgsSpatialiteSridsDialogBase", "Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsSpatialiteSridsDialogBase: public Ui_QgsSpatialiteSridsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSPATIALITESRIDSDIALOGBASE_H
