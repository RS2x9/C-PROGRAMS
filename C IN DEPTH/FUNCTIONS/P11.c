// P6-19-to find twin primes less than 500
// tis program is missing edge numbers like 7 and 11
#include<stdio.h>
#include<math.h>

#include<stdio.h>
#include<math.h>

int prime(int x);
int main()
{
    int var1,var2;
    for(int i=3 ; i<=500 ; i=i+2)
    {
        var1=0;var2=0;
        var1=prime(i);
        var2=prime(i+2);
        if(var1>0 && var2>0) printf("%d \t %d \n",var1,var2);
        //printf("\n");

    }
}

int prime(int x)
{
    int a,count=0;
    for(int j=2 ; j<= (int)sqrt(x) ; j++)
    {
        a=x%j;
        if(a==0) count++;
    }

    if(count==0) return x;    // because number is prime now
    else return 0;
}