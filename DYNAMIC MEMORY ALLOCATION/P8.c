// practice 70
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("Enter 5 odd:");
    for(int i=0 ; i<5 ;i++) scanf("%d",&ptr[i]);
    ptr=realloc(ptr,11*sizeof(int));
    printf("Enter 6 evens:");
    for(int i=5 ; i<11 ;i++) scanf("%d",&ptr[i]);

    printf("Numbers are:");
    for(int i=0 ; i<11 ;i++) printf("%d \t",ptr[i]);

    free(ptr);
    return 0;
}