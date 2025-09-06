#include <stdio.h>

int main(){
int num, digit;

printf("Enter A Number\n");
scanf("%d",&num);
printf("%d |[|]| ",num);
for (; num > 0; num = num/10){

    digit = num%10;
    printf("%d",digit);
}

return 0;
}