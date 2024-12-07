//P6-14

#include<stdio.h>

sums(int n);  // if datatype is not provided ,int is assumed as default datatype
int main()
{
    int n;
    printf("Enter:") ; scanf("%d",&n);
    printf("Sum  of digits:%d ",sums(n));
    return 0;
}

sums(int n)
{
    int sum=0,a;
    for(int i=0 ; n!=0 ; i++)
    {
        a=n%10;
        sum+=a;
        n=n/10;
    }
    return sum;
}