//  ENSF 337 - lab 5 -exercise B

// lab5exB.h

#ifndef lab5ExA_h
#define lab5ExA_h

typedef struct Date {
    int day, month, year;
}Date;

typedef struct Time {
    int second, minute, hour;
}Time;

typedef struct Timestamp{
    Date date;
    Time *time;
}Timestamp;


void change_date_time(Date *d, Time *t);

#endif /* lab5ExA_h */
