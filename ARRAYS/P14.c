// for 2d array
#include<stdio.h>
void checkodd();

int main()
{
    checkodd();
}

void checkodd()
{
    int m,n,count=0;
    printf("Enter rows and columns:");
    scanf("%d %d",&m,&n);
    int arr[m][n];

    printf("Enter elements:");
    for(int i=0 ;i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            printf("[%d][%d] \n",i,j);
            scanf("%d",&arr[i][j]);

            if(arr[i][j]%2!=0) count++;
        }
    }

    printf("Total odd elements:%d",count);
}