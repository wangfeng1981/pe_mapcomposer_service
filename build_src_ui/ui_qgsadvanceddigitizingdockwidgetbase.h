/********************************************************************************
** Form generated from reading UI file 'qgsadvanceddigitizingdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H
#define UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedDigitizingDockWidgetBase
{
public:
    QAction *mToggleFloaterAction;
    QWidget *dockWidgetContents;
    QAction *mEnableAction;
    QAction *mConstructionModeAction;
    QAction *mParallelAction;
    QAction *mPerpendicularAction;
    QAction *mSettingsAction;
    QVBoxLayout *parentLayout;
    QToolBar *mToolbar;
    QVBoxLayout *mLayout;
    QLabel *mErrorLabel;
    QWidget *mCadWidget;
    QVBoxLayout *verticalLayout;
    QWidget *mInputWidgets;
    QGridLayout *mInputLayout;
    QLabel *label_4;
    QLineEdit *mYLineEdit;
    QToolButton *mLockYButton;
    QToolButton *mLockXButton;
    QToolButton *mRelativeYButton;
    QToolButton *mLockAngleButton;
    QLineEdit *mXLineEdit;
    QLabel *label_2;
    QToolButton *mRelativeAngleButton;
    QLineEdit *mAngleLineEdit;
    QLabel *label_3;
    QLabel *label;
    QToolButton *mLockDistanceButton;
    QLineEdit *mDistanceLineEdit;
    QToolButton *mRelativeXButton;
    QToolButton *mRepeatingLockDistanceButton;
    QToolButton *mRepeatingLockAngleButton;
    QToolButton *mRepeatingLockXButton;
    QToolButton *mRepeatingLockYButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsDockWidget *QgsAdvancedDigitizingDockWidgetBase)
    {
        if (QgsAdvancedDigitizingDockWidgetBase->objectName().isEmpty())
            QgsAdvancedDigitizingDockWidgetBase->setObjectName(QStringLiteral("QgsAdvancedDigitizingDockWidgetBase"));
        QgsAdvancedDigitizingDockWidgetBase->resize(208, 220);
        QgsAdvancedDigitizingDockWidgetBase->setMaximumSize(QSize(524287, 500));
        mToggleFloaterAction = new QAction(QgsAdvancedDigitizingDockWidgetBase);
        mToggleFloaterAction->setObjectName(QStringLiteral("mToggleFloaterAction"));
        mToggleFloaterAction->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/cadtools/floater.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mToggleFloaterAction->setIcon(icon);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        mEnableAction = new QAction(dockWidgetContents);
        mEnableAction->setObjectName(QStringLiteral("mEnableAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/cadtools/cad.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEnableAction->setIcon(icon1);
        mEnableAction->setCheckable(true);
        mConstructionModeAction = new QAction(dockWidgetContents);
        mConstructionModeAction->setObjectName(QStringLiteral("mConstructionModeAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/cadtools/construction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mConstructionModeAction->setIcon(icon2);
        mConstructionModeAction->setCheckable(true);
        mParallelAction = new QAction(dockWidgetContents);
        mParallelAction->setObjectName(QStringLiteral("mParallelAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/cadtools/parallel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mParallelAction->setIcon(icon3);
        mParallelAction->setCheckable(true);
        mPerpendicularAction = new QAction(dockWidgetContents);
        mPerpendicularAction->setObjectName(QStringLiteral("mPerpendicularAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/cadtools/perpendicular.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPerpendicularAction->setIcon(icon4);
        mPerpendicularAction->setCheckable(true);
        mSettingsAction = new QAction(dockWidgetContents);
        mSettingsAction->setObjectName(QStringLiteral("mSettingsAction"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSettingsAction->setIcon(icon5);
        parentLayout = new QVBoxLayout(dockWidgetContents);
        parentLayout->setSpacing(0);
        parentLayout->setObjectName(QStringLiteral("parentLayout"));
        parentLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(dockWidgetContents);
        mToolbar->setObjectName(QStringLiteral("mToolbar"));
        mToolbar->setIconSize(QSize(16, 16));
        mToolbar->setFloatable(false);

        parentLayout->addWidget(mToolbar);

        mLayout = new QVBoxLayout();
        mLayout->setObjectName(QStringLiteral("mLayout"));
        mErrorLabel = new QLabel(dockWidgetContents);
        mErrorLabel->setObjectName(QStringLiteral("mErrorLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mErrorLabel->sizePolicy().hasHeightForWidth());
        mErrorLabel->setSizePolicy(sizePolicy);
        mErrorLabel->setAlignment(Qt::AlignCenter);
        mErrorLabel->setWordWrap(true);

        mLayout->addWidget(mErrorLabel);

        mCadWidget = new QWidget(dockWidgetContents);
        mCadWidget->setObjectName(QStringLiteral("mCadWidget"));
        verticalLayout = new QVBoxLayout(mCadWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mInputWidgets = new QWidget(mCadWidget);
        mInputWidgets->setObjectName(QStringLiteral("mInputWidgets"));
        mInputLayout = new QGridLayout(mInputWidgets);
        mInputLayout->setSpacing(3);
        mInputLayout->setObjectName(QStringLiteral("mInputLayout"));
        mInputLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(mInputWidgets);
        label_4->setObjectName(QStringLiteral("label_4"));

        mInputLayout->addWidget(label_4, 3, 1, 1, 1);

        mYLineEdit = new QLineEdit(mInputWidgets);
        mYLineEdit->setObjectName(QStringLiteral("mYLineEdit"));

        mInputLayout->addWidget(mYLineEdit, 3, 2, 1, 1);

        mLockYButton = new QToolButton(mInputWidgets);
        mLockYButton->setObjectName(QStringLiteral("mLockYButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/cadtools/lock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLockYButton->setIcon(icon6);
        mLockYButton->setCheckable(true);
        mLockYButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockYButton, 3, 3, 1, 1);

        mLockXButton = new QToolButton(mInputWidgets);
        mLockXButton->setObjectName(QStringLiteral("mLockXButton"));
        mLockXButton->setIcon(icon6);
        mLockXButton->setCheckable(true);
        mLockXButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockXButton, 2, 3, 1, 1);

        mRelativeYButton = new QToolButton(mInputWidgets);
        mRelativeYButton->setObjectName(QStringLiteral("mRelativeYButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/cadtools/delta.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRelativeYButton->setIcon(icon7);
        mRelativeYButton->setCheckable(true);
        mRelativeYButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeYButton, 3, 0, 1, 1);

        mLockAngleButton = new QToolButton(mInputWidgets);
        mLockAngleButton->setObjectName(QStringLiteral("mLockAngleButton"));
        mLockAngleButton->setIcon(icon6);
        mLockAngleButton->setCheckable(true);
        mLockAngleButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockAngleButton, 1, 3, 1, 1);

        mXLineEdit = new QLineEdit(mInputWidgets);
        mXLineEdit->setObjectName(QStringLiteral("mXLineEdit"));

        mInputLayout->addWidget(mXLineEdit, 2, 2, 1, 1);

        label_2 = new QLabel(mInputWidgets);
        label_2->setObjectName(QStringLiteral("label_2"));

        mInputLayout->addWidget(label_2, 1, 1, 1, 1);

        mRelativeAngleButton = new QToolButton(mInputWidgets);
        mRelativeAngleButton->setObjectName(QStringLiteral("mRelativeAngleButton"));
        mRelativeAngleButton->setIcon(icon7);
        mRelativeAngleButton->setCheckable(true);
        mRelativeAngleButton->setChecked(true);
        mRelativeAngleButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeAngleButton, 1, 0, 1, 1);

        mAngleLineEdit = new QLineEdit(mInputWidgets);
        mAngleLineEdit->setObjectName(QStringLiteral("mAngleLineEdit"));

        mInputLayout->addWidget(mAngleLineEdit, 1, 2, 1, 1);

        label_3 = new QLabel(mInputWidgets);
        label_3->setObjectName(QStringLiteral("label_3"));

        mInputLayout->addWidget(label_3, 2, 1, 1, 1);

        label = new QLabel(mInputWidgets);
        label->setObjectName(QStringLiteral("label"));

        mInputLayout->addWidget(label, 0, 1, 1, 1);

        mLockDistanceButton = new QToolButton(mInputWidgets);
        mLockDistanceButton->setObjectName(QStringLiteral("mLockDistanceButton"));
        mLockDistanceButton->setIcon(icon6);
        mLockDistanceButton->setCheckable(true);
        mLockDistanceButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockDistanceButton, 0, 3, 1, 1);

        mDistanceLineEdit = new QLineEdit(mInputWidgets);
        mDistanceLineEdit->setObjectName(QStringLiteral("mDistanceLineEdit"));

        mInputLayout->addWidget(mDistanceLineEdit, 0, 2, 1, 1);

        mRelativeXButton = new QToolButton(mInputWidgets);
        mRelativeXButton->setObjectName(QStringLiteral("mRelativeXButton"));
        mRelativeXButton->setIcon(icon7);
        mRelativeXButton->setCheckable(true);
        mRelativeXButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeXButton, 2, 0, 1, 1);

        mRepeatingLockDistanceButton = new QToolButton(mInputWidgets);
        mRepeatingLockDistanceButton->setObjectName(QStringLiteral("mRepeatingLockDistanceButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/locked_repeating.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRepeatingLockDistanceButton->setIcon(icon8);
        mRepeatingLockDistanceButton->setCheckable(true);
        mRepeatingLockDistanceButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockDistanceButton, 0, 4, 1, 1);

        mRepeatingLockAngleButton = new QToolButton(mInputWidgets);
        mRepeatingLockAngleButton->setObjectName(QStringLiteral("mRepeatingLockAngleButton"));
        mRepeatingLockAngleButton->setIcon(icon8);
        mRepeatingLockAngleButton->setCheckable(true);
        mRepeatingLockAngleButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockAngleButton, 1, 4, 1, 1);

        mRepeatingLockXButton = new QToolButton(mInputWidgets);
        mRepeatingLockXButton->setObjectName(QStringLiteral("mRepeatingLockXButton"));
        mRepeatingLockXButton->setIcon(icon8);
        mRepeatingLockXButton->setCheckable(true);
        mRepeatingLockXButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockXButton, 2, 4, 1, 1);

        mRepeatingLockYButton = new QToolButton(mInputWidgets);
        mRepeatingLockYButton->setObjectName(QStringLiteral("mRepeatingLockYButton"));
        mRepeatingLockYButton->setIcon(icon8);
        mRepeatingLockYButton->setCheckable(true);
        mRepeatingLockYButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockYButton, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mInputLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        verticalLayout->addWidget(mInputWidgets);


        mLayout->addWidget(mCadWidget);


        parentLayout->addLayout(mLayout);

        QgsAdvancedDigitizingDockWidgetBase->setWidget(dockWidgetContents);
        QWidget::setTabOrder(mDistanceLineEdit, mLockDistanceButton);
        QWidget::setTabOrder(mLockDistanceButton, mRepeatingLockDistanceButton);
        QWidget::setTabOrder(mRepeatingLockDistanceButton, mRelativeAngleButton);
        QWidget::setTabOrder(mRelativeAngleButton, mAngleLineEdit);
        QWidget::setTabOrder(mAngleLineEdit, mLockAngleButton);
        QWidget::setTabOrder(mLockAngleButton, mRepeatingLockAngleButton);
        QWidget::setTabOrder(mRepeatingLockAngleButton, mRelativeXButton);
        QWidget::setTabOrder(mRelativeXButton, mXLineEdit);
        QWidget::setTabOrder(mXLineEdit, mLockXButton);
        QWidget::setTabOrder(mLockXButton, mRepeatingLockXButton);
        QWidget::setTabOrder(mRepeatingLockXButton, mRelativeYButton);
        QWidget::setTabOrder(mRelativeYButton, mYLineEdit);
        QWidget::setTabOrder(mYLineEdit, mLockYButton);
        QWidget::setTabOrder(mLockYButton, mRepeatingLockYButton);

        mToolbar->addAction(mEnableAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mConstructionModeAction);
        mToolbar->addAction(mParallelAction);
        mToolbar->addAction(mPerpendicularAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mSettingsAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mToggleFloaterAction);

        retranslateUi(QgsAdvancedDigitizingDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsAdvancedDigitizingDockWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsAdvancedDigitizingDockWidgetBase)
    {
        QgsAdvancedDigitizingDockWidgetBase->setWindowTitle(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Advanced Digitizing", Q_NULLPTR));
        mToggleFloaterAction->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Toggle Floater", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mEnableAction->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "<html><head/><body><p>Enable advanced digitizing tools</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mConstructionModeAction->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mParallelAction->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mPerpendicularAction->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mErrorLabel->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Error", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mYLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLockYButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLockYButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLockXButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLockXButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRelativeYButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRelativeYButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLockAngleButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLockAngleButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mXLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "a", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRelativeAngleButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRelativeAngleButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mAngleLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "x", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "d", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLockDistanceButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLockDistanceButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDistanceLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mRelativeXButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRelativeXButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRepeatingLockDistanceButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRepeatingLockDistanceButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRepeatingLockAngleButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRepeatingLockAngleButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRepeatingLockXButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRepeatingLockXButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRepeatingLockYButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mRepeatingLockYButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedDigitizingDockWidgetBase: public Ui_QgsAdvancedDigitizingDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H
