//
// Created by Administrator on 1/28/2023.
//

#ifndef DOUBLYLINKEDLIST_NODE_H
#define DOUBLYLINKEDLIST_NODE_H

#include <iostream>

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data = x;
        next = prev = NULL;
    }
};


#endif //DOUBLYLINKEDLIST_NODE_H
