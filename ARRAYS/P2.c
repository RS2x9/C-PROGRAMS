// PRACTICE - 41: 
#include<stdio.h>
int price()
{
    float money[3];
    printf("Enter prices of three items:\n");
    for (int i=0 ; i<=2 ; i++)
    {
        printf("%d:",i+1);
        scanf("%f",&money[i]);
    }

    printf("Final cost with GST :\n");
    // let gst be 10%
    for (int i=0 ; i<=2 ; i++)
    {
        printf("%d :%0.3f \n",i+1,money[i]+money[i]*0.1);
    }
}

int main()
{
    price();
    return 0;
}