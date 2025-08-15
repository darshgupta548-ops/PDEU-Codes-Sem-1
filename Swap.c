#include <stdio.h> // Assignment No. 24

int main(){

int a, b, c;

printf("Enter Two Numbers \n");
scanf("%d %d", &a, &b);

c = a ;
a = b ;
b = c ;


printf("First Number is %d and Second Number is %d\n", a, b);

return 0;
}