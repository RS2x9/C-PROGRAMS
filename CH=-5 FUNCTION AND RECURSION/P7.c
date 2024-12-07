// using function to print code 
#include<stdio.h>
 int sum(int x,int y);

 int main()
 {
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a ,&b);
    int s=sum(a,b);
    printf("Sum is %d",s);
    return 0;
 }

 int sum(int x, int y){
    return x+y;
 }