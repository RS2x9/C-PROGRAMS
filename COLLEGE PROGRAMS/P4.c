// CHEMICAL EQUATION PROGRAM
#include<stdio.h>
int main()
{
    int x,y,p,q;
    printf("Enter x y p q:");
    scanf("%d %d %d %d",&x, & y, & p , &q);
    int b1=p/x , b2=q/y , b3=p/q ;
    printf("Values: \n b1:%d b2:%d b3:%d",b1 , b2 ,b3);
    return 0;
}