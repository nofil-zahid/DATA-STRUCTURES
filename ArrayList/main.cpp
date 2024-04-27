#include <iostream>
#include <conio.h>

#include "Arrays.h"

using namespace std;

int main() {
    int v;
    Arrays a;

    a.insertLast(1);
    a.insertLast(2);
    a.insertLast(3);
    a.insertLast(4);

    a.insertFirst(9);
    a.printAll();

    a.insertAt(6,3);
    a.printAll();

    a.deleteFirst();
    a.printAll();

    a.deleteLast(v);
    a.printAll();

    a.deleteAt(2);
    a.printAll();

    cout<<a.getAt(0,v)<<endl;
    a.setAt(0,0);
    a.printAll();

    cout<<a.search(0)<<endl;

    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);
    a.insertFirst(9);

    a.printAll();

    a.deleteLast(v);
    a.deleteFirst();
    a.printAll();

    return 0;
}
