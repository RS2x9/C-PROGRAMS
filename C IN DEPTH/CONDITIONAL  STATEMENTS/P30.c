// P5-37(problem2)
#include<stdio.h>

int isleap(int year)  // made to check for day entered in feb and year is leap or not are matching or not
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
            case 1:   //Jan
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
    int d1,d2,m1,m2,y1,y2;
    printf("Canculationg fifference in dates:\n");

    printf("Enter date 1 :dd/mm/yyyy");
    scanf("%d/%d/%d" , &d1 , &m1 , &y1 );
    isleap(y1);
    //int valid=isvalid(d1,m1,y1);
    if (isvalid==0) printf("Invalid date 1");

    printf("Enter date 2 :dd/mm/yyyy");
    scanf("%d/%d/%d", &d2 , &m2 , &y2 );
    isleap(y2);
    //valid=isvalid(d2,m2,y2);
    if (isvalid==0) printf("Invalid date 2");

    int d=d2-d1;
    int m=m2-m1;
    int y=y2-y1;
    printf("\n Difference:%d/%d/%d",d,m,y);
    if(y>=0)
    {
        if(m>0)
        {
            if(d>0) 
            {
                // do nothing
            }
            else printf("Day is negative because day2<day1");
        }
        else printf("Month is negtative because month2<month1");
    }
    else // y<0
    printf("\n Year is negative because year2 <year1");
}