#include <stdio.h> // Assignment No. 8,9,10

int main(){

float rupees, dollars;

printf("Enter Ruppes \n");
scanf("%f", &rupees);
printf("%f rupees equal to %f dollars\n", rupees, rupees/80);

printf("Enter Dollars \n");
scanf("%f", &dollars);
printf("%f dollars equal to %f rupees and %f pounds\n", dollars, dollars*80, dollars/1.36);

return 0;
}