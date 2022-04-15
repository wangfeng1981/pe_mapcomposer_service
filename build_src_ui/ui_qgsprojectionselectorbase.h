/********************************************************************************
** Form generated from reading UI file 'qgsprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTIONSELECTORBASE_H
#define UI_QGSPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscoordinateboundspreviewmapwidget.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectionSelectorBase
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *mCheckBoxNoProjection;
    QFrame *mFrameProjections;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QgsFilterLineEdit *leSearch;
    QLabel *label_3;
    QSplitter *mSplitter;
    QTreeWidget *lstRecent;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTreeWidget *lstCoordinateSystems;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbxHideDeprecated;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *teProjection;
    QVBoxLayout *verticalLayout;
    QgsCoordinateBoundsPreviewMapWidget *mAreaCanvas;

    void setupUi(QWidget *QgsProjectionSelectorBase)
    {
        if (QgsProjectionSelectorBase->objectName().isEmpty())
            QgsProjectionSelectorBase->setObjectName(QStringLiteral("QgsProjectionSelectorBase"));
        QgsProjectionSelectorBase->resize(578, 654);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsProjectionSelectorBase->sizePolicy().hasHeightForWidth());
        QgsProjectionSelectorBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsProjectionSelectorBase->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(QgsProjectionSelectorBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mCheckBoxNoProjection = new QCheckBox(QgsProjectionSelectorBase);
        mCheckBoxNoProjection->setObjectName(QStringLiteral("mCheckBoxNoProjection"));

        gridLayout_2->addWidget(mCheckBoxNoProjection, 0, 0, 1, 1);

        mFrameProjections = new QFrame(QgsProjectionSelectorBase);
        mFrameProjections->setObjectName(QStringLiteral("mFrameProjections"));
        mFrameProjections->setFrameShape(QFrame::NoFrame);
        mFrameProjections->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(mFrameProjections);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(mFrameProjections);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        leSearch = new QgsFilterLineEdit(mFrameProjections);
        leSearch->setObjectName(QStringLiteral("leSearch"));

        horizontalLayout->addWidget(leSearch);


        verticalLayout_2->addLayout(horizontalLayout);

        label_3 = new QLabel(mFrameProjections);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        mSplitter = new QSplitter(mFrameProjections);
        mSplitter->setObjectName(QStringLiteral("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        mSplitter->setChildrenCollapsible(false);
        lstRecent = new QTreeWidget(mSplitter);
        lstRecent->setObjectName(QStringLiteral("lstRecent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstRecent->sizePolicy().hasHeightForWidth());
        lstRecent->setSizePolicy(sizePolicy1);
        lstRecent->setMinimumSize(QSize(0, 105));
        lstRecent->setAlternatingRowColors(true);
        lstRecent->setRootIsDecorated(false);
        lstRecent->setUniformRowHeights(true);
        lstRecent->setColumnCount(3);
        mSplitter->addWidget(lstRecent);
        widget = new QWidget(mSplitter);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lstCoordinateSystems = new QTreeWidget(widget);
        lstCoordinateSystems->setObjectName(QStringLiteral("lstCoordinateSystems"));
        lstCoordinateSystems->setAlternatingRowColors(true);
        lstCoordinateSystems->setUniformRowHeights(true);
        lstCoordinateSystems->setColumnCount(3);

        gridLayout->addWidget(lstCoordinateSystems, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cbxHideDeprecated = new QCheckBox(widget);
        cbxHideDeprecated->setObjectName(QStringLiteral("cbxHideDeprecated"));
        QFont font1;
        font1.setPointSize(9);
        cbxHideDeprecated->setFont(font1);

        horizontalLayout_3->addWidget(cbxHideDeprecated);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        mSplitter->addWidget(widget);
        widget1 = new QWidget(mSplitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        teProjection = new QTextEdit(widget1);
        teProjection->setObjectName(QStringLiteral("teProjection"));
        sizePolicy.setHeightForWidth(teProjection->sizePolicy().hasHeightForWidth());
        teProjection->setSizePolicy(sizePolicy);
        teProjection->setMinimumSize(QSize(0, 0));
        teProjection->setBaseSize(QSize(0, 40));
        teProjection->setAutoFormatting(QTextEdit::AutoBulletList);
        teProjection->setReadOnly(true);

        horizontalLayout_4->addWidget(teProjection);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        mAreaCanvas = new QgsCoordinateBoundsPreviewMapWidget(widget1);
        mAreaCanvas->setObjectName(QStringLiteral("mAreaCanvas"));
        sizePolicy.setHeightForWidth(mAreaCanvas->sizePolicy().hasHeightForWidth());
        mAreaCanvas->setSizePolicy(sizePolicy);
        mAreaCanvas->setMinimumSize(QSize(117, 0));
        mAreaCanvas->setMaximumSize(QSize(16777214, 16777215));

        verticalLayout->addWidget(mAreaCanvas);


        horizontalLayout_4->addLayout(verticalLayout);

        mSplitter->addWidget(widget1);

        verticalLayout_2->addWidget(mSplitter);


        gridLayout_2->addWidget(mFrameProjections, 1, 0, 1, 1);

        QWidget::setTabOrder(leSearch, lstRecent);
        QWidget::setTabOrder(lstRecent, cbxHideDeprecated);
        QWidget::setTabOrder(cbxHideDeprecated, lstCoordinateSystems);

        retranslateUi(QgsProjectionSelectorBase);

        QMetaObject::connectSlotsByName(QgsProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectionSelectorBase)
    {
        QgsProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System Selector", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckBoxNoProjection->setToolTip(QApplication::translate("QgsProjectionSelectorBase", "Use this option to treat all coordinates as Cartesian coordinates in an unknown reference system.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxNoProjection->setText(QApplication::translate("QgsProjectionSelectorBase", "No CRS (or unknown/non-Earth projection)", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsProjectionSelectorBase", "Filter", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsProjectionSelectorBase", "Recently Used Coordinate Reference Systems", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = lstRecent->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Authority ID", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = lstCoordinateSystems->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Authority ID", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsProjectionSelectorBase", "Predefined Coordinate Reference Systems", Q_NULLPTR));
        cbxHideDeprecated->setText(QApplication::translate("QgsProjectionSelectorBase", "Hide deprecated CRSs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectionSelectorBase: public Ui_QgsProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTIONSELECTORBASE_H
