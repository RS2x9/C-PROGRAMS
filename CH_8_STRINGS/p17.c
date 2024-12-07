// HOMEWORK SET
// Q1) WRITE A PROGRAM TO CONVERT ALL LOWERCASE VOWELS TO UPPER CASE IN A STRING .
#include<stdio.h>
#include<string.h>
# define MAX 100


int main()
{
    char lowerstring[MAX]={'a','e','i','o','u'};
    int length=strlen(lowerstring);
    printf("Number of elemnts in lowerstring array:%d \n",length);// this will return 5 because we have 5values in lowerstring array

    int upperascii[5];
    // storing ASCII values of capital vowels in upperascii array
    for (int i=0 ; i<length ; i++)
    {
        upperascii[i]=lowerstring[i]-32;
        /* since uppercase is integer so lowerstring[i] will return ASCII value of the character */
    }
    // LETS VERIFY WHETEHER ASCII VALUES OF CAPTAL VOWELS ARE STORED IN upperascii....
    for(int i=0 ; i<5 ;i++)
    {
        printf("%c:%d ",upperascii[i],upperascii[i]);
    }

    char upperstring[MAX];
    // storing capital vowels in upperstring[]
    for (int i=0 ; i<length ; i++)
    {
        upperstring[i]=upperascii[i];
        /* since upperstring stores char values so upperascii[i] values are getting converted to characters */
    }

    printf("\n");
    // checking values are stored or not 
    for (int i=0 ; i<5  ; i++)
    {
        printf("%c ",upperstring[i]);
    }
}