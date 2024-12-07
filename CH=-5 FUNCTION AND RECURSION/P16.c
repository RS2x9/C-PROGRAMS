// WRITE A FUNCTION TO CONVERT CELCIUS TO FAHRENHEIT

#include<stdio.h>

float fah(float celcius);

int main()
{
    float celcius;
    printf("Enter temperature in Celcius:");
    scanf("%f",& celcius);
    printf("Temp in Fah: %.3f",fah(celcius));
    return 0;
}

float fah(float celcius)
{
    float fah=celcius*(9.0/5)+32;   // 9/5 gives integer values, so we have to make 9/5 as float ,so 9.0/5 is written
    return fah;
}