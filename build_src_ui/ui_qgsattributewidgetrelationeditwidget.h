/********************************************************************************
** Form generated from reading UI file 'qgsattributewidgetrelationeditwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEWIDGETRELATIONEDITWIDGET_H
#define UI_QGSATTRIBUTEWIDGETRELATIONEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeWidgetRelationEditWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLabel;
    QLineEdit *mRelationLabelEdit;
    QCheckBox *mRelationShowLinkCheckBox;
    QCheckBox *mRelationShowUnlinkCheckBox;
    QCheckBox *mRelationShowSaveChildEditsCheckBox;
    QCheckBox *mRelationShowAddChildCheckBox;
    QCheckBox *mRelationShowDuplicateChildFeatureCheckBox;
    QCheckBox *mRelationDeleteChildFeatureCheckBox;
    QCheckBox *mRelationShowZoomToFeatureCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cardinalityLabel;
    QComboBox *mRelationCardinalityCombo;
    QCheckBox *mRelationForceSuppressFormPopupCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAttributeWidgetRelationEditWidget)
    {
        if (QgsAttributeWidgetRelationEditWidget->objectName().isEmpty())
            QgsAttributeWidgetRelationEditWidget->setObjectName(QStringLiteral("QgsAttributeWidgetRelationEditWidget"));
        QgsAttributeWidgetRelationEditWidget->resize(340, 361);
        verticalLayout = new QVBoxLayout(QgsAttributeWidgetRelationEditWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelLabel = new QLabel(QgsAttributeWidgetRelationEditWidget);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));

        horizontalLayout->addWidget(labelLabel);

        mRelationLabelEdit = new QLineEdit(QgsAttributeWidgetRelationEditWidget);
        mRelationLabelEdit->setObjectName(QStringLiteral("mRelationLabelEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRelationLabelEdit->sizePolicy().hasHeightForWidth());
        mRelationLabelEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mRelationLabelEdit);


        verticalLayout->addLayout(horizontalLayout);

        mRelationShowLinkCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationShowLinkCheckBox->setObjectName(QStringLiteral("mRelationShowLinkCheckBox"));

        verticalLayout->addWidget(mRelationShowLinkCheckBox);

        mRelationShowUnlinkCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationShowUnlinkCheckBox->setObjectName(QStringLiteral("mRelationShowUnlinkCheckBox"));

        verticalLayout->addWidget(mRelationShowUnlinkCheckBox);

        mRelationShowSaveChildEditsCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationShowSaveChildEditsCheckBox->setObjectName(QStringLiteral("mRelationShowSaveChildEditsCheckBox"));

        verticalLayout->addWidget(mRelationShowSaveChildEditsCheckBox);

        mRelationShowAddChildCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationShowAddChildCheckBox->setObjectName(QStringLiteral("mRelationShowAddChildCheckBox"));

        verticalLayout->addWidget(mRelationShowAddChildCheckBox);

        mRelationShowDuplicateChildFeatureCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationShowDuplicateChildFeatureCheckBox->setObjectName(QStringLiteral("mRelationShowDuplicateChildFeatureCheckBox"));

        verticalLayout->addWidget(mRelationShowDuplicateChildFeatureCheckBox);

        mRelationDeleteChildFeatureCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationDeleteChildFeatureCheckBox->setObjectName(QStringLiteral("mRelationDeleteChildFeatureCheckBox"));

        verticalLayout->addWidget(mRelationDeleteChildFeatureCheckBox);

        mRelationShowZoomToFeatureCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationShowZoomToFeatureCheckBox->setObjectName(QStringLiteral("mRelationShowZoomToFeatureCheckBox"));

        verticalLayout->addWidget(mRelationShowZoomToFeatureCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cardinalityLabel = new QLabel(QgsAttributeWidgetRelationEditWidget);
        cardinalityLabel->setObjectName(QStringLiteral("cardinalityLabel"));

        horizontalLayout_2->addWidget(cardinalityLabel);

        mRelationCardinalityCombo = new QComboBox(QgsAttributeWidgetRelationEditWidget);
        mRelationCardinalityCombo->setObjectName(QStringLiteral("mRelationCardinalityCombo"));

        horizontalLayout_2->addWidget(mRelationCardinalityCombo);


        verticalLayout->addLayout(horizontalLayout_2);

        mRelationForceSuppressFormPopupCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationForceSuppressFormPopupCheckBox->setObjectName(QStringLiteral("mRelationForceSuppressFormPopupCheckBox"));

        verticalLayout->addWidget(mRelationForceSuppressFormPopupCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsAttributeWidgetRelationEditWidget);

        QMetaObject::connectSlotsByName(QgsAttributeWidgetRelationEditWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeWidgetRelationEditWidget)
    {
        QgsAttributeWidgetRelationEditWidget->setWindowTitle(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Attribute Widget Relation Edit Widget", Q_NULLPTR));
        labelLabel->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Label", Q_NULLPTR));
        mRelationShowLinkCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Show link button", Q_NULLPTR));
        mRelationShowUnlinkCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Show unlink button", Q_NULLPTR));
        mRelationShowSaveChildEditsCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Show save child layer edits button", Q_NULLPTR));
        mRelationShowAddChildCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Add child feature", Q_NULLPTR));
        mRelationShowDuplicateChildFeatureCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Duplicate child feature", Q_NULLPTR));
        mRelationDeleteChildFeatureCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Delete child feature", Q_NULLPTR));
        mRelationShowZoomToFeatureCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Zoom to child feature", Q_NULLPTR));
        cardinalityLabel->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Cardinality", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        mRelationForceSuppressFormPopupCheckBox->setStatusTip(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Do not open a new attribute form after digitizing a new feature, overrides all other options", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        mRelationForceSuppressFormPopupCheckBox->setText(QApplication::translate("QgsAttributeWidgetRelationEditWidget", "Force hide form on add feature", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeWidgetRelationEditWidget: public Ui_QgsAttributeWidgetRelationEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEWIDGETRELATIONEDITWIDGET_H
