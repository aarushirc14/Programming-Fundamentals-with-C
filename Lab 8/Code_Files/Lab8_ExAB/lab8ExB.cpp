//
// lab8ExB.cpp
//
// ENSF 337 Fall 2021, Lab 8 Exercise B
//

#include <iostream>
using namespace std;

#include "OLList.h"

int main()
{
    OLList the_list;
    
    cout << "List just after creation. expected to be [ ]" << endl;
    the_list.print();
    the_list.insert(330);
    the_list.insert(440);
    the_list.insert(220);
    the_list.insert(110);
    the_list.insert(550);
    the_list.insert(99);
    the_list.insert(120);
    cout << "the_list after some insertions. Expected to be: [ 99, 110, 120, 220, 330, 440, 550 ]"<< endl;
    the_list.print();
    
#if 1       // change #if 0 to #if 1 to test copyiong list.
    cout << "testing for copying lists ..."<< endl;
    OLList other_list;
    other_list = the_list;
    cout << "other_list as a copy of the_list: expected to be [ 99, 110, 120, 220, 330, 440, 550 ]" << endl;
    other_list.print();
    OLList third_list = the_list;
    cout << "third_list as a copy of the_list: expected to be: [ 99, 110, 120, 220, 330, 440, 550 ]" << endl;
    third_list.print();
#endif
    
#if 1     //  change #if 0 to #if 1 to test removing and chaining.
    cout << "testing for removing and chaining assignment operator..."<< endl;
    the_list.remove(550);
    the_list.remove(330);
    cout << "the_ist after some removals: expected to be: [ 99, 110, 120, 220, 440 ]" << endl;
    the_list.print();
    cout << "printing other_list one more time: expected to be: [ 99, 110, 120, 220, 330, 440, 550 ]" << endl;
    other_list.print();
    cout << "printing third_list one more time: expected to be: [ 99, 110, 120, 220, 330, 440, 550 ]" << endl;
    third_list.print();
    cout << "chaining assignment operator ..."<< endl;
    third_list = other_list = the_list;
    cout << "the_list after chaining assignment operator: expected to be: [ 99, 110, 120, 220, 440 ]" << endl;
    the_list.print();
    cout << "other_list after chaining: expected to be: [ 99, 110, 120, 220, 440 ]" << endl;
    other_list.print();
    cout << "third_list after chaining: expected to be: [ 99, 110, 120, 220, 440 ]" << endl;
    third_list.print();
#endif
    return 0;
}

