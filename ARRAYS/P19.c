// PRACTICE :46
#include<stdio.h>
int main()
{
    int table[2][10];
    for(int i=0 ; i<10 ;i++)
    {
        table[0][i]=2*(i+1);
    }

    for(int i=0 ; i<10 ;i++)
    {
        table[1][i]=3*(i+1);
    }
    // printing the table

    for (int j=0; j<10 ; j++)
    {
        printf("%d ",table[0][j]);
    }

    printf("\n");
    for (int j=0; j<10 ; j++)
    {
        printf("%d ",table[1][j]);
    }
}