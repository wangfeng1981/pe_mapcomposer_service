/********************************************************************************
** Form generated from reading UI file 'qgsanimationexportdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANIMATIONEXPORTDIALOGBASE_H
#define UI_QGSANIMATIONEXPORTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsratiolockbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnimationExportDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QLabel *mOutputDirLabel_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QDateTimeEdit *mEndDateTime;
    QLabel *label_5;
    QDateTimeEdit *mStartDateTime;
    QToolButton *mSetToProjectTimeButton;
    QLabel *label_2;
    QgsDoubleSpinBox *mFrameDurationSpinBox;
    QComboBox *mTimeStepsComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *mTemplateLabel_2;
    QLineEdit *mTemplateLineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QgsSpinBox *mOutputHeightSpinBox;
    QgsSpinBox *mOutputWidthSpinBox;
    QgsRatioLockButton *mLockAspectRatio;
    QgsExtentGroupBox *mExtentGroupBox;
    QLabel *label_4;
    QCheckBox *mDrawDecorations;
    QgsFileWidget *mOutputDirFileWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAnimationExportDialogBase)
    {
        if (QgsAnimationExportDialogBase->objectName().isEmpty())
            QgsAnimationExportDialogBase->setObjectName(QStringLiteral("QgsAnimationExportDialogBase"));
        QgsAnimationExportDialogBase->resize(600, 629);
        gridLayout_5 = new QGridLayout(QgsAnimationExportDialogBase);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mOutputDirLabel_2 = new QLabel(QgsAnimationExportDialogBase);
        mOutputDirLabel_2->setObjectName(QStringLiteral("mOutputDirLabel_2"));

        gridLayout_5->addWidget(mOutputDirLabel_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsAnimationExportDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        mEndDateTime = new QDateTimeEdit(groupBox);
        mEndDateTime->setObjectName(QStringLiteral("mEndDateTime"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEndDateTime->sizePolicy().hasHeightForWidth());
        mEndDateTime->setSizePolicy(sizePolicy);
        mEndDateTime->setTimeSpec(Qt::UTC);

        gridLayout->addWidget(mEndDateTime, 0, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        mStartDateTime = new QDateTimeEdit(groupBox);
        mStartDateTime->setObjectName(QStringLiteral("mStartDateTime"));
        sizePolicy.setHeightForWidth(mStartDateTime->sizePolicy().hasHeightForWidth());
        mStartDateTime->setSizePolicy(sizePolicy);
        mStartDateTime->setTimeSpec(Qt::UTC);

        gridLayout->addWidget(mStartDateTime, 0, 2, 1, 1);

        mSetToProjectTimeButton = new QToolButton(groupBox);
        mSetToProjectTimeButton->setObjectName(QStringLiteral("mSetToProjectTimeButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSetToProjectTimeButton->setIcon(icon);
        mSetToProjectTimeButton->setAutoRaise(true);

        gridLayout->addWidget(mSetToProjectTimeButton, 0, 5, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mFrameDurationSpinBox = new QgsDoubleSpinBox(groupBox);
        mFrameDurationSpinBox->setObjectName(QStringLiteral("mFrameDurationSpinBox"));
        mFrameDurationSpinBox->setDecimals(3);
        mFrameDurationSpinBox->setMaximum(1e+10);

        gridLayout->addWidget(mFrameDurationSpinBox, 1, 2, 1, 1);

        mTimeStepsComboBox = new QComboBox(groupBox);
        mTimeStepsComboBox->setObjectName(QStringLiteral("mTimeStepsComboBox"));
        mTimeStepsComboBox->setEditable(false);

        gridLayout->addWidget(mTimeStepsComboBox, 1, 3, 1, 3);


        gridLayout_5->addWidget(groupBox, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 6, 0, 1, 1);

        mTemplateLabel_2 = new QLabel(QgsAnimationExportDialogBase);
        mTemplateLabel_2->setObjectName(QStringLiteral("mTemplateLabel_2"));

        gridLayout_5->addWidget(mTemplateLabel_2, 0, 0, 1, 1);

        mTemplateLineEdit = new QLineEdit(QgsAnimationExportDialogBase);
        mTemplateLineEdit->setObjectName(QStringLiteral("mTemplateLineEdit"));

        gridLayout_5->addWidget(mTemplateLineEdit, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(QgsAnimationExportDialogBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        mOutputHeightSpinBox = new QgsSpinBox(groupBox_2);
        mOutputHeightSpinBox->setObjectName(QStringLiteral("mOutputHeightSpinBox"));
        mOutputHeightSpinBox->setMinimum(1);
        mOutputHeightSpinBox->setMaximum(99999);
        mOutputHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mOutputHeightSpinBox, 2, 1, 1, 1);

        mOutputWidthSpinBox = new QgsSpinBox(groupBox_2);
        mOutputWidthSpinBox->setObjectName(QStringLiteral("mOutputWidthSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOutputWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutputWidthSpinBox->setSizePolicy(sizePolicy1);
        mOutputWidthSpinBox->setMinimum(1);
        mOutputWidthSpinBox->setMaximum(99999);
        mOutputWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mOutputWidthSpinBox, 1, 1, 1, 1);

        mLockAspectRatio = new QgsRatioLockButton(groupBox_2);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy2);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        gridLayout_3->addWidget(mLockAspectRatio, 1, 2, 2, 1);

        mExtentGroupBox = new QgsExtentGroupBox(groupBox_2);
        mExtentGroupBox->setObjectName(QStringLiteral("mExtentGroupBox"));
        mExtentGroupBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mExtentGroupBox, 0, 0, 1, 3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        mDrawDecorations = new QCheckBox(groupBox_2);
        mDrawDecorations->setObjectName(QStringLiteral("mDrawDecorations"));
        mDrawDecorations->setChecked(true);

        gridLayout_3->addWidget(mDrawDecorations, 3, 0, 1, 2);


        gridLayout_5->addWidget(groupBox_2, 2, 0, 1, 2);

        mOutputDirFileWidget = new QgsFileWidget(QgsAnimationExportDialogBase);
        mOutputDirFileWidget->setObjectName(QStringLiteral("mOutputDirFileWidget"));

        gridLayout_5->addWidget(mOutputDirFileWidget, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAnimationExportDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_5->addWidget(buttonBox, 7, 0, 1, 2);


        retranslateUi(QgsAnimationExportDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAnimationExportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAnimationExportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAnimationExportDialogBase)
    {
        QgsAnimationExportDialogBase->setWindowTitle(QApplication::translate("QgsAnimationExportDialogBase", "Export Map Animation", Q_NULLPTR));
        mOutputDirLabel_2->setText(QApplication::translate("QgsAnimationExportDialogBase", "Output directory", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsAnimationExportDialogBase", "Temporal Settings", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsAnimationExportDialogBase", "Range", Q_NULLPTR));
        mEndDateTime->setDisplayFormat(QApplication::translate("QgsAnimationExportDialogBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsAnimationExportDialogBase", "to ", Q_NULLPTR));
        mStartDateTime->setDisplayFormat(QApplication::translate("QgsAnimationExportDialogBase", "M/d/yyyy h:mm AP", Q_NULLPTR));
        mSetToProjectTimeButton->setText(QString());
        label_2->setText(QApplication::translate("QgsAnimationExportDialogBase", "Step (frame length)", Q_NULLPTR));
        mTimeStepsComboBox->setCurrentText(QString());
        mTemplateLabel_2->setText(QApplication::translate("QgsAnimationExportDialogBase", "Template", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTemplateLineEdit->setToolTip(QApplication::translate("QgsAnimationExportDialogBase", "Number of # represents number of digits (e.g. frame###.png -> frame001.png)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("QgsAnimationExportDialogBase", "Map Settings", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsAnimationExportDialogBase", "Output width", Q_NULLPTR));
        mOutputHeightSpinBox->setSuffix(QApplication::translate("QgsAnimationExportDialogBase", " px", Q_NULLPTR));
        mOutputHeightSpinBox->setPrefix(QString());
        mOutputWidthSpinBox->setSuffix(QApplication::translate("QgsAnimationExportDialogBase", " px", Q_NULLPTR));
        mOutputWidthSpinBox->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("QgsAnimationExportDialogBase", "Lock aspect ratio (including while drawing extent onto canvas)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mExtentGroupBox->setTitle(QApplication::translate("QgsAnimationExportDialogBase", "Extent", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsAnimationExportDialogBase", "Output height", Q_NULLPTR));
        mDrawDecorations->setText(QApplication::translate("QgsAnimationExportDialogBase", "Draw active decorations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAnimationExportDialogBase: public Ui_QgsAnimationExportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANIMATIONEXPORTDIALOGBASE_H
