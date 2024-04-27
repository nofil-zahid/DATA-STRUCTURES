//
// Created by Administrator on 2/1/2023.
//

#ifndef STACK_USINGCLL_QUEUE_H
#define STACK_USINGCLL_QUEUE_H

#include "DCNode.h"

class Queue {
    DCNode *front, *rear, *temp;
    int s;

public:
    Queue(){
        front = rear = NULL;
    }

    bool enqueue(int data){
        temp = new DCNode(data);

        if(!front){
            front = rear = temp;
        }
        else {
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }

        return true;
    }

    bool dequeue(){
        if(!front)
            return false;

        temp = front;
        front = temp->next;
        delete temp;
        return true;
    }

    bool print(){
        if(!front)
            return false;

        for(DCNode *i=front; i!=NULL; i=i->next)
            std::cout<<i->data<<" ";
        std::cout<<"\n";

        return true;
    }
};


#endif //STACK_USINGCLL_QUEUE_H
