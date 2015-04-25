#include "mainwindow.h"
#include <QApplication>

#include "List.h"
#include "LinkedList.h"
#include "Reader.h"
#include "FileReader.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
