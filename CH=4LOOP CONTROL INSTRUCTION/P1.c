/*       LOOP CONTROL INSTRUCTIONS : for , while , do while       */

/* for loop syntax:
for(initialisation   ; condition   ;   updation)    { do something  }     */

//      examples

#include<stdio.h>
int main()
{
    for (int i=1 ; i<5 ; i=i+1)   {  printf("Hello World \n") ;  }
    // i is called iterator or counter variable because with the help of i we performing  for a number of times
    printf("\n") ;
    for (int i=1 ; i>-5 ; i=i-1)     { printf("%d \n",i )  ;}
    printf("\n ") ; 
    for (int i=1 ; i>-5 ; i=i-1)     { printf("Hello World \n" )  ;}
    return 0;
}
