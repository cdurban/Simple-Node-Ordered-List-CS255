/*
 * Project:     Project 6
 * File:        OrderedList.cpp
 * Author:      Chase Urban
 * Due:         March 18th, 2020
 * Description: REPLACE
 *              NEEDS DESTRUCTOR
 */

#include <cstdlib>

#include "OrderedList.h"

OrderedList::OrderedList() {
    first = NULL;
    last = NULL;
    size = 0;
}

OrderedList::OrderedList(const OrderedList& orig) {
    first = NULL;
    last = NULL;
    size = 0;
    for(Node* n = orig.first; n != NULL; n = n->getLink())
        this->insert(n->getData());
}

OrderedList::~OrderedList() {
    //while(first != NULL){
    //    Node *curr, *prev;
    //    for(curr = first; curr != NULL; prev = curr, curr = curr->getLink());
    //    delete curr;
    //    last = prev;
    //    last->setLink(NULL);        
    //}
}

void OrderedList::insert(Node::type d){
    if(first == NULL){
        first = new Node(d, NULL);
        last = first;
        size++;
        return;
    }
    else if(d <= first->getData()){
        first = new Node(d, first);
        size++;
        return;        
    }
    else if(last->getData() <= d){
        last->setLink(new Node(d, NULL));
        last = last->getLink();
        size++;
        return;
    }
    else{
        for(Node* n = first; n != NULL; n = n->getLink()){
            if(d <= n->getLink()->getData()){
                n->setLink(new Node(d, n->getLink()));
                size++;
                return;
            }
        }
    }
}

Node::type OrderedList::get(int k){
    Node* n = first;
    for(int i = 0; i < size; i++){
        if(i == k)
            return n->getData();
        n = n->getLink();
    }
    return NULL;
}

OrderedList OrderedList::kLargest(int k){
    OrderedList ol;
    int numToSkip = size-k;
    //for(num)
    
    
    
    return ol;
}

bool OrderedList::remove(Node::type d){
    
}

OrderedList OrderedList::operator +(const OrderedList& list)const{
    
}

void OrderedList::operator =(const OrderedList & list){
    
}

std::ostream& operator <<(std::ostream &out, const OrderedList& list){
    out << "<";
    for(Node* n = list.first; n != NULL; n = n->getLink()){
        out << n->getData();
        if(n->getLink() != NULL)
            out << ", ";
    }
    out << ">";           
    return out;
}