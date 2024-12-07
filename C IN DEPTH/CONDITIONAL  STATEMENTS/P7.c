//method -2
// 2nd method is compact structure of 1st one 
#include<stdio.h>
int main()
{
    int a,b,c,d,total;
    float per;
    printf("Enter four subjects marks:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    total=a+b+c+d;
    printf("Toatl marks:%d \n",total);
    per=(float)total/4;
    printf("Percentage:%0.2f \n",per);

    if(per>=85) printf("grade:A \n");
    else if(per>=70) printf("Grade:B \n");
    else if(per>55) printf("Grade C: \n");
    else if(per >40) printf("grade: D");
    else printf("Grade:E");

    return 0;
}