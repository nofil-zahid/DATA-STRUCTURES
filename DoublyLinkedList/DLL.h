//
// Created by Administrator on 1/28/2023.
//

#ifndef DOUBLYLINKEDLIST_DLL_H
#define DOUBLYLINKEDLIST_DLL_H

#include <iostream>
#include "Node.h"

class DLL {
    Node *head, *last, *cur;
    int size;

    void manage(Node *i, Node *j){
        i->next = j;
        j->prev = i;
    }

    void manage(Node *i, Node *j, Node *k){
        j->next = k;
        j->prev = i;
        i->next = j;
        k->prev = j;
    }

public:
    DLL(){
        head = last = cur = NULL;
        size=0;
    }

    bool insertLast(int data){
        cur = new Node(data);
        if(!head){
            head = last = cur;
        }
        else {
            manage(last, cur);
            last = cur;
        }
        size++;
        return true;
    }

    bool insertFirst(int data){
        cur = new Node(data);

        if(!head){
            head = last = cur;
        }
        else {
            manage(cur, head);
            head = cur;
        }
        size++;
        return true;
    }

    bool insertAfter(int data, int value){
        if(!head)
            return false;

        for(Node *i=head; i!=NULL; i=i->next){
            if(i->data == value){
                cur = new Node(data);
                manage(i, cur,i->next );
                size++;
                return true;
            }
        }
    }

    bool insertBefore(int data, int value){
        if(!head)
            return false;

        Node *prev=NULL;
        for(Node *i=head; i!=NULL; i=i->next){
            if(i->data == value){
                cur = new Node(data);
                manage(i->prev, cur, i);
                size++;
                return true;
            }
        }
    }

    bool insertAt(int data, int pos){
        if(!head || pos>size)
            return false;

        cur = head;
        for(int i=1; i<pos; i++){
            cur = cur->next;
        }

        Node *newnode = new Node(data);
        manage(cur, newnode, cur->next);

        return false;
    }

    bool deleteFirst(){
        if(!head)
            return false;

        cur = head;
        head = cur->next;
        head->prev = NULL;
        --size;
        delete cur;
        return true;
    }

    bool deleteLast(){
        if(!head)
            return false;

        cur = last;
        last = cur->prev;
        last->next = NULL;
        delete cur;
        --size;
        return true;
    }

    bool printForward(){
        if(!head)
            return false;

        for(Node *i=head; i!=NULL; i=i->next){
            std::cout<<i->data<<" ";
        }
        std::cout<<"\n";
        return true;
    }

    bool printBackward(){
        if(!head)
            return false;

        for(Node *i=last; i!=NULL; i=i->prev){
            std::cout<<i->data<<" ";
        }
        std::cout<<"\n";
        return true;
    }

    bool search(int key){
        if(!head)
            return false;

        for(cur=head; cur!=NULL; cur=cur->next){
            std::cout<<cur->data<<" ";
        }
        std::cout<<" ";
        return true;
    }

    bool deleteNode(int data){
        if(!head)
            return false;

        for(cur=head; cur!=NULL; cur=cur->next){
            if(cur->data == data){
                if(cur == head)
                    return deleteFirst();

                manage(cur->prev, cur->next);
                return true;
            }
        }
        return false;
    }

    void printinFixed(){

    }
};


#endif //DOUBLYLINKEDLIST_DLL_H
