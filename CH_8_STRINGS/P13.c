// PRACTICE 51
// SALTING: THIS PROCESS IS USED FOR EMPLOYEE DATA SAFETY 
#include<stdio.h>
#include<string.h>
int main()
{
    char pass[20],salt[]="123";
    printf("Enter employee password:");
    fgets(pass,20,stdin);
    char newpass[100];
    strcpy(newpass,pass);
    strcat(newpass,salt);
    printf("Net user password:");
    puts(newpass);
    return 0;
}