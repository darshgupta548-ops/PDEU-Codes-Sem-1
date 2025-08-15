#include <stdio.h> // Assignment No. 23

int main(){

int num1, num2;

printf("Enter Two Numbers \n");
scanf("%d %d", &num1, &num2);

if(num1 > num2){
    printf("%d is greater than %d\n", num1, num2);
}
else {
printf("%d is greater than %d\n", num2, num1);
}

return 0;
}