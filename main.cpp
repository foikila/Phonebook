#include "mainwindow.h"
#include <QApplication>

#include "List.h"
#include "LinkedList.h"
#include "Reader.h"
#include "FileReader.h"

#include <iostream>
using namespace std;
/*
int main()
{
    Reader<string> *r = new FileReader<string>("filename.txt");
    cout << r->getFileName() << endl;

    delete r;
    return 0;
}*/

/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
*/
/*
void insert(List<int> *&list);
void remove(List<int> *&list);

int main () {

    List<int> *list = new LinkedList<int>();

    cout << list->toString() << endl;

    insert(list);
    // Remove tests
    remove(list);

    delete list;
    return 0;

}*/
/* insert tests */
/*
void insert(List<int> *&list) {
    try {
        cout << "Insert of 10 at pos 3. Expected output 10" << endl;
        list->insertAt(3, 10);
    } catch (const char *e) {
        cout << endl << "Caught: " << e << endl << endl;
    }
    try {
        cout << "Insert of 15 at pos 2. Expected output 10, 15 " << endl;
        list->insertAt(2, 15);
    } catch (const char *e) {
        cout << endl << "Caught: " << e << endl << endl;
    }
    try {
        cout << "Insert of 20 at pos 2. Expected output 10, 15, 20 " << endl;
        list->insertAt(2, 20);
    } catch (const char *e) {
        cout << endl << "Caught: " << e << endl << endl;
    }
    try {
        cout << "Insert of 90 at pos 3. Expected output 10, 15, 20, 90 " << endl;
        list->insertAt(3, 90);
    } catch (const char *e) {
        cout << endl << "Caught: " << e << endl << endl;
    }
    try {
        cout << "Insert of 100 at pos 3. Expected output 10, 15, 20, 100, 90" << endl;
        list->insertAt(3, 100);
    } catch (const char *e) {
        cout << endl << "Caught: " << e << endl << endl;
    }
    try {
        cout << "Insert of 5 at pos -1. Expected error " << endl;
        list->insertAt(-1, 5);
    } catch (const char *e) {
        cout << endl << "Caught: " << e << endl << endl;
    }

    try {
        cout << "Result after inserting: " << endl;
        cout << list->toString() << endl << "------------------------------------------------" << endl  <<  endl;
    } catch (const char *e) {
        cout << e << endl << endl;
    }
}

void remove(List<int> *&list) {

    List<int> *orgi = list;

    try {
        cout << "removed: " << list->removeAt(0) << endl;
    } catch (const char* e) {
        cout << "Caught: " << e << ". When removeing at(0)" << endl  << endl;
    }

    try {
        cout << "removed: " << list->removeAt(9120) << endl;
    } catch (const char* e) {
        cout << "Caught: " << e << ". When removeing at(9120)" << endl  << endl;
    }

    try {
        cout << "removed: " << list->removeAt(3) << endl;
    } catch (const char* e) {
        cout << "Caught: " << e << ". When removeing at(3)" << endl  << endl;
    }
    cout << "List before: " << endl;
    cout << orgi->toString() << endl;
    cout << "After: " << endl;
    cout << list->toString() << endl;
}
*/
