//P5-21
#include<stdio.h>
int main()
{
    int n,a,sums=0;
    printf("Number?:");
    scanf("%d",&n);
    for(int i=0 ; n!=0; i++)
    {
        a=n%10;
        sums=sums+a;
        n=n/10;
    }

    printf("sum:%d",sums);
    return 0;
}