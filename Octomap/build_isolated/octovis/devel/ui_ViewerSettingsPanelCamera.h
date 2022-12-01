/********************************************************************************
** Form generated from reading UI file 'ViewerSettingsPanelCamera.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWERSETTINGSPANELCAMERA_H
#define UI_VIEWERSETTINGSPANELCAMERA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewerSettingsPanelCameraClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDoubleSpinBox *posX;
    QLabel *label_2;
    QDoubleSpinBox *posY;
    QLabel *label_3;
    QDoubleSpinBox *posZ;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDoubleSpinBox *lookX;
    QLabel *label_5;
    QDoubleSpinBox *lookY;
    QLabel *label_4;
    QDoubleSpinBox *lookZ;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *followGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *followCameraPathButton;
    QRadioButton *followTrajectoryButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *firstScanButton;
    QToolButton *previousScanButton;
    QToolButton *playScanButton;
    QToolButton *nextScanButton;
    QToolButton *lastScanButton;
    QToolButton *cameraPathAdd;
    QToolButton *cameraPathRemove;
    QToolButton *cameraPathSave;
    QToolButton *cameraPathClear;
    QHBoxLayout *horizontalLayout_2;
    QSlider *scanProgressSlider;
    QLabel *scanProgressLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ViewerSettingsPanelCameraClass)
    {
        if (ViewerSettingsPanelCameraClass->objectName().isEmpty())
            ViewerSettingsPanelCameraClass->setObjectName(QString::fromUtf8("ViewerSettingsPanelCameraClass"));
        ViewerSettingsPanelCameraClass->resize(326, 351);
        verticalLayout_3 = new QVBoxLayout(ViewerSettingsPanelCameraClass);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(ViewerSettingsPanelCameraClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        posX = new QDoubleSpinBox(groupBox_3);
        posX->setObjectName(QString::fromUtf8("posX"));
        posX->setMinimum(-99.000000000000000);
        posX->setSingleStep(0.500000000000000);

        horizontalLayout_4->addWidget(posX);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        posY = new QDoubleSpinBox(groupBox_3);
        posY->setObjectName(QString::fromUtf8("posY"));
        posY->setMinimum(-99.000000000000000);
        posY->setSingleStep(0.500000000000000);

        horizontalLayout_4->addWidget(posY);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        posZ = new QDoubleSpinBox(groupBox_3);
        posZ->setObjectName(QString::fromUtf8("posZ"));
        posZ->setMinimum(-99.000000000000000);
        posZ->setSingleStep(0.500000000000000);

        horizontalLayout_4->addWidget(posZ);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(ViewerSettingsPanelCameraClass);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lookX = new QDoubleSpinBox(groupBox_4);
        lookX->setObjectName(QString::fromUtf8("lookX"));
        lookX->setMinimum(-99.000000000000000);
        lookX->setSingleStep(0.500000000000000);

        horizontalLayout_5->addWidget(lookX);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lookY = new QDoubleSpinBox(groupBox_4);
        lookY->setObjectName(QString::fromUtf8("lookY"));
        lookY->setMinimum(-99.000000000000000);
        lookY->setSingleStep(0.500000000000000);

        horizontalLayout_5->addWidget(lookY);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lookZ = new QDoubleSpinBox(groupBox_4);
        lookZ->setObjectName(QString::fromUtf8("lookZ"));
        lookZ->setMinimum(-99.000000000000000);
        lookZ->setSingleStep(0.500000000000000);

        horizontalLayout_5->addWidget(lookZ);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox = new QGroupBox(ViewerSettingsPanelCameraClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        followGroupBox = new QGroupBox(groupBox);
        followGroupBox->setObjectName(QString::fromUtf8("followGroupBox"));
        followGroupBox->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(followGroupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        followCameraPathButton = new QRadioButton(followGroupBox);
        followCameraPathButton->setObjectName(QString::fromUtf8("followCameraPathButton"));
        followCameraPathButton->setChecked(true);

        horizontalLayout_3->addWidget(followCameraPathButton);

        followTrajectoryButton = new QRadioButton(followGroupBox);
        followTrajectoryButton->setObjectName(QString::fromUtf8("followTrajectoryButton"));

        horizontalLayout_3->addWidget(followTrajectoryButton);


        verticalLayout->addWidget(followGroupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstScanButton = new QToolButton(groupBox);
        firstScanButton->setObjectName(QString::fromUtf8("firstScanButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/media-skip-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        firstScanButton->setIcon(icon);

        horizontalLayout->addWidget(firstScanButton);

        previousScanButton = new QToolButton(groupBox);
        previousScanButton->setObjectName(QString::fromUtf8("previousScanButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/media-seek-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        previousScanButton->setIcon(icon1);

        horizontalLayout->addWidget(previousScanButton);

        playScanButton = new QToolButton(groupBox);
        playScanButton->setObjectName(QString::fromUtf8("playScanButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        playScanButton->setIcon(icon2);
        playScanButton->setCheckable(true);
        playScanButton->setChecked(false);

        horizontalLayout->addWidget(playScanButton);

        nextScanButton = new QToolButton(groupBox);
        nextScanButton->setObjectName(QString::fromUtf8("nextScanButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/media-seek-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextScanButton->setIcon(icon3);

        horizontalLayout->addWidget(nextScanButton);

        lastScanButton = new QToolButton(groupBox);
        lastScanButton->setObjectName(QString::fromUtf8("lastScanButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/media-skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        lastScanButton->setIcon(icon4);

        horizontalLayout->addWidget(lastScanButton);

        cameraPathAdd = new QToolButton(groupBox);
        cameraPathAdd->setObjectName(QString::fromUtf8("cameraPathAdd"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        cameraPathAdd->setIcon(icon5);

        horizontalLayout->addWidget(cameraPathAdd);

        cameraPathRemove = new QToolButton(groupBox);
        cameraPathRemove->setObjectName(QString::fromUtf8("cameraPathRemove"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        cameraPathRemove->setIcon(icon6);

        horizontalLayout->addWidget(cameraPathRemove);

        cameraPathSave = new QToolButton(groupBox);
        cameraPathSave->setObjectName(QString::fromUtf8("cameraPathSave"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        cameraPathSave->setIcon(icon7);

        horizontalLayout->addWidget(cameraPathSave);

        cameraPathClear = new QToolButton(groupBox);
        cameraPathClear->setObjectName(QString::fromUtf8("cameraPathClear"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/edit-clear-list.png"), QSize(), QIcon::Normal, QIcon::Off);
        cameraPathClear->setIcon(icon8);

        horizontalLayout->addWidget(cameraPathClear);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scanProgressSlider = new QSlider(groupBox);
        scanProgressSlider->setObjectName(QString::fromUtf8("scanProgressSlider"));
        scanProgressSlider->setMinimum(1);
        scanProgressSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(scanProgressSlider);

        scanProgressLabel = new QLabel(groupBox);
        scanProgressLabel->setObjectName(QString::fromUtf8("scanProgressLabel"));

        horizontalLayout_2->addWidget(scanProgressLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addWidget(groupBox);


        retranslateUi(ViewerSettingsPanelCameraClass);

        QMetaObject::connectSlotsByName(ViewerSettingsPanelCameraClass);
    } // setupUi

    void retranslateUi(QWidget *ViewerSettingsPanelCameraClass)
    {
        ViewerSettingsPanelCameraClass->setWindowTitle(QApplication::translate("ViewerSettingsPanelCameraClass", "ViewerSettingsPanelCamera", nullptr));
        groupBox_3->setTitle(QApplication::translate("ViewerSettingsPanelCameraClass", "Camera position", nullptr));
        label->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "X:", nullptr));
        label_2->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "Y:", nullptr));
        label_3->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "Z:", nullptr));
        groupBox_4->setTitle(QApplication::translate("ViewerSettingsPanelCameraClass", "Camera LookAt", nullptr));
        label_6->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "X:", nullptr));
        label_5->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "Y:", nullptr));
        label_4->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "Z:", nullptr));
        groupBox->setTitle(QApplication::translate("ViewerSettingsPanelCameraClass", "Camera follow mode", nullptr));
        followGroupBox->setTitle(QApplication::translate("ViewerSettingsPanelCameraClass", "Follow", nullptr));
        followCameraPathButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "Camera path", nullptr));
        followTrajectoryButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "Robot trajectory", nullptr));
#ifndef QT_NO_TOOLTIP
        firstScanButton->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "first frame", nullptr));
#endif // QT_NO_TOOLTIP
        firstScanButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "first position", nullptr));
#ifndef QT_NO_TOOLTIP
        previousScanButton->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "previous frame", nullptr));
#endif // QT_NO_TOOLTIP
        previousScanButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "previous position", nullptr));
#ifndef QT_NO_TOOLTIP
        playScanButton->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "play from current frame", nullptr));
#endif // QT_NO_TOOLTIP
        playScanButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "play", nullptr));
#ifndef QT_NO_TOOLTIP
        nextScanButton->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "next frame", nullptr));
#endif // QT_NO_TOOLTIP
        nextScanButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "next position", nullptr));
#ifndef QT_NO_TOOLTIP
        lastScanButton->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "last frame", nullptr));
#endif // QT_NO_TOOLTIP
        lastScanButton->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "last position", nullptr));
#ifndef QT_NO_TOOLTIP
        cameraPathAdd->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "add frame after current frame", nullptr));
#endif // QT_NO_TOOLTIP
        cameraPathAdd->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "add keyframe", nullptr));
#ifndef QT_NO_TOOLTIP
        cameraPathRemove->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "remove current frame", nullptr));
#endif // QT_NO_TOOLTIP
        cameraPathRemove->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "remove keyframe", nullptr));
#ifndef QT_NO_TOOLTIP
        cameraPathSave->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "save camera pose to current frame", nullptr));
#endif // QT_NO_TOOLTIP
        cameraPathSave->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "save current camera pose", nullptr));
#ifndef QT_NO_TOOLTIP
        cameraPathClear->setToolTip(QApplication::translate("ViewerSettingsPanelCameraClass", "clear all frames", nullptr));
#endif // QT_NO_TOOLTIP
        cameraPathClear->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "clear camera path", nullptr));
        scanProgressLabel->setText(QApplication::translate("ViewerSettingsPanelCameraClass", "0/1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewerSettingsPanelCameraClass: public Ui_ViewerSettingsPanelCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWERSETTINGSPANELCAMERA_H
