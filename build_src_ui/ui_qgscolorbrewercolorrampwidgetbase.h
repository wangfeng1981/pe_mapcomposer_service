/********************************************************************************
** Form generated from reading UI file 'qgscolorbrewercolorrampwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORBREWERCOLORRAMPWIDGETBASE_H
#define UI_QGSCOLORBREWERCOLORRAMPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsColorBrewerColorRampWidgetBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *cboSchemeName;
    QComboBox *cboColors;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *lblPreview;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsColorBrewerColorRampWidgetBase)
    {
        if (QgsColorBrewerColorRampWidgetBase->objectName().isEmpty())
            QgsColorBrewerColorRampWidgetBase->setObjectName(QStringLiteral("QgsColorBrewerColorRampWidgetBase"));
        QgsColorBrewerColorRampWidgetBase->resize(224, 164);
        vboxLayout = new QVBoxLayout(QgsColorBrewerColorRampWidgetBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(QgsColorBrewerColorRampWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cboSchemeName = new QComboBox(QgsColorBrewerColorRampWidgetBase);
        cboSchemeName->setObjectName(QStringLiteral("cboSchemeName"));

        gridLayout->addWidget(cboSchemeName, 0, 1, 1, 1);

        cboColors = new QComboBox(QgsColorBrewerColorRampWidgetBase);
        cboColors->setObjectName(QStringLiteral("cboColors"));

        gridLayout->addWidget(cboColors, 1, 1, 1, 1);

        label = new QLabel(QgsColorBrewerColorRampWidgetBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(QgsColorBrewerColorRampWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(lblPreview);


        vboxLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(cboColors);
        label->setBuddy(cboSchemeName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cboSchemeName, cboColors);

        retranslateUi(QgsColorBrewerColorRampWidgetBase);

        QMetaObject::connectSlotsByName(QgsColorBrewerColorRampWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsColorBrewerColorRampWidgetBase)
    {
        QgsColorBrewerColorRampWidgetBase->setWindowTitle(QApplication::translate("QgsColorBrewerColorRampWidgetBase", "ColorBrewer Ramp", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsColorBrewerColorRampWidgetBase", "Colors", Q_NULLPTR));
        label->setText(QApplication::translate("QgsColorBrewerColorRampWidgetBase", "Scheme name", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsColorBrewerColorRampWidgetBase", "Preview", Q_NULLPTR));
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsColorBrewerColorRampWidgetBase: public Ui_QgsColorBrewerColorRampWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORBREWERCOLORRAMPWIDGETBASE_H
