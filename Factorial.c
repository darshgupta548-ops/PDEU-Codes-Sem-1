#include <stdio.h> // Loop Assignment No. 10

int main(){
int n, fact = 1;
printf("Enter a number \n");
scanf("%d", &n);
for(int i=n ; i>=1; i--) { 
   fact = fact*i;
}

printf("The Factorial of %d is %d", n, fact);

return 0;
}