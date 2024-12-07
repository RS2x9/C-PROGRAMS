//PRACTCE-16: PRINT THE TABLE OF NUMBER ENTERED BY USER

#include<stdio.h>
int main() 
{
    int n;
    printf("Enter any integer:")  ; 
    scanf("%d",& n);
    for (int i=1 ; i<=10 ; i=i+1) 
    { 
        printf("%d \t",n*i) ;  
    }
    return 0;
}