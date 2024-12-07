// Q4) make your own power function
// with recursion

#include<stdio.h>
float power(float base, int exponent);

int main()
{
    float base; int exponent;
    // int exponent is given : if user gives floating power then that will be converted to integer
    power(base,exponent);
    return 0;
}

float power(float base, int exponent)
{
    printf("Enter base and exponent:");
    scanf("%f%d", & base , & exponent);
    float temp=base;
    for(int i=1 ; i<exponent ; i++)
    {
        base=base*temp;
    }
    printf("%f ^%d :%f",temp,exponent,base);
}

