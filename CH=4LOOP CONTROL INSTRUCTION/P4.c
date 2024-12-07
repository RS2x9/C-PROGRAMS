//  iterator can be floating number and  for characters  

#include<stdio.h>
int main()
{
    for (float i=1 ; i<5.1 ; i+=1) 
    { 
        printf("%f \n",i) ; 
    }

    printf("\n") ; 

    for (char ch='a' ; ch<='z' ; ch+=1) 
    {
        printf("%c ", ch) ; 
    }

    /* here for every character ASCII value is there .
     So internally the ASCII of characters are increasing       
     */

    for ( char ch2='A' ; ch2<='Z' ; ch2+=1)  
    { 
        printf("%c ",ch2) ; 
    }
    
    return 0;
}