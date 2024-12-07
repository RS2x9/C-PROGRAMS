// P6-2
#include<stdio.h>

void drawline();  // function declaration

int main()
{
    drawline();  // function call
    return 0;
}

void drawline()  // function defination
{
    for(int i=0 ; i<50 ; i++) printf("-");
}