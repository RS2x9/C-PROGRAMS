#include <stdio.h>
#include <string.h>  // Include this for strcpy

struct student {
    char name[100];
    int marks;
};

int main() {
    struct student ece[100]; // Array of 100 student structs

    // Initialize the first student
    strcpy(ece[0].name, "kumar");  // Copy the string "kumar" into ece[0].name
    ece[0].marks = 100;            // Set the marks for ece[0]

    // Print the student's information to verify
    printf("Student Name: %s\n", ece[0].name);
    printf("Student Marks: %d\n", ece[0].marks);

    // Initialize the second student
    strcpy(ece[1].name, "singh");  // Copy the string "singh" into ece[1].name
    ece[1].marks = 200;            // Set the marks for ece[1]

    // Print the student's information to verify
    printf("Student Name: %s\n", ece[1].name);
    printf("Student Marks: %d\n", ece[1].marks);

    /*In the code, ece[0] and ece[1] are elements of an array of structures. 
    Each element in this array is a separate student structure that contains two fields: 
    a character array name and an integer marks.
    When you initialize ece[0].name with the string "kumar", the string is stored in the name 
    array of ece[0]. The strcpy function copies the string into the array, including a null terminator (\0) 
    at the end of the string to indicate its end. The array name is a fixed size of 100 characters, so "kumar" 
    occupies the first 5 characters plus 1 for the null terminator, leaving the rest of the array unused.

    Here’s the important part:
    The second student ece[1] does not use any part of ece[0].name.
     ece[1] is a completely separate structure within the array ece.

     This is how the memory layout works:
     ece[0] includes the memory for the entire student structure, which contains name and marks.
     ece[1] is allocated right after ece[0], but it starts from the beginning of its own structure.
     So, when you initialize ece[1].name with "singh", it is stored in the name array of ece[1], 
     not in the name array of ece[0].

    The confusion might arise from thinking that the strings are stored in a contiguous block of memory shared 
    across all elements of the array, but that's not the case. Each student structure in the array has its own 
    independent name array and marks integer.

     In summary, "singh" doesn't start at ece[6] because ece[1] is an entirely separate student structure, 
     with its own name array starting at ece[1].name[0].
     */

    /*
    what is ece in that code ?
    In the code, ece is the name of an array of student structures.

    struct student ece[100];:
    struct student: This defines the type of the array elements, which is a structure with two members: 
    a char array named name (to store the student's name) and an int named marks (to store the student's marks).

    ece[100]: This declares ece as an array of 100 elements, where each element is of type struct student.

    Summary:
    ece is the name of the array.
    ece[0] refers to the first element in this array, which is a student structure.
    ece[1] refers to the second element, and so on, up to ece[99].
    Each element of ece can hold a student's name and marks.

    */

    return 0;
}
