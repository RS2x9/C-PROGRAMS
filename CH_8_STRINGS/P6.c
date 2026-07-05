// STRING AS POINTERS 
#include<stdio.h>
int main()
{
    char *canchange="Hello World";
    puts(canchange);
    canchange="kumar";
    puts(canchange);
    printf("\n");

    char cannotchange[]="how are you";
    puts(cannotchange);
    cannotchange="hello";
    puts(cannotchange);  
    // Error shows : char arrays cannot be modified

    return 0;
}

/*

1. String literal with pointercCopychar *canchange = "Hello World";
"Hello World" is stored in read-only memory (string literal section).
canchange is a pointer that points to that literal.
You can make the pointer point to another literal (canchange = "kumar";), 
but you cannot modify the literal itself
(e.g., canchange[0] = 'h';
would cause undefined behavior).

Character arraycCopychar cannotchange[] = "how are you";
This creates a mutable array in memory, initialized with 
the characters of the string.
You can change individual characters (e.g., cannotchange[0] = 'H'; works).
But you cannot reassign the whole array to point to another string (cannotchange = "hello"; is invalid),
because arrays are not assignable — they are fixed blocks of memory.
*/
