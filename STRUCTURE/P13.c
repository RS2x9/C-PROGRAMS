// practice 58
#include<stdio.h>
struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex num1={10,20};
    struct complex *ptr=&num1;
    printf("Real part:%d \n",num1.real);
    printf("Img part:%d",num1.img);
}