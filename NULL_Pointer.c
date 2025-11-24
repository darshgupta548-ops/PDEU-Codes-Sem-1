#include <stdio.h>

int main() {
    int *ptr = NULL;   // set pointer to NULL

    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    } else {
        printf("Pointer is NOT NULL\n");
    }
    return 0;
}
