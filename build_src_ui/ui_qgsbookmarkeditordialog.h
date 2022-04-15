/********************************************************************************
** Form generated from reading UI file 'qgsbookmarkeditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKEDITORDIALOG_H
#define UI_QGSBOOKMARKEDITORDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsextentgroupbox.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBookmarkEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QgsExtentGroupBox *mExtentGroupBox;
    QLabel *lblName;
    QLineEdit *mName;
    QLabel *lblGroup;
    QComboBox *mGroup;
    QLabel *lblCRS;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *lblSaveLocation;
    QComboBox *mSaveLocation;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsBookmarkEditorDialog)
    {
        if (QgsBookmarkEditorDialog->objectName().isEmpty())
            QgsBookmarkEditorDialog->setObjectName(QStringLiteral("QgsBookmarkEditorDialog"));
        QgsBookmarkEditorDialog->resize(600, 429);
        verticalLayout = new QVBoxLayout(QgsBookmarkEditorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mExtentGroupBox = new QgsExtentGroupBox(QgsBookmarkEditorDialog);
        mExtentGroupBox->setObjectName(QStringLiteral("mExtentGroupBox"));
        mExtentGroupBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExtentGroupBox, 2, 0, 1, 2);

        lblName = new QLabel(QgsBookmarkEditorDialog);
        lblName->setObjectName(QStringLiteral("lblName"));

        gridLayout->addWidget(lblName, 0, 0, 1, 1);

        mName = new QLineEdit(QgsBookmarkEditorDialog);
        mName->setObjectName(QStringLiteral("mName"));

        gridLayout->addWidget(mName, 0, 1, 1, 1);

        lblGroup = new QLabel(QgsBookmarkEditorDialog);
        lblGroup->setObjectName(QStringLiteral("lblGroup"));

        gridLayout->addWidget(lblGroup, 1, 0, 1, 1);

        mGroup = new QComboBox(QgsBookmarkEditorDialog);
        mGroup->setObjectName(QStringLiteral("mGroup"));
        mGroup->setEditable(true);

        gridLayout->addWidget(mGroup, 1, 1, 1, 1);

        lblCRS = new QLabel(QgsBookmarkEditorDialog);
        lblCRS->setObjectName(QStringLiteral("lblCRS"));

        gridLayout->addWidget(lblCRS, 3, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsBookmarkEditorDialog);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mCrsSelector, 3, 1, 1, 1);

        lblSaveLocation = new QLabel(QgsBookmarkEditorDialog);
        lblSaveLocation->setObjectName(QStringLiteral("lblSaveLocation"));

        gridLayout->addWidget(lblSaveLocation, 4, 0, 1, 1);

        mSaveLocation = new QComboBox(QgsBookmarkEditorDialog);
        mSaveLocation->setObjectName(QStringLiteral("mSaveLocation"));

        gridLayout->addWidget(mSaveLocation, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsBookmarkEditorDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mName, mGroup);
        QWidget::setTabOrder(mGroup, mExtentGroupBox);
        QWidget::setTabOrder(mExtentGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mSaveLocation);

        retranslateUi(QgsBookmarkEditorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsBookmarkEditorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsBookmarkEditorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsBookmarkEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsBookmarkEditorDialog)
    {
        QgsBookmarkEditorDialog->setWindowTitle(QApplication::translate("QgsBookmarkEditorDialog", "Bookmark Editor", Q_NULLPTR));
        mExtentGroupBox->setTitle(QApplication::translate("QgsBookmarkEditorDialog", "Extent", Q_NULLPTR));
        lblName->setText(QApplication::translate("QgsBookmarkEditorDialog", "Name", Q_NULLPTR));
        lblGroup->setText(QApplication::translate("QgsBookmarkEditorDialog", "Group", Q_NULLPTR));
        lblCRS->setText(QApplication::translate("QgsBookmarkEditorDialog", "CRS", Q_NULLPTR));
        lblSaveLocation->setText(QApplication::translate("QgsBookmarkEditorDialog", "Saved in", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarkEditorDialog: public Ui_QgsBookmarkEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBOOKMARKEDITORDIALOG_H
