// PRACTICE 1)  PROGRAM TO CALCULATE AREA OF SQUARE
#include<stdio.h>
int main() 
{
    printf(" Enter SIDE AS INTEGER \n") ; 
    int side; 
    printf("Enter side of square:");
    scanf("%d",& side); 
    printf("Area is: %d \n ",side*side);
      
    float side2; 
    printf("Enter any value of side:") ; 
    scanf("%f",& side2);
    printf("Area is: %f",side2*side2);    // if %d is used instaed of float then compiler will print the  area as 0
    return 0;
}