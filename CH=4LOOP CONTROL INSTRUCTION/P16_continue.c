// continue
#include<stdio.h>
int main() 
{
    for(int i=1 ; i<=5 ; i++) 
    {
        if (i==3) continue;
        printf("%d \n",i) ; /*3 is not printed due to continue keyword :
                           continue keyword will not print 3 and will give the control again to for*/ 
    }
    return 0;
}