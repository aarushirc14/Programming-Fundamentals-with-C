#include <stdio.h>
#include "lab5exB.h"

const Date cd = {1, 1, 1970};

int main() {
    Timestamp *tsp;
    Time t = {0, 0, 24};
    Timestamp ts = {cd, &t};
    tsp = & ts;
    change_date_time(&tsp->date, &t);
    
    printf("Program Terminted.\n");
    return 0;
}

void change_date_time(Date *arg1, Time *arg2){
    
    arg1 -> day = 29;
    arg1 -> month = 10;
    arg1 -> year = 2016;
    (*arg2).second = 5;
    (*arg2).minute = 59;
    (*arg2).hour = 23;
    
    // Point one
}