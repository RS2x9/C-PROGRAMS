// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int fact(int n)
{
    int f;
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
        if (n==1)
        {
            return f;
        }
    }
}

int main() 
{
    double x;
    printf("Enter x:");
    scanf("%lf",&x);
    double sin_cos=tan(x);
    double sin=0,cos=1;
    for(int i=0;i<10;i++)    // A loop iterates 10 times (can be adjusted for higher accuracy)
    {
        sin+=pow(-1,i)*pow(x,2*i+1)/fact(2*i+1);
  
    }
    for(int i=1;i<10;i++)
    {
        cos+=pow(-1,i)*pow(x,2*i)/fact(2*i);
    }
    printf("tay %lf\n",sin/cos);
    printf("%lf",sin_cos);
}