/********************************************************************************
** Form generated from reading UI file 'AddContactDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTDIALOG_H
#define UI_ADDCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddContactDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *jid;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *group;
    QLineEdit *name;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddContactDialog)
    {
        if (AddContactDialog->objectName().isEmpty())
            AddContactDialog->setObjectName(QStringLiteral("AddContactDialog"));
        AddContactDialog->resize(405, 181);
        gridLayout_2 = new QGridLayout(AddContactDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(AddContactDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        jid = new QLineEdit(AddContactDialog);
        jid->setObjectName(QStringLiteral("jid"));

        gridLayout_2->addWidget(jid, 1, 0, 1, 2);

        label_2 = new QLabel(AddContactDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(AddContactDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        comboBox = new QComboBox(AddContactDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        group = new QLineEdit(AddContactDialog);
        group->setObjectName(QStringLiteral("group"));
        group->setEnabled(false);

        gridLayout->addWidget(group, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 1, 2, 1);

        name = new QLineEdit(AddContactDialog);
        name->setObjectName(QStringLiteral("name"));

        gridLayout_2->addWidget(name, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(AddContactDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 1, 1, 1);


        retranslateUi(AddContactDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddContactDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddContactDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddContactDialog);
    } // setupUi

    void retranslateUi(QDialog *AddContactDialog)
    {
        AddContactDialog->setWindowTitle(QApplication::translate("AddContactDialog", "Add Contact", 0));
        label->setText(QApplication::translate("AddContactDialog", "Jabber ID", 0));
        label_2->setText(QApplication::translate("AddContactDialog", "Name", 0));
        label_3->setText(QApplication::translate("AddContactDialog", "Group", 0));
    } // retranslateUi

};

namespace Ui {
    class AddContactDialog: public Ui_AddContactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTDIALOG_H
