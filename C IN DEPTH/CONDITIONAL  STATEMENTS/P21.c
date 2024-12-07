// P5-20
#include<stdio.h>
int main()
{
    int n,a=0,b=1,sums;
    printf("How many fibinacci numbers to genereate:");
    scanf("%d",&n);
    printf("%d \n",a);
    printf("%d\n",b);
    for(int i=1 ; i<=n-2 ;i++)
    {
        sums=a+b;
        printf("%d\n",sums);
        a=b;
        b=sums;
    }
}