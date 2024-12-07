// P5-39(Problem-4)
#include<stdio.h>
int main()
{
    int money,c1,c2,c3,c4,c5,c6;
    printf("Enter amount:");
    scanf("%d",&money);

    if(money>=100)
    {
        c1=(int)money/100;
        money=money%100;  // this remainder is the left amount of money on which further operation will be done 
        if(money>=50)
        {
            c2=(int)money/50;
            money=money-(c2*50);
        }
    }

    else // money<100
    {
        if(money>=50)
        {
            c2=(int)money/50;
            money=money%50;
        }
        else // money<50
        {
            if(money>=20)
            {
                c3=(int)money/20;
                money=money%20;
            }
            else  // money<20
            {
                if(money>=10)
                {
                    c4=(int)money/10;
                    money=money%10;
                }

                else // money<10
                {
                    if(money>=5)
                    {
                        c5=(int)money/5;
                        money=money%5;
                    }
                    else  // money<5
                    {
                        if(money>=2)
                        {
                            c6=(int)money/2;
                            money=money%2;
                        }
                    }
                }
            }
        }
    }
}