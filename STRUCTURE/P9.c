#include<stdio.h>

typedef struct student{
    int marks;
    int cgpa;
}stu;

typedef struct computerengineeringstudent
{
    int marks2;
    int cgpa2;
}coe;

int main()
{
    stu s1;
    coe s2;
    s1.marks=100;
    printf("marks:%d",s1.marks);
}