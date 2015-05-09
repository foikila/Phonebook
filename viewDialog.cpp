#include "viewDialog.h"
#include "ui_viewDialog.h"

#include <iostream>
#include "Person.h"
#include "FriendEditDialog.h"

ViewDialog::ViewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    this->editView = new FriendEditDialog(this);
    ui->setupUi(this);
}

void ViewDialog::addPerson(Person *&p)
{
    this->p = p;
    ui->plainTextEdit->setPlainText(QString::fromStdString(this->p->toString()));
}

ViewDialog::~ViewDialog()
{
    delete ui;
    delete this->editView;
}

void ViewDialog::on_ViewDialog_accepted()
{
}

void ViewDialog::on_pushButton_clicked()
{
    if (this->p->getClassName() == "Friend") {
        this->editView = new FriendEditDialog(this);
        this->editView->setFriend(this->p);
        int ret = this->editView->exec();
        switch (ret) {
        case 0:
        case 1:
            ui->plainTextEdit->clear();
            ui->plainTextEdit->setPlainText(QString::fromStdString(this->p->toString()));
            break;
        default:
            QMessageBox messageBox;
            messageBox.critical(0,"Error", "Something terrible happend!");
            messageBox.setFixedSize(500,200);
            break;
        }

        std::cout << "ret: " << ret << std::endl;
        std::cout << this->p << std::endl;
    }
}
