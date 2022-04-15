/********************************************************************************
** Form generated from reading UI file 'qgsreportorganizerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSREPORTORGANIZERWIDGETBASE_H
#define UI_QGSREPORTORGANIZERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsReportOrganizerBase
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *mViewSections;
    QHBoxLayout *horizontalLayout;
    QPushButton *mButtonAddSection;
    QPushButton *mButtonRemoveSection;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *mSettingsFrame;

    void setupUi(QWidget *QgsReportOrganizerBase)
    {
        if (QgsReportOrganizerBase->objectName().isEmpty())
            QgsReportOrganizerBase->setObjectName(QStringLiteral("QgsReportOrganizerBase"));
        QgsReportOrganizerBase->resize(320, 520);
        QgsReportOrganizerBase->setMinimumSize(QSize(320, 300));
        verticalLayout = new QVBoxLayout(QgsReportOrganizerBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mViewSections = new QTreeView(QgsReportOrganizerBase);
        mViewSections->setObjectName(QStringLiteral("mViewSections"));
        mViewSections->setContextMenuPolicy(Qt::CustomContextMenu);
        mViewSections->setAcceptDrops(true);
        mViewSections->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        mViewSections->setDragEnabled(true);
        mViewSections->setDragDropMode(QAbstractItemView::InternalMove);
        mViewSections->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mViewSections->setAllColumnsShowFocus(true);
        mViewSections->header()->setMinimumSectionSize(100);
        mViewSections->header()->setStretchLastSection(true);

        verticalLayout->addWidget(mViewSections);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mButtonAddSection = new QPushButton(QgsReportOrganizerBase);
        mButtonAddSection->setObjectName(QStringLiteral("mButtonAddSection"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddSection->setIcon(icon);

        horizontalLayout->addWidget(mButtonAddSection);

        mButtonRemoveSection = new QPushButton(QgsReportOrganizerBase);
        mButtonRemoveSection->setObjectName(QStringLiteral("mButtonRemoveSection"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveSection->setIcon(icon1);

        horizontalLayout->addWidget(mButtonRemoveSection);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(QgsReportOrganizerBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 687, 207));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mSettingsFrame = new QFrame(scrollAreaWidgetContents);
        mSettingsFrame->setObjectName(QStringLiteral("mSettingsFrame"));
        mSettingsFrame->setFrameShape(QFrame::NoFrame);
        mSettingsFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(mSettingsFrame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QgsReportOrganizerBase);

        QMetaObject::connectSlotsByName(QgsReportOrganizerBase);
    } // setupUi

    void retranslateUi(QWidget *QgsReportOrganizerBase)
    {
        QgsReportOrganizerBase->setWindowTitle(QApplication::translate("QgsReportOrganizerBase", "Layout Manager", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonAddSection->setToolTip(QApplication::translate("QgsReportOrganizerBase", "Add section", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonAddSection->setText(QString());
#ifndef QT_NO_TOOLTIP
        mButtonRemoveSection->setToolTip(QApplication::translate("QgsReportOrganizerBase", "Remove selected section", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonRemoveSection->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsReportOrganizerBase: public Ui_QgsReportOrganizerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSREPORTORGANIZERWIDGETBASE_H
