#include <stdio.h>

int main() {
    int a, b, c, *aptr, *bptr, temp;
    printf("Enter 2 numbers");
    scanf("%d %d", &a, &b);
    aptr = &a;
    bptr = &b;

    temp = a;
    *aptr = b;
    *bptr = temp;
    

    printf ("%d %d", *aptr, *bptr);
    return 0;
}
