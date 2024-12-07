#include<stdio.h>

void reverse();
int main()
{
    // first see the output of below 2 ines 
    int n=5;
    for (int i=0 ; i<5/2 ; i++) printf("%d ",i);
    printf("\n");

    reverse();
    return 0;
}

void reverse()
{
    int temp,n;
    printf("Enter number of elements:"); scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("original  array:");
    for(int i=0 ; i<n ;i++) printf("%d ",arr[i]);

    printf("\n");
    
    for(int i=0 ; i<n/2 ; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    printf("reverse array:");
    for(int i=0 ; i<n ;i++) printf("%d ",arr[i]);
}