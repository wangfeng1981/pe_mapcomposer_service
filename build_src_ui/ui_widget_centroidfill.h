/********************************************************************************
** Form generated from reading UI file 'widget_centroidfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CENTROIDFILL_H
#define UI_WIDGET_CENTROIDFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCentroidFill
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *mDrawInsideCheckBox;
    QCheckBox *mDrawAllPartsCheckBox;
    QCheckBox *mClipPointsCheckBox;
    QCheckBox *mClipOnCurrentPartOnlyCheckBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *WidgetCentroidFill)
    {
        if (WidgetCentroidFill->objectName().isEmpty())
            WidgetCentroidFill->setObjectName(QStringLiteral("WidgetCentroidFill"));
        WidgetCentroidFill->resize(382, 242);
        WidgetCentroidFill->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(WidgetCentroidFill);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mDrawInsideCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawInsideCheckBox->setObjectName(QStringLiteral("mDrawInsideCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDrawInsideCheckBox->sizePolicy().hasHeightForWidth());
        mDrawInsideCheckBox->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mDrawInsideCheckBox);

        mDrawAllPartsCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawAllPartsCheckBox->setObjectName(QStringLiteral("mDrawAllPartsCheckBox"));

        verticalLayout->addWidget(mDrawAllPartsCheckBox);

        mClipPointsCheckBox = new QCheckBox(WidgetCentroidFill);
        mClipPointsCheckBox->setObjectName(QStringLiteral("mClipPointsCheckBox"));

        verticalLayout->addWidget(mClipPointsCheckBox);

        mClipOnCurrentPartOnlyCheckBox = new QCheckBox(WidgetCentroidFill);
        mClipOnCurrentPartOnlyCheckBox->setObjectName(QStringLiteral("mClipOnCurrentPartOnlyCheckBox"));
        mClipOnCurrentPartOnlyCheckBox->setEnabled(false);

        verticalLayout->addWidget(mClipOnCurrentPartOnlyCheckBox);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(WidgetCentroidFill);
        QObject::connect(mClipPointsCheckBox, SIGNAL(toggled(bool)), mClipOnCurrentPartOnlyCheckBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WidgetCentroidFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetCentroidFill)
    {
        mDrawInsideCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Force placement of markers inside polygons", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDrawAllPartsCheckBox->setToolTip(QApplication::translate("WidgetCentroidFill", "When unchecked, a single marker will be drawn on the biggest part of multi-part features", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDrawAllPartsCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Draw markers on every part of multi-part features", Q_NULLPTR));
        mClipPointsCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Clip markers to polygon boundary", Q_NULLPTR));
        mClipOnCurrentPartOnlyCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Clip markers to current part boundary only", Q_NULLPTR));
        Q_UNUSED(WidgetCentroidFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetCentroidFill: public Ui_WidgetCentroidFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CENTROIDFILL_H
