/*
* File Name: Lab1B.c
* Assignment: Lab 1 Exercise B
* Lab section: B01
* Completed by:  Aarushi Roy Choudhury 
* Submission Date: Sept 22, 2021
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
 double num1 = -34.5;
 double num2 = 98.7;
 double sum=0; // sum of num1 and num2, intialize
 double sumSquared=0; // the square of num2 plus num2 intialize
 
 // 1) Add the two numbers and store the result in the variable 'sum'
 sum = num1 + num2;
 // 2) Compute the square of the sum and store the result in the variable 'sumSquared'
 // Use the variable 'sum' (computed above) for this computation
 sumSquared= pow(sum,2);

 printf( "The sum squared is: %f \n", sumSquared);
 // 3) Now double the sum squared value and store the result in 'sumSquared'
 sumSquared = sumSquared * 2;
 printf( "The sum squared is now: %f \n", sumSquared);

 return 0;
}