#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");  // we are reading the file
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character:%c \n",ch); 

    fscanf(fptr,"%c",&ch);
    printf("character:%c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character:%c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character:%c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character:%c \n",ch);

    printf("\n");
    // now to read integers

    int integer;
    fscanf(fptr,"%d",&integer);
    printf("number:%d \n",integer);

    fscanf(fptr,"%d",&integer);
    printf("number:%d",integer);

    fclose(fptr);
}