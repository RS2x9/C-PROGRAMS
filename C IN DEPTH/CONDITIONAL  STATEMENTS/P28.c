//P5-33
#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Today we are doing mathematical calculations: \n");
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);

    // Consuming the newline character left in the input buffer
    getchar();

    printf("choose: + - * / modulo:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("sum:%d",a+b);
        break;

        case '-':
        printf("difference:%d",a-b);
        break;

        case '*':
        printf("Mul:%d",a*b);
        break;

        case '/':
        printf("Div:%0.2f",(float)a/b);
        break;

        case '%':
        printf("remainder:%d",a%b);
        break;

        case 'modulo':
        printf("remainder:%d",a%b);
        break;

        default:
        printf("\n Enter valid operator:");
        // continue;  this is invvalid statement in switch 
    }

    return 0;
}