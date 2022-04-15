/********************************************************************************
** Form generated from reading UI file 'qgslayouttablebackgroundstyles.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTTABLEBACKGROUNDSTYLES_H
#define UI_QGSLAYOUTTABLEBACKGROUNDSTYLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutTableBackgroundDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mFirstRowCheckBox;
    QCheckBox *mHeaderRowCheckBox;
    QgsColorButton *mLastRowColorButton;
    QgsColorButton *mEvenColumnsColorButton;
    QCheckBox *mEvenColumnsCheckBox;
    QCheckBox *mFirstColumnCheckBox;
    QCheckBox *mEvenRowsCheckBox;
    QgsColorButton *mOddColumnsColorButton;
    QgsColorButton *mHeaderRowColorButton;
    QCheckBox *mOddColumnsCheckBox;
    QCheckBox *mLastRowCheckBox;
    QgsColorButton *mFirstColumnColorButton;
    QCheckBox *mLastColumnCheckBox;
    QLabel *label_2;
    QgsColorButton *mDefaultColorButton;
    QDialogButtonBox *buttonBox;
    QgsColorButton *mFirstRowColorButton;
    QgsColorButton *mOddRowsColorButton;
    QCheckBox *mOddRowsCheckBox;
    QgsColorButton *mEvenRowsColorButton;
    QgsColorButton *mLastColumnColorButton;
    QLabel *label;

    void setupUi(QDialog *QgsLayoutTableBackgroundDialog)
    {
        if (QgsLayoutTableBackgroundDialog->objectName().isEmpty())
            QgsLayoutTableBackgroundDialog->setObjectName(QStringLiteral("QgsLayoutTableBackgroundDialog"));
        QgsLayoutTableBackgroundDialog->resize(481, 904);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutTableBackgroundDialog->sizePolicy().hasHeightForWidth());
        QgsLayoutTableBackgroundDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsLayoutTableBackgroundDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mFirstRowCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mFirstRowCheckBox->setObjectName(QStringLiteral("mFirstRowCheckBox"));

        gridLayout->addWidget(mFirstRowCheckBox, 14, 0, 1, 2);

        mHeaderRowCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mHeaderRowCheckBox->setObjectName(QStringLiteral("mHeaderRowCheckBox"));

        gridLayout->addWidget(mHeaderRowCheckBox, 13, 0, 1, 2);

        mLastRowColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mLastRowColorButton->setObjectName(QStringLiteral("mLastRowColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLastRowColorButton->sizePolicy().hasHeightForWidth());
        mLastRowColorButton->setSizePolicy(sizePolicy1);
        mLastRowColorButton->setMinimumSize(QSize(120, 0));
        mLastRowColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLastRowColorButton, 15, 2, 1, 1);

        mEvenColumnsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mEvenColumnsColorButton->setObjectName(QStringLiteral("mEvenColumnsColorButton"));
        sizePolicy1.setHeightForWidth(mEvenColumnsColorButton->sizePolicy().hasHeightForWidth());
        mEvenColumnsColorButton->setSizePolicy(sizePolicy1);
        mEvenColumnsColorButton->setMinimumSize(QSize(120, 0));
        mEvenColumnsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mEvenColumnsColorButton, 7, 2, 1, 1);

        mEvenColumnsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mEvenColumnsCheckBox->setObjectName(QStringLiteral("mEvenColumnsCheckBox"));

        gridLayout->addWidget(mEvenColumnsCheckBox, 7, 0, 1, 2);

        mFirstColumnCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mFirstColumnCheckBox->setObjectName(QStringLiteral("mFirstColumnCheckBox"));

        gridLayout->addWidget(mFirstColumnCheckBox, 11, 0, 1, 2);

        mEvenRowsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mEvenRowsCheckBox->setObjectName(QStringLiteral("mEvenRowsCheckBox"));

        gridLayout->addWidget(mEvenRowsCheckBox, 10, 0, 1, 2);

        mOddColumnsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mOddColumnsColorButton->setObjectName(QStringLiteral("mOddColumnsColorButton"));
        sizePolicy1.setHeightForWidth(mOddColumnsColorButton->sizePolicy().hasHeightForWidth());
        mOddColumnsColorButton->setSizePolicy(sizePolicy1);
        mOddColumnsColorButton->setMinimumSize(QSize(120, 0));
        mOddColumnsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mOddColumnsColorButton, 5, 2, 1, 1);

        mHeaderRowColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mHeaderRowColorButton->setObjectName(QStringLiteral("mHeaderRowColorButton"));
        sizePolicy1.setHeightForWidth(mHeaderRowColorButton->sizePolicy().hasHeightForWidth());
        mHeaderRowColorButton->setSizePolicy(sizePolicy1);
        mHeaderRowColorButton->setMinimumSize(QSize(120, 0));
        mHeaderRowColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mHeaderRowColorButton, 13, 2, 1, 1);

        mOddColumnsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mOddColumnsCheckBox->setObjectName(QStringLiteral("mOddColumnsCheckBox"));

        gridLayout->addWidget(mOddColumnsCheckBox, 5, 0, 1, 2);

        mLastRowCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mLastRowCheckBox->setObjectName(QStringLiteral("mLastRowCheckBox"));

        gridLayout->addWidget(mLastRowCheckBox, 15, 0, 1, 2);

        mFirstColumnColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mFirstColumnColorButton->setObjectName(QStringLiteral("mFirstColumnColorButton"));
        sizePolicy1.setHeightForWidth(mFirstColumnColorButton->sizePolicy().hasHeightForWidth());
        mFirstColumnColorButton->setSizePolicy(sizePolicy1);
        mFirstColumnColorButton->setMinimumSize(QSize(120, 0));
        mFirstColumnColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mFirstColumnColorButton, 11, 2, 1, 1);

        mLastColumnCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mLastColumnCheckBox->setObjectName(QStringLiteral("mLastColumnCheckBox"));

        gridLayout->addWidget(mLastColumnCheckBox, 12, 0, 1, 2);

        label_2 = new QLabel(QgsLayoutTableBackgroundDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        mDefaultColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mDefaultColorButton->setObjectName(QStringLiteral("mDefaultColorButton"));
        sizePolicy1.setHeightForWidth(mDefaultColorButton->sizePolicy().hasHeightForWidth());
        mDefaultColorButton->setSizePolicy(sizePolicy1);
        mDefaultColorButton->setMinimumSize(QSize(120, 0));
        mDefaultColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mDefaultColorButton, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLayoutTableBackgroundDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 16, 0, 1, 3);

        mFirstRowColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mFirstRowColorButton->setObjectName(QStringLiteral("mFirstRowColorButton"));
        sizePolicy1.setHeightForWidth(mFirstRowColorButton->sizePolicy().hasHeightForWidth());
        mFirstRowColorButton->setSizePolicy(sizePolicy1);
        mFirstRowColorButton->setMinimumSize(QSize(120, 0));
        mFirstRowColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mFirstRowColorButton, 14, 2, 1, 1);

        mOddRowsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mOddRowsColorButton->setObjectName(QStringLiteral("mOddRowsColorButton"));
        sizePolicy1.setHeightForWidth(mOddRowsColorButton->sizePolicy().hasHeightForWidth());
        mOddRowsColorButton->setSizePolicy(sizePolicy1);
        mOddRowsColorButton->setMinimumSize(QSize(120, 0));
        mOddRowsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mOddRowsColorButton, 9, 2, 1, 1);

        mOddRowsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mOddRowsCheckBox->setObjectName(QStringLiteral("mOddRowsCheckBox"));

        gridLayout->addWidget(mOddRowsCheckBox, 9, 0, 1, 2);

        mEvenRowsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mEvenRowsColorButton->setObjectName(QStringLiteral("mEvenRowsColorButton"));
        sizePolicy1.setHeightForWidth(mEvenRowsColorButton->sizePolicy().hasHeightForWidth());
        mEvenRowsColorButton->setSizePolicy(sizePolicy1);
        mEvenRowsColorButton->setMinimumSize(QSize(120, 0));
        mEvenRowsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mEvenRowsColorButton, 10, 2, 1, 1);

        mLastColumnColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mLastColumnColorButton->setObjectName(QStringLiteral("mLastColumnColorButton"));
        sizePolicy1.setHeightForWidth(mLastColumnColorButton->sizePolicy().hasHeightForWidth());
        mLastColumnColorButton->setSizePolicy(sizePolicy1);
        mLastColumnColorButton->setMinimumSize(QSize(120, 0));
        mLastColumnColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLastColumnColorButton, 12, 2, 1, 1);

        label = new QLabel(QgsLayoutTableBackgroundDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 2, 0, 1, 3);

        QWidget::setTabOrder(mDefaultColorButton, mOddColumnsCheckBox);
        QWidget::setTabOrder(mOddColumnsCheckBox, mOddColumnsColorButton);
        QWidget::setTabOrder(mOddColumnsColorButton, mEvenColumnsCheckBox);
        QWidget::setTabOrder(mEvenColumnsCheckBox, mEvenColumnsColorButton);
        QWidget::setTabOrder(mEvenColumnsColorButton, mOddRowsCheckBox);
        QWidget::setTabOrder(mOddRowsCheckBox, mOddRowsColorButton);
        QWidget::setTabOrder(mOddRowsColorButton, mEvenRowsCheckBox);
        QWidget::setTabOrder(mEvenRowsCheckBox, mEvenRowsColorButton);
        QWidget::setTabOrder(mEvenRowsColorButton, mFirstColumnCheckBox);
        QWidget::setTabOrder(mFirstColumnCheckBox, mFirstColumnColorButton);
        QWidget::setTabOrder(mFirstColumnColorButton, mLastColumnCheckBox);
        QWidget::setTabOrder(mLastColumnCheckBox, mLastColumnColorButton);
        QWidget::setTabOrder(mLastColumnColorButton, mHeaderRowCheckBox);
        QWidget::setTabOrder(mHeaderRowCheckBox, mHeaderRowColorButton);
        QWidget::setTabOrder(mHeaderRowColorButton, mFirstRowCheckBox);
        QWidget::setTabOrder(mFirstRowCheckBox, mFirstRowColorButton);
        QWidget::setTabOrder(mFirstRowColorButton, mLastRowCheckBox);
        QWidget::setTabOrder(mLastRowCheckBox, mLastRowColorButton);

        retranslateUi(QgsLayoutTableBackgroundDialog);
        QObject::connect(mOddColumnsCheckBox, SIGNAL(toggled(bool)), mOddColumnsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mEvenColumnsCheckBox, SIGNAL(toggled(bool)), mEvenColumnsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mOddRowsCheckBox, SIGNAL(toggled(bool)), mOddRowsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mEvenRowsCheckBox, SIGNAL(toggled(bool)), mEvenRowsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mFirstColumnCheckBox, SIGNAL(toggled(bool)), mFirstColumnColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mLastColumnCheckBox, SIGNAL(toggled(bool)), mLastColumnColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mHeaderRowCheckBox, SIGNAL(toggled(bool)), mHeaderRowColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mFirstRowCheckBox, SIGNAL(toggled(bool)), mFirstRowColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mLastRowCheckBox, SIGNAL(toggled(bool)), mLastRowColorButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QgsLayoutTableBackgroundDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutTableBackgroundDialog)
    {
        QgsLayoutTableBackgroundDialog->setWindowTitle(QApplication::translate("QgsLayoutTableBackgroundDialog", "Table Background Colors", Q_NULLPTR));
        mFirstRowCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "First row", Q_NULLPTR));
        mHeaderRowCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Header row", Q_NULLPTR));
        mLastRowColorButton->setText(QString());
        mEvenColumnsColorButton->setText(QString());
        mEvenColumnsCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Even columns", Q_NULLPTR));
        mFirstColumnCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "First column", Q_NULLPTR));
        mEvenRowsCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Even rows", Q_NULLPTR));
        mOddColumnsColorButton->setText(QString());
        mHeaderRowColorButton->setText(QString());
        mOddColumnsCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Odd columns", Q_NULLPTR));
        mLastRowCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Last row", Q_NULLPTR));
        mFirstColumnColorButton->setText(QString());
        mLastColumnCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Last column", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Default cell background", Q_NULLPTR));
        mDefaultColorButton->setText(QString());
        mFirstRowColorButton->setText(QString());
        mOddRowsColorButton->setText(QString());
        mOddRowsCheckBox->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "Odd rows", Q_NULLPTR));
        mEvenRowsColorButton->setText(QString());
        mLastColumnColorButton->setText(QString());
        label->setText(QApplication::translate("QgsLayoutTableBackgroundDialog", "<html><head/><body><p>Check options to enable shading for matching cells. Options lower in this list will take precedence over higher options. For example, if both &quot;<span style=\" font-style:italic;\">First row</span>&quot; and &quot;<span style=\" font-style:italic;\">Odd rows</span>&quot; are checked, the cells in the first row will be shaded using the color specified for &quot;<span style=\" font-style:italic;\">First row</span>&quot;.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutTableBackgroundDialog: public Ui_QgsLayoutTableBackgroundDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTTABLEBACKGROUNDSTYLES_H
