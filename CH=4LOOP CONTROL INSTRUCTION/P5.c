// INFINITE LOOP
/* 
DONT RUN THS COMMAND: the loop will go infinte and  our memory becomes full 
*/

#include<stdio.h>
int main() 
{
    for (int i=1 ; ; i+=1) 
    { 
        printf("%d",i) ; 
    }
    
    return 0;
}