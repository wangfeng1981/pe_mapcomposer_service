/********************************************************************************
** Form generated from reading UI file 'qgsmergeattributesdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMERGEATTRIBUTESDIALOGBASE_H
#define UI_QGSMERGEATTRIBUTESDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMergeAttributesDialogBase
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mTableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mFromSelectedPushButton;
    QLabel *mTakeSelectedAttributesLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mRemoveFeatureFromSelectionButton;
    QLabel *mRemoveFeatureFromSelectionLabel;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mSkipAllButton;
    QLabel *mRemoveFeatureFromSelectionLabel_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *QgsMergeAttributesDialogBase)
    {
        if (QgsMergeAttributesDialogBase->objectName().isEmpty())
            QgsMergeAttributesDialogBase->setObjectName(QStringLiteral("QgsMergeAttributesDialogBase"));
        QgsMergeAttributesDialogBase->resize(450, 382);
        gridLayout = new QGridLayout(QgsMergeAttributesDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mTableWidget = new QTableWidget(QgsMergeAttributesDialogBase);
        mTableWidget->setObjectName(QStringLiteral("mTableWidget"));

        gridLayout->addWidget(mTableWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFromSelectedPushButton = new QPushButton(QgsMergeAttributesDialogBase);
        mFromSelectedPushButton->setObjectName(QStringLiteral("mFromSelectedPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFromSelectedPushButton->sizePolicy().hasHeightForWidth());
        mFromSelectedPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFromSelectedPushButton);

        mTakeSelectedAttributesLabel = new QLabel(QgsMergeAttributesDialogBase);
        mTakeSelectedAttributesLabel->setObjectName(QStringLiteral("mTakeSelectedAttributesLabel"));

        horizontalLayout->addWidget(mTakeSelectedAttributesLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mRemoveFeatureFromSelectionButton = new QPushButton(QgsMergeAttributesDialogBase);
        mRemoveFeatureFromSelectionButton->setObjectName(QStringLiteral("mRemoveFeatureFromSelectionButton"));

        horizontalLayout_2->addWidget(mRemoveFeatureFromSelectionButton);

        mRemoveFeatureFromSelectionLabel = new QLabel(QgsMergeAttributesDialogBase);
        mRemoveFeatureFromSelectionLabel->setObjectName(QStringLiteral("mRemoveFeatureFromSelectionLabel"));

        horizontalLayout_2->addWidget(mRemoveFeatureFromSelectionLabel);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMergeAttributesDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mSkipAllButton = new QPushButton(QgsMergeAttributesDialogBase);
        mSkipAllButton->setObjectName(QStringLiteral("mSkipAllButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionSelectPan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSkipAllButton->setIcon(icon);

        horizontalLayout_3->addWidget(mSkipAllButton);

        mRemoveFeatureFromSelectionLabel_2 = new QLabel(QgsMergeAttributesDialogBase);
        mRemoveFeatureFromSelectionLabel_2->setObjectName(QStringLiteral("mRemoveFeatureFromSelectionLabel_2"));

        horizontalLayout_3->addWidget(mRemoveFeatureFromSelectionLabel_2);

        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mTakeSelectedAttributesLabel->setBuddy(mFromSelectedPushButton);
        mRemoveFeatureFromSelectionLabel->setBuddy(mRemoveFeatureFromSelectionButton);
        mRemoveFeatureFromSelectionLabel_2->setBuddy(mRemoveFeatureFromSelectionButton);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTableWidget, mFromSelectedPushButton);
        QWidget::setTabOrder(mFromSelectedPushButton, mSkipAllButton);
        QWidget::setTabOrder(mSkipAllButton, mRemoveFeatureFromSelectionButton);
        QWidget::setTabOrder(mRemoveFeatureFromSelectionButton, buttonBox);

        retranslateUi(QgsMergeAttributesDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMergeAttributesDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMergeAttributesDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMergeAttributesDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMergeAttributesDialogBase)
    {
        QgsMergeAttributesDialogBase->setWindowTitle(QApplication::translate("QgsMergeAttributesDialogBase", "Merge Feature Attributes", Q_NULLPTR));
        mFromSelectedPushButton->setText(QString());
        mTakeSelectedAttributesLabel->setText(QApplication::translate("QgsMergeAttributesDialogBase", "Take attributes from selected feature", Q_NULLPTR));
        mRemoveFeatureFromSelectionButton->setText(QString());
        mRemoveFeatureFromSelectionLabel->setText(QApplication::translate("QgsMergeAttributesDialogBase", "Remove feature from selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSkipAllButton->setToolTip(QApplication::translate("QgsMergeAttributesDialogBase", "Resets all fields to \"Skip\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSkipAllButton->setText(QString());
        mRemoveFeatureFromSelectionLabel_2->setText(QApplication::translate("QgsMergeAttributesDialogBase", "Skip all fields", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMergeAttributesDialogBase: public Ui_QgsMergeAttributesDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMERGEATTRIBUTESDIALOGBASE_H
