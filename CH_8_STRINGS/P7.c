// PRACTICE 49
#include<stdio.h>
int main()
{
    char name[10];
    int count=0;
    printf("Enter name :");
    fgets(name,10,stdin);
    for (int i=1 ; name[i]!='\0' ; i++)
    {
        count=count+1;
    }
    printf("Length is :%d",count);
    return 0;
}