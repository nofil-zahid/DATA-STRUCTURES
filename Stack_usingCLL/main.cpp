#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.print();

    q.dequeue();
    q.enqueue(9);

    q.print();

    return 0;
}
