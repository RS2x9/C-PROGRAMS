// parctice 61
// for integers use:fscanf()
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("test2.txt","r");
    int n;
    /*cant EOF be used with integers ?
    EOF in C is a macro that represents an "end-of-file" condition and typically has a value of -1. 
    It's specifically used to signal that no more data can be read from a file or stream. 
    While EOF is an integer constant, it isn't directly comparable to the integers you might be reading 
    from a file using fscanf.

    EOF and Integers:

    EOF is not a valid number that could be stored in the file as an integer. It’s a special value returned by 
    functions like fgetc, fscanf, etc., to indicate the end of the file.
    If you read a -1 (which is the value of EOF) from the file and compare it with EOF, it would incorrectly 
    signal the end of the file when it's just a regular integer value.
    Checking for EOF:
    When reading integers from a file, you should check the return value of fscanf, not the integer value itself. 
    fscanf returns EOF when it encounters the end of the file.
    */
    fscanf(ptr,"%d",&n);
    printf("%d \n",n);

    fscanf(ptr,"%d",&n);
    printf("%d \n",n);

    fscanf(ptr,"%d",&n);
    printf("%d \n",n);

    fscanf(ptr,"%d",&n);
    printf("%d \n",n);

    fscanf(ptr,"%d",&n);
    printf("%d \n",n);

    fclose(ptr);
    return 0;
}