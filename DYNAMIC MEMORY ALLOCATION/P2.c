// practice 65
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float));

    if (ptr==NULL)
    {
        printf("memory not allocated");
        return 1;
    }

    ptr[0]=98.4;
    ptr[1]=65; ptr[2]=54.9;
    ptr[3]=67.3; ptr[4]=59.0;

    for(int i=0 ; i<5 ; i++) printf("%0.2f \t",ptr[i]);
    return 0;
}