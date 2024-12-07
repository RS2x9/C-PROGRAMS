// P5-29
#include<stdio.h>
int main()
{
    int sums=0,i=1,n;
    float avg;
    while(i<=10)
    {
        printf("Enter number:"); scanf("%d",&n);
        if(n<=0) continue;
        sums=sums+i;
        i++;
    }

    printf("sum:%d \n",sums);
    avg=(float)sums/10;  // finding average 
    printf("average:%0.2f",avg);
    return 0;
}