// using fputc()
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("test2.txt","w");
    fputc('a',ptr);
    fputc('p',ptr);
    fputc('s',ptr);
    fclose(ptr);
}