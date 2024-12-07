// PRACTICE 29:USE LIBRARY FUNCTIONS TO CALCULATE THE SQUARE OF A NUMBER GIVEN BY USER
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",& n);
    printf("%.2f",pow(n,2));
    return 0;
}