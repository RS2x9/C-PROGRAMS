/* PRACTICE -12
PROGRAM TO FIND CHARACTER ENTERED BY USER IS UPPER OR LOWER CASE */
#include<stdio.h>
int main()
{
    char ch ;
    while(1)
    {
        printf("enter any character:") ; 
        scanf("%s",& ch) ;
        if (ch >= 'a' && ch<='z')  printf("lower case \n") ; 
        else if (ch>='A' && ch<='Z')  printf("upper case \n") ; 
        else  printf(" Not an alphabet \n") ; 
    }
    return 0;
}