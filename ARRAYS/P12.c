#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=90;
    marks [0][1]=89;
    marks[0][2]=88;

    marks[1][0]=80;
    marks[1][1]=79;
    marks[1][2]=78;

    printf("%d",marks[1][1]);
}