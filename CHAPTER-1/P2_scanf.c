/*  TAKING INPUT
scanf("<format specifier>", & <variable name>)

& stores the input to the memory location of specified variable name

*/

#include <stdio.h>
int main() 
{
    printf("Hello world \n ");
    printf("How are you \n");
    int age;
    printf("Enter age:");
    scanf("%d",& age); 
    printf("\n");
    printf("age is : %d",age); 
    return 0;
} 