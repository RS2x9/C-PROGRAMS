//  break : this keyword is used to break loops

#include<stdio.h>
int main() 
{
    for(int i=1 ; i<=5 ; i++) 
    {
        if (i==4)  
        { 
            break;
        }
        printf("%d \t",i) ;
    }
    return 0;
}