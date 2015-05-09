#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

#include "viewDialog.h"
#include "FriendEditDialog.h"

#include "FileReader.h"
#include "Person.h"
#include "Phonebook.h"
#include "Administration.h"
#include "Colleague.h"
#include "Friend.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Phonebook *book;
    Ui::MainWindow *ui;
    ViewDialog *vd;
    void reloadListWidget();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
    void on_actionSave_triggered();
    void on_actionLoad_triggered();
    void on_actionAddFriend_triggered();
};

#endif
