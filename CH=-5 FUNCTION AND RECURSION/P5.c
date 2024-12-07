// Practice 27: write two functions : one prints "hello" & other print "good bye"

#include<stdio.h>
// FUNCTION PROTOTYPE 
void pp();
void gb();

int main(){
    pp(); gb();   // CALLING FUNCTION
    return 0;
}

// FUNCTION DECLARATION
void pp(){
    printf("Hello \n");
}
void gb(){
    printf("Good Bye");
}