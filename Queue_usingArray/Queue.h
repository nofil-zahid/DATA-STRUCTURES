//
// Created by Administrator on 2/1/2023.
//

#ifndef QUEUE_USINGARRAY_QUEUE_H
#define QUEUE_USINGARRAY_QUEUE_H

#include <iostream>
#define N 10

class Queue {
    int A[N];
    int head, tail;

public:
    Queue(){
        head = tail = 0;
    }

    bool isFull(){
        return tail==N;
    }

    bool isEmpty(){
        return tail==0;
    }

    bool insert(int x){
        if(isFull())
            return false;

        A[tail++] = x;
        return true;
    }

    bool remove(int &x){
        if(isEmpty())
            return false;

        x = A[head++];
        return true;
    }

    bool print(){
        if(isEmpty())
            return false;

        for(int i=head; i<tail; i++){
            std::cout<<A[i]<<" ";
        }
        std::cout<<"\n";
    }
};


#endif //QUEUE_USINGARRAY_QUEUE_H
