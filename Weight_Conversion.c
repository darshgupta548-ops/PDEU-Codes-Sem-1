#include <stdio.h> // Assignment No. 11,12

int main(){

float gram, kilogram;

printf("Enter kilograms \n");
scanf("%f", &kilogram);
printf("%f kgs equal to %f gs\n", kilogram, kilogram*1000);

printf("Enter Grams \n");
scanf("%f", &gram);
printf("%f grams equal to %f kilograms\n", gram, gram/1000);

return 0;
}