/********************************************************************************
** Form generated from reading UI file 'qgsmeshstaticdatasetwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHSTATICDATASETWIDGETBASE_H
#define UI_QGSMESHSTATICDATASETWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMeshStaticDatasetWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *mVectorDatasetComboBox;
    QLabel *label_3;
    QLabel *label;
    QComboBox *mScalarDatasetComboBox;
    QFrame *line;
    QLabel *mScalarName;
    QLabel *mVectorName;

    void setupUi(QWidget *QgsMeshStaticDatasetWidget)
    {
        if (QgsMeshStaticDatasetWidget->objectName().isEmpty())
            QgsMeshStaticDatasetWidget->setObjectName(QStringLiteral("QgsMeshStaticDatasetWidget"));
        QgsMeshStaticDatasetWidget->resize(400, 128);
        QgsMeshStaticDatasetWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsMeshStaticDatasetWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        mVectorDatasetComboBox = new QComboBox(QgsMeshStaticDatasetWidget);
        mVectorDatasetComboBox->setObjectName(QStringLiteral("mVectorDatasetComboBox"));

        gridLayout->addWidget(mVectorDatasetComboBox, 3, 2, 1, 1);

        label_3 = new QLabel(QgsMeshStaticDatasetWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(QgsMeshStaticDatasetWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mScalarDatasetComboBox = new QComboBox(QgsMeshStaticDatasetWidget);
        mScalarDatasetComboBox->setObjectName(QStringLiteral("mScalarDatasetComboBox"));

        gridLayout->addWidget(mScalarDatasetComboBox, 3, 0, 1, 1);

        line = new QFrame(QgsMeshStaticDatasetWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 4, 1);

        mScalarName = new QLabel(QgsMeshStaticDatasetWidget);
        mScalarName->setObjectName(QStringLiteral("mScalarName"));

        gridLayout->addWidget(mScalarName, 1, 0, 2, 1);

        mVectorName = new QLabel(QgsMeshStaticDatasetWidget);
        mVectorName->setObjectName(QStringLiteral("mVectorName"));

        gridLayout->addWidget(mVectorName, 1, 2, 2, 1);

        QWidget::setTabOrder(mScalarDatasetComboBox, mVectorDatasetComboBox);

        retranslateUi(QgsMeshStaticDatasetWidget);

        QMetaObject::connectSlotsByName(QgsMeshStaticDatasetWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshStaticDatasetWidget)
    {
        label_3->setText(QApplication::translate("QgsMeshStaticDatasetWidget", "Vector Dataset Group", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMeshStaticDatasetWidget", "Scalar Dataset Group", Q_NULLPTR));
        mScalarName->setText(QApplication::translate("QgsMeshStaticDatasetWidget", "Name", Q_NULLPTR));
        mVectorName->setText(QApplication::translate("QgsMeshStaticDatasetWidget", "Name", Q_NULLPTR));
        Q_UNUSED(QgsMeshStaticDatasetWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshStaticDatasetWidget: public Ui_QgsMeshStaticDatasetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHSTATICDATASETWIDGETBASE_H
