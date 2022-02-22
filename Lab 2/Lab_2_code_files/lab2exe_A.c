/*
 *  lab2exe_A.c
 *  Created by Mahmood Moussavi, Sept 2017 for ENCM 339
 *  Completed by: Aarushi Roy Choudhury
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
//REQUIRES: A positive, real number for the value of the velocity
//PROMISES: Displays a table of angle, time and distance of the projectile
double degree_to_radian(double d);
//REQUIRES: A real number in degrees for the value of the angle 
//PROMISES: Converts the angle from degrees to radians
double Projectile_travel_time(double a, double v);
//REQUIRES: A positive, real number for the value of the velocity and real number for the angle
//PROMISES: Calculates the time and returns the value 
double Projectile_travel_distance(double a, double v);
//REQUIRES: A positive, real number for the value of the velocity and real number for the angle
//PROMISES: Calculates the distance and returns the value 


int main(void)
{
    int n;
    double velocity;
    
    printf ("Please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf("%lf" ,&velocity);
    
    if(n != 1)
    {
        printf("Invlid input. Bye...");
        exit(1);
    }
    
    while (velocity < 0 )
    {
        printf ("please enter a positive number for velocity: ");
        n = scanf("%lf", &velocity);
        if(n != 1)
        {
            printf("Invlid input. Bye...");
            exit(1);
        }
    }
    
    create_table(velocity);
    return 0;
}

/* UNCOMMENT THE CALL TO THE create_table IN THE main FUNCTION, AND COMPLETE THE PROGRAM */



double degree_to_radian(double a)
{
   
    return a*(PI/180);
}
double Projectile_travel_time(double a, double v)
{
    double rad = degree_to_radian(a);
    double t= (2*v*sin(rad))/G;
    return t;
}

double Projectile_travel_distance(double a, double v)
{
    double rad = degree_to_radian(a);
    double d= ((v*v)/G)*sin(2*rad);
    return d;
}

void create_table(double v)
{
    int i =0;
    printf(    "Angle               t              d\n");
    printf(    "(deg)             (sec)           (m)\n");
    while (i<=90)
    {
        double ang = (double) i;
        double t= Projectile_travel_time(ang,v);
        double d = Projectile_travel_distance(ang,v);
        printf("%8.6lf       %7.6lf          %8.6lf\n",ang, t, d );
        i+=5;

    }
}