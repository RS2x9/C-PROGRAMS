// P6-3.c
#include<stdio.h>

int sums(int a, int b);  // function declaration
int main()
{
    int a,b;
    printf("Enter two numbers to get the sum:");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d",a,b,sums(a,b));  // here a,b are called actual arguments 
    return 0;
}

int sums(int x,int y)  // here a, b are called as formal arguments 
{
    return x+y;
}