/* if else
if (condition) {
    do something
}
else {
    do something
}
*/
//example
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:") ; 
    scanf("%d", & age) ;

    if (age>=18) 
    {
        printf("adult ,"); printf("you can vote");
    }
    else if (age>13 && age<18) {
        printf("Teenager");
    }
    else {
        printf("can't vote");
    }
    return 0;
}