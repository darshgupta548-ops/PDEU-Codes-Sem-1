#include <stdio.h>

int main(){
int num, digit, sum = 0;

printf("Enter A Number\n");
scanf("%d",&num);
printf("The Sum of digits of %d is ",num);

for(; num > 0; num = num/10){

    digit = num%10;
    sum = sum + digit;

}

printf("%d",sum);

return 0;
}