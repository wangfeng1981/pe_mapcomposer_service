/********************************************************************************
** Form generated from reading UI file 'qgsbrowserdirectorypropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERDIRECTORYPROPERTIESBASE_H
#define UI_QGSBROWSERDIRECTORYPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserDirectoryPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mHeaderWidget;
    QGridLayout *mHeaderGridLayout;
    QLabel *mPathTitleLabel;
    QVBoxLayout *mLayout;

    void setupUi(QWidget *QgsBrowserDirectoryPropertiesBase)
    {
        if (QgsBrowserDirectoryPropertiesBase->objectName().isEmpty())
            QgsBrowserDirectoryPropertiesBase->setObjectName(QStringLiteral("QgsBrowserDirectoryPropertiesBase"));
        QgsBrowserDirectoryPropertiesBase->resize(791, 257);
        verticalLayout = new QVBoxLayout(QgsBrowserDirectoryPropertiesBase);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mHeaderWidget = new QWidget(QgsBrowserDirectoryPropertiesBase);
        mHeaderWidget->setObjectName(QStringLiteral("mHeaderWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHeaderWidget->sizePolicy().hasHeightForWidth());
        mHeaderWidget->setSizePolicy(sizePolicy);
        mHeaderGridLayout = new QGridLayout(mHeaderWidget);
        mHeaderGridLayout->setObjectName(QStringLiteral("mHeaderGridLayout"));
        mHeaderGridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mPathTitleLabel = new QLabel(mHeaderWidget);
        mPathTitleLabel->setObjectName(QStringLiteral("mPathTitleLabel"));
        sizePolicy.setHeightForWidth(mPathTitleLabel->sizePolicy().hasHeightForWidth());
        mPathTitleLabel->setSizePolicy(sizePolicy);

        mHeaderGridLayout->addWidget(mPathTitleLabel, 0, 0, 1, 1);


        verticalLayout->addWidget(mHeaderWidget);

        mLayout = new QVBoxLayout();
        mLayout->setObjectName(QStringLiteral("mLayout"));

        verticalLayout->addLayout(mLayout);


        retranslateUi(QgsBrowserDirectoryPropertiesBase);

        QMetaObject::connectSlotsByName(QgsBrowserDirectoryPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsBrowserDirectoryPropertiesBase)
    {
        mPathTitleLabel->setText(QApplication::translate("QgsBrowserDirectoryPropertiesBase", "Path", Q_NULLPTR));
        Q_UNUSED(QgsBrowserDirectoryPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserDirectoryPropertiesBase: public Ui_QgsBrowserDirectoryPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERDIRECTORYPROPERTIESBASE_H
