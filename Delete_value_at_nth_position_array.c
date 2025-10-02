#include <stdio.h>

int main() {
    int a[5], i, index;

    printf("Enter 5 numbers (use 0 as empty slots):\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the index of the number to delete (0-4):\n");
    scanf("%d", &index);

    for(i = index; i < 4; i++) {
        a[i] = a[i + 1];
    }

    a[4] = 0;

    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}