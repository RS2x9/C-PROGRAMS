// HOMEWORK SET 
//  1
#include<stdio.h>
int compare(int *x , int *y)
{
    if (*x>*y) printf("%d > %d",*x,*y);
    else printf("%d < %d",*x,*y);
}

int main()
{
    int a , b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    compare(&a, &b);
    return 0;
}

// WHILE WRITTING THE FUNCTIONS THIS WAY ALWAYS DECLARE THE GLOBAL FUNCTION ABOVE int main()
