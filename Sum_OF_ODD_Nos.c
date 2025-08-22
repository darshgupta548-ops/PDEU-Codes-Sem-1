#include <stdio.h> // Loop Assignment No. 8

int main(){
int n, sum = 0;
printf("Enter a number \n");
scanf("%d", &n);
for(int i=1 ; i<=n; i++) { 
   sum = sum + (2*i)+1;
}

printf("The Sum of First %d Odd Numbers is %d", n, sum);

return 0;
}