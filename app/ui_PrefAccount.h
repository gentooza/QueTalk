/********************************************************************************
** Form generated from reading UI file 'PrefAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFACCOUNT_H
#define UI_PREFACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefAccount
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *baseTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *jidLabel;
    QLineEdit *jidLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QCheckBox *storePasswordCheckBox;
    QCheckBox *autoLoginCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *advanceTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QCheckBox *advanceCheckBox;
    QLabel *hostLabel;
    QLineEdit *hostLineEdit;
    QLabel *portLlabel;
    QSpinBox *portSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PrefAccount)
    {
        if (PrefAccount->objectName().isEmpty())
            PrefAccount->setObjectName(QStringLiteral("PrefAccount"));
        PrefAccount->resize(450, 400);
        PrefAccount->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(PrefAccount);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        tabWidget = new QTabWidget(PrefAccount);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        baseTab = new QWidget();
        baseTab->setObjectName(QStringLiteral("baseTab"));
        verticalLayout_2 = new QVBoxLayout(baseTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        jidLabel = new QLabel(baseTab);
        jidLabel->setObjectName(QStringLiteral("jidLabel"));

        gridLayout->addWidget(jidLabel, 0, 0, 1, 1);

        jidLineEdit = new QLineEdit(baseTab);
        jidLineEdit->setObjectName(QStringLiteral("jidLineEdit"));

        gridLayout->addWidget(jidLineEdit, 1, 0, 1, 1);

        passwordLabel = new QLabel(baseTab);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 1);

        passwordLineEdit = new QLineEdit(baseTab);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 3, 0, 1, 1);

        storePasswordCheckBox = new QCheckBox(baseTab);
        storePasswordCheckBox->setObjectName(QStringLiteral("storePasswordCheckBox"));

        gridLayout->addWidget(storePasswordCheckBox, 4, 0, 1, 1);

        autoLoginCheckBox = new QCheckBox(baseTab);
        autoLoginCheckBox->setObjectName(QStringLiteral("autoLoginCheckBox"));

        gridLayout->addWidget(autoLoginCheckBox, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(baseTab, QString());
        advanceTab = new QWidget();
        advanceTab->setObjectName(QStringLiteral("advanceTab"));
        verticalLayout_3 = new QVBoxLayout(advanceTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        advanceCheckBox = new QCheckBox(advanceTab);
        advanceCheckBox->setObjectName(QStringLiteral("advanceCheckBox"));

        gridLayout_2->addWidget(advanceCheckBox, 0, 0, 1, 2);

        hostLabel = new QLabel(advanceTab);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        gridLayout_2->addWidget(hostLabel, 1, 0, 1, 1);

        hostLineEdit = new QLineEdit(advanceTab);
        hostLineEdit->setObjectName(QStringLiteral("hostLineEdit"));
        hostLineEdit->setEnabled(false);

        gridLayout_2->addWidget(hostLineEdit, 2, 0, 1, 2);

        portLlabel = new QLabel(advanceTab);
        portLlabel->setObjectName(QStringLiteral("portLlabel"));

        gridLayout_2->addWidget(portLlabel, 3, 0, 1, 1);

        portSpinBox = new QSpinBox(advanceTab);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portSpinBox->sizePolicy().hasHeightForWidth());
        portSpinBox->setSizePolicy(sizePolicy);
        portSpinBox->setMaximum(9999);

        gridLayout_2->addWidget(portSpinBox, 4, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(advanceTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PrefAccount);
        QObject::connect(advanceCheckBox, SIGNAL(toggled(bool)), hostLineEdit, SLOT(setEnabled(bool)));
        QObject::connect(advanceCheckBox, SIGNAL(toggled(bool)), portSpinBox, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrefAccount);
    } // setupUi

    void retranslateUi(QWidget *PrefAccount)
    {
        jidLabel->setText(QApplication::translate("PrefAccount", "Jabber ID", 0));
        passwordLabel->setText(QApplication::translate("PrefAccount", "Password", 0));
        storePasswordCheckBox->setText(QApplication::translate("PrefAccount", "Store Password", 0));
        autoLoginCheckBox->setText(QApplication::translate("PrefAccount", "Auto Login", 0));
        tabWidget->setTabText(tabWidget->indexOf(baseTab), QApplication::translate("PrefAccount", "Base", 0));
        advanceCheckBox->setText(QApplication::translate("PrefAccount", "Edit Advance Setting", 0));
        hostLabel->setText(QApplication::translate("PrefAccount", "Host", 0));
        portLlabel->setText(QApplication::translate("PrefAccount", "Port", 0));
        tabWidget->setTabText(tabWidget->indexOf(advanceTab), QApplication::translate("PrefAccount", "advance", 0));
        Q_UNUSED(PrefAccount);
    } // retranslateUi

};

namespace Ui {
    class PrefAccount: public Ui_PrefAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFACCOUNT_H
