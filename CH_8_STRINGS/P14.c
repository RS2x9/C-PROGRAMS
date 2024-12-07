// PRACTICE-52
#include<stdio.h>
#include<string.h>
void slice();
int main()
{
    slice();
    return 0;
}

void slice()
{
    char str[20];
    printf("Enter any string:"); 
    fgets(str,20,stdin);
    int n,m;
    printf("Enter lower index:");
    scanf("%d",&n);
    printf("Enter upper index:");
    scanf("%d",&m);
    char newstr[20];
    for (int i=n ,j=0;i<=m ; i++,j++)
    {
        newstr[j]=str[i];
    }
    printf("Slice string:");
    puts(newstr);
}