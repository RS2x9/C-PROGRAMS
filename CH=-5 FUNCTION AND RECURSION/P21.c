// PRACTICE 35 : PROGRAM TO PRINT NTH TERM OF FABONACCI SEQUENCE
#include<stdio.h>
int fab(int n);

int main()
{
    int n; 
    printf("Enter number:");
    scanf("%d",& n);
    if (n<=0) printf("Enter number>0");
    else if (n==1) printf("Nth term is :0");
    else if (n==2) printf("Nth term is :1");
    else  printf("Nth term is %d",fab(n));
    return 0;
}

int fab(int n)
{
    if (n==1) return 0;
    else if (n==2) return 1;
    else {
        int fabn=fab(n-1)+fab(n-2);
        return fabn;
    }
}