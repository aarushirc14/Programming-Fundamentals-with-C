/*
* File Name: Lab1D.c
* Assignment: Lab 1 Exercise D
* Lab section: B01
* Completed by: Aarushi Roy Choudhury
* Submission Date: Sept 22, 2021
*/
#include <stdio.h> 
#include<math.h>
int main(){ 
    float x; 
    int Numer_of_terms; 
    int i; 
    float sinx = 0; 
    float term; 
    printf("To evaluate sin(x), enter the angle, x in radians and number of terms:"); 
    scanf("%f %d", &x, &Numer_of_terms); 
    printf("The sine of %f radians calculated using the sine function is %f\n",x,sin(x));
    i = 1; 
    term = x; 
    while (i < Numer_of_terms) { 
        sinx +=  term; 
        i = i + 2;  \
        term *= -(x * x) / ( (i-1) * i); 
    } 
    
    printf("The sine of %f radians calculated using the Taylor Series is %f\n",x,sinx); 
} 

