//PRACTICE -17: KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS AN ODD NUMBER 
#include<stdio.h>
int main()
{
    int n ; 
    //printf("Enter any integer: ") ; 
    //scanf("%d" , & n) ;
    do {
        printf("Enter any integer: ") ; 
        scanf("%d" , & n) ;
        if (n%2!=0) 
        {
            break;
        }
    }
    while (1) ; //  while(1) works same as while True in python
    printf("Thank you") ;
    return 0;
}