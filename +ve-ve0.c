#include <stdio.h> // Assignment No.17
int main(){
    int p = 0, n = 0, z = 0, num;
    
    for(int i=1; i<=10; i++){
        printf("Enter A Number\n");
        scanf("%d", &num);
        if(num > 0){
            p = p + 1;
        }        
        else if (num < 0){
            n = n+1;
        }
        else{
            z = z+1;
        }
    }
    printf("%d positives %d negatives and %d zeroes", p, n, z);
    return 0;
}