/*
* File Name: Lab1E.c
* Assignment: Lab 1 Exercise E
* Lab section: B01
* Completed by: Aarushi Roy Choudhury
* Submission Date: Sept 22, 2021
*/
#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, dis, x1, x2, real, img;
    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    dis = b*b - 4*a*c;

    
    if (dis > 0) {
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        printf("x = %f and x = %f", x1, x2);

    }

    
    else if (dis == 0) {
        x1 = -b / (2 * a);
        printf("x=  %f;", x1);
    }

   
    else {
        real = -b / (2 * a);
        img = sqrt(-dis) / (2 * a);
        printf("x = %f + %fi and x = %f - %fi", real, img, real, img);
    }

    return 0;
} 
