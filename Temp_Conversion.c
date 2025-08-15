#include <stdio.h> // Assignment No. 14,15

int main(){

float cel, far;

printf("Enter Temp in Celcius \n");
scanf("%f", &cel);

far = (1.8*cel)+32;

printf("%f Celcius equal to %f Farenheit\n", cel, far);

printf("Enter Temp. In Farenheit \n");
scanf("%f", &far);

cel = ((far-32)*5)/9;

printf("%f Farenheit equal to %f Celcius\n", far, cel);

return 0;
}