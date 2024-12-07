// P5-38(Problem 3)
// russian peasant method
#include<stdio.h>
int main()
{
    int a,b,sums=0,temp1,temp2;
    printf("enter two numbers for multiplication:");
    scanf("%d %d",&a,&b);
    temp1=a;
    temp2=b;
    for(int i=0 ; a>=1 ; i++)
    {
        if(a%2!=0) sums=sums+b;  // a has to be  odd 
        a=a/2;
        b=b*2;
    }

    printf("%d*%d=%d",temp1,temp2,sums);
    return 0;
}