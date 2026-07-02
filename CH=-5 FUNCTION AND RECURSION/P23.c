// HOMEWORK SET
// Q1) write a function to find sum of digits of a number
// doing this problem with recursion

#include<stdio.h>
int sum( int num)
{
    if ( num == 0) return 0;
    return ( num%10) + sum( num /10);
}
int main()
{
    int n ;
    printf("E: ");
    scanf("%d", &n);
    printf( "%d" , sum(n));
    return 0;
}
