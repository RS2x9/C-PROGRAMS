// P6-18
// my logic
#include<stdio.h>
#include<math.h>

void prime();
int main()
{
    prime();
    return 0;
}

void prime()
{
    int count=0,a;
    printf("Prime numbers:");
    for(int i=2; i<=500 ; i++)
    {
        for(int j=2 ; j<=(int)sqrt(i); j++)
        {
            a=i%j;
            if(a==0) count++;  // this means i is divivible by j so i will not be prime
        }
        if(count==0) printf("%d\t",i);
        if(count>0) count=0;  // the value of count is again set to zero
    }
}