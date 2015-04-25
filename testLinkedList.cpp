#include <iostream>
#include <string>
#include "List.h"
#include "LinkedList.h"
#include "Person.h"
#include "Friend.h"

using namespace std;



int main()
{
    List<Person> *l = new LinkedList<Person>();
    Person *p = new Friend("kalle1", "070","kalle@anka.se", 1994, "mr", "0340-38889");
    Person *p2 = new Friend("kalle", "070","kalle@anka.se", 1994, "mr", "0340-38889");
    l->insert(p);
    l->insert(p2);
    cout << l->peek()->toString();
    cout << l->remove()->toString();
    cout << l->peek()->toString();
    cout << l->remove()->toString();
    delete l;
    delete p;
    delete p2;
    return 0;
}
