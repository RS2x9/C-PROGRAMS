// P6-20
// solution given in C-in depth is wrong
// converting decimal to binary

// continue...
#include<stdio.h>
#define max 100
void decimal_binary(int n);
int main()
{
    int n;
    printf("Enter any integer:");
    scanf("%d",&n);
    decimal_binary(n);
    return 0;

}

void decimal_binary(int n)
{
    int arr[max];
    int i=0;
    while(n!=0)
    {
        arr[i]=n%2;;
        n=n/2;
        i++;
    }

    int size=i;
    for(int j=size ; j>=1 ; j--)
    {
        printf("%d \t",arr[j]);
    }
}