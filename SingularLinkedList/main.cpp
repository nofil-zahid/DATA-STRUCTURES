#include <iostream>
#include "SLL.h"

using namespace std;

int main() {
    SLL l;
    int i=1;

    cout<<"Empty : "<<l.isEmpty()<<endl;

//    l.insertLast(++i);
    l.insertLast(1);
    l.insertLast(1);
    l.insertLast(1);
    l.insertLast(3);
    l.insertLast(5);
    l.insertLast(1);
    l.insertLast(1);
//    l.insertLast(++i);
//    l.insertLast(++i);
//    l.insertLast(++i);
//    l.insertLast(++i);
//    l.insertLast(1);
//    l.insertLast(1);

    l.printAll();

//    l.insertBefore(9, 8);

//    l.deleteBefore(4);

    l.deleteAll(1);
    l.printAll();

    return 0;
}
