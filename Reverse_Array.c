#include <stdio.h>

int main() {
    int a[3], b[3], *aptr, *bptr;
    printf("ENTER 3 NUMBERS\n");
    for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
    }
    aptr = a;
    bptr = b;
    for(int i=0;i<3;i++){
        *(bptr+(2-i)) = *(aptr+i) ; 
    }
    printf("reversed array\n");
    for(int i=0;i<3;i++){
    printf("%d ",b[i]);
    }
    
    return 0;
}
