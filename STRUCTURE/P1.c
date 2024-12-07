#include<stdio.h>
#include<string.h>

struct student 
{
    char name[50];
    int marks;
};

int main()
{
    struct student s;
    s.marks=100;
    // s.name="raj";      we cant do this way
    strcpy(s.name,"raj");

    printf("%s \n",s.name);
    printf("%d",s.marks);
}