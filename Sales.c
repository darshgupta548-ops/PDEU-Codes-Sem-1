#include <stdio.h> // Assignment No. 22

int main(){

float gross, discount, net;

printf("Enter Gross Sales \n");
scanf("%f", &gross);

discount = 0.1*(gross);
net = gross - discount; 

printf("The Net Sales are %f\n", net);


return 0;
}