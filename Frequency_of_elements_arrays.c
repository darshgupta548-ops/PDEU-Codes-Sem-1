#include <stdio.h>

int main() {
    int a[10];
    
    printf("Enter 10 Numbers\n");
        for(int i=0; i<10; i++){
            scanf("%d",&a[i]);
        }
    
    for(int i = 0; i<10; i++){
        if(a[i] == -1){
            continue;
        }
        int count = 1;
        for(int j=i+1; j<10; j++){
            if(a[j]==a[i]){
            count++;
            a[j] = -1;
            }
        }
        printf("Frequency of %d is %d  \n", a[i], count);
       
    }

    return 0;
}