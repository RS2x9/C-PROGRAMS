// PRACTICE 31: WRITE FUNCTION TO CALCULATE AREA OF SQUARE ,CIRCLE , RECTANGLE

#include<stdio.h>
#include<math.h>

float square(float side);
float circle(float radius);
float rectangle(float length,float breadth);

int main()
{
    float side,radius,length,breadth;
    printf("\nEnter square side: "); 
    scanf("%f",& side); 
    printf("Area of square: %.3f \n",square(side));

    printf("\nEnter circle radius:"); 
    scanf("%f",& radius); 
    printf("Area of circle: %.3f \n",circle(radius));


    printf("\nEnter rectangle length:");
    scanf("%f",& length);
    printf("Enter rectangle breadth:");
    scanf("%f",& breadth);
    printf("Area of rectangle: %.3f \n",rectangle(length,breadth));


    return 0;
}

float square(float side){
    return pow(side,2);
}
float circle(float radius){
    return 3.14*pow(radius,2);
}
float rectangle(float length,float breadth){
    return length*breadth;
}