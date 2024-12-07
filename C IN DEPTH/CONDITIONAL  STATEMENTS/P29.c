// some additional programs
// P5-36(problem1)
#include<stdio.h>

int isleap(int year)
{
 if((year%4==0 && year%100!=0) || (year%400==0)) return 1;
 else return 0;
}

int isvalid(int day,int month,int year)
{
    int islea=isleap(year);
    if(year>=1850 && year<=2050)
    {
        switch(month)
        {
            case 1:   //Jan        :31 days
            case 3:  // mrach
            case 5: // may
            case 7: // july
            case 8: // august
            case 10: // oct
            case 12:  // dec
            if(day>=1 && day<=31)
            {
                return 1;
                // break;  Once you return a value within a switch case, 
                // the break statement becomes redundant since the function exits immediately.
            }

            case 2:  // Feb
            if(islea==1)  // year is leap
            {
                if(day>=1 && day<=29) return 1;
                else return 0;
            }

            else if(islea==0)
            {
                if(day>=1 && day<=28) return 1;
                else return 0;
                //break;
            }

            case 4: // April
            case 6: //june
            case 9:  // sept
            case 11:  // nov
            if(day>=1 && day<=30)
            {
                return 1;
                //break;
            }
            else return 0;

            default:
            return 0;
        }
    }
    else return 0;
}

int main()
{
    int day,month,year;
    printf("\n enter date in format:dd/mm/yyyy:");
    scanf("%d/%d/%d",&day,&month,&year);  // statement extracts the day, month, and year from the input string

    int leap=isleap(year);
    if(leap==1) printf("\n leap year");

    int isva=isvalid(day,month,year);
    if(isva==1) printf("Valid date");
    else printf("Invalid date");

    return 0;
}