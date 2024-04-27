//
// Created by Administrator on 2/1/2023.
//

#ifndef STACK_USINGCLL_DCNODE_H
#define STACK_USINGCLL_DCNODE_H

#include <iostream>
using namespace std;

class DCNode {
public:
    int data;
    DCNode *next;
    DCNode *prev;

    DCNode(int x){
        data = x;
        next = prev = NULL;
    }
};


#endif //STACK_USINGCLL_DCNODE_H
