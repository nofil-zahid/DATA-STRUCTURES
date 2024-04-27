#include <iostream>
#include "Arrays.h"
using namespace std;

int main() {
    int v;
    Arrays a;

    a.insertLast(1);
    a.insertLast(2);
    a.insertLast(3);
    a.insertLast(4);
    a.insertLast(5);

    cout<<"Max Size 1: "<<a.secret()<<endl;

    a.insertLast(6);
    a.insertLast(7);

    a.printAll();
    cout<<"Max Size 2: "<<a.secret()<<endl;

    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;
    a.deleteLast(v);
    cout<<"Max Size: "<<a.secret()<<endl;


    return 0;
}
