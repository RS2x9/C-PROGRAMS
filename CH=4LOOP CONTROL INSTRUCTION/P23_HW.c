// pattern printing 
#include<stdio.h>
void main()
{
    for (int i=1 ; i<=5 ; i++) { printf("* ") ; }
    // we want the above 5 times vertically
    printf("\n") ; printf("\n") ; 
    for (int i=1 ; i<=5 ; i++) {
        for (int j=1 ; j<=5 ; j++) {  printf("* ") ;  }
        printf("\n") ; 
    }
}