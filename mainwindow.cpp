#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
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
    this->filename = "myContacts.txt";
    try {
        this->book->loadBook(this->filename);
    } catch (const char *e) {
        QMessageBox messageBox;
        messageBox.critical(this,"Error", "Failed to load file");
        messageBox.setFixedSize(500,200);
        std::cout << e << std::endl;
    }
    this->reloadListWidget();

    this->setWindowTitle("Phonebook");
}

MainWindow::~MainWindow()
{
    delete book;
    delete ui;
    delete vd;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->listWidget->currentRow() >= 0) {
        std::string currentSelected = this->ui->listWidget->currentItem()->text().toStdString();
        vd->addPerson(this->book->findPerson(currentSelected));
        int ret = this->vd->exec();
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

void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, tr("Save File"), QString(),
                   tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));
    if (filename != "") {
        this->book->saveBook(filename.toStdString());
        QMessageBox messageBox;
        messageBox.information(this,"Success","Saved!");
        messageBox.setFixedSize(500,200);
    }
}

void MainWindow::on_actionLoad_triggered()
{
    QString filename= QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
                   tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));
    if (filename != "") {
        this->book->loadBook(filename.toStdString());
        this->reloadListWidget();
    }
}

void MainWindow::on_actionAddFriend_triggered()
{
    Person *p = new Friend();
    FriendEditDialog d(this);
    d.setFriend(p);
    int ret = d.exec();
    switch (ret) {
    case 0:
        break;
    case 1:
        this->book->addPerson(p);
        this->reloadListWidget();
        break;
    default:
        QMessageBox messageBox;
        messageBox.critical(0,"Error", "Something terrible happend!");
        messageBox.setFixedSize(500,200);
        break;
    }
}

void MainWindow::on_actionAdd_Colleague_triggered()
{
    ColleagueDialog d(this);
    int ret = d.exec();
    Person *p = d.getPerson();
    if (p != nullptr) {
        switch (ret) {
        case 0:
            break;
        case 1:
            this->book->addPerson(p);
            this->reloadListWidget();
            break;
        default:
            QMessageBox messageBox;
            messageBox.critical(0,"Error", "Something terrible happend!");
            messageBox.setFixedSize(500,200);
            break;
        }
    }
}


void MainWindow::on_searchText_textChanged(const QString &arg1)
{
    if (arg1.isEmpty()) {
        this->reloadListWidget();
        return;
    }
    std::vector<std::string> resultSet;
    std::string searchStr = arg1.toStdString();
    for (unsigned int i = 0; i < this->ui->listWidget->count(); i++) {
        std::string current = this->ui->listWidget->item(i)->text().toStdString();
        if (current.find(searchStr) != string::npos) {
            resultSet.push_back(current);
        }
    }
    this->ui->listWidget->clear();
    if (resultSet.empty()) {
        this->reloadListWidget();
    } else {
        for (unsigned int i = 0; i < resultSet.size(); i++) {
            try {
                this->ui->listWidget->addItem(QString::fromStdString(resultSet[i]));
            } catch (const char * e) {
                std::cout << *e << std::endl;
            }
        }
    }
}

void MainWindow::on_actionRemove_triggered()
{
    QMessageBox messageBox;
    if (this->book->removePerson(this->ui->listWidget->currentRow())) {
        messageBox.information(0,"Success", "Removed!");
        this->reloadListWidget();
    } else {
        messageBox.critical(0,"Error", "Error removing person");
    }
    messageBox.setFixedSize(500, 200);
}
