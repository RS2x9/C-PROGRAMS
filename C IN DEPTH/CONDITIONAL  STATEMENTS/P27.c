// P5-30
// dont run this program as this is runniing infinetly
#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    if (n%2==0)
    {
        goto even;
    }

    else goto odd;

    even:
    printf("This number is even");
    goto end;

    end:
    printf("\n thanks");
    
    odd:
    printf("This number is odd");
    goto end;

    return 0;
}