// P5-6 -method-1
// example of if else ladder
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter marks of 4 sunjects:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int total=a+b+c+d;
    printf("Total marks:%d \n",total);
    float per ; // calculating percentage
    per=(float)total/4 ;  // considering max marks of each subject to be 100
    printf("Percentage:%0.2f \n",per);
    if(per>=85) printf("Grade:A \n");
    else // per <85
    {
        if(per>=70) printf("Grade:B \n");
        else //per<70
        {
            if(per>=55) printf("Grade:C \n");
            else // per<55
            {
                if(per>=40) printf("Grade:D \n");
                else //per<40
                printf("Grade:E");
            }
        }
    }

    return 0;
}
