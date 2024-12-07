/* PRACTICE-18
KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7*/
#include<stdio.h>
int main()
{
    int n ;
    do 
    {
        printf("Enter any integer: \n") ; 
        scanf("%d", & n) ;
        if (n%7==0) 
        { 
            printf("%d is multiple of 7 \n",n) ;
            break ;
        }
        else 
        {
            if (n%7!=0) 
            {
            printf("%d is not multiple of 7 \n",n) ;
            }
        }
    }
    while (1) ; 
    printf("Thank you") ; 
    return 0;
}