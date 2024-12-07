//METHOD -3
#include<stdio.h>
int main()
{
    int sums = 0, n ; 
    printf("Enter any integer:") ; 
    scanf("%d",& n) ;
    for (int j=n ;  j>=1  ; j=j-1) 
    { 
        sums=sums+j  ; 
        printf("%d  ",j) ;
    }
    printf("\n");    
    printf("Sum is : %d",sums) ;

}