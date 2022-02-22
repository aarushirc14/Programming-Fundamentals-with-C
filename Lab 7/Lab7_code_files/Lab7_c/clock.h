
//filename: clock.h
//ENSF 337 Lab 7 Ex.C
//Aarushi Roy Choudhury
class Clock{
        private:
                int hour,minute,second;
                int hms_to_sec();
                void sec_to_hms(int n); 
        public:
                Clock();
                Clock(int s);
                Clock(int h,int m,int s);
                void set_hour(int h);
                void set_minute(int m);
                void set_second(int s);
                int get_hour()const;
                int get_minute()const;
                int get_second()const;
                void increment();
                void decrement();
                void add_seconds(int s);
                        
                
};