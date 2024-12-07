// practice 60
#include<stdio.h>
typedef struct StateBankOfIndia
{
    char name[10];
    int moneydeposit;
    int accountno;
} sbi ;

int main()
{
    sbi rs={"Sagar",3000000,1000};
    printf("Name:%s \t Moneydeposit:%d \t Accountno:%d",rs.name,rs.moneydeposit,rs.accountno);

}