// practice 63
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);

    FILE *ptr;
    ptr=fopen("test2.txt","w");

    for (int i=1; i<n ; i++)
    {
        if(i%2!=0)
        {
            fprintf(ptr,"%d ",i);
        }
    }

    fclose(ptr);
    return 0;
}