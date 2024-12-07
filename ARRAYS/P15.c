#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    printf("%d \n",*arr);
    printf("%d",*(arr+2));
    // printf("%d",*(arr+5));  this will give error
}