// P5-24
// ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,sums=0,b,a;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    for(int i=0 ; n!=0 ; i++)
    {
        a=n%10;
        b=(int)pow(a,3);  // pow() gives floating results
        sums=sums+b;
        n=n/10;
    }
     if(temp==sums) printf("%d is armstrong number",temp);
     else printf("%d is not armstrong number",temp);
     return 0;
}
