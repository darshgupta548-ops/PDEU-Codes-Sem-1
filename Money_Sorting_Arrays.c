#include <stdio.h>

int main() {
    int num, tnum, sum=0;
    int m[] = {500,200,100,50,20,10,5,2,1};
    int a[9];
    printf("Enter a Number\n");
    scanf("%d",&num);
    tnum = num;
    
    for(int i=0; i<9; i++){
        a[i] = tnum/m[i];
        tnum = tnum%m[i];
        sum = sum+a[i];
    }
    
    for(int i=0; i<9; i++){
        if(a[i]!=0){
        printf("%d notes of %d \n", a[i], m[i]);
        }
    }
    printf("%d is the minimum number of notes to make %d", sum, num);
    
    return 0;
}
