/* PRACTICE -7    
ARE THE FOLLOWING VALID?
a) int a=8^8
b) int x; int y=x;
c) int x,y=x;
d) char stars='**'
*/

#include<stdio.h>
int main()
{
    // a)
    int a=8^8 ; 
    printf("%d \t",a) ;  // ^ is xor operator . xor between same numbers returns 0

    // b)
    int x ; 
    int y=x; //this  is valid because x is used after declaring it

    // c)
    // int x,y=x this is invalid because x is used before declaring it

    // d)
    char stars='**'; 
    printf("%c",stars);
    /*
    this gives error because we can only store single character, storing more characters 
    takes more space than character datatype can store
    */

    return 0;
    }