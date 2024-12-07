// P5-15
#include<stdio.h>
int main()
{
    int n,sums=0,a;
    printf("Enter number:");
    scanf("%d",&n);
    do
    {
        a=n%10;
        sums=sums+a;
        n=n/10;
    } while (n!=0);

    printf("sum :%d",sums);
    return 0;
    
}