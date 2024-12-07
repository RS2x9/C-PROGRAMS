// PRACTICE 53
#include<stdio.h>
#include<string.h>
int main()
{
    char vowels[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    int count=0;
    char string[20];
    printf("Enter any string:");
    fgets(string,20,stdin);
    int length_string=strlen(string);
    int length_vowels=strlen(vowels);
    for (int i=0; i<length_vowels ; i++)
    {
        for (int j=0 ; j<length_string ; j++)
        {
            if(vowels[i]==string[j])
            {
                count=count+1;
            }
        }
    }
    printf("Total vowels in string:%d",count);

    return 0;
}