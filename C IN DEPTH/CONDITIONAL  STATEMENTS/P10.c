// P5-9
#include<stdio.h>
int main()
{
    printf("Finding sum of digits of a number\n");
    int n,sums=0,a;
    printf("Enter any number:");
    scanf("%d",&n);
    if (n==0) 
    {
        printf("Enter number >0");
    }

    while(1)
    {
        a=n%10;
        sums+=a;
        n=n/10;
        if(n==0)
        {
            printf("\n sum :%d",sums);
            break;
        }
    }
}