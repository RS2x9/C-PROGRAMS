#include<stdio.h>                      // #include is preprocessor directive , <stdio.h> is header file
#include<string.h>
int main()                            // from here compilation of programs starts 
{
    printf("\n ");                    // we can use this sometimes to print empty line 
    printf("hello world \n");      //  ; this is like full stop for the individual lines of code,it should be used 
                                      // after every line of code

    // \n adds new line . if not used two consecutive lines will get printed in the same line

    // INTEGERS
    int age=20;                      // int is datatype of integers
    printf("age is age \n");

    // to print 20
    printf("age is %d  \n ",age) ;       // %d is a double value .it is format specifier for integers .%d is replaced by 20
    // \n is also used to remove % sign coming sometimes in the output 

    // FLOATING NUMBERS
    float x=12.12;          // float is datatype of floating numbers
    printf("x is: %f \n",x);   // %f is format specifier of foating numbers
    //  there are 6 digits of precision in floating numbers

    // SPECIAL CHARACTERS
    char star='*' ;          // char is datatype of charaters
    // single quote is used for  characters
    printf(" star is : %c",star);           // %c is format specifier of characters

    char name[]="Sagar";
    printf(" name is %s",name) ;    // %s is format specifier for strings 
    return 0;                     // this indicates successful execution of the program  
}