#include "mainwindow.h"
#include "ui_mainwindow.h"

// ===================
// private
// ===================

void MainWindow::reloadListWidget()
{
    ui->listWidget->clear();

    for (unsigned int i = 0; i < this->book->size(); i++) {
        try {
            QString toAddStr = QString::fromStdString(this->book->findPerson(i)->getName());
            ui->listWidget->addItem(toAddStr);
        } catch (const char * e) {
            std::cout << e << std::endl;
        }
    }
}

// ===================
// public
// ===================

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->vd = new ViewDialog(this);
    this->book = new Phonebook();
    try {
        /*this->book->addPerson(new Friend("name", "03", "asdm@email.com", 1994, "MR", "034038889"));
        this->book->addPerson(new Friend("name2", "03", "asdm@email.com", 1994, "MR", "034038889"));
        this->book->addPerson(new Friend("name3", "03", "asdm@email.com", 1994, "MR", "034038889"));
        this->book->addPerson(new Friend("name4", "03", "asdm@email.com", 1994, "MR", "034038889"));
        this->book->addPerson(new Friend("name5", "03", "asdm@email.com", 1994, "MR", "034038889"));
        this->book->addPerson(new Friend("name6", "03", "asdm@email.com", 1994, "MR", "034038889"));
        this->book->saveBook("myContact.txt");*/
        this->book->loadBook("myContact.txt");
    } catch (const char *e) {
        QMessageBox messageBox;
        messageBox.critical(this,"Error", "Failed to load file");
        messageBox.setFixedSize(500,200);
        std::cout << e << std::endl;
    }
    this->reloadListWidget();
}

MainWindow::~MainWindow()
{
    delete book;
    delete ui;
    delete vd;
}

void MainWindow::on_pushButton_clicked()
{
    int toView = ui->listWidget->currentRow();
    if (toView >= 0) {
        vd->addPerson(this->book->findPerson(toView));
        int ret = this->vd->exec();

        std::cout << "RET: " <<  ret << std::endl;
        switch (ret) {
        case 0:
        case 1:
            this->reloadListWidget();
            break;
        default:
            QMessageBox messageBox;
            messageBox.critical(this,"Error", "Something terrible happend!");
            messageBox.setFixedSize(500,200);
            break;
        }

    } else {
        QMessageBox messageBox;
        messageBox.information(this,"Error","No contact selected!");
        messageBox.setFixedSize(500,200);
    }
}
