/********************************************************************************
** Form generated from reading UI file 'PrefGeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFGENERAL_H
#define UI_PREFGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefGeneral
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *generalTab;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *hideOfflineCheckBox;
    QCheckBox *showResourcesCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *showSingleResourceCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QSlider *iconSizeHorizontalSlider;
    QSpinBox *iconSizeSpinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *closeToTrayNoticeCheckBox;
    QCheckBox *closeToTrayCheckBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *PrefGeneral)
    {
        if (PrefGeneral->objectName().isEmpty())
            PrefGeneral->setObjectName(QStringLiteral("PrefGeneral"));
        PrefGeneral->resize(450, 400);
        PrefGeneral->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(PrefGeneral);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        tabWidget = new QTabWidget(PrefGeneral);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        generalTab = new QWidget();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        gridLayout_4 = new QGridLayout(generalTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(generalTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        hideOfflineCheckBox = new QCheckBox(groupBox);
        hideOfflineCheckBox->setObjectName(QStringLiteral("hideOfflineCheckBox"));

        gridLayout_2->addWidget(hideOfflineCheckBox, 0, 0, 1, 1);

        showResourcesCheckBox = new QCheckBox(groupBox);
        showResourcesCheckBox->setObjectName(QStringLiteral("showResourcesCheckBox"));

        gridLayout_2->addWidget(showResourcesCheckBox, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        showSingleResourceCheckBox = new QCheckBox(groupBox);
        showSingleResourceCheckBox->setObjectName(QStringLiteral("showSingleResourceCheckBox"));

        horizontalLayout_2->addWidget(showSingleResourceCheckBox);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        iconSizeHorizontalSlider = new QSlider(groupBox);
        iconSizeHorizontalSlider->setObjectName(QStringLiteral("iconSizeHorizontalSlider"));
        iconSizeHorizontalSlider->setMinimum(24);
        iconSizeHorizontalSlider->setMaximum(64);
        iconSizeHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(iconSizeHorizontalSlider);

        iconSizeSpinBox = new QSpinBox(groupBox);
        iconSizeSpinBox->setObjectName(QStringLiteral("iconSizeSpinBox"));
        iconSizeSpinBox->setMinimum(24);
        iconSizeSpinBox->setMaximum(64);

        horizontalLayout_3->addWidget(iconSizeSpinBox);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(generalTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeToTrayNoticeCheckBox = new QCheckBox(groupBox_2);
        closeToTrayNoticeCheckBox->setObjectName(QStringLiteral("closeToTrayNoticeCheckBox"));

        horizontalLayout->addWidget(closeToTrayNoticeCheckBox);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        closeToTrayCheckBox = new QCheckBox(groupBox_2);
        closeToTrayCheckBox->setObjectName(QStringLiteral("closeToTrayCheckBox"));

        gridLayout_3->addWidget(closeToTrayCheckBox, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(generalTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        languageComboBox = new QComboBox(groupBox_3);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));

        horizontalLayout_4->addWidget(languageComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);

        tabWidget->addTab(generalTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PrefGeneral);
        QObject::connect(showResourcesCheckBox, SIGNAL(toggled(bool)), showSingleResourceCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(iconSizeHorizontalSlider, SIGNAL(valueChanged(int)), iconSizeSpinBox, SLOT(setValue(int)));
        QObject::connect(iconSizeSpinBox, SIGNAL(valueChanged(int)), iconSizeHorizontalSlider, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrefGeneral);
    } // setupUi

    void retranslateUi(QWidget *PrefGeneral)
    {
        groupBox->setTitle(QApplication::translate("PrefGeneral", "Roster View", 0));
        hideOfflineCheckBox->setText(QApplication::translate("PrefGeneral", "Hide offline contact", 0));
        showResourcesCheckBox->setText(QApplication::translate("PrefGeneral", "Show resources", 0));
        showSingleResourceCheckBox->setText(QApplication::translate("PrefGeneral", "Contain single resource", 0));
        label->setText(QApplication::translate("PrefGeneral", "Icon size (px)", 0));
        groupBox_2->setTitle(QApplication::translate("PrefGeneral", "Behavior", 0));
        closeToTrayNoticeCheckBox->setText(QApplication::translate("PrefGeneral", "Alway notice", 0));
        closeToTrayCheckBox->setText(QApplication::translate("PrefGeneral", "Close to tray", 0));
        groupBox_3->setTitle(QApplication::translate("PrefGeneral", "Language", 0));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QApplication::translate("PrefGeneral", "General", 0));
        Q_UNUSED(PrefGeneral);
    } // retranslateUi

};

namespace Ui {
    class PrefGeneral: public Ui_PrefGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFGENERAL_H
