// HOMEWORK SET
// Q1) write a function to find sum of digits of a number
// doing this problem without recursion
#include<stdio.h>
int main()
{
    int n, a,sum=0;
    printf("Enter number:");
    scanf("%d",& n);
    a=n%10; // a wiLl come <10,always 
    n=n/10;
    sum=sum+a;
    if (n<10)
    {
        sum=sum+n;
        printf("sum of digits is : %d",sum);
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
                printf("Sum is :%d",sum);
            }
        }
        while(n>10);
        }
    return 0;
}