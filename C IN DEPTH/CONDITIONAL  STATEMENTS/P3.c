//P5-3
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if (n%2!=0) printf("%d is odd \n",n);
    else printf("%d is even",n);
    return 0;
}