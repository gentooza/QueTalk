/********************************************************************************
** Form generated from reading UI file 'LoginWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *baseTab;
    QGridLayout *gridLayout_2;
    QLabel *jidLabel;
    QLineEdit *jidLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QCheckBox *storePasswordCheckBox;
    QCheckBox *autoLoginCheckBox;
    QWidget *Advancetab;
    QGridLayout *gridLayout;
    QCheckBox *advanceCheckBox;
    QLabel *hostLabel;
    QLineEdit *hostLineEdit;
    QLabel *portLlabel;
    QSpinBox *portSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QLabel *stateLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        LoginWidget->resize(219, 505);
        LoginWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(LoginWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(LoginWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        baseTab = new QWidget();
        baseTab->setObjectName(QStringLiteral("baseTab"));
        gridLayout_2 = new QGridLayout(baseTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        jidLabel = new QLabel(baseTab);
        jidLabel->setObjectName(QStringLiteral("jidLabel"));

        gridLayout_2->addWidget(jidLabel, 0, 0, 1, 1);

        jidLineEdit = new QLineEdit(baseTab);
        jidLineEdit->setObjectName(QStringLiteral("jidLineEdit"));

        gridLayout_2->addWidget(jidLineEdit, 1, 0, 1, 2);

        passwordLabel = new QLabel(baseTab);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        gridLayout_2->addWidget(passwordLabel, 2, 0, 1, 1);

        passwordLineEdit = new QLineEdit(baseTab);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(passwordLineEdit, 3, 0, 1, 2);

        storePasswordCheckBox = new QCheckBox(baseTab);
        storePasswordCheckBox->setObjectName(QStringLiteral("storePasswordCheckBox"));

        gridLayout_2->addWidget(storePasswordCheckBox, 4, 0, 1, 1);

        autoLoginCheckBox = new QCheckBox(baseTab);
        autoLoginCheckBox->setObjectName(QStringLiteral("autoLoginCheckBox"));

        gridLayout_2->addWidget(autoLoginCheckBox, 5, 0, 1, 1);

        tabWidget->addTab(baseTab, QString());
        Advancetab = new QWidget();
        Advancetab->setObjectName(QStringLiteral("Advancetab"));
        gridLayout = new QGridLayout(Advancetab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        advanceCheckBox = new QCheckBox(Advancetab);
        advanceCheckBox->setObjectName(QStringLiteral("advanceCheckBox"));

        gridLayout->addWidget(advanceCheckBox, 0, 0, 1, 2);

        hostLabel = new QLabel(Advancetab);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        gridLayout->addWidget(hostLabel, 1, 0, 1, 1);

        hostLineEdit = new QLineEdit(Advancetab);
        hostLineEdit->setObjectName(QStringLiteral("hostLineEdit"));
        hostLineEdit->setEnabled(false);

        gridLayout->addWidget(hostLineEdit, 2, 0, 1, 2);

        portLlabel = new QLabel(Advancetab);
        portLlabel->setObjectName(QStringLiteral("portLlabel"));

        gridLayout->addWidget(portLlabel, 3, 0, 1, 1);

        portSpinBox = new QSpinBox(Advancetab);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portSpinBox->sizePolicy().hasHeightForWidth());
        portSpinBox->setSizePolicy(sizePolicy1);
        portSpinBox->setMaximum(9999);

        gridLayout->addWidget(portSpinBox, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(122, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        tabWidget->addTab(Advancetab, QString());

        verticalLayout->addWidget(tabWidget);

        loginButton = new QPushButton(LoginWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        verticalLayout->addWidget(loginButton);

        stateLabel = new QLabel(LoginWidget);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));
        stateLabel->setWordWrap(true);

        verticalLayout->addWidget(stateLabel);

        verticalSpacer_2 = new QSpacerItem(20, 249, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(LoginWidget);
        QObject::connect(advanceCheckBox, SIGNAL(toggled(bool)), hostLineEdit, SLOT(setEnabled(bool)));
        QObject::connect(advanceCheckBox, SIGNAL(toggled(bool)), portSpinBox, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        jidLabel->setText(QApplication::translate("LoginWidget", "Jabber ID", 0));
        passwordLabel->setText(QApplication::translate("LoginWidget", "Password", 0));
        storePasswordCheckBox->setText(QApplication::translate("LoginWidget", "Store Password", 0));
        autoLoginCheckBox->setText(QApplication::translate("LoginWidget", "Auto Login", 0));
        tabWidget->setTabText(tabWidget->indexOf(baseTab), QApplication::translate("LoginWidget", "Base", 0));
        advanceCheckBox->setText(QApplication::translate("LoginWidget", "Edit Advance Setting", 0));
        hostLabel->setText(QApplication::translate("LoginWidget", "Host", 0));
        portLlabel->setText(QApplication::translate("LoginWidget", "Port", 0));
        tabWidget->setTabText(tabWidget->indexOf(Advancetab), QApplication::translate("LoginWidget", "Advance", 0));
        loginButton->setText(QApplication::translate("LoginWidget", "Login", 0));
        loginButton->setShortcut(QApplication::translate("LoginWidget", "Return", 0));
        stateLabel->setText(QString());
        Q_UNUSED(LoginWidget);
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
