#include <stdio.h>

int main() {
    int a[4][4], b[4][4];
    
    printf("Enter 4x4 matrix\n");
        for(int i=0; i<4; i++ ){
            for(int j=0; j<4; j++){
                scanf("%d",&a[i][j]);
            }
        }

        printf("\n");
        printf("A\n");
        for(int i=0; i<4; i++ ){
            for(int j=0; j<4; j++){
                printf("%d   ",a[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
        printf("A Transpose\n");
        for(int i=0; i<4; i++ ){
            for(int j=0; j<4; j++){
                b[i][j] = a[j][i];
                printf("%d   ",b[i][j]);
            }
            printf("\n");
        }
        
    return 0;
}
