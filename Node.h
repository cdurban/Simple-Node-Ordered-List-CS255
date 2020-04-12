/*
 * Project:     Project 6
 * File:        Node.h
 * Author:      Chase Urban
 * Due:         March 18th, 2020
 * Description: REPLACE
 */

#include <cstdlib>
#include <iostream>

#ifndef NODE_H
#define NODE_H

class Node {
public:
    typedef double type;
    
    /** Constructor with default values */
    Node(type d = type(), Node* l = NULL);
    /** Copy constructor */
    Node(const Node& orig);
    /** Destructor */
    ~Node();
    
    /**
     * Sets the data
     * Precondition: An argument of type type */
    void setData(type d);
    /** 
     * Sets the link
     * Precondition: A pointer to a Node
     */
    void setLink(Node* l);
    
    /**
     * Gets the data
     * Postcondition: The data of the Node, of type type
     */
    type getData()const;
    /**
     * Gets the link
     * Postcondition: The link of the Node, a Node pointer
     */
    Node* getLink()const;
    
    /** Overload of insertion operator */
    friend std::ostream& operator <<(std::ostream& out, const Node& n);
private:
    /** The data this node holds, of type type */
    type data;
    /** The link to the next Node, a Node pointer*/
    Node* link;
};

#endif /* NODE_H */