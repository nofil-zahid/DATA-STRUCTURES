//
// Created by Administrator on 1/28/2023.
//

#ifndef SINGULARLINKEDLIST_SLL_H
#define SINGULARLINKEDLIST_SLL_H

#include <iostream>
#include "Node.h"

class SLL {
    Node *start, *last, *cur;
    int size;

public:
    SLL(){
        start = last = cur = NULL;
        size=0;
    }

    bool insertLast(int data){
        cur = new Node(data);

        if(!start){
            start = last = cur;
        }
        else{
            last->setNext(cur);
            last = cur;
        }
        ++size;
        return true;
    }

    bool insertFirst(int data){
        cur = new Node(data);

        if(!start){
            start = last = cur;
        }
        else {
            cur->setNext(start);
            start = cur;
        }
        ++size;
        return true;
    }

    bool deleteLast(){
        if(!start)
            return false;

        Node *i, *cur=NULL;
        for(i=start; i->getNext()!=NULL; i=i->getNext()){
            cur = i;
        }

        if(!cur){
            start = NULL;
        }
        else {
            cur->setNext(NULL);
            delete i;
        }
        --size;
        return true;
    }

    bool deleteFirst(){
        if(!start)
            return false;

        cur = start;
        start = cur->getNext();
        delete cur;
        --size;
        return true;
    }

    bool printAll(){
        if(!start)
            return false;

        for(Node *i=start; i!=NULL; i=i->getNext()){
            std::cout<<i->getData()<<" ";
        }
        std::cout<<"\n";
        return true;
    }

    bool isEmpty(){
        return !start;
    }

    bool search(int key){
        for (Node *i=start; i!=NULL ; i=i->getNext()) {
            if(i->getData() == key)
                return true;
        }
        return false;
    }

    bool replace(int old_val, int new_val){
        for (Node *i=start; i!=NULL ; i=i->getNext()) {
            if(i->getData() == old_val) {
                i->setData(new_val);
                return true;
            }
        }
        return false;
    }

    bool deleteNode(int x){
        if(!start)
            return false;

        for(Node *i = start; i!=NULL; i=i->getNext()){
            if(i->getData() == x){
                if(i == start){
                    return deleteFirst();
                }
                cur->setNext(i->getNext());
                delete i;
                --size;
                return true;
            }
            cur = i;
        }
    }

    bool insertAt(int data, int pos){
        if(pos>size)
            return false;

        Node *temp = new Node(data);
        cur = start;
        for(int i=1; i<pos; i++){
            cur = cur->getNext();
        }

        temp->setNext(cur->getNext());
        cur->setNext(temp);
        return true;
    }

    bool insertAfter(int data, int val){
        if(!start)
            return false;

        cur = start;
        do {
            if(cur->getData() == val){
                Node *temp = new Node(data);
                temp->setNext(cur->getNext());
                cur->setNext(temp);
                return true;
            }
            cur = cur->getNext();
        }
        while(cur!=NULL);
        return false;
    }

    bool insertBefore(int data, int val){
        if(!start)
            return false;

        cur = start;
        Node *prv=NULL;
        do {
            if(cur->getData() == val){
                Node *temp = new Node(data);
                temp->setNext(prv->getNext());
                prv->setNext(temp);
                return true;
            }
            prv = cur;
            cur = cur->getNext();
        }
        while(cur!=NULL);
        return false;
    }

    bool deleteBefore(int val){
        if(!start)
            return false;

        cur = start;
        Node *prev;
        do {
            if(cur->getData() == val){
                return deleteNode(prev->getData());
            }
            prev = cur;
            cur = cur->getNext();
        }
        while(cur!=NULL);
    }

    bool deleteAfter(int val){
        if(!start)
            return false;

        cur = start;
        Node *prev;
        do {
            if(cur->getData() == val){
                prev = cur;
                cur = cur->getNext();

                if(!cur)
                    return false;

                prev->setNext(cur->getNext());
                delete cur;
                --size;
                return true;
            }
            cur = cur->getNext();
        }
        while(cur!=NULL);
        return false;
    }

    bool deleteAll(int val){
        if(!start)
            return false;

        while(start && start->getData()==val){
            deleteFirst();
//            start = start->getNext();
        }

        Node *prev = NULL;
        for(Node *i=start; i!=NULL; i=i->getNext()){
            if(i->getData() == val)
            {
                prev->setNext(i->getNext());
//                cur = i;
//                delete cur;
            }
            else
                prev = i;
        }

        return true;
    }
};


#endif //SINGULARLINKEDLIST_SLL_H
