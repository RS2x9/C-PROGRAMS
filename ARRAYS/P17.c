// mine method 
#include<stdio.h>

void reverse();
int main()
{
    reverse();
    return 0;
}

void reverse()
{
    int arr1[]={1,2,3,4,5};
    int arr2[5];
    for (int i=0,j=4;i<5,j>=0 ; i++,j--)
    {
        arr2[j]=arr1[i];
    }

    printf("original array:");
    for (int i=0 ; i<5 ; i++) printf("%d ",arr1[i]);
    printf("\n");
    printf("Reverse array:");
    for (int i=0 ; i<5 ; i++) printf("%d ",arr2[i]);
}