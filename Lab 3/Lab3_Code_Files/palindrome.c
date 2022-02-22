/* File: palindrome.c
 *  Aarushi Roy Choudhury
 *  B01
 *  ENSF 337
 *  Exercise F - Lab 3
 *  Abstract: The program receives a string (one or more words) and indicates
 *  if the string is a palindrome or not. Plaindrome is a phrase that spells the
 *  same from both ends
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int is_palindrome (const char *str);
/* REQUIRES: str is pointer to a valid C string.
 * PROMISES: the return value is 1 if the string a is palindrome.*/

void strip_out(char *str);
/* REQUIRES: str points to a valid C string terminated with '\0'.
 * PROMISES: strips out any non-alphanumerical characters in str*/

int main(void)
{
    int p =0;
    char str[SIZE], temp[SIZE];
    
    fgets(str, SIZE, stdin);
    
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    strcpy(temp,str);
    
    while(strcmp(str, "done") !=0) 
    {
        
#if 1
        strip_out(str);
        
        p = is_palindrome(str);
#endif
        
        if(!p)
            printf("\n \"%s\" is not a palindrome.", temp);
        else
            printf("\n \"%s\" is a palindrome.", temp);
        
        fgets(str, SIZE, stdin);
        
        /* Remove end-of-line character if there is one in str.*/
        if(str[strlen(str) - 1] == '\n')
            str[strlen(str) - 1]= '\0';
        strcpy(temp, str);
    }
    
    return 0;
}
int is_palindrome(const char *str){

    int i = 0;
    int j = strlen(str) - 1;
    char x;
    char y;

    while(j > i){
        x = str[i];
        y = str[j];

        if(isupper(x)){
            x = tolower(x);
        }

        if(isupper(y)){
            y = tolower(y);
        }

        if(x != y){
            return 0;
        }

        ++i;
        --j;
    } 
    return 1;
}


void strip_out(char *str){
    
    char *p;
    char copy[100];
    int len = 0;
    for (p = str; *p != '\0'; p++) {

        if(isalnum(*p)){
           copy[len] = *p;
           ++len;
        }
    }
    copy[len] = '\0';
    strcpy(str, copy);

}







