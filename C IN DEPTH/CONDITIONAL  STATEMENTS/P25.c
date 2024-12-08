//P5-27
// prime number
#include<stdio.h>
#include<math.h>
int main()
{
    int num,a;
    printf("Enter any number:");
    scanf("%d",&num);
    for(int i=2 ; i<=(int)sqrt(num) ; i++)
    {
        a=num%i;
        if(a==0)
        {
            printf("not prime");
            break;
        }
    }

    if(a!=0) printf("prime number");
    return 0;
}
