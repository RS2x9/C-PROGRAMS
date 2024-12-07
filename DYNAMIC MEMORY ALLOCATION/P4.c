// practice 66
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter:"); scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    return 0;
}