#include <stdio.h>

int main() {
    int a[5], b[5];
    
    printf("Enter 5 Numbers\n");
        for(int i=0; i<5; i++){
            scanf("%d",&a[i]);
        }

    for(int i=0, j=4; i<5; i++, j--){
            b[j] = a[i];
        }
    for(int j=0; j<5; j++){
            printf("%d    ",b[j]);
        }
    return 0;
}