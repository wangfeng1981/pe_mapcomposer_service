/********************************************************************************
** Form generated from reading UI file 'qgssourcefieldsproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSOURCEFIELDSPROPERTIES_H
#define UI_QGSSOURCEFIELDSPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSourceFieldsProperties
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mFieldsList;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mToggleEditingButton;
    QToolButton *mAddAttributeButton;
    QToolButton *mDeleteAttributeButton;
    QToolButton *mCalculateFieldButton;

    void setupUi(QWidget *QgsSourceFieldsProperties)
    {
        if (QgsSourceFieldsProperties->objectName().isEmpty())
            QgsSourceFieldsProperties->setObjectName(QStringLiteral("QgsSourceFieldsProperties"));
        QgsSourceFieldsProperties->resize(384, 315);
        QgsSourceFieldsProperties->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsSourceFieldsProperties);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mFieldsList = new QTableWidget(QgsSourceFieldsProperties);
        mFieldsList->setObjectName(QStringLiteral("mFieldsList"));

        gridLayout->addWidget(mFieldsList, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        mToggleEditingButton = new QToolButton(QgsSourceFieldsProperties);
        mToggleEditingButton->setObjectName(QStringLiteral("mToggleEditingButton"));
        mToggleEditingButton->setCheckable(true);

        gridLayout_3->addWidget(mToggleEditingButton, 0, 2, 1, 1);

        mAddAttributeButton = new QToolButton(QgsSourceFieldsProperties);
        mAddAttributeButton->setObjectName(QStringLiteral("mAddAttributeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../.designer/backup/.designer/xpm/new_attribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon);

        gridLayout_3->addWidget(mAddAttributeButton, 0, 0, 1, 1);

        mDeleteAttributeButton = new QToolButton(QgsSourceFieldsProperties);
        mDeleteAttributeButton->setObjectName(QStringLiteral("mDeleteAttributeButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../../.designer/backup/.designer/xpm/delete_attribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteAttributeButton->setIcon(icon1);

        gridLayout_3->addWidget(mDeleteAttributeButton, 0, 1, 1, 1);

        mCalculateFieldButton = new QToolButton(QgsSourceFieldsProperties);
        mCalculateFieldButton->setObjectName(QStringLiteral("mCalculateFieldButton"));
        mCalculateFieldButton->setCheckable(false);

        gridLayout_3->addWidget(mCalculateFieldButton, 0, 3, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(QgsSourceFieldsProperties);

        QMetaObject::connectSlotsByName(QgsSourceFieldsProperties);
    } // setupUi

    void retranslateUi(QWidget *QgsSourceFieldsProperties)
    {
#ifndef QT_NO_TOOLTIP
        mToggleEditingButton->setToolTip(QApplication::translate("QgsSourceFieldsProperties", "Toggle editing mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mToggleEditingButton->setWhatsThis(QApplication::translate("QgsSourceFieldsProperties", "Click to toggle table editing", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        mToggleEditingButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddAttributeButton->setToolTip(QApplication::translate("QgsSourceFieldsProperties", "New field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddAttributeButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        mAddAttributeButton->setShortcut(QApplication::translate("QgsSourceFieldsProperties", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        mDeleteAttributeButton->setToolTip(QApplication::translate("QgsSourceFieldsProperties", "Delete field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDeleteAttributeButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        mDeleteAttributeButton->setShortcut(QApplication::translate("QgsSourceFieldsProperties", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        mCalculateFieldButton->setToolTip(QApplication::translate("QgsSourceFieldsProperties", "Field calculator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mCalculateFieldButton->setWhatsThis(QApplication::translate("QgsSourceFieldsProperties", "Click to toggle table editing", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        mCalculateFieldButton->setText(QString());
        Q_UNUSED(QgsSourceFieldsProperties);
    } // retranslateUi

};

namespace Ui {
    class QgsSourceFieldsProperties: public Ui_QgsSourceFieldsProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSOURCEFIELDSPROPERTIES_H
