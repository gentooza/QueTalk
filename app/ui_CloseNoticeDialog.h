/********************************************************************************
** Form generated from reading UI file 'CloseNoticeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSENOTICEDIALOG_H
#define UI_CLOSENOTICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CloseNoticeDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *closeToTrayCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QCheckBox *closeToTrayNoticeCheckBox;

    void setupUi(QDialog *CloseNoticeDialog)
    {
        if (CloseNoticeDialog->objectName().isEmpty())
            CloseNoticeDialog->setObjectName(QStringLiteral("CloseNoticeDialog"));
        CloseNoticeDialog->resize(261, 117);
        gridLayout = new QGridLayout(CloseNoticeDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        closeToTrayCheckBox = new QCheckBox(CloseNoticeDialog);
        closeToTrayCheckBox->setObjectName(QStringLiteral("closeToTrayCheckBox"));

        gridLayout->addWidget(closeToTrayCheckBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(121, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(CloseNoticeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        closeToTrayNoticeCheckBox = new QCheckBox(CloseNoticeDialog);
        closeToTrayNoticeCheckBox->setObjectName(QStringLiteral("closeToTrayNoticeCheckBox"));

        gridLayout->addWidget(closeToTrayNoticeCheckBox, 1, 0, 1, 1);


        retranslateUi(CloseNoticeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CloseNoticeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CloseNoticeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CloseNoticeDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseNoticeDialog)
    {
        CloseNoticeDialog->setWindowTitle(QApplication::translate("CloseNoticeDialog", "Close Notice", 0));
        closeToTrayCheckBox->setText(QApplication::translate("CloseNoticeDialog", "Close to tray", 0));
        closeToTrayNoticeCheckBox->setText(QApplication::translate("CloseNoticeDialog", "Alway notice", 0));
    } // retranslateUi

};

namespace Ui {
    class CloseNoticeDialog: public Ui_CloseNoticeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSENOTICEDIALOG_H
