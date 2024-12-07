// This is random string of words
// the above line should already be there in the file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test2.txt","r");
    char ch =fgetc(fptr);
    while (ch!=EOF)
    {
        printf("%c",ch);  // if only ths single line i written then the program will go on printing 'T' only
        // to print all the charcters :
        ch=fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}