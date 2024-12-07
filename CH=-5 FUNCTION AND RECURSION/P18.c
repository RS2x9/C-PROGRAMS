// PRACTICE 33: WRITE A PROGRAM TO CALCULATE PERCENTAGE FROM SCIENCE MATHS AND SANSKRIT MARKS
// LET US ASSUME EACH SUBJECT CARRIES 100 MARKS
// METHOD-2

#include<stdio.h>

int percentage()
{
    int maths,science,sanskrit;
    printf("Enter marks in maths science sanskrit:"); 
    scanf("%d%d%d",& maths , & science , & sanskrit);
    printf("\n marks in maths:%d",maths);
    printf("\n marks in science:%d",science);
    printf("\n marks in sanskrit:%d",sanskrit);
    int sum=maths+science+sanskrit;
    printf("\n Percentage:%.2f",sum/3.0);

}

int main()
{
    percentage();
    return 0;
}