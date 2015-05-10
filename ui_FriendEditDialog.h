/********************************************************************************
** Form generated from reading UI file 'FriendEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDEDITDIALOG_H
#define UI_FRIENDEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FriendEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *e_name;
    QLabel *label_5;
    QLineEdit *e_phoneNumber;
    QLabel *label_4;
    QLineEdit *e_email;
    QLabel *label_3;
    QLineEdit *e_birthYear;
    QLabel *label_2;
    QComboBox *e_title;
    QLabel *label;
    QLineEdit *e_homeNumber;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FriendEditDialog)
    {
        if (FriendEditDialog->objectName().isEmpty())
            FriendEditDialog->setObjectName(QStringLiteral("FriendEditDialog"));
        FriendEditDialog->resize(400, 473);
        verticalLayout = new QVBoxLayout(FriendEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(FriendEditDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        e_name = new QLineEdit(FriendEditDialog);
        e_name->setObjectName(QStringLiteral("e_name"));

        verticalLayout->addWidget(e_name);

        label_5 = new QLabel(FriendEditDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        e_phoneNumber = new QLineEdit(FriendEditDialog);
        e_phoneNumber->setObjectName(QStringLiteral("e_phoneNumber"));

        verticalLayout->addWidget(e_phoneNumber);

        label_4 = new QLabel(FriendEditDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        e_email = new QLineEdit(FriendEditDialog);
        e_email->setObjectName(QStringLiteral("e_email"));

        verticalLayout->addWidget(e_email);

        label_3 = new QLabel(FriendEditDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        e_birthYear = new QLineEdit(FriendEditDialog);
        e_birthYear->setObjectName(QStringLiteral("e_birthYear"));

        verticalLayout->addWidget(e_birthYear);

        label_2 = new QLabel(FriendEditDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        e_title = new QComboBox(FriendEditDialog);
        e_title->setObjectName(QStringLiteral("e_title"));

        verticalLayout->addWidget(e_title);

        label = new QLabel(FriendEditDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        e_homeNumber = new QLineEdit(FriendEditDialog);
        e_homeNumber->setObjectName(QStringLiteral("e_homeNumber"));

        verticalLayout->addWidget(e_homeNumber);

        buttonBox = new QDialogButtonBox(FriendEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FriendEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FriendEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FriendEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FriendEditDialog);
    } // setupUi

    void retranslateUi(QDialog *FriendEditDialog)
    {
        FriendEditDialog->setWindowTitle(QApplication::translate("FriendEditDialog", "Dialog", 0));
        label_6->setText(QApplication::translate("FriendEditDialog", "Name", 0));
        label_5->setText(QApplication::translate("FriendEditDialog", "PhoneNumber", 0));
        label_4->setText(QApplication::translate("FriendEditDialog", "Email", 0));
        label_3->setText(QApplication::translate("FriendEditDialog", "BirthYear", 0));
        label_2->setText(QApplication::translate("FriendEditDialog", "Title", 0));
        e_title->clear();
        e_title->insertItems(0, QStringList()
         << QApplication::translate("FriendEditDialog", "Mr", 0)
         << QApplication::translate("FriendEditDialog", "Mrs", 0)
         << QApplication::translate("FriendEditDialog", "Miss", 0)
        );
        label->setText(QApplication::translate("FriendEditDialog", "HomeNumber", 0));
    } // retranslateUi

};

namespace Ui {
    class FriendEditDialog: public Ui_FriendEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDEDITDIALOG_H
