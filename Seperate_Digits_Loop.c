#include <stdio.h>

int main(){
int num, digit;

printf("Enter A Number\n");
scanf("%d",&num);

for (; num > 0; num = num/10){

    digit = num%10;
    printf("%d, ",digit);
    /*Here If Number is 953... 953/10 = 95 and 95%10 = 5 and then 95 enters the loop and so on*/
}

return 0;
}