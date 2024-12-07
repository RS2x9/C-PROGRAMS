// P5-10
#include<stdio.h>
int main()
{
    int product=1,a,n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n==0) printf("Enter number>0");
    while(1)
    {
        a=n%10;
        product=product*a;
        n=n/10;
        if(n==0)
        {
            printf("\n Product is :%d",product);
            break;
        }
    }

    return 0;
}