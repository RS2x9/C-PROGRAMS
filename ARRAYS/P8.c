// analyze this code carefully 
#include<stdio.h>
#define max 10
int main()
{
    int adhar[max]; 
    int *ptr=&adhar[0];   // ptr is pointing to memory address of first element of adhar
    for (int i=0 ; i<5 ; i++)
    {
        printf("%d adhar number:",i+1);
        scanf("%d",ptr+i);    /*value of memory address is incrementing so instead of writting *ptr=&adhar, i have 
                             written *ptr=&adhar[0]       */
    }

    for (int i=0 ; i<5 ; i++)
    {
        printf("%d adhar:%d \n",i+1,*(ptr+1));
    }

    return 0;
}