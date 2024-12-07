// P5-18
#include<stdio.h>
int main()
{
    int a,temp,n;
    printf("Enter first number,second number:");
    scanf("%d %d",&a,&n);
    temp=a;
    for(int i=2; i<=n ;i++)
    {
        a=a+temp;
    }

    printf("%d * %d= %d",temp,n,a);
    return 0;
}