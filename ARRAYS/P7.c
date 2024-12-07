#include<stdio.h>
#define max 20
int main()
{
    int hello[max];
    for (int i=0 ; i<=10 ; i++)
    {
        hello[i]=i;
    }

    for (int i=0 ; i<=10 ; i++)
    {
        printf("%d ",*(hello+i));
    }

    return 0;
}