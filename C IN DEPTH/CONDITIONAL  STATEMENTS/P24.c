//P5-25
#include<stdio.h>
int main()
{
    int n,sums=0,a;
    printf("Number?:");
    scanf("%d",&n);
    printf("%d -->>",n);
    for(int i=0 ; n>9 ; i++)
    {
        for(int j=0 ; n!=0 ; j++)
        {
            a=n%10;
            sums=sums+a;
            n=n/10;
        }

        n=sums;
        sums=0;
        printf(" %d -->>",n);
    }
    return 0;
}