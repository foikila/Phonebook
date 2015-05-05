#include "mainwindow.h"
#include "ui_mainwindow.h"

// ===================
// private
// ===================

void MainWindow::reloadListWidget()
{
    ui->listWidget->clear();

    for (unsigned int i = 0; i < this->list->size(); i++) {
        try {
            QString toAddStr = QString::fromStdString(this->list->elementAt(i)->getName());
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
    this->list = new LinkedList<Person>();
    this->list->insert(new Friend("name", "03", "asdm@email.com", 1994, "MR", "034038889"));
    this->list->insert(new Friend("name2", "03", "asdm@email.com", 1994, "MR", "034038889"));
    this->list->insert(new Friend("name3", "03", "asdm@email.com", 1994, "MR", "034038889"));
    this->list->insert(new Friend("name4", "03", "asdm@email.com", 1994, "MR", "034038889"));
    this->list->insert(new Friend("name5", "03", "asdm@email.com", 1994, "MR", "034038889"));
    this->list->insert(new Friend("name6", "03", "asdm@email.com", 1994, "MR", "034038889"));
    this->reloadListWidget();
    this->vd = new ViewDialog(this);
}

MainWindow::~MainWindow()
{
    delete list;
    delete ui;
    delete vd;
}

void MainWindow::on_pushButton_clicked()
{
    int toview = ui->listWidget->currentRow();
    std::cout << "toview " << toview << std::endl;
    if (toview >= 0) {
        std::cout <<  toview << std::endl;
        Person *p = this->list->elementAt(toview);

        vd->addPerson(p);

        vd->show();
    }
}
