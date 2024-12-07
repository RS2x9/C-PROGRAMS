//PRACTICE-14: PRINT THE NUMBER FROM 0-n , if n is given by user  

#include<stdio.h>
int main()
{ 
    float a ; 
    while(1)
    {
        printf(" \n Enter any number:") ; 
        scanf("%f",& a) ;

        if (a>=0)
        {
            for (int i=0 ; i<=a ; i+=1) 
            { 
                printf("%d ",i) ; 
            }

            printf("\n"); 
            // printing same result with while loop

            int i=0 ;
            while(i<=a) 
            { 
                printf("%d ",i) ; i+=1 ;
            }
        }

        printf("\n");

        if (a<0)
        {
            for (int i=0 ; i>=a ; i-=1) 
            { 
                printf("%d ",i) ; 
            }

            printf("\n"); 
            // printing same result with while loop

            int i=0 ;
            while(i>=a) 
            { 
                printf("%d ",i) ; i-=1 ;
            }
        }
    }
    return 0;
}