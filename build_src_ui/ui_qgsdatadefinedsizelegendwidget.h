/********************************************************************************
** Form generated from reading UI file 'qgsdatadefinedsizelegendwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATADEFINEDSIZELEGENDWIDGET_H
#define UI_QGSDATADEFINEDSIZELEGENDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDataDefinedSizeLegendWidget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *radDisabled;
    QRadioButton *radSeparated;
    QRadioButton *radCollapsed;
    QPushButton *btnChangeSymbol;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *editTitle;
    QGroupBox *groupManualSizeClasses;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnAddClass;
    QToolButton *btnRemoveClass;
    QSpacerItem *horizontalSpacer;
    QTreeView *viewSizeClasses;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboAlignSymbols;
    QTreeView *viewLayerTree;

    void setupUi(QWidget *QgsDataDefinedSizeLegendWidget)
    {
        if (QgsDataDefinedSizeLegendWidget->objectName().isEmpty())
            QgsDataDefinedSizeLegendWidget->setObjectName(QStringLiteral("QgsDataDefinedSizeLegendWidget"));
        QgsDataDefinedSizeLegendWidget->resize(718, 749);
        horizontalLayout_4 = new QHBoxLayout(QgsDataDefinedSizeLegendWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radDisabled = new QRadioButton(QgsDataDefinedSizeLegendWidget);
        radDisabled->setObjectName(QStringLiteral("radDisabled"));
        radDisabled->setChecked(true);

        verticalLayout->addWidget(radDisabled);

        radSeparated = new QRadioButton(QgsDataDefinedSizeLegendWidget);
        radSeparated->setObjectName(QStringLiteral("radSeparated"));

        verticalLayout->addWidget(radSeparated);

        radCollapsed = new QRadioButton(QgsDataDefinedSizeLegendWidget);
        radCollapsed->setObjectName(QStringLiteral("radCollapsed"));

        verticalLayout->addWidget(radCollapsed);

        btnChangeSymbol = new QPushButton(QgsDataDefinedSizeLegendWidget);
        btnChangeSymbol->setObjectName(QStringLiteral("btnChangeSymbol"));

        verticalLayout->addWidget(btnChangeSymbol);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(QgsDataDefinedSizeLegendWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        editTitle = new QLineEdit(QgsDataDefinedSizeLegendWidget);
        editTitle->setObjectName(QStringLiteral("editTitle"));

        horizontalLayout_3->addWidget(editTitle);


        verticalLayout->addLayout(horizontalLayout_3);

        groupManualSizeClasses = new QGroupBox(QgsDataDefinedSizeLegendWidget);
        groupManualSizeClasses->setObjectName(QStringLiteral("groupManualSizeClasses"));
        groupManualSizeClasses->setCheckable(true);
        groupManualSizeClasses->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(groupManualSizeClasses);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnAddClass = new QToolButton(groupManualSizeClasses);
        btnAddClass->setObjectName(QStringLiteral("btnAddClass"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddClass->setIcon(icon);

        horizontalLayout_2->addWidget(btnAddClass);

        btnRemoveClass = new QToolButton(groupManualSizeClasses);
        btnRemoveClass->setObjectName(QStringLiteral("btnRemoveClass"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveClass->setIcon(icon1);

        horizontalLayout_2->addWidget(btnRemoveClass);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        viewSizeClasses = new QTreeView(groupManualSizeClasses);
        viewSizeClasses->setObjectName(QStringLiteral("viewSizeClasses"));
        viewSizeClasses->setRootIsDecorated(false);

        verticalLayout_2->addWidget(viewSizeClasses);


        verticalLayout->addWidget(groupManualSizeClasses);

        groupBox = new QGroupBox(QgsDataDefinedSizeLegendWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cboAlignSymbols = new QComboBox(groupBox);
        cboAlignSymbols->setObjectName(QStringLiteral("cboAlignSymbols"));

        horizontalLayout->addWidget(cboAlignSymbols);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_4->addLayout(verticalLayout);

        viewLayerTree = new QTreeView(QgsDataDefinedSizeLegendWidget);
        viewLayerTree->setObjectName(QStringLiteral("viewLayerTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewLayerTree->sizePolicy().hasHeightForWidth());
        viewLayerTree->setSizePolicy(sizePolicy);
        viewLayerTree->setHeaderHidden(true);

        horizontalLayout_4->addWidget(viewLayerTree);

        QWidget::setTabOrder(radDisabled, radSeparated);
        QWidget::setTabOrder(radSeparated, radCollapsed);
        QWidget::setTabOrder(radCollapsed, btnChangeSymbol);
        QWidget::setTabOrder(btnChangeSymbol, editTitle);
        QWidget::setTabOrder(editTitle, groupManualSizeClasses);
        QWidget::setTabOrder(groupManualSizeClasses, btnAddClass);
        QWidget::setTabOrder(btnAddClass, btnRemoveClass);
        QWidget::setTabOrder(btnRemoveClass, viewSizeClasses);
        QWidget::setTabOrder(viewSizeClasses, cboAlignSymbols);
        QWidget::setTabOrder(cboAlignSymbols, viewLayerTree);

        retranslateUi(QgsDataDefinedSizeLegendWidget);

        QMetaObject::connectSlotsByName(QgsDataDefinedSizeLegendWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsDataDefinedSizeLegendWidget)
    {
        QgsDataDefinedSizeLegendWidget->setWindowTitle(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Data-defined Size Legend", Q_NULLPTR));
        radDisabled->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Legend not enabled", Q_NULLPTR));
        radSeparated->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Separated legend items", Q_NULLPTR));
        radCollapsed->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Collapsed legend", Q_NULLPTR));
        btnChangeSymbol->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Legend Symbol\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Title", Q_NULLPTR));
        groupManualSizeClasses->setTitle(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Manual size classes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddClass->setToolTip(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Add a class", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddClass->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRemoveClass->setToolTip(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Remove selected class", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveClass->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "\342\200\246", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Options (collapsed only)", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDataDefinedSizeLegendWidget", "Align symbols", Q_NULLPTR));
        cboAlignSymbols->clear();
        cboAlignSymbols->insertItems(0, QStringList()
         << QApplication::translate("QgsDataDefinedSizeLegendWidget", "Bottom", Q_NULLPTR)
         << QApplication::translate("QgsDataDefinedSizeLegendWidget", "Center", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class QgsDataDefinedSizeLegendWidget: public Ui_QgsDataDefinedSizeLegendWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATADEFINEDSIZELEGENDWIDGET_H
