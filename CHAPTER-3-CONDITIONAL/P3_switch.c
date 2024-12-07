/*CONDITIONAL OPERATOR 

switch : if we want to run something particular in some particular cases 
syntax:
switch(number) {
    case C1 : do something
    break;
    case 2: do somnething 
    break
    default : do something 
}

compiler sees which number matches case ,the number which gets matched ,
that switch will get on.
break statement is required to come out of the case,otherwise the switches from 
that case  will get on and all the statements from that case will get executed

*/

#include<stdio.h>
int main() 
{
    int day ;
    printf("Enter intregers(0-6):") ;
    scanf("%d",& day) ;
    switch (day) 
    {
        case 0 : 
        printf("Sunday") ; 
        break  ;
        case 1 : 
        printf("Monday") ;
        break ;
        case 2 :
        printf("tuesday") ;
        break ;
        case 3: 
        printf("Wednesaday") ; 
        break ;
        case 4 : 
        printf("Thrusday") ;
        break;
        case 5 : 
        printf("Friday") ; 
        break ;
        case 6 : 
        printf("Saturday") ; 
        break ;
        default : 
        printf("What the hell this input is....") ;
        break ;
    }
}