#include <stdio.h>

int main() {
    int a[5], i, num, count = 0;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to search:\n");
    scanf("%d", &num);

    printf("%d occurs at index ", num);

    for(i = 0; i < 5; i++) {
        if(a[i] == num) {
            if(count > 0) {
                printf(", ");
            }
            printf("%d", i);
            count++;
        }
    }

    if(count == 0) {
        printf("Value not found");
    } else {
        printf("\nIt occurs %d times ", count);
    }

    return 0;
}
