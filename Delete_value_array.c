#include <stdio.h>

int main() {
    int a[5], i, n;

    printf("Enter 5 numbers (use 0 as empty slots):\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter a Value to Delete\n");
    scanf("%d",&n);
    for(i=0; i<5; i++){
        if(a[i] == n){
            a[i] = 0;
        }
    }

    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}