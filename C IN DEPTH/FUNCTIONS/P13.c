// PALIDROME NUMBER 
// METHOD 2
#include<stdio.h>
int main()
{
    int num,temp,a;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    int reversenum=0;
    while (num>0)
    {
        a=num%10;
        num=num/10;
        reversenum=reversenum*10+a;

    }

    if(temp==reversenum) printf("Palidrome number");
    else printf("Not palidrome");
    return 0;
}