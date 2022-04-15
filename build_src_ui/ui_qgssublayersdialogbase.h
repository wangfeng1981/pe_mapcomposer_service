/********************************************************************************
** Form generated from reading UI file 'qgssublayersdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSUBLAYERSDIALOGBASE_H
#define UI_QGSSUBLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSublayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *layersTable;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mBtnSelectAll;
    QPushButton *mBtnDeselectAll;
    QCheckBox *mCbxAddToGroup;
    QSpacerItem *horizontalSpacer;
    QLabel *mLblFilePath;

    void setupUi(QDialog *QgsSublayersDialogBase)
    {
        if (QgsSublayersDialogBase->objectName().isEmpty())
            QgsSublayersDialogBase->setObjectName(QStringLiteral("QgsSublayersDialogBase"));
        QgsSublayersDialogBase->resize(584, 236);
        gridLayout = new QGridLayout(QgsSublayersDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        layersTable = new QTreeWidget(QgsSublayersDialogBase);
        layersTable->setObjectName(QStringLiteral("layersTable"));
        layersTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        layersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        layersTable->setSortingEnabled(false);
        layersTable->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout->addWidget(layersTable, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSublayersDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mBtnSelectAll = new QPushButton(QgsSublayersDialogBase);
        mBtnSelectAll->setObjectName(QStringLiteral("mBtnSelectAll"));

        horizontalLayout->addWidget(mBtnSelectAll);

        mBtnDeselectAll = new QPushButton(QgsSublayersDialogBase);
        mBtnDeselectAll->setObjectName(QStringLiteral("mBtnDeselectAll"));

        horizontalLayout->addWidget(mBtnDeselectAll);

        mCbxAddToGroup = new QCheckBox(QgsSublayersDialogBase);
        mCbxAddToGroup->setObjectName(QStringLiteral("mCbxAddToGroup"));

        horizontalLayout->addWidget(mCbxAddToGroup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        mLblFilePath = new QLabel(QgsSublayersDialogBase);
        mLblFilePath->setObjectName(QStringLiteral("mLblFilePath"));
        mLblFilePath->setWordWrap(true);
        mLblFilePath->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(mLblFilePath, 0, 0, 1, 1);


        retranslateUi(QgsSublayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSublayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSublayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSublayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSublayersDialogBase)
    {
        QgsSublayersDialogBase->setWindowTitle(QApplication::translate("QgsSublayersDialogBase", "Select Layers to Load", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = layersTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsSublayersDialogBase", "1", Q_NULLPTR));
        mBtnSelectAll->setText(QApplication::translate("QgsSublayersDialogBase", "Select All", Q_NULLPTR));
        mBtnDeselectAll->setText(QApplication::translate("QgsSublayersDialogBase", "Deselect All", Q_NULLPTR));
        mCbxAddToGroup->setText(QApplication::translate("QgsSublayersDialogBase", "Add layers to a group", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLblFilePath->setToolTip(QApplication::translate("QgsSublayersDialogBase", "Current file source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsSublayersDialogBase: public Ui_QgsSublayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSUBLAYERSDIALOGBASE_H
