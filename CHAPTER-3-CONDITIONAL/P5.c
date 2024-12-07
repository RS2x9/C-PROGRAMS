/*PRACTICE -9
PROGRAM  TO WRITE WHETHER A STUDENT IS PASS OR FAIL
PASS--> MARKS > 30 */
#include<stdio.h> 
int main() 
{
    int marks ; 
    printf("Marks? :") ; 
    scanf("%d",& marks) ; 

    if (marks >30 && marks<=100) 
    {
        printf("You passed") ; 
    } 

    if (marks<=30) 
    { 
        printf("You failed") ; 
    }

    if (marks<0 || marks >100)  
    {  
        printf("Enter valid marks") ; 
    }
    
    return 0;
}