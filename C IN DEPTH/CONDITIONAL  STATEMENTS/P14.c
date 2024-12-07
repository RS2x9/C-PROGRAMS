// PROOF FOR do statements are executed first then the condition is checked in while part
#include<stdio.h>
int main()
{
    int i=2;
    do
    {
        printf("hello");
    } while (i<1);
    
}