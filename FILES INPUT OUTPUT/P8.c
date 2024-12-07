// practice 62
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("test2.txt","w"); 

    char name[10];
    int marks;
    int roll;
    printf("Enter name:"); scanf("%s",name);
    printf("enter roll:"); scanf("%d",&roll);
    printf("Enter marks:"); scanf("%d",&marks);

    fprintf(ptr,"Name:%s \n",name);
    fprintf(ptr,"Roll:%d \n",roll);
    fprintf(ptr,"Marks:%d \n",marks);

    fclose(ptr);
    return 0;
}