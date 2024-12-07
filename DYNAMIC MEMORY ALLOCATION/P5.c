// practice 67
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(2,sizeof(int));

    for(int i=0 ; i<2 ; i++) printf("%d ",ptr[i]);
    free(ptr);

    /*This frees the allocated memory, making ptr a dangling pointer. 
    Accessing ptr after this point is undefined behavior, meaning it can lead to unpredictable results.
    */

    printf("\n");
    for(int i=0 ; i<2 ; i++) printf("%d ",ptr[i]);
    /*This loop attempts to print the values of the memory after it has been freed. Since the memory has been 
    deallocated, the values are now undefined, and accessing them may lead to unexpected output or a runtime error
    */

    return 0;
    
}