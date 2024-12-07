// practice 56
// method -2
#include<stdio.h>

struct peopleaddress 
{
    int block, house;
    char city[10],state[10];
};

void printinfo(struct peopleaddress p);
int main()
{
    struct peopleaddress add[5];    // Declare an array of 5 structures

    for (int i=0 ; i<5 ; i++)
    {
        printf("Enter block number:"); scanf("%d",&add[i].block);
        printf("Enter house number:"); scanf("%d",&add[i].house);
        printf("Enter city name:");scanf("%s",add[i].city);
        printf("Enter state name:"); scanf("%s",add[i].state);
        printf("\n");
    }
    printf("block \t house \t city \t state \n");
    for(int i=0 ; i<5 ; i++) 
    {
        printinfo(add[i]);
    }

}

void printinfo(struct peopleaddress p)
{
    printf("%d \t%d \t%s \t%s \n",p.block ,p.house,p.city,p.state);
}