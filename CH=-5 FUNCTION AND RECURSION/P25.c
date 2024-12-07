// Q3) WRITE A FUNCTION TO PRINT "HOT" OR "COLD" ACCORDING TO USER ENTERS THE TEMPERATURE
#include<stdio.h>
float temp(float tempt);

int main()
{
    float tempt;
    temp(tempt);
    return 0;
}

float temp(float tempt)
{
    printf("Enter temperature:");
    scanf("%f",& tempt);
    if (tempt<=0) printf("ICE COLD");
    else if (tempt>0 && tempt<=15) printf("COLD");
    else if (tempt>15 && tempt<=35) printf("CHILL TODAY"); 
    else if (tempt>35 && tempt<=45) printf("HOT TODAY");
    else if (tempt>45 && tempt<=55) printf("VERY HOT TODAY");
    else if (tempt>55 && tempt<=70) printf("RED HOT TODAY");
    else if (tempt>70 ) printf(" YOU WILL DIE TODAY"); 
}