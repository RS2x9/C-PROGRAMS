#include<stdio.h>

struct student 
{
    char name[10];
    int marks[5] ;
};
int main()
{ 
    struct student s[1];
    struct student *ptr;
    ptr=&s[0];
    s[0].marks[0] =1000;
    printf("marks using pointer to structures:%d \n",(*ptr).marks[0]);
    printf("marks using arrow operator:%d",ptr->marks[0]);
}