#include <stdio.h>

int main() {
    int a[3][3], *a_ptr, largest, smallest;
    printf("Enter 9 Numbers\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
        a_ptr = &a[0][0];
        largest = *a_ptr;
        smallest = *a_ptr;

    for(int i=0; i<9; i++){
            if(*a_ptr <= *(a_ptr+i)){
                largest = *(a_ptr+i);
            }
            else{
                smallest = *(a_ptr+i);
            }
    }

    printf("The largest and the smallest numbers are %d and %d \n", largest, smallest);
    return 0;
}