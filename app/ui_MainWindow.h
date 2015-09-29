/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPreferences;
    QAction *actionAbout;
    QAction *actionQt;
    QAction *actionAddContact;
    QAction *actionQuit;
    QAction *actionHideOffline;
    QAction *actionLogout;
    QAction *actionTransferManager;
    QAction *actionRemoveContact;
    QAction *actionStartChat;
    QAction *actionContactInfo;
    QAction *actionUnsubscribe;
    QAction *actionDropSubscribe;
    QAction *actionSubscribe;
    QAction *actionAllowSubcribe;
    QAction *actionEditName;
    QAction *actionMoveToNewGroup;
    QAction *actionCopyToNewGroup;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *bottomWrap;
    QHBoxLayout *horizontalLayout;
    QComboBox *presenceComboBox;
    QToolButton *showInfoEventButton;
    QMenuBar *menubar;
    QMenu *menu_Help;
    QMenu *menu_Settings;
    QMenu *menu_X_MPP;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(250, 499);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/im-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionQt = new QAction(MainWindow);
        actionQt->setObjectName(QStringLiteral("actionQt"));
        actionAddContact = new QAction(MainWindow);
        actionAddContact->setObjectName(QStringLiteral("actionAddContact"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/contact-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddContact->setIcon(icon2);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/system-shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        actionHideOffline = new QAction(MainWindow);
        actionHideOffline->setObjectName(QStringLiteral("actionHideOffline"));
        actionHideOffline->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/user-identity-grey.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHideOffline->setIcon(icon4);
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/system-log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogout->setIcon(icon5);
        actionTransferManager = new QAction(MainWindow);
        actionTransferManager->setObjectName(QStringLiteral("actionTransferManager"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/network-server-database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTransferManager->setIcon(icon6);
        actionRemoveContact = new QAction(MainWindow);
        actionRemoveContact->setObjectName(QStringLiteral("actionRemoveContact"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveContact->setIcon(icon7);
        actionStartChat = new QAction(MainWindow);
        actionStartChat->setObjectName(QStringLiteral("actionStartChat"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/mail-message-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartChat->setIcon(icon8);
        actionContactInfo = new QAction(MainWindow);
        actionContactInfo->setObjectName(QStringLiteral("actionContactInfo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/preferences-desktop-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContactInfo->setIcon(icon9);
        actionUnsubscribe = new QAction(MainWindow);
        actionUnsubscribe->setObjectName(QStringLiteral("actionUnsubscribe"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/im-ban-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnsubscribe->setIcon(icon10);
        actionDropSubscribe = new QAction(MainWindow);
        actionDropSubscribe->setObjectName(QStringLiteral("actionDropSubscribe"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/im-kick-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDropSubscribe->setIcon(icon11);
        actionSubscribe = new QAction(MainWindow);
        actionSubscribe->setObjectName(QStringLiteral("actionSubscribe"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/email.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubscribe->setIcon(icon12);
        actionAllowSubcribe = new QAction(MainWindow);
        actionAllowSubcribe->setObjectName(QStringLiteral("actionAllowSubcribe"));
        actionEditName = new QAction(MainWindow);
        actionEditName->setObjectName(QStringLiteral("actionEditName"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/accessories-text-editor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditName->setIcon(icon13);
        actionMoveToNewGroup = new QAction(MainWindow);
        actionMoveToNewGroup->setObjectName(QStringLiteral("actionMoveToNewGroup"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/folder-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMoveToNewGroup->setIcon(icon14);
        actionCopyToNewGroup = new QAction(MainWindow);
        actionCopyToNewGroup->setObjectName(QStringLiteral("actionCopyToNewGroup"));
        actionCopyToNewGroup->setIcon(icon14);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 4, 0, -1);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        bottomWrap = new QWidget(centralwidget);
        bottomWrap->setObjectName(QStringLiteral("bottomWrap"));

        verticalLayout->addWidget(bottomWrap);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        presenceComboBox = new QComboBox(centralwidget);
        presenceComboBox->addItem(icon, QString());
        presenceComboBox->addItem(icon, QString());
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/im-user-away.png"), QSize(), QIcon::Normal, QIcon::Off);
        presenceComboBox->addItem(icon15, QString());
        presenceComboBox->addItem(icon15, QString());
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/im-user-busy.png"), QSize(), QIcon::Normal, QIcon::Off);
        presenceComboBox->addItem(icon16, QString());
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/im-user-offline.png"), QSize(), QIcon::Normal, QIcon::Off);
        presenceComboBox->addItem(icon17, QString());
        presenceComboBox->setObjectName(QStringLiteral("presenceComboBox"));
        presenceComboBox->setEnabled(true);
        presenceComboBox->setMinimumSize(QSize(0, 32));

        horizontalLayout->addWidget(presenceComboBox);

        showInfoEventButton = new QToolButton(centralwidget);
        showInfoEventButton->setObjectName(QStringLiteral("showInfoEventButton"));
        showInfoEventButton->setEnabled(true);
        showInfoEventButton->setMinimumSize(QSize(32, 32));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/preferences-system-power-management.png"), QSize(), QIcon::Normal, QIcon::Off);
        showInfoEventButton->setIcon(icon18);
        showInfoEventButton->setToolButtonStyle(Qt::ToolButtonFollowStyle);

        horizontalLayout->addWidget(showInfoEventButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 250, 24));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menu_Settings = new QMenu(menubar);
        menu_Settings->setObjectName(QStringLiteral("menu_Settings"));
        menu_X_MPP = new QMenu(menubar);
        menu_X_MPP->setObjectName(QStringLiteral("menu_X_MPP"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_X_MPP->menuAction());
        menubar->addAction(menu_Settings->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionQt);
        menu_Settings->addAction(actionHideOffline);
        menu_Settings->addAction(actionPreferences);
        menu_X_MPP->addSeparator();
        menu_X_MPP->addAction(actionAddContact);
        menu_X_MPP->addAction(actionTransferManager);
        menu_X_MPP->addSeparator();
        menu_X_MPP->addAction(actionLogout);
        menu_X_MPP->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QTalk", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        actionQt->setText(QApplication::translate("MainWindow", "&Qt", 0));
        actionAddContact->setText(QApplication::translate("MainWindow", "&Add Contact", 0));
#ifndef QT_NO_TOOLTIP
        actionAddContact->setToolTip(QApplication::translate("MainWindow", "Add Contact", 0));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionHideOffline->setText(QApplication::translate("MainWindow", "Hide Offline Contact", 0));
        actionLogout->setText(QApplication::translate("MainWindow", "&Logout", 0));
        actionTransferManager->setText(QApplication::translate("MainWindow", "TransferManager", 0));
        actionRemoveContact->setText(QApplication::translate("MainWindow", "Remove Contact", 0));
        actionStartChat->setText(QApplication::translate("MainWindow", "Start Chat", 0));
        actionContactInfo->setText(QApplication::translate("MainWindow", "Contact Info", 0));
        actionUnsubscribe->setText(QApplication::translate("MainWindow", "Unsubscribe", 0));
#ifndef QT_NO_TOOLTIP
        actionUnsubscribe->setToolTip(QApplication::translate("MainWindow", "Unsubscribe roster's status", 0));
#endif // QT_NO_TOOLTIP
        actionDropSubscribe->setText(QApplication::translate("MainWindow", "Drop Subscribe", 0));
#ifndef QT_NO_TOOLTIP
        actionDropSubscribe->setToolTip(QApplication::translate("MainWindow", "Don't send self status to roster", 0));
#endif // QT_NO_TOOLTIP
        actionSubscribe->setText(QApplication::translate("MainWindow", "Subscribe", 0));
        actionAllowSubcribe->setText(QApplication::translate("MainWindow", "Allow Subcribe", 0));
        actionEditName->setText(QApplication::translate("MainWindow", "Edit Name", 0));
#ifndef QT_NO_TOOLTIP
        actionEditName->setToolTip(QApplication::translate("MainWindow", "Edit the roster name", 0));
#endif // QT_NO_TOOLTIP
        actionMoveToNewGroup->setText(QApplication::translate("MainWindow", "New Group", 0));
        actionCopyToNewGroup->setText(QApplication::translate("MainWindow", "New Group", 0));
        presenceComboBox->setItemText(0, QApplication::translate("MainWindow", "Online", 0));
        presenceComboBox->setItemText(1, QApplication::translate("MainWindow", "Chat", 0));
        presenceComboBox->setItemText(2, QApplication::translate("MainWindow", "Away", 0));
        presenceComboBox->setItemText(3, QApplication::translate("MainWindow", "Extended Away", 0));
        presenceComboBox->setItemText(4, QApplication::translate("MainWindow", "Do Not Disturb", 0));
        presenceComboBox->setItemText(5, QApplication::translate("MainWindow", "Offline", 0));

        showInfoEventButton->setText(QString());
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menu_Settings->setTitle(QApplication::translate("MainWindow", "&Settings", 0));
        menu_X_MPP->setTitle(QApplication::translate("MainWindow", "&Action", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
