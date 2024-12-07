// P5-4
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter thrree numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c) printf("%d is gretest",a);
        else printf("%d is greatest",c);
    }

    else //a<b
    {
        if(b>c) printf("%d is greatest",b);
        else printf("%d is greatest",c);
    }
}