/*
 * Project:     Project 6
 * File:        main.cpp
 * Author:      Chase Urban
 * Due:         March 18th, 2020
 * Description: REPLACE
 */

#include <cstdlib>
#include "Node.h"
#include "OrderedList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Node n1 = (0.1);
    Node n2 = (2.3);
    cout << n1 << n2 << endl;
    
    OrderedList o1;
    o1.insert(10);
    cout << o1 << endl;
    o1.insert(4);
    cout << o1 << endl;
    o1.insert(8);
    cout << o1 << endl;
    o1.insert(5);
    cout << o1 << endl;
    o1.insert(2);
    cout << o1 << endl;
    o1.insert(7);
    cout << o1 << endl;
    o1.insert(1);
    cout << o1 << endl;
    o1.insert(9);
    cout << o1 << endl;
    o1.insert(6);
    cout << o1 << endl;
    o1.insert(3);
    cout << o1 << endl;
    o1.insert(0);
    cout << o1 << endl;
    
    cout << o1.get(0) << " " << o1.get(1) << " " << o1.get(2) << " " << endl;
    cout << o1.get(3) << " " << o1.get(4) << " " << o1.get(5) << " " << endl;
    cout << o1.get(6) << " " << o1.get(7) << " " << o1.get(8) << " " << endl;
    cout << o1.get(9) << " " << o1.get(10) << " " << endl;
    
    return 0;
}

