#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];
    int *pa, *pb, *pc;
    
    printf("Enter 2x2 matrix\n");
        for(int i=0; i<2; i++ ){
            for(int j=0; j<2; j++){
                pa = &a[i][j];
                scanf("%d",pa);
            }
        }
        
    printf("Enter 2x2 matrix\n");
        for(int i=0; i<2; i++ ){
            for(int j=0; j<2; j++){
                pb = &b[i][j];
                scanf("%d",pb);
            }
        }
      
      printf("\n");
        
        for(int i=0; i<2; i++ ){
            for(int j=0; j<2; j++){
                pa = &a[i][j];
                pb = &b[i][j];
                pc= &c[i][j];
                *pc = *pa + *pb;
                printf("%d   ",*pc);
            }
            printf("\n");
    }
          printf("\n");
    for(int i=0; i<2; i++ ){
            for(int j=0; j<2; j++){
                pa = &a[i][j];
                pb = &b[i][j];
                pc= &c[i][j];
                *pc = *pa - *pb;
                printf("%d   ",*pc);
            }
            printf("\n");
    }
    return 0;
}