/*
OPERTOR PRECEDENCE:
 !                  not operator
 * / % //           arithmetic operator
 + -                arithmetic operator
 < > >= <=          relational operator
 ==  !=             relational operator
 &&                logical operator
 ||                logical operator
 =                 assignment operator

*/

#include<stdio.h>
int main()
{
    int a=4+9*10; 
    printf("%d \n",a);

    // Asociativity rule : for same precedence operators calculate from left to right

    int b=4*3/6*2; 
    printf("%d \n",b);

    // carefully see the difference between the these two codes
    float c=4*3/6*2; 
    printf("%.1f \n",c);
    return 0;
}