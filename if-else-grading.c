#include <stdio.h> // If-Else Assignment No. 6

int main(){

float Sub1, Sub2, Sub3, Avg;

printf("Enter Marks in Physics \n");
scanf("%f", &Sub1);
printf("Enter Marks in Chemistry \n");
scanf("%f", &Sub2);
printf("Enter Marks in Maths \n");
scanf("%f", &Sub3);

Avg = (Sub1+Sub2+Sub3)/3 ;

if (Avg >= 70) {
    printf("Distinction");
}
else if (Avg >= 60 && Avg < 70){
    printf("First Class");
}
else if (Avg >= 50 && Avg < 60){
    printf("Second Class");
}
else if (Avg >= 35 && Avg < 50){
    printf("Third Class");
}
else {
    printf("Fail");
}
return 0;
}