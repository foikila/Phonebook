#include "Reader.h"
#include "FileReader.h"
#include "List.h"
#include "LinkedList.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    List<Person> *list = new LinkedList<Person>();
    Person *p = new Friend("kalle1", "070","kalle@anka.se", 1994, "mr", "0340-38889");
    Person *p2 = new Friend("kalle", "070","kalle@anka.se", 1994, "mr", "0340-38889");
    list->insert(p);
    list->insert(p2);
    string filename = "test.txt";

    FileReader<Person> *r = new FileReader<Person>(filename);
    if (r->save(list)) {
        cout << "saved to : " << r->getFileName() << endl;
    } else {
        cout << "failed to save to:" << r->getFileName() << endl;
    }
    delete list;
    list = new LinkedList<Person>();
    try {
        r->read(list);
    } catch (const char *e) {
        cout << e << endl;
    }
    cout << list->toString() << endl;

    delete p;
    delete p2;
    delete r;
    delete list;
    return 0;
}
