/********************************************************************************
** Form generated from reading UI file 'qgsattributesformproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTESFORMPROPERTIES_H
#define UI_QGSATTRIBUTESFORMPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributesFormProperties
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *mEditorLayoutComboBox;
    QToolButton *mTbInitCode;
    QComboBox *mFormSuppressCmbBx;
    QWidget *mUiFileFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *mEditFormLineEdit;
    QToolButton *pbnSelectEditForm;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *mFormLayoutWidget;
    QSpacerItem *verticalSpacer;
    QWidget *mAvailableWidgetsWidget;
    QToolButton *mRemoveTabOrGroupButton;
    QToolButton *mAddTabOrGroupButton;
    QToolButton *mInvertSelectionButton;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_4;
    QWidget *mAttributeTypeFrame;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *QgsAttributesFormProperties)
    {
        if (QgsAttributesFormProperties->objectName().isEmpty())
            QgsAttributesFormProperties->setObjectName(QStringLiteral("QgsAttributesFormProperties"));
        QgsAttributesFormProperties->resize(1117, 556);
        QgsAttributesFormProperties->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsAttributesFormProperties);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(QgsAttributesFormProperties);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mEditorLayoutComboBox = new QComboBox(widget_2);
        mEditorLayoutComboBox->setObjectName(QStringLiteral("mEditorLayoutComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEditorLayoutComboBox->sizePolicy().hasHeightForWidth());
        mEditorLayoutComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mEditorLayoutComboBox);

        mTbInitCode = new QToolButton(widget_2);
        mTbInitCode->setObjectName(QStringLiteral("mTbInitCode"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/processingScript.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTbInitCode->setIcon(icon);

        horizontalLayout->addWidget(mTbInitCode);

        mFormSuppressCmbBx = new QComboBox(widget_2);
        mFormSuppressCmbBx->setObjectName(QStringLiteral("mFormSuppressCmbBx"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFormSuppressCmbBx->sizePolicy().hasHeightForWidth());
        mFormSuppressCmbBx->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFormSuppressCmbBx);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        mUiFileFrame = new QWidget(QgsAttributesFormProperties);
        mUiFileFrame->setObjectName(QStringLiteral("mUiFileFrame"));
        horizontalLayout_2 = new QHBoxLayout(mUiFileFrame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mUiFileFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mEditFormLineEdit = new QLineEdit(mUiFileFrame);
        mEditFormLineEdit->setObjectName(QStringLiteral("mEditFormLineEdit"));

        horizontalLayout_2->addWidget(mEditFormLineEdit);

        pbnSelectEditForm = new QToolButton(mUiFileFrame);
        pbnSelectEditForm->setObjectName(QStringLiteral("pbnSelectEditForm"));

        horizontalLayout_2->addWidget(pbnSelectEditForm);


        gridLayout->addWidget(mUiFileFrame, 1, 0, 1, 1);

        splitter = new QSplitter(QgsAttributesFormProperties);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mFormLayoutWidget = new QWidget(widget);
        mFormLayoutWidget->setObjectName(QStringLiteral("mFormLayoutWidget"));
        mFormLayoutWidget->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(mFormLayoutWidget, 0, 1, 7, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 2, 1, 1);

        mAvailableWidgetsWidget = new QWidget(widget);
        mAvailableWidgetsWidget->setObjectName(QStringLiteral("mAvailableWidgetsWidget"));
        mAvailableWidgetsWidget->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(mAvailableWidgetsWidget, 0, 0, 7, 1);

        mRemoveTabOrGroupButton = new QToolButton(widget);
        mRemoveTabOrGroupButton->setObjectName(QStringLiteral("mRemoveTabOrGroupButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveTabOrGroupButton->setIcon(icon1);

        gridLayout_3->addWidget(mRemoveTabOrGroupButton, 2, 2, 1, 1);

        mAddTabOrGroupButton = new QToolButton(widget);
        mAddTabOrGroupButton->setObjectName(QStringLiteral("mAddTabOrGroupButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddTabOrGroupButton->setIcon(icon2);

        gridLayout_3->addWidget(mAddTabOrGroupButton, 0, 2, 1, 1);

        mInvertSelectionButton = new QToolButton(widget);
        mInvertSelectionButton->setObjectName(QStringLiteral("mInvertSelectionButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mInvertSelectionButton->setIcon(icon3);

        gridLayout_3->addWidget(mInvertSelectionButton, 3, 2, 1, 1);

        splitter->addWidget(widget);
        scrollArea_2 = new QScrollArea(splitter);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setMinimumSize(QSize(600, 0));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 598, 480));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mAttributeTypeFrame = new QWidget(scrollAreaWidgetContents_5);
        mAttributeTypeFrame->setObjectName(QStringLiteral("mAttributeTypeFrame"));
        gridLayout_2 = new QGridLayout(mAttributeTypeFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        gridLayout_4->addWidget(mAttributeTypeFrame, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_5);
        splitter->addWidget(scrollArea_2);

        gridLayout->addWidget(splitter, 2, 0, 1, 1);

        gridLayout->setRowStretch(2, 1);

        retranslateUi(QgsAttributesFormProperties);

        QMetaObject::connectSlotsByName(QgsAttributesFormProperties);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributesFormProperties)
    {
#ifndef QT_NO_TOOLTIP
        mEditorLayoutComboBox->setToolTip(QApplication::translate("QgsAttributesFormProperties", "Select attribute layout editor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mTbInitCode->setToolTip(QApplication::translate("QgsAttributesFormProperties", "QGIS forms can have a Python function that is called when the form is opened.\n"
"Use this function to add extra logic to your forms.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTbInitCode->setText(QApplication::translate("QgsAttributesFormProperties", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsAttributesFormProperties", "Edit UI", Q_NULLPTR));
        pbnSelectEditForm->setText(QApplication::translate("QgsAttributesFormProperties", "\342\200\246", Q_NULLPTR));
        mRemoveTabOrGroupButton->setText(QApplication::translate("QgsAttributesFormProperties", "\342\200\246", Q_NULLPTR));
        mAddTabOrGroupButton->setText(QApplication::translate("QgsAttributesFormProperties", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mInvertSelectionButton->setToolTip(QApplication::translate("QgsAttributesFormProperties", "Invert selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mInvertSelectionButton->setText(QApplication::translate("QgsAttributesFormProperties", "Invert selection", Q_NULLPTR));
        Q_UNUSED(QgsAttributesFormProperties);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributesFormProperties: public Ui_QgsAttributesFormProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTESFORMPROPERTIES_H
