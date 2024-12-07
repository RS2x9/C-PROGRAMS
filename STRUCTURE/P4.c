#include<stdio.h>

struct student
{
    char name[10];
    int marks;
};

int main()
{
    struct student s={"Sagar",150};
    printf("marks:%d \n",s.marks);

    struct student *ptr=&s;
    printf("marks:%d",(*ptr).marks);
}