// PRACTICE: PROGRAM TO PRINT N TERMS OF FIBONNACI SEQUENCE
// with recursion

#include<stdio.h>
int fib(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",& n);
    if (n<=0) printf("Enter number>0");
    else 
    {
        for (int i=1 ; i<=n ; i++)
        {
            printf("%d \n",fib(i));
     }
    }
    return 0;
}

int fib(int n)
{
    if (n==1) return 0;
    else if(n==2) return 1;
    else if (n>2)
    {
        int fabn=fib(n-1)+fib(n-2); 
        return fabn;
    }
}