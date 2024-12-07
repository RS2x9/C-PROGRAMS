/* PRACTICE-19
PRINT ALL NUMBERS FROM 1-10 EXCEPT FOR 6*/
#include<stdio.h>
int main()
{
    for (int i=1 ; i<=10 ; i++) 
    {
        if (i==6) continue;
        printf("%d \t",i) ;
    }
    return 0;
}