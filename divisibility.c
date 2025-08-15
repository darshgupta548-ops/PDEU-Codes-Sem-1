#include <stdio.h>// If-Else Assignment No. 3
int main() {
    int num1;
    printf("Enter A Number\n");
    scanf("%d", &num1);
    if (num1 % 7 == 0) {
        printf("The Number is Divisible by 7");
    }
    else {
        printf("The Number is Not Divisible by 7");
    }
    return 0;
}