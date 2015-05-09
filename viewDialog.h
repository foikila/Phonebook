#ifndef VIEWDIALOG_H
#define VIEWDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "Person.h"
#include "friendEditdialog.h"

namespace Ui {
class ViewDialog;
}

class ViewDialog : public QDialog
{
    Q_OBJECT

private:
    Ui::ViewDialog *ui;
    Person *p;
    FriendEditDialog *editView;

public:
    explicit ViewDialog(QWidget *parent = 0);
    void addPerson(Person *&p);
    ~ViewDialog();

private slots:
    void on_ViewDialog_accepted();
    void on_pushButton_clicked();
};

#endif // VIEWDIALOG_H
