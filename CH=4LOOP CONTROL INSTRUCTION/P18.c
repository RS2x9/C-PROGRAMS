//PRACTICE-20:PRINT ALL ODD NUMBERS FROM 5-50
// METHOD-1
#include<stdio.h>
void main()
{
    for (int i=5 ; i<=50 ; i++) 
    {
        if (i%2==0) continue;
        printf("%d \t", i) ;
    }
}
