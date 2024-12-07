// Q4) make your own power function
// without recursion
#include<stdio.h>
int main()
{
    int base,exponent;
    printf("Enter base and exponet:");
    scanf("%d%d",&base, &exponent);
    int temp=base;
    for (int i=1; i<exponent ; i++)
    {
        base=base*temp;
    }
    printf("%d^%d : %d", temp,exponent,base);
    return 0;
}