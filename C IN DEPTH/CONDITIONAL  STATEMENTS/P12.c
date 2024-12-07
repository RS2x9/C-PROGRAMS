// P5-11
#include<stdio.h>
int main()
{
    int n,pr=1;
    printf("Enter number:");
    scanf("%d",&n);
    if(n==0 || n==1) printf("Fcatorial is 1");
    if(n>1)
    for(int i=n ; i>=1 ; i--)
    {
        pr=pr*i;
        if(i==1)
        {
            printf("Factorial is:%d",pr);
        }
    }

    else   // for negative numbers
    {
        for(int i=n ; i<=-1 ; i++)
        {
            pr=pr*i;
            if(i==-1) printf("Factorial is: %d",pr);
        }
    }

    return 0;
}