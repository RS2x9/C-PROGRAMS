// P6-17
#include<stdio.h>
#include<math.h>
void prime(int n);

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    prime(n);
    return 0;

}

void prime (int n)
{
    int a,count=0;
    for(int i=2 ; i<= (int)sqrt(n) ; i++)
    {
        a=n%i;
        if(a==0) count++;
    }
    if(count!=0) printf("%d is not prime",n);
    else if(count==0) printf("%d is prime",n);
}