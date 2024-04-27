//
// Created by Administrator on 1/27/2023.
//

#ifndef ARRAYLIST_ARRAYS_H
#define ARRAYLIST_ARRAYS_H

#include <iostream>

class Arrays {
private:
    int *A;
    int tail;
    int max_size;

public:
    Arrays(int s=10){
        A = new int[s];
        tail=0;
        max_size=s;
    }

    bool isFull(){
        return tail==max_size-1;
    }

    bool isEmpty(){
        return tail==0;
    }

    bool insertLast(int val){
        if(isFull())
            return false;

        A[tail++] = val;
        return true;
    }

    bool insertFirst(int val){
        if(isFull())
            return false;

        for(int i=tail; i>=0; --i){
            A[i] = A[i-1];
        }
        A[0] = val;
        ++tail;
        return true;
    }

    int search(int val){
        for(int i=0; i<tail; i++){
            if(A[i] == val)
                return i;
        }
        return -1;
    }

    bool setAt(int val, int index){
        if(index<tail){
            A[index] = val;
            return true;
        }
        return false;
    }

    bool getAt(int index, int &var){
        if(index<tail){
            var = A[index];
            return true;
        }
        return false;
    }

    bool deleteFirst(){
        if(isEmpty())
            return false;

        for(int i=0; i<tail-1; i++){
            A[i] = A[i+1];
        }
        --tail;
        return true;
    }

    bool deleteLast(int &var){
        if(isEmpty())
            return false;

        var = A[--tail];
        return true;
    }

    bool insertAt(int val, int index){
        if(index<tail && !isFull()){
            for(int i=tail-1; i>=index; --i){
                A[i+1] = A[i];
            }
            A[index] = val;
            tail++;
            return true;
        }
        else
            return false;
    }

    bool deleteAt(int index){
        if(isEmpty())
            return false;

        for(int i=index; i<tail; ++i){
            A[i] = A[i+1];
        }
        tail--;
        return true;
    }

    bool searchAndDelete(int val){
        int index = search(val);
        if(index != -1){
            deleteAt(index);
        }
        return false;
    }

    bool searchAndModify(int old_val, int new_val){
        int index = search(old_val);
        if(index != -1){
            A[index] = new_val;
            return true;
        }
        return false;
    }

    bool searchAndModifyAll(int old_val, int new_val){
        bool is_changed = false;
        for (int i = 0; i < tail; ++i) {
            if(A[i] == old_val){
                A[i] = new_val;
                is_changed = true;
            }
        }
        return is_changed;
    }

    bool printAll(){
        if(isEmpty())
            return false;

        for (int i = 0; i < tail; ++i) {
            std::cout<<A[i]<<" ";
        }
        std::cout<<"\n";
    }
};


#endif //ARRAYLIST_ARRAYS_H
