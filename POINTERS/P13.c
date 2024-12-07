// PRACTICE 40:
#include<stdio.h>
int dowork(int a , int b, int *sum, int *prod , int *avg);

int main()
{
    int a=10 , b=20, sum , prod, avg;
    dowork(a , b , &sum , & prod, & avg);
    printf("sum=%d \n prod=%d \n avg=%d",sum , prod, avg);
    return 0;
}

int dowork(int a, int b, int *sum , int *prod , int *avg)
{
    *avg=(a+b)/2;
    *prod=a*b;
    *sum=a+b;
}