/*
 * Project:     Project 6
 * File:        OrderedList.h
 * Author:      Chase Urban
 * Due:         March 18th, 2020
 * Description: REPLACE
 */

#include <cstdlib>
#include <iostream>
#include "Node.h"

#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H

class OrderedList {
public:
    /** */
    OrderedList();
    /** */
    OrderedList(const OrderedList& orig);
    /** */
    ~OrderedList();
    
    /** */
    void insert(Node::type d);
    /** */
    Node::type get(int k);
    
    /** */
    OrderedList kLargest(int k);
    
    /** */
    bool remove(Node::type d);
    
    /** */
    OrderedList operator +(const OrderedList& list)const;
    
    /** */
    void operator =(const OrderedList& list);
    
    /** */
    friend std::ostream& operator << (std::ostream&out, 
        const OrderedList& list);
private:
    Node* first;
    Node* last;
    int size;
};

#endif /* ORDEREDLIST_H */

