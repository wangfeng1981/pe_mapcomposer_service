/********************************************************************************
** Form generated from reading UI file 'qgslayout3dmapwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUT3DMAPWIDGETBASE_H
#define UI_QGSLAYOUT3DMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayout3DMapWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *mainLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *mCopySettingsButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mCenterYSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mDistanceToCenterSpinBox;
    QLabel *label_4;
    QLabel *label_3;
    QgsDoubleSpinBox *mHeadingAngleSpinBox;
    QLabel *label_7;
    QLabel *label_6;
    QgsDoubleSpinBox *mPitchAngleSpinBox;
    QgsDoubleSpinBox *mCenterXSpinBox;
    QLabel *label_5;
    QgsDoubleSpinBox *mCenterZSpinBox;
    QPushButton *mPoseFromViewButton;

    void setupUi(QWidget *QgsLayout3DMapWidgetBase)
    {
        if (QgsLayout3DMapWidgetBase->objectName().isEmpty())
            QgsLayout3DMapWidgetBase->setObjectName(QStringLiteral("QgsLayout3DMapWidgetBase"));
        QgsLayout3DMapWidgetBase->resize(540, 613);
        verticalLayout_2 = new QVBoxLayout(QgsLayout3DMapWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mLabel = new QLabel(QgsLayout3DMapWidgetBase);
        mLabel->setObjectName(QStringLiteral("mLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabel->sizePolicy().hasHeightForWidth());
        mLabel->setSizePolicy(sizePolicy);
        mLabel->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(mLabel);

        scrollArea = new QScrollArea(QgsLayout3DMapWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -128, 510, 698));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mCopySettingsButton = new QPushButton(groupBox_3);
        mCopySettingsButton->setObjectName(QStringLiteral("mCopySettingsButton"));

        verticalLayout_5->addWidget(mCopySettingsButton);


        mainLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mCenterYSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mCenterYSpinBox->setObjectName(QStringLiteral("mCenterYSpinBox"));
        mCenterYSpinBox->setDecimals(1);
        mCenterYSpinBox->setMinimum(-1e+7);
        mCenterYSpinBox->setMaximum(1e+7);

        gridLayout_3->addWidget(mCenterYSpinBox, 1, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mDistanceToCenterSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mDistanceToCenterSpinBox->setObjectName(QStringLiteral("mDistanceToCenterSpinBox"));
        mDistanceToCenterSpinBox->setDecimals(1);
        mDistanceToCenterSpinBox->setMaximum(1e+7);

        gridLayout_3->addWidget(mDistanceToCenterSpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        mHeadingAngleSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mHeadingAngleSpinBox->setObjectName(QStringLiteral("mHeadingAngleSpinBox"));
        mHeadingAngleSpinBox->setDecimals(1);
        mHeadingAngleSpinBox->setMaximum(360);

        gridLayout_3->addWidget(mHeadingAngleSpinBox, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 5, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 4, 0, 1, 1);

        mPitchAngleSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mPitchAngleSpinBox->setObjectName(QStringLiteral("mPitchAngleSpinBox"));
        mPitchAngleSpinBox->setDecimals(1);
        mPitchAngleSpinBox->setMaximum(360);

        gridLayout_3->addWidget(mPitchAngleSpinBox, 4, 1, 1, 1);

        mCenterXSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mCenterXSpinBox->setObjectName(QStringLiteral("mCenterXSpinBox"));
        mCenterXSpinBox->setDecimals(1);
        mCenterXSpinBox->setMinimum(-1e+7);
        mCenterXSpinBox->setMaximum(1e+7);

        gridLayout_3->addWidget(mCenterXSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        mCenterZSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mCenterZSpinBox->setObjectName(QStringLiteral("mCenterZSpinBox"));
        mCenterZSpinBox->setDecimals(1);
        mCenterZSpinBox->setMinimum(-1e+7);
        mCenterZSpinBox->setMaximum(1e+7);

        gridLayout_3->addWidget(mCenterZSpinBox, 2, 1, 1, 1);

        mPoseFromViewButton = new QPushButton(groupBox_4);
        mPoseFromViewButton->setObjectName(QStringLiteral("mPoseFromViewButton"));

        gridLayout_3->addWidget(mPoseFromViewButton, 6, 0, 1, 2);


        mainLayout->addWidget(groupBox_4);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(QgsLayout3DMapWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayout3DMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayout3DMapWidgetBase)
    {
        QgsLayout3DMapWidgetBase->setWindowTitle(QApplication::translate("QgsLayout3DMapWidgetBase", "3D Map", Q_NULLPTR));
        mLabel->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "3D Map", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsLayout3DMapWidgetBase", "Scene Settings", Q_NULLPTR));
        mCopySettingsButton->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Copy Settings from a 3D View\342\200\246", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsLayout3DMapWidgetBase", "Camera Pose", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Center X", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Center Z", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Center Y", Q_NULLPTR));
        mHeadingAngleSpinBox->setSuffix(QApplication::translate("QgsLayout3DMapWidgetBase", " \302\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Heading", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Pitch", Q_NULLPTR));
        mPitchAngleSpinBox->setSuffix(QApplication::translate("QgsLayout3DMapWidgetBase", " \302\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Distance", Q_NULLPTR));
        mPoseFromViewButton->setText(QApplication::translate("QgsLayout3DMapWidgetBase", "Set from a 3D View\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayout3DMapWidgetBase: public Ui_QgsLayout3DMapWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUT3DMAPWIDGETBASE_H
