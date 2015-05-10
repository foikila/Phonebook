/********************************************************************************
** Form generated from reading UI file 'ColleagueDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEAGUEDIALOG_H
#define UI_COLLEAGUEDIALOG_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColleagueDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *Tab;
    QWidget *tab;
    QComboBox *e_title;
    QLineEdit *e_email;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *e_name;
    QLineEdit *e_phoneNumber;
    QLabel *label_5;
    QLineEdit *e_worktitle;
    QLineEdit *e_birthYear;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *tab_2;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *e_name_2;
    QLabel *label_9;
    QLineEdit *e_worktitle_2;
    QLabel *label_10;
    QLineEdit *e_email_2;
    QComboBox *e_title_2;
    QLineEdit *e_birthYear_2;
    QLineEdit *e_phoneNumber_2;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *e_grade;
    QLabel *label_13;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColleagueDialog)
    {
        if (ColleagueDialog->objectName().isEmpty())
            ColleagueDialog->setObjectName(QStringLiteral("ColleagueDialog"));
        ColleagueDialog->resize(420, 538);
        verticalLayout = new QVBoxLayout(ColleagueDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Tab = new QTabWidget(ColleagueDialog);
        Tab->setObjectName(QStringLiteral("Tab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        e_title = new QComboBox(tab);
        e_title->setObjectName(QStringLiteral("e_title"));
        e_title->setGeometry(QRect(10, 292, 382, 31));
        e_email = new QLineEdit(tab);
        e_email->setObjectName(QStringLiteral("e_email"));
        e_email->setGeometry(QRect(10, 164, 382, 31));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 329, 382, 21));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 137, 382, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 201, 382, 21));
        e_name = new QLineEdit(tab);
        e_name->setObjectName(QStringLiteral("e_name"));
        e_name->setGeometry(QRect(10, 36, 382, 31));
        e_phoneNumber = new QLineEdit(tab);
        e_phoneNumber->setObjectName(QStringLiteral("e_phoneNumber"));
        e_phoneNumber->setGeometry(QRect(10, 100, 382, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 73, 382, 21));
        e_worktitle = new QLineEdit(tab);
        e_worktitle->setObjectName(QStringLiteral("e_worktitle"));
        e_worktitle->setGeometry(QRect(10, 356, 382, 31));
        e_birthYear = new QLineEdit(tab);
        e_birthYear->setObjectName(QStringLiteral("e_birthYear"));
        e_birthYear->setGeometry(QRect(10, 228, 382, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 265, 382, 21));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 9, 382, 21));
        Tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 198, 382, 21));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 6, 382, 21));
        e_name_2 = new QLineEdit(tab_2);
        e_name_2->setObjectName(QStringLiteral("e_name_2"));
        e_name_2->setGeometry(QRect(10, 33, 382, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 134, 382, 21));
        e_worktitle_2 = new QLineEdit(tab_2);
        e_worktitle_2->setObjectName(QStringLiteral("e_worktitle_2"));
        e_worktitle_2->setGeometry(QRect(10, 353, 382, 31));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 326, 382, 21));
        e_email_2 = new QLineEdit(tab_2);
        e_email_2->setObjectName(QStringLiteral("e_email_2"));
        e_email_2->setGeometry(QRect(10, 161, 382, 31));
        e_title_2 = new QComboBox(tab_2);
        e_title_2->setObjectName(QStringLiteral("e_title_2"));
        e_title_2->setGeometry(QRect(10, 289, 382, 31));
        e_birthYear_2 = new QLineEdit(tab_2);
        e_birthYear_2->setObjectName(QStringLiteral("e_birthYear_2"));
        e_birthYear_2->setGeometry(QRect(10, 225, 382, 31));
        e_phoneNumber_2 = new QLineEdit(tab_2);
        e_phoneNumber_2->setObjectName(QStringLiteral("e_phoneNumber_2"));
        e_phoneNumber_2->setGeometry(QRect(10, 97, 382, 31));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 262, 382, 21));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 70, 382, 21));
        e_grade = new QLineEdit(tab_2);
        e_grade->setObjectName(QStringLiteral("e_grade"));
        e_grade->setGeometry(QRect(10, 400, 381, 31));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 380, 66, 21));
        Tab->addTab(tab_2, QString());

        verticalLayout->addWidget(Tab);

        buttonBox = new QDialogButtonBox(ColleagueDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColleagueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColleagueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColleagueDialog, SLOT(reject()));

        Tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ColleagueDialog);
    } // setupUi

    void retranslateUi(QDialog *ColleagueDialog)
    {
        ColleagueDialog->setWindowTitle(QApplication::translate("ColleagueDialog", "Dialog", 0));
        e_title->clear();
        e_title->insertItems(0, QStringList()
         << QApplication::translate("ColleagueDialog", "Mr", 0)
         << QApplication::translate("ColleagueDialog", "Mrs", 0)
         << QApplication::translate("ColleagueDialog", "Miss", 0)
        );
        label->setText(QApplication::translate("ColleagueDialog", "WorkTitle", 0));
        label_4->setText(QApplication::translate("ColleagueDialog", "Email", 0));
        label_3->setText(QApplication::translate("ColleagueDialog", "BirthYear", 0));
        label_5->setText(QApplication::translate("ColleagueDialog", "PhoneNumber", 0));
        label_2->setText(QApplication::translate("ColleagueDialog", "Title", 0));
        label_6->setText(QApplication::translate("ColleagueDialog", "Name", 0));
        Tab->setTabText(Tab->indexOf(tab), QApplication::translate("ColleagueDialog", "Administration", 0));
        label_7->setText(QApplication::translate("ColleagueDialog", "BirthYear", 0));
        label_8->setText(QApplication::translate("ColleagueDialog", "Name", 0));
        label_9->setText(QApplication::translate("ColleagueDialog", "Email", 0));
        label_10->setText(QApplication::translate("ColleagueDialog", "WorkTitle", 0));
        e_title_2->clear();
        e_title_2->insertItems(0, QStringList()
         << QApplication::translate("ColleagueDialog", "Mr", 0)
         << QApplication::translate("ColleagueDialog", "Mrs", 0)
         << QApplication::translate("ColleagueDialog", "Miss", 0)
        );
        label_11->setText(QApplication::translate("ColleagueDialog", "Title", 0));
        label_12->setText(QApplication::translate("ColleagueDialog", "PhoneNumber", 0));
        label_13->setText(QApplication::translate("ColleagueDialog", "Grade", 0));
        Tab->setTabText(Tab->indexOf(tab_2), QApplication::translate("ColleagueDialog", "Teacher", 0));
    } // retranslateUi

};

namespace Ui {
    class ColleagueDialog: public Ui_ColleagueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEAGUEDIALOG_H
