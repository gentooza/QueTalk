/********************************************************************************
** Form generated from reading UI file 'InfoEventStackWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOEVENTSTACKWIDGET_H
#define UI_INFOEVENTSTACKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoEventStackWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *previousButton;
    QLabel *pageLabel;
    QToolButton *nextButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *closeButton;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *InfoEventStackWidget)
    {
        if (InfoEventStackWidget->objectName().isEmpty())
            InfoEventStackWidget->setObjectName(QStringLiteral("InfoEventStackWidget"));
        InfoEventStackWidget->resize(235, 128);
        InfoEventStackWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(InfoEventStackWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 4, 0, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        previousButton = new QToolButton(InfoEventStackWidget);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/go-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        previousButton->setIcon(icon);

        horizontalLayout->addWidget(previousButton);

        pageLabel = new QLabel(InfoEventStackWidget);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));

        horizontalLayout->addWidget(pageLabel);

        nextButton = new QToolButton(InfoEventStackWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/go-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon1);

        horizontalLayout->addWidget(nextButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QToolButton(InfoEventStackWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon2);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(InfoEventStackWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(InfoEventStackWidget);

        QMetaObject::connectSlotsByName(InfoEventStackWidget);
    } // setupUi

    void retranslateUi(QWidget *InfoEventStackWidget)
    {
        previousButton->setText(QApplication::translate("InfoEventStackWidget", "...", 0));
        pageLabel->setText(QApplication::translate("InfoEventStackWidget", "0 / 0", 0));
        nextButton->setText(QApplication::translate("InfoEventStackWidget", "...", 0));
        closeButton->setText(QApplication::translate("InfoEventStackWidget", "...", 0));
        Q_UNUSED(InfoEventStackWidget);
    } // retranslateUi

};

namespace Ui {
    class InfoEventStackWidget: public Ui_InfoEventStackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOEVENTSTACKWIDGET_H
