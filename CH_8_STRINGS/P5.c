#include<stdio.h>
int main()
{
    char fullname[40];
    printf("Enter Full Name:");
    fgets(fullname,40,stdin);
    printf("full name is:");
    puts(fullname);  // this also creates a new line , so fulllname is printed in new line
    return 0;
}