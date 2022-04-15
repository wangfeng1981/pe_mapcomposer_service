/********************************************************************************
** Form generated from reading UI file 'qgsgroupwmsdatadialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGROUPWMSDATADIALOGBASE_H
#define UI_QGSGROUPWMSDATADIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsGroupWMSDataDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QLabel *mShortNameLabel;
    QLineEdit *mShortNameLineEdit;
    QLineEdit *mTitleLineEdit;
    QLabel *mTitleLabel;
    QLabel *mAbstractLabel;
    QTextEdit *mAbstractTextEdit;

    void setupUi(QDialog *QgsGroupWMSDataDialogBase)
    {
        if (QgsGroupWMSDataDialogBase->objectName().isEmpty())
            QgsGroupWMSDataDialogBase->setObjectName(QStringLiteral("QgsGroupWMSDataDialogBase"));
        QgsGroupWMSDataDialogBase->setWindowModality(Qt::WindowModal);
        QgsGroupWMSDataDialogBase->resize(500, 206);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsGroupWMSDataDialogBase->sizePolicy().hasHeightForWidth());
        QgsGroupWMSDataDialogBase->setSizePolicy(sizePolicy);
        QgsGroupWMSDataDialogBase->setMinimumSize(QSize(500, 150));
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsGroupWMSDataDialogBase->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(QgsGroupWMSDataDialogBase);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        buttonBox = new QDialogButtonBox(QgsGroupWMSDataDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_5->addWidget(buttonBox, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mShortNameLabel = new QLabel(QgsGroupWMSDataDialogBase);
        mShortNameLabel->setObjectName(QStringLiteral("mShortNameLabel"));

        gridLayout->addWidget(mShortNameLabel, 0, 0, 1, 1);

        mShortNameLineEdit = new QLineEdit(QgsGroupWMSDataDialogBase);
        mShortNameLineEdit->setObjectName(QStringLiteral("mShortNameLineEdit"));

        gridLayout->addWidget(mShortNameLineEdit, 0, 1, 1, 1);

        mTitleLineEdit = new QLineEdit(QgsGroupWMSDataDialogBase);
        mTitleLineEdit->setObjectName(QStringLiteral("mTitleLineEdit"));

        gridLayout->addWidget(mTitleLineEdit, 1, 1, 1, 1);

        mTitleLabel = new QLabel(QgsGroupWMSDataDialogBase);
        mTitleLabel->setObjectName(QStringLiteral("mTitleLabel"));

        gridLayout->addWidget(mTitleLabel, 1, 0, 1, 1);

        mAbstractLabel = new QLabel(QgsGroupWMSDataDialogBase);
        mAbstractLabel->setObjectName(QStringLiteral("mAbstractLabel"));

        gridLayout->addWidget(mAbstractLabel, 2, 0, 1, 1);

        mAbstractTextEdit = new QTextEdit(QgsGroupWMSDataDialogBase);
        mAbstractTextEdit->setObjectName(QStringLiteral("mAbstractTextEdit"));

        gridLayout->addWidget(mAbstractTextEdit, 2, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(QgsGroupWMSDataDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsGroupWMSDataDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGroupWMSDataDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGroupWMSDataDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGroupWMSDataDialogBase)
    {
        QgsGroupWMSDataDialogBase->setWindowTitle(QApplication::translate("QgsGroupWMSDataDialogBase", "Set Group WMS Data", Q_NULLPTR));
        mShortNameLabel->setText(QApplication::translate("QgsGroupWMSDataDialogBase", "Short name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mShortNameLineEdit->setToolTip(QApplication::translate("QgsGroupWMSDataDialogBase", "A name used to identify the group layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mShortNameLineEdit->setPlaceholderText(QApplication::translate("QgsGroupWMSDataDialogBase", "A name used to identify the group layer. The short name is a text string used for machine-to-machine communication.", Q_NULLPTR));
        mTitleLineEdit->setPlaceholderText(QApplication::translate("QgsGroupWMSDataDialogBase", "The title is for the benefit of humans to identify group layer.", Q_NULLPTR));
        mTitleLabel->setText(QApplication::translate("QgsGroupWMSDataDialogBase", "Title", Q_NULLPTR));
        mAbstractLabel->setText(QApplication::translate("QgsGroupWMSDataDialogBase", "Abstract", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAbstractTextEdit->setToolTip(QApplication::translate("QgsGroupWMSDataDialogBase", "The abstract is a descriptive narrative providing more information about the group layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsGroupWMSDataDialogBase: public Ui_QgsGroupWMSDataDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGROUPWMSDATADIALOGBASE_H
