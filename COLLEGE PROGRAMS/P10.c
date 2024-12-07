/*Program: 10.
Develop a C program to using pointers to compute the sum, mean and standard
deviation of all elements stored in an array of N real numbers.
*/

#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100
int main() 
{
    int n, i;
    double array[MAX_SIZE], sum = 0, mean, std_dev = 0;
    double *ptr;
    printf("Enter the size of the array: ");
        scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%lf", &array[i]);
    }
    // Use a pointer to compute the sum of the elements in the array
    ptr = array;
    for (i = 0; i < n; i++) 
    {
        sum += *ptr;
        ptr++;
    }
    mean = sum / n;
    // Use a pointer to compute the standard deviation of the elements in the array
    ptr = array;
    /*      Writing ptr = array for the second time is important to reset the pointer to the beginning of the array. 
         After the first loop that calculates the sum, the pointer ptr will be pointing to the end of the array. 
         In order to use the pointer again for the standard deviation calculation, 
         it needs to be reset to the start of the array.                     */

    for (i = 0; i < n; i++) 
    {
        std_dev += (*ptr - mean) * (*ptr - mean);
        ptr++;
    }
    std_dev = sqrt(std_dev / (n));
    printf("Sum = %.2lf\n", sum);
    printf("Mean = %.2lf\n", mean);
    printf("Standard deviation = %.2lf\n", std_dev);
    return 0;
}