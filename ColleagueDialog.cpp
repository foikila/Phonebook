#include "ColleagueDialog.h"
#include "ui_ColleagueDialog.h"
#include <iostream>

ColleagueDialog::ColleagueDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColleagueDialog)
{
    ui->setupUi(this);
    this->a = nullptr;
    this->t = nullptr;
    this->p = nullptr;
}

ColleagueDialog::~ColleagueDialog()
{
    delete ui;
}

void ColleagueDialog::setPerson(Person *&a)
{
    this->p = a;
    int birthYear = this->p->getBirthYear();
    std::string worktitle;
    std::string grade;
    std::string name = this->p->getName();
    std::string email = this->p->getEmail();
    std::string phonenumber = this->p->getPhoneNumber();

    if (dynamic_cast<Administration*>(this->p)) {
        worktitle = (dynamic_cast<Administration*>(this->p))->getWorkTitle();
    } else if (dynamic_cast<Teacher*>(this->p)) {
        worktitle = (dynamic_cast<Teacher*>(this->p))->getWorkTitle();
        grade = (dynamic_cast<Teacher*>(this->p))->getGrade();
    }

    this->ui->e_name->setText(QString::fromStdString(name));
    this->ui->e_email->setText(QString::fromStdString(email));
    this->ui->e_birthYear->setText(QString::number(birthYear));
    this->ui->e_phoneNumber->setText(QString::fromStdString(phonenumber));
    this->ui->e_worktitle->setText(QString::fromStdString(worktitle));
    this->ui->e_name_2->setText(QString::fromStdString(name));
    this->ui->e_email_2->setText(QString::fromStdString(email));
    this->ui->e_birthYear_2->setText(QString::number(birthYear));
    this->ui->e_phoneNumber_2->setText(QString::fromStdString(phonenumber));
    this->ui->e_worktitle_2->setText(QString::fromStdString(worktitle));
    this->ui->e_grade->setText(QString::fromStdString(grade));
}

void ColleagueDialog::on_buttonBox_accepted()
{
    if (this->ui->e_grade->text().length() > 0) {
        if (this->p) {
            this->t = dynamic_cast<Teacher*>(this->p);
        } else {
            this->t = new Teacher();
        }
        // Teacher
        this->t->setName(this->ui->e_name_2->text().toStdString());
        this->t->setEmail(this->ui->e_email_2->text().toStdString());
        this->t->setBirthYear(this->ui->e_birthYear_2->text().toInt());
        this->t->setPhoneNumber(this->ui->e_phoneNumber_2->text().toStdString());
        this->t->setWorkTitle(this->ui->e_worktitle_2->text().toStdString());
        this->t->setTitle(this->ui->e_title_2->currentText().toStdString());
        this->t->setGrade(this->ui->e_grade->text().toStdString());
    } else {
        if (this->p) {
            this->a = dynamic_cast<Administration*>(this->p);
        } else {
            this->a = new Administration();
        }
        // Administration
        this->a->setName(this->ui->e_name->text().toStdString());
        this->a->setEmail(this->ui->e_email->text().toStdString());
        this->a->setBirthYear(this->ui->e_birthYear->text().toInt());
        this->a->setPhoneNumber(this->ui->e_phoneNumber->text().toStdString());
        this->a->setWorkTitle(this->ui->e_worktitle->text().toStdString());
        this->a->setTitle(this->ui->e_title->currentText().toStdString());
    }
}
Person* ColleagueDialog::getPerson()
{
    if (this->a == nullptr) {
        return this->t;
    }
    return this->a;
}
