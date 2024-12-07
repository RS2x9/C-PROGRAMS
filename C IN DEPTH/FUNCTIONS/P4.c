// p6-7
#include<stdio.h>

void compare(int age,int height)
{
    if(age<20)
    {
        printf("Age should be greater than 20");
        return ;
    }
    if(height<175)
    {
        printf("height should be greater than 175");
        return ;
    }
    printf("Selected");
}
int main()
{
    int age , height;
    printf("Enter age :");
    scanf("%d",& age );
    printf("Enter height in cm: ");
    scanf("%d",& height);
    compare(age,height);
    return 0;

}