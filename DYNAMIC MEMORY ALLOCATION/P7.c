// practice 69
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed:");
        return 1;
    }

    printf("Enter 5 intrgers values:");
    for(int i=0 ;i<5 ; i++) scanf("%d",&ptr[i]);
    printf("Numbers are:");
    for(int i=0 ;i<5 ; i++) printf("%d \t",ptr[i]);
}