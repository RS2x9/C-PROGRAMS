/* The digit "1" has an ASCII value of 49. 
This follows the pattern where the ASCII value of numbers 0 to 9 range
 from 48 to 57, with '0' being 48 and '9' being 57.
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    while (1)
    {
        printf("\n Enter any character:") ; scanf("%s",&ch);
        
        int chd=(int)ch;
        if (isupper(ch)) printf("Upper case");
        else if (islower(ch)) printf("Lower case");
        else if (ispunct(ch)) printf("Special character");
        else if (chd>=48 && chd <=57) printf("Number"); 
        else printf("Not a letter or special character");
    }
    return 0;
}