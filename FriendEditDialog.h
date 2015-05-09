#ifndef FRIENDEDITDIALOG_H
#define FRIENDEDITDIALOG_H

#include <QDialog>
#include "Friend.h"

namespace Ui {
class FriendEditDialog;
}

class FriendEditDialog : public QDialog
{
    Q_OBJECT
private:
    Ui::FriendEditDialog *ui;
    Friend *f;
public:
    explicit FriendEditDialog(QWidget *parent = 0);
    ~FriendEditDialog();
    void setFriend(Person *&f);

private slots:
    void on_buttonBox_accepted();
};

#endif
