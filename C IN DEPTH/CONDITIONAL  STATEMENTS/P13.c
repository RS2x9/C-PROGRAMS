// P5-12
#include<stdio.h>
#include<math.h>
int  main()
{
    int n,a,sums=0;
    printf("Enter binary number:");
    scanf("%d",&n);
    for(int i=0 ; n!=0 ; i++)
        {
            a=n%10;
            sums=sums+a*pow(2,i);
            n=n/10;
            if(n==0) 
            {
                printf("Decimal number:%d",sums);
                break;
            }
        }

    return 0;
}