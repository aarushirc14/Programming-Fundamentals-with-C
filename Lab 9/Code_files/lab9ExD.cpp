
//ENSF 337 Lab 9- Ex.D
//Filename- lab9ExD.cpp
//completed by: Aarushi Roy Choudhury

#include <iostream>
#include<cstring>
using namespace std;

void insertion_sort(int *int_array, int n);
/* REQUIRES
* n > 0.
* Array elements int_array[0] ... int_array[n - 1] exist.
* PROMISES
* Element values are rearranged in non-decreasing order.
*/

void insertion_sort(const char** str_array, int n);

/* REQUIRES
* n > 0.
* Array elements str_array[0] ... str_array[n - 1] exist.
* PROMISES
* pointers in str_array are rearranged so that strings:
* str_array[0] points to a string with the smallest string (lexicographicall) ,
* str_array[1] points to the second smallest string, ..., str_array[n-2]
* points to the second largest, and str_array[n-1] points to the largest string
*/
char convertLower(char c)
{
        if (c >= 'a' && c <= 'z') return c;
        return 'a' + c - 'A';
}
int comparechar(const char* A, const char* B)
{
        int n = strlen(A);
        int m = strlen(B);
        for (int i = 0; i < min(n, m); i++)
        {
                char a = convertLower(A[i]), b = convertLower(B[i]);
                if (a < b) return -1;
                if (b < a) return 1;
        }
        if (n == m) return 0;
        if (n < m) return -1;
        return 1;
        
}

int main(void)
{
        const char* s[] = { "AB", "XY", "EZ"};
        const char** z = s;
        z += 1;

        
        cout << "The value of **z is: " << **z << endl;
        cout << "The value of *z is: " << *z << endl;
        cout << "The value of **(z-1) is: " << **(z-1)<< endl;
        cout << "The value of *(z-1) is: " << *(z-1)<< endl;
        cout << "The value of z[1][1] is: " << z[1][1]<< endl;
        cout << "The value of *(*(z+1)+1) is: " << *(*(z+1)+1)<< endl;

        // point 1

        int a[] = { 413, 282, 660, 171, 308, 537 };
        
        int i;
        int n_elements = sizeof(a) / sizeof(int);
        
        cout << "Here is your array of integers before sorting: \n";
        for(i = 0; i < n_elements; i++)
        cout << a[i] << endl;
        cout << endl;
        
        insertion_sort(a, n_elements);
        
        cout << "Here is your array of ints after sorting: \n" ;
        for(i = 0; i < n_elements; i++)
        cout << a[i] << endl;
        #if 1
        const char* strings[] = { "Red", "Blue", "pink","apple", "almond","white",
        "nut", "Law", "cup"};
        
        n_elements = sizeof(strings) / sizeof(char*);
        
        cout << "\nHere is your array of strings before sorting: \n";
        for(i = 0; i < n_elements; i++)
        cout << strings[i] << endl;
        cout << endl;

        insertion_sort(strings, 9);

        
        cout << "Here is your array of strings after sorting: \n" ;
        for(i = 0; i < n_elements; i++)
        cout << strings[i] << endl;
        cout << endl;
        
        #endif
        
        return 0;
}

void insertion_sort(const char** str_array, int n)
{
int i;
int j;
const char* value_to_insert;
        
for (i = 1; i < n; i++) 
{
    value_to_insert = str_array[i];
                
j = i;
while ( j > 0 && comparechar(str_array[j - 1], value_to_insert) > 0 ) 
    {
    str_array[j] = str_array[j - 1];
    j--;
    }
                
str_array[j] = value_to_insert;
    
}
        
}


void insertion_sort(int *a, int n)
{
        int i;
        int j;
        int value_to_insert;
        
        for (i = 1; i < n; i++) {
                value_to_insert = a[i];
                
                /* Shift values greater than value_to_insert. */
                j = i;
                while ( j > 0 && a[j - 1] > value_to_insert ) {
                        a[j] = a[j - 1];
                        j--;
                }
                
                a[j] = value_to_insert;
        }
}