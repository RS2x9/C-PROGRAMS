// practice 30: sum of n natural numbers
#include<stdio.h>

int sums(int count);

int main(){
    printf("\n                Devil!!");
    int n;
    printf("\nEnter any natural number:");
    scanf("%d",& n);
    if (n<=0) printf("its not natural dude");
    else printf("sum is : %d",sums(n));
    return 0;
}

int sums(int count)
{
    int sum=0;
    if (count>0) sum=count+sums(count-1);
    return sum;

}