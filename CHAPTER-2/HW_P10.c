// this is important program
// program to check wheteher charcter is digit or not

#include<stdio.h>
#include<ctype.h>
int main() 
{
    char ch ; 
    printf("Enter any character:"); 
    scanf("%c",&ch) ;

    // Using isdigit() function to check for digits 

    if (isdigit(ch)) {
        printf("%c is a digit \n",ch) ;
    }
    else {
        printf("%c is not a digit",ch);
    }
    return 0;
}