//P6-8
#include<stdio.h>

int fact(int n);
int main()
{
    int n;
    printf("Enter any integer:");
    scanf("%d",&n);
    if(n<0) printf("enter number>=0");
    else printf("Factorial of %d:%d",n,fact(n));
    return 0;
}

int fact(int n)
{
    int f=1;
    if(n==0) return 1;
    if(n==1) return 1;
    for (int i=n ; i>1 ; i--)
    {
        f=f*i;
    }
    return f;
}