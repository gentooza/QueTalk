/********************************************************************************
** Form generated from reading UI file 'ChatWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QAction *actionSendFile;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTextBrowser *messageBrowser;
    QWidget *editorWarpwidget;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *photo;
    QLabel *nameLabel;
    QLabel *name;
    QLabel *jidLabel;
    QLabel *jid;
    QPushButton *detailButton;
    QSpacerItem *verticalSpacer;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QStringLiteral("ChatWindow"));
        ChatWindow->resize(600, 400);
        ChatWindow->setWindowTitle(QStringLiteral("MainWindow"));
        actionSendFile = new QAction(ChatWindow);
        actionSendFile->setObjectName(QStringLiteral("actionSendFile"));
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        messageBrowser = new QTextBrowser(splitter);
        messageBrowser->setObjectName(QStringLiteral("messageBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(7);
        sizePolicy.setHeightForWidth(messageBrowser->sizePolicy().hasHeightForWidth());
        messageBrowser->setSizePolicy(sizePolicy);
        splitter->addWidget(messageBrowser);
        editorWarpwidget = new QWidget(splitter);
        editorWarpwidget->setObjectName(QStringLiteral("editorWarpwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(editorWarpwidget->sizePolicy().hasHeightForWidth());
        editorWarpwidget->setSizePolicy(sizePolicy1);
        editorWarpwidget->setMinimumSize(QSize(0, 50));
        splitter->addWidget(editorWarpwidget);

        verticalLayout->addWidget(splitter);

        ChatWindow->setCentralWidget(centralwidget);
        dockWidget = new QDockWidget(ChatWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        photo = new QLabel(dockWidgetContents);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(photo);

        nameLabel = new QLabel(dockWidgetContents);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout_3->addWidget(nameLabel);

        name = new QLabel(dockWidgetContents);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(name);

        jidLabel = new QLabel(dockWidgetContents);
        jidLabel->setObjectName(QStringLiteral("jidLabel"));

        verticalLayout_3->addWidget(jidLabel);

        jid = new QLabel(dockWidgetContents);
        jid->setObjectName(QStringLiteral("jid"));
        sizePolicy2.setHeightForWidth(jid->sizePolicy().hasHeightForWidth());
        jid->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(jid);

        detailButton = new QPushButton(dockWidgetContents);
        detailButton->setObjectName(QStringLiteral("detailButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/preferences-desktop-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        detailButton->setIcon(icon);

        verticalLayout_3->addWidget(detailButton);

        verticalSpacer = new QSpacerItem(20, 230, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        dockWidget->setWidget(dockWidgetContents);
        ChatWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        toolBar = new QToolBar(ChatWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ChatWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSendFile);

        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        actionSendFile->setText(QApplication::translate("ChatWindow", "Send File", 0));
        dockWidget->setWindowTitle(QApplication::translate("ChatWindow", "VCard", 0));
        photo->setText(QString());
        nameLabel->setText(QApplication::translate("ChatWindow", "Name:", 0));
        name->setText(QString());
        jidLabel->setText(QApplication::translate("ChatWindow", "Jabber ID:", 0));
        jid->setText(QString());
        detailButton->setText(QApplication::translate("ChatWindow", "Info", 0));
        toolBar->setWindowTitle(QApplication::translate("ChatWindow", "toolBar", 0));
        Q_UNUSED(ChatWindow);
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
