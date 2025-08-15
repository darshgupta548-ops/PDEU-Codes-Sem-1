#include <stdio.h> // Assignment No. 1,2,3,4,5

int main(){

float num1, num2;

printf("Enter First Number \n");
scanf("%f", &num1);
printf("Enter First Number \n");
scanf("%f", &num2);

printf("The Addition of %f and %f is %f\n", num1, num2, num1+num2);
printf("The Subtraction of %f and %f is %f\n", num1, num2, num1-num2);
printf("The Multiplication of %f and %f is %f\n", num1, num2, num1*num2);
printf("The Division of %f and %f is %f\n", num1, num2, num1/num2);

return 0;
}