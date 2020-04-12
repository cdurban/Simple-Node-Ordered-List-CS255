/*
 * Project:     Project 6
 * File:        Node.cpp
 * Author:      Chase Urban
 * Due:         March 18th, 2020
 * Description: REPLACE
 */

#include <cstdlib>

#include "Node.h"

Node::Node(type d, Node* l) {
    data = d;
    link = l;
}

Node::Node(const Node& orig) {
    data = orig.data;
    link = orig.link;
}

Node::~Node() {
    delete link;
}

void Node::setData(type d){
    data = d;
}

void Node::setLink(Node* l){
    link = l;
}

Node::type Node::getData()const{
    return data;
}

Node* Node::getLink()const{
    return link;
}

std::ostream& operator <<(std::ostream& out, const Node& n){
    out << "<-[DATA = " << n.data << "]->";
    return out;
}