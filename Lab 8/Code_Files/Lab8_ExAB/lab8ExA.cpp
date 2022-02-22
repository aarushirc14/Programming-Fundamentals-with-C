 // lab8ExA.cpp
// 
// ENSF 337 Lab 8 Exercise A
//

#include <iostream>
using namespace std;

#include "OLList.h"

int main()
{
  OLList the_list;

  cout << "List just after creation: ";
  the_list.print();
  the_list.insert(330);
  the_list.insert(440);
  the_list.insert(220);
  the_list.insert(110);
  cout << "List after some insertions: ";
  the_list.print();
  the_list.remove(550);
  the_list.remove(330);
  cout << "List after some removals: ";
  the_list.print();

  return 0;
}
