#include <stdio.h>

int main(){
    int num, count = 0, pow_of_10 = 1;

    printf("\nAutomorphic Numbers Are the Numbers whose square's last digits are the number itself\n");
    printf("Enter a Number to check: ");
    scanf("%d", &num);

    int original_num = num;

    for(int tnum = num; tnum > 0; tnum = tnum / 10){
        count++;
    }

    for(int i = 1; i <= count; i++){
        pow_of_10 = 10 * pow_of_10;
    }

    int square = original_num * original_num;

    if(square % pow_of_10 == original_num){
        printf("The Number %d is Automorphic\n", original_num);
    }
    else{
        printf("The Number %d is NOT Automorphic\n", original_num);
    }

    return 0;
}
