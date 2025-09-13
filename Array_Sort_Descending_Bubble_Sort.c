#include <stdio.h>

int main() {
    int num[5], temp;

    printf("Enter 5 Numbers\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    for(int j = 5; j > 1; j--) {
        for(int i = 0; i < j - 1; i++) {
            if(num[i] < num[i+1]) {
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
    }

    for(int r = 0; r < 5; r++) {
        printf("%d ", num[r]);
    }

    return 0;
}
