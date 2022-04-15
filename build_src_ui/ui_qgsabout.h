/********************************************************************************
** Form generated from reading UI file 'qgsabout.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSABOUT_H
#define UI_QGSABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAbout
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_01;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout;
    QLabel *qgisIcon;
    QLabel *TextLabel4;
    QTextBrowser *txtVersion;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *_2;
    QPushButton *btnQgisHome;
    QPushButton *btnQgisUser;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *txtWhatsNew;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *txtProviders;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QListWidget *lstDevelopers;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QListWidget *lstContributors;
    QWidget *developersMap;
    QGridLayout *gridLayout_2;
    QgsWebView *developersMapView;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_8;
    QgsWebView *txtTranslators;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_10;
    QTextBrowser *txtDonors;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *txtLicense;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAbout)
    {
        if (QgsAbout->objectName().isEmpty())
            QgsAbout->setObjectName(QStringLiteral("QgsAbout"));
        QgsAbout->resize(903, 444);
        QgsAbout->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsAbout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsAbout);
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
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
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
        mOptsPage_01 = new QWidget();
        mOptsPage_01->setObjectName(QStringLiteral("mOptsPage_01"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_01);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        qgisIcon = new QLabel(mOptsPage_01);
        qgisIcon->setObjectName(QStringLiteral("qgisIcon"));
        qgisIcon->setMaximumSize(QSize(60, 60));
        qgisIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis-icon-60x60.png")));
        qgisIcon->setScaledContents(false);

        hboxLayout->addWidget(qgisIcon);

        TextLabel4 = new QLabel(mOptsPage_01);
        TextLabel4->setObjectName(QStringLiteral("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(TextLabel4);


        verticalLayout_4->addLayout(hboxLayout);

        txtVersion = new QTextBrowser(mOptsPage_01);
        txtVersion->setObjectName(QStringLiteral("txtVersion"));
        txtVersion->setLineWrapMode(QTextEdit::NoWrap);
        txtVersion->setOpenExternalLinks(true);
        txtVersion->setOpenLinks(true);

        verticalLayout_4->addWidget(txtVersion);

        label_3 = new QLabel(mOptsPage_01);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(mOptsPage_01);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        btnQgisHome = new QPushButton(mOptsPage_01);
        btnQgisHome->setObjectName(QStringLiteral("btnQgisHome"));
        btnQgisHome->setFlat(false);

        _2->addWidget(btnQgisHome);

        btnQgisUser = new QPushButton(mOptsPage_01);
        btnQgisUser->setObjectName(QStringLiteral("btnQgisUser"));
        btnQgisUser->setFlat(false);

        _2->addWidget(btnQgisUser);


        verticalLayout_4->addLayout(_2);

        mOptionsStackedWidget->addWidget(mOptsPage_01);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        txtWhatsNew = new QTextBrowser(page);
        txtWhatsNew->setObjectName(QStringLiteral("txtWhatsNew"));

        verticalLayout_5->addWidget(txtWhatsNew);

        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        txtProviders = new QTextBrowser(page_2);
        txtProviders->setObjectName(QStringLiteral("txtProviders"));

        verticalLayout_6->addWidget(txtProviders);

        mOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lstDevelopers = new QListWidget(page_3);
        lstDevelopers->setObjectName(QStringLiteral("lstDevelopers"));
        sizePolicy1.setHeightForWidth(lstDevelopers->sizePolicy().hasHeightForWidth());
        lstDevelopers->setSizePolicy(sizePolicy1);
        lstDevelopers->setAlternatingRowColors(true);
        lstDevelopers->setProperty("isWrapping", QVariant(false));

        gridLayout->addWidget(lstDevelopers, 0, 0, 2, 1);

        mOptionsStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lstContributors = new QListWidget(page_4);
        lstContributors->setObjectName(QStringLiteral("lstContributors"));
        lstContributors->setAlternatingRowColors(true);

        verticalLayout_7->addWidget(lstContributors);

        mOptionsStackedWidget->addWidget(page_4);
        developersMap = new QWidget();
        developersMap->setObjectName(QStringLiteral("developersMap"));
        gridLayout_2 = new QGridLayout(developersMap);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        developersMapView = new QgsWebView(developersMap);
        developersMapView->setObjectName(QStringLiteral("developersMapView"));

        gridLayout_2->addWidget(developersMapView, 0, 0, 1, 1);

        mOptionsStackedWidget->addWidget(developersMap);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_8 = new QVBoxLayout(page_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        txtTranslators = new QgsWebView(page_5);
        txtTranslators->setObjectName(QStringLiteral("txtTranslators"));
        txtTranslators->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));

        verticalLayout_8->addWidget(txtTranslators);

        mOptionsStackedWidget->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        verticalLayout_10 = new QVBoxLayout(page_7);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        txtDonors = new QTextBrowser(page_7);
        txtDonors->setObjectName(QStringLiteral("txtDonors"));
        txtDonors->setOpenExternalLinks(true);
        txtDonors->setOpenLinks(true);

        verticalLayout_10->addWidget(txtDonors);

        mOptionsStackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        verticalLayout_11 = new QVBoxLayout(page_8);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        txtLicense = new QTextBrowser(page_8);
        txtLicense->setObjectName(QStringLiteral("txtLicense"));

        verticalLayout_11->addWidget(txtLicense);

        mOptionsStackedWidget->addWidget(page_8);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsAbout);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(mButtonBoxFrame);


        retranslateUi(QgsAbout);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsAbout);
    } // setupUi

    void retranslateUi(QDialog *QgsAbout)
    {
        QgsAbout->setWindowTitle(QApplication::translate("QgsAbout", "About QGIS", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsAbout", "About", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsAbout", "What's New", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsAbout", "Providers", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsAbout", "Developers", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsAbout", "Contributors", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsAbout", "Developers Map", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsAbout", "Translators", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsAbout", "Donors", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsAbout", "License", Q_NULLPTR));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        TextLabel4->setText(QApplication::translate("QgsAbout", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:x-large; font-weight:600;\"><span style=\" font-size:x-large;\">QGIS</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsAbout", "QGIS is licensed under the GNU General Public License", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsAbout", "https://www.gnu.org/licenses", Q_NULLPTR));
        btnQgisHome->setText(QApplication::translate("QgsAbout", "QGIS Home Page", Q_NULLPTR));
        btnQgisUser->setText(QApplication::translate("QgsAbout", "Join our User Mailing List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAbout: public Ui_QgsAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSABOUT_H
