/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *sections;
    QStackedWidget *pages;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(612, 450);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        PreferencesDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(PreferencesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sections = new QListWidget(PreferencesDialog);
        sections->setObjectName(QStringLiteral("sections"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sections->sizePolicy().hasHeightForWidth());
        sections->setSizePolicy(sizePolicy);
        sections->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(sections, 0, 0, 1, 1);

        pages = new QStackedWidget(PreferencesDialog);
        pages->setObjectName(QStringLiteral("pages"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pages->sizePolicy().hasHeightForWidth());
        pages->setSizePolicy(sizePolicy1);
        pages->setMinimumSize(QSize(450, 400));

        gridLayout->addWidget(pages, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(sections, SIGNAL(currentRowChanged(int)), pages, SLOT(setCurrentIndex(int)));

        sections->setCurrentRow(-1);
        pages->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
