// practice 56
// method -1
#include<stdio.h>
#include<string.h>

typedef struct peopleaddress
{
    int house;
    int block;
    char city[10];
    char state[10];
}add;

void printinfo(add p);
int main()
{
    add p1;
    printf("Enter house number:"); scanf("%d",& p1.house);
    printf("Enter block number:"); scanf("%d",& p1.block);
    /* Input Handling with fgets: After using scanf for integers, there's a newline character left in the input buffer. 
    This can cause fgets to read an empty line. You need to handle this by clearing the input buffer before using fgets
    */
    getchar();    // Clear the newline character left by scanf
    printf("Enter city:"); fgets(p1.city,10,stdin);

    p1.city[strcspn(p1.city, "\n")] = '\0';   // Remove the newline character added by fgets
    /*When you use fgets to read a string from standard input, it reads up to n-1 characters 
    (where n is the size of the array) or until it encounters a newline character, whichever comes first. 
    If the newline character is read, fgets includes it in the string. This can cause issues when you later 
    use the string, especially when printing or concatenating it.

    How does the line work?
    strcspn(p1.city, "\n"): This function scans the string p1.city to find the first occurrence of the newline character \n. 
    It returns the index of the first occurrence of \n.

    p1.city[strcspn(p1.city, "\n")] = '\0';: This sets the character at that index to the null terminator \0, 
    effectively truncating the string and removing the newline
    */

    printf("enter state:"); fgets(p1.state,10,stdin);
    printinfo(p1);

    //p1.city[strcspn(p1.city, "\n")] = '\0';   // Remove the newline character added by fgets

    add p2;
    printf("Enter house number:"); scanf("%d",& p2.house);
    printf("Enter block number:"); scanf("%d",& p2.block);
    getchar();    
    printf("Enter city:"); fgets(p2.city,10,stdin);
    p2.city[strcspn(p2.city, "\n")] = '\0';   
    printf("enter state:"); fgets(p2.state,10,stdin);
    printinfo(p2);

    add p3;
    printf("Enter house number:"); scanf("%d",& p3.house);
    printf("Enter block number:"); scanf("%d",& p3.block);
    getchar();    
    printf("Enter city:"); fgets(p3.city,10,stdin);
    p3.city[strcspn(p3.city, "\n")] = '\0';   
    printf("enter state:"); fgets(p3.state,10,stdin);
    printinfo(p3);

    add p4;
    printf("Enter house number:"); scanf("%d",& p4.house);
    printf("Enter block number:"); scanf("%d",& p4.block);
    getchar();    
    printf("Enter city:"); fgets(p4.city,10,stdin);
    p4.city[strcspn(p4.city, "\n")] = '\0';   
    printf("enter state:"); fgets(p4.state,10,stdin);
    printinfo(p4);

    add p5;
    printf("Enter house number:"); scanf("%d",& p5.house);
    printf("Enter block number:"); scanf("%d",& p5.block);
    getchar();    
    printf("Enter city:"); fgets(p5.city,10,stdin);
    p5.city[strcspn(p5.city, "\n")] = '\0';   
    printf("enter state:"); fgets(p5.state,10,stdin);
    printinfo(p5);
}

void printinfo(add p)
{
    printf("Address is : \n");
    printf("%d %d %s %s",p.house,p.block,p.city,p.state);
    printf("\n");
}