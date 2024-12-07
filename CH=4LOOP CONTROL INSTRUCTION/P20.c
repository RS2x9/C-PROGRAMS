//PRACTICE-21: FIND FACTORIAL OF NUMBER n 

#include<stdio.h>
int main() 
{
    int f=1,n ,temp ;  
    printf("Enter whole number:") ; 
    scanf("%d", & n) ; temp=n ;
    if (n==0 || n==1) 
    {
        printf("factorial of %d is 1 \n", n) ; 
    }
    else 
    { 
        do 
        { 
            f=f*n ;
            n=n-1 ; 
        }
        while (n>1) ;   
    printf("Factorial of %d is %d:",temp,f) ;
    }
    return 0;
}