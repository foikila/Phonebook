#include "ColleagueDialog.h"
#include "ui_ColleagueDialog.h"
#include <iostream>

ColleagueDialog::ColleagueDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColleagueDialog)
{
    ui->setupUi(this);
    this->a = nullptr;
}

ColleagueDialog::~ColleagueDialog()
{
    delete ui;
}

void ColleagueDialog::setPerson(Person *&a)
{
    using std::string;
    string classType = this->a->getClassName();
    std::cout << classType << std::endl;
    this->a = dynamic_cast<Administration*>(a);
    string name = this->a->getName();
    string email = this->a->getEmail();
    int birthYear = this->a->getBirthYear();
    string phonenumber = this->a->getPhoneNumber();
    string worktitle = this->a->getWorkTitle();

    this->ui->e_name->setText(QString::fromStdString(name));
    this->ui->e_email->setText(QString::fromStdString(email));
    this->ui->e_birthYear->setText(QString::number(birthYear));
    this->ui->e_phoneNumber->setText(QString::fromStdString(phonenumber));
    this->ui->e_worktitle->setText(QString::fromStdString(worktitle));
}

void ColleagueDialog::on_buttonBox_accepted()
{

    if (this->ui->e_grade->text().length() > 0) {
        // teacher
        this->a->setName(this->ui->e_name_2->text().toStdString());
        this->a->setEmail(this->ui->e_email_2->text().toStdString());
        this->a->setBirthYear(this->ui->e_birthYear_2->text().toInt());
        this->a->setPhoneNumber(this->ui->e_phoneNumber_2->text().toStdString());
        this->a->setWorkTitle(this->ui->e_worktitle_2->text().toStdString());
        this->a->setTitle(this->ui->e_title_2->currentText().toStdString());

    } else {
        // Administration
        this->a->setName(this->ui->e_name->text().toStdString());
        this->a->setEmail(this->ui->e_email->text().toStdString());
        this->a->setBirthYear(this->ui->e_birthYear->text().toInt());
        this->a->setPhoneNumber(this->ui->e_phoneNumber->text().toStdString());
        this->a->setWorkTitle(this->ui->e_worktitle->text().toStdString());
        this->a->setTitle(this->ui->e_title->currentText().toStdString());
    }
}
