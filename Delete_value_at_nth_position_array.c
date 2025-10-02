#include <stdio.h>

int main() {
    int a[5], i, index;

    printf("Enter 5 numbers\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the index of the number to delete\n");
    scanf("%d", &index);

    a[index] = 0;

    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
