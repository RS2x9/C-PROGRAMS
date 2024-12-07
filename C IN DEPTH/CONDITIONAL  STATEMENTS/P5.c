//P5-5
// leap year program
/*   A year is considered a leap year if it meets the following criteria:
     Divisible by 4: The year is a leap year if it is divisible by 4.
     Exception for Century Years: If the year is a century (i.e., divisible by 100), 
     it is a leap year only if it is also divisible by 400.
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);

    //method-1
    if (year%100==0)
    {
        printf("%d is century year",year);
        if(year%400==0) printf("\n %d is leap year",year);
        else printf("\n %d is not leap year",year);
    }

    else // year%100!=0
    {
        if(year%4==0) printf("%d is leap year",year);
        else printf("%d is not leap year",year);
    }

    printf("\n");
    // method-2
    if((year%4==0 && year%100!=0) || (year%400==0)) printf("\n %d is leap year",year);
    else printf("\n %d is not leap year",year);

    return 0;
}