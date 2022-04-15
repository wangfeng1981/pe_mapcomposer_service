/********************************************************************************
** Form generated from reading UI file 'qgsvectortilelayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILELAYERPROPERTIESBASE_H
#define UI_QGSVECTORTILELAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_20;
    QgsWebView *mMetadataViewer;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QWidget *mOptsPage_Labeling;
    QVBoxLayout *verticalLayout_4;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_5;
    QFrame *metadataFrame;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorTileLayerPropertiesBase)
    {
        if (QgsVectorTileLayerPropertiesBase->objectName().isEmpty())
            QgsVectorTileLayerPropertiesBase->setObjectName(QStringLiteral("QgsVectorTileLayerPropertiesBase"));
        QgsVectorTileLayerPropertiesBase->resize(815, 557);
        QgsVectorTileLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsVectorTileLayerPropertiesBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        mOptionsSplitter = new QSplitter(QgsVectorTileLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QStringLiteral("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QStringLiteral("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/labels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QStringLiteral("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setFrameShadow(QFrame::Plain);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QStringLiteral("mOptsPage_Information"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mMetadataViewer = new QgsWebView(mOptsPage_Information);
        mMetadataViewer->setObjectName(QStringLiteral("mMetadataViewer"));

        verticalLayout_20->addWidget(mMetadataViewer);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QStringLiteral("mOptsPage_Style"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Labeling = new QWidget();
        mOptsPage_Labeling->setObjectName(QStringLiteral("mOptsPage_Labeling"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Labeling);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mOptionsStackedWidget->addWidget(mOptsPage_Labeling);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QStringLiteral("mOptsPage_Metadata"));
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QStringLiteral("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsVectorTileLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);

        retranslateUi(QgsVectorTileLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorTileLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorTileLayerPropertiesBase)
    {
        QgsVectorTileLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Vector Tile Layer Properties", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Information", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Symbology", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Symbology", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Labels", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Labels", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Metadata", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsVectorTileLayerPropertiesBase", "Metadata", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileLayerPropertiesBase: public Ui_QgsVectorTileLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILELAYERPROPERTIESBASE_H
