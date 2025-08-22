#include <stdio.h> // Loop Assignment No. 7

int main(){

int n, sum=0;
printf("Enter a number to find Sum till N Natural Numbers \n");
scanf("%d", &n);

for(int i=1 ; i<=n; i++) {
   sum = sum+i;
}

printf("The Sum of %d Natural Numbers is %d", n, sum);

return 0;
}