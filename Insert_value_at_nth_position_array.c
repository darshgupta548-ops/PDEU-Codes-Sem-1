#include <stdio.h>

int main() {
    int a[5], count=0, i, ins_num, index, slot;
    printf("Enter 5 Numbers \n");
    for(i=0; i<5; i++){
    scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        if(a[i] == 0){
            count = 1;
            slot = i;
        }
    }
    if(count==1){
        printf("Enter Number to Insert\n");
        scanf("%d",&ins_num);
        printf("Enter The position / index of number starting from 0\n");
        scanf("%d",&index);
        
        for(i = slot; i > index; i--) {
            a[i] = a[i - 1];
        }
            a[index] = ins_num;
            printf("\n");
        for(i=0;i<5;i++){
            printf("%d \n",a[i]);
        }
    }
    else{
        printf("The Array is Full\n");
    }
    return 0;
}