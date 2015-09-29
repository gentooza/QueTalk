/********************************************************************************
** Form generated from reading UI file 'TransferManagerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERMANAGERWINDOW_H
#define UI_TRANSFERMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferManagerWindow
{
public:
    QAction *actionStopTransfer;
    QAction *actionCleanList;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TransferManagerWindow)
    {
        if (TransferManagerWindow->objectName().isEmpty())
            TransferManagerWindow->setObjectName(QStringLiteral("TransferManagerWindow"));
        TransferManagerWindow->resize(545, 366);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/network-server-database.png"), QSize(), QIcon::Normal, QIcon::Off);
        TransferManagerWindow->setWindowIcon(icon);
        actionStopTransfer = new QAction(TransferManagerWindow);
        actionStopTransfer->setObjectName(QStringLiteral("actionStopTransfer"));
        actionCleanList = new QAction(TransferManagerWindow);
        actionCleanList->setObjectName(QStringLiteral("actionCleanList"));
        centralwidget = new QWidget(TransferManagerWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 3);

        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout->addWidget(statusLabel, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(278, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 2, 1, 1);

        TransferManagerWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(TransferManagerWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        TransferManagerWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionStopTransfer);
        toolBar->addAction(actionCleanList);

        retranslateUi(TransferManagerWindow);
        QObject::connect(buttonBox, SIGNAL(rejected()), TransferManagerWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(TransferManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TransferManagerWindow)
    {
        TransferManagerWindow->setWindowTitle(QApplication::translate("TransferManagerWindow", "Transfer Manager", 0));
        actionStopTransfer->setText(QApplication::translate("TransferManagerWindow", "Stop Transfer", 0));
        actionCleanList->setText(QApplication::translate("TransferManagerWindow", "Clean List", 0));
        statusLabel->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("TransferManagerWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferManagerWindow: public Ui_TransferManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERMANAGERWINDOW_H
