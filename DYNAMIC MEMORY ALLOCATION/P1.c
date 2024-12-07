#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int n;
    // allocating memory space for 5 integers
    arr=(int*)malloc(5*sizeof(int));

    // checking if memory is allocated
    if (arr==NULL)
    {
        printf("memory allocation failed:");
        return 1;
        /*Why Use return 1;?
        Indicating an Error:
        In C, a return 0; from the main() function typically indicates that the program has executed successfully 
        without any errors.
        A non-zero return value, like return 1;, is commonly used to signal that something went wrong. 
        This is a convention that helps to distinguish between successful and unsuccessful program termination.

        Memory Allocation Failure:
        If malloc() returns NULL, it means the system could not allocate the requested memory, likely due to 
        insufficient memory.
        If the program cannot allocate the necessary memory, it may not be able to proceed correctly, 
        so it makes sense to terminate the program at this point.

        Exiting the Program:
        return 1; stops the execution of the program after printing the error message, 
        ensuring that no further operations are attempted on the unallocated (or NULL) pointer, 
        which would lead to undefined behavior or a crash.
        */
    }

    for(int i=1; i<=5 ;i++)
    {
        arr[i]=2*i;
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;
}