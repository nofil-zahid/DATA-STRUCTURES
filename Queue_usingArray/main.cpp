#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
   Queue q;
   int a;
   cout<<q.isEmpty()<<endl;

   q.insert(1);
   q.insert(2);
   q.insert(3);
   q.insert(4);
   q.print();

   q.remove(a);
   q.print();

   q.insert(9);
   q.print();


    return 0;
}
