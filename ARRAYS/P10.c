#include<stdio.h>
void printnumbers(int *ptr,int n);
int main()
{
    int arr[]={1,2,3,4,5,6};
    printnumbers(arr,6);
    return 0;
}

void printnumbers(int *ptr,int n)
{
    for(int i=0 ; i<6 ; i++)
    {
        printf("%d \t",ptr[i]);
    }
}