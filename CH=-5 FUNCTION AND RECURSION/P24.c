// Q2) WRITE A FUNCTION TO PRINT SQUARE ROOT 
#include<stdio.h>
#include<math.h>
float square(float n);
int main()
{
    float n;
    printf("Enter number:");
    scanf("%f",& n);
    printf("Square root of %f :%f",n,square(n));
    return 0;
}

float square(float n)
{
    float a=sqrt(n);
    return a;
}