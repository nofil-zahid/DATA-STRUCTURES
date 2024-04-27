#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack s;
    int v;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.printAll();

    s.pop(v);
    cout<<"first poped value : "<<v<<endl;
    s.printAll();

    s.peek(v);
    cout<<"Value on the top : "<<v<<endl;

    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;
    cout<<s.push(9)<<endl;

    s.printAll();

    return 0;
}
