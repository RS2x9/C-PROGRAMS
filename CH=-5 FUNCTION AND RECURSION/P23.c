// HOMEWORK SET
// Q1) write a function to find sum of digits of a number
// doing this problem with recursion
#include<stdio.h>

int sums(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",& n);
    printf("sum is :%d",sums(n));
    return 0;
}

int sums(int n)
{
    int a,sum=0;
    a=n%10;  // here awill come <10, always 
    n=n/10;
    sum=sum+a;
    if (n<10)
    {
        sum=sum+n;
        return sum;
    }

    else 
    {
        do
        {
            a=n%10;
            n=n/10;
            sum=sum+a;
            if (n<10)
            {
                sum=sum+n;
                return sum;
            }
        }
        while(n>10);
    }
}