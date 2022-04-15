/********************************************************************************
** Form generated from reading UI file 'qgsinvertedpolygonrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H
#define UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsInvertedPolygonRendererWidgetBase
{
public:
    QVBoxLayout *mLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;
    QCheckBox *mMergePolygonsCheckBox;

    void setupUi(QWidget *QgsInvertedPolygonRendererWidgetBase)
    {
        if (QgsInvertedPolygonRendererWidgetBase->objectName().isEmpty())
            QgsInvertedPolygonRendererWidgetBase->setObjectName(QStringLiteral("QgsInvertedPolygonRendererWidgetBase"));
        QgsInvertedPolygonRendererWidgetBase->resize(316, 75);
        QgsInvertedPolygonRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        mLayout = new QVBoxLayout(QgsInvertedPolygonRendererWidgetBase);
        mLayout->setObjectName(QStringLiteral("mLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mRendererLabel = new QLabel(QgsInvertedPolygonRendererWidgetBase);
        mRendererLabel->setObjectName(QStringLiteral("mRendererLabel"));

        horizontalLayout->addWidget(mRendererLabel);

        mRendererComboBox = new QComboBox(QgsInvertedPolygonRendererWidgetBase);
        mRendererComboBox->setObjectName(QStringLiteral("mRendererComboBox"));

        horizontalLayout->addWidget(mRendererComboBox);


        mLayout->addLayout(horizontalLayout);

        mMergePolygonsCheckBox = new QCheckBox(QgsInvertedPolygonRendererWidgetBase);
        mMergePolygonsCheckBox->setObjectName(QStringLiteral("mMergePolygonsCheckBox"));

        mLayout->addWidget(mMergePolygonsCheckBox);

        QWidget::setTabOrder(mRendererComboBox, mMergePolygonsCheckBox);

        retranslateUi(QgsInvertedPolygonRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsInvertedPolygonRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsInvertedPolygonRendererWidgetBase)
    {
        mRendererLabel->setText(QApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Sub renderer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMergePolygonsCheckBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mMergePolygonsCheckBox->setText(QApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Merge polygons before rendering (slow)", Q_NULLPTR));
        Q_UNUSED(QgsInvertedPolygonRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsInvertedPolygonRendererWidgetBase: public Ui_QgsInvertedPolygonRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H
