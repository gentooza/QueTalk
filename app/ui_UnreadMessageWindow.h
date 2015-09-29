/********************************************************************************
** Form generated from reading UI file 'UnreadMessageWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNREADMESSAGEWINDOW_H
#define UI_UNREADMESSAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnreadMessageWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *readAllButton;

    void setupUi(QMainWindow *UnreadMessageWindow)
    {
        if (UnreadMessageWindow->objectName().isEmpty())
            UnreadMessageWindow->setObjectName(QStringLiteral("UnreadMessageWindow"));
        UnreadMessageWindow->resize(250, 200);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/mail-unread-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        UnreadMessageWindow->setWindowIcon(icon);
        centralwidget = new QWidget(UnreadMessageWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        readAllButton = new QPushButton(centralwidget);
        readAllButton->setObjectName(QStringLiteral("readAllButton"));

        horizontalLayout->addWidget(readAllButton);


        verticalLayout->addLayout(horizontalLayout);

        UnreadMessageWindow->setCentralWidget(centralwidget);

        retranslateUi(UnreadMessageWindow);

        QMetaObject::connectSlotsByName(UnreadMessageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UnreadMessageWindow)
    {
        UnreadMessageWindow->setWindowTitle(QApplication::translate("UnreadMessageWindow", "Unread Messages", 0));
        readAllButton->setText(QApplication::translate("UnreadMessageWindow", "Read All", 0));
    } // retranslateUi

};

namespace Ui {
    class UnreadMessageWindow: public Ui_UnreadMessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNREADMESSAGEWINDOW_H
