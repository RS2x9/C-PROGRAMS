// P6-16- palidrome number program
// my logic
#include<stdio.h>

int mul(int n);
int count(int n);
int palidrome(int n);

int main()
{
    int num;
    printf("Enter any number:"); 
    scanf("%d",&num);
    if(num==palidrome(num)) printf("%d",num);
    else printf("%d is not palidrome",num);
    return 0;
    
}

int mul(int y)
{
    int pr=10;
    if(y==0) return 1;
    else if(y==1) return 10;
    else if(y>1)
    {
        for(int i=2 ; i<=y ; i++) 
        {
            pr=pr*10;
        }
        return pr;
    }
}

int palidrome(int num)
{
    int a,b=0;
    for(int i=0 ; num!=0 ; i++)
    {
        a=num%10;
        num=num/10;  // if number entered by user was 4 digit ,here it has become 3 digit now
        b=b+(a*mul(count(num)));
    }
    return b;
}

int count(int x)
{
    if(x==0) return 0;
    int countdigit=0,a;
    for(int i=0 ; x!=0  ; i++)
    {
        a=x%10;
        x=x/10;
        countdigit++;
    }
    return countdigit;
}