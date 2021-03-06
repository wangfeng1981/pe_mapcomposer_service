/********************************************************************************
** Form generated from reading UI file 'qgsmeasurebase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMEASUREBASE_H
#define UI_QGSMEASUREBASE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeasureBase
{
public:
    QGridLayout *mGrid;
    QTreeWidget *mTable;
    QLabel *totalDistanceLabel;
    QSpacerItem *spacerItem;
    QLabel *totalHorizontalDistanceLabel;
    QLineEdit *editHorizontalTotal;
    QRadioButton *mEllipsoidal;
    QRadioButton *mCartesian;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *mNotesLabel;
    QComboBox *mUnitsCombo;
    QDialogButtonBox *buttonBox;
    QLineEdit *editTotal;
    QSpacerItem *mSpacer;

    void setupUi(QDialog *QgsMeasureBase)
    {
        if (QgsMeasureBase->objectName().isEmpty())
            QgsMeasureBase->setObjectName(QStringLiteral("QgsMeasureBase"));
        QgsMeasureBase->resize(462, 376);
        QgsMeasureBase->setBaseSize(QSize(150, 200));
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsMeasureBase->setWindowIcon(icon);
        mGrid = new QGridLayout(QgsMeasureBase);
        mGrid->setSpacing(6);
        mGrid->setContentsMargins(11, 11, 11, 11);
        mGrid->setObjectName(QStringLiteral("mGrid"));
        mGrid->setContentsMargins(9, 9, 9, 9);
        mTable = new QTreeWidget(QgsMeasureBase);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignTrailing|Qt::AlignVCenter);
        mTable->setHeaderItem(__qtreewidgetitem);
        mTable->setObjectName(QStringLiteral("mTable"));
        mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTable->setRootIsDecorated(false);
        mTable->setColumnCount(1);

        mGrid->addWidget(mTable, 2, 0, 1, 4);

        totalDistanceLabel = new QLabel(QgsMeasureBase);
        totalDistanceLabel->setObjectName(QStringLiteral("totalDistanceLabel"));

        mGrid->addWidget(totalDistanceLabel, 4, 0, 1, 1);

        spacerItem = new QSpacerItem(41, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        mGrid->addItem(spacerItem, 4, 1, 1, 1);

        totalHorizontalDistanceLabel = new QLabel(QgsMeasureBase);
        totalHorizontalDistanceLabel->setObjectName(QStringLiteral("totalHorizontalDistanceLabel"));

        mGrid->addWidget(totalHorizontalDistanceLabel, 6, 0, 1, 1);

        editHorizontalTotal = new QLineEdit(QgsMeasureBase);
        editHorizontalTotal->setObjectName(QStringLiteral("editHorizontalTotal"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editHorizontalTotal->setFont(font);
        editHorizontalTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editHorizontalTotal->setReadOnly(true);

        mGrid->addWidget(editHorizontalTotal, 6, 2, 1, 1);

        mEllipsoidal = new QRadioButton(QgsMeasureBase);
        mEllipsoidal->setObjectName(QStringLiteral("mEllipsoidal"));
        mEllipsoidal->setChecked(true);

        mGrid->addWidget(mEllipsoidal, 7, 2, 1, 1);

        mCartesian = new QRadioButton(QgsMeasureBase);
        mCartesian->setObjectName(QStringLiteral("mCartesian"));
        mCartesian->setChecked(false);

        mGrid->addWidget(mCartesian, 7, 0, 1, 1);

        groupBox = new QgsCollapsibleGroupBox(QgsMeasureBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mNotesLabel = new QLabel(groupBox);
        mNotesLabel->setObjectName(QStringLiteral("mNotesLabel"));
        mNotesLabel->setWordWrap(true);

        verticalLayout->addWidget(mNotesLabel);


        mGrid->addWidget(groupBox, 9, 0, 1, 4);

        mUnitsCombo = new QComboBox(QgsMeasureBase);
        mUnitsCombo->setObjectName(QStringLiteral("mUnitsCombo"));

        mGrid->addWidget(mUnitsCombo, 4, 3, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMeasureBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        mGrid->addWidget(buttonBox, 11, 0, 1, 4);

        editTotal = new QLineEdit(QgsMeasureBase);
        editTotal->setObjectName(QStringLiteral("editTotal"));
        editTotal->setFont(font);
        editTotal->setAlignment(Qt::AlignRight);
        editTotal->setReadOnly(true);

        mGrid->addWidget(editTotal, 4, 2, 1, 1);

        mSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mGrid->addItem(mSpacer, 10, 0, 1, 4);

#ifndef QT_NO_SHORTCUT
        totalDistanceLabel->setBuddy(editTotal);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTable, editTotal);

        retranslateUi(QgsMeasureBase);

        QMetaObject::connectSlotsByName(QgsMeasureBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeasureBase)
    {
        QgsMeasureBase->setWindowTitle(QApplication::translate("QgsMeasureBase", "Measure", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsMeasureBase", "Segments", Q_NULLPTR));
        totalDistanceLabel->setText(QApplication::translate("QgsMeasureBase", "Total", Q_NULLPTR));
        totalHorizontalDistanceLabel->setText(QApplication::translate("QgsMeasureBase", "Total Horizontal Distance", Q_NULLPTR));
        mEllipsoidal->setText(QApplication::translate("QgsMeasureBase", "Ellipsoidal", Q_NULLPTR));
        mCartesian->setText(QApplication::translate("QgsMeasureBase", "Cartesian", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeasureBase", "Info", Q_NULLPTR));
        mNotesLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeasureBase: public Ui_QgsMeasureBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMEASUREBASE_H
