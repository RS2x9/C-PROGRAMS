//PRACTICE-15: PRINT THE SUM OF n NATURAL NUMBERS AND PRINT THE NUMBERS IN REVERSE ORDER 
// METHOD-1

#include<stdio.h>
int main()
{
    int n,sums=0;
    printf("Enter any integer:"); 
    scanf("%d",& n) ;
    for (int i=1 ; i<=n ; i+=1) 
    { 
        sums=sums+i ;
    }
    printf("sum is %d \n",sums) ;

    for (int i=n ; i>=1 ; i=i-1) 
    { 
        printf("%d ",i) ; 
    }
    // here in both the loops datatype of i is declared because life time of i is in for loop 
    //only because it is declared inside for loop 
    
    return 0;
}