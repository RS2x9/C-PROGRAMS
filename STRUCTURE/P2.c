#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int marks;
};

int main()
{
    struct student s1;
    strcpy(s1.name,"Shraddha");
    s1.marks=50;
    printf("%s \n",s1.name);
    printf("%d",s1.marks);

    printf("\n");

    struct student s2;
    strcpy(s2.name,"sagar");
    s2.marks=100;
    printf("%s \n",s2.name);
    printf("%d \n ",s2.marks);

    struct student s3;
    strcpy(s3.name,"kumar");
    s3.marks=200;
    printf("%s \n",s3.name);
    printf("%d",s3.marks);

    /*
    s1, s2, and s3 are instances of the student structure.
    struct student: This defines a custom data type called student. This structure contains two members:
    char name[10];: An array of characters (a string) that can hold up to 9 characters plus the null terminator \0.
    int marks;: An integer that stores the marks of the student.

    struct student s1;: This creates a variable s1 of type struct student. Now, s1 has its own copy of the name array 
    and the marks integer.
    struct student s2;: Similarly, this creates another variable s2 of type struct student.
    struct student s3;: This creates a third variable s3 of type struct student.
    Each of these variables (s1, s2, and s3) represents a separate student, with their own name and marks.
    
    */
    
}