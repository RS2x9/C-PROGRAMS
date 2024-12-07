// PRACTICE 54
#include<stdio.h>
#include<string.h>
void character_presence(char arr1[],char arr2[]);
int main()
{
    char string[20], character[2];
    printf("Enter string:");
    fgets(string,20,stdin);
    printf("Enter character to be checked:");
    scanf("%c",&character);
    character_presence(string,character);
}

void character_presence(char arr1[],char arr2[])
{
    int count=0;
    int length=strlen(arr1);
    for(int i=0 ,j=0; i<length ; i++)
    {
        if (arr2[j]==arr1[i]) count++;
    }
    int k=0;
    if (count>0) printf("\n %c is present in %s",arr2[k],arr1);
    else printf("\n %c is not present in %s",arr2[k],arr1);

}