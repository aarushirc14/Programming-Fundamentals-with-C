//filename: clock.cpp
//ENSF 337 Lab 7 Ex.C
//Aarushi Roy Choudhury

#include "clock.h"
Clock::Clock(){
        hour=0;
        minute=0;
        second=0;
}
Clock::Clock(int s){
                hour=0;
        minute=0;
        second=0;
        sec_to_hms(s);
}
Clock::Clock(int h,int m,int s){
        hour=0;
        minute=0;
        second=0;
        if(h>=0&&m<=23&&m>=0&&m<=59&&s>=0&&s<=59){
                        set_hour(h);
        
                set_minute(m);
                set_second(s);

        }
}
void Clock::set_hour(int h){
        if(h>=0&&h<=23){
                hour=h;
        }       
}
void Clock::set_minute(int m){
        if(m>=0&&m<=59){
                minute=m;
        }
}
void Clock::set_second(int s){
        if(s>=0&&s<=59){
                second=s;
        }
}
int Clock::get_hour()const{
        return hour;
}
int Clock::get_minute()const{
        return minute;
}
int Clock::get_second()const{
        return second;
}
void Clock::increment(){
        if(second==59){
                second=0;
                if(minute==59)
                {
                        minute=0;
                        if(hour==23){
                                hour=0;
                        }else
                                hour++;
                }else
                        minute++;
        }else
                second++;
        
}
void Clock::decrement(){
        if(second==0){
                second=59;
                if(minute==0)
                {
                        minute=59;
                        if(hour==0){
                                hour=23;
                        }else
                                hour--;
                }else
                        minute--;
        }else
                second--;
}
void Clock::add_seconds(int s){
        for(int i=1;i<=s;i++){
                increment();
        }
}
int Clock::hms_to_sec(){
        return second+minute*60+hour*60*60;
}
void Clock::sec_to_hms(int sec){
        if(sec>0){   
        int m=0,s=0,h=0;
        h=sec/(3600);
        sec=sec-h*(3600);
        
        if(sec>=60){
                m=sec/60;
                s=sec%60;
        }else
                s=sec;
                if(h==24)
                        set_hour(0);
                else
        set_hour(h);
        set_minute(m);
        set_second(s);
        }
        
}