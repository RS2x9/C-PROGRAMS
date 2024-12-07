// PRACTICE:42
#include<stdio.h>
//#define max 100

void checkodd(int arr[],int n);
int main()
{
    //solving with 1d array
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int num[n];
    printf("Enter numbers:");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&num[i]);
    }

    checkodd(num,n);
    return 0;
}

void checkodd(int arr[],int n)
{
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
        if (arr[i]%2!=0) count++;
    }

    printf("Total odd numbers:%d",count);
}