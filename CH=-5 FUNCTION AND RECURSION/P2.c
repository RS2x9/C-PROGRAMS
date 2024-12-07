// we can print hello many times by calling the function many times 
#include<stdio.h>
void printHello();
int main() {
    printHello() ; printHello() ; printHello() ;
    return 0;
}
void printHello(){
    printf("Hello \n");
}