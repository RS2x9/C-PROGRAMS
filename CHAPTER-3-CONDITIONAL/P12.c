// WAP TO FIND ASCII VALUES OF INPUT CHARACTERS

#include<stdio.h>
int main()
{
    char input;
    while(1)
    {
        printf("Enter character:"); 
        scanf(" %c",& input);       // space is provided before %c to handle spaces 
                                   //otherwise compiler gives garbage values 
        printf("\n ASCII value of %c: %d  ", input , input );
    }
    return 0;
}