#include <stdio.h>

int main() {
    int a[3], b[3], *aptr;
    printf("ENTER 3 NUMBERS\n");
    for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
    }
    aptr = a;
    for(int i=0;i<3;i++){
        b[i] = *(aptr+i) ; 
    }
    printf("Copied array\n");
    for(int i=0;i<3;i++){
    printf("%d",b[i]);
    }
    
    return 0;
}
