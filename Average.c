#include <stdio.h> // Assignment No. 23

int main(){

float Sub1, Sub2, Sub3, Avg;

printf("Enter Marks in Physics \n");
scanf("%f", &Sub1);
printf("Enter Marks in Chemistry \n");
scanf("%f", &Sub2);
printf("Enter Marks in Maths \n");
scanf("%f", &Sub3);

Avg = (Sub1+Sub2+Sub3)/3 ;

printf("The Sum of Subjects is %f and the Average is %f\n", Sub1+Sub2+Sub3, Avg);

return 0;
}