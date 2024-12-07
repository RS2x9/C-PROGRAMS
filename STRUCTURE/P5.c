#include<stdio.h>

struct student 
{
    char name[10];
    int marks;
};
int main()
{ 
    struct student s;
    struct student *ptr;
    ptr=&s;
    s.marks =1000;
    printf("marks using pointer to structures:%d \n",(*ptr).marks);
    printf("marks using arrow operator:%d",ptr->marks);
}