// PRACTICE 33: WRITE A PROGRAM TO CALCULATE PERCENTAGE FROM SCIENCE MATHS AND SANSKRIT MARKS
// LET US ASSUME EACH SUBJECT CARRIES 100 MARKS
// METHOD-1

#include<stdio.h>

//FUNCTION PROTOTYPE
int sciencein ();
int mathsin();
int sanskritin();
int percentage();

int main()
{
    percentage();
    return 0;
}

int sciencein()
{
    int science;
    printf("Enter science marks:"); scanf("%d",& science);
    return science;  // WITHOUT THIS WE CANNOT ADD THE VALUE OF SCIENCE TO SUM
}

int mathsin()
{
    int maths;
    printf("Enter maths marks:"); scanf("%d",& maths);
    return maths;  // WITHOUT THIS WE CANNOT ADD THE VALUE OF MATHS TO SUM
}

int sanskritin()
{
    int sanskrit;
    printf("Enter sanskrit marks:"); scanf("%d",& sanskrit);
    return sanskrit;  // WITHOUT THIS WE CANNOT ADD THE VALUE OF SANSKRIT TO SUM
}

int percentage()
{
    int science=sciencein();  // WITH CALLING THIS FUNCTION HERE WE ARE ABLE TO GET SCIENCE MARKS VALUE AND COULD CALCULATE THE PERCENTAGE
    int maths=mathsin();
    int sanskrit=sanskritin();
    int sum=science+maths+sanskrit;
    printf("Percentage: %.2f",sum/3.0);
}