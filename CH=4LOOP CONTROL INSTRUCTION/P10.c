//METHOD -2
#include<stdio.h>
int main()
{
    int sums = 0, n ; 
    printf("Enter any integer:") ; 
    scanf("%d",& n) ;
    for (int i=1 , j=n ; i<=n && j>=1; i=i+1 , j=j-1) 
    { 
        sums=sums+i  ; 
        printf("%d  ",j) ;
    }
    printf("\n");    
    printf("Sum is : %d",sums) ;

}