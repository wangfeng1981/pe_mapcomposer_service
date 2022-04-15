/********************************************************************************
** Form generated from reading UI file 'qgstilescalewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILESCALEWIDGETBASE_H
#define UI_QGSTILESCALEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTileScaleWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSlider *mSlider;

    void setupUi(QWidget *QgsTileScaleWidget)
    {
        if (QgsTileScaleWidget->objectName().isEmpty())
            QgsTileScaleWidget->setObjectName(QStringLiteral("QgsTileScaleWidget"));
        QgsTileScaleWidget->resize(114, 525);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsTileScaleWidget->sizePolicy().hasHeightForWidth());
        QgsTileScaleWidget->setSizePolicy(sizePolicy);
        QgsTileScaleWidget->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout = new QHBoxLayout(QgsTileScaleWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mSlider = new QSlider(QgsTileScaleWidget);
        mSlider->setObjectName(QStringLiteral("mSlider"));
        mSlider->setOrientation(Qt::Vertical);
        mSlider->setInvertedAppearance(false);
        mSlider->setInvertedControls(false);
        mSlider->setTickPosition(QSlider::TicksBelow);
        mSlider->setTickInterval(0);

        horizontalLayout->addWidget(mSlider);


        retranslateUi(QgsTileScaleWidget);

        QMetaObject::connectSlotsByName(QgsTileScaleWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsTileScaleWidget)
    {
        Q_UNUSED(QgsTileScaleWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsTileScaleWidget: public Ui_QgsTileScaleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILESCALEWIDGETBASE_H
