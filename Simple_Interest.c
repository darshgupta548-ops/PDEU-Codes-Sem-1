#include <stdio.h> // Assignment No. 6,7

int main(){

float P, R, T, SI;

printf("Enter Principle \n");
scanf("%f", &P);
printf("Enter Rate OF Interest \n");
scanf("%f", &R);
printf("Enter Time Period \n");
scanf("%f", &T);

SI = (P*R*T)*0.01;

printf("%f is the Simple Interest\n", SI);

return 0;
}