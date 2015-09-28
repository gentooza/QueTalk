/********************************************************************************
** Form generated from reading UI file 'ContactInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTINFODIALOG_H
#define UI_CONTACTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ContactInfoDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *nameLabel;
    QLineEdit *name;
    QLabel *label;
    QLineEdit *jid;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *nickName;
    QLabel *label_4;
    QLineEdit *fullName;
    QLabel *label_5;
    QLineEdit *firstName;
    QLabel *label_6;
    QLineEdit *midName;
    QLabel *label_7;
    QLineEdit *lastName;
    QLabel *label_9;
    QLineEdit *url;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *photo;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_10;

    void setupUi(QDialog *ContactInfoDialog)
    {
        if (ContactInfoDialog->objectName().isEmpty())
            ContactInfoDialog->setObjectName(QStringLiteral("ContactInfoDialog"));
        ContactInfoDialog->setEnabled(true);
        ContactInfoDialog->resize(324, 411);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/preferences-desktop-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        ContactInfoDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(ContactInfoDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ContactInfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        nameLabel = new QLabel(ContactInfoDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 3, 1, 1, 1);

        name = new QLineEdit(ContactInfoDialog);
        name->setObjectName(QStringLiteral("name"));
        name->setEnabled(true);
        name->setEchoMode(QLineEdit::Normal);
        name->setReadOnly(true);

        gridLayout->addWidget(name, 3, 2, 1, 1);

        label = new QLabel(ContactInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 4, 1, 1, 1);

        jid = new QLineEdit(ContactInfoDialog);
        jid->setObjectName(QStringLiteral("jid"));
        jid->setReadOnly(true);

        gridLayout->addWidget(jid, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        label_3 = new QLabel(ContactInfoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 6, 1, 1, 1);

        label_8 = new QLabel(ContactInfoDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 12, 0, 1, 2);

        nickName = new QLineEdit(ContactInfoDialog);
        nickName->setObjectName(QStringLiteral("nickName"));
        nickName->setReadOnly(true);

        gridLayout->addWidget(nickName, 12, 2, 1, 1);

        label_4 = new QLabel(ContactInfoDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 13, 0, 1, 2);

        fullName = new QLineEdit(ContactInfoDialog);
        fullName->setObjectName(QStringLiteral("fullName"));
        fullName->setReadOnly(true);

        gridLayout->addWidget(fullName, 13, 2, 1, 1);

        label_5 = new QLabel(ContactInfoDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 14, 0, 1, 2);

        firstName = new QLineEdit(ContactInfoDialog);
        firstName->setObjectName(QStringLiteral("firstName"));
        firstName->setReadOnly(true);

        gridLayout->addWidget(firstName, 14, 2, 1, 1);

        label_6 = new QLabel(ContactInfoDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 15, 0, 1, 2);

        midName = new QLineEdit(ContactInfoDialog);
        midName->setObjectName(QStringLiteral("midName"));
        midName->setReadOnly(true);

        gridLayout->addWidget(midName, 15, 2, 1, 1);

        label_7 = new QLabel(ContactInfoDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 16, 0, 1, 2);

        lastName = new QLineEdit(ContactInfoDialog);
        lastName->setObjectName(QStringLiteral("lastName"));
        lastName->setReadOnly(true);

        gridLayout->addWidget(lastName, 16, 2, 1, 1);

        label_9 = new QLabel(ContactInfoDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 17, 1, 1, 1);

        url = new QLineEdit(ContactInfoDialog);
        url->setObjectName(QStringLiteral("url"));
        url->setReadOnly(true);

        gridLayout->addWidget(url, 17, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 18, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ContactInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 19, 1, 1, 2);

        photo = new QLabel(ContactInfoDialog);
        photo->setObjectName(QStringLiteral("photo"));

        gridLayout->addWidget(photo, 11, 2, 1, 1);

        line = new QFrame(ContactInfoDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);

        line_2 = new QFrame(ContactInfoDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 10, 0, 1, 3);

        label_10 = new QLabel(ContactInfoDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 11, 1, 1, 1);


        retranslateUi(ContactInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ContactInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ContactInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ContactInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ContactInfoDialog)
    {
        ContactInfoDialog->setWindowTitle(QApplication::translate("ContactInfoDialog", "Contact Info", 0));
        label_2->setText(QApplication::translate("ContactInfoDialog", "Roster", 0));
        nameLabel->setText(QApplication::translate("ContactInfoDialog", "Name:", 0));
        name->setText(QString());
        label->setText(QApplication::translate("ContactInfoDialog", "Jabber ID:", 0));
        label_3->setText(QApplication::translate("ContactInfoDialog", "VCard", 0));
        label_8->setText(QApplication::translate("ContactInfoDialog", "NIck name:", 0));
        label_4->setText(QApplication::translate("ContactInfoDialog", "Full name:", 0));
        label_5->setText(QApplication::translate("ContactInfoDialog", "First name:", 0));
        label_6->setText(QApplication::translate("ContactInfoDialog", "Mid name:", 0));
        label_7->setText(QApplication::translate("ContactInfoDialog", "Last name:", 0));
        label_9->setText(QApplication::translate("ContactInfoDialog", "Url:", 0));
        photo->setText(QString());
        label_10->setText(QApplication::translate("ContactInfoDialog", "Photo:", 0));
    } // retranslateUi

};

namespace Ui {
    class ContactInfoDialog: public Ui_ContactInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTINFODIALOG_H
