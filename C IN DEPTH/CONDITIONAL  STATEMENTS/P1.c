// P5-1
#include<stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n<0) printf("Number entered is negative: \n");
    else if(n==0) printf("0 is entered:\n");
    else printf("Nmuber entered is positive:\n");
    return 0;
}