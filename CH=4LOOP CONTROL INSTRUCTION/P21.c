/* PRACTICE-22
PRINT REVERSE OF THE TABLE FOR  A NUMBER*/
#include<stdio.h>
int  main()
{
    printf("\n") ; int n ; printf("Enter any integer:") ; scanf("%d", & n) ;
    for (int i=10 ; i>=1 ; i--) printf("%d ",n*i);
    return 0;
}