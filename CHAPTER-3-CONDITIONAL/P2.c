/* TERNARY OPERATOR : works if else work in single line of code
syntax:
    condition ? do something if true : do something if false ; 
    terminator is used at last .
    ? checks whether condition is true or false
    ternary operator is used to print single line in output
      */

#include<stdio.h>
int main() 
{
    int age ; 
    printf("Enter age:") ; 
    scanf("%d",& age) ; 
    age >=18 ? printf("adult") : printf("not adult") ; 
    return 0;
}