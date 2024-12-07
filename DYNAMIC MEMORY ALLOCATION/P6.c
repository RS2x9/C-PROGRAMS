// practice 68
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("ENter numbers(5):");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    ptr=realloc(ptr,8*sizeof(int));
    printf("Enter 3 more numbers:");
    for(int i=5 ; i<8 ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0 ; i<8 ; i++)
    {
        printf("number:%d ",ptr[i]);
    }

    free(ptr);
    return 0;
}