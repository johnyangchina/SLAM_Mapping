/********************************************************************************
** Form generated from reading UI file 'ViewerSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWERSETTINGS_H
#define UI_VIEWERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewerSettingsClass
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *resolution;
    QComboBox *laserType;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *maxRange;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewerSettingsClass)
    {
        if (ViewerSettingsClass->objectName().isEmpty())
            ViewerSettingsClass->setObjectName(QString::fromUtf8("ViewerSettingsClass"));
        ViewerSettingsClass->resize(400, 201);
        verticalLayout = new QVBoxLayout(ViewerSettingsClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(ViewerSettingsClass);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        resolution = new QDoubleSpinBox(ViewerSettingsClass);
        resolution->setObjectName(QString::fromUtf8("resolution"));
        resolution->setDecimals(3);
        resolution->setSingleStep(0.001000000000000);
        resolution->setValue(0.100000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, resolution);

        laserType = new QComboBox(ViewerSettingsClass);
        laserType->addItem(QString());
        laserType->addItem(QString());
        laserType->setObjectName(QString::fromUtf8("laserType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, laserType);

        label_2 = new QLabel(ViewerSettingsClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ViewerSettingsClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        maxRange = new QDoubleSpinBox(ViewerSettingsClass);
        maxRange->setObjectName(QString::fromUtf8("maxRange"));
        maxRange->setMinimum(-1.000000000000000);
        maxRange->setMaximum(1000.000000000000000);
        maxRange->setSingleStep(0.100000000000000);
        maxRange->setValue(-1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxRange);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(ViewerSettingsClass);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(laserType);
        label_2->setBuddy(resolution);
#endif // QT_NO_SHORTCUT

        retranslateUi(ViewerSettingsClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewerSettingsClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewerSettingsClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewerSettingsClass);
    } // setupUi

    void retranslateUi(QDialog *ViewerSettingsClass)
    {
        ViewerSettingsClass->setWindowTitle(QApplication::translate("ViewerSettingsClass", "ViewerSettings", nullptr));
        label->setText(QApplication::translate("ViewerSettingsClass", "Laser type: ", nullptr));
        laserType->setItemText(0, QApplication::translate("ViewerSettingsClass", "Hokuyo URG", nullptr));
        laserType->setItemText(1, QApplication::translate("ViewerSettingsClass", "Sick LMS", nullptr));

        label_2->setText(QApplication::translate("ViewerSettingsClass", "Octree resolution (m)", nullptr));
        label_3->setText(QApplication::translate("ViewerSettingsClass", "Max. laser range (m) -1: no limit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewerSettingsClass: public Ui_ViewerSettingsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWERSETTINGS_H
