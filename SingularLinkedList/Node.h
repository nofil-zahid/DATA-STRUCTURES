//
// Created by Administrator on 1/28/2023.
//

#ifndef SINGULARLINKEDLIST_NODE_H
#define SINGULARLINKEDLIST_NODE_H

#include <iostream>

class Node {
    int data;
    Node *next;

public:
    Node(int x){
        data = x;
        next = NULL;
    }

    void setData(int x){
        data = x;
    }

    void setNext(Node *node){
        next = node;
    }

    int getData(){
        return data;
    }

    Node* getNext(){
        return next;
    }
};


#endif //SINGULARLINKEDLIST_NODE_H
