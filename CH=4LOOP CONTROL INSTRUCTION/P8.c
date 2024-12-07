/* 
do while loop : this loop runs for at least single time .
in while loop if the condition is false then that loop do not runs
syntax:
   do { do something }
   while (condition) ;    // here in while ,statement terminator is used because no statement will be written there to run */

#include<stdio.h>
int main()
{
    int i=1 ;
    do 
    { 
        printf("%d \t",i) ; 
        i+=1 ; 
    }
    while (i<=5) ;
    return 0;
}