/* PRACTICE -12
PROGRAM TO FIND CHARACTER ENTERED BY USER IS UPPER OR LOWER CASE
METHOD-2  */
#include<stdio.h>
int main()
{
    char ch ;
    printf("enter any character:") ; scanf("%s",& ch) ;
    
    if (ch >= 97 && ch<=122)  printf("lower case") ; 
    else if (ch>=65 && ch<=90)  printf("upper case") ; 
    else  printf("special charcater") ; 
    return 0;
}