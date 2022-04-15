/********************************************************************************
** Form generated from reading UI file 'qgscustomizationdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMIZATIONDIALOGBASE_H
#define UI_QGSCUSTOMIZATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgsfilterlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_QgsCustomizationDialogBase
{
public:
    QAction *actionCatch;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionExpandAll;
    QAction *actionCollapseAll;
    QAction *actionSelectAll;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mCustomizationEnabledCheckBox;
    QgsFilterLineEdit *mLeFilter;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QgsCustomizationDialogBase)
    {
        if (QgsCustomizationDialogBase->objectName().isEmpty())
            QgsCustomizationDialogBase->setObjectName(QStringLiteral("QgsCustomizationDialogBase"));
        QgsCustomizationDialogBase->resize(503, 370);
        actionCatch = new QAction(QgsCustomizationDialogBase);
        actionCatch->setObjectName(QStringLiteral("actionCatch"));
        actionCatch->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCatch->setIcon(icon);
        actionSave = new QAction(QgsCustomizationDialogBase);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionLoad = new QAction(QgsCustomizationDialogBase);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon2);
        actionExpandAll = new QAction(QgsCustomizationDialogBase);
        actionExpandAll->setObjectName(QStringLiteral("actionExpandAll"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExpandAll->setIcon(icon3);
        actionCollapseAll = new QAction(QgsCustomizationDialogBase);
        actionCollapseAll->setObjectName(QStringLiteral("actionCollapseAll"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollapseAll->setIcon(icon4);
        actionSelectAll = new QAction(QgsCustomizationDialogBase);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionSelectAllTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon5);
        centralwidget = new QWidget(QgsCustomizationDialogBase);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mCustomizationEnabledCheckBox = new QCheckBox(centralwidget);
        mCustomizationEnabledCheckBox->setObjectName(QStringLiteral("mCustomizationEnabledCheckBox"));

        verticalLayout_2->addWidget(mCustomizationEnabledCheckBox);

        mLeFilter = new QgsFilterLineEdit(centralwidget);
        mLeFilter->setObjectName(QStringLiteral("mLeFilter"));

        verticalLayout_2->addWidget(mLeFilter);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setVisible(true);

        verticalLayout_2->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(buttonBox);

        QgsCustomizationDialogBase->setCentralWidget(centralwidget);
        toolBar = new QToolBar(QgsCustomizationDialogBase);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(24, 24));
        QgsCustomizationDialogBase->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionCatch);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionLoad);
        toolBar->addAction(actionExpandAll);
        toolBar->addAction(actionCollapseAll);
        toolBar->addAction(actionSelectAll);

        retranslateUi(QgsCustomizationDialogBase);

        QMetaObject::connectSlotsByName(QgsCustomizationDialogBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsCustomizationDialogBase)
    {
        QgsCustomizationDialogBase->setWindowTitle(QApplication::translate("QgsCustomizationDialogBase", "Interface Customization", Q_NULLPTR));
        actionCatch->setText(QApplication::translate("QgsCustomizationDialogBase", "Catch", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCatch->setToolTip(QApplication::translate("QgsCustomizationDialogBase", "Switch to catching widgets in main application", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("QgsCustomizationDialogBase", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("QgsCustomizationDialogBase", "Save to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLoad->setText(QApplication::translate("QgsCustomizationDialogBase", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLoad->setToolTip(QApplication::translate("QgsCustomizationDialogBase", "Load from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExpandAll->setText(QApplication::translate("QgsCustomizationDialogBase", "Expand All", Q_NULLPTR));
        actionCollapseAll->setText(QApplication::translate("QgsCustomizationDialogBase", "Collapse All", Q_NULLPTR));
        actionSelectAll->setText(QApplication::translate("QgsCustomizationDialogBase", "Check All", Q_NULLPTR));
        mCustomizationEnabledCheckBox->setText(QApplication::translate("QgsCustomizationDialogBase", "Enable customization", Q_NULLPTR));
        mLeFilter->setPlaceholderText(QApplication::translate("QgsCustomizationDialogBase", "Search\342\200\246", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("QgsCustomizationDialogBase", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomizationDialogBase: public Ui_QgsCustomizationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMIZATIONDIALOGBASE_H
