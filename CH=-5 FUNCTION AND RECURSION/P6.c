// PRACTICE 28: WRITE A FUNCTION THAT PRINTS NAMASTE IF PERSON IS INDIAN AND BONJOUR IS PERSON IS FRENCH 
#include<stdio.h>

void nam();
void bon();

int main()
{
    int n;
    printf("ENTER \nINDIAN : 1 \n FRENCH: 2: ");
    scanf("%d",& n);
    if (n==1) nam();
    else bon();
    return 0;
}
void nam(){
    printf("\n NAMASTE ");
}
void bon(){
    printf("\n BONJOUR");
} 