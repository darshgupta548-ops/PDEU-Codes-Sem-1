#include <stdio.h>

int main() {
    int a[5], count=0, i, ins_num;
    printf("Enter 5 Numbers \n");
    for(i=0; i<5; i++){
    scanf("%d",&a[i]);
    }
    if(a[4]==0){
        printf("Enter Number to Insert in begining\n");
        scanf("%d",&ins_num);
            for (i = 4; i > 0; i--) {
                a[i] = a[i - 1];
            }
            a[0] = ins_num;
        for(i=0;i<5;i++){
            printf("%d \n",a[i]);
        }
    }
    else{
        printf("The Array is Full\n");
    }
    
    
    
    
    
    
    return 0;
}
