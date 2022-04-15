/********************************************************************************
** Form generated from reading UI file 'qgsbrowserlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERLAYERPROPERTIESBASE_H
#define UI_QGSBROWSERLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsattributetableview.h"
#include "qgsmapcanvas.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *mMetadataTextBrowser;
    QWidget *mPreviewTab;
    QHBoxLayout *horizontalLayout;
    QgsMapCanvas *mMapCanvas;
    QWidget *mAttributesTab;
    QHBoxLayout *horizontalLayout_2;
    QgsAttributeTableView *mAttributeTable;
    QLabel *mNoticeLabel;

    void setupUi(QWidget *QgsBrowserLayerPropertiesBase)
    {
        if (QgsBrowserLayerPropertiesBase->objectName().isEmpty())
            QgsBrowserLayerPropertiesBase->setObjectName(QStringLiteral("QgsBrowserLayerPropertiesBase"));
        QgsBrowserLayerPropertiesBase->resize(800, 703);
        verticalLayout = new QVBoxLayout(QgsBrowserLayerPropertiesBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mTabWidget = new QTabWidget(QgsBrowserLayerPropertiesBase);
        mTabWidget->setObjectName(QStringLiteral("mTabWidget"));
        mTabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mMetadataTextBrowser = new QTextBrowser(tab);
        mMetadataTextBrowser->setObjectName(QStringLiteral("mMetadataTextBrowser"));

        verticalLayout_2->addWidget(mMetadataTextBrowser);

        mTabWidget->addTab(tab, QString());
        mPreviewTab = new QWidget();
        mPreviewTab->setObjectName(QStringLiteral("mPreviewTab"));
        horizontalLayout = new QHBoxLayout(mPreviewTab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mMapCanvas = new QgsMapCanvas(mPreviewTab);
        mMapCanvas->setObjectName(QStringLiteral("mMapCanvas"));

        horizontalLayout->addWidget(mMapCanvas);

        mTabWidget->addTab(mPreviewTab, QString());
        mAttributesTab = new QWidget();
        mAttributesTab->setObjectName(QStringLiteral("mAttributesTab"));
        horizontalLayout_2 = new QHBoxLayout(mAttributesTab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mAttributeTable = new QgsAttributeTableView(mAttributesTab);
        mAttributeTable->setObjectName(QStringLiteral("mAttributeTable"));

        horizontalLayout_2->addWidget(mAttributeTable);

        mTabWidget->addTab(mAttributesTab, QString());

        verticalLayout->addWidget(mTabWidget);

        mNoticeLabel = new QLabel(QgsBrowserLayerPropertiesBase);
        mNoticeLabel->setObjectName(QStringLiteral("mNoticeLabel"));
        mNoticeLabel->setEnabled(true);

        verticalLayout->addWidget(mNoticeLabel);


        retranslateUi(QgsBrowserLayerPropertiesBase);

        mTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsBrowserLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsBrowserLayerPropertiesBase)
    {
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QApplication::translate("QgsBrowserLayerPropertiesBase", "Metadata", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mPreviewTab), QApplication::translate("QgsBrowserLayerPropertiesBase", "Preview", Q_NULLPTR));
        mTabWidget->setTabText(mTabWidget->indexOf(mAttributesTab), QApplication::translate("QgsBrowserLayerPropertiesBase", "Attributes", Q_NULLPTR));
        mNoticeLabel->setText(QApplication::translate("QgsBrowserLayerPropertiesBase", "notice", Q_NULLPTR));
        Q_UNUSED(QgsBrowserLayerPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserLayerPropertiesBase: public Ui_QgsBrowserLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERLAYERPROPERTIESBASE_H
