// PROGRAM TO PRINT AVERAGE OF THREE NUMBERS
#include<stdio.h>
int main() 
{
    int a,b,c ; 
    printf("1st number: ") ; scanf("%d",& a) ;
    printf("2nd number: ") ; scanf("%d",& b) ;
    printf("3rd number: ") ; scanf("%d",& c) ;
    printf("Average: %d \t",(a+b+c)/3) ; 

    /*see the down command results
    result will be zero .so we should use %d only if a,b,c are integers*/
    
    printf("Average of three numbers : %f",(a+b+c)/3) ;
    return 0;
}