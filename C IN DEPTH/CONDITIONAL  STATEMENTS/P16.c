// P5-14
#include<stdio.h>
int main()
{
    int n,a,count=0;
    printf("enter any number:");
    scanf("%d",&n);
    do
    {
        count++;
        n=n/10;
    } while (n!=0);
    
    printf("Number of digits:%d",count);
    return 0;
}