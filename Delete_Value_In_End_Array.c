#include <stdio.h>

int main() {
    int a[5], count=0, i, ins_num;
    printf("Enter 5 Numbers \n");
    for(i=0; i<5; i++){
    scanf("%d",&a[i]);
    }
        for (i = 4; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = 0;
        printf("\n");
        for(i=0;i<5;i++){
            printf("%d \n",a[i]);
        }
    return 0;
}