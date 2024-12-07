// PRACTICE: PROGRAM TO PRINT N TERMS OF FIBONNACI SEQUENCE
// without recursion
#include<stdio.h>
int main()
{
    int n,sum=0,a=0,b=1;
    printf("Number:");
    scanf("%d",&n);
    if (n<=0) printf("Enter number>0");
    else if (n==1) printf("0");
    else if (n==2) printf("0\n 1");
    else if (n>2)
    {
        printf("0\n") ; printf("1\n");
        for (int i=0; i<n-2 ; i++)
        {
            sum=a+b;
            printf("%d \n",sum);
            a=b;
            b=sum;
        }
    }
    return 0;
}