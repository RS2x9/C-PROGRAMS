
#include<stdio.h>
int main()
{
    int n,sums;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2 ; i<n ; i++)
    {
       fib[i] =fib[i-1]+fib[i-2];
    }

    printf("Elememts are:\n");
    for(int i=0; i<n ; i++)
    {
        printf("%d \n",fib[i]);
    }
}