#include<iostream>
using namespace std;
#include "intSLList.h"
IntSLList::~IntSLList(){
    for (IntSLLNode *p; !isEmpty(); ){
        p = head->next;
        delete head;
        head = p;
    }
}
void IntSLList::addTohead(int el){
    head = new IntSLLNode(el,head);
    if(tail == 0){
        tail = head;
    }else{
        head = tail = new IntSLLNode(el);
    }
}
int IntSLList::deleteFromHead(){
    int el = head->info;
    IntSLLNode *tmp = head;
    if (head == tail){//if only one node in the list
        head = tail = 0;
    }else{
        head = head->next;
    }
    delete tmp;
    return el;
}
int IntSLList::deleteFromTail(){
    int el = tail->info;
    if (head == tail){//if only one node in the list;
        delete head;
        head = tail = 0;
    }else{//if more than one node in the list
        IntSLLNode *tmp;//find the predecessor of tail
        for(tmp = head; tmp->next != tail; tmp = tmp->next);
        delete tail;
        tail = tmp;//the predecessor of tail becomes tail;
        tail->next=0;
    }
    return el;
}

void IntSLList::deleteNode(int el){
    if (head != 0){//if nonempty list;
        if (head == tail && el == head->info){//if only one node in the list;
            delete head;
            head = tail = 0;
        }
        else if (el == head->info){//if more than one node in the list
            IntSLLNode *tmp = head;
            head = head->next;
            delete tmp;//old head is deleted;
        }
        else {
            IntSLLNode *pred, *tmp;
            for (pred = head, tmp = head->next;
             tmp != 0 && !(tmp->info == el);
             pred = pred->next, tmp = tmp->next );
             if (tmp != 0) {
                pred->next = tmp -> next;
                if (tmp == tail){
                    tail == pred;
                }
                delete tmp;
             }
        }
    }
    
}
bool IntSLList::isInList(int el) const {
    IntSLLNode *tmp;
    for(tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
    return tmp != 0;
}
