#include <stdio.h> // Loop Assignment No,20

int main() {
int sum = 0, i=1;
    while(3*i < 100){
        sum = sum + (3*i);
        i++;
    } 

    printf("%d", sum);
    return 0;
}
