// File lab7ExC.cpp
// ENSF 337  LAB 7 - EXERCISE C
// By: M. Moussavi 

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

#include "clock.h"

void print(const Clock& t);
// REQUIRES: t refers to an object of class Clock with valid values.
// PROMISES: displays the time values in an object of class Clock:
//           in the following hh:mm:ss.

int main(void) {
    
    Clock t1;
    cout << "Object t1 is created. Expected time is: 00:00:00\n";
    print(t1);
    
    for(int i = 0; i < 86400; i++)
        t1.increment();
    
    cout << "Object t1 incremented by 86400 seconds. Expected time is: 00:00:00\n";
    print(t1);
    
    Clock t2(86405);
    cout << "Object t2 is created. Expected time is: 00:00:05\n";
    print(t2);
    
    for(int i = 0; i < 6; i++)
        t2.decrement();
    
    cout << "Object t2 decremented by 6 seconds. Expected time is: 23:59:59\n";
    print(t2);
    

    t1.set_hour(21);
    cout << "After setting t1's hour to 21. Expected time is: 21:00:00\n";
    print(t1);
    
    t1.set_hour(60);
    cout << "Setting t1's hour to 60 (invalid value). Expected time is: 21:00:00\n";
    print(t1);

    t2.set_minute(20);
    cout << "Setting t2's minute to 20. Expected time is: 23:20:59\n";
    print(t2);
    
    t2.set_second(50);
    cout << "Setting t2's second to 50. Expected time is 23:20:50\n";
    print(t2);
    
    t2.add_seconds(2350);
    cout << "Adding 2350 seconds to t2. Expected time is: 00:00:00\n";
    print(t2);

    t2.add_seconds(72000);
    cout << "Adding 72000 seconds to t2. Expected time is: 20:00:00\n";
    print(t2);
    
    
    t2.add_seconds(216000);
    cout << "Adding 216000 seconds to t2. Expected time is: 08:00:00\n";
    print(t2);
    
    Clock t3(0, 0, 0);
    cout << "Object t3 is created. Expected time is: 00:00:00\n";
    print(t3);
    
    t3.increment();
    cout << "Adding 1 second to clock t3. Expected time is: 00:00:01\n";
    print(t3);

    t3.decrement();
    cout << "After calling decrement for t3. Expected time is: 00:00:00\n";
    print(t3);
    
    for(int i = 0; i < 86400; i++)
        t3.increment();
    
    cout << "After incrementing t3 by 86400 seconds. Expected time is: 00:00:00\n";
    print(t3);
    
    for(int i = 0; i < 86401; i++)
        t3.decrement();
    
    cout << "After decrementing t3 by 86401 seconds. Expected time is: 23:59:59\n";
    print(t3);

    for(int i = 0; i < 864010; i++)
        t3.decrement();
    
    cout << "After decrementing t3 by 864010 seconds. Expected time is: 23:59:49\n";
    print(t3);
    
    // Oject t4 is created with invalid value of hour (i.e. 25), and valid values
    // for other members, minute and second respectively.
    Clock t4(25, 0, 0);
    cout << "t4 is created with invalid value (25 for hour). Expected to show: 00:00:00\n";
    print(t4);
    
    // Oject t5 is created with invalid value of minute (i.e. -8), and valid values
    // for other member, hour and second.
    Clock t5(23, -8, 59);
    cout << "t5 is created with invalid value (-8 for minute). Expected to show: 00:00:00\n";
    print(t5);

    // Oject t6 is created with invalid value of second (i.e. 61), and valid values
    // for other members.
    Clock t6(23, 59, 61);
    cout << "t6 is created with invalid value (61 for second). Expected to show: 00:00:00\n";
    print(t6);
    
    Clock t7(-10);
    cout << "t7 is created with invalid value (negative value). Expected to show: 00:00:00\n";
    print(t7);
    
    return 0;
}


void print(const Clock& t)
{
    cout << setw(2) << setfill('0') << t.get_hour() << ":"
    << setw(2) << t.get_minute() << ":" << setw(2) << t.get_second() << endl;
}
