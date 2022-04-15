/********************************************************************************
** Form generated from reading UI file 'qgsgeorefconfigdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOREFCONFIGDIALOGBASE_H
#define UI_QGSGEOREFCONFIGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <qgsdoublespinbox.h>

QT_BEGIN_NAMESPACE

class Ui_QgsGeorefConfigDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QGroupBox *mPointTipGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *mShowIDsCheckBox;
    QCheckBox *mShowCoordsCheckBox;
    QCheckBox *mShowDockedCheckBox;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *mPaperSizeComboBox;
    QGroupBox *mPdfReportGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsDoubleSpinBox *mLeftMarginSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QgsDoubleSpinBox *mRightMarginSpinBox;
    QGroupBox *mResidualUnitsGroupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *mPixelsButton;
    QRadioButton *mMapUnitsButton;

    void setupUi(QDialog *QgsGeorefConfigDialogBase)
    {
        if (QgsGeorefConfigDialogBase->objectName().isEmpty())
            QgsGeorefConfigDialogBase->setObjectName(QStringLiteral("QgsGeorefConfigDialogBase"));
        QgsGeorefConfigDialogBase->resize(478, 542);
        gridLayout_4 = new QGridLayout(QgsGeorefConfigDialogBase);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 1);

        mPointTipGroupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        mPointTipGroupBox->setObjectName(QStringLiteral("mPointTipGroupBox"));
        gridLayout = new QGridLayout(mPointTipGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mShowIDsCheckBox = new QCheckBox(mPointTipGroupBox);
        mShowIDsCheckBox->setObjectName(QStringLiteral("mShowIDsCheckBox"));

        gridLayout->addWidget(mShowIDsCheckBox, 0, 0, 1, 1);

        mShowCoordsCheckBox = new QCheckBox(mPointTipGroupBox);
        mShowCoordsCheckBox->setObjectName(QStringLiteral("mShowCoordsCheckBox"));

        gridLayout->addWidget(mShowCoordsCheckBox, 1, 0, 1, 1);


        gridLayout_4->addWidget(mPointTipGroupBox, 0, 0, 1, 1);

        mShowDockedCheckBox = new QCheckBox(QgsGeorefConfigDialogBase);
        mShowDockedCheckBox->setObjectName(QStringLiteral("mShowDockedCheckBox"));

        gridLayout_4->addWidget(mShowDockedCheckBox, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGeorefConfigDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 6, 0, 1, 1);

        groupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        mPaperSizeComboBox = new QComboBox(groupBox);
        mPaperSizeComboBox->setObjectName(QStringLiteral("mPaperSizeComboBox"));

        horizontalLayout_3->addWidget(mPaperSizeComboBox);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 3, 0, 1, 1);

        mPdfReportGroupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        mPdfReportGroupBox->setObjectName(QStringLiteral("mPdfReportGroupBox"));
        gridLayout_2 = new QGridLayout(mPdfReportGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(mPdfReportGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mLeftMarginSpinBox = new QgsDoubleSpinBox(mPdfReportGroupBox);
        mLeftMarginSpinBox->setObjectName(QStringLiteral("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout->addWidget(mLeftMarginSpinBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(mPdfReportGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mRightMarginSpinBox = new QgsDoubleSpinBox(mPdfReportGroupBox);
        mRightMarginSpinBox->setObjectName(QStringLiteral("mRightMarginSpinBox"));
        mRightMarginSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mRightMarginSpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(mPdfReportGroupBox, 2, 0, 1, 1);

        mResidualUnitsGroupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        mResidualUnitsGroupBox->setObjectName(QStringLiteral("mResidualUnitsGroupBox"));
        gridLayout_3 = new QGridLayout(mResidualUnitsGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mPixelsButton = new QRadioButton(mResidualUnitsGroupBox);
        mPixelsButton->setObjectName(QStringLiteral("mPixelsButton"));

        gridLayout_3->addWidget(mPixelsButton, 0, 0, 1, 1);

        mMapUnitsButton = new QRadioButton(mResidualUnitsGroupBox);
        mMapUnitsButton->setObjectName(QStringLiteral("mMapUnitsButton"));

        gridLayout_3->addWidget(mMapUnitsButton, 1, 0, 1, 1);


        gridLayout_4->addWidget(mResidualUnitsGroupBox, 1, 0, 1, 1);

        QWidget::setTabOrder(mShowIDsCheckBox, mShowCoordsCheckBox);
        QWidget::setTabOrder(mShowCoordsCheckBox, mPixelsButton);
        QWidget::setTabOrder(mPixelsButton, mMapUnitsButton);
        QWidget::setTabOrder(mMapUnitsButton, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mPaperSizeComboBox);
        QWidget::setTabOrder(mPaperSizeComboBox, mShowDockedCheckBox);

        retranslateUi(QgsGeorefConfigDialogBase);

        QMetaObject::connectSlotsByName(QgsGeorefConfigDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefConfigDialogBase)
    {
        QgsGeorefConfigDialogBase->setWindowTitle(QApplication::translate("QgsGeorefConfigDialogBase", "Configure Georeferencer", Q_NULLPTR));
        mPointTipGroupBox->setTitle(QApplication::translate("QgsGeorefConfigDialogBase", "Point Tip", Q_NULLPTR));
        mShowIDsCheckBox->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Show IDs", Q_NULLPTR));
        mShowCoordsCheckBox->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Show coordinates", Q_NULLPTR));
        mShowDockedCheckBox->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Show Georeferencer window docked", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsGeorefConfigDialogBase", "PDF Map", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Paper size", Q_NULLPTR));
        mPdfReportGroupBox->setTitle(QApplication::translate("QgsGeorefConfigDialogBase", "PDF Report", Q_NULLPTR));
        label->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Left margin", Q_NULLPTR));
        mLeftMarginSpinBox->setPrefix(QString());
        mLeftMarginSpinBox->setSuffix(QApplication::translate("QgsGeorefConfigDialogBase", " mm", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Right margin", Q_NULLPTR));
        mRightMarginSpinBox->setSuffix(QApplication::translate("QgsGeorefConfigDialogBase", " mm", Q_NULLPTR));
        mResidualUnitsGroupBox->setTitle(QApplication::translate("QgsGeorefConfigDialogBase", "Residual Units", Q_NULLPTR));
        mPixelsButton->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Pixels", Q_NULLPTR));
        mMapUnitsButton->setText(QApplication::translate("QgsGeorefConfigDialogBase", "Use map units if possible", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefConfigDialogBase: public Ui_QgsGeorefConfigDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOREFCONFIGDIALOGBASE_H
