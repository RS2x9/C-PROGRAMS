/*                  HOME-WORK
PROGRAM TO CHECK IF A NUMBER IS ARMSTRONG NUMBER OR NOT 
Armstrong number: 153=(1)^3 +(5)^3 +(3)^3    */
#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;   printf("\n") ;   // r is remainder 
printf("enter the number=");    scanf("%d",&n);    temp=n;    
while(n>0)    {    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    }    
if(temp==sum)    printf("armstrong  number ");    
else    printf("not armstrong number");    
return 0;  
}