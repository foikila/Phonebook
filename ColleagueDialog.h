#ifndef COLLEAGUEDIALOG_H
#define COLLEAGUEDIALOG_H

#include <QDialog>
#include "Colleague.h"
#include "Administration.h"

namespace Ui {
class ColleagueDialog;
}

class ColleagueDialog : public QDialog
{
    Q_OBJECT

private:
    Administration *a;
    Ui::ColleagueDialog *ui;
public:
    explicit ColleagueDialog(QWidget *parent = 0);
    ~ColleagueDialog();
    void setPerson(Person *&f);
    Person* getPerson();
private slots:
    void on_buttonBox_accepted();
};

#endif
