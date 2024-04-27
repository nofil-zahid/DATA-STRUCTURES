#include <iostream>
#include "DLL.h"

int main() {
    DLL d;
    int x=0;

    d.insertLast(++x);
    d.insertLast(++x);
    d.insertLast(++x);
    d.insertLast(++x);
    d.insertLast(++x);
    d.insertLast(++x);
    d.printForward();

//    d.insertAt(9, 2);
//    d.insertBefore(9,5);
    d.deleteNode(4);
    d.printForward();


    return 0;
}
