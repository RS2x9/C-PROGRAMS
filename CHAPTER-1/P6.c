#include <stdio.h>
int main() 
{
    // PROGRAM TO CALCULATE PERIMETER OF RECTANGLE
    printf("\n") ;  
    int a,b ; 
    printf("Enter side a: ") ; 
    scanf("%d",& a);
    printf("Enter side b:"); 
    scanf("%d",& b); 
    printf("PERIMETER OF RECTANGLE: %d",2*(a+b)) ; 
    printf("\n");

    // CUBING OF A NUMBER
    float c ; 
    printf("Enter cube root of any number :") ; 
    scanf("%f",& c);
    printf("cube is : %f ",c*c*c);

    return 0; 
}