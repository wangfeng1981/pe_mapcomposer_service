/********************************************************************************
** Form generated from reading UI file 'qgspalettedrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPALETTEDRENDERERWIDGETBASE_H
#define UI_QGSPALETTEDRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qgscolorrampbutton.h"
#include "raster/qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPalettedRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mClassifyButton;
    QPushButton *mAddEntryButton;
    QPushButton *mDeleteEntryButton;
    QPushButton *mButtonDeleteAll;
    QToolButton *mButtonAdvanced;
    QTreeView *mTreeView;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *mCalculatingProgressBar;
    QPushButton *mCancelButton;
    QGridLayout *gridLayout_3;
    QLabel *mBandLabel;
    QgsRasterBandComboBox *mBandComboBox;
    QgsColorRampButton *btnColorRamp;
    QLabel *mBandLabel_2;

    void setupUi(QWidget *QgsPalettedRendererWidgetBase)
    {
        if (QgsPalettedRendererWidgetBase->objectName().isEmpty())
            QgsPalettedRendererWidgetBase->setObjectName(QStringLiteral("QgsPalettedRendererWidgetBase"));
        QgsPalettedRendererWidgetBase->resize(277, 459);
        QgsPalettedRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsPalettedRendererWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mClassifyButton = new QPushButton(QgsPalettedRendererWidgetBase);
        mClassifyButton->setObjectName(QStringLiteral("mClassifyButton"));

        horizontalLayout_4->addWidget(mClassifyButton);

        mAddEntryButton = new QPushButton(QgsPalettedRendererWidgetBase);
        mAddEntryButton->setObjectName(QStringLiteral("mAddEntryButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddEntryButton->sizePolicy().hasHeightForWidth());
        mAddEntryButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddEntryButton->setIcon(icon);

        horizontalLayout_4->addWidget(mAddEntryButton);

        mDeleteEntryButton = new QPushButton(QgsPalettedRendererWidgetBase);
        mDeleteEntryButton->setObjectName(QStringLiteral("mDeleteEntryButton"));
        sizePolicy.setHeightForWidth(mDeleteEntryButton->sizePolicy().hasHeightForWidth());
        mDeleteEntryButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteEntryButton->setIcon(icon1);

        horizontalLayout_4->addWidget(mDeleteEntryButton);

        mButtonDeleteAll = new QPushButton(QgsPalettedRendererWidgetBase);
        mButtonDeleteAll->setObjectName(QStringLiteral("mButtonDeleteAll"));

        horizontalLayout_4->addWidget(mButtonDeleteAll);

        mButtonAdvanced = new QToolButton(QgsPalettedRendererWidgetBase);
        mButtonAdvanced->setObjectName(QStringLiteral("mButtonAdvanced"));
        mButtonAdvanced->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_4->addWidget(mButtonAdvanced);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(3, 1);

        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        mTreeView = new QTreeView(QgsPalettedRendererWidgetBase);
        mTreeView->setObjectName(QStringLiteral("mTreeView"));
        mTreeView->setMinimumSize(QSize(0, 280));

        gridLayout->addWidget(mTreeView, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mCalculatingProgressBar = new QProgressBar(QgsPalettedRendererWidgetBase);
        mCalculatingProgressBar->setObjectName(QStringLiteral("mCalculatingProgressBar"));
        mCalculatingProgressBar->setValue(0);

        horizontalLayout_3->addWidget(mCalculatingProgressBar);

        mCancelButton = new QPushButton(QgsPalettedRendererWidgetBase);
        mCancelButton->setObjectName(QStringLiteral("mCancelButton"));

        horizontalLayout_3->addWidget(mCancelButton);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, -1);
        mBandLabel = new QLabel(QgsPalettedRendererWidgetBase);
        mBandLabel->setObjectName(QStringLiteral("mBandLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mBandLabel->sizePolicy().hasHeightForWidth());
        mBandLabel->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mBandLabel, 0, 0, 1, 1);

        mBandComboBox = new QgsRasterBandComboBox(QgsPalettedRendererWidgetBase);
        mBandComboBox->setObjectName(QStringLiteral("mBandComboBox"));

        gridLayout_3->addWidget(mBandComboBox, 0, 1, 1, 1);

        btnColorRamp = new QgsColorRampButton(QgsPalettedRendererWidgetBase);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy2);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnColorRamp, 1, 1, 1, 1);

        mBandLabel_2 = new QLabel(QgsPalettedRendererWidgetBase);
        mBandLabel_2->setObjectName(QStringLiteral("mBandLabel_2"));
        sizePolicy1.setHeightForWidth(mBandLabel_2->sizePolicy().hasHeightForWidth());
        mBandLabel_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mBandLabel_2, 1, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);

        QWidget::setTabOrder(mBandComboBox, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, mTreeView);
        QWidget::setTabOrder(mTreeView, mClassifyButton);
        QWidget::setTabOrder(mClassifyButton, mAddEntryButton);
        QWidget::setTabOrder(mAddEntryButton, mDeleteEntryButton);
        QWidget::setTabOrder(mDeleteEntryButton, mButtonDeleteAll);
        QWidget::setTabOrder(mButtonDeleteAll, mButtonAdvanced);
        QWidget::setTabOrder(mButtonAdvanced, mCancelButton);

        retranslateUi(QgsPalettedRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPalettedRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPalettedRendererWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        mClassifyButton->setToolTip(QApplication::translate("QgsPalettedRendererWidgetBase", "Adds all missing unique values from the raster", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mClassifyButton->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "Classify", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAddEntryButton->setToolTip(QApplication::translate("QgsPalettedRendererWidgetBase", "Add values manually", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mDeleteEntryButton->setToolTip(QApplication::translate("QgsPalettedRendererWidgetBase", "Remove selected row(s)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonDeleteAll->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "Delete All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonAdvanced->setToolTip(QApplication::translate("QgsPalettedRendererWidgetBase", "Advanced options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAdvanced->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "\342\200\246", Q_NULLPTR));
        mCancelButton->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "Cancel", Q_NULLPTR));
        mBandLabel->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "Band", Q_NULLPTR));
        mBandLabel_2->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "Color ramp", Q_NULLPTR));
        Q_UNUSED(QgsPalettedRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPalettedRendererWidgetBase: public Ui_QgsPalettedRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPALETTEDRENDERERWIDGETBASE_H
