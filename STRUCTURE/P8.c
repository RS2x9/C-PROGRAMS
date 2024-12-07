#include<stdio.h>

struct student {
    int marks;
    int cgpa;
};

void printinfo(struct student s1);
int main()
{
    struct student s={100,10};
    s.marks=1000;
    printinfo(s);
    //s.marks=1000;
    printf("marks:%d \n",s.marks);

}

void printinfo(struct student s1){
    printf("marks:%d \n",s1.marks);
    printf("cgpa:%d \n",s1.cgpa);
}