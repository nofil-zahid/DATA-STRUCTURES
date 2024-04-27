//
// Created by Administrator on 1/28/2023.
//

#ifndef STACK_USINGARRAY_STACK_H
#define STACK_USINGARRAY_STACK_H

#include <iostream>

class Stack {
    int *A;
    int top;
    int max_size;

public:
    Stack(int s=10){
        A = new int[s];
        top=0;
        max_size=s;
    }

    int size(){
        return top;
    }

    bool isFull(){
        return top==max_size;
    }

    bool isEmpty(){
        return !top;
    }

    bool push(int x){
        if(isFull())
            return false;

        A[top++] = x;
        return true;
    }

    bool pop(int &var){
        if(isEmpty())
            return false;

        var = A[--top];
        return true;
    }

    bool peek(int &var){
        if(isEmpty())
            return false;

        var = A[top-1];
        return true;
    }

    bool printAll(){
        if(isEmpty())
            return false;

        for(int i=top-1; i>=0; --i){
            std::cout<<A[i]<<" ";
        }
        std::cout<<"\n";
    }
};


#endif //STACK_USINGARRAY_STACK_H
