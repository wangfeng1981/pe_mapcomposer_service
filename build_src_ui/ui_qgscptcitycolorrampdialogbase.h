/********************************************************************************
** Form generated from reading UI file 'qgscptcitycolorrampdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCPTCITYCOLORRAMPDIALOGBASE_H
#define UI_QGSCPTCITYCOLORRAMPDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCptCityColorRampDialogBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabBar *tabBar;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QSplitter *mSplitter;
    QTreeView *mTreeView;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QListWidget *mListWidget;
    QLabel *lblCollectionInfo;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lblSchemePath;
    QLabel *label_6;
    QLabel *lblPreview;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblSchemeName;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cboVariantName;
    QLineEdit *lblLicensePreview;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblAuthorName;
    QLabel *label_3;
    QLabel *lblSrcLink;
    QLabel *label_5;
    QTextEdit *lblLicenseName;
    QToolButton *pbtnLicenseDetails;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QTreeView *mBrowserView;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cboConvertStandard;
    QSpacerItem *horizontalSpacer_6;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsCptCityColorRampDialogBase)
    {
        if (QgsCptCityColorRampDialogBase->objectName().isEmpty())
            QgsCptCityColorRampDialogBase->setObjectName(QStringLiteral("QgsCptCityColorRampDialogBase"));
        QgsCptCityColorRampDialogBase->resize(800, 580);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(QgsCptCityColorRampDialogBase->sizePolicy().hasHeightForWidth());
        QgsCptCityColorRampDialogBase->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(QgsCptCityColorRampDialogBase);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        tabBar = new QTabBar(QgsCptCityColorRampDialogBase);
        tabBar->setObjectName(QStringLiteral("tabBar"));

        verticalLayout_4->addWidget(tabBar);

        mStackedWidget = new QStackedWidget(QgsCptCityColorRampDialogBase);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        mStackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mSplitter = new QSplitter(page);
        mSplitter->setObjectName(QStringLiteral("mSplitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSplitter->sizePolicy().hasHeightForWidth());
        mSplitter->setSizePolicy(sizePolicy1);
        mSplitter->setOrientation(Qt::Horizontal);
        mSplitter->setChildrenCollapsible(false);
        mTreeView = new QTreeView(mSplitter);
        mTreeView->setObjectName(QStringLiteral("mTreeView"));
        sizePolicy1.setHeightForWidth(mTreeView->sizePolicy().hasHeightForWidth());
        mTreeView->setSizePolicy(sizePolicy1);
        mSplitter->addWidget(mTreeView);
        widget = new QWidget(mSplitter);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 0, 5, 0);
        mListWidget = new QListWidget(widget);
        mListWidget->setObjectName(QStringLiteral("mListWidget"));
        sizePolicy1.setHeightForWidth(mListWidget->sizePolicy().hasHeightForWidth());
        mListWidget->setSizePolicy(sizePolicy1);
        mListWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        mListWidget->setIconSize(QSize(75, 50));
        mListWidget->setTextElideMode(Qt::ElideRight);
        mListWidget->setMovement(QListView::Static);
        mListWidget->setResizeMode(QListView::Adjust);
        mListWidget->setSpacing(5);
        mListWidget->setGridSize(QSize(100, 75));
        mListWidget->setViewMode(QListView::IconMode);
        mListWidget->setUniformItemSizes(false);
        mListWidget->setWordWrap(true);

        gridLayout_3->addWidget(mListWidget, 2, 0, 1, 1);

        lblCollectionInfo = new QLabel(widget);
        lblCollectionInfo->setObjectName(QStringLiteral("lblCollectionInfo"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblCollectionInfo->sizePolicy().hasHeightForWidth());
        lblCollectionInfo->setSizePolicy(sizePolicy3);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        lblCollectionInfo->setFont(font);

        gridLayout_3->addWidget(lblCollectionInfo, 1, 0, 1, 1);

        mSplitter->addWidget(widget);

        verticalLayout_5->addWidget(mSplitter);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMaximumSize(QSize(16777215, 150));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lblSchemePath = new QLineEdit(tab);
        lblSchemePath->setObjectName(QStringLiteral("lblSchemePath"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lblSchemePath->sizePolicy().hasHeightForWidth());
        lblSchemePath->setSizePolicy(sizePolicy5);
        lblSchemePath->setMinimumSize(QSize(0, 0));
        lblSchemePath->setReadOnly(true);

        gridLayout->addWidget(lblSchemePath, 1, 2, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        lblPreview = new QLabel(tab);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy6);
        lblPreview->setMinimumSize(QSize(300, 50));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Plain);
        lblPreview->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPreview, 0, 4, 2, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        lblSchemeName = new QLabel(tab);
        lblSchemeName->setObjectName(QStringLiteral("lblSchemeName"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lblSchemeName->sizePolicy().hasHeightForWidth());
        lblSchemeName->setSizePolicy(sizePolicy7);
        lblSchemeName->setMinimumSize(QSize(100, 0));
        lblSchemeName->setWordWrap(true);

        horizontalLayout_2->addWidget(lblSchemeName);

        horizontalSpacer_2 = new QSpacerItem(5, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cboVariantName = new QComboBox(tab);
        cboVariantName->setObjectName(QStringLiteral("cboVariantName"));
        cboVariantName->setEnabled(false);
        sizePolicy7.setHeightForWidth(cboVariantName->sizePolicy().hasHeightForWidth());
        cboVariantName->setSizePolicy(sizePolicy7);
        cboVariantName->setMinimumSize(QSize(200, 0));
        cboVariantName->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(cboVariantName);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        lblLicensePreview = new QLineEdit(tab);
        lblLicensePreview->setObjectName(QStringLiteral("lblLicensePreview"));
        lblLicensePreview->setReadOnly(true);

        gridLayout->addWidget(lblLicensePreview, 2, 2, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        lblAuthorName = new QLabel(tab_2);
        lblAuthorName->setObjectName(QStringLiteral("lblAuthorName"));
        lblAuthorName->setWordWrap(true);

        gridLayout_6->addWidget(lblAuthorName, 0, 2, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_6->addWidget(label_3, 1, 0, 1, 1);

        lblSrcLink = new QLabel(tab_2);
        lblSrcLink->setObjectName(QStringLiteral("lblSrcLink"));
        lblSrcLink->setWordWrap(true);

        gridLayout_6->addWidget(lblSrcLink, 1, 2, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_5, 2, 0, 1, 1);

        lblLicenseName = new QTextEdit(tab_2);
        lblLicenseName->setObjectName(QStringLiteral("lblLicenseName"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lblLicenseName->sizePolicy().hasHeightForWidth());
        lblLicenseName->setSizePolicy(sizePolicy8);
        lblLicenseName->setReadOnly(true);
        lblLicenseName->setAcceptRichText(false);

        gridLayout_6->addWidget(lblLicenseName, 2, 2, 2, 1);

        pbtnLicenseDetails = new QToolButton(tab_2);
        pbtnLicenseDetails->setObjectName(QStringLiteral("pbtnLicenseDetails"));

        gridLayout_6->addWidget(pbtnLicenseDetails, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        lblSrcLink->raise();
        label_4->raise();
        label_5->raise();
        lblLicenseName->raise();
        lblAuthorName->raise();
        pbtnLicenseDetails->raise();
        label_3->raise();

        verticalLayout_5->addWidget(tabWidget);


        verticalLayout_3->addLayout(verticalLayout_5);

        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mBrowserView = new QTreeView(page_2);
        mBrowserView->setObjectName(QStringLiteral("mBrowserView"));

        gridLayout_2->addWidget(mBrowserView, 0, 0, 1, 1);

        mStackedWidget->addWidget(page_2);

        verticalLayout_4->addWidget(mStackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cboConvertStandard = new QCheckBox(QgsCptCityColorRampDialogBase);
        cboConvertStandard->setObjectName(QStringLiteral("cboConvertStandard"));

        horizontalLayout_3->addWidget(cboConvertStandard);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        mButtonBox = new QDialogButtonBox(QgsCptCityColorRampDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(mButtonBox);


        verticalLayout_4->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(mTreeView, mListWidget);
        QWidget::setTabOrder(mListWidget, tabWidget);
        QWidget::setTabOrder(tabWidget, cboVariantName);
        QWidget::setTabOrder(cboVariantName, lblSchemePath);
        QWidget::setTabOrder(lblSchemePath, lblLicensePreview);
        QWidget::setTabOrder(lblLicensePreview, lblLicenseName);
        QWidget::setTabOrder(lblLicenseName, pbtnLicenseDetails);
        QWidget::setTabOrder(pbtnLicenseDetails, cboConvertStandard);
        QWidget::setTabOrder(cboConvertStandard, mButtonBox);
        QWidget::setTabOrder(mButtonBox, mBrowserView);

        retranslateUi(QgsCptCityColorRampDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsCptCityColorRampDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsCptCityColorRampDialogBase, SLOT(reject()));

        mStackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsCptCityColorRampDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCptCityColorRampDialogBase)
    {
        QgsCptCityColorRampDialogBase->setWindowTitle(QApplication::translate("QgsCptCityColorRampDialogBase", "Cpt-city Color Ramp", Q_NULLPTR));
        lblCollectionInfo->setText(QString());
        label->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "License", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "Palette", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "Path", Q_NULLPTR));
        lblPreview->setText(QString());
        lblSchemeName->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsCptCityColorRampDialogBase", "Selection and Preview", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "Author(s)", Q_NULLPTR));
        lblAuthorName->setText(QString());
        label_3->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "Source", Q_NULLPTR));
        lblSrcLink->setText(QString());
        label_5->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "License", Q_NULLPTR));
        pbtnLicenseDetails->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "Details", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsCptCityColorRampDialogBase", "Information", Q_NULLPTR));
        cboConvertStandard->setText(QApplication::translate("QgsCptCityColorRampDialogBase", "Save as standard gradient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCptCityColorRampDialogBase: public Ui_QgsCptCityColorRampDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCPTCITYCOLORRAMPDIALOGBASE_H
