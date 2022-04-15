/********************************************************************************
** Form generated from reading UI file 'qgsprocessingalgorithmdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGALGORITHMDIALOGBASE_H
#define UI_QGSPROCESSINGALGORITHMDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspanelwidgetstack.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTabWidget *mTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QgsPanelWidgetStack *mPanelStack;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *txtLog;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mButtonSaveLog;
    QToolButton *mButtonCopyLog;
    QToolButton *mButtonClearLog;
    QTextBrowser *textShortHelp;
    QLabel *lblProgress;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar;
    QPushButton *buttonCancel;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsProcessingDialogBase)
    {
        if (QgsProcessingDialogBase->objectName().isEmpty())
            QgsProcessingDialogBase->setObjectName(QStringLiteral("QgsProcessingDialogBase"));
        QgsProcessingDialogBase->resize(688, 523);
        QgsProcessingDialogBase->setWindowTitle(QStringLiteral("Dialog"));
        verticalLayout = new QVBoxLayout(QgsProcessingDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(QgsProcessingDialogBase);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(16);
        mTabWidget = new QTabWidget(splitter);
        mTabWidget->setObjectName(QStringLiteral("mTabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTabWidget->sizePolicy().hasHeightForWidth());
        mTabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mPanelStack = new QgsPanelWidgetStack(tab);
        mPanelStack->setObjectName(QStringLiteral("mPanelStack"));

        verticalLayout_4->addWidget(mPanelStack);

        mTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        txtLog = new QTextEdit(tab_2);
        txtLog->setObjectName(QStringLiteral("txtLog"));
        txtLog->setReadOnly(true);

        verticalLayout_2->addWidget(txtLog);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mButtonSaveLog = new QToolButton(tab_2);
        mButtonSaveLog->setObjectName(QStringLiteral("mButtonSaveLog"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonSaveLog->setIcon(icon);
        mButtonSaveLog->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonSaveLog);

        mButtonCopyLog = new QToolButton(tab_2);
        mButtonCopyLog->setObjectName(QStringLiteral("mButtonCopyLog"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopyLog->setIcon(icon1);
        mButtonCopyLog->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonCopyLog);

        mButtonClearLog = new QToolButton(tab_2);
        mButtonClearLog->setObjectName(QStringLiteral("mButtonClearLog"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/console/iconClearConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonClearLog->setIcon(icon2);
        mButtonClearLog->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonClearLog);


        verticalLayout_2->addLayout(horizontalLayout);

        mTabWidget->addTab(tab_2, QString());
        splitter->addWidget(mTabWidget);
        textShortHelp = new QTextBrowser(splitter);
        textShortHelp->setObjectName(QStringLiteral("textShortHelp"));
        sizePolicy.setHeightForWidth(textShortHelp->sizePolicy().hasHeightForWidth());
        textShortHelp->setSizePolicy(sizePolicy);
        textShortHelp->setOpenLinks(false);
        splitter->addWidget(textShortHelp);

        verticalLayout->addWidget(splitter);

        lblProgress = new QLabel(QgsProcessingDialogBase);
        lblProgress->setObjectName(QStringLiteral("lblProgress"));

        verticalLayout->addWidget(lblProgress);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        progressBar = new QProgressBar(QgsProcessingDialogBase);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);

        buttonCancel = new QPushButton(QgsProcessingDialogBase);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_3->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout_3);

        mButtonBox = new QDialogButtonBox(QgsProcessingDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Yes);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsProcessingDialogBase);

        mTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProcessingDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProcessingDialogBase)
    {
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QApplication::translate("QgsProcessingDialogBase", "Parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonSaveLog->setToolTip(QApplication::translate("QgsProcessingDialogBase", "Save Log to File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonSaveLog->setText(QApplication::translate("QgsProcessingDialogBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonCopyLog->setToolTip(QApplication::translate("QgsProcessingDialogBase", "Copy Log to Clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonCopyLog->setText(QApplication::translate("QgsProcessingDialogBase", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonClearLog->setToolTip(QApplication::translate("QgsProcessingDialogBase", "Clear Log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonClearLog->setText(QApplication::translate("QgsProcessingDialogBase", "\342\200\246", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(tab_2), QApplication::translate("QgsProcessingDialogBase", "Log", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        textShortHelp->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lblProgress->setText(QString());
        buttonCancel->setText(QApplication::translate("QgsProcessingDialogBase", "Cancel", Q_NULLPTR));
        Q_UNUSED(QgsProcessingDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingDialogBase: public Ui_QgsProcessingDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGALGORITHMDIALOGBASE_H
