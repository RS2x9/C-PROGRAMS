// practice 57
#include<stdio.h>
struct  vector
{
    int x;
    int y;
};

void calsum(struct vector v1,struct vector v2, struct vector sums);
int main()
{
    struct vector v1={10,20};   // vector is created
    struct vector v2={5,10};
    struct vector sums={0};
    calsum(v1,v2,sums);
    return 0;
}

void calsum(struct vector v1,struct vector v2, struct vector sums)
{
    sums.x=v1.x+v2.x;
    sums.y=v1.y+v2.y;
    printf("Vector v1={%d,%d} \n",v1.x,v1.y);
    printf("Vector v2={%d,%d} \n",v2.x,v2.y);
    printf("sums={%d,%d}",sums.x,sums.y);
}