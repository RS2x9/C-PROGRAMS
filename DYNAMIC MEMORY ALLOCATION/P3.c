#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("Printing using calloc function:");
    for(int i=0 ; i<5 ; i++) printf("%d ",ptr[i]);

    printf("\n");
    int *ptr2;
    ptr2=(int*)malloc(5*sizeof(int));
    printf("printing using malloc():");
    for(int i=0 ; i<5 ; i++) printf("%d ",ptr2[i]);
}