#include<stdio.h>

struct student {
    int marks[4];
};

int main()
{
    struct student s[2]; // Array size increased to 2 to access s[1]
    struct student *ptr=&s[0];
    
    s[0].marks[0] = 100;
    s[1].marks[0] = 300;
    
    printf("marks in s[0]: %d \n", s[0].marks[0]);
    printf("marks in s[1]: %d \n", s[1].marks[0]);
    printf("marks using arrow operator: %d\n", ptr->marks[0]);
    printf("marks using arrow operator: %d\n", (ptr+1)->marks[0]);
    
    return 0;
}
