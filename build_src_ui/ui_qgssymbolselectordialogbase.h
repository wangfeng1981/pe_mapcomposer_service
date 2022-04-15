/********************************************************************************
** Form generated from reading UI file 'qgssymbolselectordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLSELECTORDIALOGBASE_H
#define UI_QGSSYMBOLSELECTORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolSelectorDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lblPreview;
    QTreeView *layersTree;
    QVBoxLayout *pushBtnBox_1;
    QPushButton *btnAddLayer;
    QPushButton *btnRemoveLayer;
    QPushButton *btnDuplicate;
    QSpacerItem *verticalSpacer_1;
    QVBoxLayout *pushBtnBox_2;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QPushButton *btnLock;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QWidget *QgsSymbolSelectorDialogBase)
    {
        if (QgsSymbolSelectorDialogBase->objectName().isEmpty())
            QgsSymbolSelectorDialogBase->setObjectName(QStringLiteral("QgsSymbolSelectorDialogBase"));
        QgsSymbolSelectorDialogBase->resize(356, 616);
        QgsSymbolSelectorDialogBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(QgsSymbolSelectorDialogBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblPreview = new QLabel(QgsSymbolSelectorDialogBase);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setMaximumSize(QSize(100, 100));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblPreview);

        layersTree = new QTreeView(QgsSymbolSelectorDialogBase);
        layersTree->setObjectName(QStringLiteral("layersTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layersTree->sizePolicy().hasHeightForWidth());
        layersTree->setSizePolicy(sizePolicy1);
        layersTree->setMaximumSize(QSize(16777215, 100));
        layersTree->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(layersTree);

        pushBtnBox_1 = new QVBoxLayout();
        pushBtnBox_1->setSpacing(4);
        pushBtnBox_1->setObjectName(QStringLiteral("pushBtnBox_1"));
        btnAddLayer = new QPushButton(QgsSymbolSelectorDialogBase);
        btnAddLayer->setObjectName(QStringLiteral("btnAddLayer"));
        btnAddLayer->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_1->addWidget(btnAddLayer);

        btnRemoveLayer = new QPushButton(QgsSymbolSelectorDialogBase);
        btnRemoveLayer->setObjectName(QStringLiteral("btnRemoveLayer"));
        btnRemoveLayer->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_1->addWidget(btnRemoveLayer);

        btnDuplicate = new QPushButton(QgsSymbolSelectorDialogBase);
        btnDuplicate->setObjectName(QStringLiteral("btnDuplicate"));
        btnDuplicate->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_1->addWidget(btnDuplicate);

        verticalSpacer_1 = new QSpacerItem(10, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        pushBtnBox_1->addItem(verticalSpacer_1);


        horizontalLayout->addLayout(pushBtnBox_1);

        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QStringLiteral("pushBtnBox_2"));
        btnUp = new QPushButton(QgsSymbolSelectorDialogBase);
        btnUp->setObjectName(QStringLiteral("btnUp"));
        btnUp->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_2->addWidget(btnUp);

        btnDown = new QPushButton(QgsSymbolSelectorDialogBase);
        btnDown->setObjectName(QStringLiteral("btnDown"));
        btnDown->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_2->addWidget(btnDown);

        btnLock = new QPushButton(QgsSymbolSelectorDialogBase);
        btnLock->setObjectName(QStringLiteral("btnLock"));
        btnLock->setMaximumSize(QSize(50, 16777215));
        btnLock->setCheckable(true);

        pushBtnBox_2->addWidget(btnLock);

        verticalSpacer_2 = new QSpacerItem(10, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        pushBtnBox_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(pushBtnBox_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        line = new QFrame(QgsSymbolSelectorDialogBase);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        frame = new QFrame(QgsSymbolSelectorDialogBase);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addWidget(frame, 4, 0, 1, 1);

        scrollArea = new QScrollArea(QgsSymbolSelectorDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 332, 413));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 3, 0, 1, 1);


        retranslateUi(QgsSymbolSelectorDialogBase);

        QMetaObject::connectSlotsByName(QgsSymbolSelectorDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSymbolSelectorDialogBase)
    {
        lblPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAddLayer->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Add symbol layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveLayer->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Remove symbol layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDuplicate->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Duplicate symbol layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDuplicate->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUp->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Move up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDown->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Move down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnLock->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Lock symbol layer's color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsSymbolSelectorDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolSelectorDialogBase: public Ui_QgsSymbolSelectorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLSELECTORDIALOGBASE_H
