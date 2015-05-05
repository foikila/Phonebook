#include "friendEditdialog.h"
#include "ui_friendEditdialog.h"
#include <iostream>

FriendEditDialog::FriendEditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FriendEditDialog)
{
    ui->setupUi(this);

}

FriendEditDialog::~FriendEditDialog()
{
    delete ui;
}


void FriendEditDialog::setFriend(Person *&f)
{
    using std::string;
    this->f = dynamic_cast<Friend*>(f);
    string name =this->f->getName();
    std::cout << name << std::endl;
    this->ui->e_name->setText(QString::fromStdString(name));
    this->ui->e_email->setText(QString::fromStdString(this->f->getEmail()));
    this->ui->e_birthYear->setText(QString::number(this->f->getBirthYear()));
    this->ui->e_phoneNumber->setText(QString::fromStdString(this->f->getPhoneNumber()));
    this->ui->e_homeNumber->setText(QString::fromStdString(this->f->getHomeNumber()));

}
