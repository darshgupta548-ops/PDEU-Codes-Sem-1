#include <stdio.h> // Assignment No. 21

int main(){

float gross, allowance, deduction, net;

printf("Enter Gross Salary \n");
scanf("%f", &gross);

allowance = 0.1*(gross);
deduction = 0.03*(gross);
net = gross + allowance - deduction ; 

printf("The Net Salary is %f\n", net);


return 0;
}