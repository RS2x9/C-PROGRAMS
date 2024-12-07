// PRACTICE 38: SWAP TWO NUMBERS a & b
// method-1 : pass by value
#include<stdio.h>

void swap( int x , int y);

int main()
{
    int a=10 ,b=20;
    swap(a,b);
    printf("a= %d and b=%d",a,b);
    return 0;
}

void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("a= %d and b= %d \n",x,y);
}