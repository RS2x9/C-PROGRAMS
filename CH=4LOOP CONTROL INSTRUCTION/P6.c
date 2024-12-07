/* 
while loop
syntax: 
    while (condition) 
    {
        do something ; 
        increment statement
    }
    in case of while loop variables will be declared outside loop 
    increment statement will be written in curly braces
*/

#include<stdio.h>
int main()
{
    int i=1; 
    while (i<5)  
    {  
        printf("Hello world \n") ; 
        i++ ;
    }
    return 0;
}