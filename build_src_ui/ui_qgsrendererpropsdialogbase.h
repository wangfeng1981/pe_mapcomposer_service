/********************************************************************************
** Form generated from reading UI file 'qgsrendererpropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERPROPSDIALOGBASE_H
#define UI_QGSRENDERERPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererPropsDialogBase
{
public:
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *mainStack;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsCollapsibleGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_1;
    QLabel *lblLayerBlend;
    QLabel *lblFeatureBlend;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QgsBlendModeComboBox *mFeatureBlendComboBox;
    QLabel *lblTransparency;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkboxEnableOrderBy;
    QToolButton *btnOrderBy;
    QgsEffectStackCompactWidget *mEffectWidget;
    QLabel *lblBlend;
    QgsOpacityWidget *mOpacityWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRendererPropsDialogBase)
    {
        if (QgsRendererPropsDialogBase->objectName().isEmpty())
            QgsRendererPropsDialogBase->setObjectName(QStringLiteral("QgsRendererPropsDialogBase"));
        QgsRendererPropsDialogBase->resize(370, 501);
        verticalLayout_5 = new QVBoxLayout(QgsRendererPropsDialogBase);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mainStack = new QStackedWidget(QgsRendererPropsDialogBase);
        mainStack->setObjectName(QStringLiteral("mainStack"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cboRenderers = new QComboBox(page);
        cboRenderers->setObjectName(QStringLiteral("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QStringLiteral("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        verticalLayout_2->addWidget(stackedWidget);

        mLayerRenderingGroupBox = new QgsCollapsibleGroupBox(page);
        mLayerRenderingGroupBox->setObjectName(QStringLiteral("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        mLayerRenderingGroupBox->setProperty("collapsed", QVariant(true));
        mLayerRenderingGroupBox->setProperty("saveCollapsedState", QVariant(false));
        gridLayout = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 3, -1);
        gridLayout_1 = new QGridLayout();
        gridLayout_1->setSpacing(1);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, -1, 0, -1);
        lblLayerBlend = new QLabel(mLayerRenderingGroupBox);
        lblLayerBlend->setObjectName(QStringLiteral("lblLayerBlend"));

        gridLayout_1->addWidget(lblLayerBlend, 0, 0, 1, 1);

        lblFeatureBlend = new QLabel(mLayerRenderingGroupBox);
        lblFeatureBlend->setObjectName(QStringLiteral("lblFeatureBlend"));

        gridLayout_1->addWidget(lblFeatureBlend, 0, 1, 1, 1);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QStringLiteral("mBlendModeComboBox"));
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(mBlendModeComboBox, 1, 0, 1, 1);

        mFeatureBlendComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mFeatureBlendComboBox->setObjectName(QStringLiteral("mFeatureBlendComboBox"));
        sizePolicy.setHeightForWidth(mFeatureBlendComboBox->sizePolicy().hasHeightForWidth());
        mFeatureBlendComboBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(mFeatureBlendComboBox, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_1, 1, 1, 1, 2);

        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QStringLiteral("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkboxEnableOrderBy = new QCheckBox(mLayerRenderingGroupBox);
        checkboxEnableOrderBy->setObjectName(QStringLiteral("checkboxEnableOrderBy"));

        horizontalLayout_3->addWidget(checkboxEnableOrderBy);

        btnOrderBy = new QToolButton(mLayerRenderingGroupBox);
        btnOrderBy->setObjectName(QStringLiteral("btnOrderBy"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/sort.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnOrderBy->setIcon(icon);

        horizontalLayout_3->addWidget(btnOrderBy);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 3);

        mEffectWidget = new QgsEffectStackCompactWidget(mLayerRenderingGroupBox);
        mEffectWidget->setObjectName(QStringLiteral("mEffectWidget"));
        mEffectWidget->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(mEffectWidget, 2, 0, 1, 3);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QStringLiteral("lblBlend"));

        gridLayout->addWidget(lblBlend, 1, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 0, 1, 1, 2);


        verticalLayout_2->addWidget(mLayerRenderingGroupBox);

        buttonBox = new QDialogButtonBox(page);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_4->addLayout(verticalLayout_2);

        mainStack->addWidget(page);

        verticalLayout_5->addWidget(mainStack);

        QWidget::setTabOrder(cboRenderers, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mFeatureBlendComboBox);
        QWidget::setTabOrder(mFeatureBlendComboBox, checkboxEnableOrderBy);
        QWidget::setTabOrder(checkboxEnableOrderBy, btnOrderBy);

        retranslateUi(QgsRendererPropsDialogBase);

        QMetaObject::connectSlotsByName(QgsRendererPropsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRendererPropsDialogBase)
    {
        QgsRendererPropsDialogBase->setWindowTitle(QApplication::translate("QgsRendererPropsDialogBase", "Renderer Settings", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRendererPropsDialogBase", "This renderer doesn't implement a graphical interface.", Q_NULLPTR));
        mLayerRenderingGroupBox->setTitle(QApplication::translate("QgsRendererPropsDialogBase", "Layer Rendering", Q_NULLPTR));
        lblLayerBlend->setText(QApplication::translate("QgsRendererPropsDialogBase", "Layer", Q_NULLPTR));
        lblFeatureBlend->setText(QApplication::translate("QgsRendererPropsDialogBase", "Feature", Q_NULLPTR));
        lblTransparency->setText(QApplication::translate("QgsRendererPropsDialogBase", "Opacity", Q_NULLPTR));
        checkboxEnableOrderBy->setText(QApplication::translate("QgsRendererPropsDialogBase", "Control feature rendering order", Q_NULLPTR));
        btnOrderBy->setText(QApplication::translate("QgsRendererPropsDialogBase", "\342\200\246", Q_NULLPTR));
        lblBlend->setText(QApplication::translate("QgsRendererPropsDialogBase", "Blending mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsRendererPropsDialogBase: public Ui_QgsRendererPropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERPROPSDIALOGBASE_H
