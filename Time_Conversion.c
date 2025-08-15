#include <stdio.h> // Assignment No. 6,7

int main(){

float hour, min;

printf("Enter Hours \n");
scanf("%f", &hour);
printf("%f hours equal to %f minutes\n", hour, hour*60);

printf("Enter Minutes \n");
scanf("%f", &min);
printf("%f minutes equal to %f hours\n", min, min/60);

return 0;
}