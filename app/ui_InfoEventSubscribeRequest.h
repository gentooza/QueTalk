/********************************************************************************
** Form generated from reading UI file 'InfoEventSubscribeRequest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOEVENTSUBSCRIBEREQUEST_H
#define UI_INFOEVENTSUBSCRIBEREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoEventSubscribeRequest
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *bareJid;
    QPushButton *denyButton;
    QPushButton *acceptButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *InfoEventSubscribeRequest)
    {
        if (InfoEventSubscribeRequest->objectName().isEmpty())
            InfoEventSubscribeRequest->setObjectName(QStringLiteral("InfoEventSubscribeRequest"));
        InfoEventSubscribeRequest->resize(234, 99);
        InfoEventSubscribeRequest->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(InfoEventSubscribeRequest);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(InfoEventSubscribeRequest);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        bareJid = new QLabel(InfoEventSubscribeRequest);
        bareJid->setObjectName(QStringLiteral("bareJid"));

        gridLayout->addWidget(bareJid, 1, 0, 1, 3);

        denyButton = new QPushButton(InfoEventSubscribeRequest);
        denyButton->setObjectName(QStringLiteral("denyButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        denyButton->setIcon(icon);

        gridLayout->addWidget(denyButton, 2, 1, 1, 1);

        acceptButton = new QPushButton(InfoEventSubscribeRequest);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/dialog-ok-apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        acceptButton->setIcon(icon1);

        gridLayout->addWidget(acceptButton, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(28, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);


        retranslateUi(InfoEventSubscribeRequest);

        QMetaObject::connectSlotsByName(InfoEventSubscribeRequest);
    } // setupUi

    void retranslateUi(QWidget *InfoEventSubscribeRequest)
    {
        label->setText(QApplication::translate("InfoEventSubscribeRequest", "Subscribe Request:", 0));
        bareJid->setText(QString());
        denyButton->setText(QApplication::translate("InfoEventSubscribeRequest", "Deny", 0));
        acceptButton->setText(QApplication::translate("InfoEventSubscribeRequest", "Accept", 0));
        Q_UNUSED(InfoEventSubscribeRequest);
    } // retranslateUi

};

namespace Ui {
    class InfoEventSubscribeRequest: public Ui_InfoEventSubscribeRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOEVENTSUBSCRIBEREQUEST_H
