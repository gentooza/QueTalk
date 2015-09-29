/********************************************************************************
** Form generated from reading UI file 'PrefChatWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFCHATWINDOW_H
#define UI_PREFCHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefChatWindow
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *baseTab;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *enterRadioButton;
    QRadioButton *ctrlEnterRadioButton;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PrefChatWindow)
    {
        if (PrefChatWindow->objectName().isEmpty())
            PrefChatWindow->setObjectName(QStringLiteral("PrefChatWindow"));
        PrefChatWindow->resize(450, 400);
        PrefChatWindow->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(PrefChatWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        tabWidget = new QTabWidget(PrefChatWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        baseTab = new QWidget();
        baseTab->setObjectName(QStringLiteral("baseTab"));
        gridLayout_3 = new QGridLayout(baseTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(baseTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        enterRadioButton = new QRadioButton(groupBox);
        enterRadioButton->setObjectName(QStringLiteral("enterRadioButton"));

        gridLayout_2->addWidget(enterRadioButton, 0, 0, 1, 1);

        ctrlEnterRadioButton = new QRadioButton(groupBox);
        ctrlEnterRadioButton->setObjectName(QStringLiteral("ctrlEnterRadioButton"));

        gridLayout_2->addWidget(ctrlEnterRadioButton, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        tabWidget->addTab(baseTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PrefChatWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrefChatWindow);
    } // setupUi

    void retranslateUi(QWidget *PrefChatWindow)
    {
        groupBox->setTitle(QApplication::translate("PrefChatWindow", "Shortcut", 0));
        enterRadioButton->setText(QApplication::translate("PrefChatWindow", "Use \"Enter\" to Send message", 0));
        ctrlEnterRadioButton->setText(QApplication::translate("PrefChatWindow", "User \"Ctrl + Enter\" to Send message", 0));
        label->setText(QApplication::translate("PrefChatWindow", "Notice: Wil be effective after you open a new chat window.", 0));
        tabWidget->setTabText(tabWidget->indexOf(baseTab), QApplication::translate("PrefChatWindow", "Base", 0));
        Q_UNUSED(PrefChatWindow);
    } // retranslateUi

};

namespace Ui {
    class PrefChatWindow: public Ui_PrefChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFCHATWINDOW_H
