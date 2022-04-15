/********************************************************************************
** Form generated from reading UI file 'qgsuserprofilemanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUSERPROFILEMANAGERWIDGET_H
#define UI_QGSUSERPROFILEMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUserProfileManagerWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mAddProfile;
    QToolButton *mEditPofile;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mRemoveProfile;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mProfilesFolder;
    QLabel *label_3;
    QListWidget *mProfileList;

    void setupUi(QWidget *QgsUserProfileManagerWidget)
    {
        if (QgsUserProfileManagerWidget->objectName().isEmpty())
            QgsUserProfileManagerWidget->setObjectName(QStringLiteral("QgsUserProfileManagerWidget"));
        QgsUserProfileManagerWidget->resize(314, 380);
        QgsUserProfileManagerWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsUserProfileManagerWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mAddProfile = new QToolButton(QgsUserProfileManagerWidget);
        mAddProfile->setObjectName(QStringLiteral("mAddProfile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddProfile->setIcon(icon);

        horizontalLayout_2->addWidget(mAddProfile);

        mEditPofile = new QToolButton(QgsUserProfileManagerWidget);
        mEditPofile->setObjectName(QStringLiteral("mEditPofile"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditPofile->setIcon(icon1);

        horizontalLayout_2->addWidget(mEditPofile);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        mRemoveProfile = new QToolButton(QgsUserProfileManagerWidget);
        mRemoveProfile->setObjectName(QStringLiteral("mRemoveProfile"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveProfile->setIcon(icon2);

        horizontalLayout_2->addWidget(mRemoveProfile);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mProfilesFolder = new QPushButton(QgsUserProfileManagerWidget);
        mProfilesFolder->setObjectName(QStringLiteral("mProfilesFolder"));

        horizontalLayout->addWidget(mProfilesFolder);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        label_3 = new QLabel(QgsUserProfileManagerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mProfileList = new QListWidget(QgsUserProfileManagerWidget);
        mProfileList->setObjectName(QStringLiteral("mProfileList"));

        gridLayout->addWidget(mProfileList, 1, 0, 1, 1);


        retranslateUi(QgsUserProfileManagerWidget);

        QMetaObject::connectSlotsByName(QgsUserProfileManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsUserProfileManagerWidget)
    {
        mAddProfile->setText(QApplication::translate("QgsUserProfileManagerWidget", "Add", Q_NULLPTR));
        mEditPofile->setText(QApplication::translate("QgsUserProfileManagerWidget", "Add", Q_NULLPTR));
        mRemoveProfile->setText(QApplication::translate("QgsUserProfileManagerWidget", "Remove", Q_NULLPTR));
        mProfilesFolder->setText(QApplication::translate("QgsUserProfileManagerWidget", "Profiles Folder", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsUserProfileManagerWidget", "Profiles", Q_NULLPTR));
        Q_UNUSED(QgsUserProfileManagerWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsUserProfileManagerWidget: public Ui_QgsUserProfileManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUSERPROFILEMANAGERWIDGET_H
