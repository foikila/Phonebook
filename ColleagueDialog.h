#ifndef COLLEAGUEDIALOG_H
#define COLLEAGUEDIALOG_H

#include <QDialog>
#include "Colleague.h"
#include "Administration.h"
#include "Teacher.h"

namespace Ui {
class ColleagueDialog;
}

class ColleagueDialog : public QDialog
{
    Q_OBJECT

private:
    Administration *a;
    Teacher *t;
    Ui::ColleagueDialog *ui;
public:
    explicit ColleagueDialog(QWidget *parent = 0);
    ~ColleagueDialog();
    void setPerson(Person *&f, std::string classType);
    Person* getPerson();
private slots:
    void on_buttonBox_accepted();
};

#endif
