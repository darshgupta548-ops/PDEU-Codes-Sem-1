#include <stdio.h>

int main() {
    char *arr[4] = { "Apple", "Banana", "Cherry", "Dates" };

    char **pptr;     // double pointer
    pptr = arr;      // point double pointer to array of pointers

    // print the 3rd string using double dereferencing
    printf("The third string is: %s\n", *(pptr + 2));

    return 0;
}
