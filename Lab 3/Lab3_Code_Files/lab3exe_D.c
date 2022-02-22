/*  Aarushi Roy Choudhury
 *  B01
 *  lab3exe_D.c
 *  ENSF 337, lab3 Exercise D
 *
 *  In this program the implementatiom of function pascal_trangle is missing.
 *  Studtent must complete this function.
 */

#include <stdio.h>
#include <stdlib.h>

void pascal_triangle(int n);
/* REQUIRES: n > 0 and n <= 20
 PROMISES: displays a pascal_triangle. the first 5 line of the function's output
 should have the following format:
 row 0:  1
 row 1:  1   1
 row 2:  1   2   1
 row 3:  1   3   3   1
 row 4:  1   4   6   4   1
 */

int main() {
    int nrow;
    // These are ALL of the variables you need!
    printf("Enter the number of rows (Max 20): ");
    scanf("%d", &nrow);
    if(nrow <= 0 || nrow > 20) {
        printf("Error: the maximum number of rows can be 20.\n");
        exit(1);
    }
    
    pascal_triangle(nrow);
    return 0;
}

void pascal_triangle(int n) {
   int arr[n][n];
   int i=0,j=0;
  
   for(i=0;i<n;i++){    
       for(j=0;j<=i;j++){
            if(j==0 || j==i)
                arr[i][j]=1;
           else
               arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
       }
   }
  
   for(i=0;i<n;i++){     
       printf("row %d:",i );
       for(j=0;j<=i;j++){
           printf("   %d",arr[i][j] );
       }
       printf("\n");
   }
}









