#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viewDialog.h"
#include "List.h"
#include "LinkedList.h"
#include "FileReader.h"
#include "Administration.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    List<Person> *list;
    Ui::MainWindow *ui;
    ViewDialog *vd;
    void reloadListWidget();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
};

#endif
