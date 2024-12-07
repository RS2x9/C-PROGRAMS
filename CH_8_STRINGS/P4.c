// PRACTICE 48
#include<stdio.h>
int main()
{
    char name[10],fullname[40];
    printf("Enter firstname :");
    scanf("%s",name);  // null character will automatically be added by compiler becuase of %s 
    printf("FirstName is : %s\n",name);

    printf("Enter full name :");
    scanf("%s",fullname);
    printf("Full name: %s",fullname); 
    // on printing full name : only first word is getting printed because scanf cannot work with multistring with spaces
    return 0;
}