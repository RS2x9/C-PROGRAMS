// practice 64
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("test2.txt","r");
    int a;
    fscanf(ptr,"%d",&a);
    int b;
    fscanf(ptr,"%d",&b);
    fclose(ptr);

    ptr=fopen("test2.txt","w");
    fprintf(ptr,"%d",a+b);
    fclose(ptr);

    return 0;

}