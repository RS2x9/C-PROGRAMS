/* 
i++ and ++i are called increment operators
i-- and --i are called decrement operators      
*/ 

#include<stdio.h>
int main()
{
    int i=1 ;
    printf("%d \n",i++) ; // i++ means first use value  then increase its value by 1
    printf("%d \n",i) ; // now internally in the compiler the value of i has increased to 2
    printf("\n") ;
    int j=1 ;
    printf("%d \n",++j) ; // ++i means first increase then use it, so result is j=2
    printf("%d \n",j) ;
    /* this is reason why:
    ++i is caleed : pre increment operator
    i++ is caled: post increment operator       */  

    /*   --i is called : pre decrement operator
        i-- is caled: post decrement operator       */

    i=1 ;    printf("%d \n",i--) ;   printf("%d \n",i) ; 
    j=1  ; printf("%d \n",--j) ; printf("%d",j) ;
    return 0;
}