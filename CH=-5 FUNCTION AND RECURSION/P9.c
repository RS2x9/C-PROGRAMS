// printing table 
// method 1
#include<stdio.h>

int table(int n, int i);

int main()
{
    int n,i;
    printf("Enter number to print table :");
    scanf("%d",& n);
    printf("Table is :\n");
    for (int i=1 ; i<=10 ; i++) {
        printf("%d\n",table(n,i));
    }
    return 0;
}

int table(int n, int i){
    return n*i ;
}
/* if we give  n in both int table() and int main() then both n are different 
and stores different values until they are not made same */