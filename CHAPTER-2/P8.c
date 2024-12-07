/*  PRACTICE-8
a) if its sunday and is snowing -->True
b)if its monday or its raining  --> True
c) if a two digit number is greater than 9 and less than 100    --> True
*/
#include<stdio.h>
int main()
 {
    // a)
    int issunday=1 , issnowing=1 ; 
    printf("%d \t" ,issunday && issnowing) ;    // && is and operator in C language

    // b)
    int ismonday=1 , israining=1 ;
    printf("%d \t",ismonday || israining) ;    //  || is or  operator in C language

    int a ; 
    printf("Enter two digit number:") ; 
    scanf("%d", & a) ; 
    printf("%d",a>9 && a<100) ; 
    
    return 0;
}